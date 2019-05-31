
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_43.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_73.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_45.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_57.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_46.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_54.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_51.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_47.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_52.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_56.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_74.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_50.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_58.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_44.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_55.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_48.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_oper {

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::AllocatedBindingSid()
    :
    type{YType::enumeration, "type"},
    label{YType::uint32, "label"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "allocated-binding-sid"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::~AllocatedBindingSid()
{
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| label.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocated-binding-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "label" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::SegmentList()
    :
    weight{YType::uint8, "weight"}
        ,
    segment(this, {})
{

    yang_name = "segment-list"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::~SegmentList()
{
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<segment.len(); index++)
    {
        if(segment[index]->has_data())
            return true;
    }
    return weight.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::has_operation() const
{
    for (std::size_t index=0; index<segment.len(); index++)
    {
        if(segment[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-list";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment>();
        ent_->parent = this;
        segment.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : segment.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment" || name == "weight")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::Segment()
    :
    type{YType::enumeration, "type"},
    label{YType::uint32, "label"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "segment"; yang_parent_name = "segment-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::~Segment()
{
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| label.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "label" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::Community()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "community"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::~Community()
{
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::ExtendedCommunity()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "extended-community"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::~ExtendedCommunity()
{
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::UnknownAttribute()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "unknown-attribute"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::~UnknownAttribute()
{
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attribute";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::Cluster()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "cluster"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::~Cluster()
{
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cluster";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::L2tpv3Cookie::L2tpv3Cookie()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "l2tpv3-cookie"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::L2tpv3Cookie::~L2tpv3Cookie()
{
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::L2tpv3Cookie::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::L2tpv3Cookie::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::L2tpv3Cookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3-cookie";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::L2tpv3Cookie::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::L2tpv3Cookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::L2tpv3Cookie::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::L2tpv3Cookie::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::L2tpv3Cookie::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::L2tpv3Cookie::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::ConnectorValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "connector-value"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::~ConnectorValue()
{
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connector-value";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::PmsiValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "pmsi-value"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::~PmsiValue()
{
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-value";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::LsAttr()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "ls-attr"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::~LsAttr()
{
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ls-attr";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::PeDistinguisherLabel()
    :
    pe_address{YType::str, "pe-address"},
    label{YType::uint32, "label"}
{

    yang_name = "pe-distinguisher-label"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::~PeDistinguisherLabel()
{
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::has_data() const
{
    if (is_presence_container) return true;
    return pe_address.is_set
	|| label.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pe_address.yfilter)
	|| ydk::is_set(label.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-distinguisher-label";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pe_address.is_set || is_set(pe_address.yfilter)) leaf_name_data.push_back(pe_address.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pe-address")
    {
        pe_address = value;
        pe_address.value_namespace = name_space;
        pe_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pe-address")
    {
        pe_address.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pe-address" || name == "label")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::LargeCommunity()
    :
    global_admin{YType::uint32, "global-admin"},
    local_data1{YType::uint32, "local-data1"},
    local_data2{YType::uint32, "local-data2"}
{

    yang_name = "large-community"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::~LargeCommunity()
{
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::has_data() const
{
    if (is_presence_container) return true;
    return global_admin.is_set
	|| local_data1.is_set
	|| local_data2.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global_admin.yfilter)
	|| ydk::is_set(local_data1.yfilter)
	|| ydk::is_set(local_data2.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "large-community";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_admin.is_set || is_set(global_admin.yfilter)) leaf_name_data.push_back(global_admin.get_name_leafdata());
    if (local_data1.is_set || is_set(local_data1.yfilter)) leaf_name_data.push_back(local_data1.get_name_leafdata());
    if (local_data2.is_set || is_set(local_data2.yfilter)) leaf_name_data.push_back(local_data2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global-admin")
    {
        global_admin = value;
        global_admin.value_namespace = name_space;
        global_admin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-data1")
    {
        local_data1 = value;
        local_data1.value_namespace = name_space;
        local_data1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-data2")
    {
        local_data2 = value;
        local_data2.value_namespace = name_space;
        local_data2.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global-admin")
    {
        global_admin.yfilter = yfilter;
    }
    if(value_path == "local-data1")
    {
        local_data1.yfilter = yfilter;
    }
    if(value_path == "local-data2")
    {
        local_data2.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-admin" || name == "local-data1" || name == "local-data2")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::AttrSet()
    :
    is_metric_present{YType::boolean, "is-metric-present"},
    is_local_pref_present{YType::boolean, "is-local-pref-present"},
    is_atomic_aggregate_present{YType::boolean, "is-atomic-aggregate-present"},
    is_aggregator_present{YType::boolean, "is-aggregator-present"},
    is_origin_present{YType::boolean, "is-origin-present"},
    is_as_path_present{YType::boolean, "is-as-path-present"},
    is_community_present{YType::boolean, "is-community-present"},
    is_extended_community_present{YType::boolean, "is-extended-community-present"},
    is_ssa_present{YType::boolean, "is-ssa-present"},
    is_connector_present{YType::boolean, "is-connector-present"},
    is_pmsi_present{YType::boolean, "is-pmsi-present"},
    is_pppmp_present{YType::boolean, "is-pppmp-present"},
    is_aigp_present{YType::boolean, "is-aigp-present"},
    is_pe_distinguisher_label_present{YType::boolean, "is-pe-distinguisher-label-present"},
    is_ls_attribute_present{YType::boolean, "is-ls-attribute-present"},
    is_label_index_present{YType::boolean, "is-label-index-present"},
    is_prefix_sid_label_indexpresent{YType::boolean, "is-prefix-sid-label-indexpresent"},
    is_prefix_sid_orig_srg_bpresent{YType::boolean, "is-prefix-sid-orig-srg-bpresent"},
    is_prefix_sids_rv6vpnsi_dpresent{YType::boolean, "is-prefix-sids-rv6vpnsi-dpresent"},
    is_prefix_sid_unk_tl_vspresent{YType::boolean, "is-prefix-sid-unk-tl-vspresent"},
    neighbor_as{YType::uint32, "neighbor-as"},
    aggregator_as{YType::uint32, "aggregator-as"},
    aggregator_address{YType::str, "aggregator-address"},
    metric{YType::uint32, "metric"},
    local_preference{YType::uint32, "local-preference"},
    origin{YType::uint16, "origin"},
    as_path{YType::str, "as-path"},
    extended_community_flags{YType::uint8, "extended-community-flags"},
    originator{YType::str, "originator"},
    l2tpv3_session_id{YType::uint32, "l2tpv3-session-id"},
    connector_type{YType::uint16, "connector-type"},
    aigp_metric_value{YType::uint64, "aigp-metric-value"},
    pmsi_type{YType::uint16, "pmsi-type"},
    pmsi_flags{YType::uint8, "pmsi-flags"},
    pmsi_label{YType::uint32, "pmsi-label"},
    ppm_pvalue{YType::uint32, "ppm-pvalue"},
    is_large_community_present{YType::boolean, "is-large-community-present"}
        ,
    prefix_sid_label_index(std::make_shared<Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidLabelIndex>())
    , prefix_sid_orig_srgb(std::make_shared<Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidOrigSrgb>())
    , prefix_sids_rv6vpnsid(std::make_shared<Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidsRv6vpnsid>())
    , prefix_sid_unk_tl_vs(std::make_shared<Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidUnkTlVs>())
    , tunnel_encap(std::make_shared<Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap>())
    , community(this, {})
    , extended_community(this, {})
    , unknown_attribute(this, {})
    , cluster(this, {})
    , l2tpv3_cookie(this, {})
    , connector_value(this, {})
    , pmsi_value(this, {})
    , ls_attr(this, {})
    , pe_distinguisher_label(this, {})
    , large_community(this, {})
{
    prefix_sid_label_index->parent = this;
    prefix_sid_orig_srgb->parent = this;
    prefix_sids_rv6vpnsid->parent = this;
    prefix_sid_unk_tl_vs->parent = this;
    tunnel_encap->parent = this;

    yang_name = "attr-set"; yang_parent_name = "attribute-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::~AttrSet()
{
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<community.len(); index++)
    {
        if(community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_community.len(); index++)
    {
        if(extended_community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<unknown_attribute.len(); index++)
    {
        if(unknown_attribute[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<cluster.len(); index++)
    {
        if(cluster[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<l2tpv3_cookie.len(); index++)
    {
        if(l2tpv3_cookie[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<connector_value.len(); index++)
    {
        if(connector_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pmsi_value.len(); index++)
    {
        if(pmsi_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ls_attr.len(); index++)
    {
        if(ls_attr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pe_distinguisher_label.len(); index++)
    {
        if(pe_distinguisher_label[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<large_community.len(); index++)
    {
        if(large_community[index]->has_data())
            return true;
    }
    return is_metric_present.is_set
	|| is_local_pref_present.is_set
	|| is_atomic_aggregate_present.is_set
	|| is_aggregator_present.is_set
	|| is_origin_present.is_set
	|| is_as_path_present.is_set
	|| is_community_present.is_set
	|| is_extended_community_present.is_set
	|| is_ssa_present.is_set
	|| is_connector_present.is_set
	|| is_pmsi_present.is_set
	|| is_pppmp_present.is_set
	|| is_aigp_present.is_set
	|| is_pe_distinguisher_label_present.is_set
	|| is_ls_attribute_present.is_set
	|| is_label_index_present.is_set
	|| is_prefix_sid_label_indexpresent.is_set
	|| is_prefix_sid_orig_srg_bpresent.is_set
	|| is_prefix_sids_rv6vpnsi_dpresent.is_set
	|| is_prefix_sid_unk_tl_vspresent.is_set
	|| neighbor_as.is_set
	|| aggregator_as.is_set
	|| aggregator_address.is_set
	|| metric.is_set
	|| local_preference.is_set
	|| origin.is_set
	|| as_path.is_set
	|| extended_community_flags.is_set
	|| originator.is_set
	|| l2tpv3_session_id.is_set
	|| connector_type.is_set
	|| aigp_metric_value.is_set
	|| pmsi_type.is_set
	|| pmsi_flags.is_set
	|| pmsi_label.is_set
	|| ppm_pvalue.is_set
	|| is_large_community_present.is_set
	|| (prefix_sid_label_index !=  nullptr && prefix_sid_label_index->has_data())
	|| (prefix_sid_orig_srgb !=  nullptr && prefix_sid_orig_srgb->has_data())
	|| (prefix_sids_rv6vpnsid !=  nullptr && prefix_sids_rv6vpnsid->has_data())
	|| (prefix_sid_unk_tl_vs !=  nullptr && prefix_sid_unk_tl_vs->has_data())
	|| (tunnel_encap !=  nullptr && tunnel_encap->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::has_operation() const
{
    for (std::size_t index=0; index<community.len(); index++)
    {
        if(community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_community.len(); index++)
    {
        if(extended_community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<unknown_attribute.len(); index++)
    {
        if(unknown_attribute[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<cluster.len(); index++)
    {
        if(cluster[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<l2tpv3_cookie.len(); index++)
    {
        if(l2tpv3_cookie[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<connector_value.len(); index++)
    {
        if(connector_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pmsi_value.len(); index++)
    {
        if(pmsi_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ls_attr.len(); index++)
    {
        if(ls_attr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pe_distinguisher_label.len(); index++)
    {
        if(pe_distinguisher_label[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<large_community.len(); index++)
    {
        if(large_community[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(is_metric_present.yfilter)
	|| ydk::is_set(is_local_pref_present.yfilter)
	|| ydk::is_set(is_atomic_aggregate_present.yfilter)
	|| ydk::is_set(is_aggregator_present.yfilter)
	|| ydk::is_set(is_origin_present.yfilter)
	|| ydk::is_set(is_as_path_present.yfilter)
	|| ydk::is_set(is_community_present.yfilter)
	|| ydk::is_set(is_extended_community_present.yfilter)
	|| ydk::is_set(is_ssa_present.yfilter)
	|| ydk::is_set(is_connector_present.yfilter)
	|| ydk::is_set(is_pmsi_present.yfilter)
	|| ydk::is_set(is_pppmp_present.yfilter)
	|| ydk::is_set(is_aigp_present.yfilter)
	|| ydk::is_set(is_pe_distinguisher_label_present.yfilter)
	|| ydk::is_set(is_ls_attribute_present.yfilter)
	|| ydk::is_set(is_label_index_present.yfilter)
	|| ydk::is_set(is_prefix_sid_label_indexpresent.yfilter)
	|| ydk::is_set(is_prefix_sid_orig_srg_bpresent.yfilter)
	|| ydk::is_set(is_prefix_sids_rv6vpnsi_dpresent.yfilter)
	|| ydk::is_set(is_prefix_sid_unk_tl_vspresent.yfilter)
	|| ydk::is_set(neighbor_as.yfilter)
	|| ydk::is_set(aggregator_as.yfilter)
	|| ydk::is_set(aggregator_address.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(local_preference.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(as_path.yfilter)
	|| ydk::is_set(extended_community_flags.yfilter)
	|| ydk::is_set(originator.yfilter)
	|| ydk::is_set(l2tpv3_session_id.yfilter)
	|| ydk::is_set(connector_type.yfilter)
	|| ydk::is_set(aigp_metric_value.yfilter)
	|| ydk::is_set(pmsi_type.yfilter)
	|| ydk::is_set(pmsi_flags.yfilter)
	|| ydk::is_set(pmsi_label.yfilter)
	|| ydk::is_set(ppm_pvalue.yfilter)
	|| ydk::is_set(is_large_community_present.yfilter)
	|| (prefix_sid_label_index !=  nullptr && prefix_sid_label_index->has_operation())
	|| (prefix_sid_orig_srgb !=  nullptr && prefix_sid_orig_srgb->has_operation())
	|| (prefix_sids_rv6vpnsid !=  nullptr && prefix_sids_rv6vpnsid->has_operation())
	|| (prefix_sid_unk_tl_vs !=  nullptr && prefix_sid_unk_tl_vs->has_operation())
	|| (tunnel_encap !=  nullptr && tunnel_encap->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attr-set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_metric_present.is_set || is_set(is_metric_present.yfilter)) leaf_name_data.push_back(is_metric_present.get_name_leafdata());
    if (is_local_pref_present.is_set || is_set(is_local_pref_present.yfilter)) leaf_name_data.push_back(is_local_pref_present.get_name_leafdata());
    if (is_atomic_aggregate_present.is_set || is_set(is_atomic_aggregate_present.yfilter)) leaf_name_data.push_back(is_atomic_aggregate_present.get_name_leafdata());
    if (is_aggregator_present.is_set || is_set(is_aggregator_present.yfilter)) leaf_name_data.push_back(is_aggregator_present.get_name_leafdata());
    if (is_origin_present.is_set || is_set(is_origin_present.yfilter)) leaf_name_data.push_back(is_origin_present.get_name_leafdata());
    if (is_as_path_present.is_set || is_set(is_as_path_present.yfilter)) leaf_name_data.push_back(is_as_path_present.get_name_leafdata());
    if (is_community_present.is_set || is_set(is_community_present.yfilter)) leaf_name_data.push_back(is_community_present.get_name_leafdata());
    if (is_extended_community_present.is_set || is_set(is_extended_community_present.yfilter)) leaf_name_data.push_back(is_extended_community_present.get_name_leafdata());
    if (is_ssa_present.is_set || is_set(is_ssa_present.yfilter)) leaf_name_data.push_back(is_ssa_present.get_name_leafdata());
    if (is_connector_present.is_set || is_set(is_connector_present.yfilter)) leaf_name_data.push_back(is_connector_present.get_name_leafdata());
    if (is_pmsi_present.is_set || is_set(is_pmsi_present.yfilter)) leaf_name_data.push_back(is_pmsi_present.get_name_leafdata());
    if (is_pppmp_present.is_set || is_set(is_pppmp_present.yfilter)) leaf_name_data.push_back(is_pppmp_present.get_name_leafdata());
    if (is_aigp_present.is_set || is_set(is_aigp_present.yfilter)) leaf_name_data.push_back(is_aigp_present.get_name_leafdata());
    if (is_pe_distinguisher_label_present.is_set || is_set(is_pe_distinguisher_label_present.yfilter)) leaf_name_data.push_back(is_pe_distinguisher_label_present.get_name_leafdata());
    if (is_ls_attribute_present.is_set || is_set(is_ls_attribute_present.yfilter)) leaf_name_data.push_back(is_ls_attribute_present.get_name_leafdata());
    if (is_label_index_present.is_set || is_set(is_label_index_present.yfilter)) leaf_name_data.push_back(is_label_index_present.get_name_leafdata());
    if (is_prefix_sid_label_indexpresent.is_set || is_set(is_prefix_sid_label_indexpresent.yfilter)) leaf_name_data.push_back(is_prefix_sid_label_indexpresent.get_name_leafdata());
    if (is_prefix_sid_orig_srg_bpresent.is_set || is_set(is_prefix_sid_orig_srg_bpresent.yfilter)) leaf_name_data.push_back(is_prefix_sid_orig_srg_bpresent.get_name_leafdata());
    if (is_prefix_sids_rv6vpnsi_dpresent.is_set || is_set(is_prefix_sids_rv6vpnsi_dpresent.yfilter)) leaf_name_data.push_back(is_prefix_sids_rv6vpnsi_dpresent.get_name_leafdata());
    if (is_prefix_sid_unk_tl_vspresent.is_set || is_set(is_prefix_sid_unk_tl_vspresent.yfilter)) leaf_name_data.push_back(is_prefix_sid_unk_tl_vspresent.get_name_leafdata());
    if (neighbor_as.is_set || is_set(neighbor_as.yfilter)) leaf_name_data.push_back(neighbor_as.get_name_leafdata());
    if (aggregator_as.is_set || is_set(aggregator_as.yfilter)) leaf_name_data.push_back(aggregator_as.get_name_leafdata());
    if (aggregator_address.is_set || is_set(aggregator_address.yfilter)) leaf_name_data.push_back(aggregator_address.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (local_preference.is_set || is_set(local_preference.yfilter)) leaf_name_data.push_back(local_preference.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.yfilter)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (extended_community_flags.is_set || is_set(extended_community_flags.yfilter)) leaf_name_data.push_back(extended_community_flags.get_name_leafdata());
    if (originator.is_set || is_set(originator.yfilter)) leaf_name_data.push_back(originator.get_name_leafdata());
    if (l2tpv3_session_id.is_set || is_set(l2tpv3_session_id.yfilter)) leaf_name_data.push_back(l2tpv3_session_id.get_name_leafdata());
    if (connector_type.is_set || is_set(connector_type.yfilter)) leaf_name_data.push_back(connector_type.get_name_leafdata());
    if (aigp_metric_value.is_set || is_set(aigp_metric_value.yfilter)) leaf_name_data.push_back(aigp_metric_value.get_name_leafdata());
    if (pmsi_type.is_set || is_set(pmsi_type.yfilter)) leaf_name_data.push_back(pmsi_type.get_name_leafdata());
    if (pmsi_flags.is_set || is_set(pmsi_flags.yfilter)) leaf_name_data.push_back(pmsi_flags.get_name_leafdata());
    if (pmsi_label.is_set || is_set(pmsi_label.yfilter)) leaf_name_data.push_back(pmsi_label.get_name_leafdata());
    if (ppm_pvalue.is_set || is_set(ppm_pvalue.yfilter)) leaf_name_data.push_back(ppm_pvalue.get_name_leafdata());
    if (is_large_community_present.is_set || is_set(is_large_community_present.yfilter)) leaf_name_data.push_back(is_large_community_present.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-sid-label-index")
    {
        if(prefix_sid_label_index == nullptr)
        {
            prefix_sid_label_index = std::make_shared<Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidLabelIndex>();
        }
        return prefix_sid_label_index;
    }

    if(child_yang_name == "prefix-sid-orig-srgb")
    {
        if(prefix_sid_orig_srgb == nullptr)
        {
            prefix_sid_orig_srgb = std::make_shared<Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidOrigSrgb>();
        }
        return prefix_sid_orig_srgb;
    }

    if(child_yang_name == "prefix-sids-rv6vpnsid")
    {
        if(prefix_sids_rv6vpnsid == nullptr)
        {
            prefix_sids_rv6vpnsid = std::make_shared<Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidsRv6vpnsid>();
        }
        return prefix_sids_rv6vpnsid;
    }

    if(child_yang_name == "prefix-sid-unk-tl-vs")
    {
        if(prefix_sid_unk_tl_vs == nullptr)
        {
            prefix_sid_unk_tl_vs = std::make_shared<Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidUnkTlVs>();
        }
        return prefix_sid_unk_tl_vs;
    }

    if(child_yang_name == "tunnel-encap")
    {
        if(tunnel_encap == nullptr)
        {
            tunnel_encap = std::make_shared<Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap>();
        }
        return tunnel_encap;
    }

    if(child_yang_name == "community")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::Community>();
        ent_->parent = this;
        community.append(ent_);
        return ent_;
    }

    if(child_yang_name == "extended-community")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity>();
        ent_->parent = this;
        extended_community.append(ent_);
        return ent_;
    }

    if(child_yang_name == "unknown-attribute")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute>();
        ent_->parent = this;
        unknown_attribute.append(ent_);
        return ent_;
    }

    if(child_yang_name == "cluster")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::Cluster>();
        ent_->parent = this;
        cluster.append(ent_);
        return ent_;
    }

    if(child_yang_name == "l2tpv3-cookie")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::L2tpv3Cookie>();
        ent_->parent = this;
        l2tpv3_cookie.append(ent_);
        return ent_;
    }

    if(child_yang_name == "connector-value")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue>();
        ent_->parent = this;
        connector_value.append(ent_);
        return ent_;
    }

    if(child_yang_name == "pmsi-value")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue>();
        ent_->parent = this;
        pmsi_value.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ls-attr")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr>();
        ent_->parent = this;
        ls_attr.append(ent_);
        return ent_;
    }

    if(child_yang_name == "pe-distinguisher-label")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel>();
        ent_->parent = this;
        pe_distinguisher_label.append(ent_);
        return ent_;
    }

    if(child_yang_name == "large-community")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity>();
        ent_->parent = this;
        large_community.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_sid_label_index != nullptr)
    {
        _children["prefix-sid-label-index"] = prefix_sid_label_index;
    }

    if(prefix_sid_orig_srgb != nullptr)
    {
        _children["prefix-sid-orig-srgb"] = prefix_sid_orig_srgb;
    }

    if(prefix_sids_rv6vpnsid != nullptr)
    {
        _children["prefix-sids-rv6vpnsid"] = prefix_sids_rv6vpnsid;
    }

    if(prefix_sid_unk_tl_vs != nullptr)
    {
        _children["prefix-sid-unk-tl-vs"] = prefix_sid_unk_tl_vs;
    }

    if(tunnel_encap != nullptr)
    {
        _children["tunnel-encap"] = tunnel_encap;
    }

    count_ = 0;
    for (auto ent_ : community.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : extended_community.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : unknown_attribute.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : cluster.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : l2tpv3_cookie.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : connector_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : pmsi_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : ls_attr.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : pe_distinguisher_label.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : large_community.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-metric-present")
    {
        is_metric_present = value;
        is_metric_present.value_namespace = name_space;
        is_metric_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local-pref-present")
    {
        is_local_pref_present = value;
        is_local_pref_present.value_namespace = name_space;
        is_local_pref_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-atomic-aggregate-present")
    {
        is_atomic_aggregate_present = value;
        is_atomic_aggregate_present.value_namespace = name_space;
        is_atomic_aggregate_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-aggregator-present")
    {
        is_aggregator_present = value;
        is_aggregator_present.value_namespace = name_space;
        is_aggregator_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-origin-present")
    {
        is_origin_present = value;
        is_origin_present.value_namespace = name_space;
        is_origin_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-as-path-present")
    {
        is_as_path_present = value;
        is_as_path_present.value_namespace = name_space;
        is_as_path_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-community-present")
    {
        is_community_present = value;
        is_community_present.value_namespace = name_space;
        is_community_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-extended-community-present")
    {
        is_extended_community_present = value;
        is_extended_community_present.value_namespace = name_space;
        is_extended_community_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ssa-present")
    {
        is_ssa_present = value;
        is_ssa_present.value_namespace = name_space;
        is_ssa_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-connector-present")
    {
        is_connector_present = value;
        is_connector_present.value_namespace = name_space;
        is_connector_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pmsi-present")
    {
        is_pmsi_present = value;
        is_pmsi_present.value_namespace = name_space;
        is_pmsi_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pppmp-present")
    {
        is_pppmp_present = value;
        is_pppmp_present.value_namespace = name_space;
        is_pppmp_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-aigp-present")
    {
        is_aigp_present = value;
        is_aigp_present.value_namespace = name_space;
        is_aigp_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-pe-distinguisher-label-present")
    {
        is_pe_distinguisher_label_present = value;
        is_pe_distinguisher_label_present.value_namespace = name_space;
        is_pe_distinguisher_label_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ls-attribute-present")
    {
        is_ls_attribute_present = value;
        is_ls_attribute_present.value_namespace = name_space;
        is_ls_attribute_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-label-index-present")
    {
        is_label_index_present = value;
        is_label_index_present.value_namespace = name_space;
        is_label_index_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-prefix-sid-label-indexpresent")
    {
        is_prefix_sid_label_indexpresent = value;
        is_prefix_sid_label_indexpresent.value_namespace = name_space;
        is_prefix_sid_label_indexpresent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-prefix-sid-orig-srg-bpresent")
    {
        is_prefix_sid_orig_srg_bpresent = value;
        is_prefix_sid_orig_srg_bpresent.value_namespace = name_space;
        is_prefix_sid_orig_srg_bpresent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-prefix-sids-rv6vpnsi-dpresent")
    {
        is_prefix_sids_rv6vpnsi_dpresent = value;
        is_prefix_sids_rv6vpnsi_dpresent.value_namespace = name_space;
        is_prefix_sids_rv6vpnsi_dpresent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-prefix-sid-unk-tl-vspresent")
    {
        is_prefix_sid_unk_tl_vspresent = value;
        is_prefix_sid_unk_tl_vspresent.value_namespace = name_space;
        is_prefix_sid_unk_tl_vspresent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-as")
    {
        neighbor_as = value;
        neighbor_as.value_namespace = name_space;
        neighbor_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregator-as")
    {
        aggregator_as = value;
        aggregator_as.value_namespace = name_space;
        aggregator_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggregator-address")
    {
        aggregator_address = value;
        aggregator_address.value_namespace = name_space;
        aggregator_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-preference")
    {
        local_preference = value;
        local_preference.value_namespace = name_space;
        local_preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-path")
    {
        as_path = value;
        as_path.value_namespace = name_space;
        as_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-community-flags")
    {
        extended_community_flags = value;
        extended_community_flags.value_namespace = name_space;
        extended_community_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originator")
    {
        originator = value;
        originator.value_namespace = name_space;
        originator.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2tpv3-session-id")
    {
        l2tpv3_session_id = value;
        l2tpv3_session_id.value_namespace = name_space;
        l2tpv3_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connector-type")
    {
        connector_type = value;
        connector_type.value_namespace = name_space;
        connector_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aigp-metric-value")
    {
        aigp_metric_value = value;
        aigp_metric_value.value_namespace = name_space;
        aigp_metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmsi-type")
    {
        pmsi_type = value;
        pmsi_type.value_namespace = name_space;
        pmsi_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmsi-flags")
    {
        pmsi_flags = value;
        pmsi_flags.value_namespace = name_space;
        pmsi_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pmsi-label")
    {
        pmsi_label = value;
        pmsi_label.value_namespace = name_space;
        pmsi_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ppm-pvalue")
    {
        ppm_pvalue = value;
        ppm_pvalue.value_namespace = name_space;
        ppm_pvalue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-large-community-present")
    {
        is_large_community_present = value;
        is_large_community_present.value_namespace = name_space;
        is_large_community_present.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-metric-present")
    {
        is_metric_present.yfilter = yfilter;
    }
    if(value_path == "is-local-pref-present")
    {
        is_local_pref_present.yfilter = yfilter;
    }
    if(value_path == "is-atomic-aggregate-present")
    {
        is_atomic_aggregate_present.yfilter = yfilter;
    }
    if(value_path == "is-aggregator-present")
    {
        is_aggregator_present.yfilter = yfilter;
    }
    if(value_path == "is-origin-present")
    {
        is_origin_present.yfilter = yfilter;
    }
    if(value_path == "is-as-path-present")
    {
        is_as_path_present.yfilter = yfilter;
    }
    if(value_path == "is-community-present")
    {
        is_community_present.yfilter = yfilter;
    }
    if(value_path == "is-extended-community-present")
    {
        is_extended_community_present.yfilter = yfilter;
    }
    if(value_path == "is-ssa-present")
    {
        is_ssa_present.yfilter = yfilter;
    }
    if(value_path == "is-connector-present")
    {
        is_connector_present.yfilter = yfilter;
    }
    if(value_path == "is-pmsi-present")
    {
        is_pmsi_present.yfilter = yfilter;
    }
    if(value_path == "is-pppmp-present")
    {
        is_pppmp_present.yfilter = yfilter;
    }
    if(value_path == "is-aigp-present")
    {
        is_aigp_present.yfilter = yfilter;
    }
    if(value_path == "is-pe-distinguisher-label-present")
    {
        is_pe_distinguisher_label_present.yfilter = yfilter;
    }
    if(value_path == "is-ls-attribute-present")
    {
        is_ls_attribute_present.yfilter = yfilter;
    }
    if(value_path == "is-label-index-present")
    {
        is_label_index_present.yfilter = yfilter;
    }
    if(value_path == "is-prefix-sid-label-indexpresent")
    {
        is_prefix_sid_label_indexpresent.yfilter = yfilter;
    }
    if(value_path == "is-prefix-sid-orig-srg-bpresent")
    {
        is_prefix_sid_orig_srg_bpresent.yfilter = yfilter;
    }
    if(value_path == "is-prefix-sids-rv6vpnsi-dpresent")
    {
        is_prefix_sids_rv6vpnsi_dpresent.yfilter = yfilter;
    }
    if(value_path == "is-prefix-sid-unk-tl-vspresent")
    {
        is_prefix_sid_unk_tl_vspresent.yfilter = yfilter;
    }
    if(value_path == "neighbor-as")
    {
        neighbor_as.yfilter = yfilter;
    }
    if(value_path == "aggregator-as")
    {
        aggregator_as.yfilter = yfilter;
    }
    if(value_path == "aggregator-address")
    {
        aggregator_address.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "local-preference")
    {
        local_preference.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "as-path")
    {
        as_path.yfilter = yfilter;
    }
    if(value_path == "extended-community-flags")
    {
        extended_community_flags.yfilter = yfilter;
    }
    if(value_path == "originator")
    {
        originator.yfilter = yfilter;
    }
    if(value_path == "l2tpv3-session-id")
    {
        l2tpv3_session_id.yfilter = yfilter;
    }
    if(value_path == "connector-type")
    {
        connector_type.yfilter = yfilter;
    }
    if(value_path == "aigp-metric-value")
    {
        aigp_metric_value.yfilter = yfilter;
    }
    if(value_path == "pmsi-type")
    {
        pmsi_type.yfilter = yfilter;
    }
    if(value_path == "pmsi-flags")
    {
        pmsi_flags.yfilter = yfilter;
    }
    if(value_path == "pmsi-label")
    {
        pmsi_label.yfilter = yfilter;
    }
    if(value_path == "ppm-pvalue")
    {
        ppm_pvalue.yfilter = yfilter;
    }
    if(value_path == "is-large-community-present")
    {
        is_large_community_present.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-sid-label-index" || name == "prefix-sid-orig-srgb" || name == "prefix-sids-rv6vpnsid" || name == "prefix-sid-unk-tl-vs" || name == "tunnel-encap" || name == "community" || name == "extended-community" || name == "unknown-attribute" || name == "cluster" || name == "l2tpv3-cookie" || name == "connector-value" || name == "pmsi-value" || name == "ls-attr" || name == "pe-distinguisher-label" || name == "large-community" || name == "is-metric-present" || name == "is-local-pref-present" || name == "is-atomic-aggregate-present" || name == "is-aggregator-present" || name == "is-origin-present" || name == "is-as-path-present" || name == "is-community-present" || name == "is-extended-community-present" || name == "is-ssa-present" || name == "is-connector-present" || name == "is-pmsi-present" || name == "is-pppmp-present" || name == "is-aigp-present" || name == "is-pe-distinguisher-label-present" || name == "is-ls-attribute-present" || name == "is-label-index-present" || name == "is-prefix-sid-label-indexpresent" || name == "is-prefix-sid-orig-srg-bpresent" || name == "is-prefix-sids-rv6vpnsi-dpresent" || name == "is-prefix-sid-unk-tl-vspresent" || name == "neighbor-as" || name == "aggregator-as" || name == "aggregator-address" || name == "metric" || name == "local-preference" || name == "origin" || name == "as-path" || name == "extended-community-flags" || name == "originator" || name == "l2tpv3-session-id" || name == "connector-type" || name == "aigp-metric-value" || name == "pmsi-type" || name == "pmsi-flags" || name == "pmsi-label" || name == "ppm-pvalue" || name == "is-large-community-present")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidLabelIndex::PrefixSidLabelIndex()
    :
    reserved{YType::uint8, "reserved"},
    flags{YType::uint16, "flags"},
    label_index{YType::uint32, "label-index"}
{

    yang_name = "prefix-sid-label-index"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidLabelIndex::~PrefixSidLabelIndex()
{
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidLabelIndex::has_data() const
{
    if (is_presence_container) return true;
    return reserved.is_set
	|| flags.is_set
	|| label_index.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidLabelIndex::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(reserved.yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(label_index.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidLabelIndex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid-label-index";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidLabelIndex::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reserved.is_set || is_set(reserved.yfilter)) leaf_name_data.push_back(reserved.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (label_index.is_set || is_set(label_index.yfilter)) leaf_name_data.push_back(label_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidLabelIndex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidLabelIndex::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidLabelIndex::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reserved")
    {
        reserved = value;
        reserved.value_namespace = name_space;
        reserved.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-index")
    {
        label_index = value;
        label_index.value_namespace = name_space;
        label_index.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidLabelIndex::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reserved")
    {
        reserved.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "label-index")
    {
        label_index.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidLabelIndex::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reserved" || name == "flags" || name == "label-index")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidOrigSrgb::PrefixSidOrigSrgb()
    :
    flags{YType::uint16, "flags"},
    range_count{YType::uint32, "range-count"}
        ,
    range(this, {})
{

    yang_name = "prefix-sid-orig-srgb"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidOrigSrgb::~PrefixSidOrigSrgb()
{
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidOrigSrgb::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return flags.is_set
	|| range_count.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidOrigSrgb::has_operation() const
{
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(flags.yfilter)
	|| ydk::is_set(range_count.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidOrigSrgb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid-orig-srgb";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidOrigSrgb::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (range_count.is_set || is_set(range_count.yfilter)) leaf_name_data.push_back(range_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidOrigSrgb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidOrigSrgb::Range>();
        ent_->parent = this;
        range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidOrigSrgb::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidOrigSrgb::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "range-count")
    {
        range_count = value;
        range_count.value_namespace = name_space;
        range_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidOrigSrgb::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
    if(value_path == "range-count")
    {
        range_count.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidOrigSrgb::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "flags" || name == "range-count")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidOrigSrgb::Range::Range()
    :
    range_start{YType::uint32, "range-start"},
    range_end{YType::uint32, "range-end"}
{

    yang_name = "range"; yang_parent_name = "prefix-sid-orig-srgb"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidOrigSrgb::Range::~Range()
{
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidOrigSrgb::Range::has_data() const
{
    if (is_presence_container) return true;
    return range_start.is_set
	|| range_end.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidOrigSrgb::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range_start.yfilter)
	|| ydk::is_set(range_end.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidOrigSrgb::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidOrigSrgb::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range_start.is_set || is_set(range_start.yfilter)) leaf_name_data.push_back(range_start.get_name_leafdata());
    if (range_end.is_set || is_set(range_end.yfilter)) leaf_name_data.push_back(range_end.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidOrigSrgb::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidOrigSrgb::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidOrigSrgb::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidOrigSrgb::Range::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidOrigSrgb::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range-start" || name == "range-end")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidsRv6vpnsid::PrefixSidsRv6vpnsid()
    :
    reserved{YType::uint8, "reserved"},
    sid_count{YType::uint32, "sid-count"}
        ,
    sid(this, {})
{

    yang_name = "prefix-sids-rv6vpnsid"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidsRv6vpnsid::~PrefixSidsRv6vpnsid()
{
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidsRv6vpnsid::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sid.len(); index++)
    {
        if(sid[index]->has_data())
            return true;
    }
    return reserved.is_set
	|| sid_count.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidsRv6vpnsid::has_operation() const
{
    for (std::size_t index=0; index<sid.len(); index++)
    {
        if(sid[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(reserved.yfilter)
	|| ydk::is_set(sid_count.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidsRv6vpnsid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sids-rv6vpnsid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidsRv6vpnsid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reserved.is_set || is_set(reserved.yfilter)) leaf_name_data.push_back(reserved.get_name_leafdata());
    if (sid_count.is_set || is_set(sid_count.yfilter)) leaf_name_data.push_back(sid_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidsRv6vpnsid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sid")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidsRv6vpnsid::Sid>();
        ent_->parent = this;
        sid.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidsRv6vpnsid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : sid.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidsRv6vpnsid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "reserved")
    {
        reserved = value;
        reserved.value_namespace = name_space;
        reserved.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-count")
    {
        sid_count = value;
        sid_count.value_namespace = name_space;
        sid_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidsRv6vpnsid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "reserved")
    {
        reserved.yfilter = yfilter;
    }
    if(value_path == "sid-count")
    {
        sid_count.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidsRv6vpnsid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid" || name == "reserved" || name == "sid-count")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidsRv6vpnsid::Sid::Sid()
    :
    sid_type{YType::uint8, "sid-type"},
    sid_flags{YType::uint8, "sid-flags"},
    sid_value{YType::str, "sid-value"}
{

    yang_name = "sid"; yang_parent_name = "prefix-sids-rv6vpnsid"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidsRv6vpnsid::Sid::~Sid()
{
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidsRv6vpnsid::Sid::has_data() const
{
    if (is_presence_container) return true;
    return sid_type.is_set
	|| sid_flags.is_set
	|| sid_value.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidsRv6vpnsid::Sid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sid_type.yfilter)
	|| ydk::is_set(sid_flags.yfilter)
	|| ydk::is_set(sid_value.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidsRv6vpnsid::Sid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidsRv6vpnsid::Sid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sid_type.is_set || is_set(sid_type.yfilter)) leaf_name_data.push_back(sid_type.get_name_leafdata());
    if (sid_flags.is_set || is_set(sid_flags.yfilter)) leaf_name_data.push_back(sid_flags.get_name_leafdata());
    if (sid_value.is_set || is_set(sid_value.yfilter)) leaf_name_data.push_back(sid_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidsRv6vpnsid::Sid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidsRv6vpnsid::Sid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidsRv6vpnsid::Sid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sid-type")
    {
        sid_type = value;
        sid_type.value_namespace = name_space;
        sid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-flags")
    {
        sid_flags = value;
        sid_flags.value_namespace = name_space;
        sid_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sid-value")
    {
        sid_value = value;
        sid_value.value_namespace = name_space;
        sid_value.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidsRv6vpnsid::Sid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sid-type")
    {
        sid_type.yfilter = yfilter;
    }
    if(value_path == "sid-flags")
    {
        sid_flags.yfilter = yfilter;
    }
    if(value_path == "sid-value")
    {
        sid_value.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidsRv6vpnsid::Sid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sid-type" || name == "sid-flags" || name == "sid-value")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidUnkTlVs::PrefixSidUnkTlVs()
    :
    tlv_count{YType::uint16, "tlv-count"},
    received_buffer_length{YType::uint32, "received-buffer-length"}
        ,
    tl_vs_buffer(this, {})
{

    yang_name = "prefix-sid-unk-tl-vs"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidUnkTlVs::~PrefixSidUnkTlVs()
{
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidUnkTlVs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tl_vs_buffer.len(); index++)
    {
        if(tl_vs_buffer[index]->has_data())
            return true;
    }
    return tlv_count.is_set
	|| received_buffer_length.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidUnkTlVs::has_operation() const
{
    for (std::size_t index=0; index<tl_vs_buffer.len(); index++)
    {
        if(tl_vs_buffer[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tlv_count.yfilter)
	|| ydk::is_set(received_buffer_length.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidUnkTlVs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid-unk-tl-vs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidUnkTlVs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tlv_count.is_set || is_set(tlv_count.yfilter)) leaf_name_data.push_back(tlv_count.get_name_leafdata());
    if (received_buffer_length.is_set || is_set(received_buffer_length.yfilter)) leaf_name_data.push_back(received_buffer_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidUnkTlVs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tl-vs-buffer")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidUnkTlVs::TlVsBuffer>();
        ent_->parent = this;
        tl_vs_buffer.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidUnkTlVs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tl_vs_buffer.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidUnkTlVs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tlv-count")
    {
        tlv_count = value;
        tlv_count.value_namespace = name_space;
        tlv_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "received-buffer-length")
    {
        received_buffer_length = value;
        received_buffer_length.value_namespace = name_space;
        received_buffer_length.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidUnkTlVs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tlv-count")
    {
        tlv_count.yfilter = yfilter;
    }
    if(value_path == "received-buffer-length")
    {
        received_buffer_length.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidUnkTlVs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tl-vs-buffer" || name == "tlv-count" || name == "received-buffer-length")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidUnkTlVs::TlVsBuffer::TlVsBuffer()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "tl-vs-buffer"; yang_parent_name = "prefix-sid-unk-tl-vs"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidUnkTlVs::TlVsBuffer::~TlVsBuffer()
{
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidUnkTlVs::TlVsBuffer::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidUnkTlVs::TlVsBuffer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidUnkTlVs::TlVsBuffer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tl-vs-buffer";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidUnkTlVs::TlVsBuffer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidUnkTlVs::TlVsBuffer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidUnkTlVs::TlVsBuffer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidUnkTlVs::TlVsBuffer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidUnkTlVs::TlVsBuffer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidUnkTlVs::TlVsBuffer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::TunnelEncap()
    :
    sr_policy(std::make_shared<Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy>())
{
    sr_policy->parent = this;

    yang_name = "tunnel-encap"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::~TunnelEncap()
{
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::has_data() const
{
    if (is_presence_container) return true;
    return (sr_policy !=  nullptr && sr_policy->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::has_operation() const
{
    return is_set(yfilter)
	|| (sr_policy !=  nullptr && sr_policy->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-encap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-policy")
    {
        if(sr_policy == nullptr)
        {
            sr_policy = std::make_shared<Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy>();
        }
        return sr_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sr_policy != nullptr)
    {
        _children["sr-policy"] = sr_policy;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-policy")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SrPolicy()
    :
    tunnel_encap_type{YType::uint16, "tunnel-encap-type"},
    preference{YType::uint32, "preference"},
    state{YType::boolean, "state"},
    request_state{YType::enumeration, "request-state"},
    usable{YType::boolean, "usable"}
        ,
    binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid>())
    , allocated_binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid>())
    , segment_list(this, {})
{
    binding_sid->parent = this;
    allocated_binding_sid->parent = this;

    yang_name = "sr-policy"; yang_parent_name = "tunnel-encap"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::~SrPolicy()
{
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<segment_list.len(); index++)
    {
        if(segment_list[index]->has_data())
            return true;
    }
    return tunnel_encap_type.is_set
	|| preference.is_set
	|| state.is_set
	|| request_state.is_set
	|| usable.is_set
	|| (binding_sid !=  nullptr && binding_sid->has_data())
	|| (allocated_binding_sid !=  nullptr && allocated_binding_sid->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::has_operation() const
{
    for (std::size_t index=0; index<segment_list.len(); index++)
    {
        if(segment_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(tunnel_encap_type.yfilter)
	|| ydk::is_set(preference.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(request_state.yfilter)
	|| ydk::is_set(usable.yfilter)
	|| (binding_sid !=  nullptr && binding_sid->has_operation())
	|| (allocated_binding_sid !=  nullptr && allocated_binding_sid->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_encap_type.is_set || is_set(tunnel_encap_type.yfilter)) leaf_name_data.push_back(tunnel_encap_type.get_name_leafdata());
    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (request_state.is_set || is_set(request_state.yfilter)) leaf_name_data.push_back(request_state.get_name_leafdata());
    if (usable.is_set || is_set(usable.yfilter)) leaf_name_data.push_back(usable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding-sid")
    {
        if(binding_sid == nullptr)
        {
            binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid>();
        }
        return binding_sid;
    }

    if(child_yang_name == "allocated-binding-sid")
    {
        if(allocated_binding_sid == nullptr)
        {
            allocated_binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid>();
        }
        return allocated_binding_sid;
    }

    if(child_yang_name == "segment-list")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList>();
        ent_->parent = this;
        segment_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(binding_sid != nullptr)
    {
        _children["binding-sid"] = binding_sid;
    }

    if(allocated_binding_sid != nullptr)
    {
        _children["allocated-binding-sid"] = allocated_binding_sid;
    }

    count_ = 0;
    for (auto ent_ : segment_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-encap-type")
    {
        tunnel_encap_type = value;
        tunnel_encap_type.value_namespace = name_space;
        tunnel_encap_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preference")
    {
        preference = value;
        preference.value_namespace = name_space;
        preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-state")
    {
        request_state = value;
        request_state.value_namespace = name_space;
        request_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "usable")
    {
        usable = value;
        usable.value_namespace = name_space;
        usable.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-encap-type")
    {
        tunnel_encap_type.yfilter = yfilter;
    }
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "request-state")
    {
        request_state.yfilter = yfilter;
    }
    if(value_path == "usable")
    {
        usable.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding-sid" || name == "allocated-binding-sid" || name == "segment-list" || name == "tunnel-encap-type" || name == "preference" || name == "state" || name == "request-state" || name == "usable")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::BindingSid()
    :
    type{YType::enumeration, "type"},
    label{YType::uint32, "label"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "binding-sid"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::~BindingSid()
{
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| label.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "label" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::AllocatedBindingSid()
    :
    type{YType::enumeration, "type"},
    label{YType::uint32, "label"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "allocated-binding-sid"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::~AllocatedBindingSid()
{
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| label.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocated-binding-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "label" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::SegmentList()
    :
    weight{YType::uint8, "weight"}
        ,
    segment(this, {})
{

    yang_name = "segment-list"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::~SegmentList()
{
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<segment.len(); index++)
    {
        if(segment[index]->has_data())
            return true;
    }
    return weight.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::has_operation() const
{
    for (std::size_t index=0; index<segment.len(); index++)
    {
        if(segment[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-list";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment>();
        ent_->parent = this;
        segment.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : segment.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment" || name == "weight")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::Segment()
    :
    type{YType::enumeration, "type"},
    label{YType::uint32, "label"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "segment"; yang_parent_name = "segment-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::~Segment()
{
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| label.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "label" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::Community::Community()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "community"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::Community::~Community()
{
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::Community::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::Community::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::Community::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::ExtendedCommunity()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "extended-community"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::~ExtendedCommunity()
{
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::UnknownAttribute()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "unknown-attribute"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::~UnknownAttribute()
{
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attribute";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::Cluster()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "cluster"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::~Cluster()
{
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cluster";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::L2tpv3Cookie::L2tpv3Cookie()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "l2tpv3-cookie"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::L2tpv3Cookie::~L2tpv3Cookie()
{
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::L2tpv3Cookie::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::L2tpv3Cookie::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::L2tpv3Cookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3-cookie";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::L2tpv3Cookie::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::L2tpv3Cookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::L2tpv3Cookie::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::L2tpv3Cookie::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::L2tpv3Cookie::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::L2tpv3Cookie::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::ConnectorValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "connector-value"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::~ConnectorValue()
{
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connector-value";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::PmsiValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "pmsi-value"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::~PmsiValue()
{
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-value";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::LsAttr()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "ls-attr"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::~LsAttr()
{
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ls-attr";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::PeDistinguisherLabel()
    :
    pe_address{YType::str, "pe-address"},
    label{YType::uint32, "label"}
{

    yang_name = "pe-distinguisher-label"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::~PeDistinguisherLabel()
{
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::has_data() const
{
    if (is_presence_container) return true;
    return pe_address.is_set
	|| label.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pe_address.yfilter)
	|| ydk::is_set(label.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-distinguisher-label";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pe_address.is_set || is_set(pe_address.yfilter)) leaf_name_data.push_back(pe_address.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pe-address")
    {
        pe_address = value;
        pe_address.value_namespace = name_space;
        pe_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pe-address")
    {
        pe_address.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pe-address" || name == "label")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::LargeCommunity()
    :
    global_admin{YType::uint32, "global-admin"},
    local_data1{YType::uint32, "local-data1"},
    local_data2{YType::uint32, "local-data2"}
{

    yang_name = "large-community"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::~LargeCommunity()
{
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::has_data() const
{
    if (is_presence_container) return true;
    return global_admin.is_set
	|| local_data1.is_set
	|| local_data2.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global_admin.yfilter)
	|| ydk::is_set(local_data1.yfilter)
	|| ydk::is_set(local_data2.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "large-community";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_admin.is_set || is_set(global_admin.yfilter)) leaf_name_data.push_back(global_admin.get_name_leafdata());
    if (local_data1.is_set || is_set(local_data1.yfilter)) leaf_name_data.push_back(local_data1.get_name_leafdata());
    if (local_data2.is_set || is_set(local_data2.yfilter)) leaf_name_data.push_back(local_data2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "global-admin")
    {
        global_admin = value;
        global_admin.value_namespace = name_space;
        global_admin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-data1")
    {
        local_data1 = value;
        local_data1.value_namespace = name_space;
        local_data1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-data2")
    {
        local_data2 = value;
        local_data2.value_namespace = name_space;
        local_data2.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "global-admin")
    {
        global_admin.yfilter = yfilter;
    }
    if(value_path == "local-data1")
    {
        local_data1.yfilter = yfilter;
    }
    if(value_path == "local-data2")
    {
        local_data2.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-admin" || name == "local-data1" || name == "local-data2")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RnhAddr::RnhAddr()
    :
    len{YType::enumeration, "len"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    mac_address{YType::str, "mac-address"}
{

    yang_name = "rnh-addr"; yang_parent_name = "attribute-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RnhAddr::~RnhAddr()
{
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RnhAddr::has_data() const
{
    if (is_presence_container) return true;
    return len.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| mac_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RnhAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(mac_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RnhAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rnh-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RnhAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RnhAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RnhAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RnhAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RnhAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RnhAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "len" || name == "ipv4-address" || name == "ipv6-address" || name == "mac-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::RibrnhIp()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
        ,
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnVplsAddress>())
    , l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnMspwAddress>())
    , ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress>())
    , ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "ribrnh-ip"; yang_parent_name = "attribute-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::~RibrnhIp()
{
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ribrnh-ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(l2vpn_vpls_address != nullptr)
    {
        _children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        _children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        _children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        _children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnVplsAddress::L2vpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "ribrnh-ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnVplsAddress::~L2vpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnVplsAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnMspwAddress::L2vpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "ribrnh-ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnMspwAddress::~L2vpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnMspwAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "ribrnh-ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "ribrnh-ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::RtEntries::RtEntries()
    :
    rt_entry(this, {})
{

    yang_name = "rt-entries"; yang_parent_name = "instance-active"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::RtEntries::~RtEntries()
{
}

bool Bgp::Instances::Instance::InstanceActive::RtEntries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rt_entry.len(); index++)
    {
        if(rt_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceActive::RtEntries::has_operation() const
{
    for (std::size_t index=0; index<rt_entry.len(); index++)
    {
        if(rt_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::RtEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::RtEntries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::RtEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt-entry")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceActive::RtEntries::RtEntry>();
        ent_->parent = this;
        rt_entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::RtEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rt_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceActive::RtEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceActive::RtEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceActive::RtEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt-entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::RtEntries::RtEntry::RtEntry()
    :
    route_target_lower_bytes{YType::uint32, "route-target-lower-bytes"},
    route_target_upper_bytes{YType::uint32, "route-target-upper-bytes"},
    af_name{YType::enumeration, "af-name"},
    request_id{YType::uint32, "request-id"},
    afs{YType::str, "afs"}
        ,
    rt(std::make_shared<Bgp::Instances::Instance::InstanceActive::RtEntries::RtEntry::Rt>())
{
    rt->parent = this;

    yang_name = "rt-entry"; yang_parent_name = "rt-entries"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::RtEntries::RtEntry::~RtEntry()
{
}

bool Bgp::Instances::Instance::InstanceActive::RtEntries::RtEntry::has_data() const
{
    if (is_presence_container) return true;
    return route_target_lower_bytes.is_set
	|| route_target_upper_bytes.is_set
	|| af_name.is_set
	|| request_id.is_set
	|| afs.is_set
	|| (rt !=  nullptr && rt->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::RtEntries::RtEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_target_lower_bytes.yfilter)
	|| ydk::is_set(route_target_upper_bytes.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(request_id.yfilter)
	|| ydk::is_set(afs.yfilter)
	|| (rt !=  nullptr && rt->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::RtEntries::RtEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt-entry";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::RtEntries::RtEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_target_lower_bytes.is_set || is_set(route_target_lower_bytes.yfilter)) leaf_name_data.push_back(route_target_lower_bytes.get_name_leafdata());
    if (route_target_upper_bytes.is_set || is_set(route_target_upper_bytes.yfilter)) leaf_name_data.push_back(route_target_upper_bytes.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (request_id.is_set || is_set(request_id.yfilter)) leaf_name_data.push_back(request_id.get_name_leafdata());
    if (afs.is_set || is_set(afs.yfilter)) leaf_name_data.push_back(afs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::RtEntries::RtEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rt")
    {
        if(rt == nullptr)
        {
            rt = std::make_shared<Bgp::Instances::Instance::InstanceActive::RtEntries::RtEntry::Rt>();
        }
        return rt;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::RtEntries::RtEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rt != nullptr)
    {
        _children["rt"] = rt;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceActive::RtEntries::RtEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-target-lower-bytes")
    {
        route_target_lower_bytes = value;
        route_target_lower_bytes.value_namespace = name_space;
        route_target_lower_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-target-upper-bytes")
    {
        route_target_upper_bytes = value;
        route_target_upper_bytes.value_namespace = name_space;
        route_target_upper_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-id")
    {
        request_id = value;
        request_id.value_namespace = name_space;
        request_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "afs")
    {
        afs = value;
        afs.value_namespace = name_space;
        afs.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::RtEntries::RtEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-target-lower-bytes")
    {
        route_target_lower_bytes.yfilter = yfilter;
    }
    if(value_path == "route-target-upper-bytes")
    {
        route_target_upper_bytes.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "request-id")
    {
        request_id.yfilter = yfilter;
    }
    if(value_path == "afs")
    {
        afs.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::RtEntries::RtEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rt" || name == "route-target-lower-bytes" || name == "route-target-upper-bytes" || name == "af-name" || name == "request-id" || name == "afs")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::RtEntries::RtEntry::Rt::Rt()
    :
    route_target{YType::str, "route-target"}
{

    yang_name = "rt"; yang_parent_name = "rt-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::RtEntries::RtEntry::Rt::~Rt()
{
}

bool Bgp::Instances::Instance::InstanceActive::RtEntries::RtEntry::Rt::has_data() const
{
    if (is_presence_container) return true;
    return route_target.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::RtEntries::RtEntry::Rt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_target.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::RtEntries::RtEntry::Rt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::RtEntries::RtEntry::Rt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_target.is_set || is_set(route_target.yfilter)) leaf_name_data.push_back(route_target.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::RtEntries::RtEntry::Rt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::RtEntries::RtEntry::Rt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceActive::RtEntries::RtEntry::Rt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-target")
    {
        route_target = value;
        route_target.value_namespace = name_space;
        route_target.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::RtEntries::RtEntry::Rt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-target")
    {
        route_target.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::RtEntries::RtEntry::Rt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-target")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::AttributeFilterGroups::AttributeFilterGroups()
    :
    attribute_filter_group(this, {"group_name"})
{

    yang_name = "attribute-filter-groups"; yang_parent_name = "instance-active"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::AttributeFilterGroups::~AttributeFilterGroups()
{
}

bool Bgp::Instances::Instance::InstanceActive::AttributeFilterGroups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<attribute_filter_group.len(); index++)
    {
        if(attribute_filter_group[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceActive::AttributeFilterGroups::has_operation() const
{
    for (std::size_t index=0; index<attribute_filter_group.len(); index++)
    {
        if(attribute_filter_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::AttributeFilterGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-filter-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::AttributeFilterGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::AttributeFilterGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-filter-group")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceActive::AttributeFilterGroups::AttributeFilterGroup>();
        ent_->parent = this;
        attribute_filter_group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::AttributeFilterGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : attribute_filter_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceActive::AttributeFilterGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceActive::AttributeFilterGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceActive::AttributeFilterGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-filter-group")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterGroup()
    :
    group_name{YType::str, "group-name"},
    attribute_filter_group_name{YType::str, "attribute-filter-group-name"},
    attribute_filter_total_group_count{YType::uint32, "attribute-filter-total-group-count"}
        ,
    attribute_filter_entry(this, {})
{

    yang_name = "attribute-filter-group"; yang_parent_name = "attribute-filter-groups"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::AttributeFilterGroups::AttributeFilterGroup::~AttributeFilterGroup()
{
}

bool Bgp::Instances::Instance::InstanceActive::AttributeFilterGroups::AttributeFilterGroup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<attribute_filter_entry.len(); index++)
    {
        if(attribute_filter_entry[index]->has_data())
            return true;
    }
    return group_name.is_set
	|| attribute_filter_group_name.is_set
	|| attribute_filter_total_group_count.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::AttributeFilterGroups::AttributeFilterGroup::has_operation() const
{
    for (std::size_t index=0; index<attribute_filter_entry.len(); index++)
    {
        if(attribute_filter_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(attribute_filter_group_name.yfilter)
	|| ydk::is_set(attribute_filter_total_group_count.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::AttributeFilterGroups::AttributeFilterGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-filter-group";
    ADD_KEY_TOKEN(group_name, "group-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::AttributeFilterGroups::AttributeFilterGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (attribute_filter_group_name.is_set || is_set(attribute_filter_group_name.yfilter)) leaf_name_data.push_back(attribute_filter_group_name.get_name_leafdata());
    if (attribute_filter_total_group_count.is_set || is_set(attribute_filter_total_group_count.yfilter)) leaf_name_data.push_back(attribute_filter_total_group_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::AttributeFilterGroups::AttributeFilterGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-filter-entry")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceActive::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterEntry>();
        ent_->parent = this;
        attribute_filter_entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::AttributeFilterGroups::AttributeFilterGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : attribute_filter_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceActive::AttributeFilterGroups::AttributeFilterGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-filter-group-name")
    {
        attribute_filter_group_name = value;
        attribute_filter_group_name.value_namespace = name_space;
        attribute_filter_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-filter-total-group-count")
    {
        attribute_filter_total_group_count = value;
        attribute_filter_total_group_count.value_namespace = name_space;
        attribute_filter_total_group_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::AttributeFilterGroups::AttributeFilterGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "attribute-filter-group-name")
    {
        attribute_filter_group_name.yfilter = yfilter;
    }
    if(value_path == "attribute-filter-total-group-count")
    {
        attribute_filter_total_group_count.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::AttributeFilterGroups::AttributeFilterGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-filter-entry" || name == "group-name" || name == "attribute-filter-group-name" || name == "attribute-filter-total-group-count")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterEntry::AttributeFilterEntry()
    :
    attribute_filter_entry_requested_action{YType::enumeration, "attribute-filter-entry-requested-action"},
    attribute_filter_entry_range_start{YType::uint32, "attribute-filter-entry-range-start"},
    attribute_filter_entry_range_end{YType::uint32, "attribute-filter-entry-range-end"}
{

    yang_name = "attribute-filter-entry"; yang_parent_name = "attribute-filter-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterEntry::~AttributeFilterEntry()
{
}

bool Bgp::Instances::Instance::InstanceActive::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterEntry::has_data() const
{
    if (is_presence_container) return true;
    return attribute_filter_entry_requested_action.is_set
	|| attribute_filter_entry_range_start.is_set
	|| attribute_filter_entry_range_end.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_filter_entry_requested_action.yfilter)
	|| ydk::is_set(attribute_filter_entry_range_start.yfilter)
	|| ydk::is_set(attribute_filter_entry_range_end.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-filter-entry";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_filter_entry_requested_action.is_set || is_set(attribute_filter_entry_requested_action.yfilter)) leaf_name_data.push_back(attribute_filter_entry_requested_action.get_name_leafdata());
    if (attribute_filter_entry_range_start.is_set || is_set(attribute_filter_entry_range_start.yfilter)) leaf_name_data.push_back(attribute_filter_entry_range_start.get_name_leafdata());
    if (attribute_filter_entry_range_end.is_set || is_set(attribute_filter_entry_range_end.yfilter)) leaf_name_data.push_back(attribute_filter_entry_range_end.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceActive::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-filter-entry-requested-action")
    {
        attribute_filter_entry_requested_action = value;
        attribute_filter_entry_requested_action.value_namespace = name_space;
        attribute_filter_entry_requested_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-filter-entry-range-start")
    {
        attribute_filter_entry_range_start = value;
        attribute_filter_entry_range_start.value_namespace = name_space;
        attribute_filter_entry_range_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-filter-entry-range-end")
    {
        attribute_filter_entry_range_end = value;
        attribute_filter_entry_range_end.value_namespace = name_space;
        attribute_filter_entry_range_end.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-filter-entry-requested-action")
    {
        attribute_filter_entry_requested_action.yfilter = yfilter;
    }
    if(value_path == "attribute-filter-entry-range-start")
    {
        attribute_filter_entry_range_start.yfilter = yfilter;
    }
    if(value_path == "attribute-filter-entry-range-end")
    {
        attribute_filter_entry_range_end.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::AttributeFilterGroups::AttributeFilterGroup::AttributeFilterEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-filter-entry-requested-action" || name == "attribute-filter-entry-range-start" || name == "attribute-filter-entry-range-end")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::RpkiServerList::RpkiServerList()
    :
    rpki_server(this, {})
{

    yang_name = "rpki-server-list"; yang_parent_name = "instance-active"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::RpkiServerList::~RpkiServerList()
{
}

bool Bgp::Instances::Instance::InstanceActive::RpkiServerList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rpki_server.len(); index++)
    {
        if(rpki_server[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceActive::RpkiServerList::has_operation() const
{
    for (std::size_t index=0; index<rpki_server.len(); index++)
    {
        if(rpki_server[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::RpkiServerList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpki-server-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::RpkiServerList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::RpkiServerList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpki-server")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceActive::RpkiServerList::RpkiServer>();
        ent_->parent = this;
        rpki_server.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::RpkiServerList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rpki_server.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceActive::RpkiServerList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceActive::RpkiServerList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceActive::RpkiServerList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpki-server")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::RpkiServerList::RpkiServer::RpkiServer()
    :
    name{YType::str, "name"},
    preference{YType::uint32, "preference"},
    port{YType::uint32, "port"},
    state{YType::enumeration, "state"},
    state_time{YType::uint32, "state-time"},
    shutdown{YType::boolean, "shutdown"},
    retries{YType::uint32, "retries"},
    close_reason{YType::enumeration, "close-reason"},
    close_time{YType::uint32, "close-time"},
    close_time_real{YType::uint32, "close-time-real"},
    read_bytes{YType::uint32, "read-bytes"},
    write_bytes{YType::uint32, "write-bytes"},
    transport{YType::uint32, "transport"},
    username{YType::str, "username"},
    password{YType::str, "password"},
    sshpid{YType::uint32, "sshpid"},
    proto_state{YType::enumeration, "proto-state"},
    proto_state_time{YType::uint32, "proto-state-time"},
    serial{YType::uint32, "serial"},
    nonce{YType::uint32, "nonce"},
    refresh_time{YType::int32, "refresh-time"},
    response_time{YType::int32, "response-time"},
    purge_time{YType::int32, "purge-time"},
    ipv4roa{YType::uint32, "ipv4roa"},
    ipv4roa_announce{YType::uint32, "ipv4roa-announce"},
    ipv4roa_withdraw{YType::uint32, "ipv4roa-withdraw"},
    ipv6roa{YType::uint32, "ipv6roa"},
    ipv6roa_announce{YType::uint32, "ipv6roa-announce"},
    ipv6roa_withdraw{YType::uint32, "ipv6roa-withdraw"},
    proto_error{YType::enumeration, "proto-error"}
{

    yang_name = "rpki-server"; yang_parent_name = "rpki-server-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::RpkiServerList::RpkiServer::~RpkiServer()
{
}

bool Bgp::Instances::Instance::InstanceActive::RpkiServerList::RpkiServer::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| preference.is_set
	|| port.is_set
	|| state.is_set
	|| state_time.is_set
	|| shutdown.is_set
	|| retries.is_set
	|| close_reason.is_set
	|| close_time.is_set
	|| close_time_real.is_set
	|| read_bytes.is_set
	|| write_bytes.is_set
	|| transport.is_set
	|| username.is_set
	|| password.is_set
	|| sshpid.is_set
	|| proto_state.is_set
	|| proto_state_time.is_set
	|| serial.is_set
	|| nonce.is_set
	|| refresh_time.is_set
	|| response_time.is_set
	|| purge_time.is_set
	|| ipv4roa.is_set
	|| ipv4roa_announce.is_set
	|| ipv4roa_withdraw.is_set
	|| ipv6roa.is_set
	|| ipv6roa_announce.is_set
	|| ipv6roa_withdraw.is_set
	|| proto_error.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::RpkiServerList::RpkiServer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(preference.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(state_time.yfilter)
	|| ydk::is_set(shutdown.yfilter)
	|| ydk::is_set(retries.yfilter)
	|| ydk::is_set(close_reason.yfilter)
	|| ydk::is_set(close_time.yfilter)
	|| ydk::is_set(close_time_real.yfilter)
	|| ydk::is_set(read_bytes.yfilter)
	|| ydk::is_set(write_bytes.yfilter)
	|| ydk::is_set(transport.yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(password.yfilter)
	|| ydk::is_set(sshpid.yfilter)
	|| ydk::is_set(proto_state.yfilter)
	|| ydk::is_set(proto_state_time.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(nonce.yfilter)
	|| ydk::is_set(refresh_time.yfilter)
	|| ydk::is_set(response_time.yfilter)
	|| ydk::is_set(purge_time.yfilter)
	|| ydk::is_set(ipv4roa.yfilter)
	|| ydk::is_set(ipv4roa_announce.yfilter)
	|| ydk::is_set(ipv4roa_withdraw.yfilter)
	|| ydk::is_set(ipv6roa.yfilter)
	|| ydk::is_set(ipv6roa_announce.yfilter)
	|| ydk::is_set(ipv6roa_withdraw.yfilter)
	|| ydk::is_set(proto_error.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::RpkiServerList::RpkiServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpki-server";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::RpkiServerList::RpkiServer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (state_time.is_set || is_set(state_time.yfilter)) leaf_name_data.push_back(state_time.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.yfilter)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (retries.is_set || is_set(retries.yfilter)) leaf_name_data.push_back(retries.get_name_leafdata());
    if (close_reason.is_set || is_set(close_reason.yfilter)) leaf_name_data.push_back(close_reason.get_name_leafdata());
    if (close_time.is_set || is_set(close_time.yfilter)) leaf_name_data.push_back(close_time.get_name_leafdata());
    if (close_time_real.is_set || is_set(close_time_real.yfilter)) leaf_name_data.push_back(close_time_real.get_name_leafdata());
    if (read_bytes.is_set || is_set(read_bytes.yfilter)) leaf_name_data.push_back(read_bytes.get_name_leafdata());
    if (write_bytes.is_set || is_set(write_bytes.yfilter)) leaf_name_data.push_back(write_bytes.get_name_leafdata());
    if (transport.is_set || is_set(transport.yfilter)) leaf_name_data.push_back(transport.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());
    if (sshpid.is_set || is_set(sshpid.yfilter)) leaf_name_data.push_back(sshpid.get_name_leafdata());
    if (proto_state.is_set || is_set(proto_state.yfilter)) leaf_name_data.push_back(proto_state.get_name_leafdata());
    if (proto_state_time.is_set || is_set(proto_state_time.yfilter)) leaf_name_data.push_back(proto_state_time.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (nonce.is_set || is_set(nonce.yfilter)) leaf_name_data.push_back(nonce.get_name_leafdata());
    if (refresh_time.is_set || is_set(refresh_time.yfilter)) leaf_name_data.push_back(refresh_time.get_name_leafdata());
    if (response_time.is_set || is_set(response_time.yfilter)) leaf_name_data.push_back(response_time.get_name_leafdata());
    if (purge_time.is_set || is_set(purge_time.yfilter)) leaf_name_data.push_back(purge_time.get_name_leafdata());
    if (ipv4roa.is_set || is_set(ipv4roa.yfilter)) leaf_name_data.push_back(ipv4roa.get_name_leafdata());
    if (ipv4roa_announce.is_set || is_set(ipv4roa_announce.yfilter)) leaf_name_data.push_back(ipv4roa_announce.get_name_leafdata());
    if (ipv4roa_withdraw.is_set || is_set(ipv4roa_withdraw.yfilter)) leaf_name_data.push_back(ipv4roa_withdraw.get_name_leafdata());
    if (ipv6roa.is_set || is_set(ipv6roa.yfilter)) leaf_name_data.push_back(ipv6roa.get_name_leafdata());
    if (ipv6roa_announce.is_set || is_set(ipv6roa_announce.yfilter)) leaf_name_data.push_back(ipv6roa_announce.get_name_leafdata());
    if (ipv6roa_withdraw.is_set || is_set(ipv6roa_withdraw.yfilter)) leaf_name_data.push_back(ipv6roa_withdraw.get_name_leafdata());
    if (proto_error.is_set || is_set(proto_error.yfilter)) leaf_name_data.push_back(proto_error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::RpkiServerList::RpkiServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::RpkiServerList::RpkiServer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceActive::RpkiServerList::RpkiServer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preference")
    {
        preference = value;
        preference.value_namespace = name_space;
        preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-time")
    {
        state_time = value;
        state_time.value_namespace = name_space;
        state_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
        shutdown.value_namespace = name_space;
        shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retries")
    {
        retries = value;
        retries.value_namespace = name_space;
        retries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "close-reason")
    {
        close_reason = value;
        close_reason.value_namespace = name_space;
        close_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "close-time")
    {
        close_time = value;
        close_time.value_namespace = name_space;
        close_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "close-time-real")
    {
        close_time_real = value;
        close_time_real.value_namespace = name_space;
        close_time_real.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "read-bytes")
    {
        read_bytes = value;
        read_bytes.value_namespace = name_space;
        read_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "write-bytes")
    {
        write_bytes = value;
        write_bytes.value_namespace = name_space;
        write_bytes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport")
    {
        transport = value;
        transport.value_namespace = name_space;
        transport.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sshpid")
    {
        sshpid = value;
        sshpid.value_namespace = name_space;
        sshpid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proto-state")
    {
        proto_state = value;
        proto_state.value_namespace = name_space;
        proto_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proto-state-time")
    {
        proto_state_time = value;
        proto_state_time.value_namespace = name_space;
        proto_state_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nonce")
    {
        nonce = value;
        nonce.value_namespace = name_space;
        nonce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh-time")
    {
        refresh_time = value;
        refresh_time.value_namespace = name_space;
        refresh_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "response-time")
    {
        response_time = value;
        response_time.value_namespace = name_space;
        response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "purge-time")
    {
        purge_time = value;
        purge_time.value_namespace = name_space;
        purge_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4roa")
    {
        ipv4roa = value;
        ipv4roa.value_namespace = name_space;
        ipv4roa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4roa-announce")
    {
        ipv4roa_announce = value;
        ipv4roa_announce.value_namespace = name_space;
        ipv4roa_announce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4roa-withdraw")
    {
        ipv4roa_withdraw = value;
        ipv4roa_withdraw.value_namespace = name_space;
        ipv4roa_withdraw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6roa")
    {
        ipv6roa = value;
        ipv6roa.value_namespace = name_space;
        ipv6roa.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6roa-announce")
    {
        ipv6roa_announce = value;
        ipv6roa_announce.value_namespace = name_space;
        ipv6roa_announce.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6roa-withdraw")
    {
        ipv6roa_withdraw = value;
        ipv6roa_withdraw.value_namespace = name_space;
        ipv6roa_withdraw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proto-error")
    {
        proto_error = value;
        proto_error.value_namespace = name_space;
        proto_error.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::RpkiServerList::RpkiServer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "state-time")
    {
        state_time.yfilter = yfilter;
    }
    if(value_path == "shutdown")
    {
        shutdown.yfilter = yfilter;
    }
    if(value_path == "retries")
    {
        retries.yfilter = yfilter;
    }
    if(value_path == "close-reason")
    {
        close_reason.yfilter = yfilter;
    }
    if(value_path == "close-time")
    {
        close_time.yfilter = yfilter;
    }
    if(value_path == "close-time-real")
    {
        close_time_real.yfilter = yfilter;
    }
    if(value_path == "read-bytes")
    {
        read_bytes.yfilter = yfilter;
    }
    if(value_path == "write-bytes")
    {
        write_bytes.yfilter = yfilter;
    }
    if(value_path == "transport")
    {
        transport.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
    if(value_path == "sshpid")
    {
        sshpid.yfilter = yfilter;
    }
    if(value_path == "proto-state")
    {
        proto_state.yfilter = yfilter;
    }
    if(value_path == "proto-state-time")
    {
        proto_state_time.yfilter = yfilter;
    }
    if(value_path == "serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "nonce")
    {
        nonce.yfilter = yfilter;
    }
    if(value_path == "refresh-time")
    {
        refresh_time.yfilter = yfilter;
    }
    if(value_path == "response-time")
    {
        response_time.yfilter = yfilter;
    }
    if(value_path == "purge-time")
    {
        purge_time.yfilter = yfilter;
    }
    if(value_path == "ipv4roa")
    {
        ipv4roa.yfilter = yfilter;
    }
    if(value_path == "ipv4roa-announce")
    {
        ipv4roa_announce.yfilter = yfilter;
    }
    if(value_path == "ipv4roa-withdraw")
    {
        ipv4roa_withdraw.yfilter = yfilter;
    }
    if(value_path == "ipv6roa")
    {
        ipv6roa.yfilter = yfilter;
    }
    if(value_path == "ipv6roa-announce")
    {
        ipv6roa_announce.yfilter = yfilter;
    }
    if(value_path == "ipv6roa-withdraw")
    {
        ipv6roa_withdraw.yfilter = yfilter;
    }
    if(value_path == "proto-error")
    {
        proto_error.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::RpkiServerList::RpkiServer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "preference" || name == "port" || name == "state" || name == "state-time" || name == "shutdown" || name == "retries" || name == "close-reason" || name == "close-time" || name == "close-time-real" || name == "read-bytes" || name == "write-bytes" || name == "transport" || name == "username" || name == "password" || name == "sshpid" || name == "proto-state" || name == "proto-state-time" || name == "serial" || name == "nonce" || name == "refresh-time" || name == "response-time" || name == "purge-time" || name == "ipv4roa" || name == "ipv4roa-announce" || name == "ipv4roa-withdraw" || name == "ipv6roa" || name == "ipv6roa-announce" || name == "ipv6roa-withdraw" || name == "proto-error")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::RpkiRoutes::RpkiRoutes()
    :
    rpki_route(this, {})
{

    yang_name = "rpki-routes"; yang_parent_name = "instance-active"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::RpkiRoutes::~RpkiRoutes()
{
}

bool Bgp::Instances::Instance::InstanceActive::RpkiRoutes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rpki_route.len(); index++)
    {
        if(rpki_route[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceActive::RpkiRoutes::has_operation() const
{
    for (std::size_t index=0; index<rpki_route.len(); index++)
    {
        if(rpki_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::RpkiRoutes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpki-routes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::RpkiRoutes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::RpkiRoutes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpki-route")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceActive::RpkiRoutes::RpkiRoute>();
        ent_->parent = this;
        rpki_route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::RpkiRoutes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rpki_route.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceActive::RpkiRoutes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceActive::RpkiRoutes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceActive::RpkiRoutes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpki-route")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::RpkiRoutes::RpkiRoute::RpkiRoute()
    :
    af_name{YType::enumeration, "af-name"},
    address{YType::str, "address"},
    minimum{YType::uint32, "minimum"},
    maximum{YType::uint32, "maximum"}
        ,
    rpki_route(this, {})
{

    yang_name = "rpki-route"; yang_parent_name = "rpki-routes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::RpkiRoutes::RpkiRoute::~RpkiRoute()
{
}

bool Bgp::Instances::Instance::InstanceActive::RpkiRoutes::RpkiRoute::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rpki_route.len(); index++)
    {
        if(rpki_route[index]->has_data())
            return true;
    }
    return af_name.is_set
	|| address.is_set
	|| minimum.is_set
	|| maximum.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::RpkiRoutes::RpkiRoute::has_operation() const
{
    for (std::size_t index=0; index<rpki_route.len(); index++)
    {
        if(rpki_route[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(minimum.yfilter)
	|| ydk::is_set(maximum.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::RpkiRoutes::RpkiRoute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpki-route";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::RpkiRoutes::RpkiRoute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (minimum.is_set || is_set(minimum.yfilter)) leaf_name_data.push_back(minimum.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.yfilter)) leaf_name_data.push_back(maximum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::RpkiRoutes::RpkiRoute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpki-route")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceActive::RpkiRoutes::RpkiRoute::RpkiRoute_>();
        ent_->parent = this;
        rpki_route.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::RpkiRoutes::RpkiRoute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rpki_route.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceActive::RpkiRoutes::RpkiRoute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum")
    {
        minimum = value;
        minimum.value_namespace = name_space;
        minimum.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum")
    {
        maximum = value;
        maximum.value_namespace = name_space;
        maximum.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::RpkiRoutes::RpkiRoute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "minimum")
    {
        minimum.yfilter = yfilter;
    }
    if(value_path == "maximum")
    {
        maximum.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::RpkiRoutes::RpkiRoute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpki-route" || name == "af-name" || name == "address" || name == "minimum" || name == "maximum")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::RpkiRoutes::RpkiRoute::RpkiRoute_::RpkiRoute_()
    :
    af_name{YType::enumeration, "af-name"},
    address{YType::str, "address"},
    min_prefix_len{YType::uint8, "min-prefix-len"},
    max_prefix_len{YType::uint8, "max-prefix-len"},
    as{YType::uint32, "as"},
    refcount{YType::uint16, "refcount"},
    server{YType::str, "server"},
    stale{YType::boolean, "stale"}
{

    yang_name = "rpki-route"; yang_parent_name = "rpki-route"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::RpkiRoutes::RpkiRoute::RpkiRoute_::~RpkiRoute_()
{
}

bool Bgp::Instances::Instance::InstanceActive::RpkiRoutes::RpkiRoute::RpkiRoute_::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| address.is_set
	|| min_prefix_len.is_set
	|| max_prefix_len.is_set
	|| as.is_set
	|| refcount.is_set
	|| server.is_set
	|| stale.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::RpkiRoutes::RpkiRoute::RpkiRoute_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(min_prefix_len.yfilter)
	|| ydk::is_set(max_prefix_len.yfilter)
	|| ydk::is_set(as.yfilter)
	|| ydk::is_set(refcount.yfilter)
	|| ydk::is_set(server.yfilter)
	|| ydk::is_set(stale.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::RpkiRoutes::RpkiRoute::RpkiRoute_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpki-route";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::RpkiRoutes::RpkiRoute::RpkiRoute_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (min_prefix_len.is_set || is_set(min_prefix_len.yfilter)) leaf_name_data.push_back(min_prefix_len.get_name_leafdata());
    if (max_prefix_len.is_set || is_set(max_prefix_len.yfilter)) leaf_name_data.push_back(max_prefix_len.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());
    if (refcount.is_set || is_set(refcount.yfilter)) leaf_name_data.push_back(refcount.get_name_leafdata());
    if (server.is_set || is_set(server.yfilter)) leaf_name_data.push_back(server.get_name_leafdata());
    if (stale.is_set || is_set(stale.yfilter)) leaf_name_data.push_back(stale.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::RpkiRoutes::RpkiRoute::RpkiRoute_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::RpkiRoutes::RpkiRoute::RpkiRoute_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceActive::RpkiRoutes::RpkiRoute::RpkiRoute_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-prefix-len")
    {
        min_prefix_len = value;
        min_prefix_len.value_namespace = name_space;
        min_prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-prefix-len")
    {
        max_prefix_len = value;
        max_prefix_len.value_namespace = name_space;
        max_prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refcount")
    {
        refcount = value;
        refcount.value_namespace = name_space;
        refcount.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server")
    {
        server = value;
        server.value_namespace = name_space;
        server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stale")
    {
        stale = value;
        stale.value_namespace = name_space;
        stale.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::RpkiRoutes::RpkiRoute::RpkiRoute_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "min-prefix-len")
    {
        min_prefix_len.yfilter = yfilter;
    }
    if(value_path == "max-prefix-len")
    {
        max_prefix_len.yfilter = yfilter;
    }
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
    if(value_path == "refcount")
    {
        refcount.yfilter = yfilter;
    }
    if(value_path == "server")
    {
        server.yfilter = yfilter;
    }
    if(value_path == "stale")
    {
        stale.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::RpkiRoutes::RpkiRoute::RpkiRoute_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "address" || name == "min-prefix-len" || name == "max-prefix-len" || name == "as" || name == "refcount" || name == "server" || name == "stale")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::UpdateInboundErrorProcess::UpdateInboundErrorProcess()
    :
    update_error_handling_basic_ebgp{YType::boolean, "update-error-handling-basic-ebgp"},
    update_error_handling_basic_ibgp{YType::boolean, "update-error-handling-basic-ibgp"},
    update_error_handling_extended_ebgp{YType::boolean, "update-error-handling-extended-ebgp"},
    update_error_handling_extended_ibgp{YType::boolean, "update-error-handling-extended-ibgp"},
    update_malformed_message_count{YType::uint32, "update-malformed-message-count"},
    update_malformed_neighbor_count{YType::uint32, "update-malformed-neighbor-count"},
    last_update_malformed_age{YType::uint32, "last-update-malformed-age"}
        ,
    last_update_malformed_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceActive::UpdateInboundErrorProcess::LastUpdateMalformedTimestamp>())
{
    last_update_malformed_timestamp->parent = this;

    yang_name = "update-inbound-error-process"; yang_parent_name = "instance-active"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::UpdateInboundErrorProcess::~UpdateInboundErrorProcess()
{
}

bool Bgp::Instances::Instance::InstanceActive::UpdateInboundErrorProcess::has_data() const
{
    if (is_presence_container) return true;
    return update_error_handling_basic_ebgp.is_set
	|| update_error_handling_basic_ibgp.is_set
	|| update_error_handling_extended_ebgp.is_set
	|| update_error_handling_extended_ibgp.is_set
	|| update_malformed_message_count.is_set
	|| update_malformed_neighbor_count.is_set
	|| last_update_malformed_age.is_set
	|| (last_update_malformed_timestamp !=  nullptr && last_update_malformed_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceActive::UpdateInboundErrorProcess::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(update_error_handling_basic_ebgp.yfilter)
	|| ydk::is_set(update_error_handling_basic_ibgp.yfilter)
	|| ydk::is_set(update_error_handling_extended_ebgp.yfilter)
	|| ydk::is_set(update_error_handling_extended_ibgp.yfilter)
	|| ydk::is_set(update_malformed_message_count.yfilter)
	|| ydk::is_set(update_malformed_neighbor_count.yfilter)
	|| ydk::is_set(last_update_malformed_age.yfilter)
	|| (last_update_malformed_timestamp !=  nullptr && last_update_malformed_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceActive::UpdateInboundErrorProcess::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-inbound-error-process";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::UpdateInboundErrorProcess::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_error_handling_basic_ebgp.is_set || is_set(update_error_handling_basic_ebgp.yfilter)) leaf_name_data.push_back(update_error_handling_basic_ebgp.get_name_leafdata());
    if (update_error_handling_basic_ibgp.is_set || is_set(update_error_handling_basic_ibgp.yfilter)) leaf_name_data.push_back(update_error_handling_basic_ibgp.get_name_leafdata());
    if (update_error_handling_extended_ebgp.is_set || is_set(update_error_handling_extended_ebgp.yfilter)) leaf_name_data.push_back(update_error_handling_extended_ebgp.get_name_leafdata());
    if (update_error_handling_extended_ibgp.is_set || is_set(update_error_handling_extended_ibgp.yfilter)) leaf_name_data.push_back(update_error_handling_extended_ibgp.get_name_leafdata());
    if (update_malformed_message_count.is_set || is_set(update_malformed_message_count.yfilter)) leaf_name_data.push_back(update_malformed_message_count.get_name_leafdata());
    if (update_malformed_neighbor_count.is_set || is_set(update_malformed_neighbor_count.yfilter)) leaf_name_data.push_back(update_malformed_neighbor_count.get_name_leafdata());
    if (last_update_malformed_age.is_set || is_set(last_update_malformed_age.yfilter)) leaf_name_data.push_back(last_update_malformed_age.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::UpdateInboundErrorProcess::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-update-malformed-timestamp")
    {
        if(last_update_malformed_timestamp == nullptr)
        {
            last_update_malformed_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceActive::UpdateInboundErrorProcess::LastUpdateMalformedTimestamp>();
        }
        return last_update_malformed_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::UpdateInboundErrorProcess::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(last_update_malformed_timestamp != nullptr)
    {
        _children["last-update-malformed-timestamp"] = last_update_malformed_timestamp;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceActive::UpdateInboundErrorProcess::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update-error-handling-basic-ebgp")
    {
        update_error_handling_basic_ebgp = value;
        update_error_handling_basic_ebgp.value_namespace = name_space;
        update_error_handling_basic_ebgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-handling-basic-ibgp")
    {
        update_error_handling_basic_ibgp = value;
        update_error_handling_basic_ibgp.value_namespace = name_space;
        update_error_handling_basic_ibgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-handling-extended-ebgp")
    {
        update_error_handling_extended_ebgp = value;
        update_error_handling_extended_ebgp.value_namespace = name_space;
        update_error_handling_extended_ebgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-handling-extended-ibgp")
    {
        update_error_handling_extended_ibgp = value;
        update_error_handling_extended_ibgp.value_namespace = name_space;
        update_error_handling_extended_ibgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-malformed-message-count")
    {
        update_malformed_message_count = value;
        update_malformed_message_count.value_namespace = name_space;
        update_malformed_message_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-malformed-neighbor-count")
    {
        update_malformed_neighbor_count = value;
        update_malformed_neighbor_count.value_namespace = name_space;
        update_malformed_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-malformed-age")
    {
        last_update_malformed_age = value;
        last_update_malformed_age.value_namespace = name_space;
        last_update_malformed_age.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::UpdateInboundErrorProcess::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update-error-handling-basic-ebgp")
    {
        update_error_handling_basic_ebgp.yfilter = yfilter;
    }
    if(value_path == "update-error-handling-basic-ibgp")
    {
        update_error_handling_basic_ibgp.yfilter = yfilter;
    }
    if(value_path == "update-error-handling-extended-ebgp")
    {
        update_error_handling_extended_ebgp.yfilter = yfilter;
    }
    if(value_path == "update-error-handling-extended-ibgp")
    {
        update_error_handling_extended_ibgp.yfilter = yfilter;
    }
    if(value_path == "update-malformed-message-count")
    {
        update_malformed_message_count.yfilter = yfilter;
    }
    if(value_path == "update-malformed-neighbor-count")
    {
        update_malformed_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "last-update-malformed-age")
    {
        last_update_malformed_age.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::UpdateInboundErrorProcess::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-update-malformed-timestamp" || name == "update-error-handling-basic-ebgp" || name == "update-error-handling-basic-ibgp" || name == "update-error-handling-extended-ebgp" || name == "update-error-handling-extended-ibgp" || name == "update-malformed-message-count" || name == "update-malformed-neighbor-count" || name == "last-update-malformed-age")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::UpdateInboundErrorProcess::LastUpdateMalformedTimestamp::LastUpdateMalformedTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-update-malformed-timestamp"; yang_parent_name = "update-inbound-error-process"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::UpdateInboundErrorProcess::LastUpdateMalformedTimestamp::~LastUpdateMalformedTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceActive::UpdateInboundErrorProcess::LastUpdateMalformedTimestamp::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::UpdateInboundErrorProcess::LastUpdateMalformedTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::UpdateInboundErrorProcess::LastUpdateMalformedTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-malformed-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::UpdateInboundErrorProcess::LastUpdateMalformedTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::UpdateInboundErrorProcess::LastUpdateMalformedTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::UpdateInboundErrorProcess::LastUpdateMalformedTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceActive::UpdateInboundErrorProcess::LastUpdateMalformedTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceActive::UpdateInboundErrorProcess::LastUpdateMalformedTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceActive::UpdateInboundErrorProcess::LastUpdateMalformedTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceActive::RpkiSummary::RpkiSummary()
    :
    servers{YType::uint32, "servers"},
    ipv4roa_nets{YType::uint32, "ipv4roa-nets"},
    ipv4roa_paths{YType::uint32, "ipv4roa-paths"},
    ipv6roa_nets{YType::uint32, "ipv6roa-nets"},
    ipv6roa_paths{YType::uint32, "ipv6roa-paths"}
{

    yang_name = "rpki-summary"; yang_parent_name = "instance-active"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceActive::RpkiSummary::~RpkiSummary()
{
}

bool Bgp::Instances::Instance::InstanceActive::RpkiSummary::has_data() const
{
    if (is_presence_container) return true;
    return servers.is_set
	|| ipv4roa_nets.is_set
	|| ipv4roa_paths.is_set
	|| ipv6roa_nets.is_set
	|| ipv6roa_paths.is_set;
}

bool Bgp::Instances::Instance::InstanceActive::RpkiSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(servers.yfilter)
	|| ydk::is_set(ipv4roa_nets.yfilter)
	|| ydk::is_set(ipv4roa_paths.yfilter)
	|| ydk::is_set(ipv6roa_nets.yfilter)
	|| ydk::is_set(ipv6roa_paths.yfilter);
}

std::string Bgp::Instances::Instance::InstanceActive::RpkiSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpki-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceActive::RpkiSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (servers.is_set || is_set(servers.yfilter)) leaf_name_data.push_back(servers.get_name_leafdata());
    if (ipv4roa_nets.is_set || is_set(ipv4roa_nets.yfilter)) leaf_name_data.push_back(ipv4roa_nets.get_name_leafdata());
    if (ipv4roa_paths.is_set || is_set(ipv4roa_paths.yfilter)) leaf_name_data.push_back(ipv4roa_paths.get_name_leafdata());
    if (ipv6roa_nets.is_set || is_set(ipv6roa_nets.yfilter)) leaf_name_data.push_back(ipv6roa_nets.get_name_leafdata());
    if (ipv6roa_paths.is_set || is_set(ipv6roa_paths.yfilter)) leaf_name_data.push_back(ipv6roa_paths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceActive::RpkiSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceActive::RpkiSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceActive::RpkiSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "servers")
    {
        servers = value;
        servers.value_namespace = name_space;
        servers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4roa-nets")
    {
        ipv4roa_nets = value;
        ipv4roa_nets.value_namespace = name_space;
        ipv4roa_nets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4roa-paths")
    {
        ipv4roa_paths = value;
        ipv4roa_paths.value_namespace = name_space;
        ipv4roa_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6roa-nets")
    {
        ipv6roa_nets = value;
        ipv6roa_nets.value_namespace = name_space;
        ipv6roa_nets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6roa-paths")
    {
        ipv6roa_paths = value;
        ipv6roa_paths.value_namespace = name_space;
        ipv6roa_paths.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceActive::RpkiSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "servers")
    {
        servers.yfilter = yfilter;
    }
    if(value_path == "ipv4roa-nets")
    {
        ipv4roa_nets.yfilter = yfilter;
    }
    if(value_path == "ipv4roa-paths")
    {
        ipv4roa_paths.yfilter = yfilter;
    }
    if(value_path == "ipv6roa-nets")
    {
        ipv6roa_nets.yfilter = yfilter;
    }
    if(value_path == "ipv6roa-paths")
    {
        ipv6roa_paths.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceActive::RpkiSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "servers" || name == "ipv4roa-nets" || name == "ipv4roa-paths" || name == "ipv6roa-nets" || name == "ipv6roa-paths")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::InstanceStandby()
    :
    update_generation_process(std::make_shared<Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess>())
    , vrfs(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs>())
    , default_vrf(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf>())
    , update_inbound_filter_process(std::make_shared<Bgp::Instances::Instance::InstanceStandby::UpdateInboundFilterProcess>())
    , attributes(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes>())
    , rt_entries(std::make_shared<Bgp::Instances::Instance::InstanceStandby::RtEntries>())
    , attribute_filter_groups(std::make_shared<Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups>())
    , rpki_server_list(std::make_shared<Bgp::Instances::Instance::InstanceStandby::RpkiServerList>())
    , rpki_routes(std::make_shared<Bgp::Instances::Instance::InstanceStandby::RpkiRoutes>())
    , update_inbound_error_process(std::make_shared<Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess>())
    , rpki_summary(std::make_shared<Bgp::Instances::Instance::InstanceStandby::RpkiSummary>())
{
    update_generation_process->parent = this;
    vrfs->parent = this;
    default_vrf->parent = this;
    update_inbound_filter_process->parent = this;
    attributes->parent = this;
    rt_entries->parent = this;
    attribute_filter_groups->parent = this;
    rpki_server_list->parent = this;
    rpki_routes->parent = this;
    update_inbound_error_process->parent = this;
    rpki_summary->parent = this;

    yang_name = "instance-standby"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::~InstanceStandby()
{
}

bool Bgp::Instances::Instance::InstanceStandby::has_data() const
{
    if (is_presence_container) return true;
    return (update_generation_process !=  nullptr && update_generation_process->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data())
	|| (default_vrf !=  nullptr && default_vrf->has_data())
	|| (update_inbound_filter_process !=  nullptr && update_inbound_filter_process->has_data())
	|| (attributes !=  nullptr && attributes->has_data())
	|| (rt_entries !=  nullptr && rt_entries->has_data())
	|| (attribute_filter_groups !=  nullptr && attribute_filter_groups->has_data())
	|| (rpki_server_list !=  nullptr && rpki_server_list->has_data())
	|| (rpki_routes !=  nullptr && rpki_routes->has_data())
	|| (update_inbound_error_process !=  nullptr && update_inbound_error_process->has_data())
	|| (rpki_summary !=  nullptr && rpki_summary->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::has_operation() const
{
    return is_set(yfilter)
	|| (update_generation_process !=  nullptr && update_generation_process->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation())
	|| (default_vrf !=  nullptr && default_vrf->has_operation())
	|| (update_inbound_filter_process !=  nullptr && update_inbound_filter_process->has_operation())
	|| (attributes !=  nullptr && attributes->has_operation())
	|| (rt_entries !=  nullptr && rt_entries->has_operation())
	|| (attribute_filter_groups !=  nullptr && attribute_filter_groups->has_operation())
	|| (rpki_server_list !=  nullptr && rpki_server_list->has_operation())
	|| (rpki_routes !=  nullptr && rpki_routes->has_operation())
	|| (update_inbound_error_process !=  nullptr && update_inbound_error_process->has_operation())
	|| (rpki_summary !=  nullptr && rpki_summary->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance-standby";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "update-generation-process")
    {
        if(update_generation_process == nullptr)
        {
            update_generation_process = std::make_shared<Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess>();
        }
        return update_generation_process;
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs == nullptr)
        {
            vrfs = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs>();
        }
        return vrfs;
    }

    if(child_yang_name == "default-vrf")
    {
        if(default_vrf == nullptr)
        {
            default_vrf = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf>();
        }
        return default_vrf;
    }

    if(child_yang_name == "update-inbound-filter-process")
    {
        if(update_inbound_filter_process == nullptr)
        {
            update_inbound_filter_process = std::make_shared<Bgp::Instances::Instance::InstanceStandby::UpdateInboundFilterProcess>();
        }
        return update_inbound_filter_process;
    }

    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Attributes>();
        }
        return attributes;
    }

    if(child_yang_name == "rt-entries")
    {
        if(rt_entries == nullptr)
        {
            rt_entries = std::make_shared<Bgp::Instances::Instance::InstanceStandby::RtEntries>();
        }
        return rt_entries;
    }

    if(child_yang_name == "attribute-filter-groups")
    {
        if(attribute_filter_groups == nullptr)
        {
            attribute_filter_groups = std::make_shared<Bgp::Instances::Instance::InstanceStandby::AttributeFilterGroups>();
        }
        return attribute_filter_groups;
    }

    if(child_yang_name == "rpki-server-list")
    {
        if(rpki_server_list == nullptr)
        {
            rpki_server_list = std::make_shared<Bgp::Instances::Instance::InstanceStandby::RpkiServerList>();
        }
        return rpki_server_list;
    }

    if(child_yang_name == "rpki-routes")
    {
        if(rpki_routes == nullptr)
        {
            rpki_routes = std::make_shared<Bgp::Instances::Instance::InstanceStandby::RpkiRoutes>();
        }
        return rpki_routes;
    }

    if(child_yang_name == "update-inbound-error-process")
    {
        if(update_inbound_error_process == nullptr)
        {
            update_inbound_error_process = std::make_shared<Bgp::Instances::Instance::InstanceStandby::UpdateInboundErrorProcess>();
        }
        return update_inbound_error_process;
    }

    if(child_yang_name == "rpki-summary")
    {
        if(rpki_summary == nullptr)
        {
            rpki_summary = std::make_shared<Bgp::Instances::Instance::InstanceStandby::RpkiSummary>();
        }
        return rpki_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(update_generation_process != nullptr)
    {
        _children["update-generation-process"] = update_generation_process;
    }

    if(vrfs != nullptr)
    {
        _children["vrfs"] = vrfs;
    }

    if(default_vrf != nullptr)
    {
        _children["default-vrf"] = default_vrf;
    }

    if(update_inbound_filter_process != nullptr)
    {
        _children["update-inbound-filter-process"] = update_inbound_filter_process;
    }

    if(attributes != nullptr)
    {
        _children["attributes"] = attributes;
    }

    if(rt_entries != nullptr)
    {
        _children["rt-entries"] = rt_entries;
    }

    if(attribute_filter_groups != nullptr)
    {
        _children["attribute-filter-groups"] = attribute_filter_groups;
    }

    if(rpki_server_list != nullptr)
    {
        _children["rpki-server-list"] = rpki_server_list;
    }

    if(rpki_routes != nullptr)
    {
        _children["rpki-routes"] = rpki_routes;
    }

    if(update_inbound_error_process != nullptr)
    {
        _children["update-inbound-error-process"] = update_inbound_error_process;
    }

    if(rpki_summary != nullptr)
    {
        _children["rpki-summary"] = rpki_summary;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-generation-process" || name == "vrfs" || name == "default-vrf" || name == "update-inbound-filter-process" || name == "attributes" || name == "rt-entries" || name == "attribute-filter-groups" || name == "rpki-server-list" || name == "rpki-routes" || name == "update-inbound-error-process" || name == "rpki-summary")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateGenerationProcess()
    :
    update_out_logging{YType::boolean, "update-out-logging"},
    current_update_limit_process{YType::uint32, "current-update-limit-process"},
    configured_update_limit_process{YType::uint32, "configured-update-limit-process"},
    update_out_queue_messages{YType::uint32, "update-out-queue-messages"},
    update_out_queue_size{YType::uint32, "update-out-queue-size"},
    update_throttled{YType::boolean, "update-throttled"}
        ,
    update_statistics(std::make_shared<Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics>())
    , update_address_family(this, {})
{
    update_statistics->parent = this;

    yang_name = "update-generation-process"; yang_parent_name = "instance-standby"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::~UpdateGenerationProcess()
{
}

bool Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<update_address_family.len(); index++)
    {
        if(update_address_family[index]->has_data())
            return true;
    }
    return update_out_logging.is_set
	|| current_update_limit_process.is_set
	|| configured_update_limit_process.is_set
	|| update_out_queue_messages.is_set
	|| update_out_queue_size.is_set
	|| update_throttled.is_set
	|| (update_statistics !=  nullptr && update_statistics->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::has_operation() const
{
    for (std::size_t index=0; index<update_address_family.len(); index++)
    {
        if(update_address_family[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(update_out_logging.yfilter)
	|| ydk::is_set(current_update_limit_process.yfilter)
	|| ydk::is_set(configured_update_limit_process.yfilter)
	|| ydk::is_set(update_out_queue_messages.yfilter)
	|| ydk::is_set(update_out_queue_size.yfilter)
	|| ydk::is_set(update_throttled.yfilter)
	|| (update_statistics !=  nullptr && update_statistics->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-generation-process";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_out_logging.is_set || is_set(update_out_logging.yfilter)) leaf_name_data.push_back(update_out_logging.get_name_leafdata());
    if (current_update_limit_process.is_set || is_set(current_update_limit_process.yfilter)) leaf_name_data.push_back(current_update_limit_process.get_name_leafdata());
    if (configured_update_limit_process.is_set || is_set(configured_update_limit_process.yfilter)) leaf_name_data.push_back(configured_update_limit_process.get_name_leafdata());
    if (update_out_queue_messages.is_set || is_set(update_out_queue_messages.yfilter)) leaf_name_data.push_back(update_out_queue_messages.get_name_leafdata());
    if (update_out_queue_size.is_set || is_set(update_out_queue_size.yfilter)) leaf_name_data.push_back(update_out_queue_size.get_name_leafdata());
    if (update_throttled.is_set || is_set(update_throttled.yfilter)) leaf_name_data.push_back(update_throttled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "update-statistics")
    {
        if(update_statistics == nullptr)
        {
            update_statistics = std::make_shared<Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics>();
        }
        return update_statistics;
    }

    if(child_yang_name == "update-address-family")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateAddressFamily>();
        ent_->parent = this;
        update_address_family.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(update_statistics != nullptr)
    {
        _children["update-statistics"] = update_statistics;
    }

    count_ = 0;
    for (auto ent_ : update_address_family.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update-out-logging")
    {
        update_out_logging = value;
        update_out_logging.value_namespace = name_space;
        update_out_logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-update-limit-process")
    {
        current_update_limit_process = value;
        current_update_limit_process.value_namespace = name_space;
        current_update_limit_process.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-update-limit-process")
    {
        configured_update_limit_process = value;
        configured_update_limit_process.value_namespace = name_space;
        configured_update_limit_process.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-out-queue-messages")
    {
        update_out_queue_messages = value;
        update_out_queue_messages.value_namespace = name_space;
        update_out_queue_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-out-queue-size")
    {
        update_out_queue_size = value;
        update_out_queue_size.value_namespace = name_space;
        update_out_queue_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-throttled")
    {
        update_throttled = value;
        update_throttled.value_namespace = name_space;
        update_throttled.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update-out-logging")
    {
        update_out_logging.yfilter = yfilter;
    }
    if(value_path == "current-update-limit-process")
    {
        current_update_limit_process.yfilter = yfilter;
    }
    if(value_path == "configured-update-limit-process")
    {
        configured_update_limit_process.yfilter = yfilter;
    }
    if(value_path == "update-out-queue-messages")
    {
        update_out_queue_messages.yfilter = yfilter;
    }
    if(value_path == "update-out-queue-size")
    {
        update_out_queue_size.yfilter = yfilter;
    }
    if(value_path == "update-throttled")
    {
        update_throttled.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-statistics" || name == "update-address-family" || name == "update-out-logging" || name == "current-update-limit-process" || name == "configured-update-limit-process" || name == "update-out-queue-messages" || name == "update-out-queue-size" || name == "update-throttled")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::UpdateStatistics()
    :
    update_out_queue_messages_high{YType::uint32, "update-out-queue-messages-high"},
    update_out_queue_messages_cumulative{YType::uint32, "update-out-queue-messages-cumulative"},
    update_out_queue_messages_discarded{YType::uint32, "update-out-queue-messages-discarded"},
    update_out_queue_messages_cleared{YType::uint32, "update-out-queue-messages-cleared"},
    update_out_queue_size_high{YType::uint32, "update-out-queue-size-high"},
    update_out_queue_size_cumulative{YType::uint64, "update-out-queue-size-cumulative"},
    update_out_queue_size_discarded{YType::uint64, "update-out-queue-size-discarded"},
    update_out_queue_size_cleared{YType::uint64, "update-out-queue-size-cleared"},
    last_update_discard_age{YType::uint32, "last-update-discard-age"},
    last_update_cleard_age{YType::uint32, "last-update-cleard-age"},
    update_throttle_count{YType::uint32, "update-throttle-count"},
    last_update_throttle_age{YType::uint32, "last-update-throttle-age"},
    update_recovery_count{YType::uint32, "update-recovery-count"},
    last_update_recovery_age{YType::uint32, "last-update-recovery-age"},
    update_memory_allocation_fail_count{YType::uint32, "update-memory-allocation-fail-count"},
    last_update_memory_allocation_fail_age{YType::uint32, "last-update-memory-allocation-fail-age"}
        ,
    last_update_discard_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateDiscardTimestamp>())
    , last_update_cleared_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateClearedTimestamp>())
    , last_update_throttle_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateThrottleTimestamp>())
    , last_update_recovery_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateRecoveryTimestamp>())
    , last_update_memory_allocation_fail_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp>())
{
    last_update_discard_timestamp->parent = this;
    last_update_cleared_timestamp->parent = this;
    last_update_throttle_timestamp->parent = this;
    last_update_recovery_timestamp->parent = this;
    last_update_memory_allocation_fail_timestamp->parent = this;

    yang_name = "update-statistics"; yang_parent_name = "update-generation-process"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::~UpdateStatistics()
{
}

bool Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::has_data() const
{
    if (is_presence_container) return true;
    return update_out_queue_messages_high.is_set
	|| update_out_queue_messages_cumulative.is_set
	|| update_out_queue_messages_discarded.is_set
	|| update_out_queue_messages_cleared.is_set
	|| update_out_queue_size_high.is_set
	|| update_out_queue_size_cumulative.is_set
	|| update_out_queue_size_discarded.is_set
	|| update_out_queue_size_cleared.is_set
	|| last_update_discard_age.is_set
	|| last_update_cleard_age.is_set
	|| update_throttle_count.is_set
	|| last_update_throttle_age.is_set
	|| update_recovery_count.is_set
	|| last_update_recovery_age.is_set
	|| update_memory_allocation_fail_count.is_set
	|| last_update_memory_allocation_fail_age.is_set
	|| (last_update_discard_timestamp !=  nullptr && last_update_discard_timestamp->has_data())
	|| (last_update_cleared_timestamp !=  nullptr && last_update_cleared_timestamp->has_data())
	|| (last_update_throttle_timestamp !=  nullptr && last_update_throttle_timestamp->has_data())
	|| (last_update_recovery_timestamp !=  nullptr && last_update_recovery_timestamp->has_data())
	|| (last_update_memory_allocation_fail_timestamp !=  nullptr && last_update_memory_allocation_fail_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(update_out_queue_messages_high.yfilter)
	|| ydk::is_set(update_out_queue_messages_cumulative.yfilter)
	|| ydk::is_set(update_out_queue_messages_discarded.yfilter)
	|| ydk::is_set(update_out_queue_messages_cleared.yfilter)
	|| ydk::is_set(update_out_queue_size_high.yfilter)
	|| ydk::is_set(update_out_queue_size_cumulative.yfilter)
	|| ydk::is_set(update_out_queue_size_discarded.yfilter)
	|| ydk::is_set(update_out_queue_size_cleared.yfilter)
	|| ydk::is_set(last_update_discard_age.yfilter)
	|| ydk::is_set(last_update_cleard_age.yfilter)
	|| ydk::is_set(update_throttle_count.yfilter)
	|| ydk::is_set(last_update_throttle_age.yfilter)
	|| ydk::is_set(update_recovery_count.yfilter)
	|| ydk::is_set(last_update_recovery_age.yfilter)
	|| ydk::is_set(update_memory_allocation_fail_count.yfilter)
	|| ydk::is_set(last_update_memory_allocation_fail_age.yfilter)
	|| (last_update_discard_timestamp !=  nullptr && last_update_discard_timestamp->has_operation())
	|| (last_update_cleared_timestamp !=  nullptr && last_update_cleared_timestamp->has_operation())
	|| (last_update_throttle_timestamp !=  nullptr && last_update_throttle_timestamp->has_operation())
	|| (last_update_recovery_timestamp !=  nullptr && last_update_recovery_timestamp->has_operation())
	|| (last_update_memory_allocation_fail_timestamp !=  nullptr && last_update_memory_allocation_fail_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_out_queue_messages_high.is_set || is_set(update_out_queue_messages_high.yfilter)) leaf_name_data.push_back(update_out_queue_messages_high.get_name_leafdata());
    if (update_out_queue_messages_cumulative.is_set || is_set(update_out_queue_messages_cumulative.yfilter)) leaf_name_data.push_back(update_out_queue_messages_cumulative.get_name_leafdata());
    if (update_out_queue_messages_discarded.is_set || is_set(update_out_queue_messages_discarded.yfilter)) leaf_name_data.push_back(update_out_queue_messages_discarded.get_name_leafdata());
    if (update_out_queue_messages_cleared.is_set || is_set(update_out_queue_messages_cleared.yfilter)) leaf_name_data.push_back(update_out_queue_messages_cleared.get_name_leafdata());
    if (update_out_queue_size_high.is_set || is_set(update_out_queue_size_high.yfilter)) leaf_name_data.push_back(update_out_queue_size_high.get_name_leafdata());
    if (update_out_queue_size_cumulative.is_set || is_set(update_out_queue_size_cumulative.yfilter)) leaf_name_data.push_back(update_out_queue_size_cumulative.get_name_leafdata());
    if (update_out_queue_size_discarded.is_set || is_set(update_out_queue_size_discarded.yfilter)) leaf_name_data.push_back(update_out_queue_size_discarded.get_name_leafdata());
    if (update_out_queue_size_cleared.is_set || is_set(update_out_queue_size_cleared.yfilter)) leaf_name_data.push_back(update_out_queue_size_cleared.get_name_leafdata());
    if (last_update_discard_age.is_set || is_set(last_update_discard_age.yfilter)) leaf_name_data.push_back(last_update_discard_age.get_name_leafdata());
    if (last_update_cleard_age.is_set || is_set(last_update_cleard_age.yfilter)) leaf_name_data.push_back(last_update_cleard_age.get_name_leafdata());
    if (update_throttle_count.is_set || is_set(update_throttle_count.yfilter)) leaf_name_data.push_back(update_throttle_count.get_name_leafdata());
    if (last_update_throttle_age.is_set || is_set(last_update_throttle_age.yfilter)) leaf_name_data.push_back(last_update_throttle_age.get_name_leafdata());
    if (update_recovery_count.is_set || is_set(update_recovery_count.yfilter)) leaf_name_data.push_back(update_recovery_count.get_name_leafdata());
    if (last_update_recovery_age.is_set || is_set(last_update_recovery_age.yfilter)) leaf_name_data.push_back(last_update_recovery_age.get_name_leafdata());
    if (update_memory_allocation_fail_count.is_set || is_set(update_memory_allocation_fail_count.yfilter)) leaf_name_data.push_back(update_memory_allocation_fail_count.get_name_leafdata());
    if (last_update_memory_allocation_fail_age.is_set || is_set(last_update_memory_allocation_fail_age.yfilter)) leaf_name_data.push_back(last_update_memory_allocation_fail_age.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-update-discard-timestamp")
    {
        if(last_update_discard_timestamp == nullptr)
        {
            last_update_discard_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateDiscardTimestamp>();
        }
        return last_update_discard_timestamp;
    }

    if(child_yang_name == "last-update-cleared-timestamp")
    {
        if(last_update_cleared_timestamp == nullptr)
        {
            last_update_cleared_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateClearedTimestamp>();
        }
        return last_update_cleared_timestamp;
    }

    if(child_yang_name == "last-update-throttle-timestamp")
    {
        if(last_update_throttle_timestamp == nullptr)
        {
            last_update_throttle_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateThrottleTimestamp>();
        }
        return last_update_throttle_timestamp;
    }

    if(child_yang_name == "last-update-recovery-timestamp")
    {
        if(last_update_recovery_timestamp == nullptr)
        {
            last_update_recovery_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateRecoveryTimestamp>();
        }
        return last_update_recovery_timestamp;
    }

    if(child_yang_name == "last-update-memory-allocation-fail-timestamp")
    {
        if(last_update_memory_allocation_fail_timestamp == nullptr)
        {
            last_update_memory_allocation_fail_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp>();
        }
        return last_update_memory_allocation_fail_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(last_update_discard_timestamp != nullptr)
    {
        _children["last-update-discard-timestamp"] = last_update_discard_timestamp;
    }

    if(last_update_cleared_timestamp != nullptr)
    {
        _children["last-update-cleared-timestamp"] = last_update_cleared_timestamp;
    }

    if(last_update_throttle_timestamp != nullptr)
    {
        _children["last-update-throttle-timestamp"] = last_update_throttle_timestamp;
    }

    if(last_update_recovery_timestamp != nullptr)
    {
        _children["last-update-recovery-timestamp"] = last_update_recovery_timestamp;
    }

    if(last_update_memory_allocation_fail_timestamp != nullptr)
    {
        _children["last-update-memory-allocation-fail-timestamp"] = last_update_memory_allocation_fail_timestamp;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update-out-queue-messages-high")
    {
        update_out_queue_messages_high = value;
        update_out_queue_messages_high.value_namespace = name_space;
        update_out_queue_messages_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-out-queue-messages-cumulative")
    {
        update_out_queue_messages_cumulative = value;
        update_out_queue_messages_cumulative.value_namespace = name_space;
        update_out_queue_messages_cumulative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-out-queue-messages-discarded")
    {
        update_out_queue_messages_discarded = value;
        update_out_queue_messages_discarded.value_namespace = name_space;
        update_out_queue_messages_discarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-out-queue-messages-cleared")
    {
        update_out_queue_messages_cleared = value;
        update_out_queue_messages_cleared.value_namespace = name_space;
        update_out_queue_messages_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-out-queue-size-high")
    {
        update_out_queue_size_high = value;
        update_out_queue_size_high.value_namespace = name_space;
        update_out_queue_size_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-out-queue-size-cumulative")
    {
        update_out_queue_size_cumulative = value;
        update_out_queue_size_cumulative.value_namespace = name_space;
        update_out_queue_size_cumulative.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-out-queue-size-discarded")
    {
        update_out_queue_size_discarded = value;
        update_out_queue_size_discarded.value_namespace = name_space;
        update_out_queue_size_discarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-out-queue-size-cleared")
    {
        update_out_queue_size_cleared = value;
        update_out_queue_size_cleared.value_namespace = name_space;
        update_out_queue_size_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-discard-age")
    {
        last_update_discard_age = value;
        last_update_discard_age.value_namespace = name_space;
        last_update_discard_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-cleard-age")
    {
        last_update_cleard_age = value;
        last_update_cleard_age.value_namespace = name_space;
        last_update_cleard_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-throttle-count")
    {
        update_throttle_count = value;
        update_throttle_count.value_namespace = name_space;
        update_throttle_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-throttle-age")
    {
        last_update_throttle_age = value;
        last_update_throttle_age.value_namespace = name_space;
        last_update_throttle_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-recovery-count")
    {
        update_recovery_count = value;
        update_recovery_count.value_namespace = name_space;
        update_recovery_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-recovery-age")
    {
        last_update_recovery_age = value;
        last_update_recovery_age.value_namespace = name_space;
        last_update_recovery_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-memory-allocation-fail-count")
    {
        update_memory_allocation_fail_count = value;
        update_memory_allocation_fail_count.value_namespace = name_space;
        update_memory_allocation_fail_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-memory-allocation-fail-age")
    {
        last_update_memory_allocation_fail_age = value;
        last_update_memory_allocation_fail_age.value_namespace = name_space;
        last_update_memory_allocation_fail_age.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update-out-queue-messages-high")
    {
        update_out_queue_messages_high.yfilter = yfilter;
    }
    if(value_path == "update-out-queue-messages-cumulative")
    {
        update_out_queue_messages_cumulative.yfilter = yfilter;
    }
    if(value_path == "update-out-queue-messages-discarded")
    {
        update_out_queue_messages_discarded.yfilter = yfilter;
    }
    if(value_path == "update-out-queue-messages-cleared")
    {
        update_out_queue_messages_cleared.yfilter = yfilter;
    }
    if(value_path == "update-out-queue-size-high")
    {
        update_out_queue_size_high.yfilter = yfilter;
    }
    if(value_path == "update-out-queue-size-cumulative")
    {
        update_out_queue_size_cumulative.yfilter = yfilter;
    }
    if(value_path == "update-out-queue-size-discarded")
    {
        update_out_queue_size_discarded.yfilter = yfilter;
    }
    if(value_path == "update-out-queue-size-cleared")
    {
        update_out_queue_size_cleared.yfilter = yfilter;
    }
    if(value_path == "last-update-discard-age")
    {
        last_update_discard_age.yfilter = yfilter;
    }
    if(value_path == "last-update-cleard-age")
    {
        last_update_cleard_age.yfilter = yfilter;
    }
    if(value_path == "update-throttle-count")
    {
        update_throttle_count.yfilter = yfilter;
    }
    if(value_path == "last-update-throttle-age")
    {
        last_update_throttle_age.yfilter = yfilter;
    }
    if(value_path == "update-recovery-count")
    {
        update_recovery_count.yfilter = yfilter;
    }
    if(value_path == "last-update-recovery-age")
    {
        last_update_recovery_age.yfilter = yfilter;
    }
    if(value_path == "update-memory-allocation-fail-count")
    {
        update_memory_allocation_fail_count.yfilter = yfilter;
    }
    if(value_path == "last-update-memory-allocation-fail-age")
    {
        last_update_memory_allocation_fail_age.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-update-discard-timestamp" || name == "last-update-cleared-timestamp" || name == "last-update-throttle-timestamp" || name == "last-update-recovery-timestamp" || name == "last-update-memory-allocation-fail-timestamp" || name == "update-out-queue-messages-high" || name == "update-out-queue-messages-cumulative" || name == "update-out-queue-messages-discarded" || name == "update-out-queue-messages-cleared" || name == "update-out-queue-size-high" || name == "update-out-queue-size-cumulative" || name == "update-out-queue-size-discarded" || name == "update-out-queue-size-cleared" || name == "last-update-discard-age" || name == "last-update-cleard-age" || name == "update-throttle-count" || name == "last-update-throttle-age" || name == "update-recovery-count" || name == "last-update-recovery-age" || name == "update-memory-allocation-fail-count" || name == "last-update-memory-allocation-fail-age")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateDiscardTimestamp::LastUpdateDiscardTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-update-discard-timestamp"; yang_parent_name = "update-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateDiscardTimestamp::~LastUpdateDiscardTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateDiscardTimestamp::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateDiscardTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateDiscardTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-discard-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateDiscardTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateDiscardTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateDiscardTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateDiscardTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateDiscardTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateDiscardTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateClearedTimestamp::LastUpdateClearedTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-update-cleared-timestamp"; yang_parent_name = "update-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateClearedTimestamp::~LastUpdateClearedTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateClearedTimestamp::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateClearedTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateClearedTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-cleared-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateClearedTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateClearedTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateClearedTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateClearedTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateClearedTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateClearedTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateThrottleTimestamp::LastUpdateThrottleTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-update-throttle-timestamp"; yang_parent_name = "update-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateThrottleTimestamp::~LastUpdateThrottleTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateThrottleTimestamp::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateThrottleTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateThrottleTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-throttle-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateThrottleTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateThrottleTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateThrottleTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateThrottleTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateThrottleTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateThrottleTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateRecoveryTimestamp::LastUpdateRecoveryTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-update-recovery-timestamp"; yang_parent_name = "update-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateRecoveryTimestamp::~LastUpdateRecoveryTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateRecoveryTimestamp::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateRecoveryTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateRecoveryTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-recovery-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateRecoveryTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateRecoveryTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateRecoveryTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateRecoveryTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateRecoveryTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateRecoveryTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp::LastUpdateMemoryAllocationFailTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-update-memory-allocation-fail-timestamp"; yang_parent_name = "update-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp::~LastUpdateMemoryAllocationFailTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-memory-allocation-fail-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateStatistics::LastUpdateMemoryAllocationFailTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateAddressFamily::UpdateAddressFamily()
    :
    update_group_af_name{YType::enumeration, "update-group-af-name"},
    current_update_limit_af{YType::uint32, "current-update-limit-af"},
    update_out_queue_messages{YType::uint32, "update-out-queue-messages"},
    update_out_queue_size{YType::uint32, "update-out-queue-size"},
    update_throttled{YType::boolean, "update-throttled"},
    update_update_group_count{YType::uint32, "update-update-group-count"},
    update_sub_group_count{YType::uint32, "update-sub-group-count"},
    sub_group_throttled_count{YType::uint32, "sub-group-throttled-count"},
    refresh_sub_group_count{YType::uint32, "refresh-sub-group-count"},
    refresh_sub_group_throttled_count{YType::uint32, "refresh-sub-group-throttled-count"},
    filter_group_count{YType::uint32, "filter-group-count"},
    neighbor_count{YType::uint32, "neighbor-count"}
{

    yang_name = "update-address-family"; yang_parent_name = "update-generation-process"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateAddressFamily::~UpdateAddressFamily()
{
}

bool Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateAddressFamily::has_data() const
{
    if (is_presence_container) return true;
    return update_group_af_name.is_set
	|| current_update_limit_af.is_set
	|| update_out_queue_messages.is_set
	|| update_out_queue_size.is_set
	|| update_throttled.is_set
	|| update_update_group_count.is_set
	|| update_sub_group_count.is_set
	|| sub_group_throttled_count.is_set
	|| refresh_sub_group_count.is_set
	|| refresh_sub_group_throttled_count.is_set
	|| filter_group_count.is_set
	|| neighbor_count.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateAddressFamily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(update_group_af_name.yfilter)
	|| ydk::is_set(current_update_limit_af.yfilter)
	|| ydk::is_set(update_out_queue_messages.yfilter)
	|| ydk::is_set(update_out_queue_size.yfilter)
	|| ydk::is_set(update_throttled.yfilter)
	|| ydk::is_set(update_update_group_count.yfilter)
	|| ydk::is_set(update_sub_group_count.yfilter)
	|| ydk::is_set(sub_group_throttled_count.yfilter)
	|| ydk::is_set(refresh_sub_group_count.yfilter)
	|| ydk::is_set(refresh_sub_group_throttled_count.yfilter)
	|| ydk::is_set(filter_group_count.yfilter)
	|| ydk::is_set(neighbor_count.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateAddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-address-family";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateAddressFamily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_group_af_name.is_set || is_set(update_group_af_name.yfilter)) leaf_name_data.push_back(update_group_af_name.get_name_leafdata());
    if (current_update_limit_af.is_set || is_set(current_update_limit_af.yfilter)) leaf_name_data.push_back(current_update_limit_af.get_name_leafdata());
    if (update_out_queue_messages.is_set || is_set(update_out_queue_messages.yfilter)) leaf_name_data.push_back(update_out_queue_messages.get_name_leafdata());
    if (update_out_queue_size.is_set || is_set(update_out_queue_size.yfilter)) leaf_name_data.push_back(update_out_queue_size.get_name_leafdata());
    if (update_throttled.is_set || is_set(update_throttled.yfilter)) leaf_name_data.push_back(update_throttled.get_name_leafdata());
    if (update_update_group_count.is_set || is_set(update_update_group_count.yfilter)) leaf_name_data.push_back(update_update_group_count.get_name_leafdata());
    if (update_sub_group_count.is_set || is_set(update_sub_group_count.yfilter)) leaf_name_data.push_back(update_sub_group_count.get_name_leafdata());
    if (sub_group_throttled_count.is_set || is_set(sub_group_throttled_count.yfilter)) leaf_name_data.push_back(sub_group_throttled_count.get_name_leafdata());
    if (refresh_sub_group_count.is_set || is_set(refresh_sub_group_count.yfilter)) leaf_name_data.push_back(refresh_sub_group_count.get_name_leafdata());
    if (refresh_sub_group_throttled_count.is_set || is_set(refresh_sub_group_throttled_count.yfilter)) leaf_name_data.push_back(refresh_sub_group_throttled_count.get_name_leafdata());
    if (filter_group_count.is_set || is_set(filter_group_count.yfilter)) leaf_name_data.push_back(filter_group_count.get_name_leafdata());
    if (neighbor_count.is_set || is_set(neighbor_count.yfilter)) leaf_name_data.push_back(neighbor_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateAddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateAddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateAddressFamily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update-group-af-name")
    {
        update_group_af_name = value;
        update_group_af_name.value_namespace = name_space;
        update_group_af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-update-limit-af")
    {
        current_update_limit_af = value;
        current_update_limit_af.value_namespace = name_space;
        current_update_limit_af.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-out-queue-messages")
    {
        update_out_queue_messages = value;
        update_out_queue_messages.value_namespace = name_space;
        update_out_queue_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-out-queue-size")
    {
        update_out_queue_size = value;
        update_out_queue_size.value_namespace = name_space;
        update_out_queue_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-throttled")
    {
        update_throttled = value;
        update_throttled.value_namespace = name_space;
        update_throttled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-update-group-count")
    {
        update_update_group_count = value;
        update_update_group_count.value_namespace = name_space;
        update_update_group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-sub-group-count")
    {
        update_sub_group_count = value;
        update_sub_group_count.value_namespace = name_space;
        update_sub_group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sub-group-throttled-count")
    {
        sub_group_throttled_count = value;
        sub_group_throttled_count.value_namespace = name_space;
        sub_group_throttled_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh-sub-group-count")
    {
        refresh_sub_group_count = value;
        refresh_sub_group_count.value_namespace = name_space;
        refresh_sub_group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "refresh-sub-group-throttled-count")
    {
        refresh_sub_group_throttled_count = value;
        refresh_sub_group_throttled_count.value_namespace = name_space;
        refresh_sub_group_throttled_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "filter-group-count")
    {
        filter_group_count = value;
        filter_group_count.value_namespace = name_space;
        filter_group_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count = value;
        neighbor_count.value_namespace = name_space;
        neighbor_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateAddressFamily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update-group-af-name")
    {
        update_group_af_name.yfilter = yfilter;
    }
    if(value_path == "current-update-limit-af")
    {
        current_update_limit_af.yfilter = yfilter;
    }
    if(value_path == "update-out-queue-messages")
    {
        update_out_queue_messages.yfilter = yfilter;
    }
    if(value_path == "update-out-queue-size")
    {
        update_out_queue_size.yfilter = yfilter;
    }
    if(value_path == "update-throttled")
    {
        update_throttled.yfilter = yfilter;
    }
    if(value_path == "update-update-group-count")
    {
        update_update_group_count.yfilter = yfilter;
    }
    if(value_path == "update-sub-group-count")
    {
        update_sub_group_count.yfilter = yfilter;
    }
    if(value_path == "sub-group-throttled-count")
    {
        sub_group_throttled_count.yfilter = yfilter;
    }
    if(value_path == "refresh-sub-group-count")
    {
        refresh_sub_group_count.yfilter = yfilter;
    }
    if(value_path == "refresh-sub-group-throttled-count")
    {
        refresh_sub_group_throttled_count.yfilter = yfilter;
    }
    if(value_path == "filter-group-count")
    {
        filter_group_count.yfilter = yfilter;
    }
    if(value_path == "neighbor-count")
    {
        neighbor_count.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::UpdateGenerationProcess::UpdateAddressFamily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-group-af-name" || name == "current-update-limit-af" || name == "update-out-queue-messages" || name == "update-out-queue-size" || name == "update-throttled" || name == "update-update-group-count" || name == "update-sub-group-count" || name == "sub-group-throttled-count" || name == "refresh-sub-group-count" || name == "refresh-sub-group-throttled-count" || name == "filter-group-count" || name == "neighbor-count")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrfs()
    :
    vrf(this, {"vrf_name"})
{

    yang_name = "vrfs"; yang_parent_name = "instance-standby"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::~Vrfs()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.len(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf>();
        ent_->parent = this;
        vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"}
        ,
    update_inbound_error_vrf(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorVrf>())
    , afs(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs>())
    , information(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Information>())
    , update_inbound_filter_vrf(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterVrf>())
    , postits(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits>())
    , global_process_info(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo>())
    , update_inbound_error_neighbors(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors>())
    , update_inbound_filter_neighbors(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors>())
    , bmp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp>())
    , process_info(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo>())
    , sessions(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions>())
    , neighbors(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors>())
    , next_hop_vrf(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NextHopVrf>())
    , neighbor_ranges(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges>())
    , message_logs(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs>())
{
    update_inbound_error_vrf->parent = this;
    afs->parent = this;
    information->parent = this;
    update_inbound_filter_vrf->parent = this;
    postits->parent = this;
    global_process_info->parent = this;
    update_inbound_error_neighbors->parent = this;
    update_inbound_filter_neighbors->parent = this;
    bmp->parent = this;
    process_info->parent = this;
    sessions->parent = this;
    neighbors->parent = this;
    next_hop_vrf->parent = this;
    neighbor_ranges->parent = this;
    message_logs->parent = this;

    yang_name = "vrf"; yang_parent_name = "vrfs"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::~Vrf()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| (update_inbound_error_vrf !=  nullptr && update_inbound_error_vrf->has_data())
	|| (afs !=  nullptr && afs->has_data())
	|| (information !=  nullptr && information->has_data())
	|| (update_inbound_filter_vrf !=  nullptr && update_inbound_filter_vrf->has_data())
	|| (postits !=  nullptr && postits->has_data())
	|| (global_process_info !=  nullptr && global_process_info->has_data())
	|| (update_inbound_error_neighbors !=  nullptr && update_inbound_error_neighbors->has_data())
	|| (update_inbound_filter_neighbors !=  nullptr && update_inbound_filter_neighbors->has_data())
	|| (bmp !=  nullptr && bmp->has_data())
	|| (process_info !=  nullptr && process_info->has_data())
	|| (sessions !=  nullptr && sessions->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (next_hop_vrf !=  nullptr && next_hop_vrf->has_data())
	|| (neighbor_ranges !=  nullptr && neighbor_ranges->has_data())
	|| (message_logs !=  nullptr && message_logs->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (update_inbound_error_vrf !=  nullptr && update_inbound_error_vrf->has_operation())
	|| (afs !=  nullptr && afs->has_operation())
	|| (information !=  nullptr && information->has_operation())
	|| (update_inbound_filter_vrf !=  nullptr && update_inbound_filter_vrf->has_operation())
	|| (postits !=  nullptr && postits->has_operation())
	|| (global_process_info !=  nullptr && global_process_info->has_operation())
	|| (update_inbound_error_neighbors !=  nullptr && update_inbound_error_neighbors->has_operation())
	|| (update_inbound_filter_neighbors !=  nullptr && update_inbound_filter_neighbors->has_operation())
	|| (bmp !=  nullptr && bmp->has_operation())
	|| (process_info !=  nullptr && process_info->has_operation())
	|| (sessions !=  nullptr && sessions->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (next_hop_vrf !=  nullptr && next_hop_vrf->has_operation())
	|| (neighbor_ranges !=  nullptr && neighbor_ranges->has_operation())
	|| (message_logs !=  nullptr && message_logs->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "update-inbound-error-vrf")
    {
        if(update_inbound_error_vrf == nullptr)
        {
            update_inbound_error_vrf = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorVrf>();
        }
        return update_inbound_error_vrf;
    }

    if(child_yang_name == "afs")
    {
        if(afs == nullptr)
        {
            afs = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs>();
        }
        return afs;
    }

    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Information>();
        }
        return information;
    }

    if(child_yang_name == "update-inbound-filter-vrf")
    {
        if(update_inbound_filter_vrf == nullptr)
        {
            update_inbound_filter_vrf = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterVrf>();
        }
        return update_inbound_filter_vrf;
    }

    if(child_yang_name == "postits")
    {
        if(postits == nullptr)
        {
            postits = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits>();
        }
        return postits;
    }

    if(child_yang_name == "global-process-info")
    {
        if(global_process_info == nullptr)
        {
            global_process_info = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo>();
        }
        return global_process_info;
    }

    if(child_yang_name == "update-inbound-error-neighbors")
    {
        if(update_inbound_error_neighbors == nullptr)
        {
            update_inbound_error_neighbors = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors>();
        }
        return update_inbound_error_neighbors;
    }

    if(child_yang_name == "update-inbound-filter-neighbors")
    {
        if(update_inbound_filter_neighbors == nullptr)
        {
            update_inbound_filter_neighbors = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors>();
        }
        return update_inbound_filter_neighbors;
    }

    if(child_yang_name == "bmp")
    {
        if(bmp == nullptr)
        {
            bmp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp>();
        }
        return bmp;
    }

    if(child_yang_name == "process-info")
    {
        if(process_info == nullptr)
        {
            process_info = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::ProcessInfo>();
        }
        return process_info;
    }

    if(child_yang_name == "sessions")
    {
        if(sessions == nullptr)
        {
            sessions = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Sessions>();
        }
        return sessions;
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Neighbors>();
        }
        return neighbors;
    }

    if(child_yang_name == "next-hop-vrf")
    {
        if(next_hop_vrf == nullptr)
        {
            next_hop_vrf = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NextHopVrf>();
        }
        return next_hop_vrf;
    }

    if(child_yang_name == "neighbor-ranges")
    {
        if(neighbor_ranges == nullptr)
        {
            neighbor_ranges = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::NeighborRanges>();
        }
        return neighbor_ranges;
    }

    if(child_yang_name == "message-logs")
    {
        if(message_logs == nullptr)
        {
            message_logs = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::MessageLogs>();
        }
        return message_logs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(update_inbound_error_vrf != nullptr)
    {
        _children["update-inbound-error-vrf"] = update_inbound_error_vrf;
    }

    if(afs != nullptr)
    {
        _children["afs"] = afs;
    }

    if(information != nullptr)
    {
        _children["information"] = information;
    }

    if(update_inbound_filter_vrf != nullptr)
    {
        _children["update-inbound-filter-vrf"] = update_inbound_filter_vrf;
    }

    if(postits != nullptr)
    {
        _children["postits"] = postits;
    }

    if(global_process_info != nullptr)
    {
        _children["global-process-info"] = global_process_info;
    }

    if(update_inbound_error_neighbors != nullptr)
    {
        _children["update-inbound-error-neighbors"] = update_inbound_error_neighbors;
    }

    if(update_inbound_filter_neighbors != nullptr)
    {
        _children["update-inbound-filter-neighbors"] = update_inbound_filter_neighbors;
    }

    if(bmp != nullptr)
    {
        _children["bmp"] = bmp;
    }

    if(process_info != nullptr)
    {
        _children["process-info"] = process_info;
    }

    if(sessions != nullptr)
    {
        _children["sessions"] = sessions;
    }

    if(neighbors != nullptr)
    {
        _children["neighbors"] = neighbors;
    }

    if(next_hop_vrf != nullptr)
    {
        _children["next-hop-vrf"] = next_hop_vrf;
    }

    if(neighbor_ranges != nullptr)
    {
        _children["neighbor-ranges"] = neighbor_ranges;
    }

    if(message_logs != nullptr)
    {
        _children["message-logs"] = message_logs;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-inbound-error-vrf" || name == "afs" || name == "information" || name == "update-inbound-filter-vrf" || name == "postits" || name == "global-process-info" || name == "update-inbound-error-neighbors" || name == "update-inbound-filter-neighbors" || name == "bmp" || name == "process-info" || name == "sessions" || name == "neighbors" || name == "next-hop-vrf" || name == "neighbor-ranges" || name == "message-logs" || name == "vrf-name")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorVrf::UpdateInboundErrorVrf()
    :
    update_vrf_name{YType::str, "update-vrf-name"},
    update_malformed_message_count{YType::uint32, "update-malformed-message-count"},
    update_malformed_neighbor_count{YType::uint32, "update-malformed-neighbor-count"},
    last_update_malformed_age{YType::uint32, "last-update-malformed-age"}
        ,
    last_update_malformed_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp>())
{
    last_update_malformed_timestamp->parent = this;

    yang_name = "update-inbound-error-vrf"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorVrf::~UpdateInboundErrorVrf()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorVrf::has_data() const
{
    if (is_presence_container) return true;
    return update_vrf_name.is_set
	|| update_malformed_message_count.is_set
	|| update_malformed_neighbor_count.is_set
	|| last_update_malformed_age.is_set
	|| (last_update_malformed_timestamp !=  nullptr && last_update_malformed_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorVrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(update_vrf_name.yfilter)
	|| ydk::is_set(update_malformed_message_count.yfilter)
	|| ydk::is_set(update_malformed_neighbor_count.yfilter)
	|| ydk::is_set(last_update_malformed_age.yfilter)
	|| (last_update_malformed_timestamp !=  nullptr && last_update_malformed_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-inbound-error-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_vrf_name.is_set || is_set(update_vrf_name.yfilter)) leaf_name_data.push_back(update_vrf_name.get_name_leafdata());
    if (update_malformed_message_count.is_set || is_set(update_malformed_message_count.yfilter)) leaf_name_data.push_back(update_malformed_message_count.get_name_leafdata());
    if (update_malformed_neighbor_count.is_set || is_set(update_malformed_neighbor_count.yfilter)) leaf_name_data.push_back(update_malformed_neighbor_count.get_name_leafdata());
    if (last_update_malformed_age.is_set || is_set(last_update_malformed_age.yfilter)) leaf_name_data.push_back(last_update_malformed_age.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-update-malformed-timestamp")
    {
        if(last_update_malformed_timestamp == nullptr)
        {
            last_update_malformed_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp>();
        }
        return last_update_malformed_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(last_update_malformed_timestamp != nullptr)
    {
        _children["last-update-malformed-timestamp"] = last_update_malformed_timestamp;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update-vrf-name")
    {
        update_vrf_name = value;
        update_vrf_name.value_namespace = name_space;
        update_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-malformed-message-count")
    {
        update_malformed_message_count = value;
        update_malformed_message_count.value_namespace = name_space;
        update_malformed_message_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-malformed-neighbor-count")
    {
        update_malformed_neighbor_count = value;
        update_malformed_neighbor_count.value_namespace = name_space;
        update_malformed_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-malformed-age")
    {
        last_update_malformed_age = value;
        last_update_malformed_age.value_namespace = name_space;
        last_update_malformed_age.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update-vrf-name")
    {
        update_vrf_name.yfilter = yfilter;
    }
    if(value_path == "update-malformed-message-count")
    {
        update_malformed_message_count.yfilter = yfilter;
    }
    if(value_path == "update-malformed-neighbor-count")
    {
        update_malformed_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "last-update-malformed-age")
    {
        last_update_malformed_age.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-update-malformed-timestamp" || name == "update-vrf-name" || name == "update-malformed-message-count" || name == "update-malformed-neighbor-count" || name == "last-update-malformed-age")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::LastUpdateMalformedTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-update-malformed-timestamp"; yang_parent_name = "update-inbound-error-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::~LastUpdateMalformedTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-malformed-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorVrf::LastUpdateMalformedTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Afs()
    :
    af(this, {"af_name"})
{

    yang_name = "afs"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::~Afs()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<af.len(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.len(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "af")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af>();
        ent_->parent = this;
        af.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : af.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Af()
    :
    af_name{YType::enumeration, "af-name"}
        ,
    rpki_refresh_af_table(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RpkiRefreshAfTable>())
    , policies(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies>())
    , convergence(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Convergence>())
    , af_process_info(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo>())
    , path_used_table(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable>())
    , bmp_path_table_generic(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric>())
    , rpc_sets(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RpcSets>())
    , global_af_process_info(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::GlobalAfProcessInfo>())
    , advertised_path_xr(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr>())
    , sourced_networks(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks>())
    , update_groups(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups>())
    , update_generation_sub_groups(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups>())
    , next_hop_address_families(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies>())
    , rt_set_counters(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters>())
    , bmp_paths(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths>())
    , update_generation_update_groups(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups>())
    , update_generation_filter_groups(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationFilterGroups>())
    , networks(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Networks>())
    , path_table(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathTable>())
    , epes(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Epes>())
    , advertised_path_counts(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathCounts>())
    , path_labeled_table(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathLabeledTable>())
    , advertised_paths(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths>())
    , neighbor_af_table(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable>())
    , update_generation_neighbors(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors>())
    , update_generation_address_family(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationAddressFamily>())
    , dampenings(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings>())
    , prefix_filters(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters>())
    , attributes(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes>())
{
    rpki_refresh_af_table->parent = this;
    policies->parent = this;
    convergence->parent = this;
    af_process_info->parent = this;
    path_used_table->parent = this;
    bmp_path_table_generic->parent = this;
    rpc_sets->parent = this;
    global_af_process_info->parent = this;
    advertised_path_xr->parent = this;
    sourced_networks->parent = this;
    update_groups->parent = this;
    update_generation_sub_groups->parent = this;
    next_hop_address_families->parent = this;
    rt_set_counters->parent = this;
    bmp_paths->parent = this;
    update_generation_update_groups->parent = this;
    update_generation_filter_groups->parent = this;
    networks->parent = this;
    path_table->parent = this;
    epes->parent = this;
    advertised_path_counts->parent = this;
    path_labeled_table->parent = this;
    advertised_paths->parent = this;
    neighbor_af_table->parent = this;
    update_generation_neighbors->parent = this;
    update_generation_address_family->parent = this;
    dampenings->parent = this;
    prefix_filters->parent = this;
    attributes->parent = this;

    yang_name = "af"; yang_parent_name = "afs"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::~Af()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| (rpki_refresh_af_table !=  nullptr && rpki_refresh_af_table->has_data())
	|| (policies !=  nullptr && policies->has_data())
	|| (convergence !=  nullptr && convergence->has_data())
	|| (af_process_info !=  nullptr && af_process_info->has_data())
	|| (path_used_table !=  nullptr && path_used_table->has_data())
	|| (bmp_path_table_generic !=  nullptr && bmp_path_table_generic->has_data())
	|| (rpc_sets !=  nullptr && rpc_sets->has_data())
	|| (global_af_process_info !=  nullptr && global_af_process_info->has_data())
	|| (advertised_path_xr !=  nullptr && advertised_path_xr->has_data())
	|| (sourced_networks !=  nullptr && sourced_networks->has_data())
	|| (update_groups !=  nullptr && update_groups->has_data())
	|| (update_generation_sub_groups !=  nullptr && update_generation_sub_groups->has_data())
	|| (next_hop_address_families !=  nullptr && next_hop_address_families->has_data())
	|| (rt_set_counters !=  nullptr && rt_set_counters->has_data())
	|| (bmp_paths !=  nullptr && bmp_paths->has_data())
	|| (update_generation_update_groups !=  nullptr && update_generation_update_groups->has_data())
	|| (update_generation_filter_groups !=  nullptr && update_generation_filter_groups->has_data())
	|| (networks !=  nullptr && networks->has_data())
	|| (path_table !=  nullptr && path_table->has_data())
	|| (epes !=  nullptr && epes->has_data())
	|| (advertised_path_counts !=  nullptr && advertised_path_counts->has_data())
	|| (path_labeled_table !=  nullptr && path_labeled_table->has_data())
	|| (advertised_paths !=  nullptr && advertised_paths->has_data())
	|| (neighbor_af_table !=  nullptr && neighbor_af_table->has_data())
	|| (update_generation_neighbors !=  nullptr && update_generation_neighbors->has_data())
	|| (update_generation_address_family !=  nullptr && update_generation_address_family->has_data())
	|| (dampenings !=  nullptr && dampenings->has_data())
	|| (prefix_filters !=  nullptr && prefix_filters->has_data())
	|| (attributes !=  nullptr && attributes->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| (rpki_refresh_af_table !=  nullptr && rpki_refresh_af_table->has_operation())
	|| (policies !=  nullptr && policies->has_operation())
	|| (convergence !=  nullptr && convergence->has_operation())
	|| (af_process_info !=  nullptr && af_process_info->has_operation())
	|| (path_used_table !=  nullptr && path_used_table->has_operation())
	|| (bmp_path_table_generic !=  nullptr && bmp_path_table_generic->has_operation())
	|| (rpc_sets !=  nullptr && rpc_sets->has_operation())
	|| (global_af_process_info !=  nullptr && global_af_process_info->has_operation())
	|| (advertised_path_xr !=  nullptr && advertised_path_xr->has_operation())
	|| (sourced_networks !=  nullptr && sourced_networks->has_operation())
	|| (update_groups !=  nullptr && update_groups->has_operation())
	|| (update_generation_sub_groups !=  nullptr && update_generation_sub_groups->has_operation())
	|| (next_hop_address_families !=  nullptr && next_hop_address_families->has_operation())
	|| (rt_set_counters !=  nullptr && rt_set_counters->has_operation())
	|| (bmp_paths !=  nullptr && bmp_paths->has_operation())
	|| (update_generation_update_groups !=  nullptr && update_generation_update_groups->has_operation())
	|| (update_generation_filter_groups !=  nullptr && update_generation_filter_groups->has_operation())
	|| (networks !=  nullptr && networks->has_operation())
	|| (path_table !=  nullptr && path_table->has_operation())
	|| (epes !=  nullptr && epes->has_operation())
	|| (advertised_path_counts !=  nullptr && advertised_path_counts->has_operation())
	|| (path_labeled_table !=  nullptr && path_labeled_table->has_operation())
	|| (advertised_paths !=  nullptr && advertised_paths->has_operation())
	|| (neighbor_af_table !=  nullptr && neighbor_af_table->has_operation())
	|| (update_generation_neighbors !=  nullptr && update_generation_neighbors->has_operation())
	|| (update_generation_address_family !=  nullptr && update_generation_address_family->has_operation())
	|| (dampenings !=  nullptr && dampenings->has_operation())
	|| (prefix_filters !=  nullptr && prefix_filters->has_operation())
	|| (attributes !=  nullptr && attributes->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af";
    ADD_KEY_TOKEN(af_name, "af-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpki-refresh-af-table")
    {
        if(rpki_refresh_af_table == nullptr)
        {
            rpki_refresh_af_table = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RpkiRefreshAfTable>();
        }
        return rpki_refresh_af_table;
    }

    if(child_yang_name == "policies")
    {
        if(policies == nullptr)
        {
            policies = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies>();
        }
        return policies;
    }

    if(child_yang_name == "convergence")
    {
        if(convergence == nullptr)
        {
            convergence = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Convergence>();
        }
        return convergence;
    }

    if(child_yang_name == "af-process-info")
    {
        if(af_process_info == nullptr)
        {
            af_process_info = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AfProcessInfo>();
        }
        return af_process_info;
    }

    if(child_yang_name == "path-used-table")
    {
        if(path_used_table == nullptr)
        {
            path_used_table = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathUsedTable>();
        }
        return path_used_table;
    }

    if(child_yang_name == "bmp-path-table-generic")
    {
        if(bmp_path_table_generic == nullptr)
        {
            bmp_path_table_generic = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPathTableGeneric>();
        }
        return bmp_path_table_generic;
    }

    if(child_yang_name == "rpc-sets")
    {
        if(rpc_sets == nullptr)
        {
            rpc_sets = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RpcSets>();
        }
        return rpc_sets;
    }

    if(child_yang_name == "global-af-process-info")
    {
        if(global_af_process_info == nullptr)
        {
            global_af_process_info = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::GlobalAfProcessInfo>();
        }
        return global_af_process_info;
    }

    if(child_yang_name == "advertised-path-xr")
    {
        if(advertised_path_xr == nullptr)
        {
            advertised_path_xr = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathXr>();
        }
        return advertised_path_xr;
    }

    if(child_yang_name == "sourced-networks")
    {
        if(sourced_networks == nullptr)
        {
            sourced_networks = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::SourcedNetworks>();
        }
        return sourced_networks;
    }

    if(child_yang_name == "update-groups")
    {
        if(update_groups == nullptr)
        {
            update_groups = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGroups>();
        }
        return update_groups;
    }

    if(child_yang_name == "update-generation-sub-groups")
    {
        if(update_generation_sub_groups == nullptr)
        {
            update_generation_sub_groups = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationSubGroups>();
        }
        return update_generation_sub_groups;
    }

    if(child_yang_name == "next-hop-address-families")
    {
        if(next_hop_address_families == nullptr)
        {
            next_hop_address_families = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NextHopAddressFamilies>();
        }
        return next_hop_address_families;
    }

    if(child_yang_name == "rt-set-counters")
    {
        if(rt_set_counters == nullptr)
        {
            rt_set_counters = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RtSetCounters>();
        }
        return rt_set_counters;
    }

    if(child_yang_name == "bmp-paths")
    {
        if(bmp_paths == nullptr)
        {
            bmp_paths = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::BmpPaths>();
        }
        return bmp_paths;
    }

    if(child_yang_name == "update-generation-update-groups")
    {
        if(update_generation_update_groups == nullptr)
        {
            update_generation_update_groups = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationUpdateGroups>();
        }
        return update_generation_update_groups;
    }

    if(child_yang_name == "update-generation-filter-groups")
    {
        if(update_generation_filter_groups == nullptr)
        {
            update_generation_filter_groups = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationFilterGroups>();
        }
        return update_generation_filter_groups;
    }

    if(child_yang_name == "networks")
    {
        if(networks == nullptr)
        {
            networks = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Networks>();
        }
        return networks;
    }

    if(child_yang_name == "path-table")
    {
        if(path_table == nullptr)
        {
            path_table = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathTable>();
        }
        return path_table;
    }

    if(child_yang_name == "epes")
    {
        if(epes == nullptr)
        {
            epes = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Epes>();
        }
        return epes;
    }

    if(child_yang_name == "advertised-path-counts")
    {
        if(advertised_path_counts == nullptr)
        {
            advertised_path_counts = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPathCounts>();
        }
        return advertised_path_counts;
    }

    if(child_yang_name == "path-labeled-table")
    {
        if(path_labeled_table == nullptr)
        {
            path_labeled_table = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PathLabeledTable>();
        }
        return path_labeled_table;
    }

    if(child_yang_name == "advertised-paths")
    {
        if(advertised_paths == nullptr)
        {
            advertised_paths = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths>();
        }
        return advertised_paths;
    }

    if(child_yang_name == "neighbor-af-table")
    {
        if(neighbor_af_table == nullptr)
        {
            neighbor_af_table = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable>();
        }
        return neighbor_af_table;
    }

    if(child_yang_name == "update-generation-neighbors")
    {
        if(update_generation_neighbors == nullptr)
        {
            update_generation_neighbors = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationNeighbors>();
        }
        return update_generation_neighbors;
    }

    if(child_yang_name == "update-generation-address-family")
    {
        if(update_generation_address_family == nullptr)
        {
            update_generation_address_family = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::UpdateGenerationAddressFamily>();
        }
        return update_generation_address_family;
    }

    if(child_yang_name == "dampenings")
    {
        if(dampenings == nullptr)
        {
            dampenings = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings>();
        }
        return dampenings;
    }

    if(child_yang_name == "prefix-filters")
    {
        if(prefix_filters == nullptr)
        {
            prefix_filters = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters>();
        }
        return prefix_filters;
    }

    if(child_yang_name == "attributes")
    {
        if(attributes == nullptr)
        {
            attributes = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes>();
        }
        return attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rpki_refresh_af_table != nullptr)
    {
        _children["rpki-refresh-af-table"] = rpki_refresh_af_table;
    }

    if(policies != nullptr)
    {
        _children["policies"] = policies;
    }

    if(convergence != nullptr)
    {
        _children["convergence"] = convergence;
    }

    if(af_process_info != nullptr)
    {
        _children["af-process-info"] = af_process_info;
    }

    if(path_used_table != nullptr)
    {
        _children["path-used-table"] = path_used_table;
    }

    if(bmp_path_table_generic != nullptr)
    {
        _children["bmp-path-table-generic"] = bmp_path_table_generic;
    }

    if(rpc_sets != nullptr)
    {
        _children["rpc-sets"] = rpc_sets;
    }

    if(global_af_process_info != nullptr)
    {
        _children["global-af-process-info"] = global_af_process_info;
    }

    if(advertised_path_xr != nullptr)
    {
        _children["advertised-path-xr"] = advertised_path_xr;
    }

    if(sourced_networks != nullptr)
    {
        _children["sourced-networks"] = sourced_networks;
    }

    if(update_groups != nullptr)
    {
        _children["update-groups"] = update_groups;
    }

    if(update_generation_sub_groups != nullptr)
    {
        _children["update-generation-sub-groups"] = update_generation_sub_groups;
    }

    if(next_hop_address_families != nullptr)
    {
        _children["next-hop-address-families"] = next_hop_address_families;
    }

    if(rt_set_counters != nullptr)
    {
        _children["rt-set-counters"] = rt_set_counters;
    }

    if(bmp_paths != nullptr)
    {
        _children["bmp-paths"] = bmp_paths;
    }

    if(update_generation_update_groups != nullptr)
    {
        _children["update-generation-update-groups"] = update_generation_update_groups;
    }

    if(update_generation_filter_groups != nullptr)
    {
        _children["update-generation-filter-groups"] = update_generation_filter_groups;
    }

    if(networks != nullptr)
    {
        _children["networks"] = networks;
    }

    if(path_table != nullptr)
    {
        _children["path-table"] = path_table;
    }

    if(epes != nullptr)
    {
        _children["epes"] = epes;
    }

    if(advertised_path_counts != nullptr)
    {
        _children["advertised-path-counts"] = advertised_path_counts;
    }

    if(path_labeled_table != nullptr)
    {
        _children["path-labeled-table"] = path_labeled_table;
    }

    if(advertised_paths != nullptr)
    {
        _children["advertised-paths"] = advertised_paths;
    }

    if(neighbor_af_table != nullptr)
    {
        _children["neighbor-af-table"] = neighbor_af_table;
    }

    if(update_generation_neighbors != nullptr)
    {
        _children["update-generation-neighbors"] = update_generation_neighbors;
    }

    if(update_generation_address_family != nullptr)
    {
        _children["update-generation-address-family"] = update_generation_address_family;
    }

    if(dampenings != nullptr)
    {
        _children["dampenings"] = dampenings;
    }

    if(prefix_filters != nullptr)
    {
        _children["prefix-filters"] = prefix_filters;
    }

    if(attributes != nullptr)
    {
        _children["attributes"] = attributes;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpki-refresh-af-table" || name == "policies" || name == "convergence" || name == "af-process-info" || name == "path-used-table" || name == "bmp-path-table-generic" || name == "rpc-sets" || name == "global-af-process-info" || name == "advertised-path-xr" || name == "sourced-networks" || name == "update-groups" || name == "update-generation-sub-groups" || name == "next-hop-address-families" || name == "rt-set-counters" || name == "bmp-paths" || name == "update-generation-update-groups" || name == "update-generation-filter-groups" || name == "networks" || name == "path-table" || name == "epes" || name == "advertised-path-counts" || name == "path-labeled-table" || name == "advertised-paths" || name == "neighbor-af-table" || name == "update-generation-neighbors" || name == "update-generation-address-family" || name == "dampenings" || name == "prefix-filters" || name == "attributes" || name == "af-name")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RpkiRefreshAfTable::RpkiRefreshAfTable()
    :
    rpki_refresh_af(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RpkiRefreshAfTable::RpkiRefreshAf>())
{
    rpki_refresh_af->parent = this;

    yang_name = "rpki-refresh-af-table"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RpkiRefreshAfTable::~RpkiRefreshAfTable()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RpkiRefreshAfTable::has_data() const
{
    if (is_presence_container) return true;
    return (rpki_refresh_af !=  nullptr && rpki_refresh_af->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RpkiRefreshAfTable::has_operation() const
{
    return is_set(yfilter)
	|| (rpki_refresh_af !=  nullptr && rpki_refresh_af->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RpkiRefreshAfTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpki-refresh-af-table";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RpkiRefreshAfTable::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RpkiRefreshAfTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rpki-refresh-af")
    {
        if(rpki_refresh_af == nullptr)
        {
            rpki_refresh_af = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RpkiRefreshAfTable::RpkiRefreshAf>();
        }
        return rpki_refresh_af;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RpkiRefreshAfTable::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rpki_refresh_af != nullptr)
    {
        _children["rpki-refresh-af"] = rpki_refresh_af;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RpkiRefreshAfTable::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RpkiRefreshAfTable::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RpkiRefreshAfTable::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rpki-refresh-af")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RpkiRefreshAfTable::RpkiRefreshAf::RpkiRefreshAf()
    :
    refresh_entry(this, {})
{

    yang_name = "rpki-refresh-af"; yang_parent_name = "rpki-refresh-af-table"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RpkiRefreshAfTable::RpkiRefreshAf::~RpkiRefreshAf()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RpkiRefreshAfTable::RpkiRefreshAf::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<refresh_entry.len(); index++)
    {
        if(refresh_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RpkiRefreshAfTable::RpkiRefreshAf::has_operation() const
{
    for (std::size_t index=0; index<refresh_entry.len(); index++)
    {
        if(refresh_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RpkiRefreshAfTable::RpkiRefreshAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rpki-refresh-af";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RpkiRefreshAfTable::RpkiRefreshAf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RpkiRefreshAfTable::RpkiRefreshAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "refresh-entry")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RpkiRefreshAfTable::RpkiRefreshAf::RefreshEntry>();
        ent_->parent = this;
        refresh_entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RpkiRefreshAfTable::RpkiRefreshAf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : refresh_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RpkiRefreshAfTable::RpkiRefreshAf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RpkiRefreshAfTable::RpkiRefreshAf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RpkiRefreshAfTable::RpkiRefreshAf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "refresh-entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RpkiRefreshAfTable::RpkiRefreshAf::RefreshEntry::RefreshEntry()
    :
    af_name{YType::enumeration, "af-name"},
    neighbor{YType::str, "neighbor"},
    policy{YType::str, "policy"},
    paths{YType::uint32, "paths"},
    drop{YType::boolean, "drop"}
{

    yang_name = "refresh-entry"; yang_parent_name = "rpki-refresh-af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RpkiRefreshAfTable::RpkiRefreshAf::RefreshEntry::~RefreshEntry()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RpkiRefreshAfTable::RpkiRefreshAf::RefreshEntry::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| neighbor.is_set
	|| policy.is_set
	|| paths.is_set
	|| drop.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RpkiRefreshAfTable::RpkiRefreshAf::RefreshEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(neighbor.yfilter)
	|| ydk::is_set(policy.yfilter)
	|| ydk::is_set(paths.yfilter)
	|| ydk::is_set(drop.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RpkiRefreshAfTable::RpkiRefreshAf::RefreshEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "refresh-entry";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RpkiRefreshAfTable::RpkiRefreshAf::RefreshEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (neighbor.is_set || is_set(neighbor.yfilter)) leaf_name_data.push_back(neighbor.get_name_leafdata());
    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());
    if (paths.is_set || is_set(paths.yfilter)) leaf_name_data.push_back(paths.get_name_leafdata());
    if (drop.is_set || is_set(drop.yfilter)) leaf_name_data.push_back(drop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RpkiRefreshAfTable::RpkiRefreshAf::RefreshEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RpkiRefreshAfTable::RpkiRefreshAf::RefreshEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RpkiRefreshAfTable::RpkiRefreshAf::RefreshEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor")
    {
        neighbor = value;
        neighbor.value_namespace = name_space;
        neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths")
    {
        paths = value;
        paths.value_namespace = name_space;
        paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop")
    {
        drop = value;
        drop.value_namespace = name_space;
        drop.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RpkiRefreshAfTable::RpkiRefreshAf::RefreshEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "neighbor")
    {
        neighbor.yfilter = yfilter;
    }
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
    if(value_path == "paths")
    {
        paths.yfilter = yfilter;
    }
    if(value_path == "drop")
    {
        drop.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::RpkiRefreshAfTable::RpkiRefreshAf::RefreshEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "neighbor" || name == "policy" || name == "paths" || name == "drop")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policies()
    :
    policy(this, {})
{

    yang_name = "policies"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::~Policies()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<policy.len(); index++)
    {
        if(policy[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::has_operation() const
{
    for (std::size_t index=0; index<policy.len(); index++)
    {
        if(policy[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policies";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "policy")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy>();
        ent_->parent = this;
        policy.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : policy.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::Policy()
    :
    rd{YType::str, "rd"},
    network{YType::str, "network"},
    prefix_length{YType::uint32, "prefix-length"},
    neighbor_address{YType::str, "neighbor-address"},
    no_path{YType::boolean, "no-path"},
    af_name{YType::enumeration, "af-name"},
    route_distinguisher{YType::str, "route-distinguisher"},
    source_route_distinguisher{YType::str, "source-route-distinguisher"},
    vrf_name{YType::str, "vrf-name"}
        ,
    neighbor_address_xr(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr>())
    , path_info_after_policy_in(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn>())
    , path_info_after_policy_out(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyOut>())
    , attributes_after_policy_in(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn>())
    , attributes_after_policy_out(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut>())
{
    neighbor_address_xr->parent = this;
    path_info_after_policy_in->parent = this;
    path_info_after_policy_out->parent = this;
    attributes_after_policy_in->parent = this;
    attributes_after_policy_out->parent = this;

    yang_name = "policy"; yang_parent_name = "policies"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::~Policy()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::has_data() const
{
    if (is_presence_container) return true;
    return rd.is_set
	|| network.is_set
	|| prefix_length.is_set
	|| neighbor_address.is_set
	|| no_path.is_set
	|| af_name.is_set
	|| route_distinguisher.is_set
	|| source_route_distinguisher.is_set
	|| vrf_name.is_set
	|| (neighbor_address_xr !=  nullptr && neighbor_address_xr->has_data())
	|| (path_info_after_policy_in !=  nullptr && path_info_after_policy_in->has_data())
	|| (path_info_after_policy_out !=  nullptr && path_info_after_policy_out->has_data())
	|| (attributes_after_policy_in !=  nullptr && attributes_after_policy_in->has_data())
	|| (attributes_after_policy_out !=  nullptr && attributes_after_policy_out->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rd.yfilter)
	|| ydk::is_set(network.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(no_path.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(route_distinguisher.yfilter)
	|| ydk::is_set(source_route_distinguisher.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (neighbor_address_xr !=  nullptr && neighbor_address_xr->has_operation())
	|| (path_info_after_policy_in !=  nullptr && path_info_after_policy_in->has_operation())
	|| (path_info_after_policy_out !=  nullptr && path_info_after_policy_out->has_operation())
	|| (attributes_after_policy_in !=  nullptr && attributes_after_policy_in->has_operation())
	|| (attributes_after_policy_out !=  nullptr && attributes_after_policy_out->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (no_path.is_set || is_set(no_path.yfilter)) leaf_name_data.push_back(no_path.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (route_distinguisher.is_set || is_set(route_distinguisher.yfilter)) leaf_name_data.push_back(route_distinguisher.get_name_leafdata());
    if (source_route_distinguisher.is_set || is_set(source_route_distinguisher.yfilter)) leaf_name_data.push_back(source_route_distinguisher.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address-xr")
    {
        if(neighbor_address_xr == nullptr)
        {
            neighbor_address_xr = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr>();
        }
        return neighbor_address_xr;
    }

    if(child_yang_name == "path-info-after-policy-in")
    {
        if(path_info_after_policy_in == nullptr)
        {
            path_info_after_policy_in = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn>();
        }
        return path_info_after_policy_in;
    }

    if(child_yang_name == "path-info-after-policy-out")
    {
        if(path_info_after_policy_out == nullptr)
        {
            path_info_after_policy_out = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyOut>();
        }
        return path_info_after_policy_out;
    }

    if(child_yang_name == "attributes-after-policy-in")
    {
        if(attributes_after_policy_in == nullptr)
        {
            attributes_after_policy_in = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyIn>();
        }
        return attributes_after_policy_in;
    }

    if(child_yang_name == "attributes-after-policy-out")
    {
        if(attributes_after_policy_out == nullptr)
        {
            attributes_after_policy_out = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::AttributesAfterPolicyOut>();
        }
        return attributes_after_policy_out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(neighbor_address_xr != nullptr)
    {
        _children["neighbor-address-xr"] = neighbor_address_xr;
    }

    if(path_info_after_policy_in != nullptr)
    {
        _children["path-info-after-policy-in"] = path_info_after_policy_in;
    }

    if(path_info_after_policy_out != nullptr)
    {
        _children["path-info-after-policy-out"] = path_info_after_policy_out;
    }

    if(attributes_after_policy_in != nullptr)
    {
        _children["attributes-after-policy-in"] = attributes_after_policy_in;
    }

    if(attributes_after_policy_out != nullptr)
    {
        _children["attributes-after-policy-out"] = attributes_after_policy_out;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-path")
    {
        no_path = value;
        no_path.value_namespace = name_space;
        no_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher = value;
        route_distinguisher.value_namespace = name_space;
        route_distinguisher.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-route-distinguisher")
    {
        source_route_distinguisher = value;
        source_route_distinguisher.value_namespace = name_space;
        source_route_distinguisher.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "no-path")
    {
        no_path.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher.yfilter = yfilter;
    }
    if(value_path == "source-route-distinguisher")
    {
        source_route_distinguisher.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address-xr" || name == "path-info-after-policy-in" || name == "path-info-after-policy-out" || name == "attributes-after-policy-in" || name == "attributes-after-policy-out" || name == "rd" || name == "network" || name == "prefix-length" || name == "neighbor-address" || name == "no-path" || name == "af-name" || name == "route-distinguisher" || name == "source-route-distinguisher" || name == "vrf-name")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::NeighborAddressXr()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
        ,
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::L2vpnVplsAddress>())
    , l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::L2vpnMspwAddress>())
    , ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::Ipv4SrPolicyAddress>())
    , ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "neighbor-address-xr"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::~NeighborAddressXr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::L2vpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::L2vpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(l2vpn_vpls_address != nullptr)
    {
        _children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        _children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        _children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        _children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::L2vpnVplsAddress::L2vpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::L2vpnVplsAddress::~L2vpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::L2vpnVplsAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::L2vpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::L2vpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::L2vpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::L2vpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::L2vpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::L2vpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::L2vpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::L2vpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::L2vpnMspwAddress::L2vpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::L2vpnMspwAddress::~L2vpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::L2vpnMspwAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::L2vpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::L2vpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::L2vpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::L2vpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::L2vpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::L2vpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::L2vpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::L2vpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::Ipv4SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::Ipv6SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::NeighborAddressXr::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PathInfoAfterPolicyIn()
    :
    route_type{YType::enumeration, "route-type"},
    is_path_valid{YType::boolean, "is-path-valid"},
    is_path_damped{YType::boolean, "is-path-damped"},
    is_path_history_held{YType::boolean, "is-path-history-held"},
    is_internal_path{YType::boolean, "is-internal-path"},
    is_best_path{YType::boolean, "is-best-path"},
    is_as_best{YType::boolean, "is-as-best"},
    is_spkr_as_best{YType::boolean, "is-spkr-as-best"},
    is_partial_best{YType::boolean, "is-partial-best"},
    is_aggregation_suppressed{YType::boolean, "is-aggregation-suppressed"},
    is_import_dampened{YType::boolean, "is-import-dampened"},
    is_import_suspect{YType::boolean, "is-import-suspect"},
    is_path_not_advertised{YType::boolean, "is-path-not-advertised"},
    is_path_not_advertised_to_ebgp{YType::boolean, "is-path-not-advertised-to-ebgp"},
    is_path_advertised_local_as_only{YType::boolean, "is-path-advertised-local-as-only"},
    is_path_from_route_reflector{YType::boolean, "is-path-from-route-reflector"},
    is_path_received_only{YType::boolean, "is-path-received-only"},
    is_received_path_not_modified{YType::boolean, "is-received-path-not-modified"},
    is_path_locally_sourced{YType::boolean, "is-path-locally-sourced"},
    is_path_local_aggregate{YType::boolean, "is-path-local-aggregate"},
    is_path_from_network_command{YType::boolean, "is-path-from-network-command"},
    is_path_from_redistribute_command{YType::boolean, "is-path-from-redistribute-command"},
    is_path_imported{YType::boolean, "is-path-imported"},
    is_path_reoriginated{YType::boolean, "is-path-reoriginated"},
    is_path_reoriginated_stitching{YType::boolean, "is-path-reoriginated-stitching"},
    is_path_vpn_only{YType::boolean, "is-path-vpn-only"},
    is_path_from_confederation_peer{YType::boolean, "is-path-from-confederation-peer"},
    is_path_synced_with_igp{YType::boolean, "is-path-synced-with-igp"},
    is_path_multipath{YType::boolean, "is-path-multipath"},
    is_path_imp_candidate{YType::boolean, "is-path-imp-candidate"},
    is_path_stale{YType::boolean, "is-path-stale"},
    is_path_long_lived_stale{YType::boolean, "is-path-long-lived-stale"},
    is_path_backup{YType::boolean, "is-path-backup"},
    is_path_backup_protect_multipath{YType::boolean, "is-path-backup-protect-multipath"},
    is_path_best_external{YType::boolean, "is-path-best-external"},
    is_path_additional_path{YType::boolean, "is-path-additional-path"},
    is_path_nexthop_discarded{YType::boolean, "is-path-nexthop-discarded"},
    has_local_net_label{YType::boolean, "has-local-net-label"},
    local_label{YType::uint32, "local-label"},
    igp_metric{YType::uint32, "igp-metric"},
    path_weight{YType::uint16, "path-weight"},
    neighbor_router_id{YType::str, "neighbor-router-id"},
    has_mdt_group_addr{YType::boolean, "has-mdt-group-addr"},
    l2vpn_size{YType::uint32, "l2vpn-size"},
    l2vpn_evpn_esi{YType::str, "l2vpn-evpn-esi"},
    evpn_path_flags{YType::uint32, "evpn-path-flags"},
    has_gw_addr{YType::boolean, "has-gw-addr"},
    has_nh_addr{YType::boolean, "has-nh-addr"},
    has_second_label{YType::boolean, "has-second-label"},
    second_label{YType::uint32, "second-label"},
    path_flap_count{YType::uint32, "path-flap-count"},
    seconds_since_first_flap{YType::uint32, "seconds-since-first-flap"},
    time_to_unsuppress{YType::uint32, "time-to-unsuppress"},
    dampen_penalty{YType::uint32, "dampen-penalty"},
    halflife_time{YType::uint32, "halflife-time"},
    suppress_penalty{YType::uint32, "suppress-penalty"},
    reuse_value{YType::uint32, "reuse-value"},
    maximum_suppress_time{YType::uint32, "maximum-suppress-time"},
    best_path_comp_stage{YType::enumeration, "best-path-comp-stage"},
    best_path_id_comp_winner{YType::uint32, "best-path-id-comp-winner"},
    path_flags{YType::uint64, "path-flags"},
    path_import_flags{YType::uint32, "path-import-flags"},
    best_path_id{YType::uint32, "best-path-id"},
    local_path_id{YType::uint32, "local-path-id"},
    rcvd_path_id{YType::uint32, "rcvd-path-id"},
    path_table_version{YType::uint32, "path-table-version"},
    advertisedto_pe{YType::boolean, "advertisedto-pe"},
    rib_failed{YType::boolean, "rib-failed"},
    sn_rpki_origin_as_validity{YType::uint8, "sn-rpki-origin-as-validity"},
    show_rpki_origin_as_validity{YType::boolean, "show-rpki-origin-as-validity"},
    ibgp_signaled_validity{YType::boolean, "ibgp-signaled-validity"},
    rpki_origin_as_validation_disabled{YType::boolean, "rpki-origin-as-validation-disabled"},
    accept_own_path{YType::boolean, "accept-own-path"},
    accept_own_self_originated_path{YType::boolean, "accept-own-self-originated-path"},
    aigp_metric{YType::uint64, "aigp-metric"},
    mvpn_sfs_path{YType::boolean, "mvpn-sfs-path"},
    fspec_invalid_path{YType::boolean, "fspec-invalid-path"},
    has_mvpn_nbr_addr{YType::boolean, "has-mvpn-nbr-addr"},
    has_mvpn_nexthop_addr{YType::boolean, "has-mvpn-nexthop-addr"},
    has_mvpn_pmsi{YType::boolean, "has-mvpn-pmsi"},
    mvpn_pmsi_type{YType::uint16, "mvpn-pmsi-type"},
    mvpn_pmsi_flags{YType::uint8, "mvpn-pmsi-flags"},
    mvpn_pmsi_label{YType::uint32, "mvpn-pmsi-label"},
    has_mvpn_extcomm{YType::boolean, "has-mvpn-extcomm"},
    mvpn_path_flags{YType::uint16, "mvpn-path-flags"},
    local_nh{YType::boolean, "local-nh"},
    rt_set_limit_enabled{YType::boolean, "rt-set-limit-enabled"},
    path_rt_set_id{YType::uint32, "path-rt-set-id"},
    path_rt_set_route_count{YType::uint32, "path-rt-set-route-count"},
    is_path_af_install_eligible{YType::boolean, "is-path-af-install-eligible"},
    is_permanent_path{YType::boolean, "is-permanent-path"},
    graceful_shutdown{YType::boolean, "graceful-shutdown"},
    labeled_unicast_safi_path{YType::boolean, "labeled-unicast-safi-path"},
    has_vpn_nexthop_addr{YType::boolean, "has-vpn-nexthop-addr"},
    is_orig_src_rd_present{YType::boolean, "is-orig-src-rd-present"},
    af_name{YType::enumeration, "af-name"},
    route_distinguisher{YType::str, "route-distinguisher"},
    mac_ip_present{YType::boolean, "mac-ip-present"},
    mac_ip{YType::str, "mac-ip"},
    ether_tag_id{YType::uint32, "ether-tag-id"}
        ,
    bgp_prefix(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix>())
    , neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress>())
    , next_hop(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop>())
    , nh_tunnel(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NhTunnel>())
    , mdt_group_addr(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr>())
    , gw_addr(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::GwAddr>())
    , nh_addr(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NhAddr>())
    , best_path_comp_winner(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner>())
    , mvpn_nbr_addr(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr>())
    , mvpn_nexthop_addr(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr>())
    , vpn_nexthop_addr(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr>())
    , rcvd_label(this, {})
    , l2vpn_circuit_status_value(this, {})
    , mvpn_pmsi_value(this, {})
    , extended_community(this, {})
    , local_peers_advertised_to(this, {})
    , pe_peers_advertised_to(this, {})
    , best_path_orr_bitfield(this, {})
    , add_path_orr_bitfield(this, {})
{
    bgp_prefix->parent = this;
    neighbor_address->parent = this;
    next_hop->parent = this;
    nh_tunnel->parent = this;
    mdt_group_addr->parent = this;
    gw_addr->parent = this;
    nh_addr->parent = this;
    best_path_comp_winner->parent = this;
    mvpn_nbr_addr->parent = this;
    mvpn_nexthop_addr->parent = this;
    vpn_nexthop_addr->parent = this;

    yang_name = "path-info-after-policy-in"; yang_parent_name = "policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::~PathInfoAfterPolicyIn()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rcvd_label.len(); index++)
    {
        if(rcvd_label[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<l2vpn_circuit_status_value.len(); index++)
    {
        if(l2vpn_circuit_status_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<mvpn_pmsi_value.len(); index++)
    {
        if(mvpn_pmsi_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_community.len(); index++)
    {
        if(extended_community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<local_peers_advertised_to.len(); index++)
    {
        if(local_peers_advertised_to[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pe_peers_advertised_to.len(); index++)
    {
        if(pe_peers_advertised_to[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<best_path_orr_bitfield.len(); index++)
    {
        if(best_path_orr_bitfield[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<add_path_orr_bitfield.len(); index++)
    {
        if(add_path_orr_bitfield[index]->has_data())
            return true;
    }
    return route_type.is_set
	|| is_path_valid.is_set
	|| is_path_damped.is_set
	|| is_path_history_held.is_set
	|| is_internal_path.is_set
	|| is_best_path.is_set
	|| is_as_best.is_set
	|| is_spkr_as_best.is_set
	|| is_partial_best.is_set
	|| is_aggregation_suppressed.is_set
	|| is_import_dampened.is_set
	|| is_import_suspect.is_set
	|| is_path_not_advertised.is_set
	|| is_path_not_advertised_to_ebgp.is_set
	|| is_path_advertised_local_as_only.is_set
	|| is_path_from_route_reflector.is_set
	|| is_path_received_only.is_set
	|| is_received_path_not_modified.is_set
	|| is_path_locally_sourced.is_set
	|| is_path_local_aggregate.is_set
	|| is_path_from_network_command.is_set
	|| is_path_from_redistribute_command.is_set
	|| is_path_imported.is_set
	|| is_path_reoriginated.is_set
	|| is_path_reoriginated_stitching.is_set
	|| is_path_vpn_only.is_set
	|| is_path_from_confederation_peer.is_set
	|| is_path_synced_with_igp.is_set
	|| is_path_multipath.is_set
	|| is_path_imp_candidate.is_set
	|| is_path_stale.is_set
	|| is_path_long_lived_stale.is_set
	|| is_path_backup.is_set
	|| is_path_backup_protect_multipath.is_set
	|| is_path_best_external.is_set
	|| is_path_additional_path.is_set
	|| is_path_nexthop_discarded.is_set
	|| has_local_net_label.is_set
	|| local_label.is_set
	|| igp_metric.is_set
	|| path_weight.is_set
	|| neighbor_router_id.is_set
	|| has_mdt_group_addr.is_set
	|| l2vpn_size.is_set
	|| l2vpn_evpn_esi.is_set
	|| evpn_path_flags.is_set
	|| has_gw_addr.is_set
	|| has_nh_addr.is_set
	|| has_second_label.is_set
	|| second_label.is_set
	|| path_flap_count.is_set
	|| seconds_since_first_flap.is_set
	|| time_to_unsuppress.is_set
	|| dampen_penalty.is_set
	|| halflife_time.is_set
	|| suppress_penalty.is_set
	|| reuse_value.is_set
	|| maximum_suppress_time.is_set
	|| best_path_comp_stage.is_set
	|| best_path_id_comp_winner.is_set
	|| path_flags.is_set
	|| path_import_flags.is_set
	|| best_path_id.is_set
	|| local_path_id.is_set
	|| rcvd_path_id.is_set
	|| path_table_version.is_set
	|| advertisedto_pe.is_set
	|| rib_failed.is_set
	|| sn_rpki_origin_as_validity.is_set
	|| show_rpki_origin_as_validity.is_set
	|| ibgp_signaled_validity.is_set
	|| rpki_origin_as_validation_disabled.is_set
	|| accept_own_path.is_set
	|| accept_own_self_originated_path.is_set
	|| aigp_metric.is_set
	|| mvpn_sfs_path.is_set
	|| fspec_invalid_path.is_set
	|| has_mvpn_nbr_addr.is_set
	|| has_mvpn_nexthop_addr.is_set
	|| has_mvpn_pmsi.is_set
	|| mvpn_pmsi_type.is_set
	|| mvpn_pmsi_flags.is_set
	|| mvpn_pmsi_label.is_set
	|| has_mvpn_extcomm.is_set
	|| mvpn_path_flags.is_set
	|| local_nh.is_set
	|| rt_set_limit_enabled.is_set
	|| path_rt_set_id.is_set
	|| path_rt_set_route_count.is_set
	|| is_path_af_install_eligible.is_set
	|| is_permanent_path.is_set
	|| graceful_shutdown.is_set
	|| labeled_unicast_safi_path.is_set
	|| has_vpn_nexthop_addr.is_set
	|| is_orig_src_rd_present.is_set
	|| af_name.is_set
	|| route_distinguisher.is_set
	|| mac_ip_present.is_set
	|| mac_ip.is_set
	|| ether_tag_id.is_set
	|| (bgp_prefix !=  nullptr && bgp_prefix->has_data())
	|| (neighbor_address !=  nullptr && neighbor_address->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (nh_tunnel !=  nullptr && nh_tunnel->has_data())
	|| (mdt_group_addr !=  nullptr && mdt_group_addr->has_data())
	|| (gw_addr !=  nullptr && gw_addr->has_data())
	|| (nh_addr !=  nullptr && nh_addr->has_data())
	|| (best_path_comp_winner !=  nullptr && best_path_comp_winner->has_data())
	|| (mvpn_nbr_addr !=  nullptr && mvpn_nbr_addr->has_data())
	|| (mvpn_nexthop_addr !=  nullptr && mvpn_nexthop_addr->has_data())
	|| (vpn_nexthop_addr !=  nullptr && vpn_nexthop_addr->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::has_operation() const
{
    for (std::size_t index=0; index<rcvd_label.len(); index++)
    {
        if(rcvd_label[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<l2vpn_circuit_status_value.len(); index++)
    {
        if(l2vpn_circuit_status_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<mvpn_pmsi_value.len(); index++)
    {
        if(mvpn_pmsi_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_community.len(); index++)
    {
        if(extended_community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<local_peers_advertised_to.len(); index++)
    {
        if(local_peers_advertised_to[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pe_peers_advertised_to.len(); index++)
    {
        if(pe_peers_advertised_to[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<best_path_orr_bitfield.len(); index++)
    {
        if(best_path_orr_bitfield[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<add_path_orr_bitfield.len(); index++)
    {
        if(add_path_orr_bitfield[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(is_path_valid.yfilter)
	|| ydk::is_set(is_path_damped.yfilter)
	|| ydk::is_set(is_path_history_held.yfilter)
	|| ydk::is_set(is_internal_path.yfilter)
	|| ydk::is_set(is_best_path.yfilter)
	|| ydk::is_set(is_as_best.yfilter)
	|| ydk::is_set(is_spkr_as_best.yfilter)
	|| ydk::is_set(is_partial_best.yfilter)
	|| ydk::is_set(is_aggregation_suppressed.yfilter)
	|| ydk::is_set(is_import_dampened.yfilter)
	|| ydk::is_set(is_import_suspect.yfilter)
	|| ydk::is_set(is_path_not_advertised.yfilter)
	|| ydk::is_set(is_path_not_advertised_to_ebgp.yfilter)
	|| ydk::is_set(is_path_advertised_local_as_only.yfilter)
	|| ydk::is_set(is_path_from_route_reflector.yfilter)
	|| ydk::is_set(is_path_received_only.yfilter)
	|| ydk::is_set(is_received_path_not_modified.yfilter)
	|| ydk::is_set(is_path_locally_sourced.yfilter)
	|| ydk::is_set(is_path_local_aggregate.yfilter)
	|| ydk::is_set(is_path_from_network_command.yfilter)
	|| ydk::is_set(is_path_from_redistribute_command.yfilter)
	|| ydk::is_set(is_path_imported.yfilter)
	|| ydk::is_set(is_path_reoriginated.yfilter)
	|| ydk::is_set(is_path_reoriginated_stitching.yfilter)
	|| ydk::is_set(is_path_vpn_only.yfilter)
	|| ydk::is_set(is_path_from_confederation_peer.yfilter)
	|| ydk::is_set(is_path_synced_with_igp.yfilter)
	|| ydk::is_set(is_path_multipath.yfilter)
	|| ydk::is_set(is_path_imp_candidate.yfilter)
	|| ydk::is_set(is_path_stale.yfilter)
	|| ydk::is_set(is_path_long_lived_stale.yfilter)
	|| ydk::is_set(is_path_backup.yfilter)
	|| ydk::is_set(is_path_backup_protect_multipath.yfilter)
	|| ydk::is_set(is_path_best_external.yfilter)
	|| ydk::is_set(is_path_additional_path.yfilter)
	|| ydk::is_set(is_path_nexthop_discarded.yfilter)
	|| ydk::is_set(has_local_net_label.yfilter)
	|| ydk::is_set(local_label.yfilter)
	|| ydk::is_set(igp_metric.yfilter)
	|| ydk::is_set(path_weight.yfilter)
	|| ydk::is_set(neighbor_router_id.yfilter)
	|| ydk::is_set(has_mdt_group_addr.yfilter)
	|| ydk::is_set(l2vpn_size.yfilter)
	|| ydk::is_set(l2vpn_evpn_esi.yfilter)
	|| ydk::is_set(evpn_path_flags.yfilter)
	|| ydk::is_set(has_gw_addr.yfilter)
	|| ydk::is_set(has_nh_addr.yfilter)
	|| ydk::is_set(has_second_label.yfilter)
	|| ydk::is_set(second_label.yfilter)
	|| ydk::is_set(path_flap_count.yfilter)
	|| ydk::is_set(seconds_since_first_flap.yfilter)
	|| ydk::is_set(time_to_unsuppress.yfilter)
	|| ydk::is_set(dampen_penalty.yfilter)
	|| ydk::is_set(halflife_time.yfilter)
	|| ydk::is_set(suppress_penalty.yfilter)
	|| ydk::is_set(reuse_value.yfilter)
	|| ydk::is_set(maximum_suppress_time.yfilter)
	|| ydk::is_set(best_path_comp_stage.yfilter)
	|| ydk::is_set(best_path_id_comp_winner.yfilter)
	|| ydk::is_set(path_flags.yfilter)
	|| ydk::is_set(path_import_flags.yfilter)
	|| ydk::is_set(best_path_id.yfilter)
	|| ydk::is_set(local_path_id.yfilter)
	|| ydk::is_set(rcvd_path_id.yfilter)
	|| ydk::is_set(path_table_version.yfilter)
	|| ydk::is_set(advertisedto_pe.yfilter)
	|| ydk::is_set(rib_failed.yfilter)
	|| ydk::is_set(sn_rpki_origin_as_validity.yfilter)
	|| ydk::is_set(show_rpki_origin_as_validity.yfilter)
	|| ydk::is_set(ibgp_signaled_validity.yfilter)
	|| ydk::is_set(rpki_origin_as_validation_disabled.yfilter)
	|| ydk::is_set(accept_own_path.yfilter)
	|| ydk::is_set(accept_own_self_originated_path.yfilter)
	|| ydk::is_set(aigp_metric.yfilter)
	|| ydk::is_set(mvpn_sfs_path.yfilter)
	|| ydk::is_set(fspec_invalid_path.yfilter)
	|| ydk::is_set(has_mvpn_nbr_addr.yfilter)
	|| ydk::is_set(has_mvpn_nexthop_addr.yfilter)
	|| ydk::is_set(has_mvpn_pmsi.yfilter)
	|| ydk::is_set(mvpn_pmsi_type.yfilter)
	|| ydk::is_set(mvpn_pmsi_flags.yfilter)
	|| ydk::is_set(mvpn_pmsi_label.yfilter)
	|| ydk::is_set(has_mvpn_extcomm.yfilter)
	|| ydk::is_set(mvpn_path_flags.yfilter)
	|| ydk::is_set(local_nh.yfilter)
	|| ydk::is_set(rt_set_limit_enabled.yfilter)
	|| ydk::is_set(path_rt_set_id.yfilter)
	|| ydk::is_set(path_rt_set_route_count.yfilter)
	|| ydk::is_set(is_path_af_install_eligible.yfilter)
	|| ydk::is_set(is_permanent_path.yfilter)
	|| ydk::is_set(graceful_shutdown.yfilter)
	|| ydk::is_set(labeled_unicast_safi_path.yfilter)
	|| ydk::is_set(has_vpn_nexthop_addr.yfilter)
	|| ydk::is_set(is_orig_src_rd_present.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(route_distinguisher.yfilter)
	|| ydk::is_set(mac_ip_present.yfilter)
	|| ydk::is_set(mac_ip.yfilter)
	|| ydk::is_set(ether_tag_id.yfilter)
	|| (bgp_prefix !=  nullptr && bgp_prefix->has_operation())
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (nh_tunnel !=  nullptr && nh_tunnel->has_operation())
	|| (mdt_group_addr !=  nullptr && mdt_group_addr->has_operation())
	|| (gw_addr !=  nullptr && gw_addr->has_operation())
	|| (nh_addr !=  nullptr && nh_addr->has_operation())
	|| (best_path_comp_winner !=  nullptr && best_path_comp_winner->has_operation())
	|| (mvpn_nbr_addr !=  nullptr && mvpn_nbr_addr->has_operation())
	|| (mvpn_nexthop_addr !=  nullptr && mvpn_nexthop_addr->has_operation())
	|| (vpn_nexthop_addr !=  nullptr && vpn_nexthop_addr->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-info-after-policy-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (is_path_valid.is_set || is_set(is_path_valid.yfilter)) leaf_name_data.push_back(is_path_valid.get_name_leafdata());
    if (is_path_damped.is_set || is_set(is_path_damped.yfilter)) leaf_name_data.push_back(is_path_damped.get_name_leafdata());
    if (is_path_history_held.is_set || is_set(is_path_history_held.yfilter)) leaf_name_data.push_back(is_path_history_held.get_name_leafdata());
    if (is_internal_path.is_set || is_set(is_internal_path.yfilter)) leaf_name_data.push_back(is_internal_path.get_name_leafdata());
    if (is_best_path.is_set || is_set(is_best_path.yfilter)) leaf_name_data.push_back(is_best_path.get_name_leafdata());
    if (is_as_best.is_set || is_set(is_as_best.yfilter)) leaf_name_data.push_back(is_as_best.get_name_leafdata());
    if (is_spkr_as_best.is_set || is_set(is_spkr_as_best.yfilter)) leaf_name_data.push_back(is_spkr_as_best.get_name_leafdata());
    if (is_partial_best.is_set || is_set(is_partial_best.yfilter)) leaf_name_data.push_back(is_partial_best.get_name_leafdata());
    if (is_aggregation_suppressed.is_set || is_set(is_aggregation_suppressed.yfilter)) leaf_name_data.push_back(is_aggregation_suppressed.get_name_leafdata());
    if (is_import_dampened.is_set || is_set(is_import_dampened.yfilter)) leaf_name_data.push_back(is_import_dampened.get_name_leafdata());
    if (is_import_suspect.is_set || is_set(is_import_suspect.yfilter)) leaf_name_data.push_back(is_import_suspect.get_name_leafdata());
    if (is_path_not_advertised.is_set || is_set(is_path_not_advertised.yfilter)) leaf_name_data.push_back(is_path_not_advertised.get_name_leafdata());
    if (is_path_not_advertised_to_ebgp.is_set || is_set(is_path_not_advertised_to_ebgp.yfilter)) leaf_name_data.push_back(is_path_not_advertised_to_ebgp.get_name_leafdata());
    if (is_path_advertised_local_as_only.is_set || is_set(is_path_advertised_local_as_only.yfilter)) leaf_name_data.push_back(is_path_advertised_local_as_only.get_name_leafdata());
    if (is_path_from_route_reflector.is_set || is_set(is_path_from_route_reflector.yfilter)) leaf_name_data.push_back(is_path_from_route_reflector.get_name_leafdata());
    if (is_path_received_only.is_set || is_set(is_path_received_only.yfilter)) leaf_name_data.push_back(is_path_received_only.get_name_leafdata());
    if (is_received_path_not_modified.is_set || is_set(is_received_path_not_modified.yfilter)) leaf_name_data.push_back(is_received_path_not_modified.get_name_leafdata());
    if (is_path_locally_sourced.is_set || is_set(is_path_locally_sourced.yfilter)) leaf_name_data.push_back(is_path_locally_sourced.get_name_leafdata());
    if (is_path_local_aggregate.is_set || is_set(is_path_local_aggregate.yfilter)) leaf_name_data.push_back(is_path_local_aggregate.get_name_leafdata());
    if (is_path_from_network_command.is_set || is_set(is_path_from_network_command.yfilter)) leaf_name_data.push_back(is_path_from_network_command.get_name_leafdata());
    if (is_path_from_redistribute_command.is_set || is_set(is_path_from_redistribute_command.yfilter)) leaf_name_data.push_back(is_path_from_redistribute_command.get_name_leafdata());
    if (is_path_imported.is_set || is_set(is_path_imported.yfilter)) leaf_name_data.push_back(is_path_imported.get_name_leafdata());
    if (is_path_reoriginated.is_set || is_set(is_path_reoriginated.yfilter)) leaf_name_data.push_back(is_path_reoriginated.get_name_leafdata());
    if (is_path_reoriginated_stitching.is_set || is_set(is_path_reoriginated_stitching.yfilter)) leaf_name_data.push_back(is_path_reoriginated_stitching.get_name_leafdata());
    if (is_path_vpn_only.is_set || is_set(is_path_vpn_only.yfilter)) leaf_name_data.push_back(is_path_vpn_only.get_name_leafdata());
    if (is_path_from_confederation_peer.is_set || is_set(is_path_from_confederation_peer.yfilter)) leaf_name_data.push_back(is_path_from_confederation_peer.get_name_leafdata());
    if (is_path_synced_with_igp.is_set || is_set(is_path_synced_with_igp.yfilter)) leaf_name_data.push_back(is_path_synced_with_igp.get_name_leafdata());
    if (is_path_multipath.is_set || is_set(is_path_multipath.yfilter)) leaf_name_data.push_back(is_path_multipath.get_name_leafdata());
    if (is_path_imp_candidate.is_set || is_set(is_path_imp_candidate.yfilter)) leaf_name_data.push_back(is_path_imp_candidate.get_name_leafdata());
    if (is_path_stale.is_set || is_set(is_path_stale.yfilter)) leaf_name_data.push_back(is_path_stale.get_name_leafdata());
    if (is_path_long_lived_stale.is_set || is_set(is_path_long_lived_stale.yfilter)) leaf_name_data.push_back(is_path_long_lived_stale.get_name_leafdata());
    if (is_path_backup.is_set || is_set(is_path_backup.yfilter)) leaf_name_data.push_back(is_path_backup.get_name_leafdata());
    if (is_path_backup_protect_multipath.is_set || is_set(is_path_backup_protect_multipath.yfilter)) leaf_name_data.push_back(is_path_backup_protect_multipath.get_name_leafdata());
    if (is_path_best_external.is_set || is_set(is_path_best_external.yfilter)) leaf_name_data.push_back(is_path_best_external.get_name_leafdata());
    if (is_path_additional_path.is_set || is_set(is_path_additional_path.yfilter)) leaf_name_data.push_back(is_path_additional_path.get_name_leafdata());
    if (is_path_nexthop_discarded.is_set || is_set(is_path_nexthop_discarded.yfilter)) leaf_name_data.push_back(is_path_nexthop_discarded.get_name_leafdata());
    if (has_local_net_label.is_set || is_set(has_local_net_label.yfilter)) leaf_name_data.push_back(has_local_net_label.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.yfilter)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (igp_metric.is_set || is_set(igp_metric.yfilter)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (path_weight.is_set || is_set(path_weight.yfilter)) leaf_name_data.push_back(path_weight.get_name_leafdata());
    if (neighbor_router_id.is_set || is_set(neighbor_router_id.yfilter)) leaf_name_data.push_back(neighbor_router_id.get_name_leafdata());
    if (has_mdt_group_addr.is_set || is_set(has_mdt_group_addr.yfilter)) leaf_name_data.push_back(has_mdt_group_addr.get_name_leafdata());
    if (l2vpn_size.is_set || is_set(l2vpn_size.yfilter)) leaf_name_data.push_back(l2vpn_size.get_name_leafdata());
    if (l2vpn_evpn_esi.is_set || is_set(l2vpn_evpn_esi.yfilter)) leaf_name_data.push_back(l2vpn_evpn_esi.get_name_leafdata());
    if (evpn_path_flags.is_set || is_set(evpn_path_flags.yfilter)) leaf_name_data.push_back(evpn_path_flags.get_name_leafdata());
    if (has_gw_addr.is_set || is_set(has_gw_addr.yfilter)) leaf_name_data.push_back(has_gw_addr.get_name_leafdata());
    if (has_nh_addr.is_set || is_set(has_nh_addr.yfilter)) leaf_name_data.push_back(has_nh_addr.get_name_leafdata());
    if (has_second_label.is_set || is_set(has_second_label.yfilter)) leaf_name_data.push_back(has_second_label.get_name_leafdata());
    if (second_label.is_set || is_set(second_label.yfilter)) leaf_name_data.push_back(second_label.get_name_leafdata());
    if (path_flap_count.is_set || is_set(path_flap_count.yfilter)) leaf_name_data.push_back(path_flap_count.get_name_leafdata());
    if (seconds_since_first_flap.is_set || is_set(seconds_since_first_flap.yfilter)) leaf_name_data.push_back(seconds_since_first_flap.get_name_leafdata());
    if (time_to_unsuppress.is_set || is_set(time_to_unsuppress.yfilter)) leaf_name_data.push_back(time_to_unsuppress.get_name_leafdata());
    if (dampen_penalty.is_set || is_set(dampen_penalty.yfilter)) leaf_name_data.push_back(dampen_penalty.get_name_leafdata());
    if (halflife_time.is_set || is_set(halflife_time.yfilter)) leaf_name_data.push_back(halflife_time.get_name_leafdata());
    if (suppress_penalty.is_set || is_set(suppress_penalty.yfilter)) leaf_name_data.push_back(suppress_penalty.get_name_leafdata());
    if (reuse_value.is_set || is_set(reuse_value.yfilter)) leaf_name_data.push_back(reuse_value.get_name_leafdata());
    if (maximum_suppress_time.is_set || is_set(maximum_suppress_time.yfilter)) leaf_name_data.push_back(maximum_suppress_time.get_name_leafdata());
    if (best_path_comp_stage.is_set || is_set(best_path_comp_stage.yfilter)) leaf_name_data.push_back(best_path_comp_stage.get_name_leafdata());
    if (best_path_id_comp_winner.is_set || is_set(best_path_id_comp_winner.yfilter)) leaf_name_data.push_back(best_path_id_comp_winner.get_name_leafdata());
    if (path_flags.is_set || is_set(path_flags.yfilter)) leaf_name_data.push_back(path_flags.get_name_leafdata());
    if (path_import_flags.is_set || is_set(path_import_flags.yfilter)) leaf_name_data.push_back(path_import_flags.get_name_leafdata());
    if (best_path_id.is_set || is_set(best_path_id.yfilter)) leaf_name_data.push_back(best_path_id.get_name_leafdata());
    if (local_path_id.is_set || is_set(local_path_id.yfilter)) leaf_name_data.push_back(local_path_id.get_name_leafdata());
    if (rcvd_path_id.is_set || is_set(rcvd_path_id.yfilter)) leaf_name_data.push_back(rcvd_path_id.get_name_leafdata());
    if (path_table_version.is_set || is_set(path_table_version.yfilter)) leaf_name_data.push_back(path_table_version.get_name_leafdata());
    if (advertisedto_pe.is_set || is_set(advertisedto_pe.yfilter)) leaf_name_data.push_back(advertisedto_pe.get_name_leafdata());
    if (rib_failed.is_set || is_set(rib_failed.yfilter)) leaf_name_data.push_back(rib_failed.get_name_leafdata());
    if (sn_rpki_origin_as_validity.is_set || is_set(sn_rpki_origin_as_validity.yfilter)) leaf_name_data.push_back(sn_rpki_origin_as_validity.get_name_leafdata());
    if (show_rpki_origin_as_validity.is_set || is_set(show_rpki_origin_as_validity.yfilter)) leaf_name_data.push_back(show_rpki_origin_as_validity.get_name_leafdata());
    if (ibgp_signaled_validity.is_set || is_set(ibgp_signaled_validity.yfilter)) leaf_name_data.push_back(ibgp_signaled_validity.get_name_leafdata());
    if (rpki_origin_as_validation_disabled.is_set || is_set(rpki_origin_as_validation_disabled.yfilter)) leaf_name_data.push_back(rpki_origin_as_validation_disabled.get_name_leafdata());
    if (accept_own_path.is_set || is_set(accept_own_path.yfilter)) leaf_name_data.push_back(accept_own_path.get_name_leafdata());
    if (accept_own_self_originated_path.is_set || is_set(accept_own_self_originated_path.yfilter)) leaf_name_data.push_back(accept_own_self_originated_path.get_name_leafdata());
    if (aigp_metric.is_set || is_set(aigp_metric.yfilter)) leaf_name_data.push_back(aigp_metric.get_name_leafdata());
    if (mvpn_sfs_path.is_set || is_set(mvpn_sfs_path.yfilter)) leaf_name_data.push_back(mvpn_sfs_path.get_name_leafdata());
    if (fspec_invalid_path.is_set || is_set(fspec_invalid_path.yfilter)) leaf_name_data.push_back(fspec_invalid_path.get_name_leafdata());
    if (has_mvpn_nbr_addr.is_set || is_set(has_mvpn_nbr_addr.yfilter)) leaf_name_data.push_back(has_mvpn_nbr_addr.get_name_leafdata());
    if (has_mvpn_nexthop_addr.is_set || is_set(has_mvpn_nexthop_addr.yfilter)) leaf_name_data.push_back(has_mvpn_nexthop_addr.get_name_leafdata());
    if (has_mvpn_pmsi.is_set || is_set(has_mvpn_pmsi.yfilter)) leaf_name_data.push_back(has_mvpn_pmsi.get_name_leafdata());
    if (mvpn_pmsi_type.is_set || is_set(mvpn_pmsi_type.yfilter)) leaf_name_data.push_back(mvpn_pmsi_type.get_name_leafdata());
    if (mvpn_pmsi_flags.is_set || is_set(mvpn_pmsi_flags.yfilter)) leaf_name_data.push_back(mvpn_pmsi_flags.get_name_leafdata());
    if (mvpn_pmsi_label.is_set || is_set(mvpn_pmsi_label.yfilter)) leaf_name_data.push_back(mvpn_pmsi_label.get_name_leafdata());
    if (has_mvpn_extcomm.is_set || is_set(has_mvpn_extcomm.yfilter)) leaf_name_data.push_back(has_mvpn_extcomm.get_name_leafdata());
    if (mvpn_path_flags.is_set || is_set(mvpn_path_flags.yfilter)) leaf_name_data.push_back(mvpn_path_flags.get_name_leafdata());
    if (local_nh.is_set || is_set(local_nh.yfilter)) leaf_name_data.push_back(local_nh.get_name_leafdata());
    if (rt_set_limit_enabled.is_set || is_set(rt_set_limit_enabled.yfilter)) leaf_name_data.push_back(rt_set_limit_enabled.get_name_leafdata());
    if (path_rt_set_id.is_set || is_set(path_rt_set_id.yfilter)) leaf_name_data.push_back(path_rt_set_id.get_name_leafdata());
    if (path_rt_set_route_count.is_set || is_set(path_rt_set_route_count.yfilter)) leaf_name_data.push_back(path_rt_set_route_count.get_name_leafdata());
    if (is_path_af_install_eligible.is_set || is_set(is_path_af_install_eligible.yfilter)) leaf_name_data.push_back(is_path_af_install_eligible.get_name_leafdata());
    if (is_permanent_path.is_set || is_set(is_permanent_path.yfilter)) leaf_name_data.push_back(is_permanent_path.get_name_leafdata());
    if (graceful_shutdown.is_set || is_set(graceful_shutdown.yfilter)) leaf_name_data.push_back(graceful_shutdown.get_name_leafdata());
    if (labeled_unicast_safi_path.is_set || is_set(labeled_unicast_safi_path.yfilter)) leaf_name_data.push_back(labeled_unicast_safi_path.get_name_leafdata());
    if (has_vpn_nexthop_addr.is_set || is_set(has_vpn_nexthop_addr.yfilter)) leaf_name_data.push_back(has_vpn_nexthop_addr.get_name_leafdata());
    if (is_orig_src_rd_present.is_set || is_set(is_orig_src_rd_present.yfilter)) leaf_name_data.push_back(is_orig_src_rd_present.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (route_distinguisher.is_set || is_set(route_distinguisher.yfilter)) leaf_name_data.push_back(route_distinguisher.get_name_leafdata());
    if (mac_ip_present.is_set || is_set(mac_ip_present.yfilter)) leaf_name_data.push_back(mac_ip_present.get_name_leafdata());
    if (mac_ip.is_set || is_set(mac_ip.yfilter)) leaf_name_data.push_back(mac_ip.get_name_leafdata());
    if (ether_tag_id.is_set || is_set(ether_tag_id.yfilter)) leaf_name_data.push_back(ether_tag_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-prefix")
    {
        if(bgp_prefix == nullptr)
        {
            bgp_prefix = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix>();
        }
        return bgp_prefix;
    }

    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress>();
        }
        return neighbor_address;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop>();
        }
        return next_hop;
    }

    if(child_yang_name == "nh-tunnel")
    {
        if(nh_tunnel == nullptr)
        {
            nh_tunnel = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NhTunnel>();
        }
        return nh_tunnel;
    }

    if(child_yang_name == "mdt-group-addr")
    {
        if(mdt_group_addr == nullptr)
        {
            mdt_group_addr = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr>();
        }
        return mdt_group_addr;
    }

    if(child_yang_name == "gw-addr")
    {
        if(gw_addr == nullptr)
        {
            gw_addr = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::GwAddr>();
        }
        return gw_addr;
    }

    if(child_yang_name == "nh-addr")
    {
        if(nh_addr == nullptr)
        {
            nh_addr = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NhAddr>();
        }
        return nh_addr;
    }

    if(child_yang_name == "best-path-comp-winner")
    {
        if(best_path_comp_winner == nullptr)
        {
            best_path_comp_winner = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner>();
        }
        return best_path_comp_winner;
    }

    if(child_yang_name == "mvpn-nbr-addr")
    {
        if(mvpn_nbr_addr == nullptr)
        {
            mvpn_nbr_addr = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr>();
        }
        return mvpn_nbr_addr;
    }

    if(child_yang_name == "mvpn-nexthop-addr")
    {
        if(mvpn_nexthop_addr == nullptr)
        {
            mvpn_nexthop_addr = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr>();
        }
        return mvpn_nexthop_addr;
    }

    if(child_yang_name == "vpn-nexthop-addr")
    {
        if(vpn_nexthop_addr == nullptr)
        {
            vpn_nexthop_addr = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr>();
        }
        return vpn_nexthop_addr;
    }

    if(child_yang_name == "rcvd-label")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::RcvdLabel>();
        ent_->parent = this;
        rcvd_label.append(ent_);
        return ent_;
    }

    if(child_yang_name == "l2vpn-circuit-status-value")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::L2vpnCircuitStatusValue>();
        ent_->parent = this;
        l2vpn_circuit_status_value.append(ent_);
        return ent_;
    }

    if(child_yang_name == "mvpn-pmsi-value")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnPmsiValue>();
        ent_->parent = this;
        mvpn_pmsi_value.append(ent_);
        return ent_;
    }

    if(child_yang_name == "extended-community")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::ExtendedCommunity>();
        ent_->parent = this;
        extended_community.append(ent_);
        return ent_;
    }

    if(child_yang_name == "local-peers-advertised-to")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo>();
        ent_->parent = this;
        local_peers_advertised_to.append(ent_);
        return ent_;
    }

    if(child_yang_name == "pe-peers-advertised-to")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo>();
        ent_->parent = this;
        pe_peers_advertised_to.append(ent_);
        return ent_;
    }

    if(child_yang_name == "best-path-orr-bitfield")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield>();
        ent_->parent = this;
        best_path_orr_bitfield.append(ent_);
        return ent_;
    }

    if(child_yang_name == "add-path-orr-bitfield")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::AddPathOrrBitfield>();
        ent_->parent = this;
        add_path_orr_bitfield.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bgp_prefix != nullptr)
    {
        _children["bgp-prefix"] = bgp_prefix;
    }

    if(neighbor_address != nullptr)
    {
        _children["neighbor-address"] = neighbor_address;
    }

    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    if(nh_tunnel != nullptr)
    {
        _children["nh-tunnel"] = nh_tunnel;
    }

    if(mdt_group_addr != nullptr)
    {
        _children["mdt-group-addr"] = mdt_group_addr;
    }

    if(gw_addr != nullptr)
    {
        _children["gw-addr"] = gw_addr;
    }

    if(nh_addr != nullptr)
    {
        _children["nh-addr"] = nh_addr;
    }

    if(best_path_comp_winner != nullptr)
    {
        _children["best-path-comp-winner"] = best_path_comp_winner;
    }

    if(mvpn_nbr_addr != nullptr)
    {
        _children["mvpn-nbr-addr"] = mvpn_nbr_addr;
    }

    if(mvpn_nexthop_addr != nullptr)
    {
        _children["mvpn-nexthop-addr"] = mvpn_nexthop_addr;
    }

    if(vpn_nexthop_addr != nullptr)
    {
        _children["vpn-nexthop-addr"] = vpn_nexthop_addr;
    }

    count_ = 0;
    for (auto ent_ : rcvd_label.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : l2vpn_circuit_status_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : mvpn_pmsi_value.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : extended_community.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : local_peers_advertised_to.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : pe_peers_advertised_to.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : best_path_orr_bitfield.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : add_path_orr_bitfield.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-valid")
    {
        is_path_valid = value;
        is_path_valid.value_namespace = name_space;
        is_path_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-damped")
    {
        is_path_damped = value;
        is_path_damped.value_namespace = name_space;
        is_path_damped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-history-held")
    {
        is_path_history_held = value;
        is_path_history_held.value_namespace = name_space;
        is_path_history_held.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-internal-path")
    {
        is_internal_path = value;
        is_internal_path.value_namespace = name_space;
        is_internal_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-best-path")
    {
        is_best_path = value;
        is_best_path.value_namespace = name_space;
        is_best_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-as-best")
    {
        is_as_best = value;
        is_as_best.value_namespace = name_space;
        is_as_best.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-spkr-as-best")
    {
        is_spkr_as_best = value;
        is_spkr_as_best.value_namespace = name_space;
        is_spkr_as_best.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-partial-best")
    {
        is_partial_best = value;
        is_partial_best.value_namespace = name_space;
        is_partial_best.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-aggregation-suppressed")
    {
        is_aggregation_suppressed = value;
        is_aggregation_suppressed.value_namespace = name_space;
        is_aggregation_suppressed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-import-dampened")
    {
        is_import_dampened = value;
        is_import_dampened.value_namespace = name_space;
        is_import_dampened.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-import-suspect")
    {
        is_import_suspect = value;
        is_import_suspect.value_namespace = name_space;
        is_import_suspect.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-not-advertised")
    {
        is_path_not_advertised = value;
        is_path_not_advertised.value_namespace = name_space;
        is_path_not_advertised.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-not-advertised-to-ebgp")
    {
        is_path_not_advertised_to_ebgp = value;
        is_path_not_advertised_to_ebgp.value_namespace = name_space;
        is_path_not_advertised_to_ebgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-advertised-local-as-only")
    {
        is_path_advertised_local_as_only = value;
        is_path_advertised_local_as_only.value_namespace = name_space;
        is_path_advertised_local_as_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-from-route-reflector")
    {
        is_path_from_route_reflector = value;
        is_path_from_route_reflector.value_namespace = name_space;
        is_path_from_route_reflector.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-received-only")
    {
        is_path_received_only = value;
        is_path_received_only.value_namespace = name_space;
        is_path_received_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-received-path-not-modified")
    {
        is_received_path_not_modified = value;
        is_received_path_not_modified.value_namespace = name_space;
        is_received_path_not_modified.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-locally-sourced")
    {
        is_path_locally_sourced = value;
        is_path_locally_sourced.value_namespace = name_space;
        is_path_locally_sourced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-local-aggregate")
    {
        is_path_local_aggregate = value;
        is_path_local_aggregate.value_namespace = name_space;
        is_path_local_aggregate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-from-network-command")
    {
        is_path_from_network_command = value;
        is_path_from_network_command.value_namespace = name_space;
        is_path_from_network_command.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-from-redistribute-command")
    {
        is_path_from_redistribute_command = value;
        is_path_from_redistribute_command.value_namespace = name_space;
        is_path_from_redistribute_command.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-imported")
    {
        is_path_imported = value;
        is_path_imported.value_namespace = name_space;
        is_path_imported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-reoriginated")
    {
        is_path_reoriginated = value;
        is_path_reoriginated.value_namespace = name_space;
        is_path_reoriginated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-reoriginated-stitching")
    {
        is_path_reoriginated_stitching = value;
        is_path_reoriginated_stitching.value_namespace = name_space;
        is_path_reoriginated_stitching.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-vpn-only")
    {
        is_path_vpn_only = value;
        is_path_vpn_only.value_namespace = name_space;
        is_path_vpn_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-from-confederation-peer")
    {
        is_path_from_confederation_peer = value;
        is_path_from_confederation_peer.value_namespace = name_space;
        is_path_from_confederation_peer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-synced-with-igp")
    {
        is_path_synced_with_igp = value;
        is_path_synced_with_igp.value_namespace = name_space;
        is_path_synced_with_igp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-multipath")
    {
        is_path_multipath = value;
        is_path_multipath.value_namespace = name_space;
        is_path_multipath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-imp-candidate")
    {
        is_path_imp_candidate = value;
        is_path_imp_candidate.value_namespace = name_space;
        is_path_imp_candidate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-stale")
    {
        is_path_stale = value;
        is_path_stale.value_namespace = name_space;
        is_path_stale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-long-lived-stale")
    {
        is_path_long_lived_stale = value;
        is_path_long_lived_stale.value_namespace = name_space;
        is_path_long_lived_stale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-backup")
    {
        is_path_backup = value;
        is_path_backup.value_namespace = name_space;
        is_path_backup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-backup-protect-multipath")
    {
        is_path_backup_protect_multipath = value;
        is_path_backup_protect_multipath.value_namespace = name_space;
        is_path_backup_protect_multipath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-best-external")
    {
        is_path_best_external = value;
        is_path_best_external.value_namespace = name_space;
        is_path_best_external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-additional-path")
    {
        is_path_additional_path = value;
        is_path_additional_path.value_namespace = name_space;
        is_path_additional_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-nexthop-discarded")
    {
        is_path_nexthop_discarded = value;
        is_path_nexthop_discarded.value_namespace = name_space;
        is_path_nexthop_discarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-local-net-label")
    {
        has_local_net_label = value;
        has_local_net_label.value_namespace = name_space;
        has_local_net_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-label")
    {
        local_label = value;
        local_label.value_namespace = name_space;
        local_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-metric")
    {
        igp_metric = value;
        igp_metric.value_namespace = name_space;
        igp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-weight")
    {
        path_weight = value;
        path_weight.value_namespace = name_space;
        path_weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-router-id")
    {
        neighbor_router_id = value;
        neighbor_router_id.value_namespace = name_space;
        neighbor_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-mdt-group-addr")
    {
        has_mdt_group_addr = value;
        has_mdt_group_addr.value_namespace = name_space;
        has_mdt_group_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-size")
    {
        l2vpn_size = value;
        l2vpn_size.value_namespace = name_space;
        l2vpn_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-esi")
    {
        l2vpn_evpn_esi = value;
        l2vpn_evpn_esi.value_namespace = name_space;
        l2vpn_evpn_esi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-path-flags")
    {
        evpn_path_flags = value;
        evpn_path_flags.value_namespace = name_space;
        evpn_path_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-gw-addr")
    {
        has_gw_addr = value;
        has_gw_addr.value_namespace = name_space;
        has_gw_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-nh-addr")
    {
        has_nh_addr = value;
        has_nh_addr.value_namespace = name_space;
        has_nh_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-second-label")
    {
        has_second_label = value;
        has_second_label.value_namespace = name_space;
        has_second_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "second-label")
    {
        second_label = value;
        second_label.value_namespace = name_space;
        second_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-flap-count")
    {
        path_flap_count = value;
        path_flap_count.value_namespace = name_space;
        path_flap_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds-since-first-flap")
    {
        seconds_since_first_flap = value;
        seconds_since_first_flap.value_namespace = name_space;
        seconds_since_first_flap.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time-to-unsuppress")
    {
        time_to_unsuppress = value;
        time_to_unsuppress.value_namespace = name_space;
        time_to_unsuppress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dampen-penalty")
    {
        dampen_penalty = value;
        dampen_penalty.value_namespace = name_space;
        dampen_penalty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "halflife-time")
    {
        halflife_time = value;
        halflife_time.value_namespace = name_space;
        halflife_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-penalty")
    {
        suppress_penalty = value;
        suppress_penalty.value_namespace = name_space;
        suppress_penalty.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reuse-value")
    {
        reuse_value = value;
        reuse_value.value_namespace = name_space;
        reuse_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-suppress-time")
    {
        maximum_suppress_time = value;
        maximum_suppress_time.value_namespace = name_space;
        maximum_suppress_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-path-comp-stage")
    {
        best_path_comp_stage = value;
        best_path_comp_stage.value_namespace = name_space;
        best_path_comp_stage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-path-id-comp-winner")
    {
        best_path_id_comp_winner = value;
        best_path_id_comp_winner.value_namespace = name_space;
        best_path_id_comp_winner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-flags")
    {
        path_flags = value;
        path_flags.value_namespace = name_space;
        path_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-import-flags")
    {
        path_import_flags = value;
        path_import_flags.value_namespace = name_space;
        path_import_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-path-id")
    {
        best_path_id = value;
        best_path_id.value_namespace = name_space;
        best_path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-path-id")
    {
        local_path_id = value;
        local_path_id.value_namespace = name_space;
        local_path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rcvd-path-id")
    {
        rcvd_path_id = value;
        rcvd_path_id.value_namespace = name_space;
        rcvd_path_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-table-version")
    {
        path_table_version = value;
        path_table_version.value_namespace = name_space;
        path_table_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertisedto-pe")
    {
        advertisedto_pe = value;
        advertisedto_pe.value_namespace = name_space;
        advertisedto_pe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-failed")
    {
        rib_failed = value;
        rib_failed.value_namespace = name_space;
        rib_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sn-rpki-origin-as-validity")
    {
        sn_rpki_origin_as_validity = value;
        sn_rpki_origin_as_validity.value_namespace = name_space;
        sn_rpki_origin_as_validity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "show-rpki-origin-as-validity")
    {
        show_rpki_origin_as_validity = value;
        show_rpki_origin_as_validity.value_namespace = name_space;
        show_rpki_origin_as_validity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ibgp-signaled-validity")
    {
        ibgp_signaled_validity = value;
        ibgp_signaled_validity.value_namespace = name_space;
        ibgp_signaled_validity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-origin-as-validation-disabled")
    {
        rpki_origin_as_validation_disabled = value;
        rpki_origin_as_validation_disabled.value_namespace = name_space;
        rpki_origin_as_validation_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-own-path")
    {
        accept_own_path = value;
        accept_own_path.value_namespace = name_space;
        accept_own_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accept-own-self-originated-path")
    {
        accept_own_self_originated_path = value;
        accept_own_self_originated_path.value_namespace = name_space;
        accept_own_self_originated_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aigp-metric")
    {
        aigp_metric = value;
        aigp_metric.value_namespace = name_space;
        aigp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mvpn-sfs-path")
    {
        mvpn_sfs_path = value;
        mvpn_sfs_path.value_namespace = name_space;
        mvpn_sfs_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fspec-invalid-path")
    {
        fspec_invalid_path = value;
        fspec_invalid_path.value_namespace = name_space;
        fspec_invalid_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-mvpn-nbr-addr")
    {
        has_mvpn_nbr_addr = value;
        has_mvpn_nbr_addr.value_namespace = name_space;
        has_mvpn_nbr_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-mvpn-nexthop-addr")
    {
        has_mvpn_nexthop_addr = value;
        has_mvpn_nexthop_addr.value_namespace = name_space;
        has_mvpn_nexthop_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-mvpn-pmsi")
    {
        has_mvpn_pmsi = value;
        has_mvpn_pmsi.value_namespace = name_space;
        has_mvpn_pmsi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mvpn-pmsi-type")
    {
        mvpn_pmsi_type = value;
        mvpn_pmsi_type.value_namespace = name_space;
        mvpn_pmsi_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mvpn-pmsi-flags")
    {
        mvpn_pmsi_flags = value;
        mvpn_pmsi_flags.value_namespace = name_space;
        mvpn_pmsi_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mvpn-pmsi-label")
    {
        mvpn_pmsi_label = value;
        mvpn_pmsi_label.value_namespace = name_space;
        mvpn_pmsi_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-mvpn-extcomm")
    {
        has_mvpn_extcomm = value;
        has_mvpn_extcomm.value_namespace = name_space;
        has_mvpn_extcomm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mvpn-path-flags")
    {
        mvpn_path_flags = value;
        mvpn_path_flags.value_namespace = name_space;
        mvpn_path_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-nh")
    {
        local_nh = value;
        local_nh.value_namespace = name_space;
        local_nh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-set-limit-enabled")
    {
        rt_set_limit_enabled = value;
        rt_set_limit_enabled.value_namespace = name_space;
        rt_set_limit_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-rt-set-id")
    {
        path_rt_set_id = value;
        path_rt_set_id.value_namespace = name_space;
        path_rt_set_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-rt-set-route-count")
    {
        path_rt_set_route_count = value;
        path_rt_set_route_count.value_namespace = name_space;
        path_rt_set_route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-path-af-install-eligible")
    {
        is_path_af_install_eligible = value;
        is_path_af_install_eligible.value_namespace = name_space;
        is_path_af_install_eligible.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-permanent-path")
    {
        is_permanent_path = value;
        is_permanent_path.value_namespace = name_space;
        is_permanent_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graceful-shutdown")
    {
        graceful_shutdown = value;
        graceful_shutdown.value_namespace = name_space;
        graceful_shutdown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "labeled-unicast-safi-path")
    {
        labeled_unicast_safi_path = value;
        labeled_unicast_safi_path.value_namespace = name_space;
        labeled_unicast_safi_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "has-vpn-nexthop-addr")
    {
        has_vpn_nexthop_addr = value;
        has_vpn_nexthop_addr.value_namespace = name_space;
        has_vpn_nexthop_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-orig-src-rd-present")
    {
        is_orig_src_rd_present = value;
        is_orig_src_rd_present.value_namespace = name_space;
        is_orig_src_rd_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher = value;
        route_distinguisher.value_namespace = name_space;
        route_distinguisher.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-ip-present")
    {
        mac_ip_present = value;
        mac_ip_present.value_namespace = name_space;
        mac_ip_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-ip")
    {
        mac_ip = value;
        mac_ip.value_namespace = name_space;
        mac_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ether-tag-id")
    {
        ether_tag_id = value;
        ether_tag_id.value_namespace = name_space;
        ether_tag_id.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "is-path-valid")
    {
        is_path_valid.yfilter = yfilter;
    }
    if(value_path == "is-path-damped")
    {
        is_path_damped.yfilter = yfilter;
    }
    if(value_path == "is-path-history-held")
    {
        is_path_history_held.yfilter = yfilter;
    }
    if(value_path == "is-internal-path")
    {
        is_internal_path.yfilter = yfilter;
    }
    if(value_path == "is-best-path")
    {
        is_best_path.yfilter = yfilter;
    }
    if(value_path == "is-as-best")
    {
        is_as_best.yfilter = yfilter;
    }
    if(value_path == "is-spkr-as-best")
    {
        is_spkr_as_best.yfilter = yfilter;
    }
    if(value_path == "is-partial-best")
    {
        is_partial_best.yfilter = yfilter;
    }
    if(value_path == "is-aggregation-suppressed")
    {
        is_aggregation_suppressed.yfilter = yfilter;
    }
    if(value_path == "is-import-dampened")
    {
        is_import_dampened.yfilter = yfilter;
    }
    if(value_path == "is-import-suspect")
    {
        is_import_suspect.yfilter = yfilter;
    }
    if(value_path == "is-path-not-advertised")
    {
        is_path_not_advertised.yfilter = yfilter;
    }
    if(value_path == "is-path-not-advertised-to-ebgp")
    {
        is_path_not_advertised_to_ebgp.yfilter = yfilter;
    }
    if(value_path == "is-path-advertised-local-as-only")
    {
        is_path_advertised_local_as_only.yfilter = yfilter;
    }
    if(value_path == "is-path-from-route-reflector")
    {
        is_path_from_route_reflector.yfilter = yfilter;
    }
    if(value_path == "is-path-received-only")
    {
        is_path_received_only.yfilter = yfilter;
    }
    if(value_path == "is-received-path-not-modified")
    {
        is_received_path_not_modified.yfilter = yfilter;
    }
    if(value_path == "is-path-locally-sourced")
    {
        is_path_locally_sourced.yfilter = yfilter;
    }
    if(value_path == "is-path-local-aggregate")
    {
        is_path_local_aggregate.yfilter = yfilter;
    }
    if(value_path == "is-path-from-network-command")
    {
        is_path_from_network_command.yfilter = yfilter;
    }
    if(value_path == "is-path-from-redistribute-command")
    {
        is_path_from_redistribute_command.yfilter = yfilter;
    }
    if(value_path == "is-path-imported")
    {
        is_path_imported.yfilter = yfilter;
    }
    if(value_path == "is-path-reoriginated")
    {
        is_path_reoriginated.yfilter = yfilter;
    }
    if(value_path == "is-path-reoriginated-stitching")
    {
        is_path_reoriginated_stitching.yfilter = yfilter;
    }
    if(value_path == "is-path-vpn-only")
    {
        is_path_vpn_only.yfilter = yfilter;
    }
    if(value_path == "is-path-from-confederation-peer")
    {
        is_path_from_confederation_peer.yfilter = yfilter;
    }
    if(value_path == "is-path-synced-with-igp")
    {
        is_path_synced_with_igp.yfilter = yfilter;
    }
    if(value_path == "is-path-multipath")
    {
        is_path_multipath.yfilter = yfilter;
    }
    if(value_path == "is-path-imp-candidate")
    {
        is_path_imp_candidate.yfilter = yfilter;
    }
    if(value_path == "is-path-stale")
    {
        is_path_stale.yfilter = yfilter;
    }
    if(value_path == "is-path-long-lived-stale")
    {
        is_path_long_lived_stale.yfilter = yfilter;
    }
    if(value_path == "is-path-backup")
    {
        is_path_backup.yfilter = yfilter;
    }
    if(value_path == "is-path-backup-protect-multipath")
    {
        is_path_backup_protect_multipath.yfilter = yfilter;
    }
    if(value_path == "is-path-best-external")
    {
        is_path_best_external.yfilter = yfilter;
    }
    if(value_path == "is-path-additional-path")
    {
        is_path_additional_path.yfilter = yfilter;
    }
    if(value_path == "is-path-nexthop-discarded")
    {
        is_path_nexthop_discarded.yfilter = yfilter;
    }
    if(value_path == "has-local-net-label")
    {
        has_local_net_label.yfilter = yfilter;
    }
    if(value_path == "local-label")
    {
        local_label.yfilter = yfilter;
    }
    if(value_path == "igp-metric")
    {
        igp_metric.yfilter = yfilter;
    }
    if(value_path == "path-weight")
    {
        path_weight.yfilter = yfilter;
    }
    if(value_path == "neighbor-router-id")
    {
        neighbor_router_id.yfilter = yfilter;
    }
    if(value_path == "has-mdt-group-addr")
    {
        has_mdt_group_addr.yfilter = yfilter;
    }
    if(value_path == "l2vpn-size")
    {
        l2vpn_size.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-esi")
    {
        l2vpn_evpn_esi.yfilter = yfilter;
    }
    if(value_path == "evpn-path-flags")
    {
        evpn_path_flags.yfilter = yfilter;
    }
    if(value_path == "has-gw-addr")
    {
        has_gw_addr.yfilter = yfilter;
    }
    if(value_path == "has-nh-addr")
    {
        has_nh_addr.yfilter = yfilter;
    }
    if(value_path == "has-second-label")
    {
        has_second_label.yfilter = yfilter;
    }
    if(value_path == "second-label")
    {
        second_label.yfilter = yfilter;
    }
    if(value_path == "path-flap-count")
    {
        path_flap_count.yfilter = yfilter;
    }
    if(value_path == "seconds-since-first-flap")
    {
        seconds_since_first_flap.yfilter = yfilter;
    }
    if(value_path == "time-to-unsuppress")
    {
        time_to_unsuppress.yfilter = yfilter;
    }
    if(value_path == "dampen-penalty")
    {
        dampen_penalty.yfilter = yfilter;
    }
    if(value_path == "halflife-time")
    {
        halflife_time.yfilter = yfilter;
    }
    if(value_path == "suppress-penalty")
    {
        suppress_penalty.yfilter = yfilter;
    }
    if(value_path == "reuse-value")
    {
        reuse_value.yfilter = yfilter;
    }
    if(value_path == "maximum-suppress-time")
    {
        maximum_suppress_time.yfilter = yfilter;
    }
    if(value_path == "best-path-comp-stage")
    {
        best_path_comp_stage.yfilter = yfilter;
    }
    if(value_path == "best-path-id-comp-winner")
    {
        best_path_id_comp_winner.yfilter = yfilter;
    }
    if(value_path == "path-flags")
    {
        path_flags.yfilter = yfilter;
    }
    if(value_path == "path-import-flags")
    {
        path_import_flags.yfilter = yfilter;
    }
    if(value_path == "best-path-id")
    {
        best_path_id.yfilter = yfilter;
    }
    if(value_path == "local-path-id")
    {
        local_path_id.yfilter = yfilter;
    }
    if(value_path == "rcvd-path-id")
    {
        rcvd_path_id.yfilter = yfilter;
    }
    if(value_path == "path-table-version")
    {
        path_table_version.yfilter = yfilter;
    }
    if(value_path == "advertisedto-pe")
    {
        advertisedto_pe.yfilter = yfilter;
    }
    if(value_path == "rib-failed")
    {
        rib_failed.yfilter = yfilter;
    }
    if(value_path == "sn-rpki-origin-as-validity")
    {
        sn_rpki_origin_as_validity.yfilter = yfilter;
    }
    if(value_path == "show-rpki-origin-as-validity")
    {
        show_rpki_origin_as_validity.yfilter = yfilter;
    }
    if(value_path == "ibgp-signaled-validity")
    {
        ibgp_signaled_validity.yfilter = yfilter;
    }
    if(value_path == "rpki-origin-as-validation-disabled")
    {
        rpki_origin_as_validation_disabled.yfilter = yfilter;
    }
    if(value_path == "accept-own-path")
    {
        accept_own_path.yfilter = yfilter;
    }
    if(value_path == "accept-own-self-originated-path")
    {
        accept_own_self_originated_path.yfilter = yfilter;
    }
    if(value_path == "aigp-metric")
    {
        aigp_metric.yfilter = yfilter;
    }
    if(value_path == "mvpn-sfs-path")
    {
        mvpn_sfs_path.yfilter = yfilter;
    }
    if(value_path == "fspec-invalid-path")
    {
        fspec_invalid_path.yfilter = yfilter;
    }
    if(value_path == "has-mvpn-nbr-addr")
    {
        has_mvpn_nbr_addr.yfilter = yfilter;
    }
    if(value_path == "has-mvpn-nexthop-addr")
    {
        has_mvpn_nexthop_addr.yfilter = yfilter;
    }
    if(value_path == "has-mvpn-pmsi")
    {
        has_mvpn_pmsi.yfilter = yfilter;
    }
    if(value_path == "mvpn-pmsi-type")
    {
        mvpn_pmsi_type.yfilter = yfilter;
    }
    if(value_path == "mvpn-pmsi-flags")
    {
        mvpn_pmsi_flags.yfilter = yfilter;
    }
    if(value_path == "mvpn-pmsi-label")
    {
        mvpn_pmsi_label.yfilter = yfilter;
    }
    if(value_path == "has-mvpn-extcomm")
    {
        has_mvpn_extcomm.yfilter = yfilter;
    }
    if(value_path == "mvpn-path-flags")
    {
        mvpn_path_flags.yfilter = yfilter;
    }
    if(value_path == "local-nh")
    {
        local_nh.yfilter = yfilter;
    }
    if(value_path == "rt-set-limit-enabled")
    {
        rt_set_limit_enabled.yfilter = yfilter;
    }
    if(value_path == "path-rt-set-id")
    {
        path_rt_set_id.yfilter = yfilter;
    }
    if(value_path == "path-rt-set-route-count")
    {
        path_rt_set_route_count.yfilter = yfilter;
    }
    if(value_path == "is-path-af-install-eligible")
    {
        is_path_af_install_eligible.yfilter = yfilter;
    }
    if(value_path == "is-permanent-path")
    {
        is_permanent_path.yfilter = yfilter;
    }
    if(value_path == "graceful-shutdown")
    {
        graceful_shutdown.yfilter = yfilter;
    }
    if(value_path == "labeled-unicast-safi-path")
    {
        labeled_unicast_safi_path.yfilter = yfilter;
    }
    if(value_path == "has-vpn-nexthop-addr")
    {
        has_vpn_nexthop_addr.yfilter = yfilter;
    }
    if(value_path == "is-orig-src-rd-present")
    {
        is_orig_src_rd_present.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher.yfilter = yfilter;
    }
    if(value_path == "mac-ip-present")
    {
        mac_ip_present.yfilter = yfilter;
    }
    if(value_path == "mac-ip")
    {
        mac_ip.yfilter = yfilter;
    }
    if(value_path == "ether-tag-id")
    {
        ether_tag_id.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-prefix" || name == "neighbor-address" || name == "next-hop" || name == "nh-tunnel" || name == "mdt-group-addr" || name == "gw-addr" || name == "nh-addr" || name == "best-path-comp-winner" || name == "mvpn-nbr-addr" || name == "mvpn-nexthop-addr" || name == "vpn-nexthop-addr" || name == "rcvd-label" || name == "l2vpn-circuit-status-value" || name == "mvpn-pmsi-value" || name == "extended-community" || name == "local-peers-advertised-to" || name == "pe-peers-advertised-to" || name == "best-path-orr-bitfield" || name == "add-path-orr-bitfield" || name == "route-type" || name == "is-path-valid" || name == "is-path-damped" || name == "is-path-history-held" || name == "is-internal-path" || name == "is-best-path" || name == "is-as-best" || name == "is-spkr-as-best" || name == "is-partial-best" || name == "is-aggregation-suppressed" || name == "is-import-dampened" || name == "is-import-suspect" || name == "is-path-not-advertised" || name == "is-path-not-advertised-to-ebgp" || name == "is-path-advertised-local-as-only" || name == "is-path-from-route-reflector" || name == "is-path-received-only" || name == "is-received-path-not-modified" || name == "is-path-locally-sourced" || name == "is-path-local-aggregate" || name == "is-path-from-network-command" || name == "is-path-from-redistribute-command" || name == "is-path-imported" || name == "is-path-reoriginated" || name == "is-path-reoriginated-stitching" || name == "is-path-vpn-only" || name == "is-path-from-confederation-peer" || name == "is-path-synced-with-igp" || name == "is-path-multipath" || name == "is-path-imp-candidate" || name == "is-path-stale" || name == "is-path-long-lived-stale" || name == "is-path-backup" || name == "is-path-backup-protect-multipath" || name == "is-path-best-external" || name == "is-path-additional-path" || name == "is-path-nexthop-discarded" || name == "has-local-net-label" || name == "local-label" || name == "igp-metric" || name == "path-weight" || name == "neighbor-router-id" || name == "has-mdt-group-addr" || name == "l2vpn-size" || name == "l2vpn-evpn-esi" || name == "evpn-path-flags" || name == "has-gw-addr" || name == "has-nh-addr" || name == "has-second-label" || name == "second-label" || name == "path-flap-count" || name == "seconds-since-first-flap" || name == "time-to-unsuppress" || name == "dampen-penalty" || name == "halflife-time" || name == "suppress-penalty" || name == "reuse-value" || name == "maximum-suppress-time" || name == "best-path-comp-stage" || name == "best-path-id-comp-winner" || name == "path-flags" || name == "path-import-flags" || name == "best-path-id" || name == "local-path-id" || name == "rcvd-path-id" || name == "path-table-version" || name == "advertisedto-pe" || name == "rib-failed" || name == "sn-rpki-origin-as-validity" || name == "show-rpki-origin-as-validity" || name == "ibgp-signaled-validity" || name == "rpki-origin-as-validation-disabled" || name == "accept-own-path" || name == "accept-own-self-originated-path" || name == "aigp-metric" || name == "mvpn-sfs-path" || name == "fspec-invalid-path" || name == "has-mvpn-nbr-addr" || name == "has-mvpn-nexthop-addr" || name == "has-mvpn-pmsi" || name == "mvpn-pmsi-type" || name == "mvpn-pmsi-flags" || name == "mvpn-pmsi-label" || name == "has-mvpn-extcomm" || name == "mvpn-path-flags" || name == "local-nh" || name == "rt-set-limit-enabled" || name == "path-rt-set-id" || name == "path-rt-set-route-count" || name == "is-path-af-install-eligible" || name == "is-permanent-path" || name == "graceful-shutdown" || name == "labeled-unicast-safi-path" || name == "has-vpn-nexthop-addr" || name == "is-orig-src-rd-present" || name == "af-name" || name == "route-distinguisher" || name == "mac-ip-present" || name == "mac-ip" || name == "ether-tag-id")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::BgpPrefix()
    :
    prefix_length{YType::uint16, "prefix-length"}
        ,
    prefix(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix>())
{
    prefix->parent = this;

    yang_name = "bgp-prefix"; yang_parent_name = "path-info-after-policy-in"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::~BgpPrefix()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::has_data() const
{
    if (is_presence_container) return true;
    return prefix_length.is_set
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix != nullptr)
    {
        _children["prefix"] = prefix;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::Prefix()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
        ,
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::L2vpnVplsAddress>())
    , l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::L2vpnMspwAddress>())
    , ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::Ipv4SrPolicyAddress>())
    , ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "prefix"; yang_parent_name = "bgp-prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::~Prefix()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::L2vpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::L2vpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(l2vpn_vpls_address != nullptr)
    {
        _children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        _children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        _children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        _children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::L2vpnVplsAddress::L2vpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::L2vpnVplsAddress::~L2vpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::L2vpnVplsAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::L2vpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::L2vpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::L2vpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::L2vpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::L2vpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::L2vpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::L2vpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::L2vpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::L2vpnMspwAddress::L2vpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::L2vpnMspwAddress::~L2vpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::L2vpnMspwAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::L2vpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::L2vpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::L2vpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::L2vpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::L2vpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::L2vpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::L2vpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::L2vpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::Ipv4SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::Ipv6SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BgpPrefix::Prefix::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
        ,
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::L2vpnVplsAddress>())
    , l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::L2vpnMspwAddress>())
    , ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::Ipv4SrPolicyAddress>())
    , ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "path-info-after-policy-in"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::L2vpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::L2vpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(l2vpn_vpls_address != nullptr)
    {
        _children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        _children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        _children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        _children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::L2vpnVplsAddress::L2vpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::L2vpnVplsAddress::~L2vpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::L2vpnVplsAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::L2vpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::L2vpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::L2vpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::L2vpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::L2vpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::L2vpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::L2vpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::L2vpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::L2vpnMspwAddress::L2vpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::L2vpnMspwAddress::~L2vpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::L2vpnMspwAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::L2vpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::L2vpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::L2vpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::L2vpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::L2vpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::L2vpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::L2vpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::L2vpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::NextHop()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
        ,
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::L2vpnVplsAddress>())
    , l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::L2vpnMspwAddress>())
    , ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::Ipv4SrPolicyAddress>())
    , ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "next-hop"; yang_parent_name = "path-info-after-policy-in"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::~NextHop()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::L2vpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::L2vpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(l2vpn_vpls_address != nullptr)
    {
        _children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        _children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        _children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        _children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::L2vpnVplsAddress::L2vpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::L2vpnVplsAddress::~L2vpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::L2vpnVplsAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::L2vpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::L2vpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::L2vpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::L2vpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::L2vpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::L2vpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::L2vpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::L2vpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::L2vpnMspwAddress::L2vpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::L2vpnMspwAddress::~L2vpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::L2vpnMspwAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::L2vpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::L2vpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::L2vpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::L2vpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::L2vpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::L2vpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::L2vpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::L2vpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::Ipv4SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "next-hop"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::Ipv6SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NextHop::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NhTunnel::NhTunnel()
    :
    tunnel_type{YType::enumeration, "tunnel-type"},
    tunnel_name{YType::str, "tunnel-name"},
    is_tunnel_up{YType::boolean, "is-tunnel-up"},
    is_tunnel_info_stale{YType::boolean, "is-tunnel-info-stale"},
    is_tunnel_registered{YType::boolean, "is-tunnel-registered"},
    is_bgp_te_registered{YType::boolean, "is-bgp-te-registered"},
    tunnel_v6_required{YType::boolean, "tunnel-v6-required"},
    tunnel_v6_enabled{YType::boolean, "tunnel-v6-enabled"},
    tunnel_notif_first_rcvd{YType::boolean, "tunnel-notif-first-rcvd"},
    tunnel_state_skip_reg{YType::boolean, "tunnel-state-skip-reg"},
    binding_label{YType::uint32, "binding-label"},
    tunnel_if_handle{YType::uint32, "tunnel-if-handle"},
    last_tunnel_update{YType::uint32, "last-tunnel-update"},
    tunnel_color{YType::uint32, "tunnel-color"},
    is_tunnel_color_only{YType::boolean, "is-tunnel-color-only"},
    tunnel_endpoint_afi{YType::enumeration, "tunnel-endpoint-afi"},
    flags{YType::uint32, "flags"}
{

    yang_name = "nh-tunnel"; yang_parent_name = "path-info-after-policy-in"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NhTunnel::~NhTunnel()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NhTunnel::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_type.is_set
	|| tunnel_name.is_set
	|| is_tunnel_up.is_set
	|| is_tunnel_info_stale.is_set
	|| is_tunnel_registered.is_set
	|| is_bgp_te_registered.is_set
	|| tunnel_v6_required.is_set
	|| tunnel_v6_enabled.is_set
	|| tunnel_notif_first_rcvd.is_set
	|| tunnel_state_skip_reg.is_set
	|| binding_label.is_set
	|| tunnel_if_handle.is_set
	|| last_tunnel_update.is_set
	|| tunnel_color.is_set
	|| is_tunnel_color_only.is_set
	|| tunnel_endpoint_afi.is_set
	|| flags.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NhTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_type.yfilter)
	|| ydk::is_set(tunnel_name.yfilter)
	|| ydk::is_set(is_tunnel_up.yfilter)
	|| ydk::is_set(is_tunnel_info_stale.yfilter)
	|| ydk::is_set(is_tunnel_registered.yfilter)
	|| ydk::is_set(is_bgp_te_registered.yfilter)
	|| ydk::is_set(tunnel_v6_required.yfilter)
	|| ydk::is_set(tunnel_v6_enabled.yfilter)
	|| ydk::is_set(tunnel_notif_first_rcvd.yfilter)
	|| ydk::is_set(tunnel_state_skip_reg.yfilter)
	|| ydk::is_set(binding_label.yfilter)
	|| ydk::is_set(tunnel_if_handle.yfilter)
	|| ydk::is_set(last_tunnel_update.yfilter)
	|| ydk::is_set(tunnel_color.yfilter)
	|| ydk::is_set(is_tunnel_color_only.yfilter)
	|| ydk::is_set(tunnel_endpoint_afi.yfilter)
	|| ydk::is_set(flags.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NhTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nh-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NhTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_type.is_set || is_set(tunnel_type.yfilter)) leaf_name_data.push_back(tunnel_type.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.yfilter)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (is_tunnel_up.is_set || is_set(is_tunnel_up.yfilter)) leaf_name_data.push_back(is_tunnel_up.get_name_leafdata());
    if (is_tunnel_info_stale.is_set || is_set(is_tunnel_info_stale.yfilter)) leaf_name_data.push_back(is_tunnel_info_stale.get_name_leafdata());
    if (is_tunnel_registered.is_set || is_set(is_tunnel_registered.yfilter)) leaf_name_data.push_back(is_tunnel_registered.get_name_leafdata());
    if (is_bgp_te_registered.is_set || is_set(is_bgp_te_registered.yfilter)) leaf_name_data.push_back(is_bgp_te_registered.get_name_leafdata());
    if (tunnel_v6_required.is_set || is_set(tunnel_v6_required.yfilter)) leaf_name_data.push_back(tunnel_v6_required.get_name_leafdata());
    if (tunnel_v6_enabled.is_set || is_set(tunnel_v6_enabled.yfilter)) leaf_name_data.push_back(tunnel_v6_enabled.get_name_leafdata());
    if (tunnel_notif_first_rcvd.is_set || is_set(tunnel_notif_first_rcvd.yfilter)) leaf_name_data.push_back(tunnel_notif_first_rcvd.get_name_leafdata());
    if (tunnel_state_skip_reg.is_set || is_set(tunnel_state_skip_reg.yfilter)) leaf_name_data.push_back(tunnel_state_skip_reg.get_name_leafdata());
    if (binding_label.is_set || is_set(binding_label.yfilter)) leaf_name_data.push_back(binding_label.get_name_leafdata());
    if (tunnel_if_handle.is_set || is_set(tunnel_if_handle.yfilter)) leaf_name_data.push_back(tunnel_if_handle.get_name_leafdata());
    if (last_tunnel_update.is_set || is_set(last_tunnel_update.yfilter)) leaf_name_data.push_back(last_tunnel_update.get_name_leafdata());
    if (tunnel_color.is_set || is_set(tunnel_color.yfilter)) leaf_name_data.push_back(tunnel_color.get_name_leafdata());
    if (is_tunnel_color_only.is_set || is_set(is_tunnel_color_only.yfilter)) leaf_name_data.push_back(is_tunnel_color_only.get_name_leafdata());
    if (tunnel_endpoint_afi.is_set || is_set(tunnel_endpoint_afi.yfilter)) leaf_name_data.push_back(tunnel_endpoint_afi.get_name_leafdata());
    if (flags.is_set || is_set(flags.yfilter)) leaf_name_data.push_back(flags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NhTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NhTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NhTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-type")
    {
        tunnel_type = value;
        tunnel_type.value_namespace = name_space;
        tunnel_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
        tunnel_name.value_namespace = name_space;
        tunnel_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tunnel-up")
    {
        is_tunnel_up = value;
        is_tunnel_up.value_namespace = name_space;
        is_tunnel_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tunnel-info-stale")
    {
        is_tunnel_info_stale = value;
        is_tunnel_info_stale.value_namespace = name_space;
        is_tunnel_info_stale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tunnel-registered")
    {
        is_tunnel_registered = value;
        is_tunnel_registered.value_namespace = name_space;
        is_tunnel_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bgp-te-registered")
    {
        is_bgp_te_registered = value;
        is_bgp_te_registered.value_namespace = name_space;
        is_bgp_te_registered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-v6-required")
    {
        tunnel_v6_required = value;
        tunnel_v6_required.value_namespace = name_space;
        tunnel_v6_required.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-v6-enabled")
    {
        tunnel_v6_enabled = value;
        tunnel_v6_enabled.value_namespace = name_space;
        tunnel_v6_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-notif-first-rcvd")
    {
        tunnel_notif_first_rcvd = value;
        tunnel_notif_first_rcvd.value_namespace = name_space;
        tunnel_notif_first_rcvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-state-skip-reg")
    {
        tunnel_state_skip_reg = value;
        tunnel_state_skip_reg.value_namespace = name_space;
        tunnel_state_skip_reg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "binding-label")
    {
        binding_label = value;
        binding_label.value_namespace = name_space;
        binding_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-if-handle")
    {
        tunnel_if_handle = value;
        tunnel_if_handle.value_namespace = name_space;
        tunnel_if_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-tunnel-update")
    {
        last_tunnel_update = value;
        last_tunnel_update.value_namespace = name_space;
        last_tunnel_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-color")
    {
        tunnel_color = value;
        tunnel_color.value_namespace = name_space;
        tunnel_color.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tunnel-color-only")
    {
        is_tunnel_color_only = value;
        is_tunnel_color_only.value_namespace = name_space;
        is_tunnel_color_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-endpoint-afi")
    {
        tunnel_endpoint_afi = value;
        tunnel_endpoint_afi.value_namespace = name_space;
        tunnel_endpoint_afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flags")
    {
        flags = value;
        flags.value_namespace = name_space;
        flags.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NhTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-type")
    {
        tunnel_type.yfilter = yfilter;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name.yfilter = yfilter;
    }
    if(value_path == "is-tunnel-up")
    {
        is_tunnel_up.yfilter = yfilter;
    }
    if(value_path == "is-tunnel-info-stale")
    {
        is_tunnel_info_stale.yfilter = yfilter;
    }
    if(value_path == "is-tunnel-registered")
    {
        is_tunnel_registered.yfilter = yfilter;
    }
    if(value_path == "is-bgp-te-registered")
    {
        is_bgp_te_registered.yfilter = yfilter;
    }
    if(value_path == "tunnel-v6-required")
    {
        tunnel_v6_required.yfilter = yfilter;
    }
    if(value_path == "tunnel-v6-enabled")
    {
        tunnel_v6_enabled.yfilter = yfilter;
    }
    if(value_path == "tunnel-notif-first-rcvd")
    {
        tunnel_notif_first_rcvd.yfilter = yfilter;
    }
    if(value_path == "tunnel-state-skip-reg")
    {
        tunnel_state_skip_reg.yfilter = yfilter;
    }
    if(value_path == "binding-label")
    {
        binding_label.yfilter = yfilter;
    }
    if(value_path == "tunnel-if-handle")
    {
        tunnel_if_handle.yfilter = yfilter;
    }
    if(value_path == "last-tunnel-update")
    {
        last_tunnel_update.yfilter = yfilter;
    }
    if(value_path == "tunnel-color")
    {
        tunnel_color.yfilter = yfilter;
    }
    if(value_path == "is-tunnel-color-only")
    {
        is_tunnel_color_only.yfilter = yfilter;
    }
    if(value_path == "tunnel-endpoint-afi")
    {
        tunnel_endpoint_afi.yfilter = yfilter;
    }
    if(value_path == "flags")
    {
        flags.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NhTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-type" || name == "tunnel-name" || name == "is-tunnel-up" || name == "is-tunnel-info-stale" || name == "is-tunnel-registered" || name == "is-bgp-te-registered" || name == "tunnel-v6-required" || name == "tunnel-v6-enabled" || name == "tunnel-notif-first-rcvd" || name == "tunnel-state-skip-reg" || name == "binding-label" || name == "tunnel-if-handle" || name == "last-tunnel-update" || name == "tunnel-color" || name == "is-tunnel-color-only" || name == "tunnel-endpoint-afi" || name == "flags")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::MdtGroupAddr()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
        ,
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::L2vpnVplsAddress>())
    , l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::L2vpnMspwAddress>())
    , ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::Ipv4SrPolicyAddress>())
    , ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "mdt-group-addr"; yang_parent_name = "path-info-after-policy-in"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::~MdtGroupAddr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mdt-group-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::L2vpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::L2vpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(l2vpn_vpls_address != nullptr)
    {
        _children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        _children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        _children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        _children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::L2vpnVplsAddress::L2vpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "mdt-group-addr"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::L2vpnVplsAddress::~L2vpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::L2vpnVplsAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::L2vpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::L2vpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::L2vpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::L2vpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::L2vpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::L2vpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::L2vpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::L2vpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::L2vpnMspwAddress::L2vpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "mdt-group-addr"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::L2vpnMspwAddress::~L2vpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::L2vpnMspwAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::L2vpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::L2vpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::L2vpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::L2vpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::L2vpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::L2vpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::L2vpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::L2vpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "mdt-group-addr"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::Ipv4SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "mdt-group-addr"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::Ipv6SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MdtGroupAddr::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::GwAddr::GwAddr()
    :
    len{YType::enumeration, "len"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "gw-addr"; yang_parent_name = "path-info-after-policy-in"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::GwAddr::~GwAddr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::GwAddr::has_data() const
{
    if (is_presence_container) return true;
    return len.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::GwAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::GwAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gw-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::GwAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::GwAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::GwAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::GwAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::GwAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::GwAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "len" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NhAddr::NhAddr()
    :
    len{YType::enumeration, "len"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "nh-addr"; yang_parent_name = "path-info-after-policy-in"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NhAddr::~NhAddr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NhAddr::has_data() const
{
    if (is_presence_container) return true;
    return len.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NhAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NhAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nh-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NhAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NhAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NhAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NhAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NhAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::NhAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "len" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::BestPathCompWinner()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
        ,
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::L2vpnVplsAddress>())
    , l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::L2vpnMspwAddress>())
    , ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::Ipv4SrPolicyAddress>())
    , ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "best-path-comp-winner"; yang_parent_name = "path-info-after-policy-in"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::~BestPathCompWinner()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best-path-comp-winner";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::L2vpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::L2vpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(l2vpn_vpls_address != nullptr)
    {
        _children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        _children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        _children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        _children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::L2vpnVplsAddress::L2vpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "best-path-comp-winner"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::L2vpnVplsAddress::~L2vpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::L2vpnVplsAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::L2vpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::L2vpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::L2vpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::L2vpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::L2vpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::L2vpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::L2vpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::L2vpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::L2vpnMspwAddress::L2vpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "best-path-comp-winner"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::L2vpnMspwAddress::~L2vpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::L2vpnMspwAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::L2vpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::L2vpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::L2vpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::L2vpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::L2vpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::L2vpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::L2vpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::L2vpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "best-path-comp-winner"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::Ipv4SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "best-path-comp-winner"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::Ipv6SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathCompWinner::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::MvpnNbrAddr()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
        ,
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::L2vpnVplsAddress>())
    , l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::L2vpnMspwAddress>())
    , ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::Ipv4SrPolicyAddress>())
    , ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "mvpn-nbr-addr"; yang_parent_name = "path-info-after-policy-in"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::~MvpnNbrAddr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mvpn-nbr-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::L2vpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::L2vpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(l2vpn_vpls_address != nullptr)
    {
        _children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        _children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        _children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        _children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::L2vpnVplsAddress::L2vpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "mvpn-nbr-addr"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::L2vpnVplsAddress::~L2vpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::L2vpnVplsAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::L2vpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::L2vpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::L2vpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::L2vpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::L2vpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::L2vpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::L2vpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::L2vpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::L2vpnMspwAddress::L2vpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "mvpn-nbr-addr"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::L2vpnMspwAddress::~L2vpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::L2vpnMspwAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::L2vpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::L2vpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::L2vpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::L2vpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::L2vpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::L2vpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::L2vpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::L2vpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "mvpn-nbr-addr"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::Ipv4SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "mvpn-nbr-addr"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::Ipv6SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNbrAddr::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::MvpnNexthopAddr()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
        ,
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::L2vpnVplsAddress>())
    , l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::L2vpnMspwAddress>())
    , ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::Ipv4SrPolicyAddress>())
    , ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "mvpn-nexthop-addr"; yang_parent_name = "path-info-after-policy-in"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::~MvpnNexthopAddr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mvpn-nexthop-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::L2vpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::L2vpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(l2vpn_vpls_address != nullptr)
    {
        _children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        _children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        _children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        _children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::L2vpnVplsAddress::L2vpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "mvpn-nexthop-addr"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::L2vpnVplsAddress::~L2vpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::L2vpnVplsAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::L2vpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::L2vpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::L2vpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::L2vpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::L2vpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::L2vpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::L2vpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::L2vpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::L2vpnMspwAddress::L2vpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "mvpn-nexthop-addr"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::L2vpnMspwAddress::~L2vpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::L2vpnMspwAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::L2vpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::L2vpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::L2vpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::L2vpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::L2vpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::L2vpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::L2vpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::L2vpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "mvpn-nexthop-addr"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::Ipv4SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "mvpn-nexthop-addr"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::Ipv6SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnNexthopAddr::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::VpnNexthopAddr()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
        ,
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::L2vpnVplsAddress>())
    , l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::L2vpnMspwAddress>())
    , ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::Ipv4SrPolicyAddress>())
    , ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "vpn-nexthop-addr"; yang_parent_name = "path-info-after-policy-in"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::~VpnNexthopAddr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpn-nexthop-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::L2vpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::L2vpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(l2vpn_vpls_address != nullptr)
    {
        _children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        _children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        _children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        _children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::L2vpnVplsAddress::L2vpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "vpn-nexthop-addr"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::L2vpnVplsAddress::~L2vpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::L2vpnVplsAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::L2vpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::L2vpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::L2vpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::L2vpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::L2vpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::L2vpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::L2vpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::L2vpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::L2vpnMspwAddress::L2vpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "vpn-nexthop-addr"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::L2vpnMspwAddress::~L2vpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::L2vpnMspwAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::L2vpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::L2vpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::L2vpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::L2vpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::L2vpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::L2vpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::L2vpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::L2vpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "vpn-nexthop-addr"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::Ipv4SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "vpn-nexthop-addr"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::Ipv6SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::VpnNexthopAddr::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::RcvdLabel::RcvdLabel()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "rcvd-label"; yang_parent_name = "path-info-after-policy-in"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::RcvdLabel::~RcvdLabel()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::RcvdLabel::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::RcvdLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::RcvdLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rcvd-label";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::RcvdLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::RcvdLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::RcvdLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::RcvdLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::RcvdLabel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::RcvdLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::L2vpnCircuitStatusValue::L2vpnCircuitStatusValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "l2vpn-circuit-status-value"; yang_parent_name = "path-info-after-policy-in"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::L2vpnCircuitStatusValue::~L2vpnCircuitStatusValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::L2vpnCircuitStatusValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::L2vpnCircuitStatusValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::L2vpnCircuitStatusValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-circuit-status-value";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::L2vpnCircuitStatusValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::L2vpnCircuitStatusValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::L2vpnCircuitStatusValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::L2vpnCircuitStatusValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::L2vpnCircuitStatusValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::L2vpnCircuitStatusValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnPmsiValue::MvpnPmsiValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "mvpn-pmsi-value"; yang_parent_name = "path-info-after-policy-in"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnPmsiValue::~MvpnPmsiValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnPmsiValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnPmsiValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnPmsiValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mvpn-pmsi-value";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnPmsiValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnPmsiValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnPmsiValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnPmsiValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnPmsiValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::MvpnPmsiValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::ExtendedCommunity::ExtendedCommunity()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "extended-community"; yang_parent_name = "path-info-after-policy-in"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::ExtendedCommunity::~ExtendedCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::ExtendedCommunity::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::ExtendedCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::ExtendedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::ExtendedCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::ExtendedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::ExtendedCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::ExtendedCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::ExtendedCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::ExtendedCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::LocalPeersAdvertisedTo()
    :
    is_neighbor{YType::boolean, "is-neighbor"},
    update_group_afi{YType::uint8, "update-group-afi"},
    update_group_number{YType::uint32, "update-group-number"}
        ,
    neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "local-peers-advertised-to"; yang_parent_name = "path-info-after-policy-in"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::~LocalPeersAdvertisedTo()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::has_data() const
{
    if (is_presence_container) return true;
    return is_neighbor.is_set
	|| update_group_afi.is_set
	|| update_group_number.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_neighbor.yfilter)
	|| ydk::is_set(update_group_afi.yfilter)
	|| ydk::is_set(update_group_number.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-peers-advertised-to";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_neighbor.is_set || is_set(is_neighbor.yfilter)) leaf_name_data.push_back(is_neighbor.get_name_leafdata());
    if (update_group_afi.is_set || is_set(update_group_afi.yfilter)) leaf_name_data.push_back(update_group_afi.get_name_leafdata());
    if (update_group_number.is_set || is_set(update_group_number.yfilter)) leaf_name_data.push_back(update_group_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(neighbor_address != nullptr)
    {
        _children["neighbor-address"] = neighbor_address;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-neighbor")
    {
        is_neighbor = value;
        is_neighbor.value_namespace = name_space;
        is_neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-group-afi")
    {
        update_group_afi = value;
        update_group_afi.value_namespace = name_space;
        update_group_afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-group-number")
    {
        update_group_number = value;
        update_group_number.value_namespace = name_space;
        update_group_number.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-neighbor")
    {
        is_neighbor.yfilter = yfilter;
    }
    if(value_path == "update-group-afi")
    {
        update_group_afi.yfilter = yfilter;
    }
    if(value_path == "update-group-number")
    {
        update_group_number.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "is-neighbor" || name == "update-group-afi" || name == "update-group-number")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
        ,
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::L2vpnVplsAddress>())
    , l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::L2vpnMspwAddress>())
    , ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress>())
    , ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "local-peers-advertised-to"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::L2vpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::L2vpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(l2vpn_vpls_address != nullptr)
    {
        _children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        _children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        _children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        _children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::L2vpnVplsAddress::L2vpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::L2vpnVplsAddress::~L2vpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::L2vpnVplsAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::L2vpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::L2vpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::L2vpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::L2vpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::L2vpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::L2vpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::L2vpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::L2vpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::L2vpnMspwAddress::L2vpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::L2vpnMspwAddress::~L2vpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::L2vpnMspwAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::L2vpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::L2vpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::L2vpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::L2vpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::L2vpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::L2vpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::L2vpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::L2vpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::PePeersAdvertisedTo()
    :
    is_neighbor{YType::boolean, "is-neighbor"},
    update_group_afi{YType::uint8, "update-group-afi"},
    update_group_number{YType::uint32, "update-group-number"}
        ,
    neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "pe-peers-advertised-to"; yang_parent_name = "path-info-after-policy-in"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::~PePeersAdvertisedTo()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::has_data() const
{
    if (is_presence_container) return true;
    return is_neighbor.is_set
	|| update_group_afi.is_set
	|| update_group_number.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_neighbor.yfilter)
	|| ydk::is_set(update_group_afi.yfilter)
	|| ydk::is_set(update_group_number.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-peers-advertised-to";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_neighbor.is_set || is_set(is_neighbor.yfilter)) leaf_name_data.push_back(is_neighbor.get_name_leafdata());
    if (update_group_afi.is_set || is_set(update_group_afi.yfilter)) leaf_name_data.push_back(update_group_afi.get_name_leafdata());
    if (update_group_number.is_set || is_set(update_group_number.yfilter)) leaf_name_data.push_back(update_group_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(neighbor_address != nullptr)
    {
        _children["neighbor-address"] = neighbor_address;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-neighbor")
    {
        is_neighbor = value;
        is_neighbor.value_namespace = name_space;
        is_neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-group-afi")
    {
        update_group_afi = value;
        update_group_afi.value_namespace = name_space;
        update_group_afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-group-number")
    {
        update_group_number = value;
        update_group_number.value_namespace = name_space;
        update_group_number.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-neighbor")
    {
        is_neighbor.yfilter = yfilter;
    }
    if(value_path == "update-group-afi")
    {
        update_group_afi.yfilter = yfilter;
    }
    if(value_path == "update-group-number")
    {
        update_group_number.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "is-neighbor" || name == "update-group-afi" || name == "update-group-number")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
        ,
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::L2vpnVplsAddress>())
    , l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::L2vpnMspwAddress>())
    , ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress>())
    , ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "pe-peers-advertised-to"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::L2vpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::L2vpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(l2vpn_vpls_address != nullptr)
    {
        _children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        _children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        _children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        _children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::L2vpnVplsAddress::L2vpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::L2vpnVplsAddress::~L2vpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::L2vpnVplsAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::L2vpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::L2vpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::L2vpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::L2vpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::L2vpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::L2vpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::L2vpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::L2vpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::L2vpnMspwAddress::L2vpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::L2vpnMspwAddress::~L2vpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::L2vpnMspwAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::L2vpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::L2vpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::L2vpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::L2vpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::L2vpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::L2vpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::L2vpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::L2vpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::BestPathOrrBitfield()
    :
    is_neighbor{YType::boolean, "is-neighbor"},
    update_group_afi{YType::uint8, "update-group-afi"},
    update_group_number{YType::uint32, "update-group-number"}
        ,
    neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "best-path-orr-bitfield"; yang_parent_name = "path-info-after-policy-in"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::~BestPathOrrBitfield()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::has_data() const
{
    if (is_presence_container) return true;
    return is_neighbor.is_set
	|| update_group_afi.is_set
	|| update_group_number.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_neighbor.yfilter)
	|| ydk::is_set(update_group_afi.yfilter)
	|| ydk::is_set(update_group_number.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best-path-orr-bitfield";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_neighbor.is_set || is_set(is_neighbor.yfilter)) leaf_name_data.push_back(is_neighbor.get_name_leafdata());
    if (update_group_afi.is_set || is_set(update_group_afi.yfilter)) leaf_name_data.push_back(update_group_afi.get_name_leafdata());
    if (update_group_number.is_set || is_set(update_group_number.yfilter)) leaf_name_data.push_back(update_group_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(neighbor_address != nullptr)
    {
        _children["neighbor-address"] = neighbor_address;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-neighbor")
    {
        is_neighbor = value;
        is_neighbor.value_namespace = name_space;
        is_neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-group-afi")
    {
        update_group_afi = value;
        update_group_afi.value_namespace = name_space;
        update_group_afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-group-number")
    {
        update_group_number = value;
        update_group_number.value_namespace = name_space;
        update_group_number.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-neighbor")
    {
        is_neighbor.yfilter = yfilter;
    }
    if(value_path == "update-group-afi")
    {
        update_group_afi.yfilter = yfilter;
    }
    if(value_path == "update-group-number")
    {
        update_group_number.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "is-neighbor" || name == "update-group-afi" || name == "update-group-number")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4_mdt_address{YType::str, "ipv4-mdt-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"}
        ,
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::L2vpnVplsAddress>())
    , l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::L2vpnMspwAddress>())
    , ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress>())
    , ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "neighbor-address"; yang_parent_name = "best-path-orr-bitfield"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::has_data() const
{
    if (is_presence_container) return true;
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4_mdt_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| rt_constraint_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv4mvpn_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_data())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv4_mcast_address.yfilter)
	|| ydk::is_set(ipv4_label_address.yfilter)
	|| ydk::is_set(ipv4_tunnel_address.yfilter)
	|| ydk::is_set(ipv4_mdt_address.yfilter)
	|| ydk::is_set(ipv4vpn_address.yfilter)
	|| ydk::is_set(ipv4vpna_mcastddress.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(ipv6_mcast_address.yfilter)
	|| ydk::is_set(ipv6_label_address.yfilter)
	|| ydk::is_set(ipv6vpn_address.yfilter)
	|| ydk::is_set(ipv6vpn_mcast_address.yfilter)
	|| ydk::is_set(rt_constraint_address.yfilter)
	|| ydk::is_set(ipv6mvpn_address.yfilter)
	|| ydk::is_set(ipv4mvpn_address.yfilter)
	|| ydk::is_set(l2vpn_evpn_address.yfilter)
	|| ydk::is_set(ls_ls_address.yfilter)
	|| ydk::is_set(ipv4_flowspec_address.yfilter)
	|| ydk::is_set(ipv6_flowspec_address.yfilter)
	|| ydk::is_set(ipv4vpn_flowspec_address.yfilter)
	|| ydk::is_set(ipv6vpn_flowspec_address.yfilter)
	|| (l2vpn_vpls_address !=  nullptr && l2vpn_vpls_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (ipv4_sr_policy_address !=  nullptr && ipv4_sr_policy_address->has_operation())
	|| (ipv6_sr_policy_address !=  nullptr && ipv6_sr_policy_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.yfilter)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.yfilter)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.yfilter)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.yfilter)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4_mdt_address.is_set || is_set(ipv4_mdt_address.yfilter)) leaf_name_data.push_back(ipv4_mdt_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.yfilter)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.yfilter)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.yfilter)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.yfilter)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.yfilter)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.yfilter)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.yfilter)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.yfilter)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.yfilter)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.yfilter)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.yfilter)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.yfilter)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::L2vpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::L2vpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(l2vpn_vpls_address != nullptr)
    {
        _children["l2vpn-vpls-address"] = l2vpn_vpls_address;
    }

    if(l2vpn_mspw_address != nullptr)
    {
        _children["l2vpn-mspw-address"] = l2vpn_mspw_address;
    }

    if(ipv4_sr_policy_address != nullptr)
    {
        _children["ipv4-sr-policy-address"] = ipv4_sr_policy_address;
    }

    if(ipv6_sr_policy_address != nullptr)
    {
        _children["ipv6-sr-policy-address"] = ipv6_sr_policy_address;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi")
    {
        afi = value;
        afi.value_namespace = name_space;
        afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
        ipv4_mcast_address.value_namespace = name_space;
        ipv4_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
        ipv4_label_address.value_namespace = name_space;
        ipv4_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
        ipv4_tunnel_address.value_namespace = name_space;
        ipv4_tunnel_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address = value;
        ipv4_mdt_address.value_namespace = name_space;
        ipv4_mdt_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
        ipv4vpn_address.value_namespace = name_space;
        ipv4vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
        ipv4vpna_mcastddress.value_namespace = name_space;
        ipv4vpna_mcastddress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
        ipv6_mcast_address.value_namespace = name_space;
        ipv6_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
        ipv6_label_address.value_namespace = name_space;
        ipv6_label_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
        ipv6vpn_address.value_namespace = name_space;
        ipv6vpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
        ipv6vpn_mcast_address.value_namespace = name_space;
        ipv6vpn_mcast_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
        rt_constraint_address.value_namespace = name_space;
        rt_constraint_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
        ipv6mvpn_address.value_namespace = name_space;
        ipv6mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
        ipv4mvpn_address.value_namespace = name_space;
        ipv4mvpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
        l2vpn_evpn_address.value_namespace = name_space;
        l2vpn_evpn_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
        ls_ls_address.value_namespace = name_space;
        ls_ls_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
        ipv4_flowspec_address.value_namespace = name_space;
        ipv4_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
        ipv6_flowspec_address.value_namespace = name_space;
        ipv6_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
        ipv4vpn_flowspec_address.value_namespace = name_space;
        ipv4vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
        ipv6vpn_flowspec_address.value_namespace = name_space;
        ipv6vpn_flowspec_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi")
    {
        afi.yfilter = yfilter;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-mdt-address")
    {
        ipv4_mdt_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress.yfilter = yfilter;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address.yfilter = yfilter;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address.yfilter = yfilter;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address.yfilter = yfilter;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address.yfilter = yfilter;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address.yfilter = yfilter;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address.yfilter = yfilter;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address.yfilter = yfilter;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::L2vpnVplsAddress::L2vpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::L2vpnVplsAddress::~L2vpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::L2vpnVplsAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::L2vpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::L2vpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::L2vpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::L2vpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::L2vpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::L2vpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::L2vpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::L2vpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::L2vpnMspwAddress::L2vpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::L2vpnMspwAddress::~L2vpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::L2vpnMspwAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::L2vpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::L2vpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::L2vpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::L2vpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::L2vpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::L2vpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::L2vpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::L2vpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::AddPathOrrBitfield::AddPathOrrBitfield()
    :
    is_neighbor{YType::boolean, "is-neighbor"},
    update_group_afi{YType::uint8, "update-group-afi"},
    update_group_number{YType::uint32, "update-group-number"}
        ,
    neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::AddPathOrrBitfield::NeighborAddress>())
{
    neighbor_address->parent = this;

    yang_name = "add-path-orr-bitfield"; yang_parent_name = "path-info-after-policy-in"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::AddPathOrrBitfield::~AddPathOrrBitfield()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::AddPathOrrBitfield::has_data() const
{
    if (is_presence_container) return true;
    return is_neighbor.is_set
	|| update_group_afi.is_set
	|| update_group_number.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::AddPathOrrBitfield::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_neighbor.yfilter)
	|| ydk::is_set(update_group_afi.yfilter)
	|| ydk::is_set(update_group_number.yfilter)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::AddPathOrrBitfield::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "add-path-orr-bitfield";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::AddPathOrrBitfield::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_neighbor.is_set || is_set(is_neighbor.yfilter)) leaf_name_data.push_back(is_neighbor.get_name_leafdata());
    if (update_group_afi.is_set || is_set(update_group_afi.yfilter)) leaf_name_data.push_back(update_group_afi.get_name_leafdata());
    if (update_group_number.is_set || is_set(update_group_number.yfilter)) leaf_name_data.push_back(update_group_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::AddPathOrrBitfield::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address == nullptr)
        {
            neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::AddPathOrrBitfield::NeighborAddress>();
        }
        return neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::AddPathOrrBitfield::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(neighbor_address != nullptr)
    {
        _children["neighbor-address"] = neighbor_address;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::AddPathOrrBitfield::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-neighbor")
    {
        is_neighbor = value;
        is_neighbor.value_namespace = name_space;
        is_neighbor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-group-afi")
    {
        update_group_afi = value;
        update_group_afi.value_namespace = name_space;
        update_group_afi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-group-number")
    {
        update_group_number = value;
        update_group_number.value_namespace = name_space;
        update_group_number.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::AddPathOrrBitfield::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-neighbor")
    {
        is_neighbor.yfilter = yfilter;
    }
    if(value_path == "update-group-afi")
    {
        update_group_afi.yfilter = yfilter;
    }
    if(value_path == "update-group-number")
    {
        update_group_number.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Policies::Policy::PathInfoAfterPolicyIn::AddPathOrrBitfield::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address" || name == "is-neighbor" || name == "update-group-afi" || name == "update-group-number")
        return true;
    return false;
}


}
}

