
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_27.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_34.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_31.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_38.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_28.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_39.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_l2vpn_oper {

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Ethernet::Ethernet()
    :
    xconnect_tags{YType::uint8, "xconnect-tags"}
{

    yang_name = "ethernet"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Ethernet::~Ethernet()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Ethernet::has_data() const
{
    if (is_presence_container) return true;
    return xconnect_tags.is_set;
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xconnect_tags.yfilter);
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xconnect_tags.is_set || is_set(xconnect_tags.yfilter)) leaf_name_data.push_back(xconnect_tags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags = value;
        xconnect_tags.value_namespace = name_space;
        xconnect_tags.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect-tags")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::Vlan()
    :
    xconnect_tags{YType::uint8, "xconnect-tags"},
    vlan_rewrite_tag{YType::uint16, "vlan-rewrite-tag"},
    simple_efp{YType::uint8, "simple-efp"},
    encapsulation_type{YType::uint8, "encapsulation-type"},
    outer_tag{YType::uint16, "outer-tag"}
        ,
    rewrite_tag(this, {})
    , vlan_range(this, {})
{

    yang_name = "vlan"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::~Vlan()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rewrite_tag.len(); index++)
    {
        if(rewrite_tag[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vlan_range.len(); index++)
    {
        if(vlan_range[index]->has_data())
            return true;
    }
    return xconnect_tags.is_set
	|| vlan_rewrite_tag.is_set
	|| simple_efp.is_set
	|| encapsulation_type.is_set
	|| outer_tag.is_set;
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::has_operation() const
{
    for (std::size_t index=0; index<rewrite_tag.len(); index++)
    {
        if(rewrite_tag[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vlan_range.len(); index++)
    {
        if(vlan_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(xconnect_tags.yfilter)
	|| ydk::is_set(vlan_rewrite_tag.yfilter)
	|| ydk::is_set(simple_efp.yfilter)
	|| ydk::is_set(encapsulation_type.yfilter)
	|| ydk::is_set(outer_tag.yfilter);
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xconnect_tags.is_set || is_set(xconnect_tags.yfilter)) leaf_name_data.push_back(xconnect_tags.get_name_leafdata());
    if (vlan_rewrite_tag.is_set || is_set(vlan_rewrite_tag.yfilter)) leaf_name_data.push_back(vlan_rewrite_tag.get_name_leafdata());
    if (simple_efp.is_set || is_set(simple_efp.yfilter)) leaf_name_data.push_back(simple_efp.get_name_leafdata());
    if (encapsulation_type.is_set || is_set(encapsulation_type.yfilter)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());
    if (outer_tag.is_set || is_set(outer_tag.yfilter)) leaf_name_data.push_back(outer_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rewrite-tag")
    {
        auto ent_ = std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::RewriteTag>();
        ent_->parent = this;
        rewrite_tag.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vlan-range")
    {
        auto ent_ = std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange>();
        ent_->parent = this;
        vlan_range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rewrite_tag.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vlan_range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags = value;
        xconnect_tags.value_namespace = name_space;
        xconnect_tags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-rewrite-tag")
    {
        vlan_rewrite_tag = value;
        vlan_rewrite_tag.value_namespace = name_space;
        vlan_rewrite_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "simple-efp")
    {
        simple_efp = value;
        simple_efp.value_namespace = name_space;
        simple_efp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type = value;
        encapsulation_type.value_namespace = name_space;
        encapsulation_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-tag")
    {
        outer_tag = value;
        outer_tag.value_namespace = name_space;
        outer_tag.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags.yfilter = yfilter;
    }
    if(value_path == "vlan-rewrite-tag")
    {
        vlan_rewrite_tag.yfilter = yfilter;
    }
    if(value_path == "simple-efp")
    {
        simple_efp.yfilter = yfilter;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type.yfilter = yfilter;
    }
    if(value_path == "outer-tag")
    {
        outer_tag.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rewrite-tag" || name == "vlan-range" || name == "xconnect-tags" || name == "vlan-rewrite-tag" || name == "simple-efp" || name == "encapsulation-type" || name == "outer-tag")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::RewriteTag::RewriteTag()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "rewrite-tag"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::RewriteTag::~RewriteTag()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::RewriteTag::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::RewriteTag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::RewriteTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite-tag";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::RewriteTag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::RewriteTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::RewriteTag::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::RewriteTag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::RewriteTag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::RewriteTag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange::VlanRange()
    :
    lower{YType::uint16, "lower"},
    upper{YType::uint16, "upper"}
{

    yang_name = "vlan-range"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange::~VlanRange()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange::has_data() const
{
    if (is_presence_container) return true;
    return lower.is_set
	|| upper.is_set;
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower.yfilter)
	|| ydk::is_set(upper.yfilter);
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-range";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower.is_set || is_set(lower.yfilter)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.yfilter)) leaf_name_data.push_back(upper.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lower")
    {
        lower = value;
        lower.value_namespace = name_space;
        lower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper")
    {
        upper = value;
        upper.value_namespace = name_space;
        upper.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lower")
    {
        lower.yfilter = yfilter;
    }
    if(value_path == "upper")
    {
        upper.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Vlan::VlanRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lower" || name == "upper")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Tdm::Tdm()
    :
    timeslot_group{YType::str, "timeslot-group"},
    timeslot_rate{YType::uint8, "timeslot-rate"},
    tdm_mode{YType::enumeration, "tdm-mode"}
        ,
    tdm_options(std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions>())
{
    tdm_options->parent = this;

    yang_name = "tdm"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Tdm::~Tdm()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Tdm::has_data() const
{
    if (is_presence_container) return true;
    return timeslot_group.is_set
	|| timeslot_rate.is_set
	|| tdm_mode.is_set
	|| (tdm_options !=  nullptr && tdm_options->has_data());
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Tdm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeslot_group.yfilter)
	|| ydk::is_set(timeslot_rate.yfilter)
	|| ydk::is_set(tdm_mode.yfilter)
	|| (tdm_options !=  nullptr && tdm_options->has_operation());
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Tdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tdm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Tdm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeslot_group.is_set || is_set(timeslot_group.yfilter)) leaf_name_data.push_back(timeslot_group.get_name_leafdata());
    if (timeslot_rate.is_set || is_set(timeslot_rate.yfilter)) leaf_name_data.push_back(timeslot_rate.get_name_leafdata());
    if (tdm_mode.is_set || is_set(tdm_mode.yfilter)) leaf_name_data.push_back(tdm_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Tdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tdm-options")
    {
        if(tdm_options == nullptr)
        {
            tdm_options = std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions>();
        }
        return tdm_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Tdm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tdm_options != nullptr)
    {
        _children["tdm-options"] = tdm_options;
    }

    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Tdm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeslot-group")
    {
        timeslot_group = value;
        timeslot_group.value_namespace = name_space;
        timeslot_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeslot-rate")
    {
        timeslot_rate = value;
        timeslot_rate.value_namespace = name_space;
        timeslot_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tdm-mode")
    {
        tdm_mode = value;
        tdm_mode.value_namespace = name_space;
        tdm_mode.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Tdm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeslot-group")
    {
        timeslot_group.yfilter = yfilter;
    }
    if(value_path == "timeslot-rate")
    {
        timeslot_rate.yfilter = yfilter;
    }
    if(value_path == "tdm-mode")
    {
        tdm_mode.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Tdm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tdm-options" || name == "timeslot-group" || name == "timeslot-rate" || name == "tdm-mode")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions::TdmOptions()
    :
    payload_bytes{YType::uint16, "payload-bytes"},
    bit_rate{YType::uint32, "bit-rate"},
    rtp{YType::enumeration, "rtp"},
    timestamp_mode{YType::enumeration, "timestamp-mode"},
    signalling_packets{YType::uint8, "signalling-packets"},
    cas{YType::uint8, "cas"},
    rtp_header_payload_type{YType::uint8, "rtp-header-payload-type"},
    timestamp_clock_freq{YType::uint16, "timestamp-clock-freq"},
    ssrc{YType::uint32, "ssrc"}
{

    yang_name = "tdm-options"; yang_parent_name = "tdm"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions::~TdmOptions()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions::has_data() const
{
    if (is_presence_container) return true;
    return payload_bytes.is_set
	|| bit_rate.is_set
	|| rtp.is_set
	|| timestamp_mode.is_set
	|| signalling_packets.is_set
	|| cas.is_set
	|| rtp_header_payload_type.is_set
	|| timestamp_clock_freq.is_set
	|| ssrc.is_set;
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(payload_bytes.yfilter)
	|| ydk::is_set(bit_rate.yfilter)
	|| ydk::is_set(rtp.yfilter)
	|| ydk::is_set(timestamp_mode.yfilter)
	|| ydk::is_set(signalling_packets.yfilter)
	|| ydk::is_set(cas.yfilter)
	|| ydk::is_set(rtp_header_payload_type.yfilter)
	|| ydk::is_set(timestamp_clock_freq.yfilter)
	|| ydk::is_set(ssrc.yfilter);
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tdm-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (payload_bytes.is_set || is_set(payload_bytes.yfilter)) leaf_name_data.push_back(payload_bytes.get_name_leafdata());
    if (bit_rate.is_set || is_set(bit_rate.yfilter)) leaf_name_data.push_back(bit_rate.get_name_leafdata());
    if (rtp.is_set || is_set(rtp.yfilter)) leaf_name_data.push_back(rtp.get_name_leafdata());
    if (timestamp_mode.is_set || is_set(timestamp_mode.yfilter)) leaf_name_data.push_back(timestamp_mode.get_name_leafdata());
    if (signalling_packets.is_set || is_set(signalling_packets.yfilter)) leaf_name_data.push_back(signalling_packets.get_name_leafdata());
    if (cas.is_set || is_set(cas.yfilter)) leaf_name_data.push_back(cas.get_name_leafdata());
    if (rtp_header_payload_type.is_set || is_set(rtp_header_payload_type.yfilter)) leaf_name_data.push_back(rtp_header_payload_type.get_name_leafdata());
    if (timestamp_clock_freq.is_set || is_set(timestamp_clock_freq.yfilter)) leaf_name_data.push_back(timestamp_clock_freq.get_name_leafdata());
    if (ssrc.is_set || is_set(ssrc.yfilter)) leaf_name_data.push_back(ssrc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "payload-bytes")
    {
        payload_bytes = value;
        payload_bytes.value_namespace = name_space;
        payload_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bit-rate")
    {
        bit_rate = value;
        bit_rate.value_namespace = name_space;
        bit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtp")
    {
        rtp = value;
        rtp.value_namespace = name_space;
        rtp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp-mode")
    {
        timestamp_mode = value;
        timestamp_mode.value_namespace = name_space;
        timestamp_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signalling-packets")
    {
        signalling_packets = value;
        signalling_packets.value_namespace = name_space;
        signalling_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cas")
    {
        cas = value;
        cas.value_namespace = name_space;
        cas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtp-header-payload-type")
    {
        rtp_header_payload_type = value;
        rtp_header_payload_type.value_namespace = name_space;
        rtp_header_payload_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp-clock-freq")
    {
        timestamp_clock_freq = value;
        timestamp_clock_freq.value_namespace = name_space;
        timestamp_clock_freq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssrc")
    {
        ssrc = value;
        ssrc.value_namespace = name_space;
        ssrc.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "payload-bytes")
    {
        payload_bytes.yfilter = yfilter;
    }
    if(value_path == "bit-rate")
    {
        bit_rate.yfilter = yfilter;
    }
    if(value_path == "rtp")
    {
        rtp.yfilter = yfilter;
    }
    if(value_path == "timestamp-mode")
    {
        timestamp_mode.yfilter = yfilter;
    }
    if(value_path == "signalling-packets")
    {
        signalling_packets.yfilter = yfilter;
    }
    if(value_path == "cas")
    {
        cas.yfilter = yfilter;
    }
    if(value_path == "rtp-header-payload-type")
    {
        rtp_header_payload_type.yfilter = yfilter;
    }
    if(value_path == "timestamp-clock-freq")
    {
        timestamp_clock_freq.yfilter = yfilter;
    }
    if(value_path == "ssrc")
    {
        ssrc.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Tdm::TdmOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "payload-bytes" || name == "bit-rate" || name == "rtp" || name == "timestamp-mode" || name == "signalling-packets" || name == "cas" || name == "rtp-header-payload-type" || name == "timestamp-clock-freq" || name == "ssrc")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Atm::Atm()
    :
    maximum_number_cells_packed{YType::uint16, "maximum-number-cells-packed"},
    maximum_number_cells_un_packed{YType::uint16, "maximum-number-cells-un-packed"},
    atm_mode{YType::enumeration, "atm-mode"},
    vpi{YType::uint16, "vpi"},
    vci{YType::uint16, "vci"}
{

    yang_name = "atm"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Atm::~Atm()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Atm::has_data() const
{
    if (is_presence_container) return true;
    return maximum_number_cells_packed.is_set
	|| maximum_number_cells_un_packed.is_set
	|| atm_mode.is_set
	|| vpi.is_set
	|| vci.is_set;
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Atm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_number_cells_packed.yfilter)
	|| ydk::is_set(maximum_number_cells_un_packed.yfilter)
	|| ydk::is_set(atm_mode.yfilter)
	|| ydk::is_set(vpi.yfilter)
	|| ydk::is_set(vci.yfilter);
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Atm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_number_cells_packed.is_set || is_set(maximum_number_cells_packed.yfilter)) leaf_name_data.push_back(maximum_number_cells_packed.get_name_leafdata());
    if (maximum_number_cells_un_packed.is_set || is_set(maximum_number_cells_un_packed.yfilter)) leaf_name_data.push_back(maximum_number_cells_un_packed.get_name_leafdata());
    if (atm_mode.is_set || is_set(atm_mode.yfilter)) leaf_name_data.push_back(atm_mode.get_name_leafdata());
    if (vpi.is_set || is_set(vpi.yfilter)) leaf_name_data.push_back(vpi.get_name_leafdata());
    if (vci.is_set || is_set(vci.yfilter)) leaf_name_data.push_back(vci.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Atm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Atm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-number-cells-packed")
    {
        maximum_number_cells_packed = value;
        maximum_number_cells_packed.value_namespace = name_space;
        maximum_number_cells_packed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-number-cells-un-packed")
    {
        maximum_number_cells_un_packed = value;
        maximum_number_cells_un_packed.value_namespace = name_space;
        maximum_number_cells_un_packed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atm-mode")
    {
        atm_mode = value;
        atm_mode.value_namespace = name_space;
        atm_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpi")
    {
        vpi = value;
        vpi.value_namespace = name_space;
        vpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vci")
    {
        vci = value;
        vci.value_namespace = name_space;
        vci.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Atm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-number-cells-packed")
    {
        maximum_number_cells_packed.yfilter = yfilter;
    }
    if(value_path == "maximum-number-cells-un-packed")
    {
        maximum_number_cells_un_packed.yfilter = yfilter;
    }
    if(value_path == "atm-mode")
    {
        atm_mode.yfilter = yfilter;
    }
    if(value_path == "vpi")
    {
        vpi.yfilter = yfilter;
    }
    if(value_path == "vci")
    {
        vci.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Atm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-number-cells-packed" || name == "maximum-number-cells-un-packed" || name == "atm-mode" || name == "vpi" || name == "vci")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Fr::Fr()
    :
    fr_mode{YType::enumeration, "fr-mode"},
    dlci{YType::uint32, "dlci"}
{

    yang_name = "fr"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Fr::~Fr()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Fr::has_data() const
{
    if (is_presence_container) return true;
    return fr_mode.is_set
	|| dlci.is_set;
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Fr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fr_mode.yfilter)
	|| ydk::is_set(dlci.yfilter);
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Fr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Fr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fr_mode.is_set || is_set(fr_mode.yfilter)) leaf_name_data.push_back(fr_mode.get_name_leafdata());
    if (dlci.is_set || is_set(dlci.yfilter)) leaf_name_data.push_back(dlci.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Fr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Fr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Fr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fr-mode")
    {
        fr_mode = value;
        fr_mode.value_namespace = name_space;
        fr_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dlci")
    {
        dlci = value;
        dlci.value_namespace = name_space;
        dlci.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Fr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fr-mode")
    {
        fr_mode.yfilter = yfilter;
    }
    if(value_path == "dlci")
    {
        dlci.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::Fr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fr-mode" || name == "dlci")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::PseudowireEther()
    :
    is_valid{YType::boolean, "is-valid"},
    internal_label{YType::uint32, "internal-label"}
        ,
    interface_list(std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList>())
{
    interface_list->parent = this;

    yang_name = "pseudowire-ether"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::~PseudowireEther()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::has_data() const
{
    if (is_presence_container) return true;
    return is_valid.is_set
	|| internal_label.is_set
	|| (interface_list !=  nullptr && interface_list->has_data());
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| (interface_list !=  nullptr && interface_list->has_operation());
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-ether";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-list")
    {
        if(interface_list == nullptr)
        {
            interface_list = std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList>();
        }
        return interface_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface_list != nullptr)
    {
        _children["interface-list"] = interface_list;
    }

    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-list" || name == "is-valid" || name == "internal-label")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::InterfaceList()
    :
    interface_list_name{YType::str, "interface-list-name"},
    interface_list_id{YType::uint32, "interface-list-id"}
        ,
    interface(this, {})
{

    yang_name = "interface-list"; yang_parent_name = "pseudowire-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::~InterfaceList()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return interface_list_name.is_set
	|| interface_list_id.is_set;
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_list_name.yfilter)
	|| ydk::is_set(interface_list_id.yfilter);
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_list_name.is_set || is_set(interface_list_name.yfilter)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());
    if (interface_list_id.is_set || is_set(interface_list_id.yfilter)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
        interface_list_name.value_namespace = name_space;
        interface_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
        interface_list_id.value_namespace = name_space;
        interface_list_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-list-name")
    {
        interface_list_name.yfilter = yfilter;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "interface-list-name" || name == "interface-list-id")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    replicate_status{YType::enumeration, "replicate-status"}
{

    yang_name = "interface"; yang_parent_name = "interface-list"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::~Interface()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| replicate_status.is_set;
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(replicate_status.yfilter);
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (replicate_status.is_set || is_set(replicate_status.yfilter)) leaf_name_data.push_back(replicate_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replicate-status")
    {
        replicate_status = value;
        replicate_status.value_namespace = name_space;
        replicate_status.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "replicate-status")
    {
        replicate_status.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireEther::InterfaceList::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "replicate-status")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::PseudowireIw()
    :
    is_valid{YType::boolean, "is-valid"},
    internal_label{YType::uint32, "internal-label"}
        ,
    interface_list(std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList>())
{
    interface_list->parent = this;

    yang_name = "pseudowire-iw"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::~PseudowireIw()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::has_data() const
{
    if (is_presence_container) return true;
    return is_valid.is_set
	|| internal_label.is_set
	|| (interface_list !=  nullptr && interface_list->has_data());
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| (interface_list !=  nullptr && interface_list->has_operation());
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-iw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-list")
    {
        if(interface_list == nullptr)
        {
            interface_list = std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList>();
        }
        return interface_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface_list != nullptr)
    {
        _children["interface-list"] = interface_list;
    }

    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-list" || name == "is-valid" || name == "internal-label")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::InterfaceList()
    :
    interface_list_name{YType::str, "interface-list-name"},
    interface_list_id{YType::uint32, "interface-list-id"}
        ,
    interface(this, {})
{

    yang_name = "interface-list"; yang_parent_name = "pseudowire-iw"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::~InterfaceList()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return interface_list_name.is_set
	|| interface_list_id.is_set;
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_list_name.yfilter)
	|| ydk::is_set(interface_list_id.yfilter);
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_list_name.is_set || is_set(interface_list_name.yfilter)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());
    if (interface_list_id.is_set || is_set(interface_list_id.yfilter)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
        interface_list_name.value_namespace = name_space;
        interface_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
        interface_list_id.value_namespace = name_space;
        interface_list_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-list-name")
    {
        interface_list_name.yfilter = yfilter;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "interface-list-name" || name == "interface-list-id")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    replicate_status{YType::enumeration, "replicate-status"}
{

    yang_name = "interface"; yang_parent_name = "interface-list"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::~Interface()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| replicate_status.is_set;
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(replicate_status.yfilter);
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (replicate_status.is_set || is_set(replicate_status.yfilter)) leaf_name_data.push_back(replicate_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replicate-status")
    {
        replicate_status = value;
        replicate_status.value_namespace = name_space;
        replicate_status.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "replicate-status")
    {
        replicate_status.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalInterface::Parameters::PseudowireIw::InterfaceList::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "replicate-status")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::RemoteInterface()
    :
    name{YType::str, "name"},
    mtu{YType::uint32, "mtu"},
    payload_bytes{YType::uint16, "payload-bytes"}
        ,
    parameters(std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters>())
{
    parameters->parent = this;

    yang_name = "remote-interface"; yang_parent_name = "pseudowire"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::~RemoteInterface()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| mtu.is_set
	|| payload_bytes.is_set
	|| (parameters !=  nullptr && parameters->has_data());
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(payload_bytes.yfilter)
	|| (parameters !=  nullptr && parameters->has_operation());
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (payload_bytes.is_set || is_set(payload_bytes.yfilter)) leaf_name_data.push_back(payload_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "parameters")
    {
        if(parameters == nullptr)
        {
            parameters = std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters>();
        }
        return parameters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(parameters != nullptr)
    {
        _children["parameters"] = parameters;
    }

    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload-bytes")
    {
        payload_bytes = value;
        payload_bytes.value_namespace = name_space;
        payload_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "payload-bytes")
    {
        payload_bytes.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "parameters" || name == "name" || name == "mtu" || name == "payload-bytes")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Parameters()
    :
    type{YType::enumeration, "type"}
        ,
    ethernet(std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Ethernet>())
    , vlan(std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan>())
    , tdm(std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm>())
    , atm(std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Atm>())
    , fr(std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Fr>())
    , pseudowire_ether(std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther>())
    , pseudowire_iw(std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw>())
{
    ethernet->parent = this;
    vlan->parent = this;
    tdm->parent = this;
    atm->parent = this;
    fr->parent = this;
    pseudowire_ether->parent = this;
    pseudowire_iw->parent = this;

    yang_name = "parameters"; yang_parent_name = "remote-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::~Parameters()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (ethernet !=  nullptr && ethernet->has_data())
	|| (vlan !=  nullptr && vlan->has_data())
	|| (tdm !=  nullptr && tdm->has_data())
	|| (atm !=  nullptr && atm->has_data())
	|| (fr !=  nullptr && fr->has_data())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_data())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_data());
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation())
	|| (tdm !=  nullptr && tdm->has_operation())
	|| (atm !=  nullptr && atm->has_operation())
	|| (fr !=  nullptr && fr->has_operation())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_operation())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_operation());
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan>();
        }
        return vlan;
    }

    if(child_yang_name == "tdm")
    {
        if(tdm == nullptr)
        {
            tdm = std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm>();
        }
        return tdm;
    }

    if(child_yang_name == "atm")
    {
        if(atm == nullptr)
        {
            atm = std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Atm>();
        }
        return atm;
    }

    if(child_yang_name == "fr")
    {
        if(fr == nullptr)
        {
            fr = std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Fr>();
        }
        return fr;
    }

    if(child_yang_name == "pseudowire-ether")
    {
        if(pseudowire_ether == nullptr)
        {
            pseudowire_ether = std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther>();
        }
        return pseudowire_ether;
    }

    if(child_yang_name == "pseudowire-iw")
    {
        if(pseudowire_iw == nullptr)
        {
            pseudowire_iw = std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw>();
        }
        return pseudowire_iw;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ethernet != nullptr)
    {
        _children["ethernet"] = ethernet;
    }

    if(vlan != nullptr)
    {
        _children["vlan"] = vlan;
    }

    if(tdm != nullptr)
    {
        _children["tdm"] = tdm;
    }

    if(atm != nullptr)
    {
        _children["atm"] = atm;
    }

    if(fr != nullptr)
    {
        _children["fr"] = fr;
    }

    if(pseudowire_ether != nullptr)
    {
        _children["pseudowire-ether"] = pseudowire_ether;
    }

    if(pseudowire_iw != nullptr)
    {
        _children["pseudowire-iw"] = pseudowire_iw;
    }

    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet" || name == "vlan" || name == "tdm" || name == "atm" || name == "fr" || name == "pseudowire-ether" || name == "pseudowire-iw" || name == "type")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Ethernet::Ethernet()
    :
    xconnect_tags{YType::uint8, "xconnect-tags"}
{

    yang_name = "ethernet"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Ethernet::~Ethernet()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Ethernet::has_data() const
{
    if (is_presence_container) return true;
    return xconnect_tags.is_set;
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xconnect_tags.yfilter);
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xconnect_tags.is_set || is_set(xconnect_tags.yfilter)) leaf_name_data.push_back(xconnect_tags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags = value;
        xconnect_tags.value_namespace = name_space;
        xconnect_tags.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect-tags")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::Vlan()
    :
    xconnect_tags{YType::uint8, "xconnect-tags"},
    vlan_rewrite_tag{YType::uint16, "vlan-rewrite-tag"},
    simple_efp{YType::uint8, "simple-efp"},
    encapsulation_type{YType::uint8, "encapsulation-type"},
    outer_tag{YType::uint16, "outer-tag"}
        ,
    rewrite_tag(this, {})
    , vlan_range(this, {})
{

    yang_name = "vlan"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::~Vlan()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rewrite_tag.len(); index++)
    {
        if(rewrite_tag[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vlan_range.len(); index++)
    {
        if(vlan_range[index]->has_data())
            return true;
    }
    return xconnect_tags.is_set
	|| vlan_rewrite_tag.is_set
	|| simple_efp.is_set
	|| encapsulation_type.is_set
	|| outer_tag.is_set;
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::has_operation() const
{
    for (std::size_t index=0; index<rewrite_tag.len(); index++)
    {
        if(rewrite_tag[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vlan_range.len(); index++)
    {
        if(vlan_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(xconnect_tags.yfilter)
	|| ydk::is_set(vlan_rewrite_tag.yfilter)
	|| ydk::is_set(simple_efp.yfilter)
	|| ydk::is_set(encapsulation_type.yfilter)
	|| ydk::is_set(outer_tag.yfilter);
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xconnect_tags.is_set || is_set(xconnect_tags.yfilter)) leaf_name_data.push_back(xconnect_tags.get_name_leafdata());
    if (vlan_rewrite_tag.is_set || is_set(vlan_rewrite_tag.yfilter)) leaf_name_data.push_back(vlan_rewrite_tag.get_name_leafdata());
    if (simple_efp.is_set || is_set(simple_efp.yfilter)) leaf_name_data.push_back(simple_efp.get_name_leafdata());
    if (encapsulation_type.is_set || is_set(encapsulation_type.yfilter)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());
    if (outer_tag.is_set || is_set(outer_tag.yfilter)) leaf_name_data.push_back(outer_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rewrite-tag")
    {
        auto ent_ = std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag>();
        ent_->parent = this;
        rewrite_tag.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vlan-range")
    {
        auto ent_ = std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange>();
        ent_->parent = this;
        vlan_range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rewrite_tag.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vlan_range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags = value;
        xconnect_tags.value_namespace = name_space;
        xconnect_tags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-rewrite-tag")
    {
        vlan_rewrite_tag = value;
        vlan_rewrite_tag.value_namespace = name_space;
        vlan_rewrite_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "simple-efp")
    {
        simple_efp = value;
        simple_efp.value_namespace = name_space;
        simple_efp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type = value;
        encapsulation_type.value_namespace = name_space;
        encapsulation_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-tag")
    {
        outer_tag = value;
        outer_tag.value_namespace = name_space;
        outer_tag.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags.yfilter = yfilter;
    }
    if(value_path == "vlan-rewrite-tag")
    {
        vlan_rewrite_tag.yfilter = yfilter;
    }
    if(value_path == "simple-efp")
    {
        simple_efp.yfilter = yfilter;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type.yfilter = yfilter;
    }
    if(value_path == "outer-tag")
    {
        outer_tag.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rewrite-tag" || name == "vlan-range" || name == "xconnect-tags" || name == "vlan-rewrite-tag" || name == "simple-efp" || name == "encapsulation-type" || name == "outer-tag")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag::RewriteTag()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "rewrite-tag"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag::~RewriteTag()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite-tag";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::RewriteTag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::VlanRange()
    :
    lower{YType::uint16, "lower"},
    upper{YType::uint16, "upper"}
{

    yang_name = "vlan-range"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::~VlanRange()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::has_data() const
{
    if (is_presence_container) return true;
    return lower.is_set
	|| upper.is_set;
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower.yfilter)
	|| ydk::is_set(upper.yfilter);
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-range";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower.is_set || is_set(lower.yfilter)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.yfilter)) leaf_name_data.push_back(upper.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lower")
    {
        lower = value;
        lower.value_namespace = name_space;
        lower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper")
    {
        upper = value;
        upper.value_namespace = name_space;
        upper.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lower")
    {
        lower.yfilter = yfilter;
    }
    if(value_path == "upper")
    {
        upper.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Vlan::VlanRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lower" || name == "upper")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::Tdm()
    :
    timeslot_group{YType::str, "timeslot-group"},
    timeslot_rate{YType::uint8, "timeslot-rate"},
    tdm_mode{YType::enumeration, "tdm-mode"}
        ,
    tdm_options(std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions>())
{
    tdm_options->parent = this;

    yang_name = "tdm"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::~Tdm()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::has_data() const
{
    if (is_presence_container) return true;
    return timeslot_group.is_set
	|| timeslot_rate.is_set
	|| tdm_mode.is_set
	|| (tdm_options !=  nullptr && tdm_options->has_data());
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeslot_group.yfilter)
	|| ydk::is_set(timeslot_rate.yfilter)
	|| ydk::is_set(tdm_mode.yfilter)
	|| (tdm_options !=  nullptr && tdm_options->has_operation());
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tdm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeslot_group.is_set || is_set(timeslot_group.yfilter)) leaf_name_data.push_back(timeslot_group.get_name_leafdata());
    if (timeslot_rate.is_set || is_set(timeslot_rate.yfilter)) leaf_name_data.push_back(timeslot_rate.get_name_leafdata());
    if (tdm_mode.is_set || is_set(tdm_mode.yfilter)) leaf_name_data.push_back(tdm_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tdm-options")
    {
        if(tdm_options == nullptr)
        {
            tdm_options = std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions>();
        }
        return tdm_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tdm_options != nullptr)
    {
        _children["tdm-options"] = tdm_options;
    }

    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeslot-group")
    {
        timeslot_group = value;
        timeslot_group.value_namespace = name_space;
        timeslot_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeslot-rate")
    {
        timeslot_rate = value;
        timeslot_rate.value_namespace = name_space;
        timeslot_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tdm-mode")
    {
        tdm_mode = value;
        tdm_mode.value_namespace = name_space;
        tdm_mode.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeslot-group")
    {
        timeslot_group.yfilter = yfilter;
    }
    if(value_path == "timeslot-rate")
    {
        timeslot_rate.yfilter = yfilter;
    }
    if(value_path == "tdm-mode")
    {
        tdm_mode.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tdm-options" || name == "timeslot-group" || name == "timeslot-rate" || name == "tdm-mode")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions::TdmOptions()
    :
    payload_bytes{YType::uint16, "payload-bytes"},
    bit_rate{YType::uint32, "bit-rate"},
    rtp{YType::enumeration, "rtp"},
    timestamp_mode{YType::enumeration, "timestamp-mode"},
    signalling_packets{YType::uint8, "signalling-packets"},
    cas{YType::uint8, "cas"},
    rtp_header_payload_type{YType::uint8, "rtp-header-payload-type"},
    timestamp_clock_freq{YType::uint16, "timestamp-clock-freq"},
    ssrc{YType::uint32, "ssrc"}
{

    yang_name = "tdm-options"; yang_parent_name = "tdm"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions::~TdmOptions()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions::has_data() const
{
    if (is_presence_container) return true;
    return payload_bytes.is_set
	|| bit_rate.is_set
	|| rtp.is_set
	|| timestamp_mode.is_set
	|| signalling_packets.is_set
	|| cas.is_set
	|| rtp_header_payload_type.is_set
	|| timestamp_clock_freq.is_set
	|| ssrc.is_set;
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(payload_bytes.yfilter)
	|| ydk::is_set(bit_rate.yfilter)
	|| ydk::is_set(rtp.yfilter)
	|| ydk::is_set(timestamp_mode.yfilter)
	|| ydk::is_set(signalling_packets.yfilter)
	|| ydk::is_set(cas.yfilter)
	|| ydk::is_set(rtp_header_payload_type.yfilter)
	|| ydk::is_set(timestamp_clock_freq.yfilter)
	|| ydk::is_set(ssrc.yfilter);
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tdm-options";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (payload_bytes.is_set || is_set(payload_bytes.yfilter)) leaf_name_data.push_back(payload_bytes.get_name_leafdata());
    if (bit_rate.is_set || is_set(bit_rate.yfilter)) leaf_name_data.push_back(bit_rate.get_name_leafdata());
    if (rtp.is_set || is_set(rtp.yfilter)) leaf_name_data.push_back(rtp.get_name_leafdata());
    if (timestamp_mode.is_set || is_set(timestamp_mode.yfilter)) leaf_name_data.push_back(timestamp_mode.get_name_leafdata());
    if (signalling_packets.is_set || is_set(signalling_packets.yfilter)) leaf_name_data.push_back(signalling_packets.get_name_leafdata());
    if (cas.is_set || is_set(cas.yfilter)) leaf_name_data.push_back(cas.get_name_leafdata());
    if (rtp_header_payload_type.is_set || is_set(rtp_header_payload_type.yfilter)) leaf_name_data.push_back(rtp_header_payload_type.get_name_leafdata());
    if (timestamp_clock_freq.is_set || is_set(timestamp_clock_freq.yfilter)) leaf_name_data.push_back(timestamp_clock_freq.get_name_leafdata());
    if (ssrc.is_set || is_set(ssrc.yfilter)) leaf_name_data.push_back(ssrc.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "payload-bytes")
    {
        payload_bytes = value;
        payload_bytes.value_namespace = name_space;
        payload_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bit-rate")
    {
        bit_rate = value;
        bit_rate.value_namespace = name_space;
        bit_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtp")
    {
        rtp = value;
        rtp.value_namespace = name_space;
        rtp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp-mode")
    {
        timestamp_mode = value;
        timestamp_mode.value_namespace = name_space;
        timestamp_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "signalling-packets")
    {
        signalling_packets = value;
        signalling_packets.value_namespace = name_space;
        signalling_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cas")
    {
        cas = value;
        cas.value_namespace = name_space;
        cas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtp-header-payload-type")
    {
        rtp_header_payload_type = value;
        rtp_header_payload_type.value_namespace = name_space;
        rtp_header_payload_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timestamp-clock-freq")
    {
        timestamp_clock_freq = value;
        timestamp_clock_freq.value_namespace = name_space;
        timestamp_clock_freq.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ssrc")
    {
        ssrc = value;
        ssrc.value_namespace = name_space;
        ssrc.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "payload-bytes")
    {
        payload_bytes.yfilter = yfilter;
    }
    if(value_path == "bit-rate")
    {
        bit_rate.yfilter = yfilter;
    }
    if(value_path == "rtp")
    {
        rtp.yfilter = yfilter;
    }
    if(value_path == "timestamp-mode")
    {
        timestamp_mode.yfilter = yfilter;
    }
    if(value_path == "signalling-packets")
    {
        signalling_packets.yfilter = yfilter;
    }
    if(value_path == "cas")
    {
        cas.yfilter = yfilter;
    }
    if(value_path == "rtp-header-payload-type")
    {
        rtp_header_payload_type.yfilter = yfilter;
    }
    if(value_path == "timestamp-clock-freq")
    {
        timestamp_clock_freq.yfilter = yfilter;
    }
    if(value_path == "ssrc")
    {
        ssrc.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Tdm::TdmOptions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "payload-bytes" || name == "bit-rate" || name == "rtp" || name == "timestamp-mode" || name == "signalling-packets" || name == "cas" || name == "rtp-header-payload-type" || name == "timestamp-clock-freq" || name == "ssrc")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Atm::Atm()
    :
    maximum_number_cells_packed{YType::uint16, "maximum-number-cells-packed"},
    maximum_number_cells_un_packed{YType::uint16, "maximum-number-cells-un-packed"},
    atm_mode{YType::enumeration, "atm-mode"},
    vpi{YType::uint16, "vpi"},
    vci{YType::uint16, "vci"}
{

    yang_name = "atm"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Atm::~Atm()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Atm::has_data() const
{
    if (is_presence_container) return true;
    return maximum_number_cells_packed.is_set
	|| maximum_number_cells_un_packed.is_set
	|| atm_mode.is_set
	|| vpi.is_set
	|| vci.is_set;
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Atm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maximum_number_cells_packed.yfilter)
	|| ydk::is_set(maximum_number_cells_un_packed.yfilter)
	|| ydk::is_set(atm_mode.yfilter)
	|| ydk::is_set(vpi.yfilter)
	|| ydk::is_set(vci.yfilter);
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Atm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "atm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Atm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_number_cells_packed.is_set || is_set(maximum_number_cells_packed.yfilter)) leaf_name_data.push_back(maximum_number_cells_packed.get_name_leafdata());
    if (maximum_number_cells_un_packed.is_set || is_set(maximum_number_cells_un_packed.yfilter)) leaf_name_data.push_back(maximum_number_cells_un_packed.get_name_leafdata());
    if (atm_mode.is_set || is_set(atm_mode.yfilter)) leaf_name_data.push_back(atm_mode.get_name_leafdata());
    if (vpi.is_set || is_set(vpi.yfilter)) leaf_name_data.push_back(vpi.get_name_leafdata());
    if (vci.is_set || is_set(vci.yfilter)) leaf_name_data.push_back(vci.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Atm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Atm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Atm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maximum-number-cells-packed")
    {
        maximum_number_cells_packed = value;
        maximum_number_cells_packed.value_namespace = name_space;
        maximum_number_cells_packed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-number-cells-un-packed")
    {
        maximum_number_cells_un_packed = value;
        maximum_number_cells_un_packed.value_namespace = name_space;
        maximum_number_cells_un_packed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atm-mode")
    {
        atm_mode = value;
        atm_mode.value_namespace = name_space;
        atm_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpi")
    {
        vpi = value;
        vpi.value_namespace = name_space;
        vpi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vci")
    {
        vci = value;
        vci.value_namespace = name_space;
        vci.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Atm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maximum-number-cells-packed")
    {
        maximum_number_cells_packed.yfilter = yfilter;
    }
    if(value_path == "maximum-number-cells-un-packed")
    {
        maximum_number_cells_un_packed.yfilter = yfilter;
    }
    if(value_path == "atm-mode")
    {
        atm_mode.yfilter = yfilter;
    }
    if(value_path == "vpi")
    {
        vpi.yfilter = yfilter;
    }
    if(value_path == "vci")
    {
        vci.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Atm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maximum-number-cells-packed" || name == "maximum-number-cells-un-packed" || name == "atm-mode" || name == "vpi" || name == "vci")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Fr::Fr()
    :
    fr_mode{YType::enumeration, "fr-mode"},
    dlci{YType::uint32, "dlci"}
{

    yang_name = "fr"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Fr::~Fr()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Fr::has_data() const
{
    if (is_presence_container) return true;
    return fr_mode.is_set
	|| dlci.is_set;
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Fr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fr_mode.yfilter)
	|| ydk::is_set(dlci.yfilter);
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Fr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Fr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fr_mode.is_set || is_set(fr_mode.yfilter)) leaf_name_data.push_back(fr_mode.get_name_leafdata());
    if (dlci.is_set || is_set(dlci.yfilter)) leaf_name_data.push_back(dlci.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Fr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Fr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Fr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fr-mode")
    {
        fr_mode = value;
        fr_mode.value_namespace = name_space;
        fr_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dlci")
    {
        dlci = value;
        dlci.value_namespace = name_space;
        dlci.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Fr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fr-mode")
    {
        fr_mode.yfilter = yfilter;
    }
    if(value_path == "dlci")
    {
        dlci.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::Fr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fr-mode" || name == "dlci")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::PseudowireEther()
    :
    is_valid{YType::boolean, "is-valid"},
    internal_label{YType::uint32, "internal-label"}
        ,
    interface_list(std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList>())
{
    interface_list->parent = this;

    yang_name = "pseudowire-ether"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::~PseudowireEther()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::has_data() const
{
    if (is_presence_container) return true;
    return is_valid.is_set
	|| internal_label.is_set
	|| (interface_list !=  nullptr && interface_list->has_data());
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| (interface_list !=  nullptr && interface_list->has_operation());
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-ether";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-list")
    {
        if(interface_list == nullptr)
        {
            interface_list = std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList>();
        }
        return interface_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface_list != nullptr)
    {
        _children["interface-list"] = interface_list;
    }

    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-list" || name == "is-valid" || name == "internal-label")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::InterfaceList()
    :
    interface_list_name{YType::str, "interface-list-name"},
    interface_list_id{YType::uint32, "interface-list-id"}
        ,
    interface(this, {})
{

    yang_name = "interface-list"; yang_parent_name = "pseudowire-ether"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::~InterfaceList()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return interface_list_name.is_set
	|| interface_list_id.is_set;
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_list_name.yfilter)
	|| ydk::is_set(interface_list_id.yfilter);
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_list_name.is_set || is_set(interface_list_name.yfilter)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());
    if (interface_list_id.is_set || is_set(interface_list_id.yfilter)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
        interface_list_name.value_namespace = name_space;
        interface_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
        interface_list_id.value_namespace = name_space;
        interface_list_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-list-name")
    {
        interface_list_name.yfilter = yfilter;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "interface-list-name" || name == "interface-list-id")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    replicate_status{YType::enumeration, "replicate-status"}
{

    yang_name = "interface"; yang_parent_name = "interface-list"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::~Interface()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| replicate_status.is_set;
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(replicate_status.yfilter);
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (replicate_status.is_set || is_set(replicate_status.yfilter)) leaf_name_data.push_back(replicate_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replicate-status")
    {
        replicate_status = value;
        replicate_status.value_namespace = name_space;
        replicate_status.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "replicate-status")
    {
        replicate_status.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireEther::InterfaceList::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "replicate-status")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::PseudowireIw()
    :
    is_valid{YType::boolean, "is-valid"},
    internal_label{YType::uint32, "internal-label"}
        ,
    interface_list(std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList>())
{
    interface_list->parent = this;

    yang_name = "pseudowire-iw"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::~PseudowireIw()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::has_data() const
{
    if (is_presence_container) return true;
    return is_valid.is_set
	|| internal_label.is_set
	|| (interface_list !=  nullptr && interface_list->has_data());
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_valid.yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| (interface_list !=  nullptr && interface_list->has_operation());
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-iw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_valid.is_set || is_set(is_valid.yfilter)) leaf_name_data.push_back(is_valid.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-list")
    {
        if(interface_list == nullptr)
        {
            interface_list = std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList>();
        }
        return interface_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface_list != nullptr)
    {
        _children["interface-list"] = interface_list;
    }

    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-valid")
    {
        is_valid = value;
        is_valid.value_namespace = name_space;
        is_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-valid")
    {
        is_valid.yfilter = yfilter;
    }
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-list" || name == "is-valid" || name == "internal-label")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::InterfaceList()
    :
    interface_list_name{YType::str, "interface-list-name"},
    interface_list_id{YType::uint32, "interface-list-id"}
        ,
    interface(this, {})
{

    yang_name = "interface-list"; yang_parent_name = "pseudowire-iw"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::~InterfaceList()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return interface_list_name.is_set
	|| interface_list_id.is_set;
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_list_name.yfilter)
	|| ydk::is_set(interface_list_id.yfilter);
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_list_name.is_set || is_set(interface_list_name.yfilter)) leaf_name_data.push_back(interface_list_name.get_name_leafdata());
    if (interface_list_id.is_set || is_set(interface_list_id.yfilter)) leaf_name_data.push_back(interface_list_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-list-name")
    {
        interface_list_name = value;
        interface_list_name.value_namespace = name_space;
        interface_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id = value;
        interface_list_id.value_namespace = name_space;
        interface_list_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-list-name")
    {
        interface_list_name.yfilter = yfilter;
    }
    if(value_path == "interface-list-id")
    {
        interface_list_id.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "interface-list-name" || name == "interface-list-id")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    replicate_status{YType::enumeration, "replicate-status"}
{

    yang_name = "interface"; yang_parent_name = "interface-list"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::~Interface()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| replicate_status.is_set;
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(replicate_status.yfilter);
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (replicate_status.is_set || is_set(replicate_status.yfilter)) leaf_name_data.push_back(replicate_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replicate-status")
    {
        replicate_status = value;
        replicate_status.value_namespace = name_space;
        replicate_status.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "replicate-status")
    {
        replicate_status.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteInterface::Parameters::PseudowireIw::InterfaceList::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "replicate-status")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::PreferredPath()
    :
    option{YType::enumeration, "option"},
    next_hop_ip{YType::uint32, "next-hop-ip"},
    te_tunnel_interface_number{YType::uint32, "te-tunnel-interface-number"},
    ip_tunnel_interface_number{YType::uint32, "ip-tunnel-interface-number"},
    tp_tunnel_interface_number{YType::uint32, "tp-tunnel-interface-number"}
        ,
    srte_policy(std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::SrtePolicy>())
{
    srte_policy->parent = this;

    yang_name = "preferred-path"; yang_parent_name = "pseudowire"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::~PreferredPath()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::has_data() const
{
    if (is_presence_container) return true;
    return option.is_set
	|| next_hop_ip.is_set
	|| te_tunnel_interface_number.is_set
	|| ip_tunnel_interface_number.is_set
	|| tp_tunnel_interface_number.is_set
	|| (srte_policy !=  nullptr && srte_policy->has_data());
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(option.yfilter)
	|| ydk::is_set(next_hop_ip.yfilter)
	|| ydk::is_set(te_tunnel_interface_number.yfilter)
	|| ydk::is_set(ip_tunnel_interface_number.yfilter)
	|| ydk::is_set(tp_tunnel_interface_number.yfilter)
	|| (srte_policy !=  nullptr && srte_policy->has_operation());
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preferred-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option.is_set || is_set(option.yfilter)) leaf_name_data.push_back(option.get_name_leafdata());
    if (next_hop_ip.is_set || is_set(next_hop_ip.yfilter)) leaf_name_data.push_back(next_hop_ip.get_name_leafdata());
    if (te_tunnel_interface_number.is_set || is_set(te_tunnel_interface_number.yfilter)) leaf_name_data.push_back(te_tunnel_interface_number.get_name_leafdata());
    if (ip_tunnel_interface_number.is_set || is_set(ip_tunnel_interface_number.yfilter)) leaf_name_data.push_back(ip_tunnel_interface_number.get_name_leafdata());
    if (tp_tunnel_interface_number.is_set || is_set(tp_tunnel_interface_number.yfilter)) leaf_name_data.push_back(tp_tunnel_interface_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srte-policy")
    {
        if(srte_policy == nullptr)
        {
            srte_policy = std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::SrtePolicy>();
        }
        return srte_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(srte_policy != nullptr)
    {
        _children["srte-policy"] = srte_policy;
    }

    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "option")
    {
        option = value;
        option.value_namespace = name_space;
        option.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-ip")
    {
        next_hop_ip = value;
        next_hop_ip.value_namespace = name_space;
        next_hop_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-tunnel-interface-number")
    {
        te_tunnel_interface_number = value;
        te_tunnel_interface_number.value_namespace = name_space;
        te_tunnel_interface_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-tunnel-interface-number")
    {
        ip_tunnel_interface_number = value;
        ip_tunnel_interface_number.value_namespace = name_space;
        ip_tunnel_interface_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tp-tunnel-interface-number")
    {
        tp_tunnel_interface_number = value;
        tp_tunnel_interface_number.value_namespace = name_space;
        tp_tunnel_interface_number.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "option")
    {
        option.yfilter = yfilter;
    }
    if(value_path == "next-hop-ip")
    {
        next_hop_ip.yfilter = yfilter;
    }
    if(value_path == "te-tunnel-interface-number")
    {
        te_tunnel_interface_number.yfilter = yfilter;
    }
    if(value_path == "ip-tunnel-interface-number")
    {
        ip_tunnel_interface_number.yfilter = yfilter;
    }
    if(value_path == "tp-tunnel-interface-number")
    {
        tp_tunnel_interface_number.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srte-policy" || name == "option" || name == "next-hop-ip" || name == "te-tunnel-interface-number" || name == "ip-tunnel-interface-number" || name == "tp-tunnel-interface-number")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::SrtePolicy::SrtePolicy()
    :
    policy_name{YType::str, "policy-name"}
{

    yang_name = "srte-policy"; yang_parent_name = "preferred-path"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::SrtePolicy::~SrtePolicy()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::SrtePolicy::has_data() const
{
    if (is_presence_container) return true;
    return policy_name.is_set;
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::SrtePolicy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_name.yfilter);
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::SrtePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srte-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::SrtePolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_name.is_set || is_set(policy_name.yfilter)) leaf_name_data.push_back(policy_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::SrtePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::SrtePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::SrtePolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-name")
    {
        policy_name = value;
        policy_name.value_namespace = name_space;
        policy_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::SrtePolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-name")
    {
        policy_name.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::PreferredPath::SrtePolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-name")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::LocalSignalling()
    :
    pw_status{YType::uint32, "pw-status"}
        ,
    status_tlv(std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::StatusTlv>())
    , tlv(this, {})
{
    status_tlv->parent = this;

    yang_name = "local-signalling"; yang_parent_name = "pseudowire"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::~LocalSignalling()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tlv.len(); index++)
    {
        if(tlv[index]->has_data())
            return true;
    }
    return pw_status.is_set
	|| (status_tlv !=  nullptr && status_tlv->has_data());
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::has_operation() const
{
    for (std::size_t index=0; index<tlv.len(); index++)
    {
        if(tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(pw_status.yfilter)
	|| (status_tlv !=  nullptr && status_tlv->has_operation());
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-signalling";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_status.is_set || is_set(pw_status.yfilter)) leaf_name_data.push_back(pw_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status-tlv")
    {
        if(status_tlv == nullptr)
        {
            status_tlv = std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::StatusTlv>();
        }
        return status_tlv;
    }

    if(child_yang_name == "tlv")
    {
        auto ent_ = std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::Tlv>();
        ent_->parent = this;
        tlv.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(status_tlv != nullptr)
    {
        _children["status-tlv"] = status_tlv;
    }

    count_ = 0;
    for (auto ent_ : tlv.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-status")
    {
        pw_status = value;
        pw_status.value_namespace = name_space;
        pw_status.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-status")
    {
        pw_status.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status-tlv" || name == "tlv" || name == "pw-status")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::StatusTlv::StatusTlv()
    :
    pw_id{YType::uint32, "pw-id"},
    local_address{YType::str, "local-address"},
    remote_address{YType::str, "remote-address"},
    description{YType::str, "description"}
{

    yang_name = "status-tlv"; yang_parent_name = "local-signalling"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::StatusTlv::~StatusTlv()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::StatusTlv::has_data() const
{
    if (is_presence_container) return true;
    return pw_id.is_set
	|| local_address.is_set
	|| remote_address.is_set
	|| description.is_set;
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::StatusTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_id.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(remote_address.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::StatusTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::StatusTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_id.is_set || is_set(pw_id.yfilter)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::StatusTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::StatusTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::StatusTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-id")
    {
        pw_id = value;
        pw_id.value_namespace = name_space;
        pw_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::StatusTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-id")
    {
        pw_id.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::StatusTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pw-id" || name == "local-address" || name == "remote-address" || name == "description")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::Tlv::Tlv()
    :
    pw_id{YType::uint32, "pw-id"},
    local_address{YType::str, "local-address"},
    remote_address{YType::str, "remote-address"},
    description{YType::str, "description"}
{

    yang_name = "tlv"; yang_parent_name = "local-signalling"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::Tlv::~Tlv()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::Tlv::has_data() const
{
    if (is_presence_container) return true;
    return pw_id.is_set
	|| local_address.is_set
	|| remote_address.is_set
	|| description.is_set;
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::Tlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_id.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(remote_address.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::Tlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_id.is_set || is_set(pw_id.yfilter)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::Tlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::Tlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-id")
    {
        pw_id = value;
        pw_id.value_namespace = name_space;
        pw_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::Tlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-id")
    {
        pw_id.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::LocalSignalling::Tlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pw-id" || name == "local-address" || name == "remote-address" || name == "description")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::RemoteSignalling()
    :
    pw_status{YType::uint32, "pw-status"}
        ,
    status_tlv(std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv>())
    , tlv(this, {})
{
    status_tlv->parent = this;

    yang_name = "remote-signalling"; yang_parent_name = "pseudowire"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::~RemoteSignalling()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tlv.len(); index++)
    {
        if(tlv[index]->has_data())
            return true;
    }
    return pw_status.is_set
	|| (status_tlv !=  nullptr && status_tlv->has_data());
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::has_operation() const
{
    for (std::size_t index=0; index<tlv.len(); index++)
    {
        if(tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(pw_status.yfilter)
	|| (status_tlv !=  nullptr && status_tlv->has_operation());
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-signalling";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_status.is_set || is_set(pw_status.yfilter)) leaf_name_data.push_back(pw_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status-tlv")
    {
        if(status_tlv == nullptr)
        {
            status_tlv = std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv>();
        }
        return status_tlv;
    }

    if(child_yang_name == "tlv")
    {
        auto ent_ = std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::Tlv>();
        ent_->parent = this;
        tlv.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(status_tlv != nullptr)
    {
        _children["status-tlv"] = status_tlv;
    }

    count_ = 0;
    for (auto ent_ : tlv.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-status")
    {
        pw_status = value;
        pw_status.value_namespace = name_space;
        pw_status.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-status")
    {
        pw_status.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status-tlv" || name == "tlv" || name == "pw-status")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv::StatusTlv()
    :
    pw_id{YType::uint32, "pw-id"},
    local_address{YType::str, "local-address"},
    remote_address{YType::str, "remote-address"},
    description{YType::str, "description"}
{

    yang_name = "status-tlv"; yang_parent_name = "remote-signalling"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv::~StatusTlv()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv::has_data() const
{
    if (is_presence_container) return true;
    return pw_id.is_set
	|| local_address.is_set
	|| remote_address.is_set
	|| description.is_set;
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_id.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(remote_address.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-tlv";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_id.is_set || is_set(pw_id.yfilter)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-id")
    {
        pw_id = value;
        pw_id.value_namespace = name_space;
        pw_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-id")
    {
        pw_id.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::StatusTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pw-id" || name == "local-address" || name == "remote-address" || name == "description")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::Tlv::Tlv()
    :
    pw_id{YType::uint32, "pw-id"},
    local_address{YType::str, "local-address"},
    remote_address{YType::str, "remote-address"},
    description{YType::str, "description"}
{

    yang_name = "tlv"; yang_parent_name = "remote-signalling"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::Tlv::~Tlv()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::Tlv::has_data() const
{
    if (is_presence_container) return true;
    return pw_id.is_set
	|| local_address.is_set
	|| remote_address.is_set
	|| description.is_set;
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::Tlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_id.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(remote_address.yfilter)
	|| ydk::is_set(description.yfilter);
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::Tlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tlv";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::Tlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_id.is_set || is_set(pw_id.yfilter)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::Tlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::Tlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::Tlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-id")
    {
        pw_id = value;
        pw_id.value_namespace = name_space;
        pw_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::Tlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-id")
    {
        pw_id.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::RemoteSignalling::Tlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pw-id" || name == "local-address" || name == "remote-address" || name == "description")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::Statistics()
    :
    impostion_stats(std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats>())
    , dispostion_stats(std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats>())
    , sequence_number(std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber>())
{
    impostion_stats->parent = this;
    dispostion_stats->parent = this;
    sequence_number->parent = this;

    yang_name = "statistics"; yang_parent_name = "pseudowire"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::~Statistics()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return (impostion_stats !=  nullptr && impostion_stats->has_data())
	|| (dispostion_stats !=  nullptr && dispostion_stats->has_data())
	|| (sequence_number !=  nullptr && sequence_number->has_data());
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (impostion_stats !=  nullptr && impostion_stats->has_operation())
	|| (dispostion_stats !=  nullptr && dispostion_stats->has_operation())
	|| (sequence_number !=  nullptr && sequence_number->has_operation());
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "impostion-stats")
    {
        if(impostion_stats == nullptr)
        {
            impostion_stats = std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats>();
        }
        return impostion_stats;
    }

    if(child_yang_name == "dispostion-stats")
    {
        if(dispostion_stats == nullptr)
        {
            dispostion_stats = std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats>();
        }
        return dispostion_stats;
    }

    if(child_yang_name == "sequence-number")
    {
        if(sequence_number == nullptr)
        {
            sequence_number = std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber>();
        }
        return sequence_number;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(impostion_stats != nullptr)
    {
        _children["impostion-stats"] = impostion_stats;
    }

    if(dispostion_stats != nullptr)
    {
        _children["dispostion-stats"] = dispostion_stats;
    }

    if(sequence_number != nullptr)
    {
        _children["sequence-number"] = sequence_number;
    }

    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "impostion-stats" || name == "dispostion-stats" || name == "sequence-number")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionStats()
    :
    imposition_stat(std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat>())
    , imposition_mtu_drop(std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop>())
    , impostion_tail_drop(std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop>())
    , l2fsbi_drop(std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2fsbiDrop>())
    , multicast(std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast>())
    , broadcast(std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast>())
    , known_unicast(std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast>())
    , unknown_unicast(std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast>())
{
    imposition_stat->parent = this;
    imposition_mtu_drop->parent = this;
    impostion_tail_drop->parent = this;
    l2fsbi_drop->parent = this;
    multicast->parent = this;
    broadcast->parent = this;
    known_unicast->parent = this;
    unknown_unicast->parent = this;

    yang_name = "impostion-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::~ImpostionStats()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::has_data() const
{
    if (is_presence_container) return true;
    return (imposition_stat !=  nullptr && imposition_stat->has_data())
	|| (imposition_mtu_drop !=  nullptr && imposition_mtu_drop->has_data())
	|| (impostion_tail_drop !=  nullptr && impostion_tail_drop->has_data())
	|| (l2fsbi_drop !=  nullptr && l2fsbi_drop->has_data())
	|| (multicast !=  nullptr && multicast->has_data())
	|| (broadcast !=  nullptr && broadcast->has_data())
	|| (known_unicast !=  nullptr && known_unicast->has_data())
	|| (unknown_unicast !=  nullptr && unknown_unicast->has_data());
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::has_operation() const
{
    return is_set(yfilter)
	|| (imposition_stat !=  nullptr && imposition_stat->has_operation())
	|| (imposition_mtu_drop !=  nullptr && imposition_mtu_drop->has_operation())
	|| (impostion_tail_drop !=  nullptr && impostion_tail_drop->has_operation())
	|| (l2fsbi_drop !=  nullptr && l2fsbi_drop->has_operation())
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (broadcast !=  nullptr && broadcast->has_operation())
	|| (known_unicast !=  nullptr && known_unicast->has_operation())
	|| (unknown_unicast !=  nullptr && unknown_unicast->has_operation());
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "impostion-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "imposition-stat")
    {
        if(imposition_stat == nullptr)
        {
            imposition_stat = std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat>();
        }
        return imposition_stat;
    }

    if(child_yang_name == "imposition-mtu-drop")
    {
        if(imposition_mtu_drop == nullptr)
        {
            imposition_mtu_drop = std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop>();
        }
        return imposition_mtu_drop;
    }

    if(child_yang_name == "impostion-tail-drop")
    {
        if(impostion_tail_drop == nullptr)
        {
            impostion_tail_drop = std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop>();
        }
        return impostion_tail_drop;
    }

    if(child_yang_name == "l2fsbi-drop")
    {
        if(l2fsbi_drop == nullptr)
        {
            l2fsbi_drop = std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2fsbiDrop>();
        }
        return l2fsbi_drop;
    }

    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "broadcast")
    {
        if(broadcast == nullptr)
        {
            broadcast = std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast>();
        }
        return broadcast;
    }

    if(child_yang_name == "known-unicast")
    {
        if(known_unicast == nullptr)
        {
            known_unicast = std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast>();
        }
        return known_unicast;
    }

    if(child_yang_name == "unknown-unicast")
    {
        if(unknown_unicast == nullptr)
        {
            unknown_unicast = std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast>();
        }
        return unknown_unicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(imposition_stat != nullptr)
    {
        _children["imposition-stat"] = imposition_stat;
    }

    if(imposition_mtu_drop != nullptr)
    {
        _children["imposition-mtu-drop"] = imposition_mtu_drop;
    }

    if(impostion_tail_drop != nullptr)
    {
        _children["impostion-tail-drop"] = impostion_tail_drop;
    }

    if(l2fsbi_drop != nullptr)
    {
        _children["l2fsbi-drop"] = l2fsbi_drop;
    }

    if(multicast != nullptr)
    {
        _children["multicast"] = multicast;
    }

    if(broadcast != nullptr)
    {
        _children["broadcast"] = broadcast;
    }

    if(known_unicast != nullptr)
    {
        _children["known-unicast"] = known_unicast;
    }

    if(unknown_unicast != nullptr)
    {
        _children["unknown-unicast"] = unknown_unicast;
    }

    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "imposition-stat" || name == "imposition-mtu-drop" || name == "impostion-tail-drop" || name == "l2fsbi-drop" || name == "multicast" || name == "broadcast" || name == "known-unicast" || name == "unknown-unicast")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat::ImpositionStat()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "imposition-stat"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat::~ImpositionStat()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat::has_data() const
{
    if (is_presence_container) return true;
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "imposition-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::ImpositionMtuDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "imposition-mtu-drop"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::~ImpositionMtuDrop()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::has_data() const
{
    if (is_presence_container) return true;
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "imposition-mtu-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpositionMtuDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::ImpostionTailDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "impostion-tail-drop"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::~ImpostionTailDrop()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::has_data() const
{
    if (is_presence_container) return true;
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "impostion-tail-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::ImpostionTailDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2fsbiDrop::L2fsbiDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "l2fsbi-drop"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2fsbiDrop::~L2fsbiDrop()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2fsbiDrop::has_data() const
{
    if (is_presence_container) return true;
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2fsbiDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2fsbiDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fsbi-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2fsbiDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2fsbiDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2fsbiDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2fsbiDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2fsbiDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::L2fsbiDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast::Multicast()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "multicast"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast::~Multicast()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast::has_data() const
{
    if (is_presence_container) return true;
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Multicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast::Broadcast()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "broadcast"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast::~Broadcast()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast::has_data() const
{
    if (is_presence_container) return true;
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::Broadcast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast::KnownUnicast()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "known-unicast"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast::~KnownUnicast()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast::has_data() const
{
    if (is_presence_container) return true;
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "known-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::KnownUnicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::UnknownUnicast()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "unknown-unicast"; yang_parent_name = "impostion-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::~UnknownUnicast()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::has_data() const
{
    if (is_presence_container) return true;
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::ImpostionStats::UnknownUnicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispostionStats()
    :
    disposition_stat(std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat>())
    , disposition_mtu_drop(std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop>())
    , disposition_tail_drop(std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop>())
    , multicast_drop(std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop>())
    , unicast_drop(std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop>())
    , broadcast_drop(std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop>())
    , received_drops(std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops>())
    , dai_drop(std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop>())
    , ipsg_drop(std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop>())
    , disposition_oo_o_drops(std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops>())
    , disposition_p2mp_stats(std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2mpStats>())
    , known_unicast(std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast>())
    , mac_move(std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove>())
{
    disposition_stat->parent = this;
    disposition_mtu_drop->parent = this;
    disposition_tail_drop->parent = this;
    multicast_drop->parent = this;
    unicast_drop->parent = this;
    broadcast_drop->parent = this;
    received_drops->parent = this;
    dai_drop->parent = this;
    ipsg_drop->parent = this;
    disposition_oo_o_drops->parent = this;
    disposition_p2mp_stats->parent = this;
    known_unicast->parent = this;
    mac_move->parent = this;

    yang_name = "dispostion-stats"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::~DispostionStats()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::has_data() const
{
    if (is_presence_container) return true;
    return (disposition_stat !=  nullptr && disposition_stat->has_data())
	|| (disposition_mtu_drop !=  nullptr && disposition_mtu_drop->has_data())
	|| (disposition_tail_drop !=  nullptr && disposition_tail_drop->has_data())
	|| (multicast_drop !=  nullptr && multicast_drop->has_data())
	|| (unicast_drop !=  nullptr && unicast_drop->has_data())
	|| (broadcast_drop !=  nullptr && broadcast_drop->has_data())
	|| (received_drops !=  nullptr && received_drops->has_data())
	|| (dai_drop !=  nullptr && dai_drop->has_data())
	|| (ipsg_drop !=  nullptr && ipsg_drop->has_data())
	|| (disposition_oo_o_drops !=  nullptr && disposition_oo_o_drops->has_data())
	|| (disposition_p2mp_stats !=  nullptr && disposition_p2mp_stats->has_data())
	|| (known_unicast !=  nullptr && known_unicast->has_data())
	|| (mac_move !=  nullptr && mac_move->has_data());
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::has_operation() const
{
    return is_set(yfilter)
	|| (disposition_stat !=  nullptr && disposition_stat->has_operation())
	|| (disposition_mtu_drop !=  nullptr && disposition_mtu_drop->has_operation())
	|| (disposition_tail_drop !=  nullptr && disposition_tail_drop->has_operation())
	|| (multicast_drop !=  nullptr && multicast_drop->has_operation())
	|| (unicast_drop !=  nullptr && unicast_drop->has_operation())
	|| (broadcast_drop !=  nullptr && broadcast_drop->has_operation())
	|| (received_drops !=  nullptr && received_drops->has_operation())
	|| (dai_drop !=  nullptr && dai_drop->has_operation())
	|| (ipsg_drop !=  nullptr && ipsg_drop->has_operation())
	|| (disposition_oo_o_drops !=  nullptr && disposition_oo_o_drops->has_operation())
	|| (disposition_p2mp_stats !=  nullptr && disposition_p2mp_stats->has_operation())
	|| (known_unicast !=  nullptr && known_unicast->has_operation())
	|| (mac_move !=  nullptr && mac_move->has_operation());
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dispostion-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "disposition-stat")
    {
        if(disposition_stat == nullptr)
        {
            disposition_stat = std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat>();
        }
        return disposition_stat;
    }

    if(child_yang_name == "disposition-mtu-drop")
    {
        if(disposition_mtu_drop == nullptr)
        {
            disposition_mtu_drop = std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop>();
        }
        return disposition_mtu_drop;
    }

    if(child_yang_name == "disposition-tail-drop")
    {
        if(disposition_tail_drop == nullptr)
        {
            disposition_tail_drop = std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop>();
        }
        return disposition_tail_drop;
    }

    if(child_yang_name == "multicast-drop")
    {
        if(multicast_drop == nullptr)
        {
            multicast_drop = std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop>();
        }
        return multicast_drop;
    }

    if(child_yang_name == "unicast-drop")
    {
        if(unicast_drop == nullptr)
        {
            unicast_drop = std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop>();
        }
        return unicast_drop;
    }

    if(child_yang_name == "broadcast-drop")
    {
        if(broadcast_drop == nullptr)
        {
            broadcast_drop = std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop>();
        }
        return broadcast_drop;
    }

    if(child_yang_name == "received-drops")
    {
        if(received_drops == nullptr)
        {
            received_drops = std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops>();
        }
        return received_drops;
    }

    if(child_yang_name == "dai-drop")
    {
        if(dai_drop == nullptr)
        {
            dai_drop = std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop>();
        }
        return dai_drop;
    }

    if(child_yang_name == "ipsg-drop")
    {
        if(ipsg_drop == nullptr)
        {
            ipsg_drop = std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop>();
        }
        return ipsg_drop;
    }

    if(child_yang_name == "disposition-oo-o-drops")
    {
        if(disposition_oo_o_drops == nullptr)
        {
            disposition_oo_o_drops = std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops>();
        }
        return disposition_oo_o_drops;
    }

    if(child_yang_name == "disposition-p2mp-stats")
    {
        if(disposition_p2mp_stats == nullptr)
        {
            disposition_p2mp_stats = std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2mpStats>();
        }
        return disposition_p2mp_stats;
    }

    if(child_yang_name == "known-unicast")
    {
        if(known_unicast == nullptr)
        {
            known_unicast = std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast>();
        }
        return known_unicast;
    }

    if(child_yang_name == "mac-move")
    {
        if(mac_move == nullptr)
        {
            mac_move = std::make_shared<L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove>();
        }
        return mac_move;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(disposition_stat != nullptr)
    {
        _children["disposition-stat"] = disposition_stat;
    }

    if(disposition_mtu_drop != nullptr)
    {
        _children["disposition-mtu-drop"] = disposition_mtu_drop;
    }

    if(disposition_tail_drop != nullptr)
    {
        _children["disposition-tail-drop"] = disposition_tail_drop;
    }

    if(multicast_drop != nullptr)
    {
        _children["multicast-drop"] = multicast_drop;
    }

    if(unicast_drop != nullptr)
    {
        _children["unicast-drop"] = unicast_drop;
    }

    if(broadcast_drop != nullptr)
    {
        _children["broadcast-drop"] = broadcast_drop;
    }

    if(received_drops != nullptr)
    {
        _children["received-drops"] = received_drops;
    }

    if(dai_drop != nullptr)
    {
        _children["dai-drop"] = dai_drop;
    }

    if(ipsg_drop != nullptr)
    {
        _children["ipsg-drop"] = ipsg_drop;
    }

    if(disposition_oo_o_drops != nullptr)
    {
        _children["disposition-oo-o-drops"] = disposition_oo_o_drops;
    }

    if(disposition_p2mp_stats != nullptr)
    {
        _children["disposition-p2mp-stats"] = disposition_p2mp_stats;
    }

    if(known_unicast != nullptr)
    {
        _children["known-unicast"] = known_unicast;
    }

    if(mac_move != nullptr)
    {
        _children["mac-move"] = mac_move;
    }

    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disposition-stat" || name == "disposition-mtu-drop" || name == "disposition-tail-drop" || name == "multicast-drop" || name == "unicast-drop" || name == "broadcast-drop" || name == "received-drops" || name == "dai-drop" || name == "ipsg-drop" || name == "disposition-oo-o-drops" || name == "disposition-p2mp-stats" || name == "known-unicast" || name == "mac-move")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat::DispositionStat()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "disposition-stat"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat::~DispositionStat()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat::has_data() const
{
    if (is_presence_container) return true;
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::DispositionMtuDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "disposition-mtu-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::~DispositionMtuDrop()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::has_data() const
{
    if (is_presence_container) return true;
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-mtu-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionMtuDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::DispositionTailDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "disposition-tail-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::~DispositionTailDrop()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::has_data() const
{
    if (is_presence_container) return true;
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-tail-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionTailDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop::MulticastDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "multicast-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop::~MulticastDrop()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop::has_data() const
{
    if (is_presence_container) return true;
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MulticastDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop::UnicastDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "unicast-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop::~UnicastDrop()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop::has_data() const
{
    if (is_presence_container) return true;
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::UnicastDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop::BroadcastDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "broadcast-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop::~BroadcastDrop()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop::has_data() const
{
    if (is_presence_container) return true;
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "broadcast-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::BroadcastDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops::ReceivedDrops()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "received-drops"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops::~ReceivedDrops()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops::has_data() const
{
    if (is_presence_container) return true;
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-drops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::ReceivedDrops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop::DaiDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "dai-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop::~DaiDrop()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop::has_data() const
{
    if (is_presence_container) return true;
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dai-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DaiDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop::IpsgDrop()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "ipsg-drop"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop::~IpsgDrop()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop::has_data() const
{
    if (is_presence_container) return true;
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipsg-drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::IpsgDrop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::DispositionOoODrops()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "disposition-oo-o-drops"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::~DispositionOoODrops()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::has_data() const
{
    if (is_presence_container) return true;
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-oo-o-drops";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionOoODrops::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2mpStats::DispositionP2mpStats()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "disposition-p2mp-stats"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2mpStats::~DispositionP2mpStats()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2mpStats::has_data() const
{
    if (is_presence_container) return true;
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2mpStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2mpStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disposition-p2mp-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2mpStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2mpStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2mpStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2mpStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2mpStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::DispositionP2mpStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast::KnownUnicast()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "known-unicast"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast::~KnownUnicast()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast::has_data() const
{
    if (is_presence_container) return true;
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "known-unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::KnownUnicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove::MacMove()
    :
    packet_counts{YType::uint64, "packet-counts"},
    byte_counts{YType::uint64, "byte-counts"}
{

    yang_name = "mac-move"; yang_parent_name = "dispostion-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove::~MacMove()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove::has_data() const
{
    if (is_presence_container) return true;
    return packet_counts.is_set
	|| byte_counts.is_set;
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packet_counts.yfilter)
	|| ydk::is_set(byte_counts.yfilter);
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-move";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packet_counts.is_set || is_set(packet_counts.yfilter)) leaf_name_data.push_back(packet_counts.get_name_leafdata());
    if (byte_counts.is_set || is_set(byte_counts.yfilter)) leaf_name_data.push_back(byte_counts.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packet-counts")
    {
        packet_counts = value;
        packet_counts.value_namespace = name_space;
        packet_counts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "byte-counts")
    {
        byte_counts = value;
        byte_counts.value_namespace = name_space;
        byte_counts.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packet-counts")
    {
        packet_counts.yfilter = yfilter;
    }
    if(value_path == "byte-counts")
    {
        byte_counts.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::DispostionStats::MacMove::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packet-counts" || name == "byte-counts")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber::SequenceNumber()
    :
    sequence_number_sent{YType::uint32, "sequence-number-sent"},
    sequence_number_expected{YType::uint32, "sequence-number-expected"},
    bypassed_inbound_sequence_packet{YType::uint64, "bypassed-inbound-sequence-packet"},
    bypassed_out_sequence_packet{YType::uint64, "bypassed-out-sequence-packet"}
{

    yang_name = "sequence-number"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber::~SequenceNumber()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber::has_data() const
{
    if (is_presence_container) return true;
    return sequence_number_sent.is_set
	|| sequence_number_expected.is_set
	|| bypassed_inbound_sequence_packet.is_set
	|| bypassed_out_sequence_packet.is_set;
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence_number_sent.yfilter)
	|| ydk::is_set(sequence_number_expected.yfilter)
	|| ydk::is_set(bypassed_inbound_sequence_packet.yfilter)
	|| ydk::is_set(bypassed_out_sequence_packet.yfilter);
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sequence-number";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence_number_sent.is_set || is_set(sequence_number_sent.yfilter)) leaf_name_data.push_back(sequence_number_sent.get_name_leafdata());
    if (sequence_number_expected.is_set || is_set(sequence_number_expected.yfilter)) leaf_name_data.push_back(sequence_number_expected.get_name_leafdata());
    if (bypassed_inbound_sequence_packet.is_set || is_set(bypassed_inbound_sequence_packet.yfilter)) leaf_name_data.push_back(bypassed_inbound_sequence_packet.get_name_leafdata());
    if (bypassed_out_sequence_packet.is_set || is_set(bypassed_out_sequence_packet.yfilter)) leaf_name_data.push_back(bypassed_out_sequence_packet.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent = value;
        sequence_number_sent.value_namespace = name_space;
        sequence_number_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected = value;
        sequence_number_expected.value_namespace = name_space;
        sequence_number_expected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bypassed-inbound-sequence-packet")
    {
        bypassed_inbound_sequence_packet = value;
        bypassed_inbound_sequence_packet.value_namespace = name_space;
        bypassed_inbound_sequence_packet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bypassed-out-sequence-packet")
    {
        bypassed_out_sequence_packet = value;
        bypassed_out_sequence_packet.value_namespace = name_space;
        bypassed_out_sequence_packet.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence-number-sent")
    {
        sequence_number_sent.yfilter = yfilter;
    }
    if(value_path == "sequence-number-expected")
    {
        sequence_number_expected.yfilter = yfilter;
    }
    if(value_path == "bypassed-inbound-sequence-packet")
    {
        bypassed_inbound_sequence_packet.yfilter = yfilter;
    }
    if(value_path == "bypassed-out-sequence-packet")
    {
        bypassed_out_sequence_packet.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::Statistics::SequenceNumber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sequence-number-sent" || name == "sequence-number-expected" || name == "bypassed-inbound-sequence-packet" || name == "bypassed-out-sequence-packet")
        return true;
    return false;
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::P2mpPw::P2mpPw()
    :
    local_available{YType::boolean, "local-available"},
    local_label{YType::uint32, "local-label"},
    local_ptree_type{YType::enumeration, "local-ptree-type"},
    local_tunnel_id{YType::uint32, "local-tunnel-id"},
    local_extended_tunnel_id{YType::str, "local-extended-tunnel-id"},
    local_p2mp_id{YType::uint32, "local-p2mp-id"},
    local_flags{YType::uint8, "local-flags"},
    remote_available{YType::boolean, "remote-available"},
    remote_label{YType::uint32, "remote-label"},
    remote_ptree_type{YType::enumeration, "remote-ptree-type"},
    remote_tunnel_id{YType::uint32, "remote-tunnel-id"},
    remote_extended_tunnel_id{YType::str, "remote-extended-tunnel-id"},
    remote_p2mp_id{YType::uint32, "remote-p2mp-id"},
    remote_flags{YType::uint8, "remote-flags"}
{

    yang_name = "p2mp-pw"; yang_parent_name = "pseudowire"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::P2mpPw::~P2mpPw()
{
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::P2mpPw::has_data() const
{
    if (is_presence_container) return true;
    return local_available.is_set
	|| local_label.is_set
	|| local_ptree_type.is_set
	|| local_tunnel_id.is_set
	|| local_extended_tunnel_id.is_set
	|| local_p2mp_id.is_set
	|| local_flags.is_set
	|| remote_available.is_set
	|| remote_label.is_set
	|| remote_ptree_type.is_set
	|| remote_tunnel_id.is_set
	|| remote_extended_tunnel_id.is_set
	|| remote_p2mp_id.is_set
	|| remote_flags.is_set;
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::P2mpPw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_available.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(local_ptree_type.yfilter)
	|| ydk::is_set(local_tunnel_id.yfilter)
	|| ydk::is_set(local_extended_tunnel_id.yfilter)
	|| ydk::is_set(local_p2mp_id.yfilter)
	|| ydk::is_set(local_flags.yfilter)
	|| ydk::is_set(remote_available.yfilter)
	|| ydk::is_set(remote_label.yfilter)
	|| ydk::is_set(remote_ptree_type.yfilter)
	|| ydk::is_set(remote_tunnel_id.yfilter)
	|| ydk::is_set(remote_extended_tunnel_id.yfilter)
	|| ydk::is_set(remote_p2mp_id.yfilter)
	|| ydk::is_set(remote_flags.yfilter);
}

std::string L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::P2mpPw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-pw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::P2mpPw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_available.is_set || is_set(local_available.yfilter)) leaf_name_data.push_back(local_available.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (local_ptree_type.is_set || is_set(local_ptree_type.yfilter)) leaf_name_data.push_back(local_ptree_type.get_name_leafdata());
    if (local_tunnel_id.is_set || is_set(local_tunnel_id.yfilter)) leaf_name_data.push_back(local_tunnel_id.get_name_leafdata());
    if (local_extended_tunnel_id.is_set || is_set(local_extended_tunnel_id.yfilter)) leaf_name_data.push_back(local_extended_tunnel_id.get_name_leafdata());
    if (local_p2mp_id.is_set || is_set(local_p2mp_id.yfilter)) leaf_name_data.push_back(local_p2mp_id.get_name_leafdata());
    if (local_flags.is_set || is_set(local_flags.yfilter)) leaf_name_data.push_back(local_flags.get_name_leafdata());
    if (remote_available.is_set || is_set(remote_available.yfilter)) leaf_name_data.push_back(remote_available.get_name_leafdata());
    if (remote_label.is_set || is_set(remote_label.yfilter)) leaf_name_data.push_back(remote_label.get_name_leafdata());
    if (remote_ptree_type.is_set || is_set(remote_ptree_type.yfilter)) leaf_name_data.push_back(remote_ptree_type.get_name_leafdata());
    if (remote_tunnel_id.is_set || is_set(remote_tunnel_id.yfilter)) leaf_name_data.push_back(remote_tunnel_id.get_name_leafdata());
    if (remote_extended_tunnel_id.is_set || is_set(remote_extended_tunnel_id.yfilter)) leaf_name_data.push_back(remote_extended_tunnel_id.get_name_leafdata());
    if (remote_p2mp_id.is_set || is_set(remote_p2mp_id.yfilter)) leaf_name_data.push_back(remote_p2mp_id.get_name_leafdata());
    if (remote_flags.is_set || is_set(remote_flags.yfilter)) leaf_name_data.push_back(remote_flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::P2mpPw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::P2mpPw::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::P2mpPw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-available")
    {
        local_available = value;
        local_available.value_namespace = name_space;
        local_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-ptree-type")
    {
        local_ptree_type = value;
        local_ptree_type.value_namespace = name_space;
        local_ptree_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-tunnel-id")
    {
        local_tunnel_id = value;
        local_tunnel_id.value_namespace = name_space;
        local_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-extended-tunnel-id")
    {
        local_extended_tunnel_id = value;
        local_extended_tunnel_id.value_namespace = name_space;
        local_extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-p2mp-id")
    {
        local_p2mp_id = value;
        local_p2mp_id.value_namespace = name_space;
        local_p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-flags")
    {
        local_flags = value;
        local_flags.value_namespace = name_space;
        local_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-available")
    {
        remote_available = value;
        remote_available.value_namespace = name_space;
        remote_available.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-label")
    {
        remote_label = value;
        remote_label.value_namespace = name_space;
        remote_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-ptree-type")
    {
        remote_ptree_type = value;
        remote_ptree_type.value_namespace = name_space;
        remote_ptree_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-tunnel-id")
    {
        remote_tunnel_id = value;
        remote_tunnel_id.value_namespace = name_space;
        remote_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-extended-tunnel-id")
    {
        remote_extended_tunnel_id = value;
        remote_extended_tunnel_id.value_namespace = name_space;
        remote_extended_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-p2mp-id")
    {
        remote_p2mp_id = value;
        remote_p2mp_id.value_namespace = name_space;
        remote_p2mp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-flags")
    {
        remote_flags = value;
        remote_flags.value_namespace = name_space;
        remote_flags.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::P2mpPw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-available")
    {
        local_available.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "local-ptree-type")
    {
        local_ptree_type.yfilter = yfilter;
    }
    if(value_path == "local-tunnel-id")
    {
        local_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "local-extended-tunnel-id")
    {
        local_extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "local-p2mp-id")
    {
        local_p2mp_id.yfilter = yfilter;
    }
    if(value_path == "local-flags")
    {
        local_flags.yfilter = yfilter;
    }
    if(value_path == "remote-available")
    {
        remote_available.yfilter = yfilter;
    }
    if(value_path == "remote-label")
    {
        remote_label.yfilter = yfilter;
    }
    if(value_path == "remote-ptree-type")
    {
        remote_ptree_type.yfilter = yfilter;
    }
    if(value_path == "remote-tunnel-id")
    {
        remote_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "remote-extended-tunnel-id")
    {
        remote_extended_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "remote-p2mp-id")
    {
        remote_p2mp_id.yfilter = yfilter;
    }
    if(value_path == "remote-flags")
    {
        remote_flags.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::FlexibleXconnectServices::FlexibleXconnectService::FlexibleXconnectServiceInfo::Pseudowire::P2mpPw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-available" || name == "local-label" || name == "local-ptree-type" || name == "local-tunnel-id" || name == "local-extended-tunnel-id" || name == "local-p2mp-id" || name == "local-flags" || name == "remote-available" || name == "remote-label" || name == "remote-ptree-type" || name == "remote-tunnel-id" || name == "remote-extended-tunnel-id" || name == "remote-p2mp-id" || name == "remote-flags")
        return true;
    return false;
}

L2vpnv2::Active::XconnectBrief::XconnectBrief()
    :
    main_total_up{YType::uint32, "main-total-up"},
    main_total_down{YType::uint32, "main-total-down"},
    main_total_unresolved{YType::uint32, "main-total-unresolved"},
    undefined_xc{YType::uint32, "undefined-xc"},
    memory_state{YType::enumeration, "memory-state"}
        ,
    encapsulation_report_matrix(this, {})
    , encapsulation_total(this, {})
{

    yang_name = "xconnect-brief"; yang_parent_name = "active"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Active::XconnectBrief::~XconnectBrief()
{
}

bool L2vpnv2::Active::XconnectBrief::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<encapsulation_report_matrix.len(); index++)
    {
        if(encapsulation_report_matrix[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<encapsulation_total.len(); index++)
    {
        if(encapsulation_total[index]->has_data())
            return true;
    }
    return main_total_up.is_set
	|| main_total_down.is_set
	|| main_total_unresolved.is_set
	|| undefined_xc.is_set
	|| memory_state.is_set;
}

bool L2vpnv2::Active::XconnectBrief::has_operation() const
{
    for (std::size_t index=0; index<encapsulation_report_matrix.len(); index++)
    {
        if(encapsulation_report_matrix[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<encapsulation_total.len(); index++)
    {
        if(encapsulation_total[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(main_total_up.yfilter)
	|| ydk::is_set(main_total_down.yfilter)
	|| ydk::is_set(main_total_unresolved.yfilter)
	|| ydk::is_set(undefined_xc.yfilter)
	|| ydk::is_set(memory_state.yfilter);
}

std::string L2vpnv2::Active::XconnectBrief::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Active::XconnectBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-brief";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::XconnectBrief::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (main_total_up.is_set || is_set(main_total_up.yfilter)) leaf_name_data.push_back(main_total_up.get_name_leafdata());
    if (main_total_down.is_set || is_set(main_total_down.yfilter)) leaf_name_data.push_back(main_total_down.get_name_leafdata());
    if (main_total_unresolved.is_set || is_set(main_total_unresolved.yfilter)) leaf_name_data.push_back(main_total_unresolved.get_name_leafdata());
    if (undefined_xc.is_set || is_set(undefined_xc.yfilter)) leaf_name_data.push_back(undefined_xc.get_name_leafdata());
    if (memory_state.is_set || is_set(memory_state.yfilter)) leaf_name_data.push_back(memory_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::XconnectBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "encapsulation-report-matrix")
    {
        auto ent_ = std::make_shared<L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix>();
        ent_->parent = this;
        encapsulation_report_matrix.append(ent_);
        return ent_;
    }

    if(child_yang_name == "encapsulation-total")
    {
        auto ent_ = std::make_shared<L2vpnv2::Active::XconnectBrief::EncapsulationTotal>();
        ent_->parent = this;
        encapsulation_total.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::XconnectBrief::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : encapsulation_report_matrix.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : encapsulation_total.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Active::XconnectBrief::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "main-total-up")
    {
        main_total_up = value;
        main_total_up.value_namespace = name_space;
        main_total_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-total-down")
    {
        main_total_down = value;
        main_total_down.value_namespace = name_space;
        main_total_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "main-total-unresolved")
    {
        main_total_unresolved = value;
        main_total_unresolved.value_namespace = name_space;
        main_total_unresolved.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "undefined-xc")
    {
        undefined_xc = value;
        undefined_xc.value_namespace = name_space;
        undefined_xc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory-state")
    {
        memory_state = value;
        memory_state.value_namespace = name_space;
        memory_state.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::XconnectBrief::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "main-total-up")
    {
        main_total_up.yfilter = yfilter;
    }
    if(value_path == "main-total-down")
    {
        main_total_down.yfilter = yfilter;
    }
    if(value_path == "main-total-unresolved")
    {
        main_total_unresolved.yfilter = yfilter;
    }
    if(value_path == "undefined-xc")
    {
        undefined_xc.yfilter = yfilter;
    }
    if(value_path == "memory-state")
    {
        memory_state.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::XconnectBrief::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "encapsulation-report-matrix" || name == "encapsulation-total" || name == "main-total-up" || name == "main-total-down" || name == "main-total-unresolved" || name == "undefined-xc" || name == "memory-state")
        return true;
    return false;
}

L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::EncapsulationReportMatrix()
    :
    ac1(this, {})
{

    yang_name = "encapsulation-report-matrix"; yang_parent_name = "xconnect-brief"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::~EncapsulationReportMatrix()
{
}

bool L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ac1.len(); index++)
    {
        if(ac1[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::has_operation() const
{
    for (std::size_t index=0; index<ac1.len(); index++)
    {
        if(ac1[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnect-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation-report-matrix";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ac1")
    {
        auto ent_ = std::make_shared<L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1>();
        ent_->parent = this;
        ac1.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ac1.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ac1")
        return true;
    return false;
}

L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac1()
    :
    ac2(this, {})
{

    yang_name = "ac1"; yang_parent_name = "encapsulation-report-matrix"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::~Ac1()
{
}

bool L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ac2.len(); index++)
    {
        if(ac2[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::has_operation() const
{
    for (std::size_t index=0; index<ac2.len(); index++)
    {
        if(ac2[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnect-brief/encapsulation-report-matrix/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac1";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ac2")
    {
        auto ent_ = std::make_shared<L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2>();
        ent_->parent = this;
        ac2.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ac2.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ac2")
        return true;
    return false;
}

L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::Ac2()
    :
    psn_type{YType::enumeration, "psn-type"},
    ac1_encapsulation{YType::enumeration, "ac1-encapsulation"},
    ac2_encapsulation{YType::enumeration, "ac2-encapsulation"}
        ,
    up_count(this, {})
    , down_count(this, {})
    , unresolved_count(this, {})
{

    yang_name = "ac2"; yang_parent_name = "ac1"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::~Ac2()
{
}

bool L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<up_count.len(); index++)
    {
        if(up_count[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<down_count.len(); index++)
    {
        if(down_count[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<unresolved_count.len(); index++)
    {
        if(unresolved_count[index]->has_data())
            return true;
    }
    return psn_type.is_set
	|| ac1_encapsulation.is_set
	|| ac2_encapsulation.is_set;
}

bool L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::has_operation() const
{
    for (std::size_t index=0; index<up_count.len(); index++)
    {
        if(up_count[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<down_count.len(); index++)
    {
        if(down_count[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<unresolved_count.len(); index++)
    {
        if(unresolved_count[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(psn_type.yfilter)
	|| ydk::is_set(ac1_encapsulation.yfilter)
	|| ydk::is_set(ac2_encapsulation.yfilter);
}

std::string L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnect-brief/encapsulation-report-matrix/ac1/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac2";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (psn_type.is_set || is_set(psn_type.yfilter)) leaf_name_data.push_back(psn_type.get_name_leafdata());
    if (ac1_encapsulation.is_set || is_set(ac1_encapsulation.yfilter)) leaf_name_data.push_back(ac1_encapsulation.get_name_leafdata());
    if (ac2_encapsulation.is_set || is_set(ac2_encapsulation.yfilter)) leaf_name_data.push_back(ac2_encapsulation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "up-count")
    {
        auto ent_ = std::make_shared<L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UpCount>();
        ent_->parent = this;
        up_count.append(ent_);
        return ent_;
    }

    if(child_yang_name == "down-count")
    {
        auto ent_ = std::make_shared<L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::DownCount>();
        ent_->parent = this;
        down_count.append(ent_);
        return ent_;
    }

    if(child_yang_name == "unresolved-count")
    {
        auto ent_ = std::make_shared<L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UnresolvedCount>();
        ent_->parent = this;
        unresolved_count.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : up_count.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : down_count.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : unresolved_count.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "psn-type")
    {
        psn_type = value;
        psn_type.value_namespace = name_space;
        psn_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac1-encapsulation")
    {
        ac1_encapsulation = value;
        ac1_encapsulation.value_namespace = name_space;
        ac1_encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac2-encapsulation")
    {
        ac2_encapsulation = value;
        ac2_encapsulation.value_namespace = name_space;
        ac2_encapsulation.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "psn-type")
    {
        psn_type.yfilter = yfilter;
    }
    if(value_path == "ac1-encapsulation")
    {
        ac1_encapsulation.yfilter = yfilter;
    }
    if(value_path == "ac2-encapsulation")
    {
        ac2_encapsulation.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "up-count" || name == "down-count" || name == "unresolved-count" || name == "psn-type" || name == "ac1-encapsulation" || name == "ac2-encapsulation")
        return true;
    return false;
}

L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UpCount::UpCount()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "up-count"; yang_parent_name = "ac2"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UpCount::~UpCount()
{
}

bool L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UpCount::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UpCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UpCount::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnect-brief/encapsulation-report-matrix/ac1/ac2/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UpCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "up-count";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UpCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UpCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UpCount::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UpCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UpCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UpCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::DownCount::DownCount()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "down-count"; yang_parent_name = "ac2"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::DownCount::~DownCount()
{
}

bool L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::DownCount::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::DownCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::DownCount::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnect-brief/encapsulation-report-matrix/ac1/ac2/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::DownCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "down-count";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::DownCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::DownCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::DownCount::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::DownCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::DownCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::DownCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UnresolvedCount::UnresolvedCount()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "unresolved-count"; yang_parent_name = "ac2"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UnresolvedCount::~UnresolvedCount()
{
}

bool L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UnresolvedCount::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UnresolvedCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UnresolvedCount::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnect-brief/encapsulation-report-matrix/ac1/ac2/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UnresolvedCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unresolved-count";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UnresolvedCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UnresolvedCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UnresolvedCount::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UnresolvedCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UnresolvedCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::XconnectBrief::EncapsulationReportMatrix::Ac1::Ac2::UnresolvedCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2vpnv2::Active::XconnectBrief::EncapsulationTotal::EncapsulationTotal()
    :
    psn_type{YType::enumeration, "psn-type"},
    ac1_encapsulation{YType::enumeration, "ac1-encapsulation"},
    ac2_encapsulation{YType::enumeration, "ac2-encapsulation"}
        ,
    up_count(this, {})
    , down_count(this, {})
    , unresolved_count(this, {})
{

    yang_name = "encapsulation-total"; yang_parent_name = "xconnect-brief"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Active::XconnectBrief::EncapsulationTotal::~EncapsulationTotal()
{
}

bool L2vpnv2::Active::XconnectBrief::EncapsulationTotal::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<up_count.len(); index++)
    {
        if(up_count[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<down_count.len(); index++)
    {
        if(down_count[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<unresolved_count.len(); index++)
    {
        if(unresolved_count[index]->has_data())
            return true;
    }
    return psn_type.is_set
	|| ac1_encapsulation.is_set
	|| ac2_encapsulation.is_set;
}

bool L2vpnv2::Active::XconnectBrief::EncapsulationTotal::has_operation() const
{
    for (std::size_t index=0; index<up_count.len(); index++)
    {
        if(up_count[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<down_count.len(); index++)
    {
        if(down_count[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<unresolved_count.len(); index++)
    {
        if(unresolved_count[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(psn_type.yfilter)
	|| ydk::is_set(ac1_encapsulation.yfilter)
	|| ydk::is_set(ac2_encapsulation.yfilter);
}

std::string L2vpnv2::Active::XconnectBrief::EncapsulationTotal::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnect-brief/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Active::XconnectBrief::EncapsulationTotal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encapsulation-total";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::XconnectBrief::EncapsulationTotal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (psn_type.is_set || is_set(psn_type.yfilter)) leaf_name_data.push_back(psn_type.get_name_leafdata());
    if (ac1_encapsulation.is_set || is_set(ac1_encapsulation.yfilter)) leaf_name_data.push_back(ac1_encapsulation.get_name_leafdata());
    if (ac2_encapsulation.is_set || is_set(ac2_encapsulation.yfilter)) leaf_name_data.push_back(ac2_encapsulation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::XconnectBrief::EncapsulationTotal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "up-count")
    {
        auto ent_ = std::make_shared<L2vpnv2::Active::XconnectBrief::EncapsulationTotal::UpCount>();
        ent_->parent = this;
        up_count.append(ent_);
        return ent_;
    }

    if(child_yang_name == "down-count")
    {
        auto ent_ = std::make_shared<L2vpnv2::Active::XconnectBrief::EncapsulationTotal::DownCount>();
        ent_->parent = this;
        down_count.append(ent_);
        return ent_;
    }

    if(child_yang_name == "unresolved-count")
    {
        auto ent_ = std::make_shared<L2vpnv2::Active::XconnectBrief::EncapsulationTotal::UnresolvedCount>();
        ent_->parent = this;
        unresolved_count.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::XconnectBrief::EncapsulationTotal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : up_count.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : down_count.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : unresolved_count.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Active::XconnectBrief::EncapsulationTotal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "psn-type")
    {
        psn_type = value;
        psn_type.value_namespace = name_space;
        psn_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac1-encapsulation")
    {
        ac1_encapsulation = value;
        ac1_encapsulation.value_namespace = name_space;
        ac1_encapsulation.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac2-encapsulation")
    {
        ac2_encapsulation = value;
        ac2_encapsulation.value_namespace = name_space;
        ac2_encapsulation.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::XconnectBrief::EncapsulationTotal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "psn-type")
    {
        psn_type.yfilter = yfilter;
    }
    if(value_path == "ac1-encapsulation")
    {
        ac1_encapsulation.yfilter = yfilter;
    }
    if(value_path == "ac2-encapsulation")
    {
        ac2_encapsulation.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::XconnectBrief::EncapsulationTotal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "up-count" || name == "down-count" || name == "unresolved-count" || name == "psn-type" || name == "ac1-encapsulation" || name == "ac2-encapsulation")
        return true;
    return false;
}

L2vpnv2::Active::XconnectBrief::EncapsulationTotal::UpCount::UpCount()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "up-count"; yang_parent_name = "encapsulation-total"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Active::XconnectBrief::EncapsulationTotal::UpCount::~UpCount()
{
}

bool L2vpnv2::Active::XconnectBrief::EncapsulationTotal::UpCount::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool L2vpnv2::Active::XconnectBrief::EncapsulationTotal::UpCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2vpnv2::Active::XconnectBrief::EncapsulationTotal::UpCount::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnect-brief/encapsulation-total/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Active::XconnectBrief::EncapsulationTotal::UpCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "up-count";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::XconnectBrief::EncapsulationTotal::UpCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::XconnectBrief::EncapsulationTotal::UpCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::XconnectBrief::EncapsulationTotal::UpCount::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Active::XconnectBrief::EncapsulationTotal::UpCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::XconnectBrief::EncapsulationTotal::UpCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::XconnectBrief::EncapsulationTotal::UpCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2vpnv2::Active::XconnectBrief::EncapsulationTotal::DownCount::DownCount()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "down-count"; yang_parent_name = "encapsulation-total"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Active::XconnectBrief::EncapsulationTotal::DownCount::~DownCount()
{
}

bool L2vpnv2::Active::XconnectBrief::EncapsulationTotal::DownCount::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool L2vpnv2::Active::XconnectBrief::EncapsulationTotal::DownCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2vpnv2::Active::XconnectBrief::EncapsulationTotal::DownCount::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnect-brief/encapsulation-total/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Active::XconnectBrief::EncapsulationTotal::DownCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "down-count";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::XconnectBrief::EncapsulationTotal::DownCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::XconnectBrief::EncapsulationTotal::DownCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::XconnectBrief::EncapsulationTotal::DownCount::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Active::XconnectBrief::EncapsulationTotal::DownCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::XconnectBrief::EncapsulationTotal::DownCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::XconnectBrief::EncapsulationTotal::DownCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2vpnv2::Active::XconnectBrief::EncapsulationTotal::UnresolvedCount::UnresolvedCount()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "unresolved-count"; yang_parent_name = "encapsulation-total"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Active::XconnectBrief::EncapsulationTotal::UnresolvedCount::~UnresolvedCount()
{
}

bool L2vpnv2::Active::XconnectBrief::EncapsulationTotal::UnresolvedCount::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool L2vpnv2::Active::XconnectBrief::EncapsulationTotal::UnresolvedCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2vpnv2::Active::XconnectBrief::EncapsulationTotal::UnresolvedCount::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/active/xconnect-brief/encapsulation-total/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Active::XconnectBrief::EncapsulationTotal::UnresolvedCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unresolved-count";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Active::XconnectBrief::EncapsulationTotal::UnresolvedCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Active::XconnectBrief::EncapsulationTotal::UnresolvedCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Active::XconnectBrief::EncapsulationTotal::UnresolvedCount::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Active::XconnectBrief::EncapsulationTotal::UnresolvedCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Active::XconnectBrief::EncapsulationTotal::UnresolvedCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2vpnv2::Active::XconnectBrief::EncapsulationTotal::UnresolvedCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2vpnv2::Nodes::Nodes()
    :
    node(this, {"node_id"})
{

    yang_name = "nodes"; yang_parent_name = "l2vpnv2"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Nodes::~Nodes()
{
}

bool L2vpnv2::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpnv2::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpnv2::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto ent_ = std::make_shared<L2vpnv2::Nodes::Node>();
        ent_->parent = this;
        node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : node.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnv2::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnv2::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::Node()
    :
    node_id{YType::str, "node-id"}
        ,
    discoveries(std::make_shared<L2vpnv2::Nodes::Node::Discoveries>())
    , flexible_xconnect_service_summary(std::make_shared<L2vpnv2::Nodes::Node::FlexibleXconnectServiceSummary>())
    , main_interfaces(std::make_shared<L2vpnv2::Nodes::Node::MainInterfaces>())
    , iccp_sm(std::make_shared<L2vpnv2::Nodes::Node::IccpSm>())
    , bridge_summary(std::make_shared<L2vpnv2::Nodes::Node::BridgeSummary>())
    , nsr(std::make_shared<L2vpnv2::Nodes::Node::Nsr>())
    , preferred_paths(std::make_shared<L2vpnv2::Nodes::Node::PreferredPaths>())
    , pseudowire_headend(std::make_shared<L2vpnv2::Nodes::Node::PseudowireHeadend>())
    , global_settings(std::make_shared<L2vpnv2::Nodes::Node::GlobalSettings>())
    , pwr(std::make_shared<L2vpnv2::Nodes::Node::Pwr>())
    , xconnect_mp2mp_ce2ces(std::make_shared<L2vpnv2::Nodes::Node::XconnectMp2mpCe2ces>())
    , xconnects(std::make_shared<L2vpnv2::Nodes::Node::Xconnects>())
    , xconnect_groups(std::make_shared<L2vpnv2::Nodes::Node::XconnectGroups>())
    , xconnect_mp2mps(std::make_shared<L2vpnv2::Nodes::Node::XconnectMp2mps>())
    , indexes(std::make_shared<L2vpnv2::Nodes::Node::Indexes>())
    , xconnect_summary(std::make_shared<L2vpnv2::Nodes::Node::XconnectSummary>())
    , proc_fsm(std::make_shared<L2vpnv2::Nodes::Node::ProcFsm>())
    , mstp_ports(std::make_shared<L2vpnv2::Nodes::Node::MstpPorts>())
    , generic_interface_list_details(std::make_shared<L2vpnv2::Nodes::Node::GenericInterfaceListDetails>())
    , l2vpn_resource_state(std::make_shared<L2vpnv2::Nodes::Node::L2vpnResourceState>())
    , bridge_domains(std::make_shared<L2vpnv2::Nodes::Node::BridgeDomains>())
    , discovery_summary(std::make_shared<L2vpnv2::Nodes::Node::DiscoverySummary>())
    , g8032(std::make_shared<L2vpnv2::Nodes::Node::G8032>())
    , pseudowire_classes(std::make_shared<L2vpnv2::Nodes::Node::PseudowireClasses>())
    , l2vpn_collaborators(std::make_shared<L2vpnv2::Nodes::Node::L2vpnCollaborators>())
    , mvrp(std::make_shared<L2vpnv2::Nodes::Node::Mvrp>())
    , generic_interface_lists(std::make_shared<L2vpnv2::Nodes::Node::GenericInterfaceLists>())
    , mstp_vlans(std::make_shared<L2vpnv2::Nodes::Node::MstpVlans>())
    , l2vpn_pbb_bsa(std::make_shared<L2vpnv2::Nodes::Node::L2vpnPbbBsa>())
    , flexible_xconnect_services(std::make_shared<L2vpnv2::Nodes::Node::FlexibleXconnectServices>())
    , xconnect_brief(std::make_shared<L2vpnv2::Nodes::Node::XconnectBrief>())
{
    discoveries->parent = this;
    flexible_xconnect_service_summary->parent = this;
    main_interfaces->parent = this;
    iccp_sm->parent = this;
    bridge_summary->parent = this;
    nsr->parent = this;
    preferred_paths->parent = this;
    pseudowire_headend->parent = this;
    global_settings->parent = this;
    pwr->parent = this;
    xconnect_mp2mp_ce2ces->parent = this;
    xconnects->parent = this;
    xconnect_groups->parent = this;
    xconnect_mp2mps->parent = this;
    indexes->parent = this;
    xconnect_summary->parent = this;
    proc_fsm->parent = this;
    mstp_ports->parent = this;
    generic_interface_list_details->parent = this;
    l2vpn_resource_state->parent = this;
    bridge_domains->parent = this;
    discovery_summary->parent = this;
    g8032->parent = this;
    pseudowire_classes->parent = this;
    l2vpn_collaborators->parent = this;
    mvrp->parent = this;
    generic_interface_lists->parent = this;
    mstp_vlans->parent = this;
    l2vpn_pbb_bsa->parent = this;
    flexible_xconnect_services->parent = this;
    xconnect_brief->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Nodes::Node::~Node()
{
}

bool L2vpnv2::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_id.is_set
	|| (discoveries !=  nullptr && discoveries->has_data())
	|| (flexible_xconnect_service_summary !=  nullptr && flexible_xconnect_service_summary->has_data())
	|| (main_interfaces !=  nullptr && main_interfaces->has_data())
	|| (iccp_sm !=  nullptr && iccp_sm->has_data())
	|| (bridge_summary !=  nullptr && bridge_summary->has_data())
	|| (nsr !=  nullptr && nsr->has_data())
	|| (preferred_paths !=  nullptr && preferred_paths->has_data())
	|| (pseudowire_headend !=  nullptr && pseudowire_headend->has_data())
	|| (global_settings !=  nullptr && global_settings->has_data())
	|| (pwr !=  nullptr && pwr->has_data())
	|| (xconnect_mp2mp_ce2ces !=  nullptr && xconnect_mp2mp_ce2ces->has_data())
	|| (xconnects !=  nullptr && xconnects->has_data())
	|| (xconnect_groups !=  nullptr && xconnect_groups->has_data())
	|| (xconnect_mp2mps !=  nullptr && xconnect_mp2mps->has_data())
	|| (indexes !=  nullptr && indexes->has_data())
	|| (xconnect_summary !=  nullptr && xconnect_summary->has_data())
	|| (proc_fsm !=  nullptr && proc_fsm->has_data())
	|| (mstp_ports !=  nullptr && mstp_ports->has_data())
	|| (generic_interface_list_details !=  nullptr && generic_interface_list_details->has_data())
	|| (l2vpn_resource_state !=  nullptr && l2vpn_resource_state->has_data())
	|| (bridge_domains !=  nullptr && bridge_domains->has_data())
	|| (discovery_summary !=  nullptr && discovery_summary->has_data())
	|| (g8032 !=  nullptr && g8032->has_data())
	|| (pseudowire_classes !=  nullptr && pseudowire_classes->has_data())
	|| (l2vpn_collaborators !=  nullptr && l2vpn_collaborators->has_data())
	|| (mvrp !=  nullptr && mvrp->has_data())
	|| (generic_interface_lists !=  nullptr && generic_interface_lists->has_data())
	|| (mstp_vlans !=  nullptr && mstp_vlans->has_data())
	|| (l2vpn_pbb_bsa !=  nullptr && l2vpn_pbb_bsa->has_data())
	|| (flexible_xconnect_services !=  nullptr && flexible_xconnect_services->has_data())
	|| (xconnect_brief !=  nullptr && xconnect_brief->has_data());
}

bool L2vpnv2::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| (discoveries !=  nullptr && discoveries->has_operation())
	|| (flexible_xconnect_service_summary !=  nullptr && flexible_xconnect_service_summary->has_operation())
	|| (main_interfaces !=  nullptr && main_interfaces->has_operation())
	|| (iccp_sm !=  nullptr && iccp_sm->has_operation())
	|| (bridge_summary !=  nullptr && bridge_summary->has_operation())
	|| (nsr !=  nullptr && nsr->has_operation())
	|| (preferred_paths !=  nullptr && preferred_paths->has_operation())
	|| (pseudowire_headend !=  nullptr && pseudowire_headend->has_operation())
	|| (global_settings !=  nullptr && global_settings->has_operation())
	|| (pwr !=  nullptr && pwr->has_operation())
	|| (xconnect_mp2mp_ce2ces !=  nullptr && xconnect_mp2mp_ce2ces->has_operation())
	|| (xconnects !=  nullptr && xconnects->has_operation())
	|| (xconnect_groups !=  nullptr && xconnect_groups->has_operation())
	|| (xconnect_mp2mps !=  nullptr && xconnect_mp2mps->has_operation())
	|| (indexes !=  nullptr && indexes->has_operation())
	|| (xconnect_summary !=  nullptr && xconnect_summary->has_operation())
	|| (proc_fsm !=  nullptr && proc_fsm->has_operation())
	|| (mstp_ports !=  nullptr && mstp_ports->has_operation())
	|| (generic_interface_list_details !=  nullptr && generic_interface_list_details->has_operation())
	|| (l2vpn_resource_state !=  nullptr && l2vpn_resource_state->has_operation())
	|| (bridge_domains !=  nullptr && bridge_domains->has_operation())
	|| (discovery_summary !=  nullptr && discovery_summary->has_operation())
	|| (g8032 !=  nullptr && g8032->has_operation())
	|| (pseudowire_classes !=  nullptr && pseudowire_classes->has_operation())
	|| (l2vpn_collaborators !=  nullptr && l2vpn_collaborators->has_operation())
	|| (mvrp !=  nullptr && mvrp->has_operation())
	|| (generic_interface_lists !=  nullptr && generic_interface_lists->has_operation())
	|| (mstp_vlans !=  nullptr && mstp_vlans->has_operation())
	|| (l2vpn_pbb_bsa !=  nullptr && l2vpn_pbb_bsa->has_operation())
	|| (flexible_xconnect_services !=  nullptr && flexible_xconnect_services->has_operation())
	|| (xconnect_brief !=  nullptr && xconnect_brief->has_operation());
}

std::string L2vpnv2::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_id, "node-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discoveries")
    {
        if(discoveries == nullptr)
        {
            discoveries = std::make_shared<L2vpnv2::Nodes::Node::Discoveries>();
        }
        return discoveries;
    }

    if(child_yang_name == "flexible-xconnect-service-summary")
    {
        if(flexible_xconnect_service_summary == nullptr)
        {
            flexible_xconnect_service_summary = std::make_shared<L2vpnv2::Nodes::Node::FlexibleXconnectServiceSummary>();
        }
        return flexible_xconnect_service_summary;
    }

    if(child_yang_name == "main-interfaces")
    {
        if(main_interfaces == nullptr)
        {
            main_interfaces = std::make_shared<L2vpnv2::Nodes::Node::MainInterfaces>();
        }
        return main_interfaces;
    }

    if(child_yang_name == "iccp-sm")
    {
        if(iccp_sm == nullptr)
        {
            iccp_sm = std::make_shared<L2vpnv2::Nodes::Node::IccpSm>();
        }
        return iccp_sm;
    }

    if(child_yang_name == "bridge-summary")
    {
        if(bridge_summary == nullptr)
        {
            bridge_summary = std::make_shared<L2vpnv2::Nodes::Node::BridgeSummary>();
        }
        return bridge_summary;
    }

    if(child_yang_name == "nsr")
    {
        if(nsr == nullptr)
        {
            nsr = std::make_shared<L2vpnv2::Nodes::Node::Nsr>();
        }
        return nsr;
    }

    if(child_yang_name == "preferred-paths")
    {
        if(preferred_paths == nullptr)
        {
            preferred_paths = std::make_shared<L2vpnv2::Nodes::Node::PreferredPaths>();
        }
        return preferred_paths;
    }

    if(child_yang_name == "pseudowire-headend")
    {
        if(pseudowire_headend == nullptr)
        {
            pseudowire_headend = std::make_shared<L2vpnv2::Nodes::Node::PseudowireHeadend>();
        }
        return pseudowire_headend;
    }

    if(child_yang_name == "global-settings")
    {
        if(global_settings == nullptr)
        {
            global_settings = std::make_shared<L2vpnv2::Nodes::Node::GlobalSettings>();
        }
        return global_settings;
    }

    if(child_yang_name == "pwr")
    {
        if(pwr == nullptr)
        {
            pwr = std::make_shared<L2vpnv2::Nodes::Node::Pwr>();
        }
        return pwr;
    }

    if(child_yang_name == "xconnect-mp2mp-ce2ces")
    {
        if(xconnect_mp2mp_ce2ces == nullptr)
        {
            xconnect_mp2mp_ce2ces = std::make_shared<L2vpnv2::Nodes::Node::XconnectMp2mpCe2ces>();
        }
        return xconnect_mp2mp_ce2ces;
    }

    if(child_yang_name == "xconnects")
    {
        if(xconnects == nullptr)
        {
            xconnects = std::make_shared<L2vpnv2::Nodes::Node::Xconnects>();
        }
        return xconnects;
    }

    if(child_yang_name == "xconnect-groups")
    {
        if(xconnect_groups == nullptr)
        {
            xconnect_groups = std::make_shared<L2vpnv2::Nodes::Node::XconnectGroups>();
        }
        return xconnect_groups;
    }

    if(child_yang_name == "xconnect-mp2mps")
    {
        if(xconnect_mp2mps == nullptr)
        {
            xconnect_mp2mps = std::make_shared<L2vpnv2::Nodes::Node::XconnectMp2mps>();
        }
        return xconnect_mp2mps;
    }

    if(child_yang_name == "indexes")
    {
        if(indexes == nullptr)
        {
            indexes = std::make_shared<L2vpnv2::Nodes::Node::Indexes>();
        }
        return indexes;
    }

    if(child_yang_name == "xconnect-summary")
    {
        if(xconnect_summary == nullptr)
        {
            xconnect_summary = std::make_shared<L2vpnv2::Nodes::Node::XconnectSummary>();
        }
        return xconnect_summary;
    }

    if(child_yang_name == "proc-fsm")
    {
        if(proc_fsm == nullptr)
        {
            proc_fsm = std::make_shared<L2vpnv2::Nodes::Node::ProcFsm>();
        }
        return proc_fsm;
    }

    if(child_yang_name == "mstp-ports")
    {
        if(mstp_ports == nullptr)
        {
            mstp_ports = std::make_shared<L2vpnv2::Nodes::Node::MstpPorts>();
        }
        return mstp_ports;
    }

    if(child_yang_name == "generic-interface-list-details")
    {
        if(generic_interface_list_details == nullptr)
        {
            generic_interface_list_details = std::make_shared<L2vpnv2::Nodes::Node::GenericInterfaceListDetails>();
        }
        return generic_interface_list_details;
    }

    if(child_yang_name == "l2vpn-resource-state")
    {
        if(l2vpn_resource_state == nullptr)
        {
            l2vpn_resource_state = std::make_shared<L2vpnv2::Nodes::Node::L2vpnResourceState>();
        }
        return l2vpn_resource_state;
    }

    if(child_yang_name == "bridge-domains")
    {
        if(bridge_domains == nullptr)
        {
            bridge_domains = std::make_shared<L2vpnv2::Nodes::Node::BridgeDomains>();
        }
        return bridge_domains;
    }

    if(child_yang_name == "discovery-summary")
    {
        if(discovery_summary == nullptr)
        {
            discovery_summary = std::make_shared<L2vpnv2::Nodes::Node::DiscoverySummary>();
        }
        return discovery_summary;
    }

    if(child_yang_name == "g8032")
    {
        if(g8032 == nullptr)
        {
            g8032 = std::make_shared<L2vpnv2::Nodes::Node::G8032>();
        }
        return g8032;
    }

    if(child_yang_name == "pseudowire-classes")
    {
        if(pseudowire_classes == nullptr)
        {
            pseudowire_classes = std::make_shared<L2vpnv2::Nodes::Node::PseudowireClasses>();
        }
        return pseudowire_classes;
    }

    if(child_yang_name == "l2vpn-collaborators")
    {
        if(l2vpn_collaborators == nullptr)
        {
            l2vpn_collaborators = std::make_shared<L2vpnv2::Nodes::Node::L2vpnCollaborators>();
        }
        return l2vpn_collaborators;
    }

    if(child_yang_name == "mvrp")
    {
        if(mvrp == nullptr)
        {
            mvrp = std::make_shared<L2vpnv2::Nodes::Node::Mvrp>();
        }
        return mvrp;
    }

    if(child_yang_name == "generic-interface-lists")
    {
        if(generic_interface_lists == nullptr)
        {
            generic_interface_lists = std::make_shared<L2vpnv2::Nodes::Node::GenericInterfaceLists>();
        }
        return generic_interface_lists;
    }

    if(child_yang_name == "mstp-vlans")
    {
        if(mstp_vlans == nullptr)
        {
            mstp_vlans = std::make_shared<L2vpnv2::Nodes::Node::MstpVlans>();
        }
        return mstp_vlans;
    }

    if(child_yang_name == "l2vpn-pbb-bsa")
    {
        if(l2vpn_pbb_bsa == nullptr)
        {
            l2vpn_pbb_bsa = std::make_shared<L2vpnv2::Nodes::Node::L2vpnPbbBsa>();
        }
        return l2vpn_pbb_bsa;
    }

    if(child_yang_name == "flexible-xconnect-services")
    {
        if(flexible_xconnect_services == nullptr)
        {
            flexible_xconnect_services = std::make_shared<L2vpnv2::Nodes::Node::FlexibleXconnectServices>();
        }
        return flexible_xconnect_services;
    }

    if(child_yang_name == "xconnect-brief")
    {
        if(xconnect_brief == nullptr)
        {
            xconnect_brief = std::make_shared<L2vpnv2::Nodes::Node::XconnectBrief>();
        }
        return xconnect_brief;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(discoveries != nullptr)
    {
        _children["discoveries"] = discoveries;
    }

    if(flexible_xconnect_service_summary != nullptr)
    {
        _children["flexible-xconnect-service-summary"] = flexible_xconnect_service_summary;
    }

    if(main_interfaces != nullptr)
    {
        _children["main-interfaces"] = main_interfaces;
    }

    if(iccp_sm != nullptr)
    {
        _children["iccp-sm"] = iccp_sm;
    }

    if(bridge_summary != nullptr)
    {
        _children["bridge-summary"] = bridge_summary;
    }

    if(nsr != nullptr)
    {
        _children["nsr"] = nsr;
    }

    if(preferred_paths != nullptr)
    {
        _children["preferred-paths"] = preferred_paths;
    }

    if(pseudowire_headend != nullptr)
    {
        _children["pseudowire-headend"] = pseudowire_headend;
    }

    if(global_settings != nullptr)
    {
        _children["global-settings"] = global_settings;
    }

    if(pwr != nullptr)
    {
        _children["pwr"] = pwr;
    }

    if(xconnect_mp2mp_ce2ces != nullptr)
    {
        _children["xconnect-mp2mp-ce2ces"] = xconnect_mp2mp_ce2ces;
    }

    if(xconnects != nullptr)
    {
        _children["xconnects"] = xconnects;
    }

    if(xconnect_groups != nullptr)
    {
        _children["xconnect-groups"] = xconnect_groups;
    }

    if(xconnect_mp2mps != nullptr)
    {
        _children["xconnect-mp2mps"] = xconnect_mp2mps;
    }

    if(indexes != nullptr)
    {
        _children["indexes"] = indexes;
    }

    if(xconnect_summary != nullptr)
    {
        _children["xconnect-summary"] = xconnect_summary;
    }

    if(proc_fsm != nullptr)
    {
        _children["proc-fsm"] = proc_fsm;
    }

    if(mstp_ports != nullptr)
    {
        _children["mstp-ports"] = mstp_ports;
    }

    if(generic_interface_list_details != nullptr)
    {
        _children["generic-interface-list-details"] = generic_interface_list_details;
    }

    if(l2vpn_resource_state != nullptr)
    {
        _children["l2vpn-resource-state"] = l2vpn_resource_state;
    }

    if(bridge_domains != nullptr)
    {
        _children["bridge-domains"] = bridge_domains;
    }

    if(discovery_summary != nullptr)
    {
        _children["discovery-summary"] = discovery_summary;
    }

    if(g8032 != nullptr)
    {
        _children["g8032"] = g8032;
    }

    if(pseudowire_classes != nullptr)
    {
        _children["pseudowire-classes"] = pseudowire_classes;
    }

    if(l2vpn_collaborators != nullptr)
    {
        _children["l2vpn-collaborators"] = l2vpn_collaborators;
    }

    if(mvrp != nullptr)
    {
        _children["mvrp"] = mvrp;
    }

    if(generic_interface_lists != nullptr)
    {
        _children["generic-interface-lists"] = generic_interface_lists;
    }

    if(mstp_vlans != nullptr)
    {
        _children["mstp-vlans"] = mstp_vlans;
    }

    if(l2vpn_pbb_bsa != nullptr)
    {
        _children["l2vpn-pbb-bsa"] = l2vpn_pbb_bsa;
    }

    if(flexible_xconnect_services != nullptr)
    {
        _children["flexible-xconnect-services"] = flexible_xconnect_services;
    }

    if(xconnect_brief != nullptr)
    {
        _children["xconnect-brief"] = xconnect_brief;
    }

    return _children;
}

void L2vpnv2::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discoveries" || name == "flexible-xconnect-service-summary" || name == "main-interfaces" || name == "iccp-sm" || name == "bridge-summary" || name == "nsr" || name == "preferred-paths" || name == "pseudowire-headend" || name == "global-settings" || name == "pwr" || name == "xconnect-mp2mp-ce2ces" || name == "xconnects" || name == "xconnect-groups" || name == "xconnect-mp2mps" || name == "indexes" || name == "xconnect-summary" || name == "proc-fsm" || name == "mstp-ports" || name == "generic-interface-list-details" || name == "l2vpn-resource-state" || name == "bridge-domains" || name == "discovery-summary" || name == "g8032" || name == "pseudowire-classes" || name == "l2vpn-collaborators" || name == "mvrp" || name == "generic-interface-lists" || name == "mstp-vlans" || name == "l2vpn-pbb-bsa" || name == "flexible-xconnect-services" || name == "xconnect-brief" || name == "node-id")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::Discoveries::Discoveries()
    :
    discovery(this, {})
{

    yang_name = "discoveries"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::Discoveries::~Discoveries()
{
}

bool L2vpnv2::Nodes::Node::Discoveries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<discovery.len(); index++)
    {
        if(discovery[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpnv2::Nodes::Node::Discoveries::has_operation() const
{
    for (std::size_t index=0; index<discovery.len(); index++)
    {
        if(discovery[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpnv2::Nodes::Node::Discoveries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discoveries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::Discoveries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::Discoveries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discovery")
    {
        auto ent_ = std::make_shared<L2vpnv2::Nodes::Node::Discoveries::Discovery>();
        ent_->parent = this;
        discovery.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::Discoveries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : discovery.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Nodes::Node::Discoveries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnv2::Nodes::Node::Discoveries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnv2::Nodes::Node::Discoveries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discovery")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::Discoveries::Discovery::Discovery()
    :
    service_name{YType::enumeration, "service-name"},
    group_name{YType::str, "group-name"},
    vpn_name{YType::str, "vpn-name"},
    mtu_mismatch_ignore{YType::boolean, "mtu-mismatch-ignore"},
    number_vpn{YType::uint32, "number-vpn"},
    vpn_id{YType::uint32, "vpn-id"},
    service_name_xr{YType::str, "service-name-xr"},
    group_name_xr{YType::str, "group-name-xr"},
    vpn_name_xr{YType::str, "vpn-name-xr"},
    is_service_connected{YType::boolean, "is-service-connected"}
        ,
    signalling_info(std::make_shared<L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo>())
{
    signalling_info->parent = this;

    yang_name = "discovery"; yang_parent_name = "discoveries"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::Discoveries::Discovery::~Discovery()
{
}

bool L2vpnv2::Nodes::Node::Discoveries::Discovery::has_data() const
{
    if (is_presence_container) return true;
    return service_name.is_set
	|| group_name.is_set
	|| vpn_name.is_set
	|| mtu_mismatch_ignore.is_set
	|| number_vpn.is_set
	|| vpn_id.is_set
	|| service_name_xr.is_set
	|| group_name_xr.is_set
	|| vpn_name_xr.is_set
	|| is_service_connected.is_set
	|| (signalling_info !=  nullptr && signalling_info->has_data());
}

bool L2vpnv2::Nodes::Node::Discoveries::Discovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_name.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(vpn_name.yfilter)
	|| ydk::is_set(mtu_mismatch_ignore.yfilter)
	|| ydk::is_set(number_vpn.yfilter)
	|| ydk::is_set(vpn_id.yfilter)
	|| ydk::is_set(service_name_xr.yfilter)
	|| ydk::is_set(group_name_xr.yfilter)
	|| ydk::is_set(vpn_name_xr.yfilter)
	|| ydk::is_set(is_service_connected.yfilter)
	|| (signalling_info !=  nullptr && signalling_info->has_operation());
}

std::string L2vpnv2::Nodes::Node::Discoveries::Discovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::Discoveries::Discovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_name.is_set || is_set(service_name.yfilter)) leaf_name_data.push_back(service_name.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (vpn_name.is_set || is_set(vpn_name.yfilter)) leaf_name_data.push_back(vpn_name.get_name_leafdata());
    if (mtu_mismatch_ignore.is_set || is_set(mtu_mismatch_ignore.yfilter)) leaf_name_data.push_back(mtu_mismatch_ignore.get_name_leafdata());
    if (number_vpn.is_set || is_set(number_vpn.yfilter)) leaf_name_data.push_back(number_vpn.get_name_leafdata());
    if (vpn_id.is_set || is_set(vpn_id.yfilter)) leaf_name_data.push_back(vpn_id.get_name_leafdata());
    if (service_name_xr.is_set || is_set(service_name_xr.yfilter)) leaf_name_data.push_back(service_name_xr.get_name_leafdata());
    if (group_name_xr.is_set || is_set(group_name_xr.yfilter)) leaf_name_data.push_back(group_name_xr.get_name_leafdata());
    if (vpn_name_xr.is_set || is_set(vpn_name_xr.yfilter)) leaf_name_data.push_back(vpn_name_xr.get_name_leafdata());
    if (is_service_connected.is_set || is_set(is_service_connected.yfilter)) leaf_name_data.push_back(is_service_connected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::Discoveries::Discovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "signalling-info")
    {
        if(signalling_info == nullptr)
        {
            signalling_info = std::make_shared<L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo>();
        }
        return signalling_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::Discoveries::Discovery::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(signalling_info != nullptr)
    {
        _children["signalling-info"] = signalling_info;
    }

    return _children;
}

void L2vpnv2::Nodes::Node::Discoveries::Discovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-name")
    {
        service_name = value;
        service_name.value_namespace = name_space;
        service_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-name")
    {
        vpn_name = value;
        vpn_name.value_namespace = name_space;
        vpn_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu-mismatch-ignore")
    {
        mtu_mismatch_ignore = value;
        mtu_mismatch_ignore.value_namespace = name_space;
        mtu_mismatch_ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-vpn")
    {
        number_vpn = value;
        number_vpn.value_namespace = name_space;
        number_vpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-id")
    {
        vpn_id = value;
        vpn_id.value_namespace = name_space;
        vpn_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-name-xr")
    {
        service_name_xr = value;
        service_name_xr.value_namespace = name_space;
        service_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name-xr")
    {
        group_name_xr = value;
        group_name_xr.value_namespace = name_space;
        group_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-name-xr")
    {
        vpn_name_xr = value;
        vpn_name_xr.value_namespace = name_space;
        vpn_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-service-connected")
    {
        is_service_connected = value;
        is_service_connected.value_namespace = name_space;
        is_service_connected.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::Discoveries::Discovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-name")
    {
        service_name.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "vpn-name")
    {
        vpn_name.yfilter = yfilter;
    }
    if(value_path == "mtu-mismatch-ignore")
    {
        mtu_mismatch_ignore.yfilter = yfilter;
    }
    if(value_path == "number-vpn")
    {
        number_vpn.yfilter = yfilter;
    }
    if(value_path == "vpn-id")
    {
        vpn_id.yfilter = yfilter;
    }
    if(value_path == "service-name-xr")
    {
        service_name_xr.yfilter = yfilter;
    }
    if(value_path == "group-name-xr")
    {
        group_name_xr.yfilter = yfilter;
    }
    if(value_path == "vpn-name-xr")
    {
        vpn_name_xr.yfilter = yfilter;
    }
    if(value_path == "is-service-connected")
    {
        is_service_connected.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::Discoveries::Discovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signalling-info" || name == "service-name" || name == "group-name" || name == "vpn-name" || name == "mtu-mismatch-ignore" || name == "number-vpn" || name == "vpn-id" || name == "service-name-xr" || name == "group-name-xr" || name == "vpn-name-xr" || name == "is-service-connected")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::SignallingInfo()
    :
    ad_signalling_method{YType::enumeration, "ad-signalling-method"}
        ,
    bgp_sig_info(std::make_shared<L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo>())
    , ldp_sig_info(std::make_shared<L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo>())
{
    bgp_sig_info->parent = this;
    ldp_sig_info->parent = this;

    yang_name = "signalling-info"; yang_parent_name = "discovery"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::~SignallingInfo()
{
}

bool L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::has_data() const
{
    if (is_presence_container) return true;
    return ad_signalling_method.is_set
	|| (bgp_sig_info !=  nullptr && bgp_sig_info->has_data())
	|| (ldp_sig_info !=  nullptr && ldp_sig_info->has_data());
}

bool L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ad_signalling_method.yfilter)
	|| (bgp_sig_info !=  nullptr && bgp_sig_info->has_operation())
	|| (ldp_sig_info !=  nullptr && ldp_sig_info->has_operation());
}

std::string L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalling-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ad_signalling_method.is_set || is_set(ad_signalling_method.yfilter)) leaf_name_data.push_back(ad_signalling_method.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-sig-info")
    {
        if(bgp_sig_info == nullptr)
        {
            bgp_sig_info = std::make_shared<L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo>();
        }
        return bgp_sig_info;
    }

    if(child_yang_name == "ldp-sig-info")
    {
        if(ldp_sig_info == nullptr)
        {
            ldp_sig_info = std::make_shared<L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo>();
        }
        return ldp_sig_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bgp_sig_info != nullptr)
    {
        _children["bgp-sig-info"] = bgp_sig_info;
    }

    if(ldp_sig_info != nullptr)
    {
        _children["ldp-sig-info"] = ldp_sig_info;
    }

    return _children;
}

void L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ad-signalling-method")
    {
        ad_signalling_method = value;
        ad_signalling_method.value_namespace = name_space;
        ad_signalling_method.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ad-signalling-method")
    {
        ad_signalling_method.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-sig-info" || name == "ldp-sig-info" || name == "ad-signalling-method")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::BgpSigInfo()
    :
    number_edges{YType::uint32, "number-edges"},
    number_remote_edges{YType::uint32, "number-remote-edges"}
        ,
    edge(this, {})
    , redge(this, {})
{

    yang_name = "bgp-sig-info"; yang_parent_name = "signalling-info"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::~BgpSigInfo()
{
}

bool L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<edge.len(); index++)
    {
        if(edge[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<redge.len(); index++)
    {
        if(redge[index]->has_data())
            return true;
    }
    return number_edges.is_set
	|| number_remote_edges.is_set;
}

bool L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::has_operation() const
{
    for (std::size_t index=0; index<edge.len(); index++)
    {
        if(edge[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<redge.len(); index++)
    {
        if(redge[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(number_edges.yfilter)
	|| ydk::is_set(number_remote_edges.yfilter);
}

std::string L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-sig-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_edges.is_set || is_set(number_edges.yfilter)) leaf_name_data.push_back(number_edges.get_name_leafdata());
    if (number_remote_edges.is_set || is_set(number_remote_edges.yfilter)) leaf_name_data.push_back(number_remote_edges.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "edge")
    {
        auto ent_ = std::make_shared<L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge>();
        ent_->parent = this;
        edge.append(ent_);
        return ent_;
    }

    if(child_yang_name == "redge")
    {
        auto ent_ = std::make_shared<L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge>();
        ent_->parent = this;
        redge.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : edge.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : redge.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-edges")
    {
        number_edges = value;
        number_edges.value_namespace = name_space;
        number_edges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-remote-edges")
    {
        number_remote_edges = value;
        number_remote_edges.value_namespace = name_space;
        number_remote_edges.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-edges")
    {
        number_edges.yfilter = yfilter;
    }
    if(value_path == "number-remote-edges")
    {
        number_remote_edges.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "edge" || name == "redge" || name == "number-edges" || name == "number-remote-edges")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::Edge()
    :
    edge_id{YType::uint32, "edge-id"},
    label_count{YType::uint32, "label-count"}
        ,
    label_block(this, {})
{

    yang_name = "edge"; yang_parent_name = "bgp-sig-info"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::~Edge()
{
}

bool L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<label_block.len(); index++)
    {
        if(label_block[index]->has_data())
            return true;
    }
    return edge_id.is_set
	|| label_count.is_set;
}

bool L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::has_operation() const
{
    for (std::size_t index=0; index<label_block.len(); index++)
    {
        if(label_block[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(edge_id.yfilter)
	|| ydk::is_set(label_count.yfilter);
}

std::string L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "edge";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (edge_id.is_set || is_set(edge_id.yfilter)) leaf_name_data.push_back(edge_id.get_name_leafdata());
    if (label_count.is_set || is_set(label_count.yfilter)) leaf_name_data.push_back(label_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-block")
    {
        auto ent_ = std::make_shared<L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock>();
        ent_->parent = this;
        label_block.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : label_block.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "edge-id")
    {
        edge_id = value;
        edge_id.value_namespace = name_space;
        edge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-count")
    {
        label_count = value;
        label_count.value_namespace = name_space;
        label_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "edge-id")
    {
        edge_id.yfilter = yfilter;
    }
    if(value_path == "label-count")
    {
        label_count.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-block" || name == "edge-id" || name == "label-count")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::LabelBlock()
    :
    label_time_created{YType::uint32, "label-time-created"},
    label_base{YType::uint32, "label-base"},
    block_offset{YType::uint32, "block-offset"},
    block_size{YType::uint32, "block-size"},
    local_edge_id{YType::uint32, "local-edge-id"},
    next_hop{YType::str, "next-hop"},
    label_error{YType::enumeration, "label-error"}
        ,
    status_vector(this, {})
{

    yang_name = "label-block"; yang_parent_name = "edge"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::~LabelBlock()
{
}

bool L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<status_vector.len(); index++)
    {
        if(status_vector[index]->has_data())
            return true;
    }
    return label_time_created.is_set
	|| label_base.is_set
	|| block_offset.is_set
	|| block_size.is_set
	|| local_edge_id.is_set
	|| next_hop.is_set
	|| label_error.is_set;
}

bool L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::has_operation() const
{
    for (std::size_t index=0; index<status_vector.len(); index++)
    {
        if(status_vector[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(label_time_created.yfilter)
	|| ydk::is_set(label_base.yfilter)
	|| ydk::is_set(block_offset.yfilter)
	|| ydk::is_set(block_size.yfilter)
	|| ydk::is_set(local_edge_id.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(label_error.yfilter);
}

std::string L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-block";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_time_created.is_set || is_set(label_time_created.yfilter)) leaf_name_data.push_back(label_time_created.get_name_leafdata());
    if (label_base.is_set || is_set(label_base.yfilter)) leaf_name_data.push_back(label_base.get_name_leafdata());
    if (block_offset.is_set || is_set(block_offset.yfilter)) leaf_name_data.push_back(block_offset.get_name_leafdata());
    if (block_size.is_set || is_set(block_size.yfilter)) leaf_name_data.push_back(block_size.get_name_leafdata());
    if (local_edge_id.is_set || is_set(local_edge_id.yfilter)) leaf_name_data.push_back(local_edge_id.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (label_error.is_set || is_set(label_error.yfilter)) leaf_name_data.push_back(label_error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status-vector")
    {
        auto ent_ = std::make_shared<L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector>();
        ent_->parent = this;
        status_vector.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : status_vector.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-time-created")
    {
        label_time_created = value;
        label_time_created.value_namespace = name_space;
        label_time_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-base")
    {
        label_base = value;
        label_base.value_namespace = name_space;
        label_base.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block-offset")
    {
        block_offset = value;
        block_offset.value_namespace = name_space;
        block_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block-size")
    {
        block_size = value;
        block_size.value_namespace = name_space;
        block_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-edge-id")
    {
        local_edge_id = value;
        local_edge_id.value_namespace = name_space;
        local_edge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-error")
    {
        label_error = value;
        label_error.value_namespace = name_space;
        label_error.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-time-created")
    {
        label_time_created.yfilter = yfilter;
    }
    if(value_path == "label-base")
    {
        label_base.yfilter = yfilter;
    }
    if(value_path == "block-offset")
    {
        block_offset.yfilter = yfilter;
    }
    if(value_path == "block-size")
    {
        block_size.yfilter = yfilter;
    }
    if(value_path == "local-edge-id")
    {
        local_edge_id.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "label-error")
    {
        label_error.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status-vector" || name == "label-time-created" || name == "label-base" || name == "block-offset" || name == "block-size" || name == "local-edge-id" || name == "next-hop" || name == "label-error")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector::StatusVector()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "status-vector"; yang_parent_name = "label-block"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector::~StatusVector()
{
}

bool L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-vector";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::Redge()
    :
    edge_id{YType::uint32, "edge-id"},
    label_count{YType::uint32, "label-count"}
        ,
    label_block(this, {})
{

    yang_name = "redge"; yang_parent_name = "bgp-sig-info"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::~Redge()
{
}

bool L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<label_block.len(); index++)
    {
        if(label_block[index]->has_data())
            return true;
    }
    return edge_id.is_set
	|| label_count.is_set;
}

bool L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::has_operation() const
{
    for (std::size_t index=0; index<label_block.len(); index++)
    {
        if(label_block[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(edge_id.yfilter)
	|| ydk::is_set(label_count.yfilter);
}

std::string L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redge";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (edge_id.is_set || is_set(edge_id.yfilter)) leaf_name_data.push_back(edge_id.get_name_leafdata());
    if (label_count.is_set || is_set(label_count.yfilter)) leaf_name_data.push_back(label_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-block")
    {
        auto ent_ = std::make_shared<L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock>();
        ent_->parent = this;
        label_block.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : label_block.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "edge-id")
    {
        edge_id = value;
        edge_id.value_namespace = name_space;
        edge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-count")
    {
        label_count = value;
        label_count.value_namespace = name_space;
        label_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "edge-id")
    {
        edge_id.yfilter = yfilter;
    }
    if(value_path == "label-count")
    {
        label_count.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-block" || name == "edge-id" || name == "label-count")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::LabelBlock()
    :
    label_time_created{YType::uint32, "label-time-created"},
    label_base{YType::uint32, "label-base"},
    block_offset{YType::uint32, "block-offset"},
    block_size{YType::uint32, "block-size"},
    local_edge_id{YType::uint32, "local-edge-id"},
    next_hop{YType::str, "next-hop"},
    label_error{YType::enumeration, "label-error"}
        ,
    status_vector(this, {})
{

    yang_name = "label-block"; yang_parent_name = "redge"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::~LabelBlock()
{
}

bool L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<status_vector.len(); index++)
    {
        if(status_vector[index]->has_data())
            return true;
    }
    return label_time_created.is_set
	|| label_base.is_set
	|| block_offset.is_set
	|| block_size.is_set
	|| local_edge_id.is_set
	|| next_hop.is_set
	|| label_error.is_set;
}

bool L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::has_operation() const
{
    for (std::size_t index=0; index<status_vector.len(); index++)
    {
        if(status_vector[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(label_time_created.yfilter)
	|| ydk::is_set(label_base.yfilter)
	|| ydk::is_set(block_offset.yfilter)
	|| ydk::is_set(block_size.yfilter)
	|| ydk::is_set(local_edge_id.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(label_error.yfilter);
}

std::string L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-block";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_time_created.is_set || is_set(label_time_created.yfilter)) leaf_name_data.push_back(label_time_created.get_name_leafdata());
    if (label_base.is_set || is_set(label_base.yfilter)) leaf_name_data.push_back(label_base.get_name_leafdata());
    if (block_offset.is_set || is_set(block_offset.yfilter)) leaf_name_data.push_back(block_offset.get_name_leafdata());
    if (block_size.is_set || is_set(block_size.yfilter)) leaf_name_data.push_back(block_size.get_name_leafdata());
    if (local_edge_id.is_set || is_set(local_edge_id.yfilter)) leaf_name_data.push_back(local_edge_id.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (label_error.is_set || is_set(label_error.yfilter)) leaf_name_data.push_back(label_error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status-vector")
    {
        auto ent_ = std::make_shared<L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector>();
        ent_->parent = this;
        status_vector.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : status_vector.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-time-created")
    {
        label_time_created = value;
        label_time_created.value_namespace = name_space;
        label_time_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-base")
    {
        label_base = value;
        label_base.value_namespace = name_space;
        label_base.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block-offset")
    {
        block_offset = value;
        block_offset.value_namespace = name_space;
        block_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block-size")
    {
        block_size = value;
        block_size.value_namespace = name_space;
        block_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-edge-id")
    {
        local_edge_id = value;
        local_edge_id.value_namespace = name_space;
        local_edge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-error")
    {
        label_error = value;
        label_error.value_namespace = name_space;
        label_error.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-time-created")
    {
        label_time_created.yfilter = yfilter;
    }
    if(value_path == "label-base")
    {
        label_base.yfilter = yfilter;
    }
    if(value_path == "block-offset")
    {
        block_offset.yfilter = yfilter;
    }
    if(value_path == "block-size")
    {
        block_size.yfilter = yfilter;
    }
    if(value_path == "local-edge-id")
    {
        local_edge_id.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "label-error")
    {
        label_error.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status-vector" || name == "label-time-created" || name == "label-base" || name == "block-offset" || name == "block-size" || name == "local-edge-id" || name == "next-hop" || name == "label-error")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector::StatusVector()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "status-vector"; yang_parent_name = "label-block"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector::~StatusVector()
{
}

bool L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-vector";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LdpSigInfo()
    :
    local_l2_router_id{YType::str, "local-l2-router-id"},
    number_remote_edges{YType::uint32, "number-remote-edges"}
        ,
    local_vpls_id(std::make_shared<L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId>())
    , remote_nlri(this, {})
{
    local_vpls_id->parent = this;

    yang_name = "ldp-sig-info"; yang_parent_name = "signalling-info"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::~LdpSigInfo()
{
}

bool L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remote_nlri.len(); index++)
    {
        if(remote_nlri[index]->has_data())
            return true;
    }
    return local_l2_router_id.is_set
	|| number_remote_edges.is_set
	|| (local_vpls_id !=  nullptr && local_vpls_id->has_data());
}

bool L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::has_operation() const
{
    for (std::size_t index=0; index<remote_nlri.len(); index++)
    {
        if(remote_nlri[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(local_l2_router_id.yfilter)
	|| ydk::is_set(number_remote_edges.yfilter)
	|| (local_vpls_id !=  nullptr && local_vpls_id->has_operation());
}

std::string L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-sig-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_l2_router_id.is_set || is_set(local_l2_router_id.yfilter)) leaf_name_data.push_back(local_l2_router_id.get_name_leafdata());
    if (number_remote_edges.is_set || is_set(number_remote_edges.yfilter)) leaf_name_data.push_back(number_remote_edges.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-vpls-id")
    {
        if(local_vpls_id == nullptr)
        {
            local_vpls_id = std::make_shared<L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId>();
        }
        return local_vpls_id;
    }

    if(child_yang_name == "remote-nlri")
    {
        auto ent_ = std::make_shared<L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri>();
        ent_->parent = this;
        remote_nlri.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local_vpls_id != nullptr)
    {
        _children["local-vpls-id"] = local_vpls_id;
    }

    count_ = 0;
    for (auto ent_ : remote_nlri.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-l2-router-id")
    {
        local_l2_router_id = value;
        local_l2_router_id.value_namespace = name_space;
        local_l2_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-remote-edges")
    {
        number_remote_edges = value;
        number_remote_edges.value_namespace = name_space;
        number_remote_edges.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-l2-router-id")
    {
        local_l2_router_id.yfilter = yfilter;
    }
    if(value_path == "number-remote-edges")
    {
        number_remote_edges.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-vpls-id" || name == "remote-nlri" || name == "local-l2-router-id" || name == "number-remote-edges")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::LocalVplsId()
    :
    vpls_id_type{YType::enumeration, "vpls-id-type"}
        ,
    auto_(std::make_shared<L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto>())
    , two_byte_as(std::make_shared<L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs>())
    , v4_addr(std::make_shared<L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr>())
{
    auto_->parent = this;
    two_byte_as->parent = this;
    v4_addr->parent = this;

    yang_name = "local-vpls-id"; yang_parent_name = "ldp-sig-info"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::~LocalVplsId()
{
}

bool L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::has_data() const
{
    if (is_presence_container) return true;
    return vpls_id_type.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vpls_id_type.yfilter)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-vpls-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpls_id_type.is_set || is_set(vpls_id_type.yfilter)) leaf_name_data.push_back(vpls_id_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto>();
        }
        return auto_;
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr>();
        }
        return v4_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(auto_ != nullptr)
    {
        _children["auto"] = auto_;
    }

    if(two_byte_as != nullptr)
    {
        _children["two-byte-as"] = two_byte_as;
    }

    if(v4_addr != nullptr)
    {
        _children["v4-addr"] = v4_addr;
    }

    return _children;
}

void L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vpls-id-type")
    {
        vpls_id_type = value;
        vpls_id_type.value_namespace = name_space;
        vpls_id_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vpls-id-type")
    {
        vpls_id_type.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "two-byte-as" || name == "v4-addr" || name == "vpls-id-type")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto::Auto()
    :
    asn{YType::uint16, "asn"},
    vpn_id{YType::uint32, "vpn-id"}
{

    yang_name = "auto"; yang_parent_name = "local-vpls-id"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto::~Auto()
{
}

bool L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto::has_data() const
{
    if (is_presence_container) return true;
    return asn.is_set
	|| vpn_id.is_set;
}

bool L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asn.yfilter)
	|| ydk::is_set(vpn_id.yfilter);
}

std::string L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());
    if (vpn_id.is_set || is_set(vpn_id.yfilter)) leaf_name_data.push_back(vpn_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-id")
    {
        vpn_id = value;
        vpn_id.value_namespace = name_space;
        vpn_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
    if(value_path == "vpn-id")
    {
        vpn_id.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn" || name == "vpn-id")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::TwoByteAs()
    :
    two_byte_as{YType::uint16, "two-byte-as"},
    four_byte_index{YType::uint32, "four-byte-index"}
{

    yang_name = "two-byte-as"; yang_parent_name = "local-vpls-id"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::~TwoByteAs()
{
}

bool L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::has_data() const
{
    if (is_presence_container) return true;
    return two_byte_as.is_set
	|| four_byte_index.is_set;
}

bool L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(two_byte_as.yfilter)
	|| ydk::is_set(four_byte_index.yfilter);
}

std::string L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());
    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "two-byte-as" || name == "four-byte-index")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "local-vpls-id"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::~V4Addr()
{
}

bool L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::RemoteNlri()
    :
    nlri_time_created{YType::uint32, "nlri-time-created"},
    local_address{YType::str, "local-address"},
    remote_address{YType::str, "remote-address"},
    remote_l2_router_id{YType::str, "remote-l2-router-id"}
{

    yang_name = "remote-nlri"; yang_parent_name = "ldp-sig-info"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::~RemoteNlri()
{
}

bool L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::has_data() const
{
    if (is_presence_container) return true;
    return nlri_time_created.is_set
	|| local_address.is_set
	|| remote_address.is_set
	|| remote_l2_router_id.is_set;
}

bool L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nlri_time_created.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(remote_address.yfilter)
	|| ydk::is_set(remote_l2_router_id.yfilter);
}

std::string L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-nlri";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nlri_time_created.is_set || is_set(nlri_time_created.yfilter)) leaf_name_data.push_back(nlri_time_created.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (remote_l2_router_id.is_set || is_set(remote_l2_router_id.yfilter)) leaf_name_data.push_back(remote_l2_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nlri-time-created")
    {
        nlri_time_created = value;
        nlri_time_created.value_namespace = name_space;
        nlri_time_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-l2-router-id")
    {
        remote_l2_router_id = value;
        remote_l2_router_id.value_namespace = name_space;
        remote_l2_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nlri-time-created")
    {
        nlri_time_created.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
    if(value_path == "remote-l2-router-id")
    {
        remote_l2_router_id.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nlri-time-created" || name == "local-address" || name == "remote-address" || name == "remote-l2-router-id")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::FlexibleXconnectServiceSummary::FlexibleXconnectServiceSummary()
    :
    number_fxc{YType::uint32, "number-fxc"},
    number_fxc_up{YType::uint32, "number-fxc-up"},
    number_fxc_down{YType::uint32, "number-fxc-down"}
{

    yang_name = "flexible-xconnect-service-summary"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::FlexibleXconnectServiceSummary::~FlexibleXconnectServiceSummary()
{
}

bool L2vpnv2::Nodes::Node::FlexibleXconnectServiceSummary::has_data() const
{
    if (is_presence_container) return true;
    return number_fxc.is_set
	|| number_fxc_up.is_set
	|| number_fxc_down.is_set;
}

bool L2vpnv2::Nodes::Node::FlexibleXconnectServiceSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number_fxc.yfilter)
	|| ydk::is_set(number_fxc_up.yfilter)
	|| ydk::is_set(number_fxc_down.yfilter);
}

std::string L2vpnv2::Nodes::Node::FlexibleXconnectServiceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flexible-xconnect-service-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::FlexibleXconnectServiceSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_fxc.is_set || is_set(number_fxc.yfilter)) leaf_name_data.push_back(number_fxc.get_name_leafdata());
    if (number_fxc_up.is_set || is_set(number_fxc_up.yfilter)) leaf_name_data.push_back(number_fxc_up.get_name_leafdata());
    if (number_fxc_down.is_set || is_set(number_fxc_down.yfilter)) leaf_name_data.push_back(number_fxc_down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::FlexibleXconnectServiceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::FlexibleXconnectServiceSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Nodes::Node::FlexibleXconnectServiceSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-fxc")
    {
        number_fxc = value;
        number_fxc.value_namespace = name_space;
        number_fxc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-fxc-up")
    {
        number_fxc_up = value;
        number_fxc_up.value_namespace = name_space;
        number_fxc_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-fxc-down")
    {
        number_fxc_down = value;
        number_fxc_down.value_namespace = name_space;
        number_fxc_down.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::FlexibleXconnectServiceSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-fxc")
    {
        number_fxc.yfilter = yfilter;
    }
    if(value_path == "number-fxc-up")
    {
        number_fxc_up.yfilter = yfilter;
    }
    if(value_path == "number-fxc-down")
    {
        number_fxc_down.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::FlexibleXconnectServiceSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number-fxc" || name == "number-fxc-up" || name == "number-fxc-down")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::MainInterfaces::MainInterfaces()
    :
    main_interface(this, {"interface_name"})
{

    yang_name = "main-interfaces"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::MainInterfaces::~MainInterfaces()
{
}

bool L2vpnv2::Nodes::Node::MainInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<main_interface.len(); index++)
    {
        if(main_interface[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpnv2::Nodes::Node::MainInterfaces::has_operation() const
{
    for (std::size_t index=0; index<main_interface.len(); index++)
    {
        if(main_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpnv2::Nodes::Node::MainInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::MainInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::MainInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "main-interface")
    {
        auto ent_ = std::make_shared<L2vpnv2::Nodes::Node::MainInterfaces::MainInterface>();
        ent_->parent = this;
        main_interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::MainInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : main_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Nodes::Node::MainInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnv2::Nodes::Node::MainInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnv2::Nodes::Node::MainInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "main-interface")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterface()
    :
    interface_name{YType::str, "interface-name"}
        ,
    main_interface_instances(std::make_shared<L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances>())
    , main_interface_info(std::make_shared<L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInfo>())
{
    main_interface_instances->parent = this;
    main_interface_info->parent = this;

    yang_name = "main-interface"; yang_parent_name = "main-interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::~MainInterface()
{
}

bool L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| (main_interface_instances !=  nullptr && main_interface_instances->has_data())
	|| (main_interface_info !=  nullptr && main_interface_info->has_data());
}

bool L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (main_interface_instances !=  nullptr && main_interface_instances->has_operation())
	|| (main_interface_info !=  nullptr && main_interface_info->has_operation());
}

std::string L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "main-interface-instances")
    {
        if(main_interface_instances == nullptr)
        {
            main_interface_instances = std::make_shared<L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances>();
        }
        return main_interface_instances;
    }

    if(child_yang_name == "main-interface-info")
    {
        if(main_interface_info == nullptr)
        {
            main_interface_info = std::make_shared<L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInfo>();
        }
        return main_interface_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(main_interface_instances != nullptr)
    {
        _children["main-interface-instances"] = main_interface_instances;
    }

    if(main_interface_info != nullptr)
    {
        _children["main-interface-info"] = main_interface_info;
    }

    return _children;
}

void L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "main-interface-instances" || name == "main-interface-info" || name == "interface-name")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstances()
    :
    main_interface_instance(this, {"instance"})
{

    yang_name = "main-interface-instances"; yang_parent_name = "main-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::~MainInterfaceInstances()
{
}

bool L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<main_interface_instance.len(); index++)
    {
        if(main_interface_instance[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::has_operation() const
{
    for (std::size_t index=0; index<main_interface_instance.len(); index++)
    {
        if(main_interface_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-interface-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "main-interface-instance")
    {
        auto ent_ = std::make_shared<L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance>();
        ent_->parent = this;
        main_interface_instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : main_interface_instance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "main-interface-instance")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstance()
    :
    instance{YType::uint32, "instance"}
        ,
    main_interface_instance_info(std::make_shared<L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo>())
    , main_interface_instance_bridge_ports(std::make_shared<L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts>())
{
    main_interface_instance_info->parent = this;
    main_interface_instance_bridge_ports->parent = this;

    yang_name = "main-interface-instance"; yang_parent_name = "main-interface-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::~MainInterfaceInstance()
{
}

bool L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::has_data() const
{
    if (is_presence_container) return true;
    return instance.is_set
	|| (main_interface_instance_info !=  nullptr && main_interface_instance_info->has_data())
	|| (main_interface_instance_bridge_ports !=  nullptr && main_interface_instance_bridge_ports->has_data());
}

bool L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance.yfilter)
	|| (main_interface_instance_info !=  nullptr && main_interface_instance_info->has_operation())
	|| (main_interface_instance_bridge_ports !=  nullptr && main_interface_instance_bridge_ports->has_operation());
}

std::string L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-interface-instance";
    ADD_KEY_TOKEN(instance, "instance");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "main-interface-instance-info")
    {
        if(main_interface_instance_info == nullptr)
        {
            main_interface_instance_info = std::make_shared<L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo>();
        }
        return main_interface_instance_info;
    }

    if(child_yang_name == "main-interface-instance-bridge-ports")
    {
        if(main_interface_instance_bridge_ports == nullptr)
        {
            main_interface_instance_bridge_ports = std::make_shared<L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts>();
        }
        return main_interface_instance_bridge_ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(main_interface_instance_info != nullptr)
    {
        _children["main-interface-instance-info"] = main_interface_instance_info;
    }

    if(main_interface_instance_bridge_ports != nullptr)
    {
        _children["main-interface-instance-bridge-ports"] = main_interface_instance_bridge_ports;
    }

    return _children;
}

void L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "main-interface-instance-info" || name == "main-interface-instance-bridge-ports" || name == "instance")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::MainInterfaceInstanceInfo()
    :
    configured_instance{YType::uint32, "configured-instance"},
    flush_count{YType::uint32, "flush-count"},
    interface_count{YType::uint32, "interface-count"},
    instance_flags{YType::uint32, "instance-flags"},
    instance_id{YType::uint32, "instance-id"},
    instance_state{YType::enumeration, "instance-state"}
{

    yang_name = "main-interface-instance-info"; yang_parent_name = "main-interface-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::~MainInterfaceInstanceInfo()
{
}

bool L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::has_data() const
{
    if (is_presence_container) return true;
    return configured_instance.is_set
	|| flush_count.is_set
	|| interface_count.is_set
	|| instance_flags.is_set
	|| instance_id.is_set
	|| instance_state.is_set;
}

bool L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(configured_instance.yfilter)
	|| ydk::is_set(flush_count.yfilter)
	|| ydk::is_set(interface_count.yfilter)
	|| ydk::is_set(instance_flags.yfilter)
	|| ydk::is_set(instance_id.yfilter)
	|| ydk::is_set(instance_state.yfilter);
}

std::string L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-interface-instance-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_instance.is_set || is_set(configured_instance.yfilter)) leaf_name_data.push_back(configured_instance.get_name_leafdata());
    if (flush_count.is_set || is_set(flush_count.yfilter)) leaf_name_data.push_back(flush_count.get_name_leafdata());
    if (interface_count.is_set || is_set(interface_count.yfilter)) leaf_name_data.push_back(interface_count.get_name_leafdata());
    if (instance_flags.is_set || is_set(instance_flags.yfilter)) leaf_name_data.push_back(instance_flags.get_name_leafdata());
    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (instance_state.is_set || is_set(instance_state.yfilter)) leaf_name_data.push_back(instance_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configured-instance")
    {
        configured_instance = value;
        configured_instance.value_namespace = name_space;
        configured_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flush-count")
    {
        flush_count = value;
        flush_count.value_namespace = name_space;
        flush_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-count")
    {
        interface_count = value;
        interface_count.value_namespace = name_space;
        interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-flags")
    {
        instance_flags = value;
        instance_flags.value_namespace = name_space;
        instance_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-id")
    {
        instance_id = value;
        instance_id.value_namespace = name_space;
        instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-state")
    {
        instance_state = value;
        instance_state.value_namespace = name_space;
        instance_state.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configured-instance")
    {
        configured_instance.yfilter = yfilter;
    }
    if(value_path == "flush-count")
    {
        flush_count.yfilter = yfilter;
    }
    if(value_path == "interface-count")
    {
        interface_count.yfilter = yfilter;
    }
    if(value_path == "instance-flags")
    {
        instance_flags.yfilter = yfilter;
    }
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
    if(value_path == "instance-state")
    {
        instance_state.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configured-instance" || name == "flush-count" || name == "interface-count" || name == "instance-flags" || name == "instance-id" || name == "instance-state")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePorts()
    :
    main_interface_instance_bridge_port(this, {"bridge_port"})
{

    yang_name = "main-interface-instance-bridge-ports"; yang_parent_name = "main-interface-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::~MainInterfaceInstanceBridgePorts()
{
}

bool L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<main_interface_instance_bridge_port.len(); index++)
    {
        if(main_interface_instance_bridge_port[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::has_operation() const
{
    for (std::size_t index=0; index<main_interface_instance_bridge_port.len(); index++)
    {
        if(main_interface_instance_bridge_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-interface-instance-bridge-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "main-interface-instance-bridge-port")
    {
        auto ent_ = std::make_shared<L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort>();
        ent_->parent = this;
        main_interface_instance_bridge_port.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : main_interface_instance_bridge_port.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "main-interface-instance-bridge-port")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::MainInterfaceInstanceBridgePort()
    :
    bridge_port{YType::str, "bridge-port"},
    bridge_port_xr{YType::str, "bridge-port-xr"},
    instance_id{YType::uint32, "instance-id"}
{

    yang_name = "main-interface-instance-bridge-port"; yang_parent_name = "main-interface-instance-bridge-ports"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::~MainInterfaceInstanceBridgePort()
{
}

bool L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::has_data() const
{
    if (is_presence_container) return true;
    return bridge_port.is_set
	|| bridge_port_xr.is_set
	|| instance_id.is_set;
}

bool L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bridge_port.yfilter)
	|| ydk::is_set(bridge_port_xr.yfilter)
	|| ydk::is_set(instance_id.yfilter);
}

std::string L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-interface-instance-bridge-port";
    ADD_KEY_TOKEN(bridge_port, "bridge-port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_port.is_set || is_set(bridge_port.yfilter)) leaf_name_data.push_back(bridge_port.get_name_leafdata());
    if (bridge_port_xr.is_set || is_set(bridge_port_xr.yfilter)) leaf_name_data.push_back(bridge_port_xr.get_name_leafdata());
    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bridge-port")
    {
        bridge_port = value;
        bridge_port.value_namespace = name_space;
        bridge_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-port-xr")
    {
        bridge_port_xr = value;
        bridge_port_xr.value_namespace = name_space;
        bridge_port_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-id")
    {
        instance_id = value;
        instance_id.value_namespace = name_space;
        instance_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bridge-port")
    {
        bridge_port.yfilter = yfilter;
    }
    if(value_path == "bridge-port-xr")
    {
        bridge_port_xr.yfilter = yfilter;
    }
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-port" || name == "bridge-port-xr" || name == "instance-id")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInfo::MainInterfaceInfo()
    :
    main_interface_handle{YType::str, "main-interface-handle"},
    protected_{YType::enumeration, "protected"},
    interface_count{YType::uint32, "interface-count"}
{

    yang_name = "main-interface-info"; yang_parent_name = "main-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInfo::~MainInterfaceInfo()
{
}

bool L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInfo::has_data() const
{
    if (is_presence_container) return true;
    return main_interface_handle.is_set
	|| protected_.is_set
	|| interface_count.is_set;
}

bool L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(main_interface_handle.yfilter)
	|| ydk::is_set(protected_.yfilter)
	|| ydk::is_set(interface_count.yfilter);
}

std::string L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-interface-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (main_interface_handle.is_set || is_set(main_interface_handle.yfilter)) leaf_name_data.push_back(main_interface_handle.get_name_leafdata());
    if (protected_.is_set || is_set(protected_.yfilter)) leaf_name_data.push_back(protected_.get_name_leafdata());
    if (interface_count.is_set || is_set(interface_count.yfilter)) leaf_name_data.push_back(interface_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "main-interface-handle")
    {
        main_interface_handle = value;
        main_interface_handle.value_namespace = name_space;
        main_interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected")
    {
        protected_ = value;
        protected_.value_namespace = name_space;
        protected_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-count")
    {
        interface_count = value;
        interface_count.value_namespace = name_space;
        interface_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "main-interface-handle")
    {
        main_interface_handle.yfilter = yfilter;
    }
    if(value_path == "protected")
    {
        protected_.yfilter = yfilter;
    }
    if(value_path == "interface-count")
    {
        interface_count.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::MainInterfaces::MainInterface::MainInterfaceInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "main-interface-handle" || name == "protected" || name == "interface-count")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::IccpSm::IccpSm()
    :
    iccp_sm_summary(std::make_shared<L2vpnv2::Nodes::Node::IccpSm::IccpSmSummary>())
    , iccp_groups(std::make_shared<L2vpnv2::Nodes::Node::IccpSm::IccpGroups>())
{
    iccp_sm_summary->parent = this;
    iccp_groups->parent = this;

    yang_name = "iccp-sm"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::IccpSm::~IccpSm()
{
}

bool L2vpnv2::Nodes::Node::IccpSm::has_data() const
{
    if (is_presence_container) return true;
    return (iccp_sm_summary !=  nullptr && iccp_sm_summary->has_data())
	|| (iccp_groups !=  nullptr && iccp_groups->has_data());
}

bool L2vpnv2::Nodes::Node::IccpSm::has_operation() const
{
    return is_set(yfilter)
	|| (iccp_sm_summary !=  nullptr && iccp_sm_summary->has_operation())
	|| (iccp_groups !=  nullptr && iccp_groups->has_operation());
}

std::string L2vpnv2::Nodes::Node::IccpSm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-sm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::IccpSm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::IccpSm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-sm-summary")
    {
        if(iccp_sm_summary == nullptr)
        {
            iccp_sm_summary = std::make_shared<L2vpnv2::Nodes::Node::IccpSm::IccpSmSummary>();
        }
        return iccp_sm_summary;
    }

    if(child_yang_name == "iccp-groups")
    {
        if(iccp_groups == nullptr)
        {
            iccp_groups = std::make_shared<L2vpnv2::Nodes::Node::IccpSm::IccpGroups>();
        }
        return iccp_groups;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::IccpSm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(iccp_sm_summary != nullptr)
    {
        _children["iccp-sm-summary"] = iccp_sm_summary;
    }

    if(iccp_groups != nullptr)
    {
        _children["iccp-groups"] = iccp_groups;
    }

    return _children;
}

void L2vpnv2::Nodes::Node::IccpSm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnv2::Nodes::Node::IccpSm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnv2::Nodes::Node::IccpSm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-sm-summary" || name == "iccp-groups")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::IccpSm::IccpSmSummary::IccpSmSummary()
    :
    groups{YType::uint32, "groups"},
    unresolved_groups{YType::uint32, "unresolved-groups"},
    provisioned_groups{YType::uint32, "provisioned-groups"},
    connecting_groups{YType::uint32, "connecting-groups"},
    connected_groups{YType::uint32, "connected-groups"},
    synchronizing_groups{YType::uint32, "synchronizing-groups"},
    synchronized_groups{YType::uint32, "synchronized-groups"},
    ports{YType::uint32, "ports"},
    operational_ports{YType::uint32, "operational-ports"},
    failed_ports{YType::uint32, "failed-ports"},
    unknown_ports{YType::uint32, "unknown-ports"},
    unconfigured_ports{YType::uint32, "unconfigured-ports"},
    unsynchronized_ports{YType::uint32, "unsynchronized-ports"},
    reverting_ports{YType::uint32, "reverting-ports"}
{

    yang_name = "iccp-sm-summary"; yang_parent_name = "iccp-sm"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::IccpSm::IccpSmSummary::~IccpSmSummary()
{
}

bool L2vpnv2::Nodes::Node::IccpSm::IccpSmSummary::has_data() const
{
    if (is_presence_container) return true;
    return groups.is_set
	|| unresolved_groups.is_set
	|| provisioned_groups.is_set
	|| connecting_groups.is_set
	|| connected_groups.is_set
	|| synchronizing_groups.is_set
	|| synchronized_groups.is_set
	|| ports.is_set
	|| operational_ports.is_set
	|| failed_ports.is_set
	|| unknown_ports.is_set
	|| unconfigured_ports.is_set
	|| unsynchronized_ports.is_set
	|| reverting_ports.is_set;
}

bool L2vpnv2::Nodes::Node::IccpSm::IccpSmSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(groups.yfilter)
	|| ydk::is_set(unresolved_groups.yfilter)
	|| ydk::is_set(provisioned_groups.yfilter)
	|| ydk::is_set(connecting_groups.yfilter)
	|| ydk::is_set(connected_groups.yfilter)
	|| ydk::is_set(synchronizing_groups.yfilter)
	|| ydk::is_set(synchronized_groups.yfilter)
	|| ydk::is_set(ports.yfilter)
	|| ydk::is_set(operational_ports.yfilter)
	|| ydk::is_set(failed_ports.yfilter)
	|| ydk::is_set(unknown_ports.yfilter)
	|| ydk::is_set(unconfigured_ports.yfilter)
	|| ydk::is_set(unsynchronized_ports.yfilter)
	|| ydk::is_set(reverting_ports.yfilter);
}

std::string L2vpnv2::Nodes::Node::IccpSm::IccpSmSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-sm-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::IccpSm::IccpSmSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (groups.is_set || is_set(groups.yfilter)) leaf_name_data.push_back(groups.get_name_leafdata());
    if (unresolved_groups.is_set || is_set(unresolved_groups.yfilter)) leaf_name_data.push_back(unresolved_groups.get_name_leafdata());
    if (provisioned_groups.is_set || is_set(provisioned_groups.yfilter)) leaf_name_data.push_back(provisioned_groups.get_name_leafdata());
    if (connecting_groups.is_set || is_set(connecting_groups.yfilter)) leaf_name_data.push_back(connecting_groups.get_name_leafdata());
    if (connected_groups.is_set || is_set(connected_groups.yfilter)) leaf_name_data.push_back(connected_groups.get_name_leafdata());
    if (synchronizing_groups.is_set || is_set(synchronizing_groups.yfilter)) leaf_name_data.push_back(synchronizing_groups.get_name_leafdata());
    if (synchronized_groups.is_set || is_set(synchronized_groups.yfilter)) leaf_name_data.push_back(synchronized_groups.get_name_leafdata());
    if (ports.is_set || is_set(ports.yfilter)) leaf_name_data.push_back(ports.get_name_leafdata());
    if (operational_ports.is_set || is_set(operational_ports.yfilter)) leaf_name_data.push_back(operational_ports.get_name_leafdata());
    if (failed_ports.is_set || is_set(failed_ports.yfilter)) leaf_name_data.push_back(failed_ports.get_name_leafdata());
    if (unknown_ports.is_set || is_set(unknown_ports.yfilter)) leaf_name_data.push_back(unknown_ports.get_name_leafdata());
    if (unconfigured_ports.is_set || is_set(unconfigured_ports.yfilter)) leaf_name_data.push_back(unconfigured_ports.get_name_leafdata());
    if (unsynchronized_ports.is_set || is_set(unsynchronized_ports.yfilter)) leaf_name_data.push_back(unsynchronized_ports.get_name_leafdata());
    if (reverting_ports.is_set || is_set(reverting_ports.yfilter)) leaf_name_data.push_back(reverting_ports.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::IccpSm::IccpSmSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::IccpSm::IccpSmSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Nodes::Node::IccpSm::IccpSmSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "groups")
    {
        groups = value;
        groups.value_namespace = name_space;
        groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unresolved-groups")
    {
        unresolved_groups = value;
        unresolved_groups.value_namespace = name_space;
        unresolved_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "provisioned-groups")
    {
        provisioned_groups = value;
        provisioned_groups.value_namespace = name_space;
        provisioned_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-groups")
    {
        connecting_groups = value;
        connecting_groups.value_namespace = name_space;
        connecting_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-groups")
    {
        connected_groups = value;
        connected_groups.value_namespace = name_space;
        connected_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronizing-groups")
    {
        synchronizing_groups = value;
        synchronizing_groups.value_namespace = name_space;
        synchronizing_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronized-groups")
    {
        synchronized_groups = value;
        synchronized_groups.value_namespace = name_space;
        synchronized_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ports")
    {
        ports = value;
        ports.value_namespace = name_space;
        ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational-ports")
    {
        operational_ports = value;
        operational_ports.value_namespace = name_space;
        operational_ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failed-ports")
    {
        failed_ports = value;
        failed_ports.value_namespace = name_space;
        failed_ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-ports")
    {
        unknown_ports = value;
        unknown_ports.value_namespace = name_space;
        unknown_ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unconfigured-ports")
    {
        unconfigured_ports = value;
        unconfigured_ports.value_namespace = name_space;
        unconfigured_ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unsynchronized-ports")
    {
        unsynchronized_ports = value;
        unsynchronized_ports.value_namespace = name_space;
        unsynchronized_ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reverting-ports")
    {
        reverting_ports = value;
        reverting_ports.value_namespace = name_space;
        reverting_ports.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::IccpSm::IccpSmSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "groups")
    {
        groups.yfilter = yfilter;
    }
    if(value_path == "unresolved-groups")
    {
        unresolved_groups.yfilter = yfilter;
    }
    if(value_path == "provisioned-groups")
    {
        provisioned_groups.yfilter = yfilter;
    }
    if(value_path == "connecting-groups")
    {
        connecting_groups.yfilter = yfilter;
    }
    if(value_path == "connected-groups")
    {
        connected_groups.yfilter = yfilter;
    }
    if(value_path == "synchronizing-groups")
    {
        synchronizing_groups.yfilter = yfilter;
    }
    if(value_path == "synchronized-groups")
    {
        synchronized_groups.yfilter = yfilter;
    }
    if(value_path == "ports")
    {
        ports.yfilter = yfilter;
    }
    if(value_path == "operational-ports")
    {
        operational_ports.yfilter = yfilter;
    }
    if(value_path == "failed-ports")
    {
        failed_ports.yfilter = yfilter;
    }
    if(value_path == "unknown-ports")
    {
        unknown_ports.yfilter = yfilter;
    }
    if(value_path == "unconfigured-ports")
    {
        unconfigured_ports.yfilter = yfilter;
    }
    if(value_path == "unsynchronized-ports")
    {
        unsynchronized_ports.yfilter = yfilter;
    }
    if(value_path == "reverting-ports")
    {
        reverting_ports.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::IccpSm::IccpSmSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "groups" || name == "unresolved-groups" || name == "provisioned-groups" || name == "connecting-groups" || name == "connected-groups" || name == "synchronizing-groups" || name == "synchronized-groups" || name == "ports" || name == "operational-ports" || name == "failed-ports" || name == "unknown-ports" || name == "unconfigured-ports" || name == "unsynchronized-ports" || name == "reverting-ports")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroups()
    :
    iccp_group(this, {"group_id"})
{

    yang_name = "iccp-groups"; yang_parent_name = "iccp-sm"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::IccpSm::IccpGroups::~IccpGroups()
{
}

bool L2vpnv2::Nodes::Node::IccpSm::IccpGroups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iccp_group.len(); index++)
    {
        if(iccp_group[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpnv2::Nodes::Node::IccpSm::IccpGroups::has_operation() const
{
    for (std::size_t index=0; index<iccp_group.len(); index++)
    {
        if(iccp_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpnv2::Nodes::Node::IccpSm::IccpGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::IccpSm::IccpGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::IccpSm::IccpGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-group")
    {
        auto ent_ = std::make_shared<L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup>();
        ent_->parent = this;
        iccp_group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::IccpSm::IccpGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iccp_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Nodes::Node::IccpSm::IccpGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnv2::Nodes::Node::IccpSm::IccpGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnv2::Nodes::Node::IccpSm::IccpGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-group")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroup()
    :
    group_id{YType::uint32, "group-id"}
        ,
    iccp_group_info(std::make_shared<L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo>())
    , iccp_ports(std::make_shared<L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts>())
{
    iccp_group_info->parent = this;
    iccp_ports->parent = this;

    yang_name = "iccp-group"; yang_parent_name = "iccp-groups"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::~IccpGroup()
{
}

bool L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::has_data() const
{
    if (is_presence_container) return true;
    return group_id.is_set
	|| (iccp_group_info !=  nullptr && iccp_group_info->has_data())
	|| (iccp_ports !=  nullptr && iccp_ports->has_data());
}

bool L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| (iccp_group_info !=  nullptr && iccp_group_info->has_operation())
	|| (iccp_ports !=  nullptr && iccp_ports->has_operation());
}

std::string L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group";
    ADD_KEY_TOKEN(group_id, "group-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-group-info")
    {
        if(iccp_group_info == nullptr)
        {
            iccp_group_info = std::make_shared<L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo>();
        }
        return iccp_group_info;
    }

    if(child_yang_name == "iccp-ports")
    {
        if(iccp_ports == nullptr)
        {
            iccp_ports = std::make_shared<L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts>();
        }
        return iccp_ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(iccp_group_info != nullptr)
    {
        _children["iccp-group-info"] = iccp_group_info;
    }

    if(iccp_ports != nullptr)
    {
        _children["iccp-ports"] = iccp_ports;
    }

    return _children;
}

void L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-group-info" || name == "iccp-ports" || name == "group-id")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::IccpGroupInfo()
    :
    group_id{YType::uint32, "group-id"},
    local_node_id{YType::uint8, "local-node-id"},
    remote_node_id{YType::uint8, "remote-node-id"},
    state{YType::enumeration, "state"},
    iccp_transport_up{YType::boolean, "iccp-transport-up"},
    iccp_member_up{YType::boolean, "iccp-member-up"}
        ,
    ports(this, {})
{

    yang_name = "iccp-group-info"; yang_parent_name = "iccp-group"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::~IccpGroupInfo()
{
}

bool L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ports.len(); index++)
    {
        if(ports[index]->has_data())
            return true;
    }
    return group_id.is_set
	|| local_node_id.is_set
	|| remote_node_id.is_set
	|| state.is_set
	|| iccp_transport_up.is_set
	|| iccp_member_up.is_set;
}

bool L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::has_operation() const
{
    for (std::size_t index=0; index<ports.len(); index++)
    {
        if(ports[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| ydk::is_set(local_node_id.yfilter)
	|| ydk::is_set(remote_node_id.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(iccp_transport_up.yfilter)
	|| ydk::is_set(iccp_member_up.yfilter);
}

std::string L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (local_node_id.is_set || is_set(local_node_id.yfilter)) leaf_name_data.push_back(local_node_id.get_name_leafdata());
    if (remote_node_id.is_set || is_set(remote_node_id.yfilter)) leaf_name_data.push_back(remote_node_id.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (iccp_transport_up.is_set || is_set(iccp_transport_up.yfilter)) leaf_name_data.push_back(iccp_transport_up.get_name_leafdata());
    if (iccp_member_up.is_set || is_set(iccp_member_up.yfilter)) leaf_name_data.push_back(iccp_member_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ports")
    {
        auto ent_ = std::make_shared<L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports>();
        ent_->parent = this;
        ports.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ports.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-node-id")
    {
        local_node_id = value;
        local_node_id.value_namespace = name_space;
        local_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-node-id")
    {
        remote_node_id = value;
        remote_node_id.value_namespace = name_space;
        remote_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-transport-up")
    {
        iccp_transport_up = value;
        iccp_transport_up.value_namespace = name_space;
        iccp_transport_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-member-up")
    {
        iccp_member_up = value;
        iccp_member_up.value_namespace = name_space;
        iccp_member_up.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
    if(value_path == "local-node-id")
    {
        local_node_id.yfilter = yfilter;
    }
    if(value_path == "remote-node-id")
    {
        remote_node_id.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "iccp-transport-up")
    {
        iccp_transport_up.yfilter = yfilter;
    }
    if(value_path == "iccp-member-up")
    {
        iccp_member_up.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ports" || name == "group-id" || name == "local-node-id" || name == "remote-node-id" || name == "state" || name == "iccp-transport-up" || name == "iccp-member-up")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::Ports()
    :
    interface_name{YType::str, "interface-name"},
    mac_flush_tcn{YType::boolean, "mac-flush-tcn"}
        ,
    local_port(std::make_shared<L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort>())
    , remote_port(std::make_shared<L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort>())
{
    local_port->parent = this;
    remote_port->parent = this;

    yang_name = "ports"; yang_parent_name = "iccp-group-info"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::~Ports()
{
}

bool L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| mac_flush_tcn.is_set
	|| (local_port !=  nullptr && local_port->has_data())
	|| (remote_port !=  nullptr && remote_port->has_data());
}

bool L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(mac_flush_tcn.yfilter)
	|| (local_port !=  nullptr && local_port->has_operation())
	|| (remote_port !=  nullptr && remote_port->has_operation());
}

std::string L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ports";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (mac_flush_tcn.is_set || is_set(mac_flush_tcn.yfilter)) leaf_name_data.push_back(mac_flush_tcn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-port")
    {
        if(local_port == nullptr)
        {
            local_port = std::make_shared<L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort>();
        }
        return local_port;
    }

    if(child_yang_name == "remote-port")
    {
        if(remote_port == nullptr)
        {
            remote_port = std::make_shared<L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort>();
        }
        return remote_port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local_port != nullptr)
    {
        _children["local-port"] = local_port;
    }

    if(remote_port != nullptr)
    {
        _children["remote-port"] = remote_port;
    }

    return _children;
}

void L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-flush-tcn")
    {
        mac_flush_tcn = value;
        mac_flush_tcn.value_namespace = name_space;
        mac_flush_tcn.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "mac-flush-tcn")
    {
        mac_flush_tcn.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-port" || name == "remote-port" || name == "interface-name" || name == "mac-flush-tcn")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::LocalPort()
    :
    port_state{YType::enumeration, "port-state"},
    port_fail_code{YType::uint8, "port-fail-code"},
    fsm_state{YType::uint8, "fsm-state"},
    vlan_state{YType::uint8, "vlan-state"},
    vlan_vector{YType::str, "vlan-vector"},
    reversion_time{YType::uint32, "reversion-time"},
    reversion_time_remaining{YType::uint32, "reversion-time-remaining"}
{

    yang_name = "local-port"; yang_parent_name = "ports"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::~LocalPort()
{
}

bool L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::has_data() const
{
    if (is_presence_container) return true;
    return port_state.is_set
	|| port_fail_code.is_set
	|| fsm_state.is_set
	|| vlan_state.is_set
	|| vlan_vector.is_set
	|| reversion_time.is_set
	|| reversion_time_remaining.is_set;
}

bool L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_state.yfilter)
	|| ydk::is_set(port_fail_code.yfilter)
	|| ydk::is_set(fsm_state.yfilter)
	|| ydk::is_set(vlan_state.yfilter)
	|| ydk::is_set(vlan_vector.yfilter)
	|| ydk::is_set(reversion_time.yfilter)
	|| ydk::is_set(reversion_time_remaining.yfilter);
}

std::string L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_state.is_set || is_set(port_state.yfilter)) leaf_name_data.push_back(port_state.get_name_leafdata());
    if (port_fail_code.is_set || is_set(port_fail_code.yfilter)) leaf_name_data.push_back(port_fail_code.get_name_leafdata());
    if (fsm_state.is_set || is_set(fsm_state.yfilter)) leaf_name_data.push_back(fsm_state.get_name_leafdata());
    if (vlan_state.is_set || is_set(vlan_state.yfilter)) leaf_name_data.push_back(vlan_state.get_name_leafdata());
    if (vlan_vector.is_set || is_set(vlan_vector.yfilter)) leaf_name_data.push_back(vlan_vector.get_name_leafdata());
    if (reversion_time.is_set || is_set(reversion_time.yfilter)) leaf_name_data.push_back(reversion_time.get_name_leafdata());
    if (reversion_time_remaining.is_set || is_set(reversion_time_remaining.yfilter)) leaf_name_data.push_back(reversion_time_remaining.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-state")
    {
        port_state = value;
        port_state.value_namespace = name_space;
        port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-fail-code")
    {
        port_fail_code = value;
        port_fail_code.value_namespace = name_space;
        port_fail_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsm-state")
    {
        fsm_state = value;
        fsm_state.value_namespace = name_space;
        fsm_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-state")
    {
        vlan_state = value;
        vlan_state.value_namespace = name_space;
        vlan_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-vector")
    {
        vlan_vector = value;
        vlan_vector.value_namespace = name_space;
        vlan_vector.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reversion-time")
    {
        reversion_time = value;
        reversion_time.value_namespace = name_space;
        reversion_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reversion-time-remaining")
    {
        reversion_time_remaining = value;
        reversion_time_remaining.value_namespace = name_space;
        reversion_time_remaining.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-state")
    {
        port_state.yfilter = yfilter;
    }
    if(value_path == "port-fail-code")
    {
        port_fail_code.yfilter = yfilter;
    }
    if(value_path == "fsm-state")
    {
        fsm_state.yfilter = yfilter;
    }
    if(value_path == "vlan-state")
    {
        vlan_state.yfilter = yfilter;
    }
    if(value_path == "vlan-vector")
    {
        vlan_vector.yfilter = yfilter;
    }
    if(value_path == "reversion-time")
    {
        reversion_time.yfilter = yfilter;
    }
    if(value_path == "reversion-time-remaining")
    {
        reversion_time_remaining.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-state" || name == "port-fail-code" || name == "fsm-state" || name == "vlan-state" || name == "vlan-vector" || name == "reversion-time" || name == "reversion-time-remaining")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::RemotePort()
    :
    port_state{YType::enumeration, "port-state"},
    port_fail_code{YType::uint8, "port-fail-code"},
    fsm_state{YType::uint8, "fsm-state"},
    vlan_state{YType::uint8, "vlan-state"},
    vlan_vector{YType::str, "vlan-vector"},
    reversion_time{YType::uint32, "reversion-time"},
    reversion_time_remaining{YType::uint32, "reversion-time-remaining"}
{

    yang_name = "remote-port"; yang_parent_name = "ports"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::~RemotePort()
{
}

bool L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::has_data() const
{
    if (is_presence_container) return true;
    return port_state.is_set
	|| port_fail_code.is_set
	|| fsm_state.is_set
	|| vlan_state.is_set
	|| vlan_vector.is_set
	|| reversion_time.is_set
	|| reversion_time_remaining.is_set;
}

bool L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_state.yfilter)
	|| ydk::is_set(port_fail_code.yfilter)
	|| ydk::is_set(fsm_state.yfilter)
	|| ydk::is_set(vlan_state.yfilter)
	|| ydk::is_set(vlan_vector.yfilter)
	|| ydk::is_set(reversion_time.yfilter)
	|| ydk::is_set(reversion_time_remaining.yfilter);
}

std::string L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_state.is_set || is_set(port_state.yfilter)) leaf_name_data.push_back(port_state.get_name_leafdata());
    if (port_fail_code.is_set || is_set(port_fail_code.yfilter)) leaf_name_data.push_back(port_fail_code.get_name_leafdata());
    if (fsm_state.is_set || is_set(fsm_state.yfilter)) leaf_name_data.push_back(fsm_state.get_name_leafdata());
    if (vlan_state.is_set || is_set(vlan_state.yfilter)) leaf_name_data.push_back(vlan_state.get_name_leafdata());
    if (vlan_vector.is_set || is_set(vlan_vector.yfilter)) leaf_name_data.push_back(vlan_vector.get_name_leafdata());
    if (reversion_time.is_set || is_set(reversion_time.yfilter)) leaf_name_data.push_back(reversion_time.get_name_leafdata());
    if (reversion_time_remaining.is_set || is_set(reversion_time_remaining.yfilter)) leaf_name_data.push_back(reversion_time_remaining.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-state")
    {
        port_state = value;
        port_state.value_namespace = name_space;
        port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-fail-code")
    {
        port_fail_code = value;
        port_fail_code.value_namespace = name_space;
        port_fail_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsm-state")
    {
        fsm_state = value;
        fsm_state.value_namespace = name_space;
        fsm_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-state")
    {
        vlan_state = value;
        vlan_state.value_namespace = name_space;
        vlan_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-vector")
    {
        vlan_vector = value;
        vlan_vector.value_namespace = name_space;
        vlan_vector.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reversion-time")
    {
        reversion_time = value;
        reversion_time.value_namespace = name_space;
        reversion_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reversion-time-remaining")
    {
        reversion_time_remaining = value;
        reversion_time_remaining.value_namespace = name_space;
        reversion_time_remaining.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-state")
    {
        port_state.yfilter = yfilter;
    }
    if(value_path == "port-fail-code")
    {
        port_fail_code.yfilter = yfilter;
    }
    if(value_path == "fsm-state")
    {
        fsm_state.yfilter = yfilter;
    }
    if(value_path == "vlan-state")
    {
        vlan_state.yfilter = yfilter;
    }
    if(value_path == "vlan-vector")
    {
        vlan_vector.yfilter = yfilter;
    }
    if(value_path == "reversion-time")
    {
        reversion_time.yfilter = yfilter;
    }
    if(value_path == "reversion-time-remaining")
    {
        reversion_time_remaining.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-state" || name == "port-fail-code" || name == "fsm-state" || name == "vlan-state" || name == "vlan-vector" || name == "reversion-time" || name == "reversion-time-remaining")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPorts()
    :
    iccp_port(this, {"interface"})
{

    yang_name = "iccp-ports"; yang_parent_name = "iccp-group"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::~IccpPorts()
{
}

bool L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iccp_port.len(); index++)
    {
        if(iccp_port[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::has_operation() const
{
    for (std::size_t index=0; index<iccp_port.len(); index++)
    {
        if(iccp_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-port")
    {
        auto ent_ = std::make_shared<L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort>();
        ent_->parent = this;
        iccp_port.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iccp_port.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-port")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::IccpPort()
    :
    interface{YType::str, "interface"},
    interface_name{YType::str, "interface-name"},
    mac_flush_tcn{YType::boolean, "mac-flush-tcn"}
        ,
    local_port(std::make_shared<L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort>())
    , remote_port(std::make_shared<L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort>())
{
    local_port->parent = this;
    remote_port->parent = this;

    yang_name = "iccp-port"; yang_parent_name = "iccp-ports"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::~IccpPort()
{
}

bool L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| interface_name.is_set
	|| mac_flush_tcn.is_set
	|| (local_port !=  nullptr && local_port->has_data())
	|| (remote_port !=  nullptr && remote_port->has_data());
}

bool L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(mac_flush_tcn.yfilter)
	|| (local_port !=  nullptr && local_port->has_operation())
	|| (remote_port !=  nullptr && remote_port->has_operation());
}

std::string L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-port";
    ADD_KEY_TOKEN(interface, "interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (mac_flush_tcn.is_set || is_set(mac_flush_tcn.yfilter)) leaf_name_data.push_back(mac_flush_tcn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-port")
    {
        if(local_port == nullptr)
        {
            local_port = std::make_shared<L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort>();
        }
        return local_port;
    }

    if(child_yang_name == "remote-port")
    {
        if(remote_port == nullptr)
        {
            remote_port = std::make_shared<L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort>();
        }
        return remote_port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local_port != nullptr)
    {
        _children["local-port"] = local_port;
    }

    if(remote_port != nullptr)
    {
        _children["remote-port"] = remote_port;
    }

    return _children;
}

void L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-flush-tcn")
    {
        mac_flush_tcn = value;
        mac_flush_tcn.value_namespace = name_space;
        mac_flush_tcn.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "mac-flush-tcn")
    {
        mac_flush_tcn.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-port" || name == "remote-port" || name == "interface" || name == "interface-name" || name == "mac-flush-tcn")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::LocalPort()
    :
    port_state{YType::enumeration, "port-state"},
    port_fail_code{YType::uint8, "port-fail-code"},
    fsm_state{YType::uint8, "fsm-state"},
    vlan_state{YType::uint8, "vlan-state"},
    vlan_vector{YType::str, "vlan-vector"},
    reversion_time{YType::uint32, "reversion-time"},
    reversion_time_remaining{YType::uint32, "reversion-time-remaining"}
{

    yang_name = "local-port"; yang_parent_name = "iccp-port"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::~LocalPort()
{
}

bool L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::has_data() const
{
    if (is_presence_container) return true;
    return port_state.is_set
	|| port_fail_code.is_set
	|| fsm_state.is_set
	|| vlan_state.is_set
	|| vlan_vector.is_set
	|| reversion_time.is_set
	|| reversion_time_remaining.is_set;
}

bool L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_state.yfilter)
	|| ydk::is_set(port_fail_code.yfilter)
	|| ydk::is_set(fsm_state.yfilter)
	|| ydk::is_set(vlan_state.yfilter)
	|| ydk::is_set(vlan_vector.yfilter)
	|| ydk::is_set(reversion_time.yfilter)
	|| ydk::is_set(reversion_time_remaining.yfilter);
}

std::string L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_state.is_set || is_set(port_state.yfilter)) leaf_name_data.push_back(port_state.get_name_leafdata());
    if (port_fail_code.is_set || is_set(port_fail_code.yfilter)) leaf_name_data.push_back(port_fail_code.get_name_leafdata());
    if (fsm_state.is_set || is_set(fsm_state.yfilter)) leaf_name_data.push_back(fsm_state.get_name_leafdata());
    if (vlan_state.is_set || is_set(vlan_state.yfilter)) leaf_name_data.push_back(vlan_state.get_name_leafdata());
    if (vlan_vector.is_set || is_set(vlan_vector.yfilter)) leaf_name_data.push_back(vlan_vector.get_name_leafdata());
    if (reversion_time.is_set || is_set(reversion_time.yfilter)) leaf_name_data.push_back(reversion_time.get_name_leafdata());
    if (reversion_time_remaining.is_set || is_set(reversion_time_remaining.yfilter)) leaf_name_data.push_back(reversion_time_remaining.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-state")
    {
        port_state = value;
        port_state.value_namespace = name_space;
        port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-fail-code")
    {
        port_fail_code = value;
        port_fail_code.value_namespace = name_space;
        port_fail_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsm-state")
    {
        fsm_state = value;
        fsm_state.value_namespace = name_space;
        fsm_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-state")
    {
        vlan_state = value;
        vlan_state.value_namespace = name_space;
        vlan_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-vector")
    {
        vlan_vector = value;
        vlan_vector.value_namespace = name_space;
        vlan_vector.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reversion-time")
    {
        reversion_time = value;
        reversion_time.value_namespace = name_space;
        reversion_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reversion-time-remaining")
    {
        reversion_time_remaining = value;
        reversion_time_remaining.value_namespace = name_space;
        reversion_time_remaining.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-state")
    {
        port_state.yfilter = yfilter;
    }
    if(value_path == "port-fail-code")
    {
        port_fail_code.yfilter = yfilter;
    }
    if(value_path == "fsm-state")
    {
        fsm_state.yfilter = yfilter;
    }
    if(value_path == "vlan-state")
    {
        vlan_state.yfilter = yfilter;
    }
    if(value_path == "vlan-vector")
    {
        vlan_vector.yfilter = yfilter;
    }
    if(value_path == "reversion-time")
    {
        reversion_time.yfilter = yfilter;
    }
    if(value_path == "reversion-time-remaining")
    {
        reversion_time_remaining.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-state" || name == "port-fail-code" || name == "fsm-state" || name == "vlan-state" || name == "vlan-vector" || name == "reversion-time" || name == "reversion-time-remaining")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::RemotePort()
    :
    port_state{YType::enumeration, "port-state"},
    port_fail_code{YType::uint8, "port-fail-code"},
    fsm_state{YType::uint8, "fsm-state"},
    vlan_state{YType::uint8, "vlan-state"},
    vlan_vector{YType::str, "vlan-vector"},
    reversion_time{YType::uint32, "reversion-time"},
    reversion_time_remaining{YType::uint32, "reversion-time-remaining"}
{

    yang_name = "remote-port"; yang_parent_name = "iccp-port"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::~RemotePort()
{
}

bool L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::has_data() const
{
    if (is_presence_container) return true;
    return port_state.is_set
	|| port_fail_code.is_set
	|| fsm_state.is_set
	|| vlan_state.is_set
	|| vlan_vector.is_set
	|| reversion_time.is_set
	|| reversion_time_remaining.is_set;
}

bool L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_state.yfilter)
	|| ydk::is_set(port_fail_code.yfilter)
	|| ydk::is_set(fsm_state.yfilter)
	|| ydk::is_set(vlan_state.yfilter)
	|| ydk::is_set(vlan_vector.yfilter)
	|| ydk::is_set(reversion_time.yfilter)
	|| ydk::is_set(reversion_time_remaining.yfilter);
}

std::string L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_state.is_set || is_set(port_state.yfilter)) leaf_name_data.push_back(port_state.get_name_leafdata());
    if (port_fail_code.is_set || is_set(port_fail_code.yfilter)) leaf_name_data.push_back(port_fail_code.get_name_leafdata());
    if (fsm_state.is_set || is_set(fsm_state.yfilter)) leaf_name_data.push_back(fsm_state.get_name_leafdata());
    if (vlan_state.is_set || is_set(vlan_state.yfilter)) leaf_name_data.push_back(vlan_state.get_name_leafdata());
    if (vlan_vector.is_set || is_set(vlan_vector.yfilter)) leaf_name_data.push_back(vlan_vector.get_name_leafdata());
    if (reversion_time.is_set || is_set(reversion_time.yfilter)) leaf_name_data.push_back(reversion_time.get_name_leafdata());
    if (reversion_time_remaining.is_set || is_set(reversion_time_remaining.yfilter)) leaf_name_data.push_back(reversion_time_remaining.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-state")
    {
        port_state = value;
        port_state.value_namespace = name_space;
        port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-fail-code")
    {
        port_fail_code = value;
        port_fail_code.value_namespace = name_space;
        port_fail_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsm-state")
    {
        fsm_state = value;
        fsm_state.value_namespace = name_space;
        fsm_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-state")
    {
        vlan_state = value;
        vlan_state.value_namespace = name_space;
        vlan_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-vector")
    {
        vlan_vector = value;
        vlan_vector.value_namespace = name_space;
        vlan_vector.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reversion-time")
    {
        reversion_time = value;
        reversion_time.value_namespace = name_space;
        reversion_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reversion-time-remaining")
    {
        reversion_time_remaining = value;
        reversion_time_remaining.value_namespace = name_space;
        reversion_time_remaining.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-state")
    {
        port_state.yfilter = yfilter;
    }
    if(value_path == "port-fail-code")
    {
        port_fail_code.yfilter = yfilter;
    }
    if(value_path == "fsm-state")
    {
        fsm_state.yfilter = yfilter;
    }
    if(value_path == "vlan-state")
    {
        vlan_state.yfilter = yfilter;
    }
    if(value_path == "vlan-vector")
    {
        vlan_vector.yfilter = yfilter;
    }
    if(value_path == "reversion-time")
    {
        reversion_time.yfilter = yfilter;
    }
    if(value_path == "reversion-time-remaining")
    {
        reversion_time_remaining.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-state" || name == "port-fail-code" || name == "fsm-state" || name == "vlan-state" || name == "vlan-vector" || name == "reversion-time" || name == "reversion-time-remaining")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::BridgeSummary::BridgeSummary()
    :
    number_groups{YType::uint32, "number-groups"},
    number_vlan_switches{YType::uint32, "number-vlan-switches"},
    number_bridge_domains{YType::uint32, "number-bridge-domains"},
    number_bridge_domains_up{YType::uint32, "number-bridge-domains-up"},
    number_bridge_domains_shut{YType::uint32, "number-bridge-domains-shut"},
    number_default_bridge_doamins{YType::uint32, "number-default-bridge-doamins"},
    number_pbb_edge{YType::uint32, "number-pbb-edge"},
    number_pbb_core{YType::uint32, "number-pbb-core"},
    number_p2mp{YType::uint32, "number-p2mp"},
    number_p2mp_up{YType::uint32, "number-p2mp-up"},
    number_p2mp_down{YType::uint32, "number-p2mp-down"},
    number_a_cs{YType::uint32, "number-a-cs"},
    number_a_cs_up{YType::uint32, "number-a-cs-up"},
    number_a_cs_down{YType::uint32, "number-a-cs-down"},
    number_pseudowires{YType::uint32, "number-pseudowires"},
    number_p_ws_up{YType::uint32, "number-p-ws-up"},
    number_p_ws_down{YType::uint32, "number-p-ws-down"},
    standby_pseudowires{YType::uint32, "standby-pseudowires"},
    num_vn_is{YType::uint32, "num-vn-is"},
    num_vn_is_up{YType::uint32, "num-vn-is-up"},
    num_vn_is_down{YType::uint32, "num-vn-is-down"},
    num_vn_is_unresolved{YType::uint32, "num-vn-is-unresolved"},
    out_of_memory_state{YType::uint32, "out-of-memory-state"},
    partially_programmed_bridges{YType::uint32, "partially-programmed-bridges"},
    partially_programmed_pseudowires{YType::uint32, "partially-programmed-pseudowires"},
    partially_programmed_a_cs{YType::uint32, "partially-programmed-a-cs"}
{

    yang_name = "bridge-summary"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::BridgeSummary::~BridgeSummary()
{
}

bool L2vpnv2::Nodes::Node::BridgeSummary::has_data() const
{
    if (is_presence_container) return true;
    return number_groups.is_set
	|| number_vlan_switches.is_set
	|| number_bridge_domains.is_set
	|| number_bridge_domains_up.is_set
	|| number_bridge_domains_shut.is_set
	|| number_default_bridge_doamins.is_set
	|| number_pbb_edge.is_set
	|| number_pbb_core.is_set
	|| number_p2mp.is_set
	|| number_p2mp_up.is_set
	|| number_p2mp_down.is_set
	|| number_a_cs.is_set
	|| number_a_cs_up.is_set
	|| number_a_cs_down.is_set
	|| number_pseudowires.is_set
	|| number_p_ws_up.is_set
	|| number_p_ws_down.is_set
	|| standby_pseudowires.is_set
	|| num_vn_is.is_set
	|| num_vn_is_up.is_set
	|| num_vn_is_down.is_set
	|| num_vn_is_unresolved.is_set
	|| out_of_memory_state.is_set
	|| partially_programmed_bridges.is_set
	|| partially_programmed_pseudowires.is_set
	|| partially_programmed_a_cs.is_set;
}

bool L2vpnv2::Nodes::Node::BridgeSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number_groups.yfilter)
	|| ydk::is_set(number_vlan_switches.yfilter)
	|| ydk::is_set(number_bridge_domains.yfilter)
	|| ydk::is_set(number_bridge_domains_up.yfilter)
	|| ydk::is_set(number_bridge_domains_shut.yfilter)
	|| ydk::is_set(number_default_bridge_doamins.yfilter)
	|| ydk::is_set(number_pbb_edge.yfilter)
	|| ydk::is_set(number_pbb_core.yfilter)
	|| ydk::is_set(number_p2mp.yfilter)
	|| ydk::is_set(number_p2mp_up.yfilter)
	|| ydk::is_set(number_p2mp_down.yfilter)
	|| ydk::is_set(number_a_cs.yfilter)
	|| ydk::is_set(number_a_cs_up.yfilter)
	|| ydk::is_set(number_a_cs_down.yfilter)
	|| ydk::is_set(number_pseudowires.yfilter)
	|| ydk::is_set(number_p_ws_up.yfilter)
	|| ydk::is_set(number_p_ws_down.yfilter)
	|| ydk::is_set(standby_pseudowires.yfilter)
	|| ydk::is_set(num_vn_is.yfilter)
	|| ydk::is_set(num_vn_is_up.yfilter)
	|| ydk::is_set(num_vn_is_down.yfilter)
	|| ydk::is_set(num_vn_is_unresolved.yfilter)
	|| ydk::is_set(out_of_memory_state.yfilter)
	|| ydk::is_set(partially_programmed_bridges.yfilter)
	|| ydk::is_set(partially_programmed_pseudowires.yfilter)
	|| ydk::is_set(partially_programmed_a_cs.yfilter);
}

std::string L2vpnv2::Nodes::Node::BridgeSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::BridgeSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_groups.is_set || is_set(number_groups.yfilter)) leaf_name_data.push_back(number_groups.get_name_leafdata());
    if (number_vlan_switches.is_set || is_set(number_vlan_switches.yfilter)) leaf_name_data.push_back(number_vlan_switches.get_name_leafdata());
    if (number_bridge_domains.is_set || is_set(number_bridge_domains.yfilter)) leaf_name_data.push_back(number_bridge_domains.get_name_leafdata());
    if (number_bridge_domains_up.is_set || is_set(number_bridge_domains_up.yfilter)) leaf_name_data.push_back(number_bridge_domains_up.get_name_leafdata());
    if (number_bridge_domains_shut.is_set || is_set(number_bridge_domains_shut.yfilter)) leaf_name_data.push_back(number_bridge_domains_shut.get_name_leafdata());
    if (number_default_bridge_doamins.is_set || is_set(number_default_bridge_doamins.yfilter)) leaf_name_data.push_back(number_default_bridge_doamins.get_name_leafdata());
    if (number_pbb_edge.is_set || is_set(number_pbb_edge.yfilter)) leaf_name_data.push_back(number_pbb_edge.get_name_leafdata());
    if (number_pbb_core.is_set || is_set(number_pbb_core.yfilter)) leaf_name_data.push_back(number_pbb_core.get_name_leafdata());
    if (number_p2mp.is_set || is_set(number_p2mp.yfilter)) leaf_name_data.push_back(number_p2mp.get_name_leafdata());
    if (number_p2mp_up.is_set || is_set(number_p2mp_up.yfilter)) leaf_name_data.push_back(number_p2mp_up.get_name_leafdata());
    if (number_p2mp_down.is_set || is_set(number_p2mp_down.yfilter)) leaf_name_data.push_back(number_p2mp_down.get_name_leafdata());
    if (number_a_cs.is_set || is_set(number_a_cs.yfilter)) leaf_name_data.push_back(number_a_cs.get_name_leafdata());
    if (number_a_cs_up.is_set || is_set(number_a_cs_up.yfilter)) leaf_name_data.push_back(number_a_cs_up.get_name_leafdata());
    if (number_a_cs_down.is_set || is_set(number_a_cs_down.yfilter)) leaf_name_data.push_back(number_a_cs_down.get_name_leafdata());
    if (number_pseudowires.is_set || is_set(number_pseudowires.yfilter)) leaf_name_data.push_back(number_pseudowires.get_name_leafdata());
    if (number_p_ws_up.is_set || is_set(number_p_ws_up.yfilter)) leaf_name_data.push_back(number_p_ws_up.get_name_leafdata());
    if (number_p_ws_down.is_set || is_set(number_p_ws_down.yfilter)) leaf_name_data.push_back(number_p_ws_down.get_name_leafdata());
    if (standby_pseudowires.is_set || is_set(standby_pseudowires.yfilter)) leaf_name_data.push_back(standby_pseudowires.get_name_leafdata());
    if (num_vn_is.is_set || is_set(num_vn_is.yfilter)) leaf_name_data.push_back(num_vn_is.get_name_leafdata());
    if (num_vn_is_up.is_set || is_set(num_vn_is_up.yfilter)) leaf_name_data.push_back(num_vn_is_up.get_name_leafdata());
    if (num_vn_is_down.is_set || is_set(num_vn_is_down.yfilter)) leaf_name_data.push_back(num_vn_is_down.get_name_leafdata());
    if (num_vn_is_unresolved.is_set || is_set(num_vn_is_unresolved.yfilter)) leaf_name_data.push_back(num_vn_is_unresolved.get_name_leafdata());
    if (out_of_memory_state.is_set || is_set(out_of_memory_state.yfilter)) leaf_name_data.push_back(out_of_memory_state.get_name_leafdata());
    if (partially_programmed_bridges.is_set || is_set(partially_programmed_bridges.yfilter)) leaf_name_data.push_back(partially_programmed_bridges.get_name_leafdata());
    if (partially_programmed_pseudowires.is_set || is_set(partially_programmed_pseudowires.yfilter)) leaf_name_data.push_back(partially_programmed_pseudowires.get_name_leafdata());
    if (partially_programmed_a_cs.is_set || is_set(partially_programmed_a_cs.yfilter)) leaf_name_data.push_back(partially_programmed_a_cs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::BridgeSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::BridgeSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Nodes::Node::BridgeSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-groups")
    {
        number_groups = value;
        number_groups.value_namespace = name_space;
        number_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-vlan-switches")
    {
        number_vlan_switches = value;
        number_vlan_switches.value_namespace = name_space;
        number_vlan_switches.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-bridge-domains")
    {
        number_bridge_domains = value;
        number_bridge_domains.value_namespace = name_space;
        number_bridge_domains.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-bridge-domains-up")
    {
        number_bridge_domains_up = value;
        number_bridge_domains_up.value_namespace = name_space;
        number_bridge_domains_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-bridge-domains-shut")
    {
        number_bridge_domains_shut = value;
        number_bridge_domains_shut.value_namespace = name_space;
        number_bridge_domains_shut.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-default-bridge-doamins")
    {
        number_default_bridge_doamins = value;
        number_default_bridge_doamins.value_namespace = name_space;
        number_default_bridge_doamins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pbb-edge")
    {
        number_pbb_edge = value;
        number_pbb_edge.value_namespace = name_space;
        number_pbb_edge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pbb-core")
    {
        number_pbb_core = value;
        number_pbb_core.value_namespace = name_space;
        number_pbb_core.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-p2mp")
    {
        number_p2mp = value;
        number_p2mp.value_namespace = name_space;
        number_p2mp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-p2mp-up")
    {
        number_p2mp_up = value;
        number_p2mp_up.value_namespace = name_space;
        number_p2mp_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-p2mp-down")
    {
        number_p2mp_down = value;
        number_p2mp_down.value_namespace = name_space;
        number_p2mp_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-a-cs")
    {
        number_a_cs = value;
        number_a_cs.value_namespace = name_space;
        number_a_cs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-a-cs-up")
    {
        number_a_cs_up = value;
        number_a_cs_up.value_namespace = name_space;
        number_a_cs_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-a-cs-down")
    {
        number_a_cs_down = value;
        number_a_cs_down.value_namespace = name_space;
        number_a_cs_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pseudowires")
    {
        number_pseudowires = value;
        number_pseudowires.value_namespace = name_space;
        number_pseudowires.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-p-ws-up")
    {
        number_p_ws_up = value;
        number_p_ws_up.value_namespace = name_space;
        number_p_ws_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-p-ws-down")
    {
        number_p_ws_down = value;
        number_p_ws_down.value_namespace = name_space;
        number_p_ws_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-pseudowires")
    {
        standby_pseudowires = value;
        standby_pseudowires.value_namespace = name_space;
        standby_pseudowires.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-vn-is")
    {
        num_vn_is = value;
        num_vn_is.value_namespace = name_space;
        num_vn_is.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-vn-is-up")
    {
        num_vn_is_up = value;
        num_vn_is_up.value_namespace = name_space;
        num_vn_is_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-vn-is-down")
    {
        num_vn_is_down = value;
        num_vn_is_down.value_namespace = name_space;
        num_vn_is_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-vn-is-unresolved")
    {
        num_vn_is_unresolved = value;
        num_vn_is_unresolved.value_namespace = name_space;
        num_vn_is_unresolved.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-memory-state")
    {
        out_of_memory_state = value;
        out_of_memory_state.value_namespace = name_space;
        out_of_memory_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partially-programmed-bridges")
    {
        partially_programmed_bridges = value;
        partially_programmed_bridges.value_namespace = name_space;
        partially_programmed_bridges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partially-programmed-pseudowires")
    {
        partially_programmed_pseudowires = value;
        partially_programmed_pseudowires.value_namespace = name_space;
        partially_programmed_pseudowires.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partially-programmed-a-cs")
    {
        partially_programmed_a_cs = value;
        partially_programmed_a_cs.value_namespace = name_space;
        partially_programmed_a_cs.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::BridgeSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-groups")
    {
        number_groups.yfilter = yfilter;
    }
    if(value_path == "number-vlan-switches")
    {
        number_vlan_switches.yfilter = yfilter;
    }
    if(value_path == "number-bridge-domains")
    {
        number_bridge_domains.yfilter = yfilter;
    }
    if(value_path == "number-bridge-domains-up")
    {
        number_bridge_domains_up.yfilter = yfilter;
    }
    if(value_path == "number-bridge-domains-shut")
    {
        number_bridge_domains_shut.yfilter = yfilter;
    }
    if(value_path == "number-default-bridge-doamins")
    {
        number_default_bridge_doamins.yfilter = yfilter;
    }
    if(value_path == "number-pbb-edge")
    {
        number_pbb_edge.yfilter = yfilter;
    }
    if(value_path == "number-pbb-core")
    {
        number_pbb_core.yfilter = yfilter;
    }
    if(value_path == "number-p2mp")
    {
        number_p2mp.yfilter = yfilter;
    }
    if(value_path == "number-p2mp-up")
    {
        number_p2mp_up.yfilter = yfilter;
    }
    if(value_path == "number-p2mp-down")
    {
        number_p2mp_down.yfilter = yfilter;
    }
    if(value_path == "number-a-cs")
    {
        number_a_cs.yfilter = yfilter;
    }
    if(value_path == "number-a-cs-up")
    {
        number_a_cs_up.yfilter = yfilter;
    }
    if(value_path == "number-a-cs-down")
    {
        number_a_cs_down.yfilter = yfilter;
    }
    if(value_path == "number-pseudowires")
    {
        number_pseudowires.yfilter = yfilter;
    }
    if(value_path == "number-p-ws-up")
    {
        number_p_ws_up.yfilter = yfilter;
    }
    if(value_path == "number-p-ws-down")
    {
        number_p_ws_down.yfilter = yfilter;
    }
    if(value_path == "standby-pseudowires")
    {
        standby_pseudowires.yfilter = yfilter;
    }
    if(value_path == "num-vn-is")
    {
        num_vn_is.yfilter = yfilter;
    }
    if(value_path == "num-vn-is-up")
    {
        num_vn_is_up.yfilter = yfilter;
    }
    if(value_path == "num-vn-is-down")
    {
        num_vn_is_down.yfilter = yfilter;
    }
    if(value_path == "num-vn-is-unresolved")
    {
        num_vn_is_unresolved.yfilter = yfilter;
    }
    if(value_path == "out-of-memory-state")
    {
        out_of_memory_state.yfilter = yfilter;
    }
    if(value_path == "partially-programmed-bridges")
    {
        partially_programmed_bridges.yfilter = yfilter;
    }
    if(value_path == "partially-programmed-pseudowires")
    {
        partially_programmed_pseudowires.yfilter = yfilter;
    }
    if(value_path == "partially-programmed-a-cs")
    {
        partially_programmed_a_cs.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::BridgeSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number-groups" || name == "number-vlan-switches" || name == "number-bridge-domains" || name == "number-bridge-domains-up" || name == "number-bridge-domains-shut" || name == "number-default-bridge-doamins" || name == "number-pbb-edge" || name == "number-pbb-core" || name == "number-p2mp" || name == "number-p2mp-up" || name == "number-p2mp-down" || name == "number-a-cs" || name == "number-a-cs-up" || name == "number-a-cs-down" || name == "number-pseudowires" || name == "number-p-ws-up" || name == "number-p-ws-down" || name == "standby-pseudowires" || name == "num-vn-is" || name == "num-vn-is-up" || name == "num-vn-is-down" || name == "num-vn-is-unresolved" || name == "out-of-memory-state" || name == "partially-programmed-bridges" || name == "partially-programmed-pseudowires" || name == "partially-programmed-a-cs")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::Nsr::Nsr()
    :
    ha_role{YType::uint8, "ha-role"},
    issu_role{YType::uint8, "issu-role"},
    sync_flags{YType::uint32, "sync-flags"},
    sw_install_in_progress{YType::boolean, "sw-install-in-progress"}
        ,
    failover_status(std::make_shared<L2vpnv2::Nodes::Node::Nsr::FailoverStatus>())
    , nsr_status(std::make_shared<L2vpnv2::Nodes::Node::Nsr::NsrStatus>())
    , issu_status(std::make_shared<L2vpnv2::Nodes::Node::Nsr::IssuStatus>())
    , xid_info(this, {})
    , report_card(this, {})
{
    failover_status->parent = this;
    nsr_status->parent = this;
    issu_status->parent = this;

    yang_name = "nsr"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::Nsr::~Nsr()
{
}

bool L2vpnv2::Nodes::Node::Nsr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<xid_info.len(); index++)
    {
        if(xid_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<report_card.len(); index++)
    {
        if(report_card[index]->has_data())
            return true;
    }
    return ha_role.is_set
	|| issu_role.is_set
	|| sync_flags.is_set
	|| sw_install_in_progress.is_set
	|| (failover_status !=  nullptr && failover_status->has_data())
	|| (nsr_status !=  nullptr && nsr_status->has_data())
	|| (issu_status !=  nullptr && issu_status->has_data());
}

bool L2vpnv2::Nodes::Node::Nsr::has_operation() const
{
    for (std::size_t index=0; index<xid_info.len(); index++)
    {
        if(xid_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<report_card.len(); index++)
    {
        if(report_card[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ha_role.yfilter)
	|| ydk::is_set(issu_role.yfilter)
	|| ydk::is_set(sync_flags.yfilter)
	|| ydk::is_set(sw_install_in_progress.yfilter)
	|| (failover_status !=  nullptr && failover_status->has_operation())
	|| (nsr_status !=  nullptr && nsr_status->has_operation())
	|| (issu_status !=  nullptr && issu_status->has_operation());
}

std::string L2vpnv2::Nodes::Node::Nsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::Nsr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ha_role.is_set || is_set(ha_role.yfilter)) leaf_name_data.push_back(ha_role.get_name_leafdata());
    if (issu_role.is_set || is_set(issu_role.yfilter)) leaf_name_data.push_back(issu_role.get_name_leafdata());
    if (sync_flags.is_set || is_set(sync_flags.yfilter)) leaf_name_data.push_back(sync_flags.get_name_leafdata());
    if (sw_install_in_progress.is_set || is_set(sw_install_in_progress.yfilter)) leaf_name_data.push_back(sw_install_in_progress.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::Nsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "failover-status")
    {
        if(failover_status == nullptr)
        {
            failover_status = std::make_shared<L2vpnv2::Nodes::Node::Nsr::FailoverStatus>();
        }
        return failover_status;
    }

    if(child_yang_name == "nsr-status")
    {
        if(nsr_status == nullptr)
        {
            nsr_status = std::make_shared<L2vpnv2::Nodes::Node::Nsr::NsrStatus>();
        }
        return nsr_status;
    }

    if(child_yang_name == "issu-status")
    {
        if(issu_status == nullptr)
        {
            issu_status = std::make_shared<L2vpnv2::Nodes::Node::Nsr::IssuStatus>();
        }
        return issu_status;
    }

    if(child_yang_name == "xid-info")
    {
        auto ent_ = std::make_shared<L2vpnv2::Nodes::Node::Nsr::XidInfo>();
        ent_->parent = this;
        xid_info.append(ent_);
        return ent_;
    }

    if(child_yang_name == "report-card")
    {
        auto ent_ = std::make_shared<L2vpnv2::Nodes::Node::Nsr::ReportCard>();
        ent_->parent = this;
        report_card.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::Nsr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(failover_status != nullptr)
    {
        _children["failover-status"] = failover_status;
    }

    if(nsr_status != nullptr)
    {
        _children["nsr-status"] = nsr_status;
    }

    if(issu_status != nullptr)
    {
        _children["issu-status"] = issu_status;
    }

    count_ = 0;
    for (auto ent_ : xid_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : report_card.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Nodes::Node::Nsr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ha-role")
    {
        ha_role = value;
        ha_role.value_namespace = name_space;
        ha_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "issu-role")
    {
        issu_role = value;
        issu_role.value_namespace = name_space;
        issu_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-flags")
    {
        sync_flags = value;
        sync_flags.value_namespace = name_space;
        sync_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-install-in-progress")
    {
        sw_install_in_progress = value;
        sw_install_in_progress.value_namespace = name_space;
        sw_install_in_progress.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::Nsr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ha-role")
    {
        ha_role.yfilter = yfilter;
    }
    if(value_path == "issu-role")
    {
        issu_role.yfilter = yfilter;
    }
    if(value_path == "sync-flags")
    {
        sync_flags.yfilter = yfilter;
    }
    if(value_path == "sw-install-in-progress")
    {
        sw_install_in_progress.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::Nsr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "failover-status" || name == "nsr-status" || name == "issu-status" || name == "xid-info" || name == "report-card" || name == "ha-role" || name == "issu-role" || name == "sync-flags" || name == "sw-install-in-progress")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::Nsr::FailoverStatus::FailoverStatus()
    :
    triggered_time{YType::uint32, "triggered-time"},
    start_time{YType::uint32, "start-time"},
    master_time{YType::uint32, "master-time"}
{

    yang_name = "failover-status"; yang_parent_name = "nsr"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::Nsr::FailoverStatus::~FailoverStatus()
{
}

bool L2vpnv2::Nodes::Node::Nsr::FailoverStatus::has_data() const
{
    if (is_presence_container) return true;
    return triggered_time.is_set
	|| start_time.is_set
	|| master_time.is_set;
}

bool L2vpnv2::Nodes::Node::Nsr::FailoverStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(triggered_time.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(master_time.yfilter);
}

std::string L2vpnv2::Nodes::Node::Nsr::FailoverStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failover-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::Nsr::FailoverStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (triggered_time.is_set || is_set(triggered_time.yfilter)) leaf_name_data.push_back(triggered_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (master_time.is_set || is_set(master_time.yfilter)) leaf_name_data.push_back(master_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::Nsr::FailoverStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::Nsr::FailoverStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Nodes::Node::Nsr::FailoverStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "triggered-time")
    {
        triggered_time = value;
        triggered_time.value_namespace = name_space;
        triggered_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "master-time")
    {
        master_time = value;
        master_time.value_namespace = name_space;
        master_time.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::Nsr::FailoverStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "triggered-time")
    {
        triggered_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "master-time")
    {
        master_time.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::Nsr::FailoverStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "triggered-time" || name == "start-time" || name == "master-time")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::Nsr::NsrStatus::NsrStatus()
    :
    nsr_role{YType::uint8, "nsr-role"},
    issu_role{YType::uint8, "issu-role"}
        ,
    idt_status(std::make_shared<L2vpnv2::Nodes::Node::Nsr::NsrStatus::IdtStatus>())
    , previ_ous_idt_status(std::make_shared<L2vpnv2::Nodes::Node::Nsr::NsrStatus::PreviOusIdtStatus>())
{
    idt_status->parent = this;
    previ_ous_idt_status->parent = this;

    yang_name = "nsr-status"; yang_parent_name = "nsr"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::Nsr::NsrStatus::~NsrStatus()
{
}

bool L2vpnv2::Nodes::Node::Nsr::NsrStatus::has_data() const
{
    if (is_presence_container) return true;
    return nsr_role.is_set
	|| issu_role.is_set
	|| (idt_status !=  nullptr && idt_status->has_data())
	|| (previ_ous_idt_status !=  nullptr && previ_ous_idt_status->has_data());
}

bool L2vpnv2::Nodes::Node::Nsr::NsrStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nsr_role.yfilter)
	|| ydk::is_set(issu_role.yfilter)
	|| (idt_status !=  nullptr && idt_status->has_operation())
	|| (previ_ous_idt_status !=  nullptr && previ_ous_idt_status->has_operation());
}

std::string L2vpnv2::Nodes::Node::Nsr::NsrStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::Nsr::NsrStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_role.is_set || is_set(nsr_role.yfilter)) leaf_name_data.push_back(nsr_role.get_name_leafdata());
    if (issu_role.is_set || is_set(issu_role.yfilter)) leaf_name_data.push_back(issu_role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::Nsr::NsrStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt-status")
    {
        if(idt_status == nullptr)
        {
            idt_status = std::make_shared<L2vpnv2::Nodes::Node::Nsr::NsrStatus::IdtStatus>();
        }
        return idt_status;
    }

    if(child_yang_name == "previ-ous-idt-status")
    {
        if(previ_ous_idt_status == nullptr)
        {
            previ_ous_idt_status = std::make_shared<L2vpnv2::Nodes::Node::Nsr::NsrStatus::PreviOusIdtStatus>();
        }
        return previ_ous_idt_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::Nsr::NsrStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(idt_status != nullptr)
    {
        _children["idt-status"] = idt_status;
    }

    if(previ_ous_idt_status != nullptr)
    {
        _children["previ-ous-idt-status"] = previ_ous_idt_status;
    }

    return _children;
}

void L2vpnv2::Nodes::Node::Nsr::NsrStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nsr-role")
    {
        nsr_role = value;
        nsr_role.value_namespace = name_space;
        nsr_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "issu-role")
    {
        issu_role = value;
        issu_role.value_namespace = name_space;
        issu_role.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::Nsr::NsrStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nsr-role")
    {
        nsr_role.yfilter = yfilter;
    }
    if(value_path == "issu-role")
    {
        issu_role.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::Nsr::NsrStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idt-status" || name == "previ-ous-idt-status" || name == "nsr-role" || name == "issu-role")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::Nsr::NsrStatus::IdtStatus::IdtStatus()
    :
    sync_status{YType::enumeration, "sync-status"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "idt-status"; yang_parent_name = "nsr-status"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::Nsr::NsrStatus::IdtStatus::~IdtStatus()
{
}

bool L2vpnv2::Nodes::Node::Nsr::NsrStatus::IdtStatus::has_data() const
{
    if (is_presence_container) return true;
    return sync_status.is_set
	|| not_ready_reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool L2vpnv2::Nodes::Node::Nsr::NsrStatus::IdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync_status.yfilter)
	|| ydk::is_set(not_ready_reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string L2vpnv2::Nodes::Node::Nsr::NsrStatus::IdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::Nsr::NsrStatus::IdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_status.is_set || is_set(sync_status.yfilter)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.yfilter)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::Nsr::NsrStatus::IdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::Nsr::NsrStatus::IdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Nodes::Node::Nsr::NsrStatus::IdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync-status")
    {
        sync_status = value;
        sync_status.value_namespace = name_space;
        sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
        not_ready_reason.value_namespace = name_space;
        not_ready_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::Nsr::NsrStatus::IdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sync-status")
    {
        sync_status.yfilter = yfilter;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::Nsr::NsrStatus::IdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync-status" || name == "not-ready-reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::Nsr::NsrStatus::PreviOusIdtStatus::PreviOusIdtStatus()
    :
    sync_status{YType::enumeration, "sync-status"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "previ-ous-idt-status"; yang_parent_name = "nsr-status"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::Nsr::NsrStatus::PreviOusIdtStatus::~PreviOusIdtStatus()
{
}

bool L2vpnv2::Nodes::Node::Nsr::NsrStatus::PreviOusIdtStatus::has_data() const
{
    if (is_presence_container) return true;
    return sync_status.is_set
	|| not_ready_reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool L2vpnv2::Nodes::Node::Nsr::NsrStatus::PreviOusIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync_status.yfilter)
	|| ydk::is_set(not_ready_reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string L2vpnv2::Nodes::Node::Nsr::NsrStatus::PreviOusIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previ-ous-idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::Nsr::NsrStatus::PreviOusIdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_status.is_set || is_set(sync_status.yfilter)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.yfilter)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::Nsr::NsrStatus::PreviOusIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::Nsr::NsrStatus::PreviOusIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Nodes::Node::Nsr::NsrStatus::PreviOusIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync-status")
    {
        sync_status = value;
        sync_status.value_namespace = name_space;
        sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
        not_ready_reason.value_namespace = name_space;
        not_ready_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::Nsr::NsrStatus::PreviOusIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sync-status")
    {
        sync_status.yfilter = yfilter;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::Nsr::NsrStatus::PreviOusIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync-status" || name == "not-ready-reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::Nsr::IssuStatus::IssuStatus()
    :
    nsr_role{YType::uint8, "nsr-role"},
    issu_role{YType::uint8, "issu-role"}
        ,
    idt_status(std::make_shared<L2vpnv2::Nodes::Node::Nsr::IssuStatus::IdtStatus>())
    , previ_ous_idt_status(std::make_shared<L2vpnv2::Nodes::Node::Nsr::IssuStatus::PreviOusIdtStatus>())
{
    idt_status->parent = this;
    previ_ous_idt_status->parent = this;

    yang_name = "issu-status"; yang_parent_name = "nsr"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::Nsr::IssuStatus::~IssuStatus()
{
}

bool L2vpnv2::Nodes::Node::Nsr::IssuStatus::has_data() const
{
    if (is_presence_container) return true;
    return nsr_role.is_set
	|| issu_role.is_set
	|| (idt_status !=  nullptr && idt_status->has_data())
	|| (previ_ous_idt_status !=  nullptr && previ_ous_idt_status->has_data());
}

bool L2vpnv2::Nodes::Node::Nsr::IssuStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nsr_role.yfilter)
	|| ydk::is_set(issu_role.yfilter)
	|| (idt_status !=  nullptr && idt_status->has_operation())
	|| (previ_ous_idt_status !=  nullptr && previ_ous_idt_status->has_operation());
}

std::string L2vpnv2::Nodes::Node::Nsr::IssuStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::Nsr::IssuStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_role.is_set || is_set(nsr_role.yfilter)) leaf_name_data.push_back(nsr_role.get_name_leafdata());
    if (issu_role.is_set || is_set(issu_role.yfilter)) leaf_name_data.push_back(issu_role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::Nsr::IssuStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt-status")
    {
        if(idt_status == nullptr)
        {
            idt_status = std::make_shared<L2vpnv2::Nodes::Node::Nsr::IssuStatus::IdtStatus>();
        }
        return idt_status;
    }

    if(child_yang_name == "previ-ous-idt-status")
    {
        if(previ_ous_idt_status == nullptr)
        {
            previ_ous_idt_status = std::make_shared<L2vpnv2::Nodes::Node::Nsr::IssuStatus::PreviOusIdtStatus>();
        }
        return previ_ous_idt_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::Nsr::IssuStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(idt_status != nullptr)
    {
        _children["idt-status"] = idt_status;
    }

    if(previ_ous_idt_status != nullptr)
    {
        _children["previ-ous-idt-status"] = previ_ous_idt_status;
    }

    return _children;
}

void L2vpnv2::Nodes::Node::Nsr::IssuStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nsr-role")
    {
        nsr_role = value;
        nsr_role.value_namespace = name_space;
        nsr_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "issu-role")
    {
        issu_role = value;
        issu_role.value_namespace = name_space;
        issu_role.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::Nsr::IssuStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nsr-role")
    {
        nsr_role.yfilter = yfilter;
    }
    if(value_path == "issu-role")
    {
        issu_role.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::Nsr::IssuStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idt-status" || name == "previ-ous-idt-status" || name == "nsr-role" || name == "issu-role")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::Nsr::IssuStatus::IdtStatus::IdtStatus()
    :
    sync_status{YType::enumeration, "sync-status"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "idt-status"; yang_parent_name = "issu-status"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::Nsr::IssuStatus::IdtStatus::~IdtStatus()
{
}

bool L2vpnv2::Nodes::Node::Nsr::IssuStatus::IdtStatus::has_data() const
{
    if (is_presence_container) return true;
    return sync_status.is_set
	|| not_ready_reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool L2vpnv2::Nodes::Node::Nsr::IssuStatus::IdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync_status.yfilter)
	|| ydk::is_set(not_ready_reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string L2vpnv2::Nodes::Node::Nsr::IssuStatus::IdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::Nsr::IssuStatus::IdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_status.is_set || is_set(sync_status.yfilter)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.yfilter)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::Nsr::IssuStatus::IdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::Nsr::IssuStatus::IdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Nodes::Node::Nsr::IssuStatus::IdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync-status")
    {
        sync_status = value;
        sync_status.value_namespace = name_space;
        sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
        not_ready_reason.value_namespace = name_space;
        not_ready_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::Nsr::IssuStatus::IdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sync-status")
    {
        sync_status.yfilter = yfilter;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::Nsr::IssuStatus::IdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync-status" || name == "not-ready-reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::Nsr::IssuStatus::PreviOusIdtStatus::PreviOusIdtStatus()
    :
    sync_status{YType::enumeration, "sync-status"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "previ-ous-idt-status"; yang_parent_name = "issu-status"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::Nsr::IssuStatus::PreviOusIdtStatus::~PreviOusIdtStatus()
{
}

bool L2vpnv2::Nodes::Node::Nsr::IssuStatus::PreviOusIdtStatus::has_data() const
{
    if (is_presence_container) return true;
    return sync_status.is_set
	|| not_ready_reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool L2vpnv2::Nodes::Node::Nsr::IssuStatus::PreviOusIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync_status.yfilter)
	|| ydk::is_set(not_ready_reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string L2vpnv2::Nodes::Node::Nsr::IssuStatus::PreviOusIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previ-ous-idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::Nsr::IssuStatus::PreviOusIdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_status.is_set || is_set(sync_status.yfilter)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.yfilter)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::Nsr::IssuStatus::PreviOusIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::Nsr::IssuStatus::PreviOusIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Nodes::Node::Nsr::IssuStatus::PreviOusIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync-status")
    {
        sync_status = value;
        sync_status.value_namespace = name_space;
        sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
        not_ready_reason.value_namespace = name_space;
        not_ready_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::Nsr::IssuStatus::PreviOusIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sync-status")
    {
        sync_status.yfilter = yfilter;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::Nsr::IssuStatus::PreviOusIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync-status" || name == "not-ready-reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::Nsr::XidInfo::XidInfo()
    :
    app_type{YType::enumeration, "app-type"},
    sent_ids{YType::uint32, "sent-ids"}
{

    yang_name = "xid-info"; yang_parent_name = "nsr"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::Nsr::XidInfo::~XidInfo()
{
}

bool L2vpnv2::Nodes::Node::Nsr::XidInfo::has_data() const
{
    if (is_presence_container) return true;
    return app_type.is_set
	|| sent_ids.is_set;
}

bool L2vpnv2::Nodes::Node::Nsr::XidInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(app_type.yfilter)
	|| ydk::is_set(sent_ids.yfilter);
}

std::string L2vpnv2::Nodes::Node::Nsr::XidInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xid-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::Nsr::XidInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (app_type.is_set || is_set(app_type.yfilter)) leaf_name_data.push_back(app_type.get_name_leafdata());
    if (sent_ids.is_set || is_set(sent_ids.yfilter)) leaf_name_data.push_back(sent_ids.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::Nsr::XidInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::Nsr::XidInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Nodes::Node::Nsr::XidInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "app-type")
    {
        app_type = value;
        app_type.value_namespace = name_space;
        app_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-ids")
    {
        sent_ids = value;
        sent_ids.value_namespace = name_space;
        sent_ids.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::Nsr::XidInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "app-type")
    {
        app_type.yfilter = yfilter;
    }
    if(value_path == "sent-ids")
    {
        sent_ids.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::Nsr::XidInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "app-type" || name == "sent-ids")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::Nsr::ReportCard::ReportCard()
    :
    collaborator_is_connected{YType::boolean, "collaborator-is-connected"},
    connection_change_time{YType::uint32, "connection-change-time"},
    collaborator_idt_done{YType::boolean, "collaborator-idt-done"},
    idt_time{YType::uint32, "idt-time"},
    collaborator_skipped{YType::boolean, "collaborator-skipped"},
    expect_idt{YType::boolean, "expect-idt"}
{

    yang_name = "report-card"; yang_parent_name = "nsr"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::Nsr::ReportCard::~ReportCard()
{
}

bool L2vpnv2::Nodes::Node::Nsr::ReportCard::has_data() const
{
    if (is_presence_container) return true;
    return collaborator_is_connected.is_set
	|| connection_change_time.is_set
	|| collaborator_idt_done.is_set
	|| idt_time.is_set
	|| collaborator_skipped.is_set
	|| expect_idt.is_set;
}

bool L2vpnv2::Nodes::Node::Nsr::ReportCard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(collaborator_is_connected.yfilter)
	|| ydk::is_set(connection_change_time.yfilter)
	|| ydk::is_set(collaborator_idt_done.yfilter)
	|| ydk::is_set(idt_time.yfilter)
	|| ydk::is_set(collaborator_skipped.yfilter)
	|| ydk::is_set(expect_idt.yfilter);
}

std::string L2vpnv2::Nodes::Node::Nsr::ReportCard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "report-card";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::Nsr::ReportCard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (collaborator_is_connected.is_set || is_set(collaborator_is_connected.yfilter)) leaf_name_data.push_back(collaborator_is_connected.get_name_leafdata());
    if (connection_change_time.is_set || is_set(connection_change_time.yfilter)) leaf_name_data.push_back(connection_change_time.get_name_leafdata());
    if (collaborator_idt_done.is_set || is_set(collaborator_idt_done.yfilter)) leaf_name_data.push_back(collaborator_idt_done.get_name_leafdata());
    if (idt_time.is_set || is_set(idt_time.yfilter)) leaf_name_data.push_back(idt_time.get_name_leafdata());
    if (collaborator_skipped.is_set || is_set(collaborator_skipped.yfilter)) leaf_name_data.push_back(collaborator_skipped.get_name_leafdata());
    if (expect_idt.is_set || is_set(expect_idt.yfilter)) leaf_name_data.push_back(expect_idt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::Nsr::ReportCard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::Nsr::ReportCard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Nodes::Node::Nsr::ReportCard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "collaborator-is-connected")
    {
        collaborator_is_connected = value;
        collaborator_is_connected.value_namespace = name_space;
        collaborator_is_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-change-time")
    {
        connection_change_time = value;
        connection_change_time.value_namespace = name_space;
        connection_change_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collaborator-idt-done")
    {
        collaborator_idt_done = value;
        collaborator_idt_done.value_namespace = name_space;
        collaborator_idt_done.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-time")
    {
        idt_time = value;
        idt_time.value_namespace = name_space;
        idt_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collaborator-skipped")
    {
        collaborator_skipped = value;
        collaborator_skipped.value_namespace = name_space;
        collaborator_skipped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expect-idt")
    {
        expect_idt = value;
        expect_idt.value_namespace = name_space;
        expect_idt.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::Nsr::ReportCard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "collaborator-is-connected")
    {
        collaborator_is_connected.yfilter = yfilter;
    }
    if(value_path == "connection-change-time")
    {
        connection_change_time.yfilter = yfilter;
    }
    if(value_path == "collaborator-idt-done")
    {
        collaborator_idt_done.yfilter = yfilter;
    }
    if(value_path == "idt-time")
    {
        idt_time.yfilter = yfilter;
    }
    if(value_path == "collaborator-skipped")
    {
        collaborator_skipped.yfilter = yfilter;
    }
    if(value_path == "expect-idt")
    {
        expect_idt.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::Nsr::ReportCard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "collaborator-is-connected" || name == "connection-change-time" || name == "collaborator-idt-done" || name == "idt-time" || name == "collaborator-skipped" || name == "expect-idt")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::PreferredPaths::PreferredPaths()
    :
    preferred_path(this, {})
{

    yang_name = "preferred-paths"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::PreferredPaths::~PreferredPaths()
{
}

bool L2vpnv2::Nodes::Node::PreferredPaths::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<preferred_path.len(); index++)
    {
        if(preferred_path[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpnv2::Nodes::Node::PreferredPaths::has_operation() const
{
    for (std::size_t index=0; index<preferred_path.len(); index++)
    {
        if(preferred_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpnv2::Nodes::Node::PreferredPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preferred-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::PreferredPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::PreferredPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "preferred-path")
    {
        auto ent_ = std::make_shared<L2vpnv2::Nodes::Node::PreferredPaths::PreferredPath>();
        ent_->parent = this;
        preferred_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::PreferredPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : preferred_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Nodes::Node::PreferredPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnv2::Nodes::Node::PreferredPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnv2::Nodes::Node::PreferredPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "preferred-path")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::PreferredPaths::PreferredPath::PreferredPath()
    :
    preferred_type{YType::enumeration, "preferred-type"},
    interface_name{YType::str, "interface-name"},
    type{YType::enumeration, "type"},
    interface_name_xr{YType::str, "interface-name-xr"},
    total_bandwidth{YType::uint32, "total-bandwidth"},
    available_bandwidth{YType::uint32, "available-bandwidth"},
    reserved_bandwidth{YType::uint32, "reserved-bandwidth"}
        ,
    virtual_circuit(this, {})
{

    yang_name = "preferred-path"; yang_parent_name = "preferred-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::PreferredPaths::PreferredPath::~PreferredPath()
{
}

bool L2vpnv2::Nodes::Node::PreferredPaths::PreferredPath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<virtual_circuit.len(); index++)
    {
        if(virtual_circuit[index]->has_data())
            return true;
    }
    return preferred_type.is_set
	|| interface_name.is_set
	|| type.is_set
	|| interface_name_xr.is_set
	|| total_bandwidth.is_set
	|| available_bandwidth.is_set
	|| reserved_bandwidth.is_set;
}

bool L2vpnv2::Nodes::Node::PreferredPaths::PreferredPath::has_operation() const
{
    for (std::size_t index=0; index<virtual_circuit.len(); index++)
    {
        if(virtual_circuit[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(preferred_type.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(total_bandwidth.yfilter)
	|| ydk::is_set(available_bandwidth.yfilter)
	|| ydk::is_set(reserved_bandwidth.yfilter);
}

std::string L2vpnv2::Nodes::Node::PreferredPaths::PreferredPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preferred-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::PreferredPaths::PreferredPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (preferred_type.is_set || is_set(preferred_type.yfilter)) leaf_name_data.push_back(preferred_type.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (total_bandwidth.is_set || is_set(total_bandwidth.yfilter)) leaf_name_data.push_back(total_bandwidth.get_name_leafdata());
    if (available_bandwidth.is_set || is_set(available_bandwidth.yfilter)) leaf_name_data.push_back(available_bandwidth.get_name_leafdata());
    if (reserved_bandwidth.is_set || is_set(reserved_bandwidth.yfilter)) leaf_name_data.push_back(reserved_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::PreferredPaths::PreferredPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "virtual-circuit")
    {
        auto ent_ = std::make_shared<L2vpnv2::Nodes::Node::PreferredPaths::PreferredPath::VirtualCircuit>();
        ent_->parent = this;
        virtual_circuit.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::PreferredPaths::PreferredPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : virtual_circuit.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Nodes::Node::PreferredPaths::PreferredPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "preferred-type")
    {
        preferred_type = value;
        preferred_type.value_namespace = name_space;
        preferred_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-bandwidth")
    {
        total_bandwidth = value;
        total_bandwidth.value_namespace = name_space;
        total_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth = value;
        available_bandwidth.value_namespace = name_space;
        available_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reserved-bandwidth")
    {
        reserved_bandwidth = value;
        reserved_bandwidth.value_namespace = name_space;
        reserved_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::PreferredPaths::PreferredPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "preferred-type")
    {
        preferred_type.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "total-bandwidth")
    {
        total_bandwidth.yfilter = yfilter;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth.yfilter = yfilter;
    }
    if(value_path == "reserved-bandwidth")
    {
        reserved_bandwidth.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::PreferredPaths::PreferredPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "virtual-circuit" || name == "preferred-type" || name == "interface-name" || name == "type" || name == "interface-name-xr" || name == "total-bandwidth" || name == "available-bandwidth" || name == "reserved-bandwidth")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::PreferredPaths::PreferredPath::VirtualCircuit::VirtualCircuit()
    :
    peer_id{YType::str, "peer-id"},
    source_address{YType::str, "source-address"},
    pwid_type{YType::enumeration, "pwid-type"},
    pwid{YType::uint64, "pwid"},
    fe_ctype{YType::enumeration, "fe-ctype"}
{

    yang_name = "virtual-circuit"; yang_parent_name = "preferred-path"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::PreferredPaths::PreferredPath::VirtualCircuit::~VirtualCircuit()
{
}

bool L2vpnv2::Nodes::Node::PreferredPaths::PreferredPath::VirtualCircuit::has_data() const
{
    if (is_presence_container) return true;
    return peer_id.is_set
	|| source_address.is_set
	|| pwid_type.is_set
	|| pwid.is_set
	|| fe_ctype.is_set;
}

bool L2vpnv2::Nodes::Node::PreferredPaths::PreferredPath::VirtualCircuit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_id.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(pwid_type.yfilter)
	|| ydk::is_set(pwid.yfilter)
	|| ydk::is_set(fe_ctype.yfilter);
}

std::string L2vpnv2::Nodes::Node::PreferredPaths::PreferredPath::VirtualCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-circuit";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::PreferredPaths::PreferredPath::VirtualCircuit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_id.is_set || is_set(peer_id.yfilter)) leaf_name_data.push_back(peer_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (pwid_type.is_set || is_set(pwid_type.yfilter)) leaf_name_data.push_back(pwid_type.get_name_leafdata());
    if (pwid.is_set || is_set(pwid.yfilter)) leaf_name_data.push_back(pwid.get_name_leafdata());
    if (fe_ctype.is_set || is_set(fe_ctype.yfilter)) leaf_name_data.push_back(fe_ctype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::PreferredPaths::PreferredPath::VirtualCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::PreferredPaths::PreferredPath::VirtualCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Nodes::Node::PreferredPaths::PreferredPath::VirtualCircuit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-id")
    {
        peer_id = value;
        peer_id.value_namespace = name_space;
        peer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwid-type")
    {
        pwid_type = value;
        pwid_type.value_namespace = name_space;
        pwid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwid")
    {
        pwid = value;
        pwid.value_namespace = name_space;
        pwid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fe-ctype")
    {
        fe_ctype = value;
        fe_ctype.value_namespace = name_space;
        fe_ctype.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::PreferredPaths::PreferredPath::VirtualCircuit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-id")
    {
        peer_id.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "pwid-type")
    {
        pwid_type.yfilter = yfilter;
    }
    if(value_path == "pwid")
    {
        pwid.yfilter = yfilter;
    }
    if(value_path == "fe-ctype")
    {
        fe_ctype.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::PreferredPaths::PreferredPath::VirtualCircuit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-id" || name == "source-address" || name == "pwid-type" || name == "pwid" || name == "fe-ctype")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::PseudowireHeadend::PseudowireHeadend()
    :
    detail_interfaces(std::make_shared<L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces>())
    , summary(std::make_shared<L2vpnv2::Nodes::Node::PseudowireHeadend::Summary>())
{
    detail_interfaces->parent = this;
    summary->parent = this;

    yang_name = "pseudowire-headend"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::PseudowireHeadend::~PseudowireHeadend()
{
}

bool L2vpnv2::Nodes::Node::PseudowireHeadend::has_data() const
{
    if (is_presence_container) return true;
    return (detail_interfaces !=  nullptr && detail_interfaces->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool L2vpnv2::Nodes::Node::PseudowireHeadend::has_operation() const
{
    return is_set(yfilter)
	|| (detail_interfaces !=  nullptr && detail_interfaces->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string L2vpnv2::Nodes::Node::PseudowireHeadend::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-headend";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::PseudowireHeadend::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::PseudowireHeadend::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail-interfaces")
    {
        if(detail_interfaces == nullptr)
        {
            detail_interfaces = std::make_shared<L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces>();
        }
        return detail_interfaces;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<L2vpnv2::Nodes::Node::PseudowireHeadend::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::PseudowireHeadend::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(detail_interfaces != nullptr)
    {
        _children["detail-interfaces"] = detail_interfaces;
    }

    if(summary != nullptr)
    {
        _children["summary"] = summary;
    }

    return _children;
}

void L2vpnv2::Nodes::Node::PseudowireHeadend::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnv2::Nodes::Node::PseudowireHeadend::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnv2::Nodes::Node::PseudowireHeadend::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail-interfaces" || name == "summary")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterfaces()
    :
    detail_interface(this, {"interface_name"})
{

    yang_name = "detail-interfaces"; yang_parent_name = "pseudowire-headend"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::~DetailInterfaces()
{
}

bool L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<detail_interface.len(); index++)
    {
        if(detail_interface[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::has_operation() const
{
    for (std::size_t index=0; index<detail_interface.len(); index++)
    {
        if(detail_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail-interface")
    {
        auto ent_ = std::make_shared<L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface>();
        ent_->parent = this;
        detail_interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : detail_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail-interface")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::DetailInterface()
    :
    interface_name{YType::str, "interface-name"},
    interface_state{YType::enumeration, "interface-state"},
    admin_state{YType::enumeration, "admin-state"},
    mtu{YType::uint32, "mtu"},
    bandwidth{YType::uint32, "bandwidth"},
    label{YType::uint32, "label"},
    l2_overhead{YType::uint32, "l2-overhead"},
    vctype{YType::uint32, "vctype"},
    control_word{YType::boolean, "control-word"}
        ,
    l2_address(std::make_shared<L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address>())
    , generic_interface_list(std::make_shared<L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList>())
{
    l2_address->parent = this;
    generic_interface_list->parent = this;

    yang_name = "detail-interface"; yang_parent_name = "detail-interfaces"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::~DetailInterface()
{
}

bool L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| interface_state.is_set
	|| admin_state.is_set
	|| mtu.is_set
	|| bandwidth.is_set
	|| label.is_set
	|| l2_overhead.is_set
	|| vctype.is_set
	|| control_word.is_set
	|| (l2_address !=  nullptr && l2_address->has_data())
	|| (generic_interface_list !=  nullptr && generic_interface_list->has_data());
}

bool L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_state.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(l2_overhead.yfilter)
	|| ydk::is_set(vctype.yfilter)
	|| ydk::is_set(control_word.yfilter)
	|| (l2_address !=  nullptr && l2_address->has_operation())
	|| (generic_interface_list !=  nullptr && generic_interface_list->has_operation());
}

std::string L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_state.is_set || is_set(interface_state.yfilter)) leaf_name_data.push_back(interface_state.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (l2_overhead.is_set || is_set(l2_overhead.yfilter)) leaf_name_data.push_back(l2_overhead.get_name_leafdata());
    if (vctype.is_set || is_set(vctype.yfilter)) leaf_name_data.push_back(vctype.get_name_leafdata());
    if (control_word.is_set || is_set(control_word.yfilter)) leaf_name_data.push_back(control_word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2-address")
    {
        if(l2_address == nullptr)
        {
            l2_address = std::make_shared<L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address>();
        }
        return l2_address;
    }

    if(child_yang_name == "generic-interface-list")
    {
        if(generic_interface_list == nullptr)
        {
            generic_interface_list = std::make_shared<L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList>();
        }
        return generic_interface_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(l2_address != nullptr)
    {
        _children["l2-address"] = l2_address;
    }

    if(generic_interface_list != nullptr)
    {
        _children["generic-interface-list"] = generic_interface_list;
    }

    return _children;
}

void L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-state")
    {
        interface_state = value;
        interface_state.value_namespace = name_space;
        interface_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2-overhead")
    {
        l2_overhead = value;
        l2_overhead.value_namespace = name_space;
        l2_overhead.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vctype")
    {
        vctype = value;
        vctype.value_namespace = name_space;
        vctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-word")
    {
        control_word = value;
        control_word.value_namespace = name_space;
        control_word.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-state")
    {
        interface_state.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "l2-overhead")
    {
        l2_overhead.yfilter = yfilter;
    }
    if(value_path == "vctype")
    {
        vctype.yfilter = yfilter;
    }
    if(value_path == "control-word")
    {
        control_word.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2-address" || name == "generic-interface-list" || name == "interface-name" || name == "interface-state" || name == "admin-state" || name == "mtu" || name == "bandwidth" || name == "label" || name == "l2-overhead" || name == "vctype" || name == "control-word")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::L2Address()
    :
    interface_type{YType::enumeration, "interface-type"}
        ,
    mac_address(std::make_shared<L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::MacAddress>())
{
    mac_address->parent = this;

    yang_name = "l2-address"; yang_parent_name = "detail-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::~L2Address()
{
}

bool L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::has_data() const
{
    if (is_presence_container) return true;
    return interface_type.is_set
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_type.yfilter)
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_type.is_set || is_set(interface_type.yfilter)) leaf_name_data.push_back(interface_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::MacAddress>();
        }
        return mac_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac_address != nullptr)
    {
        _children["mac-address"] = mac_address;
    }

    return _children;
}

void L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-type")
    {
        interface_type = value;
        interface_type.value_namespace = name_space;
        interface_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-type")
    {
        interface_type.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "interface-type")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::MacAddress::MacAddress()
    :
    mac_address{YType::str, "mac-address"}
{

    yang_name = "mac-address"; yang_parent_name = "l2-address"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::MacAddress::~MacAddress()
{
}

bool L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::MacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set;
}

bool L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter);
}

std::string L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::GenericInterfaceList()
    :
    generic_interface_list_name{YType::str, "generic-interface-list-name"},
    id{YType::uint32, "id"}
        ,
    interface_detail(this, {})
{

    yang_name = "generic-interface-list"; yang_parent_name = "detail-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::~GenericInterfaceList()
{
}

bool L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_detail.len(); index++)
    {
        if(interface_detail[index]->has_data())
            return true;
    }
    return generic_interface_list_name.is_set
	|| id.is_set;
}

bool L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::has_operation() const
{
    for (std::size_t index=0; index<interface_detail.len(); index++)
    {
        if(interface_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(generic_interface_list_name.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-interface-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_interface_list_name.is_set || is_set(generic_interface_list_name.yfilter)) leaf_name_data.push_back(generic_interface_list_name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-detail")
    {
        auto ent_ = std::make_shared<L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::InterfaceDetail>();
        ent_->parent = this;
        interface_detail.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_detail.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "generic-interface-list-name")
    {
        generic_interface_list_name = value;
        generic_interface_list_name.value_namespace = name_space;
        generic_interface_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "generic-interface-list-name")
    {
        generic_interface_list_name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-detail" || name == "generic-interface-list-name" || name == "id")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::InterfaceDetail::InterfaceDetail()
    :
    interface_name{YType::str, "interface-name"},
    bundle_interface_name{YType::str, "bundle-interface-name"},
    interface_state{YType::enumeration, "interface-state"},
    replicate_state{YType::enumeration, "replicate-state"},
    misconfigured{YType::boolean, "misconfigured"}
{

    yang_name = "interface-detail"; yang_parent_name = "generic-interface-list"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::InterfaceDetail::~InterfaceDetail()
{
}

bool L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::InterfaceDetail::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| bundle_interface_name.is_set
	|| interface_state.is_set
	|| replicate_state.is_set
	|| misconfigured.is_set;
}

bool L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::InterfaceDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(bundle_interface_name.yfilter)
	|| ydk::is_set(interface_state.yfilter)
	|| ydk::is_set(replicate_state.yfilter)
	|| ydk::is_set(misconfigured.yfilter);
}

std::string L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::InterfaceDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-detail";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::InterfaceDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bundle_interface_name.is_set || is_set(bundle_interface_name.yfilter)) leaf_name_data.push_back(bundle_interface_name.get_name_leafdata());
    if (interface_state.is_set || is_set(interface_state.yfilter)) leaf_name_data.push_back(interface_state.get_name_leafdata());
    if (replicate_state.is_set || is_set(replicate_state.yfilter)) leaf_name_data.push_back(replicate_state.get_name_leafdata());
    if (misconfigured.is_set || is_set(misconfigured.yfilter)) leaf_name_data.push_back(misconfigured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::InterfaceDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::InterfaceDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::InterfaceDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle-interface-name")
    {
        bundle_interface_name = value;
        bundle_interface_name.value_namespace = name_space;
        bundle_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-state")
    {
        interface_state = value;
        interface_state.value_namespace = name_space;
        interface_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replicate-state")
    {
        replicate_state = value;
        replicate_state.value_namespace = name_space;
        replicate_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "misconfigured")
    {
        misconfigured = value;
        misconfigured.value_namespace = name_space;
        misconfigured.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::InterfaceDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "bundle-interface-name")
    {
        bundle_interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-state")
    {
        interface_state.yfilter = yfilter;
    }
    if(value_path == "replicate-state")
    {
        replicate_state.yfilter = yfilter;
    }
    if(value_path == "misconfigured")
    {
        misconfigured.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::InterfaceDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "bundle-interface-name" || name == "interface-state" || name == "replicate-state" || name == "misconfigured")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::PseudowireHeadend::Summary::Summary()
    :
    interfaces{YType::uint32, "interfaces"},
    up_interfaces{YType::uint32, "up-interfaces"},
    down_interfaces{YType::uint32, "down-interfaces"},
    admin_down_interfaces{YType::uint32, "admin-down-interfaces"},
    psuedowire_ether_interfaces{YType::uint32, "psuedowire-ether-interfaces"},
    up_psuedowire_ether_interfaces{YType::uint32, "up-psuedowire-ether-interfaces"},
    down_pseudowire_ether_interfaces{YType::uint32, "down-pseudowire-ether-interfaces"},
    admin_down_pseudowire_ether_interfaces{YType::uint32, "admin-down-pseudowire-ether-interfaces"},
    pseudowire_iw_interfaces{YType::uint32, "pseudowire-iw-interfaces"},
    up_pseudowire_iw_interfaces{YType::uint32, "up-pseudowire-iw-interfaces"},
    down_pseudowire_iw_interfaces{YType::uint32, "down-pseudowire-iw-interfaces"},
    admin_down_pseudowire_iw_interfaces{YType::uint32, "admin-down-pseudowire-iw-interfaces"}
{

    yang_name = "summary"; yang_parent_name = "pseudowire-headend"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::PseudowireHeadend::Summary::~Summary()
{
}

bool L2vpnv2::Nodes::Node::PseudowireHeadend::Summary::has_data() const
{
    if (is_presence_container) return true;
    return interfaces.is_set
	|| up_interfaces.is_set
	|| down_interfaces.is_set
	|| admin_down_interfaces.is_set
	|| psuedowire_ether_interfaces.is_set
	|| up_psuedowire_ether_interfaces.is_set
	|| down_pseudowire_ether_interfaces.is_set
	|| admin_down_pseudowire_ether_interfaces.is_set
	|| pseudowire_iw_interfaces.is_set
	|| up_pseudowire_iw_interfaces.is_set
	|| down_pseudowire_iw_interfaces.is_set
	|| admin_down_pseudowire_iw_interfaces.is_set;
}

bool L2vpnv2::Nodes::Node::PseudowireHeadend::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interfaces.yfilter)
	|| ydk::is_set(up_interfaces.yfilter)
	|| ydk::is_set(down_interfaces.yfilter)
	|| ydk::is_set(admin_down_interfaces.yfilter)
	|| ydk::is_set(psuedowire_ether_interfaces.yfilter)
	|| ydk::is_set(up_psuedowire_ether_interfaces.yfilter)
	|| ydk::is_set(down_pseudowire_ether_interfaces.yfilter)
	|| ydk::is_set(admin_down_pseudowire_ether_interfaces.yfilter)
	|| ydk::is_set(pseudowire_iw_interfaces.yfilter)
	|| ydk::is_set(up_pseudowire_iw_interfaces.yfilter)
	|| ydk::is_set(down_pseudowire_iw_interfaces.yfilter)
	|| ydk::is_set(admin_down_pseudowire_iw_interfaces.yfilter);
}

std::string L2vpnv2::Nodes::Node::PseudowireHeadend::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::PseudowireHeadend::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interfaces.is_set || is_set(interfaces.yfilter)) leaf_name_data.push_back(interfaces.get_name_leafdata());
    if (up_interfaces.is_set || is_set(up_interfaces.yfilter)) leaf_name_data.push_back(up_interfaces.get_name_leafdata());
    if (down_interfaces.is_set || is_set(down_interfaces.yfilter)) leaf_name_data.push_back(down_interfaces.get_name_leafdata());
    if (admin_down_interfaces.is_set || is_set(admin_down_interfaces.yfilter)) leaf_name_data.push_back(admin_down_interfaces.get_name_leafdata());
    if (psuedowire_ether_interfaces.is_set || is_set(psuedowire_ether_interfaces.yfilter)) leaf_name_data.push_back(psuedowire_ether_interfaces.get_name_leafdata());
    if (up_psuedowire_ether_interfaces.is_set || is_set(up_psuedowire_ether_interfaces.yfilter)) leaf_name_data.push_back(up_psuedowire_ether_interfaces.get_name_leafdata());
    if (down_pseudowire_ether_interfaces.is_set || is_set(down_pseudowire_ether_interfaces.yfilter)) leaf_name_data.push_back(down_pseudowire_ether_interfaces.get_name_leafdata());
    if (admin_down_pseudowire_ether_interfaces.is_set || is_set(admin_down_pseudowire_ether_interfaces.yfilter)) leaf_name_data.push_back(admin_down_pseudowire_ether_interfaces.get_name_leafdata());
    if (pseudowire_iw_interfaces.is_set || is_set(pseudowire_iw_interfaces.yfilter)) leaf_name_data.push_back(pseudowire_iw_interfaces.get_name_leafdata());
    if (up_pseudowire_iw_interfaces.is_set || is_set(up_pseudowire_iw_interfaces.yfilter)) leaf_name_data.push_back(up_pseudowire_iw_interfaces.get_name_leafdata());
    if (down_pseudowire_iw_interfaces.is_set || is_set(down_pseudowire_iw_interfaces.yfilter)) leaf_name_data.push_back(down_pseudowire_iw_interfaces.get_name_leafdata());
    if (admin_down_pseudowire_iw_interfaces.is_set || is_set(admin_down_pseudowire_iw_interfaces.yfilter)) leaf_name_data.push_back(admin_down_pseudowire_iw_interfaces.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::PseudowireHeadend::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::PseudowireHeadend::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Nodes::Node::PseudowireHeadend::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interfaces")
    {
        interfaces = value;
        interfaces.value_namespace = name_space;
        interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-interfaces")
    {
        up_interfaces = value;
        up_interfaces.value_namespace = name_space;
        up_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-interfaces")
    {
        down_interfaces = value;
        down_interfaces.value_namespace = name_space;
        down_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-down-interfaces")
    {
        admin_down_interfaces = value;
        admin_down_interfaces.value_namespace = name_space;
        admin_down_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psuedowire-ether-interfaces")
    {
        psuedowire_ether_interfaces = value;
        psuedowire_ether_interfaces.value_namespace = name_space;
        psuedowire_ether_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-psuedowire-ether-interfaces")
    {
        up_psuedowire_ether_interfaces = value;
        up_psuedowire_ether_interfaces.value_namespace = name_space;
        up_psuedowire_ether_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-pseudowire-ether-interfaces")
    {
        down_pseudowire_ether_interfaces = value;
        down_pseudowire_ether_interfaces.value_namespace = name_space;
        down_pseudowire_ether_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-down-pseudowire-ether-interfaces")
    {
        admin_down_pseudowire_ether_interfaces = value;
        admin_down_pseudowire_ether_interfaces.value_namespace = name_space;
        admin_down_pseudowire_ether_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire-iw-interfaces")
    {
        pseudowire_iw_interfaces = value;
        pseudowire_iw_interfaces.value_namespace = name_space;
        pseudowire_iw_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-pseudowire-iw-interfaces")
    {
        up_pseudowire_iw_interfaces = value;
        up_pseudowire_iw_interfaces.value_namespace = name_space;
        up_pseudowire_iw_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-pseudowire-iw-interfaces")
    {
        down_pseudowire_iw_interfaces = value;
        down_pseudowire_iw_interfaces.value_namespace = name_space;
        down_pseudowire_iw_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-down-pseudowire-iw-interfaces")
    {
        admin_down_pseudowire_iw_interfaces = value;
        admin_down_pseudowire_iw_interfaces.value_namespace = name_space;
        admin_down_pseudowire_iw_interfaces.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::PseudowireHeadend::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interfaces")
    {
        interfaces.yfilter = yfilter;
    }
    if(value_path == "up-interfaces")
    {
        up_interfaces.yfilter = yfilter;
    }
    if(value_path == "down-interfaces")
    {
        down_interfaces.yfilter = yfilter;
    }
    if(value_path == "admin-down-interfaces")
    {
        admin_down_interfaces.yfilter = yfilter;
    }
    if(value_path == "psuedowire-ether-interfaces")
    {
        psuedowire_ether_interfaces.yfilter = yfilter;
    }
    if(value_path == "up-psuedowire-ether-interfaces")
    {
        up_psuedowire_ether_interfaces.yfilter = yfilter;
    }
    if(value_path == "down-pseudowire-ether-interfaces")
    {
        down_pseudowire_ether_interfaces.yfilter = yfilter;
    }
    if(value_path == "admin-down-pseudowire-ether-interfaces")
    {
        admin_down_pseudowire_ether_interfaces.yfilter = yfilter;
    }
    if(value_path == "pseudowire-iw-interfaces")
    {
        pseudowire_iw_interfaces.yfilter = yfilter;
    }
    if(value_path == "up-pseudowire-iw-interfaces")
    {
        up_pseudowire_iw_interfaces.yfilter = yfilter;
    }
    if(value_path == "down-pseudowire-iw-interfaces")
    {
        down_pseudowire_iw_interfaces.yfilter = yfilter;
    }
    if(value_path == "admin-down-pseudowire-iw-interfaces")
    {
        admin_down_pseudowire_iw_interfaces.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::PseudowireHeadend::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces" || name == "up-interfaces" || name == "down-interfaces" || name == "admin-down-interfaces" || name == "psuedowire-ether-interfaces" || name == "up-psuedowire-ether-interfaces" || name == "down-pseudowire-ether-interfaces" || name == "admin-down-pseudowire-ether-interfaces" || name == "pseudowire-iw-interfaces" || name == "up-pseudowire-iw-interfaces" || name == "down-pseudowire-iw-interfaces" || name == "admin-down-pseudowire-iw-interfaces")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::GlobalSettings::GlobalSettings()
    :
    pw_grouping_enabled{YType::boolean, "pw-grouping-enabled"},
    pw_status_enabled{YType::boolean, "pw-status-enabled"},
    logging_pw_enabled{YType::boolean, "logging-pw-enabled"},
    logging_bd_enabled{YType::boolean, "logging-bd-enabled"},
    logging_vfi_enabled{YType::boolean, "logging-vfi-enabled"},
    logging_nsr_enabled{YType::boolean, "logging-nsr-enabled"},
    logging_df_election_enabled{YType::boolean, "logging-df-election-enabled"},
    tcn_propagation_enabled{YType::boolean, "tcn-propagation-enabled"},
    pw_oam_refresh_transmit_time{YType::uint32, "pw-oam-refresh-transmit-time"},
    ha_role{YType::str, "ha-role"},
    issu_role{YType::str, "issu-role"},
    process_fsm{YType::str, "process-fsm"},
    going_active{YType::boolean, "going-active"}
{

    yang_name = "global-settings"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::GlobalSettings::~GlobalSettings()
{
}

bool L2vpnv2::Nodes::Node::GlobalSettings::has_data() const
{
    if (is_presence_container) return true;
    return pw_grouping_enabled.is_set
	|| pw_status_enabled.is_set
	|| logging_pw_enabled.is_set
	|| logging_bd_enabled.is_set
	|| logging_vfi_enabled.is_set
	|| logging_nsr_enabled.is_set
	|| logging_df_election_enabled.is_set
	|| tcn_propagation_enabled.is_set
	|| pw_oam_refresh_transmit_time.is_set
	|| ha_role.is_set
	|| issu_role.is_set
	|| process_fsm.is_set
	|| going_active.is_set;
}

bool L2vpnv2::Nodes::Node::GlobalSettings::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_grouping_enabled.yfilter)
	|| ydk::is_set(pw_status_enabled.yfilter)
	|| ydk::is_set(logging_pw_enabled.yfilter)
	|| ydk::is_set(logging_bd_enabled.yfilter)
	|| ydk::is_set(logging_vfi_enabled.yfilter)
	|| ydk::is_set(logging_nsr_enabled.yfilter)
	|| ydk::is_set(logging_df_election_enabled.yfilter)
	|| ydk::is_set(tcn_propagation_enabled.yfilter)
	|| ydk::is_set(pw_oam_refresh_transmit_time.yfilter)
	|| ydk::is_set(ha_role.yfilter)
	|| ydk::is_set(issu_role.yfilter)
	|| ydk::is_set(process_fsm.yfilter)
	|| ydk::is_set(going_active.yfilter);
}

std::string L2vpnv2::Nodes::Node::GlobalSettings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-settings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::GlobalSettings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_grouping_enabled.is_set || is_set(pw_grouping_enabled.yfilter)) leaf_name_data.push_back(pw_grouping_enabled.get_name_leafdata());
    if (pw_status_enabled.is_set || is_set(pw_status_enabled.yfilter)) leaf_name_data.push_back(pw_status_enabled.get_name_leafdata());
    if (logging_pw_enabled.is_set || is_set(logging_pw_enabled.yfilter)) leaf_name_data.push_back(logging_pw_enabled.get_name_leafdata());
    if (logging_bd_enabled.is_set || is_set(logging_bd_enabled.yfilter)) leaf_name_data.push_back(logging_bd_enabled.get_name_leafdata());
    if (logging_vfi_enabled.is_set || is_set(logging_vfi_enabled.yfilter)) leaf_name_data.push_back(logging_vfi_enabled.get_name_leafdata());
    if (logging_nsr_enabled.is_set || is_set(logging_nsr_enabled.yfilter)) leaf_name_data.push_back(logging_nsr_enabled.get_name_leafdata());
    if (logging_df_election_enabled.is_set || is_set(logging_df_election_enabled.yfilter)) leaf_name_data.push_back(logging_df_election_enabled.get_name_leafdata());
    if (tcn_propagation_enabled.is_set || is_set(tcn_propagation_enabled.yfilter)) leaf_name_data.push_back(tcn_propagation_enabled.get_name_leafdata());
    if (pw_oam_refresh_transmit_time.is_set || is_set(pw_oam_refresh_transmit_time.yfilter)) leaf_name_data.push_back(pw_oam_refresh_transmit_time.get_name_leafdata());
    if (ha_role.is_set || is_set(ha_role.yfilter)) leaf_name_data.push_back(ha_role.get_name_leafdata());
    if (issu_role.is_set || is_set(issu_role.yfilter)) leaf_name_data.push_back(issu_role.get_name_leafdata());
    if (process_fsm.is_set || is_set(process_fsm.yfilter)) leaf_name_data.push_back(process_fsm.get_name_leafdata());
    if (going_active.is_set || is_set(going_active.yfilter)) leaf_name_data.push_back(going_active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::GlobalSettings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::GlobalSettings::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Nodes::Node::GlobalSettings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-grouping-enabled")
    {
        pw_grouping_enabled = value;
        pw_grouping_enabled.value_namespace = name_space;
        pw_grouping_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-status-enabled")
    {
        pw_status_enabled = value;
        pw_status_enabled.value_namespace = name_space;
        pw_status_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging-pw-enabled")
    {
        logging_pw_enabled = value;
        logging_pw_enabled.value_namespace = name_space;
        logging_pw_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging-bd-enabled")
    {
        logging_bd_enabled = value;
        logging_bd_enabled.value_namespace = name_space;
        logging_bd_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging-vfi-enabled")
    {
        logging_vfi_enabled = value;
        logging_vfi_enabled.value_namespace = name_space;
        logging_vfi_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging-nsr-enabled")
    {
        logging_nsr_enabled = value;
        logging_nsr_enabled.value_namespace = name_space;
        logging_nsr_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging-df-election-enabled")
    {
        logging_df_election_enabled = value;
        logging_df_election_enabled.value_namespace = name_space;
        logging_df_election_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcn-propagation-enabled")
    {
        tcn_propagation_enabled = value;
        tcn_propagation_enabled.value_namespace = name_space;
        tcn_propagation_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-oam-refresh-transmit-time")
    {
        pw_oam_refresh_transmit_time = value;
        pw_oam_refresh_transmit_time.value_namespace = name_space;
        pw_oam_refresh_transmit_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ha-role")
    {
        ha_role = value;
        ha_role.value_namespace = name_space;
        ha_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "issu-role")
    {
        issu_role = value;
        issu_role.value_namespace = name_space;
        issu_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-fsm")
    {
        process_fsm = value;
        process_fsm.value_namespace = name_space;
        process_fsm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "going-active")
    {
        going_active = value;
        going_active.value_namespace = name_space;
        going_active.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::GlobalSettings::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-grouping-enabled")
    {
        pw_grouping_enabled.yfilter = yfilter;
    }
    if(value_path == "pw-status-enabled")
    {
        pw_status_enabled.yfilter = yfilter;
    }
    if(value_path == "logging-pw-enabled")
    {
        logging_pw_enabled.yfilter = yfilter;
    }
    if(value_path == "logging-bd-enabled")
    {
        logging_bd_enabled.yfilter = yfilter;
    }
    if(value_path == "logging-vfi-enabled")
    {
        logging_vfi_enabled.yfilter = yfilter;
    }
    if(value_path == "logging-nsr-enabled")
    {
        logging_nsr_enabled.yfilter = yfilter;
    }
    if(value_path == "logging-df-election-enabled")
    {
        logging_df_election_enabled.yfilter = yfilter;
    }
    if(value_path == "tcn-propagation-enabled")
    {
        tcn_propagation_enabled.yfilter = yfilter;
    }
    if(value_path == "pw-oam-refresh-transmit-time")
    {
        pw_oam_refresh_transmit_time.yfilter = yfilter;
    }
    if(value_path == "ha-role")
    {
        ha_role.yfilter = yfilter;
    }
    if(value_path == "issu-role")
    {
        issu_role.yfilter = yfilter;
    }
    if(value_path == "process-fsm")
    {
        process_fsm.yfilter = yfilter;
    }
    if(value_path == "going-active")
    {
        going_active.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::GlobalSettings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pw-grouping-enabled" || name == "pw-status-enabled" || name == "logging-pw-enabled" || name == "logging-bd-enabled" || name == "logging-vfi-enabled" || name == "logging-nsr-enabled" || name == "logging-df-election-enabled" || name == "tcn-propagation-enabled" || name == "pw-oam-refresh-transmit-time" || name == "ha-role" || name == "issu-role" || name == "process-fsm" || name == "going-active")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::Pwr::Pwr()
    :
    summary(std::make_shared<L2vpnv2::Nodes::Node::Pwr::Summary>())
{
    summary->parent = this;

    yang_name = "pwr"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::Pwr::~Pwr()
{
}

bool L2vpnv2::Nodes::Node::Pwr::has_data() const
{
    if (is_presence_container) return true;
    return (summary !=  nullptr && summary->has_data());
}

bool L2vpnv2::Nodes::Node::Pwr::has_operation() const
{
    return is_set(yfilter)
	|| (summary !=  nullptr && summary->has_operation());
}

std::string L2vpnv2::Nodes::Node::Pwr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pwr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::Pwr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::Pwr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<L2vpnv2::Nodes::Node::Pwr::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::Pwr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(summary != nullptr)
    {
        _children["summary"] = summary;
    }

    return _children;
}

void L2vpnv2::Nodes::Node::Pwr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnv2::Nodes::Node::Pwr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnv2::Nodes::Node::Pwr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::Pwr::Summary::Summary()
    :
    bgp_router_id{YType::str, "bgp-router-id"},
    cfg_router_id{YType::str, "cfg-router-id"},
    bgp_as{YType::uint32, "bgp-as"},
    cfg_global_id{YType::uint32, "cfg-global-id"},
    l2vpn_has_bgp_eod{YType::boolean, "l2vpn-has-bgp-eod"}
        ,
    rd_auto(std::make_shared<L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto>())
    , rd_configured(std::make_shared<L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured>())
{
    rd_auto->parent = this;
    rd_configured->parent = this;

    yang_name = "summary"; yang_parent_name = "pwr"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::Pwr::Summary::~Summary()
{
}

bool L2vpnv2::Nodes::Node::Pwr::Summary::has_data() const
{
    if (is_presence_container) return true;
    return bgp_router_id.is_set
	|| cfg_router_id.is_set
	|| bgp_as.is_set
	|| cfg_global_id.is_set
	|| l2vpn_has_bgp_eod.is_set
	|| (rd_auto !=  nullptr && rd_auto->has_data())
	|| (rd_configured !=  nullptr && rd_configured->has_data());
}

bool L2vpnv2::Nodes::Node::Pwr::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgp_router_id.yfilter)
	|| ydk::is_set(cfg_router_id.yfilter)
	|| ydk::is_set(bgp_as.yfilter)
	|| ydk::is_set(cfg_global_id.yfilter)
	|| ydk::is_set(l2vpn_has_bgp_eod.yfilter)
	|| (rd_auto !=  nullptr && rd_auto->has_operation())
	|| (rd_configured !=  nullptr && rd_configured->has_operation());
}

std::string L2vpnv2::Nodes::Node::Pwr::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::Pwr::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp_router_id.is_set || is_set(bgp_router_id.yfilter)) leaf_name_data.push_back(bgp_router_id.get_name_leafdata());
    if (cfg_router_id.is_set || is_set(cfg_router_id.yfilter)) leaf_name_data.push_back(cfg_router_id.get_name_leafdata());
    if (bgp_as.is_set || is_set(bgp_as.yfilter)) leaf_name_data.push_back(bgp_as.get_name_leafdata());
    if (cfg_global_id.is_set || is_set(cfg_global_id.yfilter)) leaf_name_data.push_back(cfg_global_id.get_name_leafdata());
    if (l2vpn_has_bgp_eod.is_set || is_set(l2vpn_has_bgp_eod.yfilter)) leaf_name_data.push_back(l2vpn_has_bgp_eod.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::Pwr::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rd-auto")
    {
        if(rd_auto == nullptr)
        {
            rd_auto = std::make_shared<L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto>();
        }
        return rd_auto;
    }

    if(child_yang_name == "rd-configured")
    {
        if(rd_configured == nullptr)
        {
            rd_configured = std::make_shared<L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured>();
        }
        return rd_configured;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::Pwr::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rd_auto != nullptr)
    {
        _children["rd-auto"] = rd_auto;
    }

    if(rd_configured != nullptr)
    {
        _children["rd-configured"] = rd_configured;
    }

    return _children;
}

void L2vpnv2::Nodes::Node::Pwr::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgp-router-id")
    {
        bgp_router_id = value;
        bgp_router_id.value_namespace = name_space;
        bgp_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfg-router-id")
    {
        cfg_router_id = value;
        cfg_router_id.value_namespace = name_space;
        cfg_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-as")
    {
        bgp_as = value;
        bgp_as.value_namespace = name_space;
        bgp_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfg-global-id")
    {
        cfg_global_id = value;
        cfg_global_id.value_namespace = name_space;
        cfg_global_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-has-bgp-eod")
    {
        l2vpn_has_bgp_eod = value;
        l2vpn_has_bgp_eod.value_namespace = name_space;
        l2vpn_has_bgp_eod.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::Pwr::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgp-router-id")
    {
        bgp_router_id.yfilter = yfilter;
    }
    if(value_path == "cfg-router-id")
    {
        cfg_router_id.yfilter = yfilter;
    }
    if(value_path == "bgp-as")
    {
        bgp_as.yfilter = yfilter;
    }
    if(value_path == "cfg-global-id")
    {
        cfg_global_id.yfilter = yfilter;
    }
    if(value_path == "l2vpn-has-bgp-eod")
    {
        l2vpn_has_bgp_eod.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::Pwr::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rd-auto" || name == "rd-configured" || name == "bgp-router-id" || name == "cfg-router-id" || name == "bgp-as" || name == "cfg-global-id" || name == "l2vpn-has-bgp-eod")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::RdAuto()
    :
    rd{YType::enumeration, "rd"}
        ,
    auto_(std::make_shared<L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::Auto>())
    , two_byte_as(std::make_shared<L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::TwoByteAs>())
    , four_byte_as(std::make_shared<L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::FourByteAs>())
    , v4_addr(std::make_shared<L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::V4Addr>())
{
    auto_->parent = this;
    two_byte_as->parent = this;
    four_byte_as->parent = this;
    v4_addr->parent = this;

    yang_name = "rd-auto"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::~RdAuto()
{
}

bool L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::has_data() const
{
    if (is_presence_container) return true;
    return rd.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rd.yfilter)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rd-auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::Auto>();
        }
        return auto_;
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as == nullptr)
        {
            four_byte_as = std::make_shared<L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::FourByteAs>();
        }
        return four_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::V4Addr>();
        }
        return v4_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(auto_ != nullptr)
    {
        _children["auto"] = auto_;
    }

    if(two_byte_as != nullptr)
    {
        _children["two-byte-as"] = two_byte_as;
    }

    if(four_byte_as != nullptr)
    {
        _children["four-byte-as"] = four_byte_as;
    }

    if(v4_addr != nullptr)
    {
        _children["v4-addr"] = v4_addr;
    }

    return _children;
}

void L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "two-byte-as" || name == "four-byte-as" || name == "v4-addr" || name == "rd")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::Auto::Auto()
    :
    router_id{YType::str, "router-id"},
    auto_index{YType::uint16, "auto-index"}
{

    yang_name = "auto"; yang_parent_name = "rd-auto"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::Auto::~Auto()
{
}

bool L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::Auto::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| auto_index.is_set;
}

bool L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::Auto::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(auto_index.yfilter);
}

std::string L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::Auto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::Auto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (auto_index.is_set || is_set(auto_index.yfilter)) leaf_name_data.push_back(auto_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::Auto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::Auto::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::Auto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-index")
    {
        auto_index = value;
        auto_index.value_namespace = name_space;
        auto_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::Auto::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "auto-index")
    {
        auto_index.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::Auto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "auto-index")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::TwoByteAs::TwoByteAs()
    :
    two_byte_as{YType::uint16, "two-byte-as"},
    four_byte_index{YType::uint32, "four-byte-index"}
{

    yang_name = "two-byte-as"; yang_parent_name = "rd-auto"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::TwoByteAs::~TwoByteAs()
{
}

bool L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::TwoByteAs::has_data() const
{
    if (is_presence_container) return true;
    return two_byte_as.is_set
	|| four_byte_index.is_set;
}

bool L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(two_byte_as.yfilter)
	|| ydk::is_set(four_byte_index.yfilter);
}

std::string L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());
    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "two-byte-as" || name == "four-byte-index")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "four-byte-as"; yang_parent_name = "rd-auto"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::FourByteAs::~FourByteAs()
{
}

bool L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::FourByteAs::has_data() const
{
    if (is_presence_container) return true;
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::FourByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_as.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::FourByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.yfilter)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::FourByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::FourByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
        four_byte_as.value_namespace = name_space;
        four_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::FourByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::FourByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-as" || name == "two-byte-index")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "rd-auto"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::V4Addr::~V4Addr()
{
}

bool L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::V4Addr::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::Pwr::Summary::RdAuto::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::RdConfigured()
    :
    rd{YType::enumeration, "rd"}
        ,
    auto_(std::make_shared<L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::Auto>())
    , two_byte_as(std::make_shared<L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::TwoByteAs>())
    , four_byte_as(std::make_shared<L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::FourByteAs>())
    , v4_addr(std::make_shared<L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::V4Addr>())
{
    auto_->parent = this;
    two_byte_as->parent = this;
    four_byte_as->parent = this;
    v4_addr->parent = this;

    yang_name = "rd-configured"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::~RdConfigured()
{
}

bool L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::has_data() const
{
    if (is_presence_container) return true;
    return rd.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rd.yfilter)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rd-configured";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::Auto>();
        }
        return auto_;
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as == nullptr)
        {
            four_byte_as = std::make_shared<L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::FourByteAs>();
        }
        return four_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::V4Addr>();
        }
        return v4_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(auto_ != nullptr)
    {
        _children["auto"] = auto_;
    }

    if(two_byte_as != nullptr)
    {
        _children["two-byte-as"] = two_byte_as;
    }

    if(four_byte_as != nullptr)
    {
        _children["four-byte-as"] = four_byte_as;
    }

    if(v4_addr != nullptr)
    {
        _children["v4-addr"] = v4_addr;
    }

    return _children;
}

void L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "two-byte-as" || name == "four-byte-as" || name == "v4-addr" || name == "rd")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::Auto::Auto()
    :
    router_id{YType::str, "router-id"},
    auto_index{YType::uint16, "auto-index"}
{

    yang_name = "auto"; yang_parent_name = "rd-configured"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::Auto::~Auto()
{
}

bool L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::Auto::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| auto_index.is_set;
}

bool L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::Auto::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(auto_index.yfilter);
}

std::string L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::Auto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::Auto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (auto_index.is_set || is_set(auto_index.yfilter)) leaf_name_data.push_back(auto_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::Auto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::Auto::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::Auto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-index")
    {
        auto_index = value;
        auto_index.value_namespace = name_space;
        auto_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::Auto::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "auto-index")
    {
        auto_index.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::Auto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "auto-index")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::TwoByteAs::TwoByteAs()
    :
    two_byte_as{YType::uint16, "two-byte-as"},
    four_byte_index{YType::uint32, "four-byte-index"}
{

    yang_name = "two-byte-as"; yang_parent_name = "rd-configured"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::TwoByteAs::~TwoByteAs()
{
}

bool L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::TwoByteAs::has_data() const
{
    if (is_presence_container) return true;
    return two_byte_as.is_set
	|| four_byte_index.is_set;
}

bool L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(two_byte_as.yfilter)
	|| ydk::is_set(four_byte_index.yfilter);
}

std::string L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());
    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "two-byte-as" || name == "four-byte-index")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "four-byte-as"; yang_parent_name = "rd-configured"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::FourByteAs::~FourByteAs()
{
}

bool L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::FourByteAs::has_data() const
{
    if (is_presence_container) return true;
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::FourByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_as.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::FourByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.yfilter)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::FourByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::FourByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
        four_byte_as.value_namespace = name_space;
        four_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::FourByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::FourByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-as" || name == "two-byte-index")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "rd-configured"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::V4Addr::~V4Addr()
{
}

bool L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::V4Addr::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2vpnv2::Nodes::Node::Pwr::Summary::RdConfigured::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

L2vpnv2::Nodes::Node::XconnectMp2mpCe2ces::XconnectMp2mpCe2ces()
    :
    xconnect_mp2mp_ce2ce(this, {})
{

    yang_name = "xconnect-mp2mp-ce2ces"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Nodes::Node::XconnectMp2mpCe2ces::~XconnectMp2mpCe2ces()
{
}

bool L2vpnv2::Nodes::Node::XconnectMp2mpCe2ces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<xconnect_mp2mp_ce2ce.len(); index++)
    {
        if(xconnect_mp2mp_ce2ce[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpnv2::Nodes::Node::XconnectMp2mpCe2ces::has_operation() const
{
    for (std::size_t index=0; index<xconnect_mp2mp_ce2ce.len(); index++)
    {
        if(xconnect_mp2mp_ce2ce[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpnv2::Nodes::Node::XconnectMp2mpCe2ces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-mp2mp-ce2ces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Nodes::Node::XconnectMp2mpCe2ces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Nodes::Node::XconnectMp2mpCe2ces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect-mp2mp-ce2ce")
    {
        auto ent_ = std::make_shared<L2vpnv2::Nodes::Node::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce>();
        ent_->parent = this;
        xconnect_mp2mp_ce2ce.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Nodes::Node::XconnectMp2mpCe2ces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : xconnect_mp2mp_ce2ce.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Nodes::Node::XconnectMp2mpCe2ces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnv2::Nodes::Node::XconnectMp2mpCe2ces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnv2::Nodes::Node::XconnectMp2mpCe2ces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect-mp2mp-ce2ce")
        return true;
    return false;
}


}
}

