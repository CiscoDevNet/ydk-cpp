
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_53.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_54.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_bgp_oper {

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::TunnelEncap()
    :
    sr_policy(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy>())
{
    sr_policy->parent = this;

    yang_name = "tunnel-encap"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::~TunnelEncap()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::has_data() const
{
    if (is_presence_container) return true;
    return (sr_policy !=  nullptr && sr_policy->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::has_operation() const
{
    return is_set(yfilter)
	|| (sr_policy !=  nullptr && sr_policy->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-encap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-policy")
    {
        if(sr_policy == nullptr)
        {
            sr_policy = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy>();
        }
        return sr_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sr_policy != nullptr)
    {
        _children["sr-policy"] = sr_policy;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-policy")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SrPolicy()
    :
    tunnel_encap_type{YType::uint16, "tunnel-encap-type"},
    preference{YType::uint32, "preference"},
    state{YType::boolean, "state"},
    request_state{YType::enumeration, "request-state"},
    usable{YType::boolean, "usable"}
        ,
    binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid>())
    , allocated_binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid>())
    , segment_list(this, {})
{
    binding_sid->parent = this;
    allocated_binding_sid->parent = this;

    yang_name = "sr-policy"; yang_parent_name = "tunnel-encap"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::~SrPolicy()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_encap_type.is_set || is_set(tunnel_encap_type.yfilter)) leaf_name_data.push_back(tunnel_encap_type.get_name_leafdata());
    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (request_state.is_set || is_set(request_state.yfilter)) leaf_name_data.push_back(request_state.get_name_leafdata());
    if (usable.is_set || is_set(usable.yfilter)) leaf_name_data.push_back(usable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding-sid")
    {
        if(binding_sid == nullptr)
        {
            binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid>();
        }
        return binding_sid;
    }

    if(child_yang_name == "allocated-binding-sid")
    {
        if(allocated_binding_sid == nullptr)
        {
            allocated_binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid>();
        }
        return allocated_binding_sid;
    }

    if(child_yang_name == "segment-list")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList>();
        ent_->parent = this;
        segment_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::get_children() const
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding-sid" || name == "allocated-binding-sid" || name == "segment-list" || name == "tunnel-encap-type" || name == "preference" || name == "state" || name == "request-state" || name == "usable")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::BindingSid()
    :
    type{YType::enumeration, "type"},
    label{YType::uint32, "label"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "binding-sid"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::~BindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| label.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::BindingSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "label" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::AllocatedBindingSid()
    :
    type{YType::enumeration, "type"},
    label{YType::uint32, "label"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "allocated-binding-sid"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::~AllocatedBindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| label.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocated-binding-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "label" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::SegmentList()
    :
    weight{YType::uint8, "weight"}
        ,
    segment(this, {})
{

    yang_name = "segment-list"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::~SegmentList()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<segment.len(); index++)
    {
        if(segment[index]->has_data())
            return true;
    }
    return weight.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::has_operation() const
{
    for (std::size_t index=0; index<segment.len(); index++)
    {
        if(segment[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-list";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment>();
        ent_->parent = this;
        segment.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::get_children() const
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment" || name == "weight")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::Segment()
    :
    type{YType::enumeration, "type"},
    label{YType::uint32, "label"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "segment"; yang_parent_name = "segment-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::~Segment()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| label.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "label" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Community::Community()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "community"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Community::~Community()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Community::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Community::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Community::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::ExtendedCommunity()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "extended-community"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::~ExtendedCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::UnknownAttribute()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "unknown-attribute"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::~UnknownAttribute()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attribute";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Cluster::Cluster()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "cluster"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Cluster::~Cluster()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Cluster::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Cluster::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Cluster::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cluster";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Cluster::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Cluster::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Cluster::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Cluster::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Cluster::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Cluster::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::L2tpv3Cookie::L2tpv3Cookie()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "l2tpv3-cookie"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::L2tpv3Cookie::~L2tpv3Cookie()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::L2tpv3Cookie::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::L2tpv3Cookie::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::L2tpv3Cookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3-cookie";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::L2tpv3Cookie::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::L2tpv3Cookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::L2tpv3Cookie::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::L2tpv3Cookie::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::L2tpv3Cookie::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::L2tpv3Cookie::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ConnectorValue::ConnectorValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "connector-value"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ConnectorValue::~ConnectorValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ConnectorValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ConnectorValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ConnectorValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connector-value";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ConnectorValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ConnectorValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ConnectorValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ConnectorValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ConnectorValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ConnectorValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PmsiValue::PmsiValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "pmsi-value"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PmsiValue::~PmsiValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PmsiValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PmsiValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PmsiValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-value";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PmsiValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PmsiValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PmsiValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PmsiValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PmsiValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PmsiValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LsAttr::LsAttr()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "ls-attr"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LsAttr::~LsAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LsAttr::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LsAttr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LsAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ls-attr";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LsAttr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LsAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LsAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LsAttr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LsAttr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LsAttr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::PeDistinguisherLabel()
    :
    pe_address{YType::str, "pe-address"},
    label{YType::uint32, "label"}
{

    yang_name = "pe-distinguisher-label"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::~PeDistinguisherLabel()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::has_data() const
{
    if (is_presence_container) return true;
    return pe_address.is_set
	|| label.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pe_address.yfilter)
	|| ydk::is_set(label.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-distinguisher-label";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pe_address.is_set || is_set(pe_address.yfilter)) leaf_name_data.push_back(pe_address.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pe-address" || name == "label")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LargeCommunity::LargeCommunity()
    :
    global_admin{YType::uint32, "global-admin"},
    local_data1{YType::uint32, "local-data1"},
    local_data2{YType::uint32, "local-data2"}
{

    yang_name = "large-community"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LargeCommunity::~LargeCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LargeCommunity::has_data() const
{
    if (is_presence_container) return true;
    return global_admin.is_set
	|| local_data1.is_set
	|| local_data2.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LargeCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global_admin.yfilter)
	|| ydk::is_set(local_data1.yfilter)
	|| ydk::is_set(local_data2.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LargeCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "large-community";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LargeCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_admin.is_set || is_set(global_admin.yfilter)) leaf_name_data.push_back(global_admin.get_name_leafdata());
    if (local_data1.is_set || is_set(local_data1.yfilter)) leaf_name_data.push_back(local_data1.get_name_leafdata());
    if (local_data2.is_set || is_set(local_data2.yfilter)) leaf_name_data.push_back(local_data2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LargeCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LargeCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LargeCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LargeCommunity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LargeCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-admin" || name == "local-data1" || name == "local-data2")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RnhAddr::RnhAddr()
    :
    len{YType::enumeration, "len"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    mac_address{YType::str, "mac-address"}
{

    yang_name = "rnh-addr"; yang_parent_name = "attributes-after-policy-in"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RnhAddr::~RnhAddr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RnhAddr::has_data() const
{
    if (is_presence_container) return true;
    return len.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| mac_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RnhAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(mac_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RnhAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rnh-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RnhAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RnhAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RnhAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RnhAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RnhAddr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RnhAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "len" || name == "ipv4-address" || name == "ipv6-address" || name == "mac-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::RibrnhIp()
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
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2vpnVplsAddress>())
    , l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2vpnMspwAddress>())
    , ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress>())
    , ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "ribrnh-ip"; yang_parent_name = "attributes-after-policy-in"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::~RibrnhIp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ribrnh-ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2vpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2vpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::get_children() const
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2vpnVplsAddress::L2vpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "ribrnh-ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2vpnVplsAddress::~L2vpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2vpnVplsAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2vpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2vpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2vpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2vpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2vpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2vpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2vpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2vpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2vpnMspwAddress::L2vpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "ribrnh-ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2vpnMspwAddress::~L2vpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2vpnMspwAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2vpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2vpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2vpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2vpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2vpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2vpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2vpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2vpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "ribrnh-ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "ribrnh-ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilters()
    :
    prefix_filter(this, {"neighbor_address"})
{

    yang_name = "prefix-filters"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::~PrefixFilters()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefix_filter.len(); index++)
    {
        if(prefix_filter[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::has_operation() const
{
    for (std::size_t index=0; index<prefix_filter.len(); index++)
    {
        if(prefix_filter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-filters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-filter")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter>();
        ent_->parent = this;
        prefix_filter.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prefix_filter.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-filter")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixFilter()
    :
    neighbor_address{YType::str, "neighbor-address"},
    af_name{YType::enumeration, "af-name"}
        ,
    neighbor_address_xr(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr>())
    , prefix_list_info(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo>())
{
    neighbor_address_xr->parent = this;
    prefix_list_info->parent = this;

    yang_name = "prefix-filter"; yang_parent_name = "prefix-filters"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::~PrefixFilter()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::has_data() const
{
    if (is_presence_container) return true;
    return neighbor_address.is_set
	|| af_name.is_set
	|| (neighbor_address_xr !=  nullptr && neighbor_address_xr->has_data())
	|| (prefix_list_info !=  nullptr && prefix_list_info->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| (neighbor_address_xr !=  nullptr && neighbor_address_xr->has_operation())
	|| (prefix_list_info !=  nullptr && prefix_list_info->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-filter";
    ADD_KEY_TOKEN(neighbor_address, "neighbor-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-address-xr")
    {
        if(neighbor_address_xr == nullptr)
        {
            neighbor_address_xr = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr>();
        }
        return neighbor_address_xr;
    }

    if(child_yang_name == "prefix-list-info")
    {
        if(prefix_list_info == nullptr)
        {
            prefix_list_info = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo>();
        }
        return prefix_list_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(neighbor_address_xr != nullptr)
    {
        _children["neighbor-address-xr"] = neighbor_address_xr;
    }

    if(prefix_list_info != nullptr)
    {
        _children["prefix-list-info"] = prefix_list_info;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-address-xr" || name == "prefix-list-info" || name == "neighbor-address" || name == "af-name")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::NeighborAddressXr()
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
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2vpnVplsAddress>())
    , l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2vpnMspwAddress>())
    , ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv4SrPolicyAddress>())
    , ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "neighbor-address-xr"; yang_parent_name = "prefix-filter"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::~NeighborAddressXr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2vpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2vpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::get_children() const
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2vpnVplsAddress::L2vpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbor-address-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2vpnVplsAddress::~L2vpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2vpnVplsAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2vpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2vpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2vpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2vpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2vpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2vpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2vpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2vpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2vpnMspwAddress::L2vpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2vpnMspwAddress::~L2vpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2vpnMspwAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2vpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2vpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2vpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2vpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2vpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2vpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2vpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2vpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbor-address-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv4SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbor-address-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv6SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::PrefixListInfo()
    :
    bgp_pfxlst(this, {})
{

    yang_name = "prefix-list-info"; yang_parent_name = "prefix-filter"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::~PrefixListInfo()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bgp_pfxlst.len(); index++)
    {
        if(bgp_pfxlst[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::has_operation() const
{
    for (std::size_t index=0; index<bgp_pfxlst.len(); index++)
    {
        if(bgp_pfxlst[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-pfxlst")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst>();
        ent_->parent = this;
        bgp_pfxlst.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bgp_pfxlst.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-pfxlst")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPfxlst()
    :
    sequence_number{YType::uint32, "sequence-number"},
    is_prefix_grant{YType::boolean, "is-prefix-grant"},
    min_prefix_length{YType::uint8, "min-prefix-length"},
    max_prefix_length{YType::uint8, "max-prefix-length"}
        ,
    bgp_prefix(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix>())
{
    bgp_prefix->parent = this;

    yang_name = "bgp-pfxlst"; yang_parent_name = "prefix-list-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::~BgpPfxlst()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::has_data() const
{
    if (is_presence_container) return true;
    return sequence_number.is_set
	|| is_prefix_grant.is_set
	|| min_prefix_length.is_set
	|| max_prefix_length.is_set
	|| (bgp_prefix !=  nullptr && bgp_prefix->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(is_prefix_grant.yfilter)
	|| ydk::is_set(min_prefix_length.yfilter)
	|| ydk::is_set(max_prefix_length.yfilter)
	|| (bgp_prefix !=  nullptr && bgp_prefix->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-pfxlst";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (is_prefix_grant.is_set || is_set(is_prefix_grant.yfilter)) leaf_name_data.push_back(is_prefix_grant.get_name_leafdata());
    if (min_prefix_length.is_set || is_set(min_prefix_length.yfilter)) leaf_name_data.push_back(min_prefix_length.get_name_leafdata());
    if (max_prefix_length.is_set || is_set(max_prefix_length.yfilter)) leaf_name_data.push_back(max_prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-prefix")
    {
        if(bgp_prefix == nullptr)
        {
            bgp_prefix = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix>();
        }
        return bgp_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bgp_prefix != nullptr)
    {
        _children["bgp-prefix"] = bgp_prefix;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-prefix-grant")
    {
        is_prefix_grant = value;
        is_prefix_grant.value_namespace = name_space;
        is_prefix_grant.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-prefix-length")
    {
        min_prefix_length = value;
        min_prefix_length.value_namespace = name_space;
        min_prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-prefix-length")
    {
        max_prefix_length = value;
        max_prefix_length.value_namespace = name_space;
        max_prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "is-prefix-grant")
    {
        is_prefix_grant.yfilter = yfilter;
    }
    if(value_path == "min-prefix-length")
    {
        min_prefix_length.yfilter = yfilter;
    }
    if(value_path == "max-prefix-length")
    {
        max_prefix_length.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-prefix" || name == "sequence-number" || name == "is-prefix-grant" || name == "min-prefix-length" || name == "max-prefix-length")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::BgpPrefix()
    :
    prefix_length{YType::uint16, "prefix-length"}
        ,
    prefix(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix>())
{
    prefix->parent = this;

    yang_name = "bgp-prefix"; yang_parent_name = "bgp-pfxlst"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::~BgpPrefix()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::has_data() const
{
    if (is_presence_container) return true;
    return prefix_length.is_set
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix != nullptr)
    {
        _children["prefix"] = prefix;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Prefix()
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
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2vpnVplsAddress>())
    , l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2vpnMspwAddress>())
    , ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv4SrPolicyAddress>())
    , ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "prefix"; yang_parent_name = "bgp-prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::~Prefix()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2vpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2vpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::get_children() const
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2vpnVplsAddress::L2vpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2vpnVplsAddress::~L2vpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2vpnVplsAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2vpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2vpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2vpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2vpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2vpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2vpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2vpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2vpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2vpnMspwAddress::L2vpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2vpnMspwAddress::~L2vpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2vpnMspwAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2vpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2vpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2vpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2vpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2vpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2vpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2vpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2vpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv4SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "prefix"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv6SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attributes()
    :
    attribute(this, {})
{

    yang_name = "attributes"; yang_parent_name = "af"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::~Attributes()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<attribute.len(); index++)
    {
        if(attribute[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::has_operation() const
{
    for (std::size_t index=0; index<attribute.len(); index++)
    {
        if(attribute[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute>();
        ent_->parent = this;
        attribute.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : attribute.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::Attribute()
    :
    attribute_iid{YType::uint32, "attribute-iid"},
    attribute_cache_bucket{YType::uint32, "attribute-cache-bucket"},
    attribute_cache_id{YType::uint32, "attribute-cache-id"},
    process_instance_id{YType::uint8, "process-instance-id"},
    attribute_instance_id{YType::uint8, "attribute-instance-id"},
    attribute_structure_id{YType::uint32, "attribute-structure-id"},
    attribute_structure_hash_value{YType::uint32, "attribute-structure-hash-value"},
    reference_count{YType::uint32, "reference-count"}
        ,
    attribute_info(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo>())
{
    attribute_info->parent = this;

    yang_name = "attribute"; yang_parent_name = "attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::~Attribute()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::has_data() const
{
    if (is_presence_container) return true;
    return attribute_iid.is_set
	|| attribute_cache_bucket.is_set
	|| attribute_cache_id.is_set
	|| process_instance_id.is_set
	|| attribute_instance_id.is_set
	|| attribute_structure_id.is_set
	|| attribute_structure_hash_value.is_set
	|| reference_count.is_set
	|| (attribute_info !=  nullptr && attribute_info->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attribute_iid.yfilter)
	|| ydk::is_set(attribute_cache_bucket.yfilter)
	|| ydk::is_set(attribute_cache_id.yfilter)
	|| ydk::is_set(process_instance_id.yfilter)
	|| ydk::is_set(attribute_instance_id.yfilter)
	|| ydk::is_set(attribute_structure_id.yfilter)
	|| ydk::is_set(attribute_structure_hash_value.yfilter)
	|| ydk::is_set(reference_count.yfilter)
	|| (attribute_info !=  nullptr && attribute_info->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_iid.is_set || is_set(attribute_iid.yfilter)) leaf_name_data.push_back(attribute_iid.get_name_leafdata());
    if (attribute_cache_bucket.is_set || is_set(attribute_cache_bucket.yfilter)) leaf_name_data.push_back(attribute_cache_bucket.get_name_leafdata());
    if (attribute_cache_id.is_set || is_set(attribute_cache_id.yfilter)) leaf_name_data.push_back(attribute_cache_id.get_name_leafdata());
    if (process_instance_id.is_set || is_set(process_instance_id.yfilter)) leaf_name_data.push_back(process_instance_id.get_name_leafdata());
    if (attribute_instance_id.is_set || is_set(attribute_instance_id.yfilter)) leaf_name_data.push_back(attribute_instance_id.get_name_leafdata());
    if (attribute_structure_id.is_set || is_set(attribute_structure_id.yfilter)) leaf_name_data.push_back(attribute_structure_id.get_name_leafdata());
    if (attribute_structure_hash_value.is_set || is_set(attribute_structure_hash_value.yfilter)) leaf_name_data.push_back(attribute_structure_hash_value.get_name_leafdata());
    if (reference_count.is_set || is_set(reference_count.yfilter)) leaf_name_data.push_back(reference_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute-info")
    {
        if(attribute_info == nullptr)
        {
            attribute_info = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo>();
        }
        return attribute_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(attribute_info != nullptr)
    {
        _children["attribute-info"] = attribute_info;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attribute-iid")
    {
        attribute_iid = value;
        attribute_iid.value_namespace = name_space;
        attribute_iid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-cache-bucket")
    {
        attribute_cache_bucket = value;
        attribute_cache_bucket.value_namespace = name_space;
        attribute_cache_bucket.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-cache-id")
    {
        attribute_cache_id = value;
        attribute_cache_id.value_namespace = name_space;
        attribute_cache_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-instance-id")
    {
        process_instance_id = value;
        process_instance_id.value_namespace = name_space;
        process_instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-instance-id")
    {
        attribute_instance_id = value;
        attribute_instance_id.value_namespace = name_space;
        attribute_instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-structure-id")
    {
        attribute_structure_id = value;
        attribute_structure_id.value_namespace = name_space;
        attribute_structure_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-structure-hash-value")
    {
        attribute_structure_hash_value = value;
        attribute_structure_hash_value.value_namespace = name_space;
        attribute_structure_hash_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reference-count")
    {
        reference_count = value;
        reference_count.value_namespace = name_space;
        reference_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attribute-iid")
    {
        attribute_iid.yfilter = yfilter;
    }
    if(value_path == "attribute-cache-bucket")
    {
        attribute_cache_bucket.yfilter = yfilter;
    }
    if(value_path == "attribute-cache-id")
    {
        attribute_cache_id.yfilter = yfilter;
    }
    if(value_path == "process-instance-id")
    {
        process_instance_id.yfilter = yfilter;
    }
    if(value_path == "attribute-instance-id")
    {
        attribute_instance_id.yfilter = yfilter;
    }
    if(value_path == "attribute-structure-id")
    {
        attribute_structure_id.yfilter = yfilter;
    }
    if(value_path == "attribute-structure-hash-value")
    {
        attribute_structure_hash_value.yfilter = yfilter;
    }
    if(value_path == "reference-count")
    {
        reference_count.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attribute-info" || name == "attribute-iid" || name == "attribute-cache-bucket" || name == "attribute-cache-id" || name == "process-instance-id" || name == "attribute-instance-id" || name == "attribute-structure-id" || name == "attribute-structure-hash-value" || name == "reference-count")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttributeInfo()
    :
    is_as_path2_byte{YType::boolean, "is-as-path2-byte"},
    is_application_gateway_present{YType::boolean, "is-application-gateway-present"},
    is_attr_set_present{YType::boolean, "is-attr-set-present"},
    set_aigp_inbound_igp{YType::boolean, "set-aigp-inbound-igp"},
    set_aigp_inbound_metric{YType::boolean, "set-aigp-inbound-metric"},
    is_rnh_present{YType::boolean, "is-rnh-present"},
    is_ribrnh_present{YType::boolean, "is-ribrnh-present"},
    attribute_key_number{YType::uint32, "attribute-key-number"},
    attribute_reuse_id_config{YType::boolean, "attribute-reuse-id-config"},
    attribute_reuse_id_max_id{YType::uint32, "attribute-reuse-id-max-id"},
    attribute_reuse_id_node{YType::uint32, "attribute-reuse-id-node"},
    attribute_reuse_id_current{YType::uint32, "attribute-reuse-id-current"},
    attribute_reuse_id_keys{YType::uint32, "attribute-reuse-id-keys"},
    attribute_reuse_id_recover_sec{YType::uint32, "attribute-reuse-id-recover-sec"},
    vpn_distinguisher{YType::uint32, "vpn-distinguisher"},
    rnh_type{YType::uint16, "rnh-type"},
    rnh_len{YType::uint8, "rnh-len"},
    rnh_addr_len{YType::uint32, "rnh-addr-len"},
    ribrnh_table{YType::uint32, "ribrnh-table"},
    ribrnh_mac{YType::str, "ribrnh-mac"},
    ribrnhip_table{YType::uint32, "ribrnhip-table"},
    ribrnh_vni{YType::uint32, "ribrnh-vni"},
    ribrnh_encap{YType::uint8, "ribrnh-encap"}
        ,
    common_attributes(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes>())
    , attr_set(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet>())
    , rnh_addr(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr>())
    , ribrnh_ip(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp>())
{
    common_attributes->parent = this;
    attr_set->parent = this;
    rnh_addr->parent = this;
    ribrnh_ip->parent = this;

    yang_name = "attribute-info"; yang_parent_name = "attribute"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::~AttributeInfo()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::has_data() const
{
    if (is_presence_container) return true;
    return is_as_path2_byte.is_set
	|| is_application_gateway_present.is_set
	|| is_attr_set_present.is_set
	|| set_aigp_inbound_igp.is_set
	|| set_aigp_inbound_metric.is_set
	|| is_rnh_present.is_set
	|| is_ribrnh_present.is_set
	|| attribute_key_number.is_set
	|| attribute_reuse_id_config.is_set
	|| attribute_reuse_id_max_id.is_set
	|| attribute_reuse_id_node.is_set
	|| attribute_reuse_id_current.is_set
	|| attribute_reuse_id_keys.is_set
	|| attribute_reuse_id_recover_sec.is_set
	|| vpn_distinguisher.is_set
	|| rnh_type.is_set
	|| rnh_len.is_set
	|| rnh_addr_len.is_set
	|| ribrnh_table.is_set
	|| ribrnh_mac.is_set
	|| ribrnhip_table.is_set
	|| ribrnh_vni.is_set
	|| ribrnh_encap.is_set
	|| (common_attributes !=  nullptr && common_attributes->has_data())
	|| (attr_set !=  nullptr && attr_set->has_data())
	|| (rnh_addr !=  nullptr && rnh_addr->has_data())
	|| (ribrnh_ip !=  nullptr && ribrnh_ip->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_as_path2_byte.yfilter)
	|| ydk::is_set(is_application_gateway_present.yfilter)
	|| ydk::is_set(is_attr_set_present.yfilter)
	|| ydk::is_set(set_aigp_inbound_igp.yfilter)
	|| ydk::is_set(set_aigp_inbound_metric.yfilter)
	|| ydk::is_set(is_rnh_present.yfilter)
	|| ydk::is_set(is_ribrnh_present.yfilter)
	|| ydk::is_set(attribute_key_number.yfilter)
	|| ydk::is_set(attribute_reuse_id_config.yfilter)
	|| ydk::is_set(attribute_reuse_id_max_id.yfilter)
	|| ydk::is_set(attribute_reuse_id_node.yfilter)
	|| ydk::is_set(attribute_reuse_id_current.yfilter)
	|| ydk::is_set(attribute_reuse_id_keys.yfilter)
	|| ydk::is_set(attribute_reuse_id_recover_sec.yfilter)
	|| ydk::is_set(vpn_distinguisher.yfilter)
	|| ydk::is_set(rnh_type.yfilter)
	|| ydk::is_set(rnh_len.yfilter)
	|| ydk::is_set(rnh_addr_len.yfilter)
	|| ydk::is_set(ribrnh_table.yfilter)
	|| ydk::is_set(ribrnh_mac.yfilter)
	|| ydk::is_set(ribrnhip_table.yfilter)
	|| ydk::is_set(ribrnh_vni.yfilter)
	|| ydk::is_set(ribrnh_encap.yfilter)
	|| (common_attributes !=  nullptr && common_attributes->has_operation())
	|| (attr_set !=  nullptr && attr_set->has_operation())
	|| (rnh_addr !=  nullptr && rnh_addr->has_operation())
	|| (ribrnh_ip !=  nullptr && ribrnh_ip->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_as_path2_byte.is_set || is_set(is_as_path2_byte.yfilter)) leaf_name_data.push_back(is_as_path2_byte.get_name_leafdata());
    if (is_application_gateway_present.is_set || is_set(is_application_gateway_present.yfilter)) leaf_name_data.push_back(is_application_gateway_present.get_name_leafdata());
    if (is_attr_set_present.is_set || is_set(is_attr_set_present.yfilter)) leaf_name_data.push_back(is_attr_set_present.get_name_leafdata());
    if (set_aigp_inbound_igp.is_set || is_set(set_aigp_inbound_igp.yfilter)) leaf_name_data.push_back(set_aigp_inbound_igp.get_name_leafdata());
    if (set_aigp_inbound_metric.is_set || is_set(set_aigp_inbound_metric.yfilter)) leaf_name_data.push_back(set_aigp_inbound_metric.get_name_leafdata());
    if (is_rnh_present.is_set || is_set(is_rnh_present.yfilter)) leaf_name_data.push_back(is_rnh_present.get_name_leafdata());
    if (is_ribrnh_present.is_set || is_set(is_ribrnh_present.yfilter)) leaf_name_data.push_back(is_ribrnh_present.get_name_leafdata());
    if (attribute_key_number.is_set || is_set(attribute_key_number.yfilter)) leaf_name_data.push_back(attribute_key_number.get_name_leafdata());
    if (attribute_reuse_id_config.is_set || is_set(attribute_reuse_id_config.yfilter)) leaf_name_data.push_back(attribute_reuse_id_config.get_name_leafdata());
    if (attribute_reuse_id_max_id.is_set || is_set(attribute_reuse_id_max_id.yfilter)) leaf_name_data.push_back(attribute_reuse_id_max_id.get_name_leafdata());
    if (attribute_reuse_id_node.is_set || is_set(attribute_reuse_id_node.yfilter)) leaf_name_data.push_back(attribute_reuse_id_node.get_name_leafdata());
    if (attribute_reuse_id_current.is_set || is_set(attribute_reuse_id_current.yfilter)) leaf_name_data.push_back(attribute_reuse_id_current.get_name_leafdata());
    if (attribute_reuse_id_keys.is_set || is_set(attribute_reuse_id_keys.yfilter)) leaf_name_data.push_back(attribute_reuse_id_keys.get_name_leafdata());
    if (attribute_reuse_id_recover_sec.is_set || is_set(attribute_reuse_id_recover_sec.yfilter)) leaf_name_data.push_back(attribute_reuse_id_recover_sec.get_name_leafdata());
    if (vpn_distinguisher.is_set || is_set(vpn_distinguisher.yfilter)) leaf_name_data.push_back(vpn_distinguisher.get_name_leafdata());
    if (rnh_type.is_set || is_set(rnh_type.yfilter)) leaf_name_data.push_back(rnh_type.get_name_leafdata());
    if (rnh_len.is_set || is_set(rnh_len.yfilter)) leaf_name_data.push_back(rnh_len.get_name_leafdata());
    if (rnh_addr_len.is_set || is_set(rnh_addr_len.yfilter)) leaf_name_data.push_back(rnh_addr_len.get_name_leafdata());
    if (ribrnh_table.is_set || is_set(ribrnh_table.yfilter)) leaf_name_data.push_back(ribrnh_table.get_name_leafdata());
    if (ribrnh_mac.is_set || is_set(ribrnh_mac.yfilter)) leaf_name_data.push_back(ribrnh_mac.get_name_leafdata());
    if (ribrnhip_table.is_set || is_set(ribrnhip_table.yfilter)) leaf_name_data.push_back(ribrnhip_table.get_name_leafdata());
    if (ribrnh_vni.is_set || is_set(ribrnh_vni.yfilter)) leaf_name_data.push_back(ribrnh_vni.get_name_leafdata());
    if (ribrnh_encap.is_set || is_set(ribrnh_encap.yfilter)) leaf_name_data.push_back(ribrnh_encap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "common-attributes")
    {
        if(common_attributes == nullptr)
        {
            common_attributes = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes>();
        }
        return common_attributes;
    }

    if(child_yang_name == "attr-set")
    {
        if(attr_set == nullptr)
        {
            attr_set = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet>();
        }
        return attr_set;
    }

    if(child_yang_name == "rnh-addr")
    {
        if(rnh_addr == nullptr)
        {
            rnh_addr = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr>();
        }
        return rnh_addr;
    }

    if(child_yang_name == "ribrnh-ip")
    {
        if(ribrnh_ip == nullptr)
        {
            ribrnh_ip = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp>();
        }
        return ribrnh_ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(common_attributes != nullptr)
    {
        _children["common-attributes"] = common_attributes;
    }

    if(attr_set != nullptr)
    {
        _children["attr-set"] = attr_set;
    }

    if(rnh_addr != nullptr)
    {
        _children["rnh-addr"] = rnh_addr;
    }

    if(ribrnh_ip != nullptr)
    {
        _children["ribrnh-ip"] = ribrnh_ip;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-as-path2-byte")
    {
        is_as_path2_byte = value;
        is_as_path2_byte.value_namespace = name_space;
        is_as_path2_byte.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-application-gateway-present")
    {
        is_application_gateway_present = value;
        is_application_gateway_present.value_namespace = name_space;
        is_application_gateway_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-attr-set-present")
    {
        is_attr_set_present = value;
        is_attr_set_present.value_namespace = name_space;
        is_attr_set_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-aigp-inbound-igp")
    {
        set_aigp_inbound_igp = value;
        set_aigp_inbound_igp.value_namespace = name_space;
        set_aigp_inbound_igp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "set-aigp-inbound-metric")
    {
        set_aigp_inbound_metric = value;
        set_aigp_inbound_metric.value_namespace = name_space;
        set_aigp_inbound_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-rnh-present")
    {
        is_rnh_present = value;
        is_rnh_present.value_namespace = name_space;
        is_rnh_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ribrnh-present")
    {
        is_ribrnh_present = value;
        is_ribrnh_present.value_namespace = name_space;
        is_ribrnh_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-key-number")
    {
        attribute_key_number = value;
        attribute_key_number.value_namespace = name_space;
        attribute_key_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-reuse-id-config")
    {
        attribute_reuse_id_config = value;
        attribute_reuse_id_config.value_namespace = name_space;
        attribute_reuse_id_config.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-reuse-id-max-id")
    {
        attribute_reuse_id_max_id = value;
        attribute_reuse_id_max_id.value_namespace = name_space;
        attribute_reuse_id_max_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-reuse-id-node")
    {
        attribute_reuse_id_node = value;
        attribute_reuse_id_node.value_namespace = name_space;
        attribute_reuse_id_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-reuse-id-current")
    {
        attribute_reuse_id_current = value;
        attribute_reuse_id_current.value_namespace = name_space;
        attribute_reuse_id_current.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-reuse-id-keys")
    {
        attribute_reuse_id_keys = value;
        attribute_reuse_id_keys.value_namespace = name_space;
        attribute_reuse_id_keys.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attribute-reuse-id-recover-sec")
    {
        attribute_reuse_id_recover_sec = value;
        attribute_reuse_id_recover_sec.value_namespace = name_space;
        attribute_reuse_id_recover_sec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-distinguisher")
    {
        vpn_distinguisher = value;
        vpn_distinguisher.value_namespace = name_space;
        vpn_distinguisher.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rnh-type")
    {
        rnh_type = value;
        rnh_type.value_namespace = name_space;
        rnh_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rnh-len")
    {
        rnh_len = value;
        rnh_len.value_namespace = name_space;
        rnh_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rnh-addr-len")
    {
        rnh_addr_len = value;
        rnh_addr_len.value_namespace = name_space;
        rnh_addr_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ribrnh-table")
    {
        ribrnh_table = value;
        ribrnh_table.value_namespace = name_space;
        ribrnh_table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ribrnh-mac")
    {
        ribrnh_mac = value;
        ribrnh_mac.value_namespace = name_space;
        ribrnh_mac.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ribrnhip-table")
    {
        ribrnhip_table = value;
        ribrnhip_table.value_namespace = name_space;
        ribrnhip_table.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ribrnh-vni")
    {
        ribrnh_vni = value;
        ribrnh_vni.value_namespace = name_space;
        ribrnh_vni.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ribrnh-encap")
    {
        ribrnh_encap = value;
        ribrnh_encap.value_namespace = name_space;
        ribrnh_encap.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-as-path2-byte")
    {
        is_as_path2_byte.yfilter = yfilter;
    }
    if(value_path == "is-application-gateway-present")
    {
        is_application_gateway_present.yfilter = yfilter;
    }
    if(value_path == "is-attr-set-present")
    {
        is_attr_set_present.yfilter = yfilter;
    }
    if(value_path == "set-aigp-inbound-igp")
    {
        set_aigp_inbound_igp.yfilter = yfilter;
    }
    if(value_path == "set-aigp-inbound-metric")
    {
        set_aigp_inbound_metric.yfilter = yfilter;
    }
    if(value_path == "is-rnh-present")
    {
        is_rnh_present.yfilter = yfilter;
    }
    if(value_path == "is-ribrnh-present")
    {
        is_ribrnh_present.yfilter = yfilter;
    }
    if(value_path == "attribute-key-number")
    {
        attribute_key_number.yfilter = yfilter;
    }
    if(value_path == "attribute-reuse-id-config")
    {
        attribute_reuse_id_config.yfilter = yfilter;
    }
    if(value_path == "attribute-reuse-id-max-id")
    {
        attribute_reuse_id_max_id.yfilter = yfilter;
    }
    if(value_path == "attribute-reuse-id-node")
    {
        attribute_reuse_id_node.yfilter = yfilter;
    }
    if(value_path == "attribute-reuse-id-current")
    {
        attribute_reuse_id_current.yfilter = yfilter;
    }
    if(value_path == "attribute-reuse-id-keys")
    {
        attribute_reuse_id_keys.yfilter = yfilter;
    }
    if(value_path == "attribute-reuse-id-recover-sec")
    {
        attribute_reuse_id_recover_sec.yfilter = yfilter;
    }
    if(value_path == "vpn-distinguisher")
    {
        vpn_distinguisher.yfilter = yfilter;
    }
    if(value_path == "rnh-type")
    {
        rnh_type.yfilter = yfilter;
    }
    if(value_path == "rnh-len")
    {
        rnh_len.yfilter = yfilter;
    }
    if(value_path == "rnh-addr-len")
    {
        rnh_addr_len.yfilter = yfilter;
    }
    if(value_path == "ribrnh-table")
    {
        ribrnh_table.yfilter = yfilter;
    }
    if(value_path == "ribrnh-mac")
    {
        ribrnh_mac.yfilter = yfilter;
    }
    if(value_path == "ribrnhip-table")
    {
        ribrnhip_table.yfilter = yfilter;
    }
    if(value_path == "ribrnh-vni")
    {
        ribrnh_vni.yfilter = yfilter;
    }
    if(value_path == "ribrnh-encap")
    {
        ribrnh_encap.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common-attributes" || name == "attr-set" || name == "rnh-addr" || name == "ribrnh-ip" || name == "is-as-path2-byte" || name == "is-application-gateway-present" || name == "is-attr-set-present" || name == "set-aigp-inbound-igp" || name == "set-aigp-inbound-metric" || name == "is-rnh-present" || name == "is-ribrnh-present" || name == "attribute-key-number" || name == "attribute-reuse-id-config" || name == "attribute-reuse-id-max-id" || name == "attribute-reuse-id-node" || name == "attribute-reuse-id-current" || name == "attribute-reuse-id-keys" || name == "attribute-reuse-id-recover-sec" || name == "vpn-distinguisher" || name == "rnh-type" || name == "rnh-len" || name == "rnh-addr-len" || name == "ribrnh-table" || name == "ribrnh-mac" || name == "ribrnhip-table" || name == "ribrnh-vni" || name == "ribrnh-encap")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::CommonAttributes()
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
    prefix_sid_attr(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PrefixSidAttr>())
    , tunnel_encap(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap>())
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
    prefix_sid_attr->parent = this;
    tunnel_encap->parent = this;

    yang_name = "common-attributes"; yang_parent_name = "attribute-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::~CommonAttributes()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::has_data() const
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
	|| (prefix_sid_attr !=  nullptr && prefix_sid_attr->has_data())
	|| (tunnel_encap !=  nullptr && tunnel_encap->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::has_operation() const
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
	|| (prefix_sid_attr !=  nullptr && prefix_sid_attr->has_operation())
	|| (tunnel_encap !=  nullptr && tunnel_encap->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-sid-attr")
    {
        if(prefix_sid_attr == nullptr)
        {
            prefix_sid_attr = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PrefixSidAttr>();
        }
        return prefix_sid_attr;
    }

    if(child_yang_name == "tunnel-encap")
    {
        if(tunnel_encap == nullptr)
        {
            tunnel_encap = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap>();
        }
        return tunnel_encap;
    }

    if(child_yang_name == "community")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community>();
        ent_->parent = this;
        community.append(ent_);
        return ent_;
    }

    if(child_yang_name == "extended-community")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity>();
        ent_->parent = this;
        extended_community.append(ent_);
        return ent_;
    }

    if(child_yang_name == "unknown-attribute")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute>();
        ent_->parent = this;
        unknown_attribute.append(ent_);
        return ent_;
    }

    if(child_yang_name == "cluster")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster>();
        ent_->parent = this;
        cluster.append(ent_);
        return ent_;
    }

    if(child_yang_name == "l2tpv3-cookie")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2tpv3Cookie>();
        ent_->parent = this;
        l2tpv3_cookie.append(ent_);
        return ent_;
    }

    if(child_yang_name == "connector-value")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue>();
        ent_->parent = this;
        connector_value.append(ent_);
        return ent_;
    }

    if(child_yang_name == "pmsi-value")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue>();
        ent_->parent = this;
        pmsi_value.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ls-attr")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr>();
        ent_->parent = this;
        ls_attr.append(ent_);
        return ent_;
    }

    if(child_yang_name == "pe-distinguisher-label")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel>();
        ent_->parent = this;
        pe_distinguisher_label.append(ent_);
        return ent_;
    }

    if(child_yang_name == "large-community")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity>();
        ent_->parent = this;
        large_community.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_sid_attr != nullptr)
    {
        _children["prefix-sid-attr"] = prefix_sid_attr;
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-sid-attr" || name == "tunnel-encap" || name == "community" || name == "extended-community" || name == "unknown-attribute" || name == "cluster" || name == "l2tpv3-cookie" || name == "connector-value" || name == "pmsi-value" || name == "ls-attr" || name == "pe-distinguisher-label" || name == "large-community" || name == "is-metric-present" || name == "is-local-pref-present" || name == "is-atomic-aggregate-present" || name == "is-aggregator-present" || name == "is-origin-present" || name == "is-as-path-present" || name == "is-community-present" || name == "is-extended-community-present" || name == "is-ssa-present" || name == "is-connector-present" || name == "is-pmsi-present" || name == "is-pppmp-present" || name == "is-aigp-present" || name == "is-pe-distinguisher-label-present" || name == "is-ls-attribute-present" || name == "is-label-index-present" || name == "neighbor-as" || name == "aggregator-as" || name == "aggregator-address" || name == "metric" || name == "local-preference" || name == "origin" || name == "as-path" || name == "extended-community-flags" || name == "originator" || name == "l2tpv3-session-id" || name == "connector-type" || name == "aigp-metric-value" || name == "pmsi-type" || name == "pmsi-flags" || name == "pmsi-label" || name == "ppm-pvalue" || name == "is-large-community-present")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PrefixSidAttr::PrefixSidAttr()
    :
    prefix_sid_tlv(this, {})
{

    yang_name = "prefix-sid-attr"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PrefixSidAttr::~PrefixSidAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PrefixSidAttr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefix_sid_tlv.len(); index++)
    {
        if(prefix_sid_tlv[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PrefixSidAttr::has_operation() const
{
    for (std::size_t index=0; index<prefix_sid_tlv.len(); index++)
    {
        if(prefix_sid_tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PrefixSidAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid-attr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PrefixSidAttr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PrefixSidAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-sid-tlv")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PrefixSidAttr::PrefixSidTlv>();
        ent_->parent = this;
        prefix_sid_tlv.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PrefixSidAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prefix_sid_tlv.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PrefixSidAttr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PrefixSidAttr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PrefixSidAttr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-sid-tlv")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PrefixSidAttr::PrefixSidTlv::PrefixSidTlv()
    :
    type{YType::enumeration, "type"},
    len{YType::uint16, "len"},
    val{YType::str, "val"}
{

    yang_name = "prefix-sid-tlv"; yang_parent_name = "prefix-sid-attr"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PrefixSidAttr::PrefixSidTlv::~PrefixSidTlv()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PrefixSidAttr::PrefixSidTlv::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| len.is_set
	|| val.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PrefixSidAttr::PrefixSidTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PrefixSidAttr::PrefixSidTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid-tlv";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PrefixSidAttr::PrefixSidTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PrefixSidAttr::PrefixSidTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PrefixSidAttr::PrefixSidTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PrefixSidAttr::PrefixSidTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PrefixSidAttr::PrefixSidTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PrefixSidAttr::PrefixSidTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "len" || name == "val")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::TunnelEncap()
    :
    sr_policy(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy>())
{
    sr_policy->parent = this;

    yang_name = "tunnel-encap"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::~TunnelEncap()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::has_data() const
{
    if (is_presence_container) return true;
    return (sr_policy !=  nullptr && sr_policy->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::has_operation() const
{
    return is_set(yfilter)
	|| (sr_policy !=  nullptr && sr_policy->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-encap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-policy")
    {
        if(sr_policy == nullptr)
        {
            sr_policy = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy>();
        }
        return sr_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sr_policy != nullptr)
    {
        _children["sr-policy"] = sr_policy;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-policy")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SrPolicy()
    :
    tunnel_encap_type{YType::uint16, "tunnel-encap-type"},
    preference{YType::uint32, "preference"},
    state{YType::boolean, "state"},
    request_state{YType::enumeration, "request-state"},
    usable{YType::boolean, "usable"}
        ,
    binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid>())
    , allocated_binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid>())
    , segment_list(this, {})
{
    binding_sid->parent = this;
    allocated_binding_sid->parent = this;

    yang_name = "sr-policy"; yang_parent_name = "tunnel-encap"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::~SrPolicy()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_encap_type.is_set || is_set(tunnel_encap_type.yfilter)) leaf_name_data.push_back(tunnel_encap_type.get_name_leafdata());
    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (request_state.is_set || is_set(request_state.yfilter)) leaf_name_data.push_back(request_state.get_name_leafdata());
    if (usable.is_set || is_set(usable.yfilter)) leaf_name_data.push_back(usable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding-sid")
    {
        if(binding_sid == nullptr)
        {
            binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid>();
        }
        return binding_sid;
    }

    if(child_yang_name == "allocated-binding-sid")
    {
        if(allocated_binding_sid == nullptr)
        {
            allocated_binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid>();
        }
        return allocated_binding_sid;
    }

    if(child_yang_name == "segment-list")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList>();
        ent_->parent = this;
        segment_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::get_children() const
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding-sid" || name == "allocated-binding-sid" || name == "segment-list" || name == "tunnel-encap-type" || name == "preference" || name == "state" || name == "request-state" || name == "usable")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::BindingSid()
    :
    type{YType::enumeration, "type"},
    label{YType::uint32, "label"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "binding-sid"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::~BindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| label.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::BindingSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "label" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::AllocatedBindingSid()
    :
    type{YType::enumeration, "type"},
    label{YType::uint32, "label"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "allocated-binding-sid"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::~AllocatedBindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| label.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocated-binding-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::AllocatedBindingSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "label" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::SegmentList()
    :
    weight{YType::uint8, "weight"}
        ,
    segment(this, {})
{

    yang_name = "segment-list"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::~SegmentList()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<segment.len(); index++)
    {
        if(segment[index]->has_data())
            return true;
    }
    return weight.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::has_operation() const
{
    for (std::size_t index=0; index<segment.len(); index++)
    {
        if(segment[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-list";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment>();
        ent_->parent = this;
        segment.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::get_children() const
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment" || name == "weight")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::Segment()
    :
    type{YType::enumeration, "type"},
    label{YType::uint32, "label"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "segment"; yang_parent_name = "segment-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::~Segment()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| label.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::TunnelEncap::SrPolicy::SegmentList::Segment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "label" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::Community()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "community"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::~Community()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::ExtendedCommunity()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "extended-community"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::~ExtendedCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::UnknownAttribute()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "unknown-attribute"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::~UnknownAttribute()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attribute";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::Cluster()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "cluster"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::~Cluster()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cluster";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2tpv3Cookie::L2tpv3Cookie()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "l2tpv3-cookie"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2tpv3Cookie::~L2tpv3Cookie()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2tpv3Cookie::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2tpv3Cookie::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2tpv3Cookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3-cookie";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2tpv3Cookie::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2tpv3Cookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2tpv3Cookie::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2tpv3Cookie::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2tpv3Cookie::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2tpv3Cookie::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::ConnectorValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "connector-value"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::~ConnectorValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connector-value";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::PmsiValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "pmsi-value"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::~PmsiValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-value";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::LsAttr()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "ls-attr"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::~LsAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ls-attr";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::PeDistinguisherLabel()
    :
    pe_address{YType::str, "pe-address"},
    label{YType::uint32, "label"}
{

    yang_name = "pe-distinguisher-label"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::~PeDistinguisherLabel()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::has_data() const
{
    if (is_presence_container) return true;
    return pe_address.is_set
	|| label.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pe_address.yfilter)
	|| ydk::is_set(label.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-distinguisher-label";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pe_address.is_set || is_set(pe_address.yfilter)) leaf_name_data.push_back(pe_address.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pe-address" || name == "label")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::LargeCommunity()
    :
    global_admin{YType::uint32, "global-admin"},
    local_data1{YType::uint32, "local-data1"},
    local_data2{YType::uint32, "local-data2"}
{

    yang_name = "large-community"; yang_parent_name = "common-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::~LargeCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::has_data() const
{
    if (is_presence_container) return true;
    return global_admin.is_set
	|| local_data1.is_set
	|| local_data2.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global_admin.yfilter)
	|| ydk::is_set(local_data1.yfilter)
	|| ydk::is_set(local_data2.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "large-community";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_admin.is_set || is_set(global_admin.yfilter)) leaf_name_data.push_back(global_admin.get_name_leafdata());
    if (local_data1.is_set || is_set(local_data1.yfilter)) leaf_name_data.push_back(local_data1.get_name_leafdata());
    if (local_data2.is_set || is_set(local_data2.yfilter)) leaf_name_data.push_back(local_data2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LargeCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-admin" || name == "local-data1" || name == "local-data2")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::AttrSet()
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
    prefix_sid_attr(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidAttr>())
    , tunnel_encap(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap>())
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
    prefix_sid_attr->parent = this;
    tunnel_encap->parent = this;

    yang_name = "attr-set"; yang_parent_name = "attribute-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::~AttrSet()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::has_data() const
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
	|| (prefix_sid_attr !=  nullptr && prefix_sid_attr->has_data())
	|| (tunnel_encap !=  nullptr && tunnel_encap->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::has_operation() const
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
	|| (prefix_sid_attr !=  nullptr && prefix_sid_attr->has_operation())
	|| (tunnel_encap !=  nullptr && tunnel_encap->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attr-set";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-sid-attr")
    {
        if(prefix_sid_attr == nullptr)
        {
            prefix_sid_attr = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidAttr>();
        }
        return prefix_sid_attr;
    }

    if(child_yang_name == "tunnel-encap")
    {
        if(tunnel_encap == nullptr)
        {
            tunnel_encap = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap>();
        }
        return tunnel_encap;
    }

    if(child_yang_name == "community")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community>();
        ent_->parent = this;
        community.append(ent_);
        return ent_;
    }

    if(child_yang_name == "extended-community")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity>();
        ent_->parent = this;
        extended_community.append(ent_);
        return ent_;
    }

    if(child_yang_name == "unknown-attribute")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute>();
        ent_->parent = this;
        unknown_attribute.append(ent_);
        return ent_;
    }

    if(child_yang_name == "cluster")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster>();
        ent_->parent = this;
        cluster.append(ent_);
        return ent_;
    }

    if(child_yang_name == "l2tpv3-cookie")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2tpv3Cookie>();
        ent_->parent = this;
        l2tpv3_cookie.append(ent_);
        return ent_;
    }

    if(child_yang_name == "connector-value")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue>();
        ent_->parent = this;
        connector_value.append(ent_);
        return ent_;
    }

    if(child_yang_name == "pmsi-value")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue>();
        ent_->parent = this;
        pmsi_value.append(ent_);
        return ent_;
    }

    if(child_yang_name == "ls-attr")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr>();
        ent_->parent = this;
        ls_attr.append(ent_);
        return ent_;
    }

    if(child_yang_name == "pe-distinguisher-label")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel>();
        ent_->parent = this;
        pe_distinguisher_label.append(ent_);
        return ent_;
    }

    if(child_yang_name == "large-community")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity>();
        ent_->parent = this;
        large_community.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix_sid_attr != nullptr)
    {
        _children["prefix-sid-attr"] = prefix_sid_attr;
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-sid-attr" || name == "tunnel-encap" || name == "community" || name == "extended-community" || name == "unknown-attribute" || name == "cluster" || name == "l2tpv3-cookie" || name == "connector-value" || name == "pmsi-value" || name == "ls-attr" || name == "pe-distinguisher-label" || name == "large-community" || name == "is-metric-present" || name == "is-local-pref-present" || name == "is-atomic-aggregate-present" || name == "is-aggregator-present" || name == "is-origin-present" || name == "is-as-path-present" || name == "is-community-present" || name == "is-extended-community-present" || name == "is-ssa-present" || name == "is-connector-present" || name == "is-pmsi-present" || name == "is-pppmp-present" || name == "is-aigp-present" || name == "is-pe-distinguisher-label-present" || name == "is-ls-attribute-present" || name == "is-label-index-present" || name == "neighbor-as" || name == "aggregator-as" || name == "aggregator-address" || name == "metric" || name == "local-preference" || name == "origin" || name == "as-path" || name == "extended-community-flags" || name == "originator" || name == "l2tpv3-session-id" || name == "connector-type" || name == "aigp-metric-value" || name == "pmsi-type" || name == "pmsi-flags" || name == "pmsi-label" || name == "ppm-pvalue" || name == "is-large-community-present")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidAttr::PrefixSidAttr()
    :
    prefix_sid_tlv(this, {})
{

    yang_name = "prefix-sid-attr"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidAttr::~PrefixSidAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidAttr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefix_sid_tlv.len(); index++)
    {
        if(prefix_sid_tlv[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidAttr::has_operation() const
{
    for (std::size_t index=0; index<prefix_sid_tlv.len(); index++)
    {
        if(prefix_sid_tlv[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid-attr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidAttr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-sid-tlv")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidAttr::PrefixSidTlv>();
        ent_->parent = this;
        prefix_sid_tlv.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prefix_sid_tlv.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidAttr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidAttr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidAttr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-sid-tlv")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidAttr::PrefixSidTlv::PrefixSidTlv()
    :
    type{YType::enumeration, "type"},
    len{YType::uint16, "len"},
    val{YType::str, "val"}
{

    yang_name = "prefix-sid-tlv"; yang_parent_name = "prefix-sid-attr"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidAttr::PrefixSidTlv::~PrefixSidTlv()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidAttr::PrefixSidTlv::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| len.is_set
	|| val.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidAttr::PrefixSidTlv::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(val.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidAttr::PrefixSidTlv::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-sid-tlv";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidAttr::PrefixSidTlv::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (val.is_set || is_set(val.yfilter)) leaf_name_data.push_back(val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidAttr::PrefixSidTlv::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidAttr::PrefixSidTlv::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidAttr::PrefixSidTlv::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "len")
    {
        len = value;
        len.value_namespace = name_space;
        len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "val")
    {
        val = value;
        val.value_namespace = name_space;
        val.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidAttr::PrefixSidTlv::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "len")
    {
        len.yfilter = yfilter;
    }
    if(value_path == "val")
    {
        val.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PrefixSidAttr::PrefixSidTlv::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "len" || name == "val")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::TunnelEncap()
    :
    sr_policy(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy>())
{
    sr_policy->parent = this;

    yang_name = "tunnel-encap"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::~TunnelEncap()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::has_data() const
{
    if (is_presence_container) return true;
    return (sr_policy !=  nullptr && sr_policy->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::has_operation() const
{
    return is_set(yfilter)
	|| (sr_policy !=  nullptr && sr_policy->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-encap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sr-policy")
    {
        if(sr_policy == nullptr)
        {
            sr_policy = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy>();
        }
        return sr_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sr_policy != nullptr)
    {
        _children["sr-policy"] = sr_policy;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sr-policy")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SrPolicy()
    :
    tunnel_encap_type{YType::uint16, "tunnel-encap-type"},
    preference{YType::uint32, "preference"},
    state{YType::boolean, "state"},
    request_state{YType::enumeration, "request-state"},
    usable{YType::boolean, "usable"}
        ,
    binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid>())
    , allocated_binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid>())
    , segment_list(this, {})
{
    binding_sid->parent = this;
    allocated_binding_sid->parent = this;

    yang_name = "sr-policy"; yang_parent_name = "tunnel-encap"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::~SrPolicy()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_encap_type.is_set || is_set(tunnel_encap_type.yfilter)) leaf_name_data.push_back(tunnel_encap_type.get_name_leafdata());
    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (request_state.is_set || is_set(request_state.yfilter)) leaf_name_data.push_back(request_state.get_name_leafdata());
    if (usable.is_set || is_set(usable.yfilter)) leaf_name_data.push_back(usable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "binding-sid")
    {
        if(binding_sid == nullptr)
        {
            binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid>();
        }
        return binding_sid;
    }

    if(child_yang_name == "allocated-binding-sid")
    {
        if(allocated_binding_sid == nullptr)
        {
            allocated_binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid>();
        }
        return allocated_binding_sid;
    }

    if(child_yang_name == "segment-list")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList>();
        ent_->parent = this;
        segment_list.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::get_children() const
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "binding-sid" || name == "allocated-binding-sid" || name == "segment-list" || name == "tunnel-encap-type" || name == "preference" || name == "state" || name == "request-state" || name == "usable")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::BindingSid()
    :
    type{YType::enumeration, "type"},
    label{YType::uint32, "label"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "binding-sid"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::~BindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| label.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::BindingSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "label" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::AllocatedBindingSid()
    :
    type{YType::enumeration, "type"},
    label{YType::uint32, "label"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "allocated-binding-sid"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::~AllocatedBindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| label.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocated-binding-sid";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::AllocatedBindingSid::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "label" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::SegmentList()
    :
    weight{YType::uint8, "weight"}
        ,
    segment(this, {})
{

    yang_name = "segment-list"; yang_parent_name = "sr-policy"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::~SegmentList()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<segment.len(); index++)
    {
        if(segment[index]->has_data())
            return true;
    }
    return weight.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::has_operation() const
{
    for (std::size_t index=0; index<segment.len(); index++)
    {
        if(segment[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(weight.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment-list";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "segment")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment>();
        ent_->parent = this;
        segment.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::get_children() const
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "segment" || name == "weight")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::Segment()
    :
    type{YType::enumeration, "type"},
    label{YType::uint32, "label"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "segment"; yang_parent_name = "segment-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::~Segment()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| label.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "segment";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::TunnelEncap::SrPolicy::SegmentList::Segment::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "type" || name == "label" || name == "ipv4-address" || name == "ipv6-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::Community()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "community"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::~Community()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::ExtendedCommunity()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "extended-community"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::~ExtendedCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::UnknownAttribute()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "unknown-attribute"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::~UnknownAttribute()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attribute";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::Cluster()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "cluster"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::~Cluster()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cluster";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2tpv3Cookie::L2tpv3Cookie()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "l2tpv3-cookie"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2tpv3Cookie::~L2tpv3Cookie()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2tpv3Cookie::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2tpv3Cookie::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2tpv3Cookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3-cookie";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2tpv3Cookie::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2tpv3Cookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2tpv3Cookie::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2tpv3Cookie::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2tpv3Cookie::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2tpv3Cookie::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::ConnectorValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "connector-value"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::~ConnectorValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connector-value";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::PmsiValue()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "pmsi-value"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::~PmsiValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-value";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::LsAttr()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "ls-attr"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::~LsAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ls-attr";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::PeDistinguisherLabel()
    :
    pe_address{YType::str, "pe-address"},
    label{YType::uint32, "label"}
{

    yang_name = "pe-distinguisher-label"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::~PeDistinguisherLabel()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::has_data() const
{
    if (is_presence_container) return true;
    return pe_address.is_set
	|| label.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pe_address.yfilter)
	|| ydk::is_set(label.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-distinguisher-label";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pe_address.is_set || is_set(pe_address.yfilter)) leaf_name_data.push_back(pe_address.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pe-address" || name == "label")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::LargeCommunity()
    :
    global_admin{YType::uint32, "global-admin"},
    local_data1{YType::uint32, "local-data1"},
    local_data2{YType::uint32, "local-data2"}
{

    yang_name = "large-community"; yang_parent_name = "attr-set"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::~LargeCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::has_data() const
{
    if (is_presence_container) return true;
    return global_admin.is_set
	|| local_data1.is_set
	|| local_data2.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(global_admin.yfilter)
	|| ydk::is_set(local_data1.yfilter)
	|| ydk::is_set(local_data2.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "large-community";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (global_admin.is_set || is_set(global_admin.yfilter)) leaf_name_data.push_back(global_admin.get_name_leafdata());
    if (local_data1.is_set || is_set(local_data1.yfilter)) leaf_name_data.push_back(local_data1.get_name_leafdata());
    if (local_data2.is_set || is_set(local_data2.yfilter)) leaf_name_data.push_back(local_data2.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LargeCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global-admin" || name == "local-data1" || name == "local-data2")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::RnhAddr()
    :
    len{YType::enumeration, "len"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    mac_address{YType::str, "mac-address"}
{

    yang_name = "rnh-addr"; yang_parent_name = "attribute-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::~RnhAddr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::has_data() const
{
    if (is_presence_container) return true;
    return len.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set
	|| mac_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(len.yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(ipv6_address.yfilter)
	|| ydk::is_set(mac_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rnh-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (len.is_set || is_set(len.yfilter)) leaf_name_data.push_back(len.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "len" || name == "ipv4-address" || name == "ipv6-address" || name == "mac-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::RibrnhIp()
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
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnVplsAddress>())
    , l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnMspwAddress>())
    , ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress>())
    , ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "ribrnh-ip"; yang_parent_name = "attribute-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::~RibrnhIp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ribrnh-ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::get_children() const
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnVplsAddress::L2vpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "ribrnh-ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnVplsAddress::~L2vpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnVplsAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnMspwAddress::L2vpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "ribrnh-ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnMspwAddress::~L2vpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnMspwAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2vpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "ribrnh-ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "ribrnh-ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Information::Information()
    :
    route_distinguisher{YType::str, "route-distinguisher"}
{

    yang_name = "information"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Information::~Information()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Information::has_data() const
{
    if (is_presence_container) return true;
    return route_distinguisher.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Information::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_distinguisher.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Information::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_distinguisher.is_set || is_set(route_distinguisher.yfilter)) leaf_name_data.push_back(route_distinguisher.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Information::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-distinguisher")
    {
        route_distinguisher = value;
        route_distinguisher.value_namespace = name_space;
        route_distinguisher.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Information::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-distinguisher")
    {
        route_distinguisher.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Information::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-distinguisher")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterVrf::UpdateInboundFilterVrf()
    :
    update_vrf_name{YType::str, "update-vrf-name"},
    update_filtered_message_count{YType::uint32, "update-filtered-message-count"},
    update_filtered_neighbor_count{YType::uint32, "update-filtered-neighbor-count"},
    last_update_filtered_age{YType::uint32, "last-update-filtered-age"}
        ,
    last_update_filtered_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp>())
{
    last_update_filtered_timestamp->parent = this;

    yang_name = "update-inbound-filter-vrf"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterVrf::~UpdateInboundFilterVrf()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterVrf::has_data() const
{
    if (is_presence_container) return true;
    return update_vrf_name.is_set
	|| update_filtered_message_count.is_set
	|| update_filtered_neighbor_count.is_set
	|| last_update_filtered_age.is_set
	|| (last_update_filtered_timestamp !=  nullptr && last_update_filtered_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterVrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(update_vrf_name.yfilter)
	|| ydk::is_set(update_filtered_message_count.yfilter)
	|| ydk::is_set(update_filtered_neighbor_count.yfilter)
	|| ydk::is_set(last_update_filtered_age.yfilter)
	|| (last_update_filtered_timestamp !=  nullptr && last_update_filtered_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-inbound-filter-vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_vrf_name.is_set || is_set(update_vrf_name.yfilter)) leaf_name_data.push_back(update_vrf_name.get_name_leafdata());
    if (update_filtered_message_count.is_set || is_set(update_filtered_message_count.yfilter)) leaf_name_data.push_back(update_filtered_message_count.get_name_leafdata());
    if (update_filtered_neighbor_count.is_set || is_set(update_filtered_neighbor_count.yfilter)) leaf_name_data.push_back(update_filtered_neighbor_count.get_name_leafdata());
    if (last_update_filtered_age.is_set || is_set(last_update_filtered_age.yfilter)) leaf_name_data.push_back(last_update_filtered_age.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-update-filtered-timestamp")
    {
        if(last_update_filtered_timestamp == nullptr)
        {
            last_update_filtered_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp>();
        }
        return last_update_filtered_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(last_update_filtered_timestamp != nullptr)
    {
        _children["last-update-filtered-timestamp"] = last_update_filtered_timestamp;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update-vrf-name")
    {
        update_vrf_name = value;
        update_vrf_name.value_namespace = name_space;
        update_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-filtered-message-count")
    {
        update_filtered_message_count = value;
        update_filtered_message_count.value_namespace = name_space;
        update_filtered_message_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-filtered-neighbor-count")
    {
        update_filtered_neighbor_count = value;
        update_filtered_neighbor_count.value_namespace = name_space;
        update_filtered_neighbor_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-filtered-age")
    {
        last_update_filtered_age = value;
        last_update_filtered_age.value_namespace = name_space;
        last_update_filtered_age.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update-vrf-name")
    {
        update_vrf_name.yfilter = yfilter;
    }
    if(value_path == "update-filtered-message-count")
    {
        update_filtered_message_count.yfilter = yfilter;
    }
    if(value_path == "update-filtered-neighbor-count")
    {
        update_filtered_neighbor_count.yfilter = yfilter;
    }
    if(value_path == "last-update-filtered-age")
    {
        last_update_filtered_age.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-update-filtered-timestamp" || name == "update-vrf-name" || name == "update-filtered-message-count" || name == "update-filtered-neighbor-count" || name == "last-update-filtered-age")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::LastUpdateFilteredTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-update-filtered-timestamp"; yang_parent_name = "update-inbound-filter-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::~LastUpdateFilteredTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-filtered-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postits()
    :
    postit(this, {"neighbor_address"})
{

    yang_name = "postits"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::~Postits()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<postit.len(); index++)
    {
        if(postit[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::has_operation() const
{
    for (std::size_t index=0; index<postit.len(); index++)
    {
        if(postit[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "postits";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "postit")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit>();
        ent_->parent = this;
        postit.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : postit.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "postit")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::Postit()
    :
    neighbor_address{YType::str, "neighbor-address"},
    vrf_name{YType::str, "vrf-name"},
    connect_state{YType::uint32, "connect-state"},
    start_time{YType::uint32, "start-time"},
    nsr_state{YType::enumeration, "nsr-state"}
        ,
    neighbors_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress>())
    , neighbor_af(this, {})
    , postit_info(this, {})
{
    neighbors_address->parent = this;

    yang_name = "postit"; yang_parent_name = "postits"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::~Postit()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor_af.len(); index++)
    {
        if(neighbor_af[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<postit_info.len(); index++)
    {
        if(postit_info[index]->has_data())
            return true;
    }
    return neighbor_address.is_set
	|| vrf_name.is_set
	|| connect_state.is_set
	|| start_time.is_set
	|| nsr_state.is_set
	|| (neighbors_address !=  nullptr && neighbors_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::has_operation() const
{
    for (std::size_t index=0; index<neighbor_af.len(); index++)
    {
        if(neighbor_af[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<postit_info.len(); index++)
    {
        if(postit_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(connect_state.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(nsr_state.yfilter)
	|| (neighbors_address !=  nullptr && neighbors_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "postit";
    ADD_KEY_TOKEN(neighbor_address, "neighbor-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (connect_state.is_set || is_set(connect_state.yfilter)) leaf_name_data.push_back(connect_state.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (nsr_state.is_set || is_set(nsr_state.yfilter)) leaf_name_data.push_back(nsr_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbors-address")
    {
        if(neighbors_address == nullptr)
        {
            neighbors_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress>();
        }
        return neighbors_address;
    }

    if(child_yang_name == "neighbor-af")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborAf>();
        ent_->parent = this;
        neighbor_af.append(ent_);
        return ent_;
    }

    if(child_yang_name == "postit-info")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo>();
        ent_->parent = this;
        postit_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(neighbors_address != nullptr)
    {
        _children["neighbors-address"] = neighbors_address;
    }

    count_ = 0;
    for (auto ent_ : neighbor_af.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : postit_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connect-state")
    {
        connect_state = value;
        connect_state.value_namespace = name_space;
        connect_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsr-state")
    {
        nsr_state = value;
        nsr_state.value_namespace = name_space;
        nsr_state.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "connect-state")
    {
        connect_state.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "nsr-state")
    {
        nsr_state.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbors-address" || name == "neighbor-af" || name == "postit-info" || name == "neighbor-address" || name == "vrf-name" || name == "connect-state" || name == "start-time" || name == "nsr-state")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::NeighborsAddress()
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
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2vpnVplsAddress>())
    , l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2vpnMspwAddress>())
    , ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress>())
    , ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "neighbors-address"; yang_parent_name = "postit"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::~NeighborsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2vpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2vpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::get_children() const
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2vpnVplsAddress::L2vpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "neighbors-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2vpnVplsAddress::~L2vpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2vpnVplsAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2vpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2vpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2vpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2vpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2vpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2vpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2vpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2vpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2vpnMspwAddress::L2vpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbors-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2vpnMspwAddress::~L2vpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2vpnMspwAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2vpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2vpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2vpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2vpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2vpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2vpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2vpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::L2vpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "neighbors-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "neighbors-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborAf::NeighborAf()
    :
    entry{YType::boolean, "entry"}
{

    yang_name = "neighbor-af"; yang_parent_name = "postit"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborAf::~NeighborAf()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborAf::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborAf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-af";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborAf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborAf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborAf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborAf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::NeighborAf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitInfo()
    :
    postit_type{YType::uint32, "postit-type"},
    postit_subtype{YType::uint32, "postit-subtype"},
    postit_flags{YType::uint8, "postit-flags"},
    postit_af_name{YType::enumeration, "postit-af-name"},
    postit_ts{YType::uint64, "postit-ts"},
    postit_direction{YType::uint8, "postit-direction"},
    postit_id{YType::uint32, "postit-id"},
    peer_id{YType::uint32, "peer-id"},
    postit_policy{YType::str, "postit-policy"},
    postit_reset{YType::enumeration, "postit-reset"}
        ,
    postit_notification(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification>())
{
    postit_notification->parent = this;

    yang_name = "postit-info"; yang_parent_name = "postit"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::~PostitInfo()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::has_data() const
{
    if (is_presence_container) return true;
    return postit_type.is_set
	|| postit_subtype.is_set
	|| postit_flags.is_set
	|| postit_af_name.is_set
	|| postit_ts.is_set
	|| postit_direction.is_set
	|| postit_id.is_set
	|| peer_id.is_set
	|| postit_policy.is_set
	|| postit_reset.is_set
	|| (postit_notification !=  nullptr && postit_notification->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(postit_type.yfilter)
	|| ydk::is_set(postit_subtype.yfilter)
	|| ydk::is_set(postit_flags.yfilter)
	|| ydk::is_set(postit_af_name.yfilter)
	|| ydk::is_set(postit_ts.yfilter)
	|| ydk::is_set(postit_direction.yfilter)
	|| ydk::is_set(postit_id.yfilter)
	|| ydk::is_set(peer_id.yfilter)
	|| ydk::is_set(postit_policy.yfilter)
	|| ydk::is_set(postit_reset.yfilter)
	|| (postit_notification !=  nullptr && postit_notification->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "postit-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (postit_type.is_set || is_set(postit_type.yfilter)) leaf_name_data.push_back(postit_type.get_name_leafdata());
    if (postit_subtype.is_set || is_set(postit_subtype.yfilter)) leaf_name_data.push_back(postit_subtype.get_name_leafdata());
    if (postit_flags.is_set || is_set(postit_flags.yfilter)) leaf_name_data.push_back(postit_flags.get_name_leafdata());
    if (postit_af_name.is_set || is_set(postit_af_name.yfilter)) leaf_name_data.push_back(postit_af_name.get_name_leafdata());
    if (postit_ts.is_set || is_set(postit_ts.yfilter)) leaf_name_data.push_back(postit_ts.get_name_leafdata());
    if (postit_direction.is_set || is_set(postit_direction.yfilter)) leaf_name_data.push_back(postit_direction.get_name_leafdata());
    if (postit_id.is_set || is_set(postit_id.yfilter)) leaf_name_data.push_back(postit_id.get_name_leafdata());
    if (peer_id.is_set || is_set(peer_id.yfilter)) leaf_name_data.push_back(peer_id.get_name_leafdata());
    if (postit_policy.is_set || is_set(postit_policy.yfilter)) leaf_name_data.push_back(postit_policy.get_name_leafdata());
    if (postit_reset.is_set || is_set(postit_reset.yfilter)) leaf_name_data.push_back(postit_reset.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "postit-notification")
    {
        if(postit_notification == nullptr)
        {
            postit_notification = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification>();
        }
        return postit_notification;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(postit_notification != nullptr)
    {
        _children["postit-notification"] = postit_notification;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "postit-type")
    {
        postit_type = value;
        postit_type.value_namespace = name_space;
        postit_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "postit-subtype")
    {
        postit_subtype = value;
        postit_subtype.value_namespace = name_space;
        postit_subtype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "postit-flags")
    {
        postit_flags = value;
        postit_flags.value_namespace = name_space;
        postit_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "postit-af-name")
    {
        postit_af_name = value;
        postit_af_name.value_namespace = name_space;
        postit_af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "postit-ts")
    {
        postit_ts = value;
        postit_ts.value_namespace = name_space;
        postit_ts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "postit-direction")
    {
        postit_direction = value;
        postit_direction.value_namespace = name_space;
        postit_direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "postit-id")
    {
        postit_id = value;
        postit_id.value_namespace = name_space;
        postit_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-id")
    {
        peer_id = value;
        peer_id.value_namespace = name_space;
        peer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "postit-policy")
    {
        postit_policy = value;
        postit_policy.value_namespace = name_space;
        postit_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "postit-reset")
    {
        postit_reset = value;
        postit_reset.value_namespace = name_space;
        postit_reset.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "postit-type")
    {
        postit_type.yfilter = yfilter;
    }
    if(value_path == "postit-subtype")
    {
        postit_subtype.yfilter = yfilter;
    }
    if(value_path == "postit-flags")
    {
        postit_flags.yfilter = yfilter;
    }
    if(value_path == "postit-af-name")
    {
        postit_af_name.yfilter = yfilter;
    }
    if(value_path == "postit-ts")
    {
        postit_ts.yfilter = yfilter;
    }
    if(value_path == "postit-direction")
    {
        postit_direction.yfilter = yfilter;
    }
    if(value_path == "postit-id")
    {
        postit_id.yfilter = yfilter;
    }
    if(value_path == "peer-id")
    {
        peer_id.yfilter = yfilter;
    }
    if(value_path == "postit-policy")
    {
        postit_policy.yfilter = yfilter;
    }
    if(value_path == "postit-reset")
    {
        postit_reset.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "postit-notification" || name == "postit-type" || name == "postit-subtype" || name == "postit-flags" || name == "postit-af-name" || name == "postit-ts" || name == "postit-direction" || name == "postit-id" || name == "peer-id" || name == "postit-policy" || name == "postit-reset")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification::PostitNotification()
    :
    time_since_last_notification{YType::uint32, "time-since-last-notification"},
    notification_error_code{YType::uint8, "notification-error-code"},
    notification_error_subcode{YType::uint8, "notification-error-subcode"}
        ,
    last_notification_data(this, {})
{

    yang_name = "postit-notification"; yang_parent_name = "postit-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification::~PostitNotification()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<last_notification_data.len(); index++)
    {
        if(last_notification_data[index]->has_data())
            return true;
    }
    return time_since_last_notification.is_set
	|| notification_error_code.is_set
	|| notification_error_subcode.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification::has_operation() const
{
    for (std::size_t index=0; index<last_notification_data.len(); index++)
    {
        if(last_notification_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(time_since_last_notification.yfilter)
	|| ydk::is_set(notification_error_code.yfilter)
	|| ydk::is_set(notification_error_subcode.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "postit-notification";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (time_since_last_notification.is_set || is_set(time_since_last_notification.yfilter)) leaf_name_data.push_back(time_since_last_notification.get_name_leafdata());
    if (notification_error_code.is_set || is_set(notification_error_code.yfilter)) leaf_name_data.push_back(notification_error_code.get_name_leafdata());
    if (notification_error_subcode.is_set || is_set(notification_error_subcode.yfilter)) leaf_name_data.push_back(notification_error_subcode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-notification-data")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData>();
        ent_->parent = this;
        last_notification_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : last_notification_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "time-since-last-notification")
    {
        time_since_last_notification = value;
        time_since_last_notification.value_namespace = name_space;
        time_since_last_notification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notification-error-code")
    {
        notification_error_code = value;
        notification_error_code.value_namespace = name_space;
        notification_error_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notification-error-subcode")
    {
        notification_error_subcode = value;
        notification_error_subcode.value_namespace = name_space;
        notification_error_subcode.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "time-since-last-notification")
    {
        time_since_last_notification.yfilter = yfilter;
    }
    if(value_path == "notification-error-code")
    {
        notification_error_code.yfilter = yfilter;
    }
    if(value_path == "notification-error-subcode")
    {
        notification_error_subcode.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-notification-data" || name == "time-since-last-notification" || name == "notification-error-code" || name == "notification-error-subcode")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData::LastNotificationData()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "last-notification-data"; yang_parent_name = "postit-notification"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData::~LastNotificationData()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-notification-data";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::GlobalProcessInfo()
    :
    vrf_name{YType::str, "vrf-name"},
    vrfid{YType::uint32, "vrfid"}
        ,
    global(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global>())
    , vrf(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Vrf_>())
{
    global->parent = this;
    vrf->parent = this;

    yang_name = "global-process-info"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::~GlobalProcessInfo()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| vrfid.is_set
	|| (global !=  nullptr && global->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(vrfid.yfilter)
	|| (global !=  nullptr && global->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-process-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (vrfid.is_set || is_set(vrfid.yfilter)) leaf_name_data.push_back(vrfid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global>();
        }
        return global;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Vrf_>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(global != nullptr)
    {
        _children["global"] = global;
    }

    if(vrf != nullptr)
    {
        _children["vrf"] = vrf;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrfid")
    {
        vrfid = value;
        vrfid.value_namespace = name_space;
        vrfid.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "vrfid")
    {
        vrfid.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global" || name == "vrf" || name == "vrf-name" || name == "vrfid")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::Global()
    :
    in_standalone_mode{YType::boolean, "in-standalone-mode"},
    local_as{YType::uint32, "local-as"},
    instance_name{YType::str, "instance-name"},
    restart_count{YType::uint32, "restart-count"},
    update_delay{YType::uint32, "update-delay"},
    generic_scan_period{YType::uint16, "generic-scan-period"},
    confederation_id{YType::uint32, "confederation-id"},
    cluster_id{YType::uint32, "cluster-id"},
    configured_cluster_id{YType::uint32, "configured-cluster-id"},
    is_cluster_id_specified_as_ip{YType::boolean, "is-cluster-id-specified-as-ip"},
    asn_format{YType::uint32, "asn-format"},
    srgb_start_configured{YType::uint32, "srgb-start-configured"},
    srgb_end_configured{YType::uint32, "srgb-end-configured"},
    srgb_start{YType::uint32, "srgb-start"},
    srgb_end{YType::uint32, "srgb-end"},
    graceful_maintenance{YType::boolean, "graceful-maintenance"},
    graceful_maint_all_nbrs{YType::boolean, "graceful-maint-all-nbrs"},
    graceful_maint_retain_routes{YType::boolean, "graceful-maint-retain-routes"},
    process_rlimit{YType::uint64, "process-rlimit"},
    bmp_maximum_buffer_size{YType::uint64, "bmp-maximum-buffer-size"},
    bmp_default_buffer_size{YType::uint64, "bmp-default-buffer-size"},
    bmp_current_buffer_size{YType::uint64, "bmp-current-buffer-size"},
    bmp_cur_maximum_buffer_size{YType::uint64, "bmp-cur-maximum-buffer-size"}
        ,
    cluster_id_entry(this, {})
    , color_id(this, {})
{

    yang_name = "global"; yang_parent_name = "global-process-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::~Global()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<cluster_id_entry.len(); index++)
    {
        if(cluster_id_entry[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<color_id.len(); index++)
    {
        if(color_id[index]->has_data())
            return true;
    }
    return in_standalone_mode.is_set
	|| local_as.is_set
	|| instance_name.is_set
	|| restart_count.is_set
	|| update_delay.is_set
	|| generic_scan_period.is_set
	|| confederation_id.is_set
	|| cluster_id.is_set
	|| configured_cluster_id.is_set
	|| is_cluster_id_specified_as_ip.is_set
	|| asn_format.is_set
	|| srgb_start_configured.is_set
	|| srgb_end_configured.is_set
	|| srgb_start.is_set
	|| srgb_end.is_set
	|| graceful_maintenance.is_set
	|| graceful_maint_all_nbrs.is_set
	|| graceful_maint_retain_routes.is_set
	|| process_rlimit.is_set
	|| bmp_maximum_buffer_size.is_set
	|| bmp_default_buffer_size.is_set
	|| bmp_current_buffer_size.is_set
	|| bmp_cur_maximum_buffer_size.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::has_operation() const
{
    for (std::size_t index=0; index<cluster_id_entry.len(); index++)
    {
        if(cluster_id_entry[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<color_id.len(); index++)
    {
        if(color_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(in_standalone_mode.yfilter)
	|| ydk::is_set(local_as.yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| ydk::is_set(restart_count.yfilter)
	|| ydk::is_set(update_delay.yfilter)
	|| ydk::is_set(generic_scan_period.yfilter)
	|| ydk::is_set(confederation_id.yfilter)
	|| ydk::is_set(cluster_id.yfilter)
	|| ydk::is_set(configured_cluster_id.yfilter)
	|| ydk::is_set(is_cluster_id_specified_as_ip.yfilter)
	|| ydk::is_set(asn_format.yfilter)
	|| ydk::is_set(srgb_start_configured.yfilter)
	|| ydk::is_set(srgb_end_configured.yfilter)
	|| ydk::is_set(srgb_start.yfilter)
	|| ydk::is_set(srgb_end.yfilter)
	|| ydk::is_set(graceful_maintenance.yfilter)
	|| ydk::is_set(graceful_maint_all_nbrs.yfilter)
	|| ydk::is_set(graceful_maint_retain_routes.yfilter)
	|| ydk::is_set(process_rlimit.yfilter)
	|| ydk::is_set(bmp_maximum_buffer_size.yfilter)
	|| ydk::is_set(bmp_default_buffer_size.yfilter)
	|| ydk::is_set(bmp_current_buffer_size.yfilter)
	|| ydk::is_set(bmp_cur_maximum_buffer_size.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_standalone_mode.is_set || is_set(in_standalone_mode.yfilter)) leaf_name_data.push_back(in_standalone_mode.get_name_leafdata());
    if (local_as.is_set || is_set(local_as.yfilter)) leaf_name_data.push_back(local_as.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (restart_count.is_set || is_set(restart_count.yfilter)) leaf_name_data.push_back(restart_count.get_name_leafdata());
    if (update_delay.is_set || is_set(update_delay.yfilter)) leaf_name_data.push_back(update_delay.get_name_leafdata());
    if (generic_scan_period.is_set || is_set(generic_scan_period.yfilter)) leaf_name_data.push_back(generic_scan_period.get_name_leafdata());
    if (confederation_id.is_set || is_set(confederation_id.yfilter)) leaf_name_data.push_back(confederation_id.get_name_leafdata());
    if (cluster_id.is_set || is_set(cluster_id.yfilter)) leaf_name_data.push_back(cluster_id.get_name_leafdata());
    if (configured_cluster_id.is_set || is_set(configured_cluster_id.yfilter)) leaf_name_data.push_back(configured_cluster_id.get_name_leafdata());
    if (is_cluster_id_specified_as_ip.is_set || is_set(is_cluster_id_specified_as_ip.yfilter)) leaf_name_data.push_back(is_cluster_id_specified_as_ip.get_name_leafdata());
    if (asn_format.is_set || is_set(asn_format.yfilter)) leaf_name_data.push_back(asn_format.get_name_leafdata());
    if (srgb_start_configured.is_set || is_set(srgb_start_configured.yfilter)) leaf_name_data.push_back(srgb_start_configured.get_name_leafdata());
    if (srgb_end_configured.is_set || is_set(srgb_end_configured.yfilter)) leaf_name_data.push_back(srgb_end_configured.get_name_leafdata());
    if (srgb_start.is_set || is_set(srgb_start.yfilter)) leaf_name_data.push_back(srgb_start.get_name_leafdata());
    if (srgb_end.is_set || is_set(srgb_end.yfilter)) leaf_name_data.push_back(srgb_end.get_name_leafdata());
    if (graceful_maintenance.is_set || is_set(graceful_maintenance.yfilter)) leaf_name_data.push_back(graceful_maintenance.get_name_leafdata());
    if (graceful_maint_all_nbrs.is_set || is_set(graceful_maint_all_nbrs.yfilter)) leaf_name_data.push_back(graceful_maint_all_nbrs.get_name_leafdata());
    if (graceful_maint_retain_routes.is_set || is_set(graceful_maint_retain_routes.yfilter)) leaf_name_data.push_back(graceful_maint_retain_routes.get_name_leafdata());
    if (process_rlimit.is_set || is_set(process_rlimit.yfilter)) leaf_name_data.push_back(process_rlimit.get_name_leafdata());
    if (bmp_maximum_buffer_size.is_set || is_set(bmp_maximum_buffer_size.yfilter)) leaf_name_data.push_back(bmp_maximum_buffer_size.get_name_leafdata());
    if (bmp_default_buffer_size.is_set || is_set(bmp_default_buffer_size.yfilter)) leaf_name_data.push_back(bmp_default_buffer_size.get_name_leafdata());
    if (bmp_current_buffer_size.is_set || is_set(bmp_current_buffer_size.yfilter)) leaf_name_data.push_back(bmp_current_buffer_size.get_name_leafdata());
    if (bmp_cur_maximum_buffer_size.is_set || is_set(bmp_cur_maximum_buffer_size.yfilter)) leaf_name_data.push_back(bmp_cur_maximum_buffer_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cluster-id-entry")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::ClusterIdEntry>();
        ent_->parent = this;
        cluster_id_entry.append(ent_);
        return ent_;
    }

    if(child_yang_name == "color-id")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::ColorId>();
        ent_->parent = this;
        color_id.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : cluster_id_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : color_id.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-standalone-mode")
    {
        in_standalone_mode = value;
        in_standalone_mode.value_namespace = name_space;
        in_standalone_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-as")
    {
        local_as = value;
        local_as.value_namespace = name_space;
        local_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-count")
    {
        restart_count = value;
        restart_count.value_namespace = name_space;
        restart_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-delay")
    {
        update_delay = value;
        update_delay.value_namespace = name_space;
        update_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generic-scan-period")
    {
        generic_scan_period = value;
        generic_scan_period.value_namespace = name_space;
        generic_scan_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "confederation-id")
    {
        confederation_id = value;
        confederation_id.value_namespace = name_space;
        confederation_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster-id")
    {
        cluster_id = value;
        cluster_id.value_namespace = name_space;
        cluster_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-cluster-id")
    {
        configured_cluster_id = value;
        configured_cluster_id.value_namespace = name_space;
        configured_cluster_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-cluster-id-specified-as-ip")
    {
        is_cluster_id_specified_as_ip = value;
        is_cluster_id_specified_as_ip.value_namespace = name_space;
        is_cluster_id_specified_as_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "asn-format")
    {
        asn_format = value;
        asn_format.value_namespace = name_space;
        asn_format.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srgb-start-configured")
    {
        srgb_start_configured = value;
        srgb_start_configured.value_namespace = name_space;
        srgb_start_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srgb-end-configured")
    {
        srgb_end_configured = value;
        srgb_end_configured.value_namespace = name_space;
        srgb_end_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srgb-start")
    {
        srgb_start = value;
        srgb_start.value_namespace = name_space;
        srgb_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srgb-end")
    {
        srgb_end = value;
        srgb_end.value_namespace = name_space;
        srgb_end.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graceful-maintenance")
    {
        graceful_maintenance = value;
        graceful_maintenance.value_namespace = name_space;
        graceful_maintenance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graceful-maint-all-nbrs")
    {
        graceful_maint_all_nbrs = value;
        graceful_maint_all_nbrs.value_namespace = name_space;
        graceful_maint_all_nbrs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "graceful-maint-retain-routes")
    {
        graceful_maint_retain_routes = value;
        graceful_maint_retain_routes.value_namespace = name_space;
        graceful_maint_retain_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-rlimit")
    {
        process_rlimit = value;
        process_rlimit.value_namespace = name_space;
        process_rlimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-maximum-buffer-size")
    {
        bmp_maximum_buffer_size = value;
        bmp_maximum_buffer_size.value_namespace = name_space;
        bmp_maximum_buffer_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-default-buffer-size")
    {
        bmp_default_buffer_size = value;
        bmp_default_buffer_size.value_namespace = name_space;
        bmp_default_buffer_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-current-buffer-size")
    {
        bmp_current_buffer_size = value;
        bmp_current_buffer_size.value_namespace = name_space;
        bmp_current_buffer_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-cur-maximum-buffer-size")
    {
        bmp_cur_maximum_buffer_size = value;
        bmp_cur_maximum_buffer_size.value_namespace = name_space;
        bmp_cur_maximum_buffer_size.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-standalone-mode")
    {
        in_standalone_mode.yfilter = yfilter;
    }
    if(value_path == "local-as")
    {
        local_as.yfilter = yfilter;
    }
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
    if(value_path == "restart-count")
    {
        restart_count.yfilter = yfilter;
    }
    if(value_path == "update-delay")
    {
        update_delay.yfilter = yfilter;
    }
    if(value_path == "generic-scan-period")
    {
        generic_scan_period.yfilter = yfilter;
    }
    if(value_path == "confederation-id")
    {
        confederation_id.yfilter = yfilter;
    }
    if(value_path == "cluster-id")
    {
        cluster_id.yfilter = yfilter;
    }
    if(value_path == "configured-cluster-id")
    {
        configured_cluster_id.yfilter = yfilter;
    }
    if(value_path == "is-cluster-id-specified-as-ip")
    {
        is_cluster_id_specified_as_ip.yfilter = yfilter;
    }
    if(value_path == "asn-format")
    {
        asn_format.yfilter = yfilter;
    }
    if(value_path == "srgb-start-configured")
    {
        srgb_start_configured.yfilter = yfilter;
    }
    if(value_path == "srgb-end-configured")
    {
        srgb_end_configured.yfilter = yfilter;
    }
    if(value_path == "srgb-start")
    {
        srgb_start.yfilter = yfilter;
    }
    if(value_path == "srgb-end")
    {
        srgb_end.yfilter = yfilter;
    }
    if(value_path == "graceful-maintenance")
    {
        graceful_maintenance.yfilter = yfilter;
    }
    if(value_path == "graceful-maint-all-nbrs")
    {
        graceful_maint_all_nbrs.yfilter = yfilter;
    }
    if(value_path == "graceful-maint-retain-routes")
    {
        graceful_maint_retain_routes.yfilter = yfilter;
    }
    if(value_path == "process-rlimit")
    {
        process_rlimit.yfilter = yfilter;
    }
    if(value_path == "bmp-maximum-buffer-size")
    {
        bmp_maximum_buffer_size.yfilter = yfilter;
    }
    if(value_path == "bmp-default-buffer-size")
    {
        bmp_default_buffer_size.yfilter = yfilter;
    }
    if(value_path == "bmp-current-buffer-size")
    {
        bmp_current_buffer_size.yfilter = yfilter;
    }
    if(value_path == "bmp-cur-maximum-buffer-size")
    {
        bmp_cur_maximum_buffer_size.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cluster-id-entry" || name == "color-id" || name == "in-standalone-mode" || name == "local-as" || name == "instance-name" || name == "restart-count" || name == "update-delay" || name == "generic-scan-period" || name == "confederation-id" || name == "cluster-id" || name == "configured-cluster-id" || name == "is-cluster-id-specified-as-ip" || name == "asn-format" || name == "srgb-start-configured" || name == "srgb-end-configured" || name == "srgb-start" || name == "srgb-end" || name == "graceful-maintenance" || name == "graceful-maint-all-nbrs" || name == "graceful-maint-retain-routes" || name == "process-rlimit" || name == "bmp-maximum-buffer-size" || name == "bmp-default-buffer-size" || name == "bmp-current-buffer-size" || name == "bmp-cur-maximum-buffer-size")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::ClusterIdEntry::ClusterIdEntry()
    :
    cluster_id_val{YType::uint32, "cluster-id-val"},
    cluster_id_type{YType::uint8, "cluster-id-type"}
{

    yang_name = "cluster-id-entry"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::ClusterIdEntry::~ClusterIdEntry()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::ClusterIdEntry::has_data() const
{
    if (is_presence_container) return true;
    return cluster_id_val.is_set
	|| cluster_id_type.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::ClusterIdEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cluster_id_val.yfilter)
	|| ydk::is_set(cluster_id_type.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::ClusterIdEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cluster-id-entry";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::ClusterIdEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cluster_id_val.is_set || is_set(cluster_id_val.yfilter)) leaf_name_data.push_back(cluster_id_val.get_name_leafdata());
    if (cluster_id_type.is_set || is_set(cluster_id_type.yfilter)) leaf_name_data.push_back(cluster_id_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::ClusterIdEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::ClusterIdEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::ClusterIdEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cluster-id-val")
    {
        cluster_id_val = value;
        cluster_id_val.value_namespace = name_space;
        cluster_id_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster-id-type")
    {
        cluster_id_type = value;
        cluster_id_type.value_namespace = name_space;
        cluster_id_type.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::ClusterIdEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cluster-id-val")
    {
        cluster_id_val.yfilter = yfilter;
    }
    if(value_path == "cluster-id-type")
    {
        cluster_id_type.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::ClusterIdEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cluster-id-val" || name == "cluster-id-type")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::ColorId::ColorId()
    :
    color_id_val{YType::uint32, "color-id-val"}
{

    yang_name = "color-id"; yang_parent_name = "global"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::ColorId::~ColorId()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::ColorId::has_data() const
{
    if (is_presence_container) return true;
    return color_id_val.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::ColorId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(color_id_val.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::ColorId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "color-id";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::ColorId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (color_id_val.is_set || is_set(color_id_val.yfilter)) leaf_name_data.push_back(color_id_val.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::ColorId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::ColorId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::ColorId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "color-id-val")
    {
        color_id_val = value;
        color_id_val.value_namespace = name_space;
        color_id_val.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::ColorId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "color-id-val")
    {
        color_id_val.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Global::ColorId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "color-id-val")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Vrf_::Vrf_()
    :
    vrf_is_active{YType::boolean, "vrf-is-active"},
    route_distinguisher{YType::str, "route-distinguisher"},
    router_id{YType::str, "router-id"},
    configured_router_id{YType::str, "configured-router-id"},
    is_redistribute_ibgp_to_ig_ps_enabled{YType::boolean, "is-redistribute-ibgp-to-ig-ps-enabled"},
    is_fast_external_fallover_enabled{YType::boolean, "is-fast-external-fallover-enabled"},
    is_bestpath_missing_med_is_worst_enabled{YType::boolean, "is-bestpath-missing-med-is-worst-enabled"},
    is_bestpath_always_compare_med_enabled{YType::boolean, "is-bestpath-always-compare-med-enabled"},
    is_bestpath_ignore_as_path_enabled{YType::boolean, "is-bestpath-ignore-as-path-enabled"},
    is_bestpath_as_path_mpath_relax_enabled{YType::boolean, "is-bestpath-as-path-mpath-relax-enabled"},
    is_bestpath_compare_med_from_confed_peer_enabled{YType::boolean, "is-bestpath-compare-med-from-confed-peer-enabled"},
    is_bestpath_compare_router_id_for_ebgp_peers_enabled{YType::boolean, "is-bestpath-compare-router-id-for-ebgp-peers-enabled"},
    is_bestpath_aigp_ignore_enabled{YType::boolean, "is-bestpath-aigp-ignore-enabled"},
    is_bestpath_igp_metric_ignore_enabled{YType::boolean, "is-bestpath-igp-metric-ignore-enabled"},
    is_multipath_as_path_ignore_onwards_enabled{YType::boolean, "is-multipath-as-path-ignore-onwards-enabled"},
    is_enforce_first_as_enabled{YType::boolean, "is-enforce-first-as-enabled"},
    default_local_preference{YType::uint32, "default-local-preference"},
    keep_alive_time{YType::uint16, "keep-alive-time"},
    hold_time{YType::uint16, "hold-time"},
    min_acceptable_hold_time{YType::uint16, "min-acceptable-hold-time"},
    is_neighbor_logging{YType::boolean, "is-neighbor-logging"},
    is_default_metric_configured{YType::boolean, "is-default-metric-configured"},
    default_metric{YType::uint32, "default-metric"},
    is_default_originate_configured{YType::boolean, "is-default-originate-configured"},
    is_graceful_restart{YType::boolean, "is-graceful-restart"},
    is_nsr{YType::boolean, "is-nsr"},
    restart_time{YType::uint32, "restart-time"},
    stale_path_time{YType::uint32, "stale-path-time"},
    rib_purge_timeout{YType::uint32, "rib-purge-timeout"},
    rpki_use_validity{YType::boolean, "rpki-use-validity"},
    rpki_allow_invalid{YType::boolean, "rpki-allow-invalid"},
    rpki_signal_ibgp{YType::boolean, "rpki-signal-ibgp"}
{

    yang_name = "vrf"; yang_parent_name = "global-process-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Vrf_::~Vrf_()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Vrf_::has_data() const
{
    if (is_presence_container) return true;
    return vrf_is_active.is_set
	|| route_distinguisher.is_set
	|| router_id.is_set
	|| configured_router_id.is_set
	|| is_redistribute_ibgp_to_ig_ps_enabled.is_set
	|| is_fast_external_fallover_enabled.is_set
	|| is_bestpath_missing_med_is_worst_enabled.is_set
	|| is_bestpath_always_compare_med_enabled.is_set
	|| is_bestpath_ignore_as_path_enabled.is_set
	|| is_bestpath_as_path_mpath_relax_enabled.is_set
	|| is_bestpath_compare_med_from_confed_peer_enabled.is_set
	|| is_bestpath_compare_router_id_for_ebgp_peers_enabled.is_set
	|| is_bestpath_aigp_ignore_enabled.is_set
	|| is_bestpath_igp_metric_ignore_enabled.is_set
	|| is_multipath_as_path_ignore_onwards_enabled.is_set
	|| is_enforce_first_as_enabled.is_set
	|| default_local_preference.is_set
	|| keep_alive_time.is_set
	|| hold_time.is_set
	|| min_acceptable_hold_time.is_set
	|| is_neighbor_logging.is_set
	|| is_default_metric_configured.is_set
	|| default_metric.is_set
	|| is_default_originate_configured.is_set
	|| is_graceful_restart.is_set
	|| is_nsr.is_set
	|| restart_time.is_set
	|| stale_path_time.is_set
	|| rib_purge_timeout.is_set
	|| rpki_use_validity.is_set
	|| rpki_allow_invalid.is_set
	|| rpki_signal_ibgp.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Vrf_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_is_active.yfilter)
	|| ydk::is_set(route_distinguisher.yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(configured_router_id.yfilter)
	|| ydk::is_set(is_redistribute_ibgp_to_ig_ps_enabled.yfilter)
	|| ydk::is_set(is_fast_external_fallover_enabled.yfilter)
	|| ydk::is_set(is_bestpath_missing_med_is_worst_enabled.yfilter)
	|| ydk::is_set(is_bestpath_always_compare_med_enabled.yfilter)
	|| ydk::is_set(is_bestpath_ignore_as_path_enabled.yfilter)
	|| ydk::is_set(is_bestpath_as_path_mpath_relax_enabled.yfilter)
	|| ydk::is_set(is_bestpath_compare_med_from_confed_peer_enabled.yfilter)
	|| ydk::is_set(is_bestpath_compare_router_id_for_ebgp_peers_enabled.yfilter)
	|| ydk::is_set(is_bestpath_aigp_ignore_enabled.yfilter)
	|| ydk::is_set(is_bestpath_igp_metric_ignore_enabled.yfilter)
	|| ydk::is_set(is_multipath_as_path_ignore_onwards_enabled.yfilter)
	|| ydk::is_set(is_enforce_first_as_enabled.yfilter)
	|| ydk::is_set(default_local_preference.yfilter)
	|| ydk::is_set(keep_alive_time.yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(min_acceptable_hold_time.yfilter)
	|| ydk::is_set(is_neighbor_logging.yfilter)
	|| ydk::is_set(is_default_metric_configured.yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(is_default_originate_configured.yfilter)
	|| ydk::is_set(is_graceful_restart.yfilter)
	|| ydk::is_set(is_nsr.yfilter)
	|| ydk::is_set(restart_time.yfilter)
	|| ydk::is_set(stale_path_time.yfilter)
	|| ydk::is_set(rib_purge_timeout.yfilter)
	|| ydk::is_set(rpki_use_validity.yfilter)
	|| ydk::is_set(rpki_allow_invalid.yfilter)
	|| ydk::is_set(rpki_signal_ibgp.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Vrf_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_is_active.is_set || is_set(vrf_is_active.yfilter)) leaf_name_data.push_back(vrf_is_active.get_name_leafdata());
    if (route_distinguisher.is_set || is_set(route_distinguisher.yfilter)) leaf_name_data.push_back(route_distinguisher.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (configured_router_id.is_set || is_set(configured_router_id.yfilter)) leaf_name_data.push_back(configured_router_id.get_name_leafdata());
    if (is_redistribute_ibgp_to_ig_ps_enabled.is_set || is_set(is_redistribute_ibgp_to_ig_ps_enabled.yfilter)) leaf_name_data.push_back(is_redistribute_ibgp_to_ig_ps_enabled.get_name_leafdata());
    if (is_fast_external_fallover_enabled.is_set || is_set(is_fast_external_fallover_enabled.yfilter)) leaf_name_data.push_back(is_fast_external_fallover_enabled.get_name_leafdata());
    if (is_bestpath_missing_med_is_worst_enabled.is_set || is_set(is_bestpath_missing_med_is_worst_enabled.yfilter)) leaf_name_data.push_back(is_bestpath_missing_med_is_worst_enabled.get_name_leafdata());
    if (is_bestpath_always_compare_med_enabled.is_set || is_set(is_bestpath_always_compare_med_enabled.yfilter)) leaf_name_data.push_back(is_bestpath_always_compare_med_enabled.get_name_leafdata());
    if (is_bestpath_ignore_as_path_enabled.is_set || is_set(is_bestpath_ignore_as_path_enabled.yfilter)) leaf_name_data.push_back(is_bestpath_ignore_as_path_enabled.get_name_leafdata());
    if (is_bestpath_as_path_mpath_relax_enabled.is_set || is_set(is_bestpath_as_path_mpath_relax_enabled.yfilter)) leaf_name_data.push_back(is_bestpath_as_path_mpath_relax_enabled.get_name_leafdata());
    if (is_bestpath_compare_med_from_confed_peer_enabled.is_set || is_set(is_bestpath_compare_med_from_confed_peer_enabled.yfilter)) leaf_name_data.push_back(is_bestpath_compare_med_from_confed_peer_enabled.get_name_leafdata());
    if (is_bestpath_compare_router_id_for_ebgp_peers_enabled.is_set || is_set(is_bestpath_compare_router_id_for_ebgp_peers_enabled.yfilter)) leaf_name_data.push_back(is_bestpath_compare_router_id_for_ebgp_peers_enabled.get_name_leafdata());
    if (is_bestpath_aigp_ignore_enabled.is_set || is_set(is_bestpath_aigp_ignore_enabled.yfilter)) leaf_name_data.push_back(is_bestpath_aigp_ignore_enabled.get_name_leafdata());
    if (is_bestpath_igp_metric_ignore_enabled.is_set || is_set(is_bestpath_igp_metric_ignore_enabled.yfilter)) leaf_name_data.push_back(is_bestpath_igp_metric_ignore_enabled.get_name_leafdata());
    if (is_multipath_as_path_ignore_onwards_enabled.is_set || is_set(is_multipath_as_path_ignore_onwards_enabled.yfilter)) leaf_name_data.push_back(is_multipath_as_path_ignore_onwards_enabled.get_name_leafdata());
    if (is_enforce_first_as_enabled.is_set || is_set(is_enforce_first_as_enabled.yfilter)) leaf_name_data.push_back(is_enforce_first_as_enabled.get_name_leafdata());
    if (default_local_preference.is_set || is_set(default_local_preference.yfilter)) leaf_name_data.push_back(default_local_preference.get_name_leafdata());
    if (keep_alive_time.is_set || is_set(keep_alive_time.yfilter)) leaf_name_data.push_back(keep_alive_time.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (min_acceptable_hold_time.is_set || is_set(min_acceptable_hold_time.yfilter)) leaf_name_data.push_back(min_acceptable_hold_time.get_name_leafdata());
    if (is_neighbor_logging.is_set || is_set(is_neighbor_logging.yfilter)) leaf_name_data.push_back(is_neighbor_logging.get_name_leafdata());
    if (is_default_metric_configured.is_set || is_set(is_default_metric_configured.yfilter)) leaf_name_data.push_back(is_default_metric_configured.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (is_default_originate_configured.is_set || is_set(is_default_originate_configured.yfilter)) leaf_name_data.push_back(is_default_originate_configured.get_name_leafdata());
    if (is_graceful_restart.is_set || is_set(is_graceful_restart.yfilter)) leaf_name_data.push_back(is_graceful_restart.get_name_leafdata());
    if (is_nsr.is_set || is_set(is_nsr.yfilter)) leaf_name_data.push_back(is_nsr.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.yfilter)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (stale_path_time.is_set || is_set(stale_path_time.yfilter)) leaf_name_data.push_back(stale_path_time.get_name_leafdata());
    if (rib_purge_timeout.is_set || is_set(rib_purge_timeout.yfilter)) leaf_name_data.push_back(rib_purge_timeout.get_name_leafdata());
    if (rpki_use_validity.is_set || is_set(rpki_use_validity.yfilter)) leaf_name_data.push_back(rpki_use_validity.get_name_leafdata());
    if (rpki_allow_invalid.is_set || is_set(rpki_allow_invalid.yfilter)) leaf_name_data.push_back(rpki_allow_invalid.get_name_leafdata());
    if (rpki_signal_ibgp.is_set || is_set(rpki_signal_ibgp.yfilter)) leaf_name_data.push_back(rpki_signal_ibgp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Vrf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-is-active")
    {
        vrf_is_active = value;
        vrf_is_active.value_namespace = name_space;
        vrf_is_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher = value;
        route_distinguisher.value_namespace = name_space;
        route_distinguisher.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-router-id")
    {
        configured_router_id = value;
        configured_router_id.value_namespace = name_space;
        configured_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-redistribute-ibgp-to-ig-ps-enabled")
    {
        is_redistribute_ibgp_to_ig_ps_enabled = value;
        is_redistribute_ibgp_to_ig_ps_enabled.value_namespace = name_space;
        is_redistribute_ibgp_to_ig_ps_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-fast-external-fallover-enabled")
    {
        is_fast_external_fallover_enabled = value;
        is_fast_external_fallover_enabled.value_namespace = name_space;
        is_fast_external_fallover_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bestpath-missing-med-is-worst-enabled")
    {
        is_bestpath_missing_med_is_worst_enabled = value;
        is_bestpath_missing_med_is_worst_enabled.value_namespace = name_space;
        is_bestpath_missing_med_is_worst_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bestpath-always-compare-med-enabled")
    {
        is_bestpath_always_compare_med_enabled = value;
        is_bestpath_always_compare_med_enabled.value_namespace = name_space;
        is_bestpath_always_compare_med_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bestpath-ignore-as-path-enabled")
    {
        is_bestpath_ignore_as_path_enabled = value;
        is_bestpath_ignore_as_path_enabled.value_namespace = name_space;
        is_bestpath_ignore_as_path_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bestpath-as-path-mpath-relax-enabled")
    {
        is_bestpath_as_path_mpath_relax_enabled = value;
        is_bestpath_as_path_mpath_relax_enabled.value_namespace = name_space;
        is_bestpath_as_path_mpath_relax_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bestpath-compare-med-from-confed-peer-enabled")
    {
        is_bestpath_compare_med_from_confed_peer_enabled = value;
        is_bestpath_compare_med_from_confed_peer_enabled.value_namespace = name_space;
        is_bestpath_compare_med_from_confed_peer_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bestpath-compare-router-id-for-ebgp-peers-enabled")
    {
        is_bestpath_compare_router_id_for_ebgp_peers_enabled = value;
        is_bestpath_compare_router_id_for_ebgp_peers_enabled.value_namespace = name_space;
        is_bestpath_compare_router_id_for_ebgp_peers_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bestpath-aigp-ignore-enabled")
    {
        is_bestpath_aigp_ignore_enabled = value;
        is_bestpath_aigp_ignore_enabled.value_namespace = name_space;
        is_bestpath_aigp_ignore_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bestpath-igp-metric-ignore-enabled")
    {
        is_bestpath_igp_metric_ignore_enabled = value;
        is_bestpath_igp_metric_ignore_enabled.value_namespace = name_space;
        is_bestpath_igp_metric_ignore_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-multipath-as-path-ignore-onwards-enabled")
    {
        is_multipath_as_path_ignore_onwards_enabled = value;
        is_multipath_as_path_ignore_onwards_enabled.value_namespace = name_space;
        is_multipath_as_path_ignore_onwards_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-enforce-first-as-enabled")
    {
        is_enforce_first_as_enabled = value;
        is_enforce_first_as_enabled.value_namespace = name_space;
        is_enforce_first_as_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-local-preference")
    {
        default_local_preference = value;
        default_local_preference.value_namespace = name_space;
        default_local_preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keep-alive-time")
    {
        keep_alive_time = value;
        keep_alive_time.value_namespace = name_space;
        keep_alive_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-acceptable-hold-time")
    {
        min_acceptable_hold_time = value;
        min_acceptable_hold_time.value_namespace = name_space;
        min_acceptable_hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-neighbor-logging")
    {
        is_neighbor_logging = value;
        is_neighbor_logging.value_namespace = name_space;
        is_neighbor_logging.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-default-metric-configured")
    {
        is_default_metric_configured = value;
        is_default_metric_configured.value_namespace = name_space;
        is_default_metric_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-default-originate-configured")
    {
        is_default_originate_configured = value;
        is_default_originate_configured.value_namespace = name_space;
        is_default_originate_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-graceful-restart")
    {
        is_graceful_restart = value;
        is_graceful_restart.value_namespace = name_space;
        is_graceful_restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-nsr")
    {
        is_nsr = value;
        is_nsr.value_namespace = name_space;
        is_nsr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
        restart_time.value_namespace = name_space;
        restart_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stale-path-time")
    {
        stale_path_time = value;
        stale_path_time.value_namespace = name_space;
        stale_path_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-purge-timeout")
    {
        rib_purge_timeout = value;
        rib_purge_timeout.value_namespace = name_space;
        rib_purge_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-use-validity")
    {
        rpki_use_validity = value;
        rpki_use_validity.value_namespace = name_space;
        rpki_use_validity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-allow-invalid")
    {
        rpki_allow_invalid = value;
        rpki_allow_invalid.value_namespace = name_space;
        rpki_allow_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-signal-ibgp")
    {
        rpki_signal_ibgp = value;
        rpki_signal_ibgp.value_namespace = name_space;
        rpki_signal_ibgp.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Vrf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-is-active")
    {
        vrf_is_active.yfilter = yfilter;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "configured-router-id")
    {
        configured_router_id.yfilter = yfilter;
    }
    if(value_path == "is-redistribute-ibgp-to-ig-ps-enabled")
    {
        is_redistribute_ibgp_to_ig_ps_enabled.yfilter = yfilter;
    }
    if(value_path == "is-fast-external-fallover-enabled")
    {
        is_fast_external_fallover_enabled.yfilter = yfilter;
    }
    if(value_path == "is-bestpath-missing-med-is-worst-enabled")
    {
        is_bestpath_missing_med_is_worst_enabled.yfilter = yfilter;
    }
    if(value_path == "is-bestpath-always-compare-med-enabled")
    {
        is_bestpath_always_compare_med_enabled.yfilter = yfilter;
    }
    if(value_path == "is-bestpath-ignore-as-path-enabled")
    {
        is_bestpath_ignore_as_path_enabled.yfilter = yfilter;
    }
    if(value_path == "is-bestpath-as-path-mpath-relax-enabled")
    {
        is_bestpath_as_path_mpath_relax_enabled.yfilter = yfilter;
    }
    if(value_path == "is-bestpath-compare-med-from-confed-peer-enabled")
    {
        is_bestpath_compare_med_from_confed_peer_enabled.yfilter = yfilter;
    }
    if(value_path == "is-bestpath-compare-router-id-for-ebgp-peers-enabled")
    {
        is_bestpath_compare_router_id_for_ebgp_peers_enabled.yfilter = yfilter;
    }
    if(value_path == "is-bestpath-aigp-ignore-enabled")
    {
        is_bestpath_aigp_ignore_enabled.yfilter = yfilter;
    }
    if(value_path == "is-bestpath-igp-metric-ignore-enabled")
    {
        is_bestpath_igp_metric_ignore_enabled.yfilter = yfilter;
    }
    if(value_path == "is-multipath-as-path-ignore-onwards-enabled")
    {
        is_multipath_as_path_ignore_onwards_enabled.yfilter = yfilter;
    }
    if(value_path == "is-enforce-first-as-enabled")
    {
        is_enforce_first_as_enabled.yfilter = yfilter;
    }
    if(value_path == "default-local-preference")
    {
        default_local_preference.yfilter = yfilter;
    }
    if(value_path == "keep-alive-time")
    {
        keep_alive_time.yfilter = yfilter;
    }
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "min-acceptable-hold-time")
    {
        min_acceptable_hold_time.yfilter = yfilter;
    }
    if(value_path == "is-neighbor-logging")
    {
        is_neighbor_logging.yfilter = yfilter;
    }
    if(value_path == "is-default-metric-configured")
    {
        is_default_metric_configured.yfilter = yfilter;
    }
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "is-default-originate-configured")
    {
        is_default_originate_configured.yfilter = yfilter;
    }
    if(value_path == "is-graceful-restart")
    {
        is_graceful_restart.yfilter = yfilter;
    }
    if(value_path == "is-nsr")
    {
        is_nsr.yfilter = yfilter;
    }
    if(value_path == "restart-time")
    {
        restart_time.yfilter = yfilter;
    }
    if(value_path == "stale-path-time")
    {
        stale_path_time.yfilter = yfilter;
    }
    if(value_path == "rib-purge-timeout")
    {
        rib_purge_timeout.yfilter = yfilter;
    }
    if(value_path == "rpki-use-validity")
    {
        rpki_use_validity.yfilter = yfilter;
    }
    if(value_path == "rpki-allow-invalid")
    {
        rpki_allow_invalid.yfilter = yfilter;
    }
    if(value_path == "rpki-signal-ibgp")
    {
        rpki_signal_ibgp.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::GlobalProcessInfo::Vrf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-is-active" || name == "route-distinguisher" || name == "router-id" || name == "configured-router-id" || name == "is-redistribute-ibgp-to-ig-ps-enabled" || name == "is-fast-external-fallover-enabled" || name == "is-bestpath-missing-med-is-worst-enabled" || name == "is-bestpath-always-compare-med-enabled" || name == "is-bestpath-ignore-as-path-enabled" || name == "is-bestpath-as-path-mpath-relax-enabled" || name == "is-bestpath-compare-med-from-confed-peer-enabled" || name == "is-bestpath-compare-router-id-for-ebgp-peers-enabled" || name == "is-bestpath-aigp-ignore-enabled" || name == "is-bestpath-igp-metric-ignore-enabled" || name == "is-multipath-as-path-ignore-onwards-enabled" || name == "is-enforce-first-as-enabled" || name == "default-local-preference" || name == "keep-alive-time" || name == "hold-time" || name == "min-acceptable-hold-time" || name == "is-neighbor-logging" || name == "is-default-metric-configured" || name == "default-metric" || name == "is-default-originate-configured" || name == "is-graceful-restart" || name == "is-nsr" || name == "restart-time" || name == "stale-path-time" || name == "rib-purge-timeout" || name == "rpki-use-validity" || name == "rpki-allow-invalid" || name == "rpki-signal-ibgp")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbors()
    :
    update_inbound_error_neighbor(this, {"neighbor_address"})
{

    yang_name = "update-inbound-error-neighbors"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::~UpdateInboundErrorNeighbors()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<update_inbound_error_neighbor.len(); index++)
    {
        if(update_inbound_error_neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::has_operation() const
{
    for (std::size_t index=0; index<update_inbound_error_neighbor.len(); index++)
    {
        if(update_inbound_error_neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-inbound-error-neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "update-inbound-error-neighbor")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor>();
        ent_->parent = this;
        update_inbound_error_neighbor.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : update_inbound_error_neighbor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-inbound-error-neighbor")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateInboundErrorNeighbor()
    :
    neighbor_address{YType::str, "neighbor-address"},
    update_vrf_name{YType::str, "update-vrf-name"},
    update_error_handling_avoid_reset{YType::boolean, "update-error-handling-avoid-reset"},
    total_update_message_count{YType::uint32, "total-update-message-count"},
    update_malformed_message_count{YType::uint32, "update-malformed-message-count"},
    last_update_malformed_age{YType::uint32, "last-update-malformed-age"},
    update_memory_allocation_fail_count{YType::uint32, "update-memory-allocation-fail-count"},
    last_update_memory_allocation_fail_age{YType::uint32, "last-update-memory-allocation-fail-age"},
    update_error_handling_reset_count{YType::uint32, "update-error-handling-reset-count"},
    last_error_handling_reset_age{YType::uint32, "last-error-handling-reset-age"},
    update_error_message_list_count{YType::uint32, "update-error-message-list-count"},
    update_attribute_discard_count{YType::uint32, "update-attribute-discard-count"},
    establishment_total_update_message_count{YType::uint32, "establishment-total-update-message-count"}
        ,
    update_neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress>())
    , first_update_malformed_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp>())
    , last_update_malformed_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp>())
    , first_update_memory_allocation_fail_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp>())
    , last_update_memory_allocation_fail_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp>())
    , first_update_error_handling_reset_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp>())
    , last_error_handling_reset_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp>())
    , establishment_action_count(this, {})
    , update_error_message(this, {})
{
    update_neighbor_address->parent = this;
    first_update_malformed_timestamp->parent = this;
    last_update_malformed_timestamp->parent = this;
    first_update_memory_allocation_fail_timestamp->parent = this;
    last_update_memory_allocation_fail_timestamp->parent = this;
    first_update_error_handling_reset_timestamp->parent = this;
    last_error_handling_reset_timestamp->parent = this;

    yang_name = "update-inbound-error-neighbor"; yang_parent_name = "update-inbound-error-neighbors"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::~UpdateInboundErrorNeighbor()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<establishment_action_count.len(); index++)
    {
        if(establishment_action_count[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<update_error_message.len(); index++)
    {
        if(update_error_message[index]->has_data())
            return true;
    }
    return neighbor_address.is_set
	|| update_vrf_name.is_set
	|| update_error_handling_avoid_reset.is_set
	|| total_update_message_count.is_set
	|| update_malformed_message_count.is_set
	|| last_update_malformed_age.is_set
	|| update_memory_allocation_fail_count.is_set
	|| last_update_memory_allocation_fail_age.is_set
	|| update_error_handling_reset_count.is_set
	|| last_error_handling_reset_age.is_set
	|| update_error_message_list_count.is_set
	|| update_attribute_discard_count.is_set
	|| establishment_total_update_message_count.is_set
	|| (update_neighbor_address !=  nullptr && update_neighbor_address->has_data())
	|| (first_update_malformed_timestamp !=  nullptr && first_update_malformed_timestamp->has_data())
	|| (last_update_malformed_timestamp !=  nullptr && last_update_malformed_timestamp->has_data())
	|| (first_update_memory_allocation_fail_timestamp !=  nullptr && first_update_memory_allocation_fail_timestamp->has_data())
	|| (last_update_memory_allocation_fail_timestamp !=  nullptr && last_update_memory_allocation_fail_timestamp->has_data())
	|| (first_update_error_handling_reset_timestamp !=  nullptr && first_update_error_handling_reset_timestamp->has_data())
	|| (last_error_handling_reset_timestamp !=  nullptr && last_error_handling_reset_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::has_operation() const
{
    for (std::size_t index=0; index<establishment_action_count.len(); index++)
    {
        if(establishment_action_count[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<update_error_message.len(); index++)
    {
        if(update_error_message[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(update_vrf_name.yfilter)
	|| ydk::is_set(update_error_handling_avoid_reset.yfilter)
	|| ydk::is_set(total_update_message_count.yfilter)
	|| ydk::is_set(update_malformed_message_count.yfilter)
	|| ydk::is_set(last_update_malformed_age.yfilter)
	|| ydk::is_set(update_memory_allocation_fail_count.yfilter)
	|| ydk::is_set(last_update_memory_allocation_fail_age.yfilter)
	|| ydk::is_set(update_error_handling_reset_count.yfilter)
	|| ydk::is_set(last_error_handling_reset_age.yfilter)
	|| ydk::is_set(update_error_message_list_count.yfilter)
	|| ydk::is_set(update_attribute_discard_count.yfilter)
	|| ydk::is_set(establishment_total_update_message_count.yfilter)
	|| (update_neighbor_address !=  nullptr && update_neighbor_address->has_operation())
	|| (first_update_malformed_timestamp !=  nullptr && first_update_malformed_timestamp->has_operation())
	|| (last_update_malformed_timestamp !=  nullptr && last_update_malformed_timestamp->has_operation())
	|| (first_update_memory_allocation_fail_timestamp !=  nullptr && first_update_memory_allocation_fail_timestamp->has_operation())
	|| (last_update_memory_allocation_fail_timestamp !=  nullptr && last_update_memory_allocation_fail_timestamp->has_operation())
	|| (first_update_error_handling_reset_timestamp !=  nullptr && first_update_error_handling_reset_timestamp->has_operation())
	|| (last_error_handling_reset_timestamp !=  nullptr && last_error_handling_reset_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-inbound-error-neighbor";
    ADD_KEY_TOKEN(neighbor_address, "neighbor-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (update_vrf_name.is_set || is_set(update_vrf_name.yfilter)) leaf_name_data.push_back(update_vrf_name.get_name_leafdata());
    if (update_error_handling_avoid_reset.is_set || is_set(update_error_handling_avoid_reset.yfilter)) leaf_name_data.push_back(update_error_handling_avoid_reset.get_name_leafdata());
    if (total_update_message_count.is_set || is_set(total_update_message_count.yfilter)) leaf_name_data.push_back(total_update_message_count.get_name_leafdata());
    if (update_malformed_message_count.is_set || is_set(update_malformed_message_count.yfilter)) leaf_name_data.push_back(update_malformed_message_count.get_name_leafdata());
    if (last_update_malformed_age.is_set || is_set(last_update_malformed_age.yfilter)) leaf_name_data.push_back(last_update_malformed_age.get_name_leafdata());
    if (update_memory_allocation_fail_count.is_set || is_set(update_memory_allocation_fail_count.yfilter)) leaf_name_data.push_back(update_memory_allocation_fail_count.get_name_leafdata());
    if (last_update_memory_allocation_fail_age.is_set || is_set(last_update_memory_allocation_fail_age.yfilter)) leaf_name_data.push_back(last_update_memory_allocation_fail_age.get_name_leafdata());
    if (update_error_handling_reset_count.is_set || is_set(update_error_handling_reset_count.yfilter)) leaf_name_data.push_back(update_error_handling_reset_count.get_name_leafdata());
    if (last_error_handling_reset_age.is_set || is_set(last_error_handling_reset_age.yfilter)) leaf_name_data.push_back(last_error_handling_reset_age.get_name_leafdata());
    if (update_error_message_list_count.is_set || is_set(update_error_message_list_count.yfilter)) leaf_name_data.push_back(update_error_message_list_count.get_name_leafdata());
    if (update_attribute_discard_count.is_set || is_set(update_attribute_discard_count.yfilter)) leaf_name_data.push_back(update_attribute_discard_count.get_name_leafdata());
    if (establishment_total_update_message_count.is_set || is_set(establishment_total_update_message_count.yfilter)) leaf_name_data.push_back(establishment_total_update_message_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "update-neighbor-address")
    {
        if(update_neighbor_address == nullptr)
        {
            update_neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress>();
        }
        return update_neighbor_address;
    }

    if(child_yang_name == "first-update-malformed-timestamp")
    {
        if(first_update_malformed_timestamp == nullptr)
        {
            first_update_malformed_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp>();
        }
        return first_update_malformed_timestamp;
    }

    if(child_yang_name == "last-update-malformed-timestamp")
    {
        if(last_update_malformed_timestamp == nullptr)
        {
            last_update_malformed_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp>();
        }
        return last_update_malformed_timestamp;
    }

    if(child_yang_name == "first-update-memory-allocation-fail-timestamp")
    {
        if(first_update_memory_allocation_fail_timestamp == nullptr)
        {
            first_update_memory_allocation_fail_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp>();
        }
        return first_update_memory_allocation_fail_timestamp;
    }

    if(child_yang_name == "last-update-memory-allocation-fail-timestamp")
    {
        if(last_update_memory_allocation_fail_timestamp == nullptr)
        {
            last_update_memory_allocation_fail_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp>();
        }
        return last_update_memory_allocation_fail_timestamp;
    }

    if(child_yang_name == "first-update-error-handling-reset-timestamp")
    {
        if(first_update_error_handling_reset_timestamp == nullptr)
        {
            first_update_error_handling_reset_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp>();
        }
        return first_update_error_handling_reset_timestamp;
    }

    if(child_yang_name == "last-error-handling-reset-timestamp")
    {
        if(last_error_handling_reset_timestamp == nullptr)
        {
            last_error_handling_reset_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp>();
        }
        return last_error_handling_reset_timestamp;
    }

    if(child_yang_name == "establishment-action-count")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount>();
        ent_->parent = this;
        establishment_action_count.append(ent_);
        return ent_;
    }

    if(child_yang_name == "update-error-message")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage>();
        ent_->parent = this;
        update_error_message.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(update_neighbor_address != nullptr)
    {
        _children["update-neighbor-address"] = update_neighbor_address;
    }

    if(first_update_malformed_timestamp != nullptr)
    {
        _children["first-update-malformed-timestamp"] = first_update_malformed_timestamp;
    }

    if(last_update_malformed_timestamp != nullptr)
    {
        _children["last-update-malformed-timestamp"] = last_update_malformed_timestamp;
    }

    if(first_update_memory_allocation_fail_timestamp != nullptr)
    {
        _children["first-update-memory-allocation-fail-timestamp"] = first_update_memory_allocation_fail_timestamp;
    }

    if(last_update_memory_allocation_fail_timestamp != nullptr)
    {
        _children["last-update-memory-allocation-fail-timestamp"] = last_update_memory_allocation_fail_timestamp;
    }

    if(first_update_error_handling_reset_timestamp != nullptr)
    {
        _children["first-update-error-handling-reset-timestamp"] = first_update_error_handling_reset_timestamp;
    }

    if(last_error_handling_reset_timestamp != nullptr)
    {
        _children["last-error-handling-reset-timestamp"] = last_error_handling_reset_timestamp;
    }

    count_ = 0;
    for (auto ent_ : establishment_action_count.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : update_error_message.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-vrf-name")
    {
        update_vrf_name = value;
        update_vrf_name.value_namespace = name_space;
        update_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-handling-avoid-reset")
    {
        update_error_handling_avoid_reset = value;
        update_error_handling_avoid_reset.value_namespace = name_space;
        update_error_handling_avoid_reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-update-message-count")
    {
        total_update_message_count = value;
        total_update_message_count.value_namespace = name_space;
        total_update_message_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-malformed-message-count")
    {
        update_malformed_message_count = value;
        update_malformed_message_count.value_namespace = name_space;
        update_malformed_message_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-malformed-age")
    {
        last_update_malformed_age = value;
        last_update_malformed_age.value_namespace = name_space;
        last_update_malformed_age.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "update-error-handling-reset-count")
    {
        update_error_handling_reset_count = value;
        update_error_handling_reset_count.value_namespace = name_space;
        update_error_handling_reset_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-error-handling-reset-age")
    {
        last_error_handling_reset_age = value;
        last_error_handling_reset_age.value_namespace = name_space;
        last_error_handling_reset_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-message-list-count")
    {
        update_error_message_list_count = value;
        update_error_message_list_count.value_namespace = name_space;
        update_error_message_list_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-attribute-discard-count")
    {
        update_attribute_discard_count = value;
        update_attribute_discard_count.value_namespace = name_space;
        update_attribute_discard_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "establishment-total-update-message-count")
    {
        establishment_total_update_message_count = value;
        establishment_total_update_message_count.value_namespace = name_space;
        establishment_total_update_message_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "update-vrf-name")
    {
        update_vrf_name.yfilter = yfilter;
    }
    if(value_path == "update-error-handling-avoid-reset")
    {
        update_error_handling_avoid_reset.yfilter = yfilter;
    }
    if(value_path == "total-update-message-count")
    {
        total_update_message_count.yfilter = yfilter;
    }
    if(value_path == "update-malformed-message-count")
    {
        update_malformed_message_count.yfilter = yfilter;
    }
    if(value_path == "last-update-malformed-age")
    {
        last_update_malformed_age.yfilter = yfilter;
    }
    if(value_path == "update-memory-allocation-fail-count")
    {
        update_memory_allocation_fail_count.yfilter = yfilter;
    }
    if(value_path == "last-update-memory-allocation-fail-age")
    {
        last_update_memory_allocation_fail_age.yfilter = yfilter;
    }
    if(value_path == "update-error-handling-reset-count")
    {
        update_error_handling_reset_count.yfilter = yfilter;
    }
    if(value_path == "last-error-handling-reset-age")
    {
        last_error_handling_reset_age.yfilter = yfilter;
    }
    if(value_path == "update-error-message-list-count")
    {
        update_error_message_list_count.yfilter = yfilter;
    }
    if(value_path == "update-attribute-discard-count")
    {
        update_attribute_discard_count.yfilter = yfilter;
    }
    if(value_path == "establishment-total-update-message-count")
    {
        establishment_total_update_message_count.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-neighbor-address" || name == "first-update-malformed-timestamp" || name == "last-update-malformed-timestamp" || name == "first-update-memory-allocation-fail-timestamp" || name == "last-update-memory-allocation-fail-timestamp" || name == "first-update-error-handling-reset-timestamp" || name == "last-error-handling-reset-timestamp" || name == "establishment-action-count" || name == "update-error-message" || name == "neighbor-address" || name == "update-vrf-name" || name == "update-error-handling-avoid-reset" || name == "total-update-message-count" || name == "update-malformed-message-count" || name == "last-update-malformed-age" || name == "update-memory-allocation-fail-count" || name == "last-update-memory-allocation-fail-age" || name == "update-error-handling-reset-count" || name == "last-error-handling-reset-age" || name == "update-error-message-list-count" || name == "update-attribute-discard-count" || name == "establishment-total-update-message-count")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::UpdateNeighborAddress()
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
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2vpnVplsAddress>())
    , l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2vpnMspwAddress>())
    , ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress>())
    , ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "update-neighbor-address"; yang_parent_name = "update-inbound-error-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::~UpdateNeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2vpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2vpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::get_children() const
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2vpnVplsAddress::L2vpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "update-neighbor-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2vpnVplsAddress::~L2vpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2vpnVplsAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2vpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2vpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2vpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2vpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2vpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2vpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2vpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2vpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2vpnMspwAddress::L2vpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "update-neighbor-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2vpnMspwAddress::~L2vpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2vpnMspwAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2vpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2vpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2vpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2vpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2vpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2vpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2vpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2vpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "update-neighbor-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "update-neighbor-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::FirstUpdateMalformedTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "first-update-malformed-timestamp"; yang_parent_name = "update-inbound-error-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::~FirstUpdateMalformedTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-update-malformed-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::LastUpdateMalformedTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-update-malformed-timestamp"; yang_parent_name = "update-inbound-error-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::~LastUpdateMalformedTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-malformed-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::FirstUpdateMemoryAllocationFailTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "first-update-memory-allocation-fail-timestamp"; yang_parent_name = "update-inbound-error-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::~FirstUpdateMemoryAllocationFailTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-update-memory-allocation-fail-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::LastUpdateMemoryAllocationFailTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-update-memory-allocation-fail-timestamp"; yang_parent_name = "update-inbound-error-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::~LastUpdateMemoryAllocationFailTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-memory-allocation-fail-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::FirstUpdateErrorHandlingResetTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "first-update-error-handling-reset-timestamp"; yang_parent_name = "update-inbound-error-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::~FirstUpdateErrorHandlingResetTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-update-error-handling-reset-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::LastErrorHandlingResetTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-error-handling-reset-timestamp"; yang_parent_name = "update-inbound-error-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::~LastErrorHandlingResetTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-error-handling-reset-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::EstablishmentActionCount()
    :
    entry{YType::uint32, "entry"}
{

    yang_name = "establishment-action-count"; yang_parent_name = "update-inbound-error-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::~EstablishmentActionCount()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "establishment-action-count";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorMessage()
    :
    update_error_final_action{YType::enumeration, "update-error-final-action"},
    update_attribute_discard_count{YType::uint32, "update-attribute-discard-count"},
    update_error_nlri_address_family{YType::enumeration, "update-error-nlri-address-family"},
    update_error_nlri_string{YType::str, "update-error-nlri-string"},
    update_error_nlri_string_truncated{YType::boolean, "update-error-nlri-string-truncated"}
        ,
    update_message_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp>())
    , update_message_reset_data(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData>())
    , update_message_data(this, {})
    , update_error_element(this, {})
{
    update_message_timestamp->parent = this;
    update_message_reset_data->parent = this;

    yang_name = "update-error-message"; yang_parent_name = "update-inbound-error-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::~UpdateErrorMessage()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<update_message_data.len(); index++)
    {
        if(update_message_data[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<update_error_element.len(); index++)
    {
        if(update_error_element[index]->has_data())
            return true;
    }
    return update_error_final_action.is_set
	|| update_attribute_discard_count.is_set
	|| update_error_nlri_address_family.is_set
	|| update_error_nlri_string.is_set
	|| update_error_nlri_string_truncated.is_set
	|| (update_message_timestamp !=  nullptr && update_message_timestamp->has_data())
	|| (update_message_reset_data !=  nullptr && update_message_reset_data->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::has_operation() const
{
    for (std::size_t index=0; index<update_message_data.len(); index++)
    {
        if(update_message_data[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<update_error_element.len(); index++)
    {
        if(update_error_element[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(update_error_final_action.yfilter)
	|| ydk::is_set(update_attribute_discard_count.yfilter)
	|| ydk::is_set(update_error_nlri_address_family.yfilter)
	|| ydk::is_set(update_error_nlri_string.yfilter)
	|| ydk::is_set(update_error_nlri_string_truncated.yfilter)
	|| (update_message_timestamp !=  nullptr && update_message_timestamp->has_operation())
	|| (update_message_reset_data !=  nullptr && update_message_reset_data->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-error-message";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_error_final_action.is_set || is_set(update_error_final_action.yfilter)) leaf_name_data.push_back(update_error_final_action.get_name_leafdata());
    if (update_attribute_discard_count.is_set || is_set(update_attribute_discard_count.yfilter)) leaf_name_data.push_back(update_attribute_discard_count.get_name_leafdata());
    if (update_error_nlri_address_family.is_set || is_set(update_error_nlri_address_family.yfilter)) leaf_name_data.push_back(update_error_nlri_address_family.get_name_leafdata());
    if (update_error_nlri_string.is_set || is_set(update_error_nlri_string.yfilter)) leaf_name_data.push_back(update_error_nlri_string.get_name_leafdata());
    if (update_error_nlri_string_truncated.is_set || is_set(update_error_nlri_string_truncated.yfilter)) leaf_name_data.push_back(update_error_nlri_string_truncated.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "update-message-timestamp")
    {
        if(update_message_timestamp == nullptr)
        {
            update_message_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp>();
        }
        return update_message_timestamp;
    }

    if(child_yang_name == "update-message-reset-data")
    {
        if(update_message_reset_data == nullptr)
        {
            update_message_reset_data = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData>();
        }
        return update_message_reset_data;
    }

    if(child_yang_name == "update-message-data")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData>();
        ent_->parent = this;
        update_message_data.append(ent_);
        return ent_;
    }

    if(child_yang_name == "update-error-element")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement>();
        ent_->parent = this;
        update_error_element.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(update_message_timestamp != nullptr)
    {
        _children["update-message-timestamp"] = update_message_timestamp;
    }

    if(update_message_reset_data != nullptr)
    {
        _children["update-message-reset-data"] = update_message_reset_data;
    }

    count_ = 0;
    for (auto ent_ : update_message_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : update_error_element.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update-error-final-action")
    {
        update_error_final_action = value;
        update_error_final_action.value_namespace = name_space;
        update_error_final_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-attribute-discard-count")
    {
        update_attribute_discard_count = value;
        update_attribute_discard_count.value_namespace = name_space;
        update_attribute_discard_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-nlri-address-family")
    {
        update_error_nlri_address_family = value;
        update_error_nlri_address_family.value_namespace = name_space;
        update_error_nlri_address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-nlri-string")
    {
        update_error_nlri_string = value;
        update_error_nlri_string.value_namespace = name_space;
        update_error_nlri_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-nlri-string-truncated")
    {
        update_error_nlri_string_truncated = value;
        update_error_nlri_string_truncated.value_namespace = name_space;
        update_error_nlri_string_truncated.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update-error-final-action")
    {
        update_error_final_action.yfilter = yfilter;
    }
    if(value_path == "update-attribute-discard-count")
    {
        update_attribute_discard_count.yfilter = yfilter;
    }
    if(value_path == "update-error-nlri-address-family")
    {
        update_error_nlri_address_family.yfilter = yfilter;
    }
    if(value_path == "update-error-nlri-string")
    {
        update_error_nlri_string.yfilter = yfilter;
    }
    if(value_path == "update-error-nlri-string-truncated")
    {
        update_error_nlri_string_truncated.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-message-timestamp" || name == "update-message-reset-data" || name == "update-message-data" || name == "update-error-element" || name == "update-error-final-action" || name == "update-attribute-discard-count" || name == "update-error-nlri-address-family" || name == "update-error-nlri-string" || name == "update-error-nlri-string-truncated")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::UpdateMessageTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "update-message-timestamp"; yang_parent_name = "update-error-message"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::~UpdateMessageTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-message-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::UpdateMessageResetData()
    :
    update_error_reset_reason{YType::enumeration, "update-error-reset-reason"},
    update_error_reset_notification_code{YType::uint8, "update-error-reset-notification-code"},
    update_error_reset_notification_sub_code{YType::uint16, "update-error-reset-notification-sub-code"},
    update_error_reset_notification_data{YType::str, "update-error-reset-notification-data"},
    update_error_reset_notification_data_length{YType::uint16, "update-error-reset-notification-data-length"}
{

    yang_name = "update-message-reset-data"; yang_parent_name = "update-error-message"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::~UpdateMessageResetData()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::has_data() const
{
    if (is_presence_container) return true;
    return update_error_reset_reason.is_set
	|| update_error_reset_notification_code.is_set
	|| update_error_reset_notification_sub_code.is_set
	|| update_error_reset_notification_data.is_set
	|| update_error_reset_notification_data_length.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(update_error_reset_reason.yfilter)
	|| ydk::is_set(update_error_reset_notification_code.yfilter)
	|| ydk::is_set(update_error_reset_notification_sub_code.yfilter)
	|| ydk::is_set(update_error_reset_notification_data.yfilter)
	|| ydk::is_set(update_error_reset_notification_data_length.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-message-reset-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_error_reset_reason.is_set || is_set(update_error_reset_reason.yfilter)) leaf_name_data.push_back(update_error_reset_reason.get_name_leafdata());
    if (update_error_reset_notification_code.is_set || is_set(update_error_reset_notification_code.yfilter)) leaf_name_data.push_back(update_error_reset_notification_code.get_name_leafdata());
    if (update_error_reset_notification_sub_code.is_set || is_set(update_error_reset_notification_sub_code.yfilter)) leaf_name_data.push_back(update_error_reset_notification_sub_code.get_name_leafdata());
    if (update_error_reset_notification_data.is_set || is_set(update_error_reset_notification_data.yfilter)) leaf_name_data.push_back(update_error_reset_notification_data.get_name_leafdata());
    if (update_error_reset_notification_data_length.is_set || is_set(update_error_reset_notification_data_length.yfilter)) leaf_name_data.push_back(update_error_reset_notification_data_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update-error-reset-reason")
    {
        update_error_reset_reason = value;
        update_error_reset_reason.value_namespace = name_space;
        update_error_reset_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-reset-notification-code")
    {
        update_error_reset_notification_code = value;
        update_error_reset_notification_code.value_namespace = name_space;
        update_error_reset_notification_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-reset-notification-sub-code")
    {
        update_error_reset_notification_sub_code = value;
        update_error_reset_notification_sub_code.value_namespace = name_space;
        update_error_reset_notification_sub_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-reset-notification-data")
    {
        update_error_reset_notification_data = value;
        update_error_reset_notification_data.value_namespace = name_space;
        update_error_reset_notification_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-reset-notification-data-length")
    {
        update_error_reset_notification_data_length = value;
        update_error_reset_notification_data_length.value_namespace = name_space;
        update_error_reset_notification_data_length.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update-error-reset-reason")
    {
        update_error_reset_reason.yfilter = yfilter;
    }
    if(value_path == "update-error-reset-notification-code")
    {
        update_error_reset_notification_code.yfilter = yfilter;
    }
    if(value_path == "update-error-reset-notification-sub-code")
    {
        update_error_reset_notification_sub_code.yfilter = yfilter;
    }
    if(value_path == "update-error-reset-notification-data")
    {
        update_error_reset_notification_data.yfilter = yfilter;
    }
    if(value_path == "update-error-reset-notification-data-length")
    {
        update_error_reset_notification_data_length.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageResetData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-error-reset-reason" || name == "update-error-reset-notification-code" || name == "update-error-reset-notification-sub-code" || name == "update-error-reset-notification-data" || name == "update-error-reset-notification-data-length")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::UpdateMessageData()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "update-message-data"; yang_parent_name = "update-error-message"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::~UpdateMessageData()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-message-data";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateMessageData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::UpdateErrorElement()
    :
    update_attribute_flags{YType::uint8, "update-attribute-flags"},
    update_attribute_code{YType::uint8, "update-attribute-code"},
    update_attribute_length{YType::uint16, "update-attribute-length"},
    update_error_data{YType::str, "update-error-data"},
    update_error_data_length{YType::uint16, "update-error-data-length"},
    update_error_action{YType::enumeration, "update-error-action"}
{

    yang_name = "update-error-element"; yang_parent_name = "update-error-message"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::~UpdateErrorElement()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::has_data() const
{
    if (is_presence_container) return true;
    return update_attribute_flags.is_set
	|| update_attribute_code.is_set
	|| update_attribute_length.is_set
	|| update_error_data.is_set
	|| update_error_data_length.is_set
	|| update_error_action.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(update_attribute_flags.yfilter)
	|| ydk::is_set(update_attribute_code.yfilter)
	|| ydk::is_set(update_attribute_length.yfilter)
	|| ydk::is_set(update_error_data.yfilter)
	|| ydk::is_set(update_error_data_length.yfilter)
	|| ydk::is_set(update_error_action.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-error-element";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_attribute_flags.is_set || is_set(update_attribute_flags.yfilter)) leaf_name_data.push_back(update_attribute_flags.get_name_leafdata());
    if (update_attribute_code.is_set || is_set(update_attribute_code.yfilter)) leaf_name_data.push_back(update_attribute_code.get_name_leafdata());
    if (update_attribute_length.is_set || is_set(update_attribute_length.yfilter)) leaf_name_data.push_back(update_attribute_length.get_name_leafdata());
    if (update_error_data.is_set || is_set(update_error_data.yfilter)) leaf_name_data.push_back(update_error_data.get_name_leafdata());
    if (update_error_data_length.is_set || is_set(update_error_data_length.yfilter)) leaf_name_data.push_back(update_error_data_length.get_name_leafdata());
    if (update_error_action.is_set || is_set(update_error_action.yfilter)) leaf_name_data.push_back(update_error_action.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update-attribute-flags")
    {
        update_attribute_flags = value;
        update_attribute_flags.value_namespace = name_space;
        update_attribute_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-attribute-code")
    {
        update_attribute_code = value;
        update_attribute_code.value_namespace = name_space;
        update_attribute_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-attribute-length")
    {
        update_attribute_length = value;
        update_attribute_length.value_namespace = name_space;
        update_attribute_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-data")
    {
        update_error_data = value;
        update_error_data.value_namespace = name_space;
        update_error_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-data-length")
    {
        update_error_data_length = value;
        update_error_data_length.value_namespace = name_space;
        update_error_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-error-action")
    {
        update_error_action = value;
        update_error_action.value_namespace = name_space;
        update_error_action.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update-attribute-flags")
    {
        update_attribute_flags.yfilter = yfilter;
    }
    if(value_path == "update-attribute-code")
    {
        update_attribute_code.yfilter = yfilter;
    }
    if(value_path == "update-attribute-length")
    {
        update_attribute_length.yfilter = yfilter;
    }
    if(value_path == "update-error-data")
    {
        update_error_data.yfilter = yfilter;
    }
    if(value_path == "update-error-data-length")
    {
        update_error_data_length.yfilter = yfilter;
    }
    if(value_path == "update-error-action")
    {
        update_error_action.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage::UpdateErrorElement::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-attribute-flags" || name == "update-attribute-code" || name == "update-attribute-length" || name == "update-error-data" || name == "update-error-data-length" || name == "update-error-action")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbors()
    :
    update_inbound_filter_neighbor(this, {"neighbor_address"})
{

    yang_name = "update-inbound-filter-neighbors"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::~UpdateInboundFilterNeighbors()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<update_inbound_filter_neighbor.len(); index++)
    {
        if(update_inbound_filter_neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::has_operation() const
{
    for (std::size_t index=0; index<update_inbound_filter_neighbor.len(); index++)
    {
        if(update_inbound_filter_neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-inbound-filter-neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "update-inbound-filter-neighbor")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor>();
        ent_->parent = this;
        update_inbound_filter_neighbor.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : update_inbound_filter_neighbor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-inbound-filter-neighbor")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateInboundFilterNeighbor()
    :
    neighbor_address{YType::str, "neighbor-address"},
    update_vrf_name{YType::str, "update-vrf-name"},
    update_filter_logging_enabled{YType::boolean, "update-filter-logging-enabled"},
    configured_update_filter_message_buffer_count{YType::uint32, "configured-update-filter-message-buffer-count"},
    operational_update_filter_message_buffer_count{YType::uint32, "operational-update-filter-message-buffer-count"},
    update_filter_message_buffer_circular{YType::boolean, "update-filter-message-buffer-circular"},
    update_attribute_filter_group_name{YType::str, "update-attribute-filter-group-name"},
    operational_update_attribute_filtering_enabled{YType::boolean, "operational-update-attribute-filtering-enabled"},
    message_update_attribute_filtering_enabled{YType::boolean, "message-update-attribute-filtering-enabled"},
    total_filter_update_message_count{YType::uint32, "total-filter-update-message-count"},
    establishment_total_filter_update_message_count{YType::uint32, "establishment-total-filter-update-message-count"},
    update_filtered_message_count{YType::uint32, "update-filtered-message-count"},
    establishment_update_filtered_message_count{YType::uint32, "establishment-update-filtered-message-count"},
    last_update_filtered_age{YType::uint32, "last-update-filtered-age"},
    update_filter_message_list_count{YType::uint32, "update-filter-message-list-count"}
        ,
    update_neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress>())
    , first_update_filtered_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp>())
    , last_update_filtered_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp>())
    , update_attribute_filter_attributes(this, {})
    , update_filter_message(this, {})
{
    update_neighbor_address->parent = this;
    first_update_filtered_timestamp->parent = this;
    last_update_filtered_timestamp->parent = this;

    yang_name = "update-inbound-filter-neighbor"; yang_parent_name = "update-inbound-filter-neighbors"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::~UpdateInboundFilterNeighbor()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<update_attribute_filter_attributes.len(); index++)
    {
        if(update_attribute_filter_attributes[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<update_filter_message.len(); index++)
    {
        if(update_filter_message[index]->has_data())
            return true;
    }
    return neighbor_address.is_set
	|| update_vrf_name.is_set
	|| update_filter_logging_enabled.is_set
	|| configured_update_filter_message_buffer_count.is_set
	|| operational_update_filter_message_buffer_count.is_set
	|| update_filter_message_buffer_circular.is_set
	|| update_attribute_filter_group_name.is_set
	|| operational_update_attribute_filtering_enabled.is_set
	|| message_update_attribute_filtering_enabled.is_set
	|| total_filter_update_message_count.is_set
	|| establishment_total_filter_update_message_count.is_set
	|| update_filtered_message_count.is_set
	|| establishment_update_filtered_message_count.is_set
	|| last_update_filtered_age.is_set
	|| update_filter_message_list_count.is_set
	|| (update_neighbor_address !=  nullptr && update_neighbor_address->has_data())
	|| (first_update_filtered_timestamp !=  nullptr && first_update_filtered_timestamp->has_data())
	|| (last_update_filtered_timestamp !=  nullptr && last_update_filtered_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::has_operation() const
{
    for (std::size_t index=0; index<update_attribute_filter_attributes.len(); index++)
    {
        if(update_attribute_filter_attributes[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<update_filter_message.len(); index++)
    {
        if(update_filter_message[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(neighbor_address.yfilter)
	|| ydk::is_set(update_vrf_name.yfilter)
	|| ydk::is_set(update_filter_logging_enabled.yfilter)
	|| ydk::is_set(configured_update_filter_message_buffer_count.yfilter)
	|| ydk::is_set(operational_update_filter_message_buffer_count.yfilter)
	|| ydk::is_set(update_filter_message_buffer_circular.yfilter)
	|| ydk::is_set(update_attribute_filter_group_name.yfilter)
	|| ydk::is_set(operational_update_attribute_filtering_enabled.yfilter)
	|| ydk::is_set(message_update_attribute_filtering_enabled.yfilter)
	|| ydk::is_set(total_filter_update_message_count.yfilter)
	|| ydk::is_set(establishment_total_filter_update_message_count.yfilter)
	|| ydk::is_set(update_filtered_message_count.yfilter)
	|| ydk::is_set(establishment_update_filtered_message_count.yfilter)
	|| ydk::is_set(last_update_filtered_age.yfilter)
	|| ydk::is_set(update_filter_message_list_count.yfilter)
	|| (update_neighbor_address !=  nullptr && update_neighbor_address->has_operation())
	|| (first_update_filtered_timestamp !=  nullptr && first_update_filtered_timestamp->has_operation())
	|| (last_update_filtered_timestamp !=  nullptr && last_update_filtered_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-inbound-filter-neighbor";
    ADD_KEY_TOKEN(neighbor_address, "neighbor-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.yfilter)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (update_vrf_name.is_set || is_set(update_vrf_name.yfilter)) leaf_name_data.push_back(update_vrf_name.get_name_leafdata());
    if (update_filter_logging_enabled.is_set || is_set(update_filter_logging_enabled.yfilter)) leaf_name_data.push_back(update_filter_logging_enabled.get_name_leafdata());
    if (configured_update_filter_message_buffer_count.is_set || is_set(configured_update_filter_message_buffer_count.yfilter)) leaf_name_data.push_back(configured_update_filter_message_buffer_count.get_name_leafdata());
    if (operational_update_filter_message_buffer_count.is_set || is_set(operational_update_filter_message_buffer_count.yfilter)) leaf_name_data.push_back(operational_update_filter_message_buffer_count.get_name_leafdata());
    if (update_filter_message_buffer_circular.is_set || is_set(update_filter_message_buffer_circular.yfilter)) leaf_name_data.push_back(update_filter_message_buffer_circular.get_name_leafdata());
    if (update_attribute_filter_group_name.is_set || is_set(update_attribute_filter_group_name.yfilter)) leaf_name_data.push_back(update_attribute_filter_group_name.get_name_leafdata());
    if (operational_update_attribute_filtering_enabled.is_set || is_set(operational_update_attribute_filtering_enabled.yfilter)) leaf_name_data.push_back(operational_update_attribute_filtering_enabled.get_name_leafdata());
    if (message_update_attribute_filtering_enabled.is_set || is_set(message_update_attribute_filtering_enabled.yfilter)) leaf_name_data.push_back(message_update_attribute_filtering_enabled.get_name_leafdata());
    if (total_filter_update_message_count.is_set || is_set(total_filter_update_message_count.yfilter)) leaf_name_data.push_back(total_filter_update_message_count.get_name_leafdata());
    if (establishment_total_filter_update_message_count.is_set || is_set(establishment_total_filter_update_message_count.yfilter)) leaf_name_data.push_back(establishment_total_filter_update_message_count.get_name_leafdata());
    if (update_filtered_message_count.is_set || is_set(update_filtered_message_count.yfilter)) leaf_name_data.push_back(update_filtered_message_count.get_name_leafdata());
    if (establishment_update_filtered_message_count.is_set || is_set(establishment_update_filtered_message_count.yfilter)) leaf_name_data.push_back(establishment_update_filtered_message_count.get_name_leafdata());
    if (last_update_filtered_age.is_set || is_set(last_update_filtered_age.yfilter)) leaf_name_data.push_back(last_update_filtered_age.get_name_leafdata());
    if (update_filter_message_list_count.is_set || is_set(update_filter_message_list_count.yfilter)) leaf_name_data.push_back(update_filter_message_list_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "update-neighbor-address")
    {
        if(update_neighbor_address == nullptr)
        {
            update_neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress>();
        }
        return update_neighbor_address;
    }

    if(child_yang_name == "first-update-filtered-timestamp")
    {
        if(first_update_filtered_timestamp == nullptr)
        {
            first_update_filtered_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp>();
        }
        return first_update_filtered_timestamp;
    }

    if(child_yang_name == "last-update-filtered-timestamp")
    {
        if(last_update_filtered_timestamp == nullptr)
        {
            last_update_filtered_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp>();
        }
        return last_update_filtered_timestamp;
    }

    if(child_yang_name == "update-attribute-filter-attributes")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes>();
        ent_->parent = this;
        update_attribute_filter_attributes.append(ent_);
        return ent_;
    }

    if(child_yang_name == "update-filter-message")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage>();
        ent_->parent = this;
        update_filter_message.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(update_neighbor_address != nullptr)
    {
        _children["update-neighbor-address"] = update_neighbor_address;
    }

    if(first_update_filtered_timestamp != nullptr)
    {
        _children["first-update-filtered-timestamp"] = first_update_filtered_timestamp;
    }

    if(last_update_filtered_timestamp != nullptr)
    {
        _children["last-update-filtered-timestamp"] = last_update_filtered_timestamp;
    }

    count_ = 0;
    for (auto ent_ : update_attribute_filter_attributes.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : update_filter_message.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
        neighbor_address.value_namespace = name_space;
        neighbor_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-vrf-name")
    {
        update_vrf_name = value;
        update_vrf_name.value_namespace = name_space;
        update_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-filter-logging-enabled")
    {
        update_filter_logging_enabled = value;
        update_filter_logging_enabled.value_namespace = name_space;
        update_filter_logging_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-update-filter-message-buffer-count")
    {
        configured_update_filter_message_buffer_count = value;
        configured_update_filter_message_buffer_count.value_namespace = name_space;
        configured_update_filter_message_buffer_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational-update-filter-message-buffer-count")
    {
        operational_update_filter_message_buffer_count = value;
        operational_update_filter_message_buffer_count.value_namespace = name_space;
        operational_update_filter_message_buffer_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-filter-message-buffer-circular")
    {
        update_filter_message_buffer_circular = value;
        update_filter_message_buffer_circular.value_namespace = name_space;
        update_filter_message_buffer_circular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-attribute-filter-group-name")
    {
        update_attribute_filter_group_name = value;
        update_attribute_filter_group_name.value_namespace = name_space;
        update_attribute_filter_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational-update-attribute-filtering-enabled")
    {
        operational_update_attribute_filtering_enabled = value;
        operational_update_attribute_filtering_enabled.value_namespace = name_space;
        operational_update_attribute_filtering_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "message-update-attribute-filtering-enabled")
    {
        message_update_attribute_filtering_enabled = value;
        message_update_attribute_filtering_enabled.value_namespace = name_space;
        message_update_attribute_filtering_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-filter-update-message-count")
    {
        total_filter_update_message_count = value;
        total_filter_update_message_count.value_namespace = name_space;
        total_filter_update_message_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "establishment-total-filter-update-message-count")
    {
        establishment_total_filter_update_message_count = value;
        establishment_total_filter_update_message_count.value_namespace = name_space;
        establishment_total_filter_update_message_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-filtered-message-count")
    {
        update_filtered_message_count = value;
        update_filtered_message_count.value_namespace = name_space;
        update_filtered_message_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "establishment-update-filtered-message-count")
    {
        establishment_update_filtered_message_count = value;
        establishment_update_filtered_message_count.value_namespace = name_space;
        establishment_update_filtered_message_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-filtered-age")
    {
        last_update_filtered_age = value;
        last_update_filtered_age.value_namespace = name_space;
        last_update_filtered_age.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-filter-message-list-count")
    {
        update_filter_message_list_count = value;
        update_filter_message_list_count.value_namespace = name_space;
        update_filter_message_list_count.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address.yfilter = yfilter;
    }
    if(value_path == "update-vrf-name")
    {
        update_vrf_name.yfilter = yfilter;
    }
    if(value_path == "update-filter-logging-enabled")
    {
        update_filter_logging_enabled.yfilter = yfilter;
    }
    if(value_path == "configured-update-filter-message-buffer-count")
    {
        configured_update_filter_message_buffer_count.yfilter = yfilter;
    }
    if(value_path == "operational-update-filter-message-buffer-count")
    {
        operational_update_filter_message_buffer_count.yfilter = yfilter;
    }
    if(value_path == "update-filter-message-buffer-circular")
    {
        update_filter_message_buffer_circular.yfilter = yfilter;
    }
    if(value_path == "update-attribute-filter-group-name")
    {
        update_attribute_filter_group_name.yfilter = yfilter;
    }
    if(value_path == "operational-update-attribute-filtering-enabled")
    {
        operational_update_attribute_filtering_enabled.yfilter = yfilter;
    }
    if(value_path == "message-update-attribute-filtering-enabled")
    {
        message_update_attribute_filtering_enabled.yfilter = yfilter;
    }
    if(value_path == "total-filter-update-message-count")
    {
        total_filter_update_message_count.yfilter = yfilter;
    }
    if(value_path == "establishment-total-filter-update-message-count")
    {
        establishment_total_filter_update_message_count.yfilter = yfilter;
    }
    if(value_path == "update-filtered-message-count")
    {
        update_filtered_message_count.yfilter = yfilter;
    }
    if(value_path == "establishment-update-filtered-message-count")
    {
        establishment_update_filtered_message_count.yfilter = yfilter;
    }
    if(value_path == "last-update-filtered-age")
    {
        last_update_filtered_age.yfilter = yfilter;
    }
    if(value_path == "update-filter-message-list-count")
    {
        update_filter_message_list_count.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-neighbor-address" || name == "first-update-filtered-timestamp" || name == "last-update-filtered-timestamp" || name == "update-attribute-filter-attributes" || name == "update-filter-message" || name == "neighbor-address" || name == "update-vrf-name" || name == "update-filter-logging-enabled" || name == "configured-update-filter-message-buffer-count" || name == "operational-update-filter-message-buffer-count" || name == "update-filter-message-buffer-circular" || name == "update-attribute-filter-group-name" || name == "operational-update-attribute-filtering-enabled" || name == "message-update-attribute-filtering-enabled" || name == "total-filter-update-message-count" || name == "establishment-total-filter-update-message-count" || name == "update-filtered-message-count" || name == "establishment-update-filtered-message-count" || name == "last-update-filtered-age" || name == "update-filter-message-list-count")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::UpdateNeighborAddress()
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
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2vpnVplsAddress>())
    , l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2vpnMspwAddress>())
    , ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress>())
    , ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "update-neighbor-address"; yang_parent_name = "update-inbound-filter-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::~UpdateNeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-neighbor-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2vpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2vpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::get_children() const
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2vpnVplsAddress::L2vpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "update-neighbor-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2vpnVplsAddress::~L2vpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2vpnVplsAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2vpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2vpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2vpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2vpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2vpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2vpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2vpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2vpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2vpnMspwAddress::L2vpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "update-neighbor-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2vpnMspwAddress::~L2vpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2vpnMspwAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2vpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2vpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2vpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2vpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2vpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2vpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2vpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::L2vpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "update-neighbor-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "update-neighbor-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::FirstUpdateFilteredTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "first-update-filtered-timestamp"; yang_parent_name = "update-inbound-filter-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::~FirstUpdateFilteredTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-update-filtered-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::FirstUpdateFilteredTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::LastUpdateFilteredTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-update-filtered-timestamp"; yang_parent_name = "update-inbound-filter-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::~LastUpdateFilteredTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-filtered-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::LastUpdateFilteredTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::UpdateAttributeFilterAttributes()
    :
    update_internal_attribute_code{YType::uint32, "update-internal-attribute-code"},
    update_filter_action{YType::enumeration, "update-filter-action"},
    update_filter_match_count{YType::uint32, "update-filter-match-count"},
    establishment_update_filter_match_count{YType::uint32, "establishment-update-filter-match-count"},
    last_update_filter_match_age{YType::uint32, "last-update-filter-match-age"}
        ,
    last_update_filter_match_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp>())
{
    last_update_filter_match_timestamp->parent = this;

    yang_name = "update-attribute-filter-attributes"; yang_parent_name = "update-inbound-filter-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::~UpdateAttributeFilterAttributes()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::has_data() const
{
    if (is_presence_container) return true;
    return update_internal_attribute_code.is_set
	|| update_filter_action.is_set
	|| update_filter_match_count.is_set
	|| establishment_update_filter_match_count.is_set
	|| last_update_filter_match_age.is_set
	|| (last_update_filter_match_timestamp !=  nullptr && last_update_filter_match_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(update_internal_attribute_code.yfilter)
	|| ydk::is_set(update_filter_action.yfilter)
	|| ydk::is_set(update_filter_match_count.yfilter)
	|| ydk::is_set(establishment_update_filter_match_count.yfilter)
	|| ydk::is_set(last_update_filter_match_age.yfilter)
	|| (last_update_filter_match_timestamp !=  nullptr && last_update_filter_match_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-attribute-filter-attributes";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_internal_attribute_code.is_set || is_set(update_internal_attribute_code.yfilter)) leaf_name_data.push_back(update_internal_attribute_code.get_name_leafdata());
    if (update_filter_action.is_set || is_set(update_filter_action.yfilter)) leaf_name_data.push_back(update_filter_action.get_name_leafdata());
    if (update_filter_match_count.is_set || is_set(update_filter_match_count.yfilter)) leaf_name_data.push_back(update_filter_match_count.get_name_leafdata());
    if (establishment_update_filter_match_count.is_set || is_set(establishment_update_filter_match_count.yfilter)) leaf_name_data.push_back(establishment_update_filter_match_count.get_name_leafdata());
    if (last_update_filter_match_age.is_set || is_set(last_update_filter_match_age.yfilter)) leaf_name_data.push_back(last_update_filter_match_age.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "last-update-filter-match-timestamp")
    {
        if(last_update_filter_match_timestamp == nullptr)
        {
            last_update_filter_match_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp>();
        }
        return last_update_filter_match_timestamp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(last_update_filter_match_timestamp != nullptr)
    {
        _children["last-update-filter-match-timestamp"] = last_update_filter_match_timestamp;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update-internal-attribute-code")
    {
        update_internal_attribute_code = value;
        update_internal_attribute_code.value_namespace = name_space;
        update_internal_attribute_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-filter-action")
    {
        update_filter_action = value;
        update_filter_action.value_namespace = name_space;
        update_filter_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-filter-match-count")
    {
        update_filter_match_count = value;
        update_filter_match_count.value_namespace = name_space;
        update_filter_match_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "establishment-update-filter-match-count")
    {
        establishment_update_filter_match_count = value;
        establishment_update_filter_match_count.value_namespace = name_space;
        establishment_update_filter_match_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-filter-match-age")
    {
        last_update_filter_match_age = value;
        last_update_filter_match_age.value_namespace = name_space;
        last_update_filter_match_age.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update-internal-attribute-code")
    {
        update_internal_attribute_code.yfilter = yfilter;
    }
    if(value_path == "update-filter-action")
    {
        update_filter_action.yfilter = yfilter;
    }
    if(value_path == "update-filter-match-count")
    {
        update_filter_match_count.yfilter = yfilter;
    }
    if(value_path == "establishment-update-filter-match-count")
    {
        establishment_update_filter_match_count.yfilter = yfilter;
    }
    if(value_path == "last-update-filter-match-age")
    {
        last_update_filter_match_age.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-update-filter-match-timestamp" || name == "update-internal-attribute-code" || name == "update-filter-action" || name == "update-filter-match-count" || name == "establishment-update-filter-match-count" || name == "last-update-filter-match-age")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::LastUpdateFilterMatchTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "last-update-filter-match-timestamp"; yang_parent_name = "update-attribute-filter-attributes"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::~LastUpdateFilterMatchTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-filter-match-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateAttributeFilterAttributes::LastUpdateFilterMatchTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessage()
    :
    update_filtered_attribute_count{YType::uint32, "update-filtered-attribute-count"},
    update_filter_final_action{YType::enumeration, "update-filter-final-action"},
    update_filter_nlri_address_family{YType::enumeration, "update-filter-nlri-address-family"},
    update_filter_nlri_string{YType::str, "update-filter-nlri-string"},
    update_filter_nlri_string_truncated{YType::boolean, "update-filter-nlri-string-truncated"}
        ,
    update_filter_message_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp>())
    , update_filter_message_data(this, {})
    , update_filter_element(this, {})
{
    update_filter_message_timestamp->parent = this;

    yang_name = "update-filter-message"; yang_parent_name = "update-inbound-filter-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::~UpdateFilterMessage()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<update_filter_message_data.len(); index++)
    {
        if(update_filter_message_data[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<update_filter_element.len(); index++)
    {
        if(update_filter_element[index]->has_data())
            return true;
    }
    return update_filtered_attribute_count.is_set
	|| update_filter_final_action.is_set
	|| update_filter_nlri_address_family.is_set
	|| update_filter_nlri_string.is_set
	|| update_filter_nlri_string_truncated.is_set
	|| (update_filter_message_timestamp !=  nullptr && update_filter_message_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::has_operation() const
{
    for (std::size_t index=0; index<update_filter_message_data.len(); index++)
    {
        if(update_filter_message_data[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<update_filter_element.len(); index++)
    {
        if(update_filter_element[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(update_filtered_attribute_count.yfilter)
	|| ydk::is_set(update_filter_final_action.yfilter)
	|| ydk::is_set(update_filter_nlri_address_family.yfilter)
	|| ydk::is_set(update_filter_nlri_string.yfilter)
	|| ydk::is_set(update_filter_nlri_string_truncated.yfilter)
	|| (update_filter_message_timestamp !=  nullptr && update_filter_message_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-filter-message";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_filtered_attribute_count.is_set || is_set(update_filtered_attribute_count.yfilter)) leaf_name_data.push_back(update_filtered_attribute_count.get_name_leafdata());
    if (update_filter_final_action.is_set || is_set(update_filter_final_action.yfilter)) leaf_name_data.push_back(update_filter_final_action.get_name_leafdata());
    if (update_filter_nlri_address_family.is_set || is_set(update_filter_nlri_address_family.yfilter)) leaf_name_data.push_back(update_filter_nlri_address_family.get_name_leafdata());
    if (update_filter_nlri_string.is_set || is_set(update_filter_nlri_string.yfilter)) leaf_name_data.push_back(update_filter_nlri_string.get_name_leafdata());
    if (update_filter_nlri_string_truncated.is_set || is_set(update_filter_nlri_string_truncated.yfilter)) leaf_name_data.push_back(update_filter_nlri_string_truncated.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "update-filter-message-timestamp")
    {
        if(update_filter_message_timestamp == nullptr)
        {
            update_filter_message_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp>();
        }
        return update_filter_message_timestamp;
    }

    if(child_yang_name == "update-filter-message-data")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData>();
        ent_->parent = this;
        update_filter_message_data.append(ent_);
        return ent_;
    }

    if(child_yang_name == "update-filter-element")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement>();
        ent_->parent = this;
        update_filter_element.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(update_filter_message_timestamp != nullptr)
    {
        _children["update-filter-message-timestamp"] = update_filter_message_timestamp;
    }

    count_ = 0;
    for (auto ent_ : update_filter_message_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : update_filter_element.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update-filtered-attribute-count")
    {
        update_filtered_attribute_count = value;
        update_filtered_attribute_count.value_namespace = name_space;
        update_filtered_attribute_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-filter-final-action")
    {
        update_filter_final_action = value;
        update_filter_final_action.value_namespace = name_space;
        update_filter_final_action.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-filter-nlri-address-family")
    {
        update_filter_nlri_address_family = value;
        update_filter_nlri_address_family.value_namespace = name_space;
        update_filter_nlri_address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-filter-nlri-string")
    {
        update_filter_nlri_string = value;
        update_filter_nlri_string.value_namespace = name_space;
        update_filter_nlri_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-filter-nlri-string-truncated")
    {
        update_filter_nlri_string_truncated = value;
        update_filter_nlri_string_truncated.value_namespace = name_space;
        update_filter_nlri_string_truncated.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update-filtered-attribute-count")
    {
        update_filtered_attribute_count.yfilter = yfilter;
    }
    if(value_path == "update-filter-final-action")
    {
        update_filter_final_action.yfilter = yfilter;
    }
    if(value_path == "update-filter-nlri-address-family")
    {
        update_filter_nlri_address_family.yfilter = yfilter;
    }
    if(value_path == "update-filter-nlri-string")
    {
        update_filter_nlri_string.yfilter = yfilter;
    }
    if(value_path == "update-filter-nlri-string-truncated")
    {
        update_filter_nlri_string_truncated.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-filter-message-timestamp" || name == "update-filter-message-data" || name == "update-filter-element" || name == "update-filtered-attribute-count" || name == "update-filter-final-action" || name == "update-filter-nlri-address-family" || name == "update-filter-nlri-string" || name == "update-filter-nlri-string-truncated")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::UpdateFilterMessageTimestamp()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "update-filter-message-timestamp"; yang_parent_name = "update-filter-message"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::~UpdateFilterMessageTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-filter-message-timestamp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageTimestamp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::UpdateFilterMessageData()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "update-filter-message-data"; yang_parent_name = "update-filter-message"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::~UpdateFilterMessageData()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-filter-message-data";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterMessageData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::UpdateFilterElement()
    :
    update_attribute_flags{YType::uint8, "update-attribute-flags"},
    update_attribute_code{YType::uint8, "update-attribute-code"},
    update_filter_action{YType::enumeration, "update-filter-action"}
{

    yang_name = "update-filter-element"; yang_parent_name = "update-filter-message"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::~UpdateFilterElement()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::has_data() const
{
    if (is_presence_container) return true;
    return update_attribute_flags.is_set
	|| update_attribute_code.is_set
	|| update_filter_action.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(update_attribute_flags.yfilter)
	|| ydk::is_set(update_attribute_code.yfilter)
	|| ydk::is_set(update_filter_action.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-filter-element";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update_attribute_flags.is_set || is_set(update_attribute_flags.yfilter)) leaf_name_data.push_back(update_attribute_flags.get_name_leafdata());
    if (update_attribute_code.is_set || is_set(update_attribute_code.yfilter)) leaf_name_data.push_back(update_attribute_code.get_name_leafdata());
    if (update_filter_action.is_set || is_set(update_filter_action.yfilter)) leaf_name_data.push_back(update_filter_action.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update-attribute-flags")
    {
        update_attribute_flags = value;
        update_attribute_flags.value_namespace = name_space;
        update_attribute_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-attribute-code")
    {
        update_attribute_code = value;
        update_attribute_code.value_namespace = name_space;
        update_attribute_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-filter-action")
    {
        update_filter_action = value;
        update_filter_action.value_namespace = name_space;
        update_filter_action.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update-attribute-flags")
    {
        update_attribute_flags.yfilter = yfilter;
    }
    if(value_path == "update-attribute-code")
    {
        update_attribute_code.yfilter = yfilter;
    }
    if(value_path == "update-filter-action")
    {
        update_filter_action.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::UpdateInboundFilterNeighbors::UpdateInboundFilterNeighbor::UpdateFilterMessage::UpdateFilterElement::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update-attribute-flags" || name == "update-attribute-code" || name == "update-filter-action")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::Bmp()
    :
    server_summaries(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries>())
    , server_neighbors(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors>())
{
    server_summaries->parent = this;
    server_neighbors->parent = this;

    yang_name = "bmp"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::~Bmp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::has_data() const
{
    if (is_presence_container) return true;
    return (server_summaries !=  nullptr && server_summaries->has_data())
	|| (server_neighbors !=  nullptr && server_neighbors->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::has_operation() const
{
    return is_set(yfilter)
	|| (server_summaries !=  nullptr && server_summaries->has_operation())
	|| (server_neighbors !=  nullptr && server_neighbors->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server-summaries")
    {
        if(server_summaries == nullptr)
        {
            server_summaries = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries>();
        }
        return server_summaries;
    }

    if(child_yang_name == "server-neighbors")
    {
        if(server_neighbors == nullptr)
        {
            server_neighbors = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerNeighbors>();
        }
        return server_neighbors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(server_summaries != nullptr)
    {
        _children["server-summaries"] = server_summaries;
    }

    if(server_neighbors != nullptr)
    {
        _children["server-neighbors"] = server_neighbors;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server-summaries" || name == "server-neighbors")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummaries()
    :
    server_summary(this, {"server_id"})
{

    yang_name = "server-summaries"; yang_parent_name = "bmp"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::~ServerSummaries()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<server_summary.len(); index++)
    {
        if(server_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::has_operation() const
{
    for (std::size_t index=0; index<server_summary.len(); index++)
    {
        if(server_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server-summary")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary>();
        ent_->parent = this;
        server_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : server_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server-summary")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::ServerSummary()
    :
    server_id{YType::uint32, "server-id"},
    bmp_server_id{YType::uint8, "bmp-server-id"},
    bmp_server_host_name{YType::str, "bmp-server-host-name"},
    bmp_server_port{YType::uint32, "bmp-server-port"},
    bmp_server_state{YType::enumeration, "bmp-server-state"},
    bmp_server_is_flapping{YType::boolean, "bmp-server-is-flapping"},
    bmp_server_nbr_count{YType::uint32, "bmp-server-nbr-count"},
    bmp_init_msg_count{YType::uint32, "bmp-init-msg-count"},
    bmp_termination_msg_count{YType::uint32, "bmp-termination-msg-count"},
    bmp_status_report_count{YType::uint32, "bmp-status-report-count"},
    bmp_per_peer_msg_count{YType::uint32, "bmp-per-peer-msg-count"},
    bmp_peer_msg_drop_count{YType::uint32, "bmp-peer-msg-drop-count"},
    bmp_peer_msg_pending_count{YType::uint32, "bmp-peer-msg-pending-count"},
    tos_type{YType::uint8, "tos-type"},
    tos_value{YType::uint8, "tos-value"},
    update_source_interface_name{YType::str, "update-source-interface-name"},
    update_source_vrf_id{YType::uint32, "update-source-vrf-id"},
    bmp_vrf_name{YType::str, "bmp-vrf-name"},
    bmp_vrf_id{YType::uint32, "bmp-vrf-id"},
    bmp_update_mode{YType::enumeration, "bmp-update-mode"},
    tcp_keep_alive_interval{YType::uint32, "tcp-keep-alive-interval"},
    tcp_maximum_segment_size{YType::uint32, "tcp-maximum-segment-size"},
    tcp_write_cb_pending{YType::uint32, "tcp-write-cb-pending"},
    tcp_last_write_result{YType::uint32, "tcp-last-write-result"},
    tcp_last_write_cb_time{YType::uint64, "tcp-last-write-cb-time"},
    tcp_last_write_time{YType::uint64, "tcp-last-write-time"},
    bmpq_last_write_pulse_sent_time{YType::uint64, "bmpq-last-write-pulse-sent-time"},
    bmpq_last_all_write_pulse_sent_time{YType::uint64, "bmpq-last-all-write-pulse-sent-time"},
    bmpq_last_write_pulse_cb_time{YType::uint64, "bmpq-last-write-pulse-cb-time"},
    path_update_count{YType::uint32, "path-update-count"},
    path_withdraw_count{YType::uint32, "path-withdraw-count"},
    path_update_drop{YType::uint32, "path-update-drop"},
    path_withdraw_drop{YType::uint32, "path-withdraw-drop"},
    bmp_peer_msg_pending_count_max{YType::uint32, "bmp-peer-msg-pending-count-max"},
    bmp_peer_msg_pending_count_hwts{YType::uint64, "bmp-peer-msg-pending-count-hwts"},
    bmp_bytes_written_tcp{YType::uint64, "bmp-bytes-written-tcp"},
    tcp_write_time{YType::uint32, "tcp-write-time"},
    bmpr_mon_upd_messages{YType::uint32, "bmpr-mon-upd-messages"},
    bmpr_mon_wdraw_messages{YType::uint32, "bmpr-mon-wdraw-messages"},
    bmp_messages_wdraw_discarded{YType::uint32, "bmp-messages-wdraw-discarded"},
    bmp_pfx_wdraw_discarded{YType::uint32, "bmp-pfx-wdraw-discarded"},
    bmp_per_peer_msg_route_mon_count{YType::uint32, "bmp-per-peer-msg-route-mon-count"},
    bmpr_mon_update_gen_time{YType::uint32, "bmpr-mon-update-gen-time"},
    bmpr_mon_eo_rmessages{YType::uint32, "bmpr-mon-eo-rmessages"},
    bmp_rmon_cur_buffer_size{YType::uint64, "bmp-rmon-cur-buffer-size"},
    bmp_maximum_buffer_size_route_mon{YType::uint64, "bmp-maximum-buffer-size-route-mon"},
    bmp_server_up_count{YType::uint32, "bmp-server-up-count"},
    bmp_upd_gen_in_progress{YType::boolean, "bmp-upd-gen-in-progress"},
    bmp_reset_walk_in_progress{YType::boolean, "bmp-reset-walk-in-progress"}
        ,
    bmp_server_state_age(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge>())
    , bmp_server_state_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec>())
    , bmp_server_last_discon_time(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime>())
    , update_source_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress>())
    , bmpafi_info(this, {})
{
    bmp_server_state_age->parent = this;
    bmp_server_state_time_spec->parent = this;
    bmp_server_last_discon_time->parent = this;
    update_source_address->parent = this;

    yang_name = "server-summary"; yang_parent_name = "server-summaries"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::~ServerSummary()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bmpafi_info.len(); index++)
    {
        if(bmpafi_info[index]->has_data())
            return true;
    }
    return server_id.is_set
	|| bmp_server_id.is_set
	|| bmp_server_host_name.is_set
	|| bmp_server_port.is_set
	|| bmp_server_state.is_set
	|| bmp_server_is_flapping.is_set
	|| bmp_server_nbr_count.is_set
	|| bmp_init_msg_count.is_set
	|| bmp_termination_msg_count.is_set
	|| bmp_status_report_count.is_set
	|| bmp_per_peer_msg_count.is_set
	|| bmp_peer_msg_drop_count.is_set
	|| bmp_peer_msg_pending_count.is_set
	|| tos_type.is_set
	|| tos_value.is_set
	|| update_source_interface_name.is_set
	|| update_source_vrf_id.is_set
	|| bmp_vrf_name.is_set
	|| bmp_vrf_id.is_set
	|| bmp_update_mode.is_set
	|| tcp_keep_alive_interval.is_set
	|| tcp_maximum_segment_size.is_set
	|| tcp_write_cb_pending.is_set
	|| tcp_last_write_result.is_set
	|| tcp_last_write_cb_time.is_set
	|| tcp_last_write_time.is_set
	|| bmpq_last_write_pulse_sent_time.is_set
	|| bmpq_last_all_write_pulse_sent_time.is_set
	|| bmpq_last_write_pulse_cb_time.is_set
	|| path_update_count.is_set
	|| path_withdraw_count.is_set
	|| path_update_drop.is_set
	|| path_withdraw_drop.is_set
	|| bmp_peer_msg_pending_count_max.is_set
	|| bmp_peer_msg_pending_count_hwts.is_set
	|| bmp_bytes_written_tcp.is_set
	|| tcp_write_time.is_set
	|| bmpr_mon_upd_messages.is_set
	|| bmpr_mon_wdraw_messages.is_set
	|| bmp_messages_wdraw_discarded.is_set
	|| bmp_pfx_wdraw_discarded.is_set
	|| bmp_per_peer_msg_route_mon_count.is_set
	|| bmpr_mon_update_gen_time.is_set
	|| bmpr_mon_eo_rmessages.is_set
	|| bmp_rmon_cur_buffer_size.is_set
	|| bmp_maximum_buffer_size_route_mon.is_set
	|| bmp_server_up_count.is_set
	|| bmp_upd_gen_in_progress.is_set
	|| bmp_reset_walk_in_progress.is_set
	|| (bmp_server_state_age !=  nullptr && bmp_server_state_age->has_data())
	|| (bmp_server_state_time_spec !=  nullptr && bmp_server_state_time_spec->has_data())
	|| (bmp_server_last_discon_time !=  nullptr && bmp_server_last_discon_time->has_data())
	|| (update_source_address !=  nullptr && update_source_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::has_operation() const
{
    for (std::size_t index=0; index<bmpafi_info.len(); index++)
    {
        if(bmpafi_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(server_id.yfilter)
	|| ydk::is_set(bmp_server_id.yfilter)
	|| ydk::is_set(bmp_server_host_name.yfilter)
	|| ydk::is_set(bmp_server_port.yfilter)
	|| ydk::is_set(bmp_server_state.yfilter)
	|| ydk::is_set(bmp_server_is_flapping.yfilter)
	|| ydk::is_set(bmp_server_nbr_count.yfilter)
	|| ydk::is_set(bmp_init_msg_count.yfilter)
	|| ydk::is_set(bmp_termination_msg_count.yfilter)
	|| ydk::is_set(bmp_status_report_count.yfilter)
	|| ydk::is_set(bmp_per_peer_msg_count.yfilter)
	|| ydk::is_set(bmp_peer_msg_drop_count.yfilter)
	|| ydk::is_set(bmp_peer_msg_pending_count.yfilter)
	|| ydk::is_set(tos_type.yfilter)
	|| ydk::is_set(tos_value.yfilter)
	|| ydk::is_set(update_source_interface_name.yfilter)
	|| ydk::is_set(update_source_vrf_id.yfilter)
	|| ydk::is_set(bmp_vrf_name.yfilter)
	|| ydk::is_set(bmp_vrf_id.yfilter)
	|| ydk::is_set(bmp_update_mode.yfilter)
	|| ydk::is_set(tcp_keep_alive_interval.yfilter)
	|| ydk::is_set(tcp_maximum_segment_size.yfilter)
	|| ydk::is_set(tcp_write_cb_pending.yfilter)
	|| ydk::is_set(tcp_last_write_result.yfilter)
	|| ydk::is_set(tcp_last_write_cb_time.yfilter)
	|| ydk::is_set(tcp_last_write_time.yfilter)
	|| ydk::is_set(bmpq_last_write_pulse_sent_time.yfilter)
	|| ydk::is_set(bmpq_last_all_write_pulse_sent_time.yfilter)
	|| ydk::is_set(bmpq_last_write_pulse_cb_time.yfilter)
	|| ydk::is_set(path_update_count.yfilter)
	|| ydk::is_set(path_withdraw_count.yfilter)
	|| ydk::is_set(path_update_drop.yfilter)
	|| ydk::is_set(path_withdraw_drop.yfilter)
	|| ydk::is_set(bmp_peer_msg_pending_count_max.yfilter)
	|| ydk::is_set(bmp_peer_msg_pending_count_hwts.yfilter)
	|| ydk::is_set(bmp_bytes_written_tcp.yfilter)
	|| ydk::is_set(tcp_write_time.yfilter)
	|| ydk::is_set(bmpr_mon_upd_messages.yfilter)
	|| ydk::is_set(bmpr_mon_wdraw_messages.yfilter)
	|| ydk::is_set(bmp_messages_wdraw_discarded.yfilter)
	|| ydk::is_set(bmp_pfx_wdraw_discarded.yfilter)
	|| ydk::is_set(bmp_per_peer_msg_route_mon_count.yfilter)
	|| ydk::is_set(bmpr_mon_update_gen_time.yfilter)
	|| ydk::is_set(bmpr_mon_eo_rmessages.yfilter)
	|| ydk::is_set(bmp_rmon_cur_buffer_size.yfilter)
	|| ydk::is_set(bmp_maximum_buffer_size_route_mon.yfilter)
	|| ydk::is_set(bmp_server_up_count.yfilter)
	|| ydk::is_set(bmp_upd_gen_in_progress.yfilter)
	|| ydk::is_set(bmp_reset_walk_in_progress.yfilter)
	|| (bmp_server_state_age !=  nullptr && bmp_server_state_age->has_operation())
	|| (bmp_server_state_time_spec !=  nullptr && bmp_server_state_time_spec->has_operation())
	|| (bmp_server_last_discon_time !=  nullptr && bmp_server_last_discon_time->has_operation())
	|| (update_source_address !=  nullptr && update_source_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-summary";
    ADD_KEY_TOKEN(server_id, "server-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_id.is_set || is_set(server_id.yfilter)) leaf_name_data.push_back(server_id.get_name_leafdata());
    if (bmp_server_id.is_set || is_set(bmp_server_id.yfilter)) leaf_name_data.push_back(bmp_server_id.get_name_leafdata());
    if (bmp_server_host_name.is_set || is_set(bmp_server_host_name.yfilter)) leaf_name_data.push_back(bmp_server_host_name.get_name_leafdata());
    if (bmp_server_port.is_set || is_set(bmp_server_port.yfilter)) leaf_name_data.push_back(bmp_server_port.get_name_leafdata());
    if (bmp_server_state.is_set || is_set(bmp_server_state.yfilter)) leaf_name_data.push_back(bmp_server_state.get_name_leafdata());
    if (bmp_server_is_flapping.is_set || is_set(bmp_server_is_flapping.yfilter)) leaf_name_data.push_back(bmp_server_is_flapping.get_name_leafdata());
    if (bmp_server_nbr_count.is_set || is_set(bmp_server_nbr_count.yfilter)) leaf_name_data.push_back(bmp_server_nbr_count.get_name_leafdata());
    if (bmp_init_msg_count.is_set || is_set(bmp_init_msg_count.yfilter)) leaf_name_data.push_back(bmp_init_msg_count.get_name_leafdata());
    if (bmp_termination_msg_count.is_set || is_set(bmp_termination_msg_count.yfilter)) leaf_name_data.push_back(bmp_termination_msg_count.get_name_leafdata());
    if (bmp_status_report_count.is_set || is_set(bmp_status_report_count.yfilter)) leaf_name_data.push_back(bmp_status_report_count.get_name_leafdata());
    if (bmp_per_peer_msg_count.is_set || is_set(bmp_per_peer_msg_count.yfilter)) leaf_name_data.push_back(bmp_per_peer_msg_count.get_name_leafdata());
    if (bmp_peer_msg_drop_count.is_set || is_set(bmp_peer_msg_drop_count.yfilter)) leaf_name_data.push_back(bmp_peer_msg_drop_count.get_name_leafdata());
    if (bmp_peer_msg_pending_count.is_set || is_set(bmp_peer_msg_pending_count.yfilter)) leaf_name_data.push_back(bmp_peer_msg_pending_count.get_name_leafdata());
    if (tos_type.is_set || is_set(tos_type.yfilter)) leaf_name_data.push_back(tos_type.get_name_leafdata());
    if (tos_value.is_set || is_set(tos_value.yfilter)) leaf_name_data.push_back(tos_value.get_name_leafdata());
    if (update_source_interface_name.is_set || is_set(update_source_interface_name.yfilter)) leaf_name_data.push_back(update_source_interface_name.get_name_leafdata());
    if (update_source_vrf_id.is_set || is_set(update_source_vrf_id.yfilter)) leaf_name_data.push_back(update_source_vrf_id.get_name_leafdata());
    if (bmp_vrf_name.is_set || is_set(bmp_vrf_name.yfilter)) leaf_name_data.push_back(bmp_vrf_name.get_name_leafdata());
    if (bmp_vrf_id.is_set || is_set(bmp_vrf_id.yfilter)) leaf_name_data.push_back(bmp_vrf_id.get_name_leafdata());
    if (bmp_update_mode.is_set || is_set(bmp_update_mode.yfilter)) leaf_name_data.push_back(bmp_update_mode.get_name_leafdata());
    if (tcp_keep_alive_interval.is_set || is_set(tcp_keep_alive_interval.yfilter)) leaf_name_data.push_back(tcp_keep_alive_interval.get_name_leafdata());
    if (tcp_maximum_segment_size.is_set || is_set(tcp_maximum_segment_size.yfilter)) leaf_name_data.push_back(tcp_maximum_segment_size.get_name_leafdata());
    if (tcp_write_cb_pending.is_set || is_set(tcp_write_cb_pending.yfilter)) leaf_name_data.push_back(tcp_write_cb_pending.get_name_leafdata());
    if (tcp_last_write_result.is_set || is_set(tcp_last_write_result.yfilter)) leaf_name_data.push_back(tcp_last_write_result.get_name_leafdata());
    if (tcp_last_write_cb_time.is_set || is_set(tcp_last_write_cb_time.yfilter)) leaf_name_data.push_back(tcp_last_write_cb_time.get_name_leafdata());
    if (tcp_last_write_time.is_set || is_set(tcp_last_write_time.yfilter)) leaf_name_data.push_back(tcp_last_write_time.get_name_leafdata());
    if (bmpq_last_write_pulse_sent_time.is_set || is_set(bmpq_last_write_pulse_sent_time.yfilter)) leaf_name_data.push_back(bmpq_last_write_pulse_sent_time.get_name_leafdata());
    if (bmpq_last_all_write_pulse_sent_time.is_set || is_set(bmpq_last_all_write_pulse_sent_time.yfilter)) leaf_name_data.push_back(bmpq_last_all_write_pulse_sent_time.get_name_leafdata());
    if (bmpq_last_write_pulse_cb_time.is_set || is_set(bmpq_last_write_pulse_cb_time.yfilter)) leaf_name_data.push_back(bmpq_last_write_pulse_cb_time.get_name_leafdata());
    if (path_update_count.is_set || is_set(path_update_count.yfilter)) leaf_name_data.push_back(path_update_count.get_name_leafdata());
    if (path_withdraw_count.is_set || is_set(path_withdraw_count.yfilter)) leaf_name_data.push_back(path_withdraw_count.get_name_leafdata());
    if (path_update_drop.is_set || is_set(path_update_drop.yfilter)) leaf_name_data.push_back(path_update_drop.get_name_leafdata());
    if (path_withdraw_drop.is_set || is_set(path_withdraw_drop.yfilter)) leaf_name_data.push_back(path_withdraw_drop.get_name_leafdata());
    if (bmp_peer_msg_pending_count_max.is_set || is_set(bmp_peer_msg_pending_count_max.yfilter)) leaf_name_data.push_back(bmp_peer_msg_pending_count_max.get_name_leafdata());
    if (bmp_peer_msg_pending_count_hwts.is_set || is_set(bmp_peer_msg_pending_count_hwts.yfilter)) leaf_name_data.push_back(bmp_peer_msg_pending_count_hwts.get_name_leafdata());
    if (bmp_bytes_written_tcp.is_set || is_set(bmp_bytes_written_tcp.yfilter)) leaf_name_data.push_back(bmp_bytes_written_tcp.get_name_leafdata());
    if (tcp_write_time.is_set || is_set(tcp_write_time.yfilter)) leaf_name_data.push_back(tcp_write_time.get_name_leafdata());
    if (bmpr_mon_upd_messages.is_set || is_set(bmpr_mon_upd_messages.yfilter)) leaf_name_data.push_back(bmpr_mon_upd_messages.get_name_leafdata());
    if (bmpr_mon_wdraw_messages.is_set || is_set(bmpr_mon_wdraw_messages.yfilter)) leaf_name_data.push_back(bmpr_mon_wdraw_messages.get_name_leafdata());
    if (bmp_messages_wdraw_discarded.is_set || is_set(bmp_messages_wdraw_discarded.yfilter)) leaf_name_data.push_back(bmp_messages_wdraw_discarded.get_name_leafdata());
    if (bmp_pfx_wdraw_discarded.is_set || is_set(bmp_pfx_wdraw_discarded.yfilter)) leaf_name_data.push_back(bmp_pfx_wdraw_discarded.get_name_leafdata());
    if (bmp_per_peer_msg_route_mon_count.is_set || is_set(bmp_per_peer_msg_route_mon_count.yfilter)) leaf_name_data.push_back(bmp_per_peer_msg_route_mon_count.get_name_leafdata());
    if (bmpr_mon_update_gen_time.is_set || is_set(bmpr_mon_update_gen_time.yfilter)) leaf_name_data.push_back(bmpr_mon_update_gen_time.get_name_leafdata());
    if (bmpr_mon_eo_rmessages.is_set || is_set(bmpr_mon_eo_rmessages.yfilter)) leaf_name_data.push_back(bmpr_mon_eo_rmessages.get_name_leafdata());
    if (bmp_rmon_cur_buffer_size.is_set || is_set(bmp_rmon_cur_buffer_size.yfilter)) leaf_name_data.push_back(bmp_rmon_cur_buffer_size.get_name_leafdata());
    if (bmp_maximum_buffer_size_route_mon.is_set || is_set(bmp_maximum_buffer_size_route_mon.yfilter)) leaf_name_data.push_back(bmp_maximum_buffer_size_route_mon.get_name_leafdata());
    if (bmp_server_up_count.is_set || is_set(bmp_server_up_count.yfilter)) leaf_name_data.push_back(bmp_server_up_count.get_name_leafdata());
    if (bmp_upd_gen_in_progress.is_set || is_set(bmp_upd_gen_in_progress.yfilter)) leaf_name_data.push_back(bmp_upd_gen_in_progress.get_name_leafdata());
    if (bmp_reset_walk_in_progress.is_set || is_set(bmp_reset_walk_in_progress.yfilter)) leaf_name_data.push_back(bmp_reset_walk_in_progress.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bmp-server-state-age")
    {
        if(bmp_server_state_age == nullptr)
        {
            bmp_server_state_age = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge>();
        }
        return bmp_server_state_age;
    }

    if(child_yang_name == "bmp-server-state-time-spec")
    {
        if(bmp_server_state_time_spec == nullptr)
        {
            bmp_server_state_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec>();
        }
        return bmp_server_state_time_spec;
    }

    if(child_yang_name == "bmp-server-last-discon-time")
    {
        if(bmp_server_last_discon_time == nullptr)
        {
            bmp_server_last_discon_time = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime>();
        }
        return bmp_server_last_discon_time;
    }

    if(child_yang_name == "update-source-address")
    {
        if(update_source_address == nullptr)
        {
            update_source_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress>();
        }
        return update_source_address;
    }

    if(child_yang_name == "bmpafi-info")
    {
        auto ent_ = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo>();
        ent_->parent = this;
        bmpafi_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bmp_server_state_age != nullptr)
    {
        _children["bmp-server-state-age"] = bmp_server_state_age;
    }

    if(bmp_server_state_time_spec != nullptr)
    {
        _children["bmp-server-state-time-spec"] = bmp_server_state_time_spec;
    }

    if(bmp_server_last_discon_time != nullptr)
    {
        _children["bmp-server-last-discon-time"] = bmp_server_last_discon_time;
    }

    if(update_source_address != nullptr)
    {
        _children["update-source-address"] = update_source_address;
    }

    count_ = 0;
    for (auto ent_ : bmpafi_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "server-id")
    {
        server_id = value;
        server_id.value_namespace = name_space;
        server_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-server-id")
    {
        bmp_server_id = value;
        bmp_server_id.value_namespace = name_space;
        bmp_server_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-server-host-name")
    {
        bmp_server_host_name = value;
        bmp_server_host_name.value_namespace = name_space;
        bmp_server_host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-server-port")
    {
        bmp_server_port = value;
        bmp_server_port.value_namespace = name_space;
        bmp_server_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-server-state")
    {
        bmp_server_state = value;
        bmp_server_state.value_namespace = name_space;
        bmp_server_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-server-is-flapping")
    {
        bmp_server_is_flapping = value;
        bmp_server_is_flapping.value_namespace = name_space;
        bmp_server_is_flapping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-server-nbr-count")
    {
        bmp_server_nbr_count = value;
        bmp_server_nbr_count.value_namespace = name_space;
        bmp_server_nbr_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-init-msg-count")
    {
        bmp_init_msg_count = value;
        bmp_init_msg_count.value_namespace = name_space;
        bmp_init_msg_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-termination-msg-count")
    {
        bmp_termination_msg_count = value;
        bmp_termination_msg_count.value_namespace = name_space;
        bmp_termination_msg_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-status-report-count")
    {
        bmp_status_report_count = value;
        bmp_status_report_count.value_namespace = name_space;
        bmp_status_report_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-per-peer-msg-count")
    {
        bmp_per_peer_msg_count = value;
        bmp_per_peer_msg_count.value_namespace = name_space;
        bmp_per_peer_msg_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-peer-msg-drop-count")
    {
        bmp_peer_msg_drop_count = value;
        bmp_peer_msg_drop_count.value_namespace = name_space;
        bmp_peer_msg_drop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-peer-msg-pending-count")
    {
        bmp_peer_msg_pending_count = value;
        bmp_peer_msg_pending_count.value_namespace = name_space;
        bmp_peer_msg_pending_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos-type")
    {
        tos_type = value;
        tos_type.value_namespace = name_space;
        tos_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos-value")
    {
        tos_value = value;
        tos_value.value_namespace = name_space;
        tos_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-source-interface-name")
    {
        update_source_interface_name = value;
        update_source_interface_name.value_namespace = name_space;
        update_source_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-source-vrf-id")
    {
        update_source_vrf_id = value;
        update_source_vrf_id.value_namespace = name_space;
        update_source_vrf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-vrf-name")
    {
        bmp_vrf_name = value;
        bmp_vrf_name.value_namespace = name_space;
        bmp_vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-vrf-id")
    {
        bmp_vrf_id = value;
        bmp_vrf_id.value_namespace = name_space;
        bmp_vrf_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-update-mode")
    {
        bmp_update_mode = value;
        bmp_update_mode.value_namespace = name_space;
        bmp_update_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-keep-alive-interval")
    {
        tcp_keep_alive_interval = value;
        tcp_keep_alive_interval.value_namespace = name_space;
        tcp_keep_alive_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-maximum-segment-size")
    {
        tcp_maximum_segment_size = value;
        tcp_maximum_segment_size.value_namespace = name_space;
        tcp_maximum_segment_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-write-cb-pending")
    {
        tcp_write_cb_pending = value;
        tcp_write_cb_pending.value_namespace = name_space;
        tcp_write_cb_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-last-write-result")
    {
        tcp_last_write_result = value;
        tcp_last_write_result.value_namespace = name_space;
        tcp_last_write_result.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-last-write-cb-time")
    {
        tcp_last_write_cb_time = value;
        tcp_last_write_cb_time.value_namespace = name_space;
        tcp_last_write_cb_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-last-write-time")
    {
        tcp_last_write_time = value;
        tcp_last_write_time.value_namespace = name_space;
        tcp_last_write_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmpq-last-write-pulse-sent-time")
    {
        bmpq_last_write_pulse_sent_time = value;
        bmpq_last_write_pulse_sent_time.value_namespace = name_space;
        bmpq_last_write_pulse_sent_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmpq-last-all-write-pulse-sent-time")
    {
        bmpq_last_all_write_pulse_sent_time = value;
        bmpq_last_all_write_pulse_sent_time.value_namespace = name_space;
        bmpq_last_all_write_pulse_sent_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmpq-last-write-pulse-cb-time")
    {
        bmpq_last_write_pulse_cb_time = value;
        bmpq_last_write_pulse_cb_time.value_namespace = name_space;
        bmpq_last_write_pulse_cb_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-update-count")
    {
        path_update_count = value;
        path_update_count.value_namespace = name_space;
        path_update_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-withdraw-count")
    {
        path_withdraw_count = value;
        path_withdraw_count.value_namespace = name_space;
        path_withdraw_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-update-drop")
    {
        path_update_drop = value;
        path_update_drop.value_namespace = name_space;
        path_update_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-withdraw-drop")
    {
        path_withdraw_drop = value;
        path_withdraw_drop.value_namespace = name_space;
        path_withdraw_drop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-peer-msg-pending-count-max")
    {
        bmp_peer_msg_pending_count_max = value;
        bmp_peer_msg_pending_count_max.value_namespace = name_space;
        bmp_peer_msg_pending_count_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-peer-msg-pending-count-hwts")
    {
        bmp_peer_msg_pending_count_hwts = value;
        bmp_peer_msg_pending_count_hwts.value_namespace = name_space;
        bmp_peer_msg_pending_count_hwts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-bytes-written-tcp")
    {
        bmp_bytes_written_tcp = value;
        bmp_bytes_written_tcp.value_namespace = name_space;
        bmp_bytes_written_tcp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcp-write-time")
    {
        tcp_write_time = value;
        tcp_write_time.value_namespace = name_space;
        tcp_write_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmpr-mon-upd-messages")
    {
        bmpr_mon_upd_messages = value;
        bmpr_mon_upd_messages.value_namespace = name_space;
        bmpr_mon_upd_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmpr-mon-wdraw-messages")
    {
        bmpr_mon_wdraw_messages = value;
        bmpr_mon_wdraw_messages.value_namespace = name_space;
        bmpr_mon_wdraw_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-messages-wdraw-discarded")
    {
        bmp_messages_wdraw_discarded = value;
        bmp_messages_wdraw_discarded.value_namespace = name_space;
        bmp_messages_wdraw_discarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-pfx-wdraw-discarded")
    {
        bmp_pfx_wdraw_discarded = value;
        bmp_pfx_wdraw_discarded.value_namespace = name_space;
        bmp_pfx_wdraw_discarded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-per-peer-msg-route-mon-count")
    {
        bmp_per_peer_msg_route_mon_count = value;
        bmp_per_peer_msg_route_mon_count.value_namespace = name_space;
        bmp_per_peer_msg_route_mon_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmpr-mon-update-gen-time")
    {
        bmpr_mon_update_gen_time = value;
        bmpr_mon_update_gen_time.value_namespace = name_space;
        bmpr_mon_update_gen_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmpr-mon-eo-rmessages")
    {
        bmpr_mon_eo_rmessages = value;
        bmpr_mon_eo_rmessages.value_namespace = name_space;
        bmpr_mon_eo_rmessages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-rmon-cur-buffer-size")
    {
        bmp_rmon_cur_buffer_size = value;
        bmp_rmon_cur_buffer_size.value_namespace = name_space;
        bmp_rmon_cur_buffer_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-maximum-buffer-size-route-mon")
    {
        bmp_maximum_buffer_size_route_mon = value;
        bmp_maximum_buffer_size_route_mon.value_namespace = name_space;
        bmp_maximum_buffer_size_route_mon.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-server-up-count")
    {
        bmp_server_up_count = value;
        bmp_server_up_count.value_namespace = name_space;
        bmp_server_up_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-upd-gen-in-progress")
    {
        bmp_upd_gen_in_progress = value;
        bmp_upd_gen_in_progress.value_namespace = name_space;
        bmp_upd_gen_in_progress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-reset-walk-in-progress")
    {
        bmp_reset_walk_in_progress = value;
        bmp_reset_walk_in_progress.value_namespace = name_space;
        bmp_reset_walk_in_progress.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "server-id")
    {
        server_id.yfilter = yfilter;
    }
    if(value_path == "bmp-server-id")
    {
        bmp_server_id.yfilter = yfilter;
    }
    if(value_path == "bmp-server-host-name")
    {
        bmp_server_host_name.yfilter = yfilter;
    }
    if(value_path == "bmp-server-port")
    {
        bmp_server_port.yfilter = yfilter;
    }
    if(value_path == "bmp-server-state")
    {
        bmp_server_state.yfilter = yfilter;
    }
    if(value_path == "bmp-server-is-flapping")
    {
        bmp_server_is_flapping.yfilter = yfilter;
    }
    if(value_path == "bmp-server-nbr-count")
    {
        bmp_server_nbr_count.yfilter = yfilter;
    }
    if(value_path == "bmp-init-msg-count")
    {
        bmp_init_msg_count.yfilter = yfilter;
    }
    if(value_path == "bmp-termination-msg-count")
    {
        bmp_termination_msg_count.yfilter = yfilter;
    }
    if(value_path == "bmp-status-report-count")
    {
        bmp_status_report_count.yfilter = yfilter;
    }
    if(value_path == "bmp-per-peer-msg-count")
    {
        bmp_per_peer_msg_count.yfilter = yfilter;
    }
    if(value_path == "bmp-peer-msg-drop-count")
    {
        bmp_peer_msg_drop_count.yfilter = yfilter;
    }
    if(value_path == "bmp-peer-msg-pending-count")
    {
        bmp_peer_msg_pending_count.yfilter = yfilter;
    }
    if(value_path == "tos-type")
    {
        tos_type.yfilter = yfilter;
    }
    if(value_path == "tos-value")
    {
        tos_value.yfilter = yfilter;
    }
    if(value_path == "update-source-interface-name")
    {
        update_source_interface_name.yfilter = yfilter;
    }
    if(value_path == "update-source-vrf-id")
    {
        update_source_vrf_id.yfilter = yfilter;
    }
    if(value_path == "bmp-vrf-name")
    {
        bmp_vrf_name.yfilter = yfilter;
    }
    if(value_path == "bmp-vrf-id")
    {
        bmp_vrf_id.yfilter = yfilter;
    }
    if(value_path == "bmp-update-mode")
    {
        bmp_update_mode.yfilter = yfilter;
    }
    if(value_path == "tcp-keep-alive-interval")
    {
        tcp_keep_alive_interval.yfilter = yfilter;
    }
    if(value_path == "tcp-maximum-segment-size")
    {
        tcp_maximum_segment_size.yfilter = yfilter;
    }
    if(value_path == "tcp-write-cb-pending")
    {
        tcp_write_cb_pending.yfilter = yfilter;
    }
    if(value_path == "tcp-last-write-result")
    {
        tcp_last_write_result.yfilter = yfilter;
    }
    if(value_path == "tcp-last-write-cb-time")
    {
        tcp_last_write_cb_time.yfilter = yfilter;
    }
    if(value_path == "tcp-last-write-time")
    {
        tcp_last_write_time.yfilter = yfilter;
    }
    if(value_path == "bmpq-last-write-pulse-sent-time")
    {
        bmpq_last_write_pulse_sent_time.yfilter = yfilter;
    }
    if(value_path == "bmpq-last-all-write-pulse-sent-time")
    {
        bmpq_last_all_write_pulse_sent_time.yfilter = yfilter;
    }
    if(value_path == "bmpq-last-write-pulse-cb-time")
    {
        bmpq_last_write_pulse_cb_time.yfilter = yfilter;
    }
    if(value_path == "path-update-count")
    {
        path_update_count.yfilter = yfilter;
    }
    if(value_path == "path-withdraw-count")
    {
        path_withdraw_count.yfilter = yfilter;
    }
    if(value_path == "path-update-drop")
    {
        path_update_drop.yfilter = yfilter;
    }
    if(value_path == "path-withdraw-drop")
    {
        path_withdraw_drop.yfilter = yfilter;
    }
    if(value_path == "bmp-peer-msg-pending-count-max")
    {
        bmp_peer_msg_pending_count_max.yfilter = yfilter;
    }
    if(value_path == "bmp-peer-msg-pending-count-hwts")
    {
        bmp_peer_msg_pending_count_hwts.yfilter = yfilter;
    }
    if(value_path == "bmp-bytes-written-tcp")
    {
        bmp_bytes_written_tcp.yfilter = yfilter;
    }
    if(value_path == "tcp-write-time")
    {
        tcp_write_time.yfilter = yfilter;
    }
    if(value_path == "bmpr-mon-upd-messages")
    {
        bmpr_mon_upd_messages.yfilter = yfilter;
    }
    if(value_path == "bmpr-mon-wdraw-messages")
    {
        bmpr_mon_wdraw_messages.yfilter = yfilter;
    }
    if(value_path == "bmp-messages-wdraw-discarded")
    {
        bmp_messages_wdraw_discarded.yfilter = yfilter;
    }
    if(value_path == "bmp-pfx-wdraw-discarded")
    {
        bmp_pfx_wdraw_discarded.yfilter = yfilter;
    }
    if(value_path == "bmp-per-peer-msg-route-mon-count")
    {
        bmp_per_peer_msg_route_mon_count.yfilter = yfilter;
    }
    if(value_path == "bmpr-mon-update-gen-time")
    {
        bmpr_mon_update_gen_time.yfilter = yfilter;
    }
    if(value_path == "bmpr-mon-eo-rmessages")
    {
        bmpr_mon_eo_rmessages.yfilter = yfilter;
    }
    if(value_path == "bmp-rmon-cur-buffer-size")
    {
        bmp_rmon_cur_buffer_size.yfilter = yfilter;
    }
    if(value_path == "bmp-maximum-buffer-size-route-mon")
    {
        bmp_maximum_buffer_size_route_mon.yfilter = yfilter;
    }
    if(value_path == "bmp-server-up-count")
    {
        bmp_server_up_count.yfilter = yfilter;
    }
    if(value_path == "bmp-upd-gen-in-progress")
    {
        bmp_upd_gen_in_progress.yfilter = yfilter;
    }
    if(value_path == "bmp-reset-walk-in-progress")
    {
        bmp_reset_walk_in_progress.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bmp-server-state-age" || name == "bmp-server-state-time-spec" || name == "bmp-server-last-discon-time" || name == "update-source-address" || name == "bmpafi-info" || name == "server-id" || name == "bmp-server-id" || name == "bmp-server-host-name" || name == "bmp-server-port" || name == "bmp-server-state" || name == "bmp-server-is-flapping" || name == "bmp-server-nbr-count" || name == "bmp-init-msg-count" || name == "bmp-termination-msg-count" || name == "bmp-status-report-count" || name == "bmp-per-peer-msg-count" || name == "bmp-peer-msg-drop-count" || name == "bmp-peer-msg-pending-count" || name == "tos-type" || name == "tos-value" || name == "update-source-interface-name" || name == "update-source-vrf-id" || name == "bmp-vrf-name" || name == "bmp-vrf-id" || name == "bmp-update-mode" || name == "tcp-keep-alive-interval" || name == "tcp-maximum-segment-size" || name == "tcp-write-cb-pending" || name == "tcp-last-write-result" || name == "tcp-last-write-cb-time" || name == "tcp-last-write-time" || name == "bmpq-last-write-pulse-sent-time" || name == "bmpq-last-all-write-pulse-sent-time" || name == "bmpq-last-write-pulse-cb-time" || name == "path-update-count" || name == "path-withdraw-count" || name == "path-update-drop" || name == "path-withdraw-drop" || name == "bmp-peer-msg-pending-count-max" || name == "bmp-peer-msg-pending-count-hwts" || name == "bmp-bytes-written-tcp" || name == "tcp-write-time" || name == "bmpr-mon-upd-messages" || name == "bmpr-mon-wdraw-messages" || name == "bmp-messages-wdraw-discarded" || name == "bmp-pfx-wdraw-discarded" || name == "bmp-per-peer-msg-route-mon-count" || name == "bmpr-mon-update-gen-time" || name == "bmpr-mon-eo-rmessages" || name == "bmp-rmon-cur-buffer-size" || name == "bmp-maximum-buffer-size-route-mon" || name == "bmp-server-up-count" || name == "bmp-upd-gen-in-progress" || name == "bmp-reset-walk-in-progress")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge::BmpServerStateAge()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "bmp-server-state-age"; yang_parent_name = "server-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge::~BmpServerStateAge()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-server-state-age";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateAge::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec::BmpServerStateTimeSpec()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "bmp-server-state-time-spec"; yang_parent_name = "server-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec::~BmpServerStateTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-server-state-time-spec";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerStateTimeSpec::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime::BmpServerLastDisconTime()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "bmp-server-last-discon-time"; yang_parent_name = "server-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime::~BmpServerLastDisconTime()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-server-last-discon-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpServerLastDisconTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::UpdateSourceAddress()
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
    l2vpn_vpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2vpnVplsAddress>())
    , l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2vpnMspwAddress>())
    , ipv4_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress>())
    , ipv6_sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress>())
{
    l2vpn_vpls_address->parent = this;
    l2vpn_mspw_address->parent = this;
    ipv4_sr_policy_address->parent = this;
    ipv6_sr_policy_address->parent = this;

    yang_name = "update-source-address"; yang_parent_name = "server-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::~UpdateSourceAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-source-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-vpls-address")
    {
        if(l2vpn_vpls_address == nullptr)
        {
            l2vpn_vpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2vpnVplsAddress>();
        }
        return l2vpn_vpls_address;
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address == nullptr)
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2vpnMspwAddress>();
        }
        return l2vpn_mspw_address;
    }

    if(child_yang_name == "ipv4-sr-policy-address")
    {
        if(ipv4_sr_policy_address == nullptr)
        {
            ipv4_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress>();
        }
        return ipv4_sr_policy_address;
    }

    if(child_yang_name == "ipv6-sr-policy-address")
    {
        if(ipv6_sr_policy_address == nullptr)
        {
            ipv6_sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress>();
        }
        return ipv6_sr_policy_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::get_children() const
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-vpls-address" || name == "l2vpn-mspw-address" || name == "ipv4-sr-policy-address" || name == "ipv6-sr-policy-address" || name == "afi" || name == "ipv4-address" || name == "ipv4-mcast-address" || name == "ipv4-label-address" || name == "ipv4-tunnel-address" || name == "ipv4-mdt-address" || name == "ipv4vpn-address" || name == "ipv4vpna-mcastddress" || name == "ipv6-address" || name == "ipv6-mcast-address" || name == "ipv6-label-address" || name == "ipv6vpn-address" || name == "ipv6vpn-mcast-address" || name == "rt-constraint-address" || name == "ipv6mvpn-address" || name == "ipv4mvpn-address" || name == "l2vpn-evpn-address" || name == "ls-ls-address" || name == "ipv4-flowspec-address" || name == "ipv6-flowspec-address" || name == "ipv4vpn-flowspec-address" || name == "ipv6vpn-flowspec-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2vpnVplsAddress::L2vpnVplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-vpls-address"; yang_parent_name = "update-source-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2vpnVplsAddress::~L2vpnVplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2vpnVplsAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2vpnVplsAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2vpnVplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-vpls-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2vpnVplsAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2vpnVplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2vpnVplsAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2vpnVplsAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2vpnVplsAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2vpnVplsAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2vpnMspwAddress::L2vpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{

    yang_name = "l2vpn-mspw-address"; yang_parent_name = "update-source-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2vpnMspwAddress::~L2vpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2vpnMspwAddress::has_data() const
{
    if (is_presence_container) return true;
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2vpnMspwAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2vpn_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2vpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2vpnMspwAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.yfilter)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2vpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2vpnMspwAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2vpnMspwAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
        l2vpn_address.value_namespace = name_space;
        l2vpn_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2vpnMspwAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::L2vpnMspwAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{

    yang_name = "ipv4-sr-policy-address"; yang_parent_name = "update-source-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
        ipv4_srpolicy_address.value_namespace = name_space;
        ipv4_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv4SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{

    yang_name = "ipv6-sr-policy-address"; yang_parent_name = "update-source-address"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_srpolicy_address.yfilter);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-sr-policy-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.yfilter)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
        ipv6_srpolicy_address.value_namespace = name_space;
        ipv6_srpolicy_address.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::UpdateSourceAddress::Ipv6SrPolicyAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-srpolicy-address")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpafiInfo()
    :
    bmpaf_name{YType::enumeration, "bmpaf-name"},
    bmp_resume_prefix_len{YType::uint32, "bmp-resume-prefix-len"},
    bmp_upd_gen_resume_start_version{YType::uint32, "bmp-upd-gen-resume-start-version"},
    bmp_upd_gen_resume_end_version{YType::uint32, "bmp-upd-gen-resume-end-version"},
    bmp_upd_gen_walk_stopped{YType::boolean, "bmp-upd-gen-walk-stopped"},
    bmp_upd_gen_resume_net_version{YType::uint32, "bmp-upd-gen-resume-net-version"},
    bmp_upd_gen_walk_run_time_stamp{YType::uint64, "bmp-upd-gen-walk-run-time-stamp"},
    bmp_upd_gen_walk_run_count{YType::uint64, "bmp-upd-gen-walk-run-count"},
    bmp_upd_gen_walk_stop_time_stamp{YType::uint64, "bmp-upd-gen-walk-stop-time-stamp"},
    bmp_upd_gen_walk_stop_count{YType::uint64, "bmp-upd-gen-walk-stop-count"},
    bmp_init_eor_end_version{YType::uint32, "bmp-init-eor-end-version"},
    bmp_init_eor_pending_cnt{YType::uint32, "bmp-init-eor-pending-cnt"},
    bmp_filter_neighbor_address_set{YType::boolean, "bmp-filter-neighbor-address-set"},
    bmp_filter_nbr_cnt{YType::uint32, "bmp-filter-nbr-cnt"},
    bmp_send_version{YType::uint32, "bmp-send-version"}
        ,
    bmp_resume_prefix(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix>())
    , bmp_filter_neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress>())
{
    bmp_resume_prefix->parent = this;
    bmp_filter_neighbor_address->parent = this;

    yang_name = "bmpafi-info"; yang_parent_name = "server-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::~BmpafiInfo()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::has_data() const
{
    if (is_presence_container) return true;
    return bmpaf_name.is_set
	|| bmp_resume_prefix_len.is_set
	|| bmp_upd_gen_resume_start_version.is_set
	|| bmp_upd_gen_resume_end_version.is_set
	|| bmp_upd_gen_walk_stopped.is_set
	|| bmp_upd_gen_resume_net_version.is_set
	|| bmp_upd_gen_walk_run_time_stamp.is_set
	|| bmp_upd_gen_walk_run_count.is_set
	|| bmp_upd_gen_walk_stop_time_stamp.is_set
	|| bmp_upd_gen_walk_stop_count.is_set
	|| bmp_init_eor_end_version.is_set
	|| bmp_init_eor_pending_cnt.is_set
	|| bmp_filter_neighbor_address_set.is_set
	|| bmp_filter_nbr_cnt.is_set
	|| bmp_send_version.is_set
	|| (bmp_resume_prefix !=  nullptr && bmp_resume_prefix->has_data())
	|| (bmp_filter_neighbor_address !=  nullptr && bmp_filter_neighbor_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bmpaf_name.yfilter)
	|| ydk::is_set(bmp_resume_prefix_len.yfilter)
	|| ydk::is_set(bmp_upd_gen_resume_start_version.yfilter)
	|| ydk::is_set(bmp_upd_gen_resume_end_version.yfilter)
	|| ydk::is_set(bmp_upd_gen_walk_stopped.yfilter)
	|| ydk::is_set(bmp_upd_gen_resume_net_version.yfilter)
	|| ydk::is_set(bmp_upd_gen_walk_run_time_stamp.yfilter)
	|| ydk::is_set(bmp_upd_gen_walk_run_count.yfilter)
	|| ydk::is_set(bmp_upd_gen_walk_stop_time_stamp.yfilter)
	|| ydk::is_set(bmp_upd_gen_walk_stop_count.yfilter)
	|| ydk::is_set(bmp_init_eor_end_version.yfilter)
	|| ydk::is_set(bmp_init_eor_pending_cnt.yfilter)
	|| ydk::is_set(bmp_filter_neighbor_address_set.yfilter)
	|| ydk::is_set(bmp_filter_nbr_cnt.yfilter)
	|| ydk::is_set(bmp_send_version.yfilter)
	|| (bmp_resume_prefix !=  nullptr && bmp_resume_prefix->has_operation())
	|| (bmp_filter_neighbor_address !=  nullptr && bmp_filter_neighbor_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmpafi-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bmpaf_name.is_set || is_set(bmpaf_name.yfilter)) leaf_name_data.push_back(bmpaf_name.get_name_leafdata());
    if (bmp_resume_prefix_len.is_set || is_set(bmp_resume_prefix_len.yfilter)) leaf_name_data.push_back(bmp_resume_prefix_len.get_name_leafdata());
    if (bmp_upd_gen_resume_start_version.is_set || is_set(bmp_upd_gen_resume_start_version.yfilter)) leaf_name_data.push_back(bmp_upd_gen_resume_start_version.get_name_leafdata());
    if (bmp_upd_gen_resume_end_version.is_set || is_set(bmp_upd_gen_resume_end_version.yfilter)) leaf_name_data.push_back(bmp_upd_gen_resume_end_version.get_name_leafdata());
    if (bmp_upd_gen_walk_stopped.is_set || is_set(bmp_upd_gen_walk_stopped.yfilter)) leaf_name_data.push_back(bmp_upd_gen_walk_stopped.get_name_leafdata());
    if (bmp_upd_gen_resume_net_version.is_set || is_set(bmp_upd_gen_resume_net_version.yfilter)) leaf_name_data.push_back(bmp_upd_gen_resume_net_version.get_name_leafdata());
    if (bmp_upd_gen_walk_run_time_stamp.is_set || is_set(bmp_upd_gen_walk_run_time_stamp.yfilter)) leaf_name_data.push_back(bmp_upd_gen_walk_run_time_stamp.get_name_leafdata());
    if (bmp_upd_gen_walk_run_count.is_set || is_set(bmp_upd_gen_walk_run_count.yfilter)) leaf_name_data.push_back(bmp_upd_gen_walk_run_count.get_name_leafdata());
    if (bmp_upd_gen_walk_stop_time_stamp.is_set || is_set(bmp_upd_gen_walk_stop_time_stamp.yfilter)) leaf_name_data.push_back(bmp_upd_gen_walk_stop_time_stamp.get_name_leafdata());
    if (bmp_upd_gen_walk_stop_count.is_set || is_set(bmp_upd_gen_walk_stop_count.yfilter)) leaf_name_data.push_back(bmp_upd_gen_walk_stop_count.get_name_leafdata());
    if (bmp_init_eor_end_version.is_set || is_set(bmp_init_eor_end_version.yfilter)) leaf_name_data.push_back(bmp_init_eor_end_version.get_name_leafdata());
    if (bmp_init_eor_pending_cnt.is_set || is_set(bmp_init_eor_pending_cnt.yfilter)) leaf_name_data.push_back(bmp_init_eor_pending_cnt.get_name_leafdata());
    if (bmp_filter_neighbor_address_set.is_set || is_set(bmp_filter_neighbor_address_set.yfilter)) leaf_name_data.push_back(bmp_filter_neighbor_address_set.get_name_leafdata());
    if (bmp_filter_nbr_cnt.is_set || is_set(bmp_filter_nbr_cnt.yfilter)) leaf_name_data.push_back(bmp_filter_nbr_cnt.get_name_leafdata());
    if (bmp_send_version.is_set || is_set(bmp_send_version.yfilter)) leaf_name_data.push_back(bmp_send_version.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bmp-resume-prefix")
    {
        if(bmp_resume_prefix == nullptr)
        {
            bmp_resume_prefix = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix>();
        }
        return bmp_resume_prefix;
    }

    if(child_yang_name == "bmp-filter-neighbor-address")
    {
        if(bmp_filter_neighbor_address == nullptr)
        {
            bmp_filter_neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpFilterNeighborAddress>();
        }
        return bmp_filter_neighbor_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bmp_resume_prefix != nullptr)
    {
        _children["bmp-resume-prefix"] = bmp_resume_prefix;
    }

    if(bmp_filter_neighbor_address != nullptr)
    {
        _children["bmp-filter-neighbor-address"] = bmp_filter_neighbor_address;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bmpaf-name")
    {
        bmpaf_name = value;
        bmpaf_name.value_namespace = name_space;
        bmpaf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-resume-prefix-len")
    {
        bmp_resume_prefix_len = value;
        bmp_resume_prefix_len.value_namespace = name_space;
        bmp_resume_prefix_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-upd-gen-resume-start-version")
    {
        bmp_upd_gen_resume_start_version = value;
        bmp_upd_gen_resume_start_version.value_namespace = name_space;
        bmp_upd_gen_resume_start_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-upd-gen-resume-end-version")
    {
        bmp_upd_gen_resume_end_version = value;
        bmp_upd_gen_resume_end_version.value_namespace = name_space;
        bmp_upd_gen_resume_end_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-upd-gen-walk-stopped")
    {
        bmp_upd_gen_walk_stopped = value;
        bmp_upd_gen_walk_stopped.value_namespace = name_space;
        bmp_upd_gen_walk_stopped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-upd-gen-resume-net-version")
    {
        bmp_upd_gen_resume_net_version = value;
        bmp_upd_gen_resume_net_version.value_namespace = name_space;
        bmp_upd_gen_resume_net_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-upd-gen-walk-run-time-stamp")
    {
        bmp_upd_gen_walk_run_time_stamp = value;
        bmp_upd_gen_walk_run_time_stamp.value_namespace = name_space;
        bmp_upd_gen_walk_run_time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-upd-gen-walk-run-count")
    {
        bmp_upd_gen_walk_run_count = value;
        bmp_upd_gen_walk_run_count.value_namespace = name_space;
        bmp_upd_gen_walk_run_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-upd-gen-walk-stop-time-stamp")
    {
        bmp_upd_gen_walk_stop_time_stamp = value;
        bmp_upd_gen_walk_stop_time_stamp.value_namespace = name_space;
        bmp_upd_gen_walk_stop_time_stamp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-upd-gen-walk-stop-count")
    {
        bmp_upd_gen_walk_stop_count = value;
        bmp_upd_gen_walk_stop_count.value_namespace = name_space;
        bmp_upd_gen_walk_stop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-init-eor-end-version")
    {
        bmp_init_eor_end_version = value;
        bmp_init_eor_end_version.value_namespace = name_space;
        bmp_init_eor_end_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-init-eor-pending-cnt")
    {
        bmp_init_eor_pending_cnt = value;
        bmp_init_eor_pending_cnt.value_namespace = name_space;
        bmp_init_eor_pending_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-filter-neighbor-address-set")
    {
        bmp_filter_neighbor_address_set = value;
        bmp_filter_neighbor_address_set.value_namespace = name_space;
        bmp_filter_neighbor_address_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-filter-nbr-cnt")
    {
        bmp_filter_nbr_cnt = value;
        bmp_filter_nbr_cnt.value_namespace = name_space;
        bmp_filter_nbr_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmp-send-version")
    {
        bmp_send_version = value;
        bmp_send_version.value_namespace = name_space;
        bmp_send_version.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bmpaf-name")
    {
        bmpaf_name.yfilter = yfilter;
    }
    if(value_path == "bmp-resume-prefix-len")
    {
        bmp_resume_prefix_len.yfilter = yfilter;
    }
    if(value_path == "bmp-upd-gen-resume-start-version")
    {
        bmp_upd_gen_resume_start_version.yfilter = yfilter;
    }
    if(value_path == "bmp-upd-gen-resume-end-version")
    {
        bmp_upd_gen_resume_end_version.yfilter = yfilter;
    }
    if(value_path == "bmp-upd-gen-walk-stopped")
    {
        bmp_upd_gen_walk_stopped.yfilter = yfilter;
    }
    if(value_path == "bmp-upd-gen-resume-net-version")
    {
        bmp_upd_gen_resume_net_version.yfilter = yfilter;
    }
    if(value_path == "bmp-upd-gen-walk-run-time-stamp")
    {
        bmp_upd_gen_walk_run_time_stamp.yfilter = yfilter;
    }
    if(value_path == "bmp-upd-gen-walk-run-count")
    {
        bmp_upd_gen_walk_run_count.yfilter = yfilter;
    }
    if(value_path == "bmp-upd-gen-walk-stop-time-stamp")
    {
        bmp_upd_gen_walk_stop_time_stamp.yfilter = yfilter;
    }
    if(value_path == "bmp-upd-gen-walk-stop-count")
    {
        bmp_upd_gen_walk_stop_count.yfilter = yfilter;
    }
    if(value_path == "bmp-init-eor-end-version")
    {
        bmp_init_eor_end_version.yfilter = yfilter;
    }
    if(value_path == "bmp-init-eor-pending-cnt")
    {
        bmp_init_eor_pending_cnt.yfilter = yfilter;
    }
    if(value_path == "bmp-filter-neighbor-address-set")
    {
        bmp_filter_neighbor_address_set.yfilter = yfilter;
    }
    if(value_path == "bmp-filter-nbr-cnt")
    {
        bmp_filter_nbr_cnt.yfilter = yfilter;
    }
    if(value_path == "bmp-send-version")
    {
        bmp_send_version.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bmp-resume-prefix" || name == "bmp-filter-neighbor-address" || name == "bmpaf-name" || name == "bmp-resume-prefix-len" || name == "bmp-upd-gen-resume-start-version" || name == "bmp-upd-gen-resume-end-version" || name == "bmp-upd-gen-walk-stopped" || name == "bmp-upd-gen-resume-net-version" || name == "bmp-upd-gen-walk-run-time-stamp" || name == "bmp-upd-gen-walk-run-count" || name == "bmp-upd-gen-walk-stop-time-stamp" || name == "bmp-upd-gen-walk-stop-count" || name == "bmp-init-eor-end-version" || name == "bmp-init-eor-pending-cnt" || name == "bmp-filter-neighbor-address-set" || name == "bmp-filter-nbr-cnt" || name == "bmp-send-version")
        return true;
    return false;
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::BmpResumePrefix()
    :
    prefix_length{YType::uint16, "prefix-length"}
        ,
    prefix(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix>())
{
    prefix->parent = this;

    yang_name = "bmp-resume-prefix"; yang_parent_name = "bmpafi-info"; is_top_level_class = false; has_list_ancestor = true; 
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::~BmpResumePrefix()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::has_data() const
{
    if (is_presence_container) return true;
    return prefix_length.is_set
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bmp-resume-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix")
    {
        if(prefix == nullptr)
        {
            prefix = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::Prefix>();
        }
        return prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefix != nullptr)
    {
        _children["prefix"] = prefix;
    }

    return _children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Bmp::ServerSummaries::ServerSummary::BmpafiInfo::BmpResumePrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "prefix-length")
        return true;
    return false;
}


}
}

