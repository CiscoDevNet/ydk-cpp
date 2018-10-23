
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_rcmd_oper_1.hpp"
#include "Cisco_IOS_XR_infra_rcmd_oper_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_rcmd_oper {

Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TriggerLsa::TriggerLsa()
    :
    lsa_id{YType::str, "lsa-id"},
    sequence_number{YType::str, "sequence-number"},
    lsa_type{YType::enumeration, "lsa-type"},
    origin_router_id{YType::str, "origin-router-id"},
    change_type{YType::enumeration, "change-type"},
    reception_time{YType::str, "reception-time"}
{

    yang_name = "trigger-lsa"; yang_parent_name = "summary-external-event-offline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TriggerLsa::~TriggerLsa()
{
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TriggerLsa::has_data() const
{
    if (is_presence_container) return true;
    return lsa_id.is_set
	|| sequence_number.is_set
	|| lsa_type.is_set
	|| origin_router_id.is_set
	|| change_type.is_set
	|| reception_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TriggerLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(origin_router_id.yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(reception_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TriggerLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TriggerLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (origin_router_id.is_set || is_set(origin_router_id.yfilter)) leaf_name_data.push_back(origin_router_id.get_name_leafdata());
    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (reception_time.is_set || is_set(reception_time.yfilter)) leaf_name_data.push_back(reception_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TriggerLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TriggerLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TriggerLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin-router-id")
    {
        origin_router_id = value;
        origin_router_id.value_namespace = name_space;
        origin_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reception-time")
    {
        reception_time = value;
        reception_time.value_namespace = name_space;
        reception_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TriggerLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "origin-router-id")
    {
        origin_router_id.yfilter = yfilter;
    }
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "reception-time")
    {
        reception_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TriggerLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-id" || name == "sequence-number" || name == "lsa-type" || name == "origin-router-id" || name == "change-type" || name == "reception-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::TimeLine()
    :
    route_origin{YType::str, "route-origin"},
    ri_bv4_enter{YType::str, "ri-bv4-enter"},
    ri_bv4_exit{YType::str, "ri-bv4-exit"},
    ri_bv4_redistribute{YType::str, "ri-bv4-redistribute"},
    ldp_enter{YType::str, "ldp-enter"},
    ldp_exit{YType::str, "ldp-exit"},
    lsd_enter{YType::str, "lsd-enter"},
    lsd_exit{YType::str, "lsd-exit"}
        ,
    lc_ip(this, {})
    , lc_mpls(this, {})
{

    yang_name = "time-line"; yang_parent_name = "summary-external-event-offline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::~TimeLine()
{
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lc_ip.len(); index++)
    {
        if(lc_ip[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lc_mpls.len(); index++)
    {
        if(lc_mpls[index]->has_data())
            return true;
    }
    return route_origin.is_set
	|| ri_bv4_enter.is_set
	|| ri_bv4_exit.is_set
	|| ri_bv4_redistribute.is_set
	|| ldp_enter.is_set
	|| ldp_exit.is_set
	|| lsd_enter.is_set
	|| lsd_exit.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::has_operation() const
{
    for (std::size_t index=0; index<lc_ip.len(); index++)
    {
        if(lc_ip[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lc_mpls.len(); index++)
    {
        if(lc_mpls[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(route_origin.yfilter)
	|| ydk::is_set(ri_bv4_enter.yfilter)
	|| ydk::is_set(ri_bv4_exit.yfilter)
	|| ydk::is_set(ri_bv4_redistribute.yfilter)
	|| ydk::is_set(ldp_enter.yfilter)
	|| ydk::is_set(ldp_exit.yfilter)
	|| ydk::is_set(lsd_enter.yfilter)
	|| ydk::is_set(lsd_exit.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time-line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_origin.is_set || is_set(route_origin.yfilter)) leaf_name_data.push_back(route_origin.get_name_leafdata());
    if (ri_bv4_enter.is_set || is_set(ri_bv4_enter.yfilter)) leaf_name_data.push_back(ri_bv4_enter.get_name_leafdata());
    if (ri_bv4_exit.is_set || is_set(ri_bv4_exit.yfilter)) leaf_name_data.push_back(ri_bv4_exit.get_name_leafdata());
    if (ri_bv4_redistribute.is_set || is_set(ri_bv4_redistribute.yfilter)) leaf_name_data.push_back(ri_bv4_redistribute.get_name_leafdata());
    if (ldp_enter.is_set || is_set(ldp_enter.yfilter)) leaf_name_data.push_back(ldp_enter.get_name_leafdata());
    if (ldp_exit.is_set || is_set(ldp_exit.yfilter)) leaf_name_data.push_back(ldp_exit.get_name_leafdata());
    if (lsd_enter.is_set || is_set(lsd_enter.yfilter)) leaf_name_data.push_back(lsd_enter.get_name_leafdata());
    if (lsd_exit.is_set || is_set(lsd_exit.yfilter)) leaf_name_data.push_back(lsd_exit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lc-ip")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcIp>();
        ent_->parent = this;
        lc_ip.append(ent_);
        return ent_;
    }

    if(child_yang_name == "lc-mpls")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcMpls>();
        ent_->parent = this;
        lc_mpls.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lc_ip.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : lc_mpls.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-origin")
    {
        route_origin = value;
        route_origin.value_namespace = name_space;
        route_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ri-bv4-enter")
    {
        ri_bv4_enter = value;
        ri_bv4_enter.value_namespace = name_space;
        ri_bv4_enter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ri-bv4-exit")
    {
        ri_bv4_exit = value;
        ri_bv4_exit.value_namespace = name_space;
        ri_bv4_exit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ri-bv4-redistribute")
    {
        ri_bv4_redistribute = value;
        ri_bv4_redistribute.value_namespace = name_space;
        ri_bv4_redistribute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-enter")
    {
        ldp_enter = value;
        ldp_enter.value_namespace = name_space;
        ldp_enter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-exit")
    {
        ldp_exit = value;
        ldp_exit.value_namespace = name_space;
        ldp_exit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsd-enter")
    {
        lsd_enter = value;
        lsd_enter.value_namespace = name_space;
        lsd_enter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsd-exit")
    {
        lsd_exit = value;
        lsd_exit.value_namespace = name_space;
        lsd_exit.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-origin")
    {
        route_origin.yfilter = yfilter;
    }
    if(value_path == "ri-bv4-enter")
    {
        ri_bv4_enter.yfilter = yfilter;
    }
    if(value_path == "ri-bv4-exit")
    {
        ri_bv4_exit.yfilter = yfilter;
    }
    if(value_path == "ri-bv4-redistribute")
    {
        ri_bv4_redistribute.yfilter = yfilter;
    }
    if(value_path == "ldp-enter")
    {
        ldp_enter.yfilter = yfilter;
    }
    if(value_path == "ldp-exit")
    {
        ldp_exit.yfilter = yfilter;
    }
    if(value_path == "lsd-enter")
    {
        lsd_enter.yfilter = yfilter;
    }
    if(value_path == "lsd-exit")
    {
        lsd_exit.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lc-ip" || name == "lc-mpls" || name == "route-origin" || name == "ri-bv4-enter" || name == "ri-bv4-exit" || name == "ri-bv4-redistribute" || name == "ldp-enter" || name == "ldp-exit" || name == "lsd-enter" || name == "lsd-exit")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcIp::LcIp()
    :
    node_name{YType::str, "node-name"},
    speed{YType::enumeration, "speed"},
    fib_complete{YType::str, "fib-complete"}
{

    yang_name = "lc-ip"; yang_parent_name = "time-line"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcIp::~LcIp()
{
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcIp::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| speed.is_set
	|| fib_complete.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcIp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(fib_complete.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lc-ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcIp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (fib_complete.is_set || is_set(fib_complete.yfilter)) leaf_name_data.push_back(fib_complete.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcIp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcIp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fib-complete")
    {
        fib_complete = value;
        fib_complete.value_namespace = name_space;
        fib_complete.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcIp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "fib-complete")
    {
        fib_complete.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcIp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-name" || name == "speed" || name == "fib-complete")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcMpls::LcMpls()
    :
    node_name{YType::str, "node-name"},
    speed{YType::enumeration, "speed"},
    fib_complete{YType::str, "fib-complete"}
{

    yang_name = "lc-mpls"; yang_parent_name = "time-line"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcMpls::~LcMpls()
{
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcMpls::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| speed.is_set
	|| fib_complete.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcMpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(fib_complete.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcMpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lc-mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcMpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (fib_complete.is_set || is_set(fib_complete.yfilter)) leaf_name_data.push_back(fib_complete.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcMpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcMpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcMpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fib-complete")
    {
        fib_complete = value;
        fib_complete.value_namespace = name_space;
        fib_complete.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcMpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "fib-complete")
    {
        fib_complete.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcMpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-name" || name == "speed" || name == "fib-complete")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::LsaProcessed::LsaProcessed()
    :
    lsa_id{YType::str, "lsa-id"},
    sequence_number{YType::str, "sequence-number"},
    lsa_type{YType::enumeration, "lsa-type"},
    origin_router_id{YType::str, "origin-router-id"},
    change_type{YType::enumeration, "change-type"},
    reception_time{YType::str, "reception-time"}
{

    yang_name = "lsa-processed"; yang_parent_name = "summary-external-event-offline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::LsaProcessed::~LsaProcessed()
{
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::LsaProcessed::has_data() const
{
    if (is_presence_container) return true;
    return lsa_id.is_set
	|| sequence_number.is_set
	|| lsa_type.is_set
	|| origin_router_id.is_set
	|| change_type.is_set
	|| reception_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::LsaProcessed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(origin_router_id.yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(reception_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::LsaProcessed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-processed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::LsaProcessed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (origin_router_id.is_set || is_set(origin_router_id.yfilter)) leaf_name_data.push_back(origin_router_id.get_name_leafdata());
    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (reception_time.is_set || is_set(reception_time.yfilter)) leaf_name_data.push_back(reception_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::LsaProcessed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::LsaProcessed::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::LsaProcessed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin-router-id")
    {
        origin_router_id = value;
        origin_router_id.value_namespace = name_space;
        origin_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reception-time")
    {
        reception_time = value;
        reception_time.value_namespace = name_space;
        reception_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::LsaProcessed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "origin-router-id")
    {
        origin_router_id.yfilter = yfilter;
    }
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "reception-time")
    {
        reception_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::LsaProcessed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-id" || name == "sequence-number" || name == "lsa-type" || name == "origin-router-id" || name == "change-type" || name == "reception-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOfflines()
    :
    prefix_event_offline(this, {"event_id"})
{

    yang_name = "prefix-event-offlines"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::~PrefixEventOfflines()
{
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefix_event_offline.len(); index++)
    {
        if(prefix_event_offline[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::has_operation() const
{
    for (std::size_t index=0; index<prefix_event_offline.len(); index++)
    {
        if(prefix_event_offline[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-event-offlines";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-event-offline")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline>();
        ent_->parent = this;
        prefix_event_offline.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prefix_event_offline.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-event-offline")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::PrefixEventOffline()
    :
    event_id{YType::uint32, "event-id"},
    prefix{YType::str, "prefix"},
    prefix_lenth{YType::uint32, "prefix-lenth"},
    spf_run_no{YType::uint32, "spf-run-no"},
    ipfrr_event_id{YType::uint32, "ipfrr-event-id"},
    threshold_exceeded{YType::boolean, "threshold-exceeded"},
    priority{YType::enumeration, "priority"},
    change_type{YType::enumeration, "change-type"},
    route_type{YType::enumeration, "route-type"},
    route_path_change_type{YType::enumeration, "route-path-change-type"},
    cost{YType::uint32, "cost"},
    trigger_time{YType::str, "trigger-time"}
        ,
    ip_convergence_time(std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime>())
    , mpls_convergence_time(std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime>())
    , path(this, {})
    , trigger_lsa(this, {})
    , time_line(this, {})
    , lsa_processed(this, {})
{
    ip_convergence_time->parent = this;
    mpls_convergence_time->parent = this;

    yang_name = "prefix-event-offline"; yang_parent_name = "prefix-event-offlines"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::~PrefixEventOffline()
{
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path.len(); index++)
    {
        if(path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<trigger_lsa.len(); index++)
    {
        if(trigger_lsa[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<time_line.len(); index++)
    {
        if(time_line[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lsa_processed.len(); index++)
    {
        if(lsa_processed[index]->has_data())
            return true;
    }
    return event_id.is_set
	|| prefix.is_set
	|| prefix_lenth.is_set
	|| spf_run_no.is_set
	|| ipfrr_event_id.is_set
	|| threshold_exceeded.is_set
	|| priority.is_set
	|| change_type.is_set
	|| route_type.is_set
	|| route_path_change_type.is_set
	|| cost.is_set
	|| trigger_time.is_set
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_data())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_data());
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::has_operation() const
{
    for (std::size_t index=0; index<path.len(); index++)
    {
        if(path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<trigger_lsa.len(); index++)
    {
        if(trigger_lsa[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<time_line.len(); index++)
    {
        if(time_line[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lsa_processed.len(); index++)
    {
        if(lsa_processed[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(event_id.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_lenth.yfilter)
	|| ydk::is_set(spf_run_no.yfilter)
	|| ydk::is_set(ipfrr_event_id.yfilter)
	|| ydk::is_set(threshold_exceeded.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(route_path_change_type.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(trigger_time.yfilter)
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_operation())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_operation());
}

std::string Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-event-offline";
    ADD_KEY_TOKEN(event_id, "event-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_id.is_set || is_set(event_id.yfilter)) leaf_name_data.push_back(event_id.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_lenth.is_set || is_set(prefix_lenth.yfilter)) leaf_name_data.push_back(prefix_lenth.get_name_leafdata());
    if (spf_run_no.is_set || is_set(spf_run_no.yfilter)) leaf_name_data.push_back(spf_run_no.get_name_leafdata());
    if (ipfrr_event_id.is_set || is_set(ipfrr_event_id.yfilter)) leaf_name_data.push_back(ipfrr_event_id.get_name_leafdata());
    if (threshold_exceeded.is_set || is_set(threshold_exceeded.yfilter)) leaf_name_data.push_back(threshold_exceeded.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_path_change_type.is_set || is_set(route_path_change_type.yfilter)) leaf_name_data.push_back(route_path_change_type.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (trigger_time.is_set || is_set(trigger_time.yfilter)) leaf_name_data.push_back(trigger_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-convergence-time")
    {
        if(ip_convergence_time == nullptr)
        {
            ip_convergence_time = std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime>();
        }
        return ip_convergence_time;
    }

    if(child_yang_name == "mpls-convergence-time")
    {
        if(mpls_convergence_time == nullptr)
        {
            mpls_convergence_time = std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime>();
        }
        return mpls_convergence_time;
    }

    if(child_yang_name == "path")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path>();
        ent_->parent = this;
        path.append(ent_);
        return ent_;
    }

    if(child_yang_name == "trigger-lsa")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa>();
        ent_->parent = this;
        trigger_lsa.append(ent_);
        return ent_;
    }

    if(child_yang_name == "time-line")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine>();
        ent_->parent = this;
        time_line.append(ent_);
        return ent_;
    }

    if(child_yang_name == "lsa-processed")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed>();
        ent_->parent = this;
        lsa_processed.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip_convergence_time != nullptr)
    {
        _children["ip-convergence-time"] = ip_convergence_time;
    }

    if(mpls_convergence_time != nullptr)
    {
        _children["mpls-convergence-time"] = mpls_convergence_time;
    }

    count_ = 0;
    for (auto ent_ : path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : trigger_lsa.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : time_line.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : lsa_processed.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-id")
    {
        event_id = value;
        event_id.value_namespace = name_space;
        event_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-lenth")
    {
        prefix_lenth = value;
        prefix_lenth.value_namespace = name_space;
        prefix_lenth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-run-no")
    {
        spf_run_no = value;
        spf_run_no.value_namespace = name_space;
        spf_run_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipfrr-event-id")
    {
        ipfrr_event_id = value;
        ipfrr_event_id.value_namespace = name_space;
        ipfrr_event_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded = value;
        threshold_exceeded.value_namespace = name_space;
        threshold_exceeded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-change-type")
    {
        route_path_change_type = value;
        route_path_change_type.value_namespace = name_space;
        route_path_change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-time")
    {
        trigger_time = value;
        trigger_time.value_namespace = name_space;
        trigger_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-id")
    {
        event_id.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-lenth")
    {
        prefix_lenth.yfilter = yfilter;
    }
    if(value_path == "spf-run-no")
    {
        spf_run_no.yfilter = yfilter;
    }
    if(value_path == "ipfrr-event-id")
    {
        ipfrr_event_id.yfilter = yfilter;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "route-path-change-type")
    {
        route_path_change_type.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "trigger-time")
    {
        trigger_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-convergence-time" || name == "mpls-convergence-time" || name == "path" || name == "trigger-lsa" || name == "time-line" || name == "lsa-processed" || name == "event-id" || name == "prefix" || name == "prefix-lenth" || name == "spf-run-no" || name == "ipfrr-event-id" || name == "threshold-exceeded" || name == "priority" || name == "change-type" || name == "route-type" || name == "route-path-change-type" || name == "cost" || name == "trigger-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime::IpConvergenceTime()
    :
    minimum_time{YType::str, "minimum-time"},
    maximum_time{YType::str, "maximum-time"},
    slowest_node_name{YType::str, "slowest-node-name"},
    fastest_node_name{YType::str, "fastest-node-name"}
{

    yang_name = "ip-convergence-time"; yang_parent_name = "prefix-event-offline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime::~IpConvergenceTime()
{
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime::has_data() const
{
    if (is_presence_container) return true;
    return minimum_time.is_set
	|| maximum_time.is_set
	|| slowest_node_name.is_set
	|| fastest_node_name.is_set;
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter)
	|| ydk::is_set(fastest_node_name.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-convergence-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());
    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-time" || name == "maximum-time" || name == "slowest-node-name" || name == "fastest-node-name")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime::MplsConvergenceTime()
    :
    minimum_time{YType::str, "minimum-time"},
    maximum_time{YType::str, "maximum-time"},
    slowest_node_name{YType::str, "slowest-node-name"},
    fastest_node_name{YType::str, "fastest-node-name"}
{

    yang_name = "mpls-convergence-time"; yang_parent_name = "prefix-event-offline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime::~MplsConvergenceTime()
{
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime::has_data() const
{
    if (is_presence_container) return true;
    return minimum_time.is_set
	|| maximum_time.is_set
	|| slowest_node_name.is_set
	|| fastest_node_name.is_set;
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter)
	|| ydk::is_set(fastest_node_name.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-convergence-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());
    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-time" || name == "maximum-time" || name == "slowest-node-name" || name == "fastest-node-name")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::Path()
    :
    interface_name{YType::str, "interface-name"},
    neighbour_address{YType::str, "neighbour-address"},
    change_type{YType::enumeration, "change-type"},
    path_metric{YType::uint32, "path-metric"}
        ,
    lfa_path(this, {})
{

    yang_name = "path"; yang_parent_name = "prefix-event-offline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::~Path()
{
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lfa_path.len(); index++)
    {
        if(lfa_path[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| neighbour_address.is_set
	|| change_type.is_set
	|| path_metric.is_set;
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::has_operation() const
{
    for (std::size_t index=0; index<lfa_path.len(); index++)
    {
        if(lfa_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbour_address.yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(path_metric.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbour_address.is_set || is_set(neighbour_address.yfilter)) leaf_name_data.push_back(neighbour_address.get_name_leafdata());
    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (path_metric.is_set || is_set(path_metric.yfilter)) leaf_name_data.push_back(path_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lfa-path")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath>();
        ent_->parent = this;
        lfa_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lfa_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address = value;
        neighbour_address.value_namespace = name_space;
        neighbour_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-metric")
    {
        path_metric = value;
        path_metric.value_namespace = name_space;
        path_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address.yfilter = yfilter;
    }
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "path-metric")
    {
        path_metric.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lfa-path" || name == "interface-name" || name == "neighbour-address" || name == "change-type" || name == "path-metric")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath::LfaPath()
    :
    lfa_type{YType::enumeration, "lfa-type"},
    interface_name{YType::str, "interface-name"},
    neighbour_address{YType::str, "neighbour-address"},
    change_type{YType::enumeration, "change-type"},
    path_metric{YType::uint32, "path-metric"},
    remote_node_id{YType::str, "remote-node-id"}
{

    yang_name = "lfa-path"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath::~LfaPath()
{
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath::has_data() const
{
    if (is_presence_container) return true;
    return lfa_type.is_set
	|| interface_name.is_set
	|| neighbour_address.is_set
	|| change_type.is_set
	|| path_metric.is_set
	|| remote_node_id.is_set;
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lfa_type.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbour_address.yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(path_metric.yfilter)
	|| ydk::is_set(remote_node_id.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lfa-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lfa_type.is_set || is_set(lfa_type.yfilter)) leaf_name_data.push_back(lfa_type.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbour_address.is_set || is_set(neighbour_address.yfilter)) leaf_name_data.push_back(neighbour_address.get_name_leafdata());
    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (path_metric.is_set || is_set(path_metric.yfilter)) leaf_name_data.push_back(path_metric.get_name_leafdata());
    if (remote_node_id.is_set || is_set(remote_node_id.yfilter)) leaf_name_data.push_back(remote_node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lfa-type")
    {
        lfa_type = value;
        lfa_type.value_namespace = name_space;
        lfa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address = value;
        neighbour_address.value_namespace = name_space;
        neighbour_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-metric")
    {
        path_metric = value;
        path_metric.value_namespace = name_space;
        path_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-node-id")
    {
        remote_node_id = value;
        remote_node_id.value_namespace = name_space;
        remote_node_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lfa-type")
    {
        lfa_type.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address.yfilter = yfilter;
    }
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "path-metric")
    {
        path_metric.yfilter = yfilter;
    }
    if(value_path == "remote-node-id")
    {
        remote_node_id.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lfa-type" || name == "interface-name" || name == "neighbour-address" || name == "change-type" || name == "path-metric" || name == "remote-node-id")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa::TriggerLsa()
    :
    lsa_id{YType::str, "lsa-id"},
    sequence_number{YType::str, "sequence-number"},
    lsa_type{YType::enumeration, "lsa-type"},
    origin_router_id{YType::str, "origin-router-id"},
    change_type{YType::enumeration, "change-type"},
    reception_time{YType::str, "reception-time"}
{

    yang_name = "trigger-lsa"; yang_parent_name = "prefix-event-offline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa::~TriggerLsa()
{
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa::has_data() const
{
    if (is_presence_container) return true;
    return lsa_id.is_set
	|| sequence_number.is_set
	|| lsa_type.is_set
	|| origin_router_id.is_set
	|| change_type.is_set
	|| reception_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(origin_router_id.yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(reception_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (origin_router_id.is_set || is_set(origin_router_id.yfilter)) leaf_name_data.push_back(origin_router_id.get_name_leafdata());
    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (reception_time.is_set || is_set(reception_time.yfilter)) leaf_name_data.push_back(reception_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin-router-id")
    {
        origin_router_id = value;
        origin_router_id.value_namespace = name_space;
        origin_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reception-time")
    {
        reception_time = value;
        reception_time.value_namespace = name_space;
        reception_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "origin-router-id")
    {
        origin_router_id.yfilter = yfilter;
    }
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "reception-time")
    {
        reception_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-id" || name == "sequence-number" || name == "lsa-type" || name == "origin-router-id" || name == "change-type" || name == "reception-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::TimeLine()
    :
    route_origin{YType::str, "route-origin"},
    ri_bv4_enter{YType::str, "ri-bv4-enter"},
    ri_bv4_exit{YType::str, "ri-bv4-exit"},
    ri_bv4_redistribute{YType::str, "ri-bv4-redistribute"},
    ldp_enter{YType::str, "ldp-enter"},
    ldp_exit{YType::str, "ldp-exit"},
    lsd_enter{YType::str, "lsd-enter"},
    lsd_exit{YType::str, "lsd-exit"}
        ,
    lc_ip(this, {})
    , lc_mpls(this, {})
{

    yang_name = "time-line"; yang_parent_name = "prefix-event-offline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::~TimeLine()
{
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lc_ip.len(); index++)
    {
        if(lc_ip[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lc_mpls.len(); index++)
    {
        if(lc_mpls[index]->has_data())
            return true;
    }
    return route_origin.is_set
	|| ri_bv4_enter.is_set
	|| ri_bv4_exit.is_set
	|| ri_bv4_redistribute.is_set
	|| ldp_enter.is_set
	|| ldp_exit.is_set
	|| lsd_enter.is_set
	|| lsd_exit.is_set;
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::has_operation() const
{
    for (std::size_t index=0; index<lc_ip.len(); index++)
    {
        if(lc_ip[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lc_mpls.len(); index++)
    {
        if(lc_mpls[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(route_origin.yfilter)
	|| ydk::is_set(ri_bv4_enter.yfilter)
	|| ydk::is_set(ri_bv4_exit.yfilter)
	|| ydk::is_set(ri_bv4_redistribute.yfilter)
	|| ydk::is_set(ldp_enter.yfilter)
	|| ydk::is_set(ldp_exit.yfilter)
	|| ydk::is_set(lsd_enter.yfilter)
	|| ydk::is_set(lsd_exit.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time-line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_origin.is_set || is_set(route_origin.yfilter)) leaf_name_data.push_back(route_origin.get_name_leafdata());
    if (ri_bv4_enter.is_set || is_set(ri_bv4_enter.yfilter)) leaf_name_data.push_back(ri_bv4_enter.get_name_leafdata());
    if (ri_bv4_exit.is_set || is_set(ri_bv4_exit.yfilter)) leaf_name_data.push_back(ri_bv4_exit.get_name_leafdata());
    if (ri_bv4_redistribute.is_set || is_set(ri_bv4_redistribute.yfilter)) leaf_name_data.push_back(ri_bv4_redistribute.get_name_leafdata());
    if (ldp_enter.is_set || is_set(ldp_enter.yfilter)) leaf_name_data.push_back(ldp_enter.get_name_leafdata());
    if (ldp_exit.is_set || is_set(ldp_exit.yfilter)) leaf_name_data.push_back(ldp_exit.get_name_leafdata());
    if (lsd_enter.is_set || is_set(lsd_enter.yfilter)) leaf_name_data.push_back(lsd_enter.get_name_leafdata());
    if (lsd_exit.is_set || is_set(lsd_exit.yfilter)) leaf_name_data.push_back(lsd_exit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lc-ip")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp>();
        ent_->parent = this;
        lc_ip.append(ent_);
        return ent_;
    }

    if(child_yang_name == "lc-mpls")
    {
        auto ent_ = std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls>();
        ent_->parent = this;
        lc_mpls.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lc_ip.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : lc_mpls.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-origin")
    {
        route_origin = value;
        route_origin.value_namespace = name_space;
        route_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ri-bv4-enter")
    {
        ri_bv4_enter = value;
        ri_bv4_enter.value_namespace = name_space;
        ri_bv4_enter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ri-bv4-exit")
    {
        ri_bv4_exit = value;
        ri_bv4_exit.value_namespace = name_space;
        ri_bv4_exit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ri-bv4-redistribute")
    {
        ri_bv4_redistribute = value;
        ri_bv4_redistribute.value_namespace = name_space;
        ri_bv4_redistribute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-enter")
    {
        ldp_enter = value;
        ldp_enter.value_namespace = name_space;
        ldp_enter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-exit")
    {
        ldp_exit = value;
        ldp_exit.value_namespace = name_space;
        ldp_exit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsd-enter")
    {
        lsd_enter = value;
        lsd_enter.value_namespace = name_space;
        lsd_enter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsd-exit")
    {
        lsd_exit = value;
        lsd_exit.value_namespace = name_space;
        lsd_exit.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-origin")
    {
        route_origin.yfilter = yfilter;
    }
    if(value_path == "ri-bv4-enter")
    {
        ri_bv4_enter.yfilter = yfilter;
    }
    if(value_path == "ri-bv4-exit")
    {
        ri_bv4_exit.yfilter = yfilter;
    }
    if(value_path == "ri-bv4-redistribute")
    {
        ri_bv4_redistribute.yfilter = yfilter;
    }
    if(value_path == "ldp-enter")
    {
        ldp_enter.yfilter = yfilter;
    }
    if(value_path == "ldp-exit")
    {
        ldp_exit.yfilter = yfilter;
    }
    if(value_path == "lsd-enter")
    {
        lsd_enter.yfilter = yfilter;
    }
    if(value_path == "lsd-exit")
    {
        lsd_exit.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lc-ip" || name == "lc-mpls" || name == "route-origin" || name == "ri-bv4-enter" || name == "ri-bv4-exit" || name == "ri-bv4-redistribute" || name == "ldp-enter" || name == "ldp-exit" || name == "lsd-enter" || name == "lsd-exit")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp::LcIp()
    :
    node_name{YType::str, "node-name"},
    speed{YType::enumeration, "speed"},
    fib_complete{YType::str, "fib-complete"}
{

    yang_name = "lc-ip"; yang_parent_name = "time-line"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp::~LcIp()
{
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| speed.is_set
	|| fib_complete.is_set;
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(fib_complete.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lc-ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (fib_complete.is_set || is_set(fib_complete.yfilter)) leaf_name_data.push_back(fib_complete.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fib-complete")
    {
        fib_complete = value;
        fib_complete.value_namespace = name_space;
        fib_complete.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "fib-complete")
    {
        fib_complete.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-name" || name == "speed" || name == "fib-complete")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls::LcMpls()
    :
    node_name{YType::str, "node-name"},
    speed{YType::enumeration, "speed"},
    fib_complete{YType::str, "fib-complete"}
{

    yang_name = "lc-mpls"; yang_parent_name = "time-line"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls::~LcMpls()
{
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| speed.is_set
	|| fib_complete.is_set;
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(fib_complete.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lc-mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (fib_complete.is_set || is_set(fib_complete.yfilter)) leaf_name_data.push_back(fib_complete.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fib-complete")
    {
        fib_complete = value;
        fib_complete.value_namespace = name_space;
        fib_complete.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "fib-complete")
    {
        fib_complete.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-name" || name == "speed" || name == "fib-complete")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed::LsaProcessed()
    :
    lsa_id{YType::str, "lsa-id"},
    sequence_number{YType::str, "sequence-number"},
    lsa_type{YType::enumeration, "lsa-type"},
    origin_router_id{YType::str, "origin-router-id"},
    change_type{YType::enumeration, "change-type"},
    reception_time{YType::str, "reception-time"}
{

    yang_name = "lsa-processed"; yang_parent_name = "prefix-event-offline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed::~LsaProcessed()
{
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed::has_data() const
{
    if (is_presence_container) return true;
    return lsa_id.is_set
	|| sequence_number.is_set
	|| lsa_type.is_set
	|| origin_router_id.is_set
	|| change_type.is_set
	|| reception_time.is_set;
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(origin_router_id.yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(reception_time.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-processed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (origin_router_id.is_set || is_set(origin_router_id.yfilter)) leaf_name_data.push_back(origin_router_id.get_name_leafdata());
    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (reception_time.is_set || is_set(reception_time.yfilter)) leaf_name_data.push_back(reception_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin-router-id")
    {
        origin_router_id = value;
        origin_router_id.value_namespace = name_space;
        origin_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reception-time")
    {
        reception_time = value;
        reception_time.value_namespace = name_space;
        reception_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "origin-router-id")
    {
        origin_router_id.yfilter = yfilter;
    }
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "reception-time")
    {
        reception_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-id" || name == "sequence-number" || name == "lsa-type" || name == "origin-router-id" || name == "change-type" || name == "reception-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventStatistics::SummaryExternalEventStatistics()
    :
    inter_area_routes{YType::uint32, "inter-area-routes"},
    inter_area_added{YType::uint32, "inter-area-added"},
    inter_area_modified{YType::uint32, "inter-area-modified"},
    inter_area_deleted{YType::uint32, "inter-area-deleted"},
    inter_area_critical{YType::uint32, "inter-area-critical"},
    inter_area_high{YType::uint32, "inter-area-high"},
    inter_area_medium{YType::uint32, "inter-area-medium"},
    inter_area_low{YType::uint32, "inter-area-low"},
    external_routes{YType::uint32, "external-routes"},
    external_added{YType::uint32, "external-added"},
    external_modified{YType::uint32, "external-modified"},
    external_deleted{YType::uint32, "external-deleted"},
    external_critical{YType::uint32, "external-critical"},
    external_high{YType::uint32, "external-high"},
    external_medium{YType::uint32, "external-medium"},
    external_low{YType::uint32, "external-low"}
{

    yang_name = "summary-external-event-statistics"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventStatistics::~SummaryExternalEventStatistics()
{
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventStatistics::has_data() const
{
    if (is_presence_container) return true;
    return inter_area_routes.is_set
	|| inter_area_added.is_set
	|| inter_area_modified.is_set
	|| inter_area_deleted.is_set
	|| inter_area_critical.is_set
	|| inter_area_high.is_set
	|| inter_area_medium.is_set
	|| inter_area_low.is_set
	|| external_routes.is_set
	|| external_added.is_set
	|| external_modified.is_set
	|| external_deleted.is_set
	|| external_critical.is_set
	|| external_high.is_set
	|| external_medium.is_set
	|| external_low.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inter_area_routes.yfilter)
	|| ydk::is_set(inter_area_added.yfilter)
	|| ydk::is_set(inter_area_modified.yfilter)
	|| ydk::is_set(inter_area_deleted.yfilter)
	|| ydk::is_set(inter_area_critical.yfilter)
	|| ydk::is_set(inter_area_high.yfilter)
	|| ydk::is_set(inter_area_medium.yfilter)
	|| ydk::is_set(inter_area_low.yfilter)
	|| ydk::is_set(external_routes.yfilter)
	|| ydk::is_set(external_added.yfilter)
	|| ydk::is_set(external_modified.yfilter)
	|| ydk::is_set(external_deleted.yfilter)
	|| ydk::is_set(external_critical.yfilter)
	|| ydk::is_set(external_high.yfilter)
	|| ydk::is_set(external_medium.yfilter)
	|| ydk::is_set(external_low.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SummaryExternalEventStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-external-event-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ospf::Instances::Instance::SummaryExternalEventStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inter_area_routes.is_set || is_set(inter_area_routes.yfilter)) leaf_name_data.push_back(inter_area_routes.get_name_leafdata());
    if (inter_area_added.is_set || is_set(inter_area_added.yfilter)) leaf_name_data.push_back(inter_area_added.get_name_leafdata());
    if (inter_area_modified.is_set || is_set(inter_area_modified.yfilter)) leaf_name_data.push_back(inter_area_modified.get_name_leafdata());
    if (inter_area_deleted.is_set || is_set(inter_area_deleted.yfilter)) leaf_name_data.push_back(inter_area_deleted.get_name_leafdata());
    if (inter_area_critical.is_set || is_set(inter_area_critical.yfilter)) leaf_name_data.push_back(inter_area_critical.get_name_leafdata());
    if (inter_area_high.is_set || is_set(inter_area_high.yfilter)) leaf_name_data.push_back(inter_area_high.get_name_leafdata());
    if (inter_area_medium.is_set || is_set(inter_area_medium.yfilter)) leaf_name_data.push_back(inter_area_medium.get_name_leafdata());
    if (inter_area_low.is_set || is_set(inter_area_low.yfilter)) leaf_name_data.push_back(inter_area_low.get_name_leafdata());
    if (external_routes.is_set || is_set(external_routes.yfilter)) leaf_name_data.push_back(external_routes.get_name_leafdata());
    if (external_added.is_set || is_set(external_added.yfilter)) leaf_name_data.push_back(external_added.get_name_leafdata());
    if (external_modified.is_set || is_set(external_modified.yfilter)) leaf_name_data.push_back(external_modified.get_name_leafdata());
    if (external_deleted.is_set || is_set(external_deleted.yfilter)) leaf_name_data.push_back(external_deleted.get_name_leafdata());
    if (external_critical.is_set || is_set(external_critical.yfilter)) leaf_name_data.push_back(external_critical.get_name_leafdata());
    if (external_high.is_set || is_set(external_high.yfilter)) leaf_name_data.push_back(external_high.get_name_leafdata());
    if (external_medium.is_set || is_set(external_medium.yfilter)) leaf_name_data.push_back(external_medium.get_name_leafdata());
    if (external_low.is_set || is_set(external_low.yfilter)) leaf_name_data.push_back(external_low.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ospf::Instances::Instance::SummaryExternalEventStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ospf::Instances::Instance::SummaryExternalEventStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inter-area-routes")
    {
        inter_area_routes = value;
        inter_area_routes.value_namespace = name_space;
        inter_area_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-area-added")
    {
        inter_area_added = value;
        inter_area_added.value_namespace = name_space;
        inter_area_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-area-modified")
    {
        inter_area_modified = value;
        inter_area_modified.value_namespace = name_space;
        inter_area_modified.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-area-deleted")
    {
        inter_area_deleted = value;
        inter_area_deleted.value_namespace = name_space;
        inter_area_deleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-area-critical")
    {
        inter_area_critical = value;
        inter_area_critical.value_namespace = name_space;
        inter_area_critical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-area-high")
    {
        inter_area_high = value;
        inter_area_high.value_namespace = name_space;
        inter_area_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-area-medium")
    {
        inter_area_medium = value;
        inter_area_medium.value_namespace = name_space;
        inter_area_medium.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-area-low")
    {
        inter_area_low = value;
        inter_area_low.value_namespace = name_space;
        inter_area_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-routes")
    {
        external_routes = value;
        external_routes.value_namespace = name_space;
        external_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-added")
    {
        external_added = value;
        external_added.value_namespace = name_space;
        external_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-modified")
    {
        external_modified = value;
        external_modified.value_namespace = name_space;
        external_modified.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-deleted")
    {
        external_deleted = value;
        external_deleted.value_namespace = name_space;
        external_deleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-critical")
    {
        external_critical = value;
        external_critical.value_namespace = name_space;
        external_critical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-high")
    {
        external_high = value;
        external_high.value_namespace = name_space;
        external_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-medium")
    {
        external_medium = value;
        external_medium.value_namespace = name_space;
        external_medium.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-low")
    {
        external_low = value;
        external_low.value_namespace = name_space;
        external_low.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inter-area-routes")
    {
        inter_area_routes.yfilter = yfilter;
    }
    if(value_path == "inter-area-added")
    {
        inter_area_added.yfilter = yfilter;
    }
    if(value_path == "inter-area-modified")
    {
        inter_area_modified.yfilter = yfilter;
    }
    if(value_path == "inter-area-deleted")
    {
        inter_area_deleted.yfilter = yfilter;
    }
    if(value_path == "inter-area-critical")
    {
        inter_area_critical.yfilter = yfilter;
    }
    if(value_path == "inter-area-high")
    {
        inter_area_high.yfilter = yfilter;
    }
    if(value_path == "inter-area-medium")
    {
        inter_area_medium.yfilter = yfilter;
    }
    if(value_path == "inter-area-low")
    {
        inter_area_low.yfilter = yfilter;
    }
    if(value_path == "external-routes")
    {
        external_routes.yfilter = yfilter;
    }
    if(value_path == "external-added")
    {
        external_added.yfilter = yfilter;
    }
    if(value_path == "external-modified")
    {
        external_modified.yfilter = yfilter;
    }
    if(value_path == "external-deleted")
    {
        external_deleted.yfilter = yfilter;
    }
    if(value_path == "external-critical")
    {
        external_critical.yfilter = yfilter;
    }
    if(value_path == "external-high")
    {
        external_high.yfilter = yfilter;
    }
    if(value_path == "external-medium")
    {
        external_medium.yfilter = yfilter;
    }
    if(value_path == "external-low")
    {
        external_low.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inter-area-routes" || name == "inter-area-added" || name == "inter-area-modified" || name == "inter-area-deleted" || name == "inter-area-critical" || name == "inter-area-high" || name == "inter-area-medium" || name == "inter-area-low" || name == "external-routes" || name == "external-added" || name == "external-modified" || name == "external-deleted" || name == "external-critical" || name == "external-high" || name == "external-medium" || name == "external-low")
        return true;
    return false;
}

Rcmd::Server::Server()
    :
    normal(std::make_shared<Rcmd::Server::Normal>())
    , detail(std::make_shared<Rcmd::Server::Detail>())
{
    normal->parent = this;
    detail->parent = this;

    yang_name = "server"; yang_parent_name = "rcmd"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcmd::Server::~Server()
{
}

bool Rcmd::Server::has_data() const
{
    if (is_presence_container) return true;
    return (normal !=  nullptr && normal->has_data())
	|| (detail !=  nullptr && detail->has_data());
}

bool Rcmd::Server::has_operation() const
{
    return is_set(yfilter)
	|| (normal !=  nullptr && normal->has_operation())
	|| (detail !=  nullptr && detail->has_operation());
}

std::string Rcmd::Server::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "normal")
    {
        if(normal == nullptr)
        {
            normal = std::make_shared<Rcmd::Server::Normal>();
        }
        return normal;
    }

    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Rcmd::Server::Detail>();
        }
        return detail;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(normal != nullptr)
    {
        _children["normal"] = normal;
    }

    if(detail != nullptr)
    {
        _children["detail"] = detail;
    }

    return _children;
}

void Rcmd::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "normal" || name == "detail")
        return true;
    return false;
}

Rcmd::Server::Normal::Normal()
    :
    host_name{YType::str, "host-name"},
    status{YType::enumeration, "status"},
    max_events{YType::uint32, "max-events"},
    event_buffer_size{YType::uint32, "event-buffer-size"},
    monitoring_interval{YType::uint32, "monitoring-interval"},
    next_interval{YType::uint32, "next-interval"},
    max_interface_count{YType::uint32, "max-interface-count"},
    interface_count{YType::uint32, "interface-count"},
    node_rp_count{YType::uint32, "node-rp-count"},
    node_lc_count{YType::uint32, "node-lc-count"},
    diag_node_count{YType::uint32, "diag-node-count"},
    disabled_node_count{YType::uint32, "disabled-node-count"},
    in_active_node_count{YType::uint32, "in-active-node-count"},
    last_process_start_time{YType::str, "last-process-start-time"},
    last_process_duration{YType::str, "last-process-duration"},
    last_process_state{YType::enumeration, "last-process-state"},
    process_count{YType::uint32, "process-count"},
    spf_process_count{YType::uint32, "spf-process-count"},
    reports_archive_path{YType::str, "reports-archive-path"},
    reports_archive_node{YType::str, "reports-archive-node"},
    last_archival_status{YType::str, "last-archival-status"},
    last_archival_error{YType::str, "last-archival-error"},
    last_archival_error_time{YType::str, "last-archival-error-time"},
    archive_count{YType::uint32, "archive-count"},
    diagnostics_archive_path{YType::str, "diagnostics-archive-path"},
    diagnostics_archive_node{YType::str, "diagnostics-archive-node"}
        ,
    protocol_config(this, {})
    , server_detail(this, {})
{

    yang_name = "normal"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcmd::Server::Normal::~Normal()
{
}

bool Rcmd::Server::Normal::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<protocol_config.len(); index++)
    {
        if(protocol_config[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<server_detail.len(); index++)
    {
        if(server_detail[index]->has_data())
            return true;
    }
    return host_name.is_set
	|| status.is_set
	|| max_events.is_set
	|| event_buffer_size.is_set
	|| monitoring_interval.is_set
	|| next_interval.is_set
	|| max_interface_count.is_set
	|| interface_count.is_set
	|| node_rp_count.is_set
	|| node_lc_count.is_set
	|| diag_node_count.is_set
	|| disabled_node_count.is_set
	|| in_active_node_count.is_set
	|| last_process_start_time.is_set
	|| last_process_duration.is_set
	|| last_process_state.is_set
	|| process_count.is_set
	|| spf_process_count.is_set
	|| reports_archive_path.is_set
	|| reports_archive_node.is_set
	|| last_archival_status.is_set
	|| last_archival_error.is_set
	|| last_archival_error_time.is_set
	|| archive_count.is_set
	|| diagnostics_archive_path.is_set
	|| diagnostics_archive_node.is_set;
}

bool Rcmd::Server::Normal::has_operation() const
{
    for (std::size_t index=0; index<protocol_config.len(); index++)
    {
        if(protocol_config[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<server_detail.len(); index++)
    {
        if(server_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(host_name.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(max_events.yfilter)
	|| ydk::is_set(event_buffer_size.yfilter)
	|| ydk::is_set(monitoring_interval.yfilter)
	|| ydk::is_set(next_interval.yfilter)
	|| ydk::is_set(max_interface_count.yfilter)
	|| ydk::is_set(interface_count.yfilter)
	|| ydk::is_set(node_rp_count.yfilter)
	|| ydk::is_set(node_lc_count.yfilter)
	|| ydk::is_set(diag_node_count.yfilter)
	|| ydk::is_set(disabled_node_count.yfilter)
	|| ydk::is_set(in_active_node_count.yfilter)
	|| ydk::is_set(last_process_start_time.yfilter)
	|| ydk::is_set(last_process_duration.yfilter)
	|| ydk::is_set(last_process_state.yfilter)
	|| ydk::is_set(process_count.yfilter)
	|| ydk::is_set(spf_process_count.yfilter)
	|| ydk::is_set(reports_archive_path.yfilter)
	|| ydk::is_set(reports_archive_node.yfilter)
	|| ydk::is_set(last_archival_status.yfilter)
	|| ydk::is_set(last_archival_error.yfilter)
	|| ydk::is_set(last_archival_error_time.yfilter)
	|| ydk::is_set(archive_count.yfilter)
	|| ydk::is_set(diagnostics_archive_path.yfilter)
	|| ydk::is_set(diagnostics_archive_node.yfilter);
}

std::string Rcmd::Server::Normal::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/server/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Server::Normal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "normal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Server::Normal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (max_events.is_set || is_set(max_events.yfilter)) leaf_name_data.push_back(max_events.get_name_leafdata());
    if (event_buffer_size.is_set || is_set(event_buffer_size.yfilter)) leaf_name_data.push_back(event_buffer_size.get_name_leafdata());
    if (monitoring_interval.is_set || is_set(monitoring_interval.yfilter)) leaf_name_data.push_back(monitoring_interval.get_name_leafdata());
    if (next_interval.is_set || is_set(next_interval.yfilter)) leaf_name_data.push_back(next_interval.get_name_leafdata());
    if (max_interface_count.is_set || is_set(max_interface_count.yfilter)) leaf_name_data.push_back(max_interface_count.get_name_leafdata());
    if (interface_count.is_set || is_set(interface_count.yfilter)) leaf_name_data.push_back(interface_count.get_name_leafdata());
    if (node_rp_count.is_set || is_set(node_rp_count.yfilter)) leaf_name_data.push_back(node_rp_count.get_name_leafdata());
    if (node_lc_count.is_set || is_set(node_lc_count.yfilter)) leaf_name_data.push_back(node_lc_count.get_name_leafdata());
    if (diag_node_count.is_set || is_set(diag_node_count.yfilter)) leaf_name_data.push_back(diag_node_count.get_name_leafdata());
    if (disabled_node_count.is_set || is_set(disabled_node_count.yfilter)) leaf_name_data.push_back(disabled_node_count.get_name_leafdata());
    if (in_active_node_count.is_set || is_set(in_active_node_count.yfilter)) leaf_name_data.push_back(in_active_node_count.get_name_leafdata());
    if (last_process_start_time.is_set || is_set(last_process_start_time.yfilter)) leaf_name_data.push_back(last_process_start_time.get_name_leafdata());
    if (last_process_duration.is_set || is_set(last_process_duration.yfilter)) leaf_name_data.push_back(last_process_duration.get_name_leafdata());
    if (last_process_state.is_set || is_set(last_process_state.yfilter)) leaf_name_data.push_back(last_process_state.get_name_leafdata());
    if (process_count.is_set || is_set(process_count.yfilter)) leaf_name_data.push_back(process_count.get_name_leafdata());
    if (spf_process_count.is_set || is_set(spf_process_count.yfilter)) leaf_name_data.push_back(spf_process_count.get_name_leafdata());
    if (reports_archive_path.is_set || is_set(reports_archive_path.yfilter)) leaf_name_data.push_back(reports_archive_path.get_name_leafdata());
    if (reports_archive_node.is_set || is_set(reports_archive_node.yfilter)) leaf_name_data.push_back(reports_archive_node.get_name_leafdata());
    if (last_archival_status.is_set || is_set(last_archival_status.yfilter)) leaf_name_data.push_back(last_archival_status.get_name_leafdata());
    if (last_archival_error.is_set || is_set(last_archival_error.yfilter)) leaf_name_data.push_back(last_archival_error.get_name_leafdata());
    if (last_archival_error_time.is_set || is_set(last_archival_error_time.yfilter)) leaf_name_data.push_back(last_archival_error_time.get_name_leafdata());
    if (archive_count.is_set || is_set(archive_count.yfilter)) leaf_name_data.push_back(archive_count.get_name_leafdata());
    if (diagnostics_archive_path.is_set || is_set(diagnostics_archive_path.yfilter)) leaf_name_data.push_back(diagnostics_archive_path.get_name_leafdata());
    if (diagnostics_archive_node.is_set || is_set(diagnostics_archive_node.yfilter)) leaf_name_data.push_back(diagnostics_archive_node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Server::Normal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-config")
    {
        auto ent_ = std::make_shared<Rcmd::Server::Normal::ProtocolConfig>();
        ent_->parent = this;
        protocol_config.append(ent_);
        return ent_;
    }

    if(child_yang_name == "server-detail")
    {
        auto ent_ = std::make_shared<Rcmd::Server::Normal::ServerDetail>();
        ent_->parent = this;
        server_detail.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Server::Normal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : protocol_config.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : server_detail.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Server::Normal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-name")
    {
        host_name = value;
        host_name.value_namespace = name_space;
        host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-events")
    {
        max_events = value;
        max_events.value_namespace = name_space;
        max_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-buffer-size")
    {
        event_buffer_size = value;
        event_buffer_size.value_namespace = name_space;
        event_buffer_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitoring-interval")
    {
        monitoring_interval = value;
        monitoring_interval.value_namespace = name_space;
        monitoring_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-interval")
    {
        next_interval = value;
        next_interval.value_namespace = name_space;
        next_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-interface-count")
    {
        max_interface_count = value;
        max_interface_count.value_namespace = name_space;
        max_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-count")
    {
        interface_count = value;
        interface_count.value_namespace = name_space;
        interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-rp-count")
    {
        node_rp_count = value;
        node_rp_count.value_namespace = name_space;
        node_rp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-lc-count")
    {
        node_lc_count = value;
        node_lc_count.value_namespace = name_space;
        node_lc_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diag-node-count")
    {
        diag_node_count = value;
        diag_node_count.value_namespace = name_space;
        diag_node_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disabled-node-count")
    {
        disabled_node_count = value;
        disabled_node_count.value_namespace = name_space;
        disabled_node_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-active-node-count")
    {
        in_active_node_count = value;
        in_active_node_count.value_namespace = name_space;
        in_active_node_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-process-start-time")
    {
        last_process_start_time = value;
        last_process_start_time.value_namespace = name_space;
        last_process_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-process-duration")
    {
        last_process_duration = value;
        last_process_duration.value_namespace = name_space;
        last_process_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-process-state")
    {
        last_process_state = value;
        last_process_state.value_namespace = name_space;
        last_process_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-count")
    {
        process_count = value;
        process_count.value_namespace = name_space;
        process_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-process-count")
    {
        spf_process_count = value;
        spf_process_count.value_namespace = name_space;
        spf_process_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reports-archive-path")
    {
        reports_archive_path = value;
        reports_archive_path.value_namespace = name_space;
        reports_archive_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reports-archive-node")
    {
        reports_archive_node = value;
        reports_archive_node.value_namespace = name_space;
        reports_archive_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-archival-status")
    {
        last_archival_status = value;
        last_archival_status.value_namespace = name_space;
        last_archival_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-archival-error")
    {
        last_archival_error = value;
        last_archival_error.value_namespace = name_space;
        last_archival_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-archival-error-time")
    {
        last_archival_error_time = value;
        last_archival_error_time.value_namespace = name_space;
        last_archival_error_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "archive-count")
    {
        archive_count = value;
        archive_count.value_namespace = name_space;
        archive_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diagnostics-archive-path")
    {
        diagnostics_archive_path = value;
        diagnostics_archive_path.value_namespace = name_space;
        diagnostics_archive_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diagnostics-archive-node")
    {
        diagnostics_archive_node = value;
        diagnostics_archive_node.value_namespace = name_space;
        diagnostics_archive_node.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Server::Normal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "max-events")
    {
        max_events.yfilter = yfilter;
    }
    if(value_path == "event-buffer-size")
    {
        event_buffer_size.yfilter = yfilter;
    }
    if(value_path == "monitoring-interval")
    {
        monitoring_interval.yfilter = yfilter;
    }
    if(value_path == "next-interval")
    {
        next_interval.yfilter = yfilter;
    }
    if(value_path == "max-interface-count")
    {
        max_interface_count.yfilter = yfilter;
    }
    if(value_path == "interface-count")
    {
        interface_count.yfilter = yfilter;
    }
    if(value_path == "node-rp-count")
    {
        node_rp_count.yfilter = yfilter;
    }
    if(value_path == "node-lc-count")
    {
        node_lc_count.yfilter = yfilter;
    }
    if(value_path == "diag-node-count")
    {
        diag_node_count.yfilter = yfilter;
    }
    if(value_path == "disabled-node-count")
    {
        disabled_node_count.yfilter = yfilter;
    }
    if(value_path == "in-active-node-count")
    {
        in_active_node_count.yfilter = yfilter;
    }
    if(value_path == "last-process-start-time")
    {
        last_process_start_time.yfilter = yfilter;
    }
    if(value_path == "last-process-duration")
    {
        last_process_duration.yfilter = yfilter;
    }
    if(value_path == "last-process-state")
    {
        last_process_state.yfilter = yfilter;
    }
    if(value_path == "process-count")
    {
        process_count.yfilter = yfilter;
    }
    if(value_path == "spf-process-count")
    {
        spf_process_count.yfilter = yfilter;
    }
    if(value_path == "reports-archive-path")
    {
        reports_archive_path.yfilter = yfilter;
    }
    if(value_path == "reports-archive-node")
    {
        reports_archive_node.yfilter = yfilter;
    }
    if(value_path == "last-archival-status")
    {
        last_archival_status.yfilter = yfilter;
    }
    if(value_path == "last-archival-error")
    {
        last_archival_error.yfilter = yfilter;
    }
    if(value_path == "last-archival-error-time")
    {
        last_archival_error_time.yfilter = yfilter;
    }
    if(value_path == "archive-count")
    {
        archive_count.yfilter = yfilter;
    }
    if(value_path == "diagnostics-archive-path")
    {
        diagnostics_archive_path.yfilter = yfilter;
    }
    if(value_path == "diagnostics-archive-node")
    {
        diagnostics_archive_node.yfilter = yfilter;
    }
}

bool Rcmd::Server::Normal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-config" || name == "server-detail" || name == "host-name" || name == "status" || name == "max-events" || name == "event-buffer-size" || name == "monitoring-interval" || name == "next-interval" || name == "max-interface-count" || name == "interface-count" || name == "node-rp-count" || name == "node-lc-count" || name == "diag-node-count" || name == "disabled-node-count" || name == "in-active-node-count" || name == "last-process-start-time" || name == "last-process-duration" || name == "last-process-state" || name == "process-count" || name == "spf-process-count" || name == "reports-archive-path" || name == "reports-archive-node" || name == "last-archival-status" || name == "last-archival-error" || name == "last-archival-error-time" || name == "archive-count" || name == "diagnostics-archive-path" || name == "diagnostics-archive-node")
        return true;
    return false;
}

Rcmd::Server::Normal::ProtocolConfig::ProtocolConfig()
    :
    protocol_name{YType::str, "protocol-name"}
        ,
    priority(this, {})
{

    yang_name = "protocol-config"; yang_parent_name = "normal"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcmd::Server::Normal::ProtocolConfig::~ProtocolConfig()
{
}

bool Rcmd::Server::Normal::ProtocolConfig::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<priority.len(); index++)
    {
        if(priority[index]->has_data())
            return true;
    }
    return protocol_name.is_set;
}

bool Rcmd::Server::Normal::ProtocolConfig::has_operation() const
{
    for (std::size_t index=0; index<priority.len(); index++)
    {
        if(priority[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol_name.yfilter);
}

std::string Rcmd::Server::Normal::ProtocolConfig::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/server/normal/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Server::Normal::ProtocolConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Server::Normal::ProtocolConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Server::Normal::ProtocolConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        auto ent_ = std::make_shared<Rcmd::Server::Normal::ProtocolConfig::Priority>();
        ent_->parent = this;
        priority.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Server::Normal::ProtocolConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : priority.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Server::Normal::ProtocolConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Server::Normal::ProtocolConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
}

bool Rcmd::Server::Normal::ProtocolConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "protocol-name")
        return true;
    return false;
}

Rcmd::Server::Normal::ProtocolConfig::Priority::Priority()
    :
    priority_name{YType::enumeration, "priority-name"},
    threshold{YType::uint32, "threshold"},
    disable{YType::enumeration, "disable"}
{

    yang_name = "priority"; yang_parent_name = "protocol-config"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcmd::Server::Normal::ProtocolConfig::Priority::~Priority()
{
}

bool Rcmd::Server::Normal::ProtocolConfig::Priority::has_data() const
{
    if (is_presence_container) return true;
    return priority_name.is_set
	|| threshold.is_set
	|| disable.is_set;
}

bool Rcmd::Server::Normal::ProtocolConfig::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority_name.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Rcmd::Server::Normal::ProtocolConfig::Priority::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/server/normal/protocol-config/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Server::Normal::ProtocolConfig::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Server::Normal::ProtocolConfig::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_name.is_set || is_set(priority_name.yfilter)) leaf_name_data.push_back(priority_name.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Server::Normal::ProtocolConfig::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Server::Normal::ProtocolConfig::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Server::Normal::ProtocolConfig::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority-name")
    {
        priority_name = value;
        priority_name.value_namespace = name_space;
        priority_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Server::Normal::ProtocolConfig::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority-name")
    {
        priority_name.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Rcmd::Server::Normal::ProtocolConfig::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority-name" || name == "threshold" || name == "disable")
        return true;
    return false;
}

Rcmd::Server::Normal::ServerDetail::ServerDetail()
    :
    overload_suspend{YType::uint32, "overload-suspend"},
    memory_suspend{YType::uint32, "memory-suspend"}
        ,
    trace_information(this, {})
{

    yang_name = "server-detail"; yang_parent_name = "normal"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcmd::Server::Normal::ServerDetail::~ServerDetail()
{
}

bool Rcmd::Server::Normal::ServerDetail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trace_information.len(); index++)
    {
        if(trace_information[index]->has_data())
            return true;
    }
    return overload_suspend.is_set
	|| memory_suspend.is_set;
}

bool Rcmd::Server::Normal::ServerDetail::has_operation() const
{
    for (std::size_t index=0; index<trace_information.len(); index++)
    {
        if(trace_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(overload_suspend.yfilter)
	|| ydk::is_set(memory_suspend.yfilter);
}

std::string Rcmd::Server::Normal::ServerDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/server/normal/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Server::Normal::ServerDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Server::Normal::ServerDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (overload_suspend.is_set || is_set(overload_suspend.yfilter)) leaf_name_data.push_back(overload_suspend.get_name_leafdata());
    if (memory_suspend.is_set || is_set(memory_suspend.yfilter)) leaf_name_data.push_back(memory_suspend.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Server::Normal::ServerDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace-information")
    {
        auto ent_ = std::make_shared<Rcmd::Server::Normal::ServerDetail::TraceInformation>();
        ent_->parent = this;
        trace_information.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Server::Normal::ServerDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : trace_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Server::Normal::ServerDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "overload-suspend")
    {
        overload_suspend = value;
        overload_suspend.value_namespace = name_space;
        overload_suspend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory-suspend")
    {
        memory_suspend = value;
        memory_suspend.value_namespace = name_space;
        memory_suspend.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Server::Normal::ServerDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "overload-suspend")
    {
        overload_suspend.yfilter = yfilter;
    }
    if(value_path == "memory-suspend")
    {
        memory_suspend.yfilter = yfilter;
    }
}

bool Rcmd::Server::Normal::ServerDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace-information" || name == "overload-suspend" || name == "memory-suspend")
        return true;
    return false;
}

Rcmd::Server::Normal::ServerDetail::TraceInformation::TraceInformation()
    :
    trace_name{YType::str, "trace-name"},
    total_stats{YType::uint32, "total-stats"},
    last_run_stats{YType::uint32, "last-run-stats"},
    error_stats{YType::uint32, "error-stats"}
{

    yang_name = "trace-information"; yang_parent_name = "server-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcmd::Server::Normal::ServerDetail::TraceInformation::~TraceInformation()
{
}

bool Rcmd::Server::Normal::ServerDetail::TraceInformation::has_data() const
{
    if (is_presence_container) return true;
    return trace_name.is_set
	|| total_stats.is_set
	|| last_run_stats.is_set
	|| error_stats.is_set;
}

bool Rcmd::Server::Normal::ServerDetail::TraceInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trace_name.yfilter)
	|| ydk::is_set(total_stats.yfilter)
	|| ydk::is_set(last_run_stats.yfilter)
	|| ydk::is_set(error_stats.yfilter);
}

std::string Rcmd::Server::Normal::ServerDetail::TraceInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/server/normal/server-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Server::Normal::ServerDetail::TraceInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Server::Normal::ServerDetail::TraceInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trace_name.is_set || is_set(trace_name.yfilter)) leaf_name_data.push_back(trace_name.get_name_leafdata());
    if (total_stats.is_set || is_set(total_stats.yfilter)) leaf_name_data.push_back(total_stats.get_name_leafdata());
    if (last_run_stats.is_set || is_set(last_run_stats.yfilter)) leaf_name_data.push_back(last_run_stats.get_name_leafdata());
    if (error_stats.is_set || is_set(error_stats.yfilter)) leaf_name_data.push_back(error_stats.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Server::Normal::ServerDetail::TraceInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Server::Normal::ServerDetail::TraceInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Server::Normal::ServerDetail::TraceInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trace-name")
    {
        trace_name = value;
        trace_name.value_namespace = name_space;
        trace_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-stats")
    {
        total_stats = value;
        total_stats.value_namespace = name_space;
        total_stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-run-stats")
    {
        last_run_stats = value;
        last_run_stats.value_namespace = name_space;
        last_run_stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-stats")
    {
        error_stats = value;
        error_stats.value_namespace = name_space;
        error_stats.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Server::Normal::ServerDetail::TraceInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trace-name")
    {
        trace_name.yfilter = yfilter;
    }
    if(value_path == "total-stats")
    {
        total_stats.yfilter = yfilter;
    }
    if(value_path == "last-run-stats")
    {
        last_run_stats.yfilter = yfilter;
    }
    if(value_path == "error-stats")
    {
        error_stats.yfilter = yfilter;
    }
}

bool Rcmd::Server::Normal::ServerDetail::TraceInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace-name" || name == "total-stats" || name == "last-run-stats" || name == "error-stats")
        return true;
    return false;
}

Rcmd::Server::Detail::Detail()
    :
    host_name{YType::str, "host-name"},
    status{YType::enumeration, "status"},
    max_events{YType::uint32, "max-events"},
    event_buffer_size{YType::uint32, "event-buffer-size"},
    monitoring_interval{YType::uint32, "monitoring-interval"},
    next_interval{YType::uint32, "next-interval"},
    max_interface_count{YType::uint32, "max-interface-count"},
    interface_count{YType::uint32, "interface-count"},
    node_rp_count{YType::uint32, "node-rp-count"},
    node_lc_count{YType::uint32, "node-lc-count"},
    diag_node_count{YType::uint32, "diag-node-count"},
    disabled_node_count{YType::uint32, "disabled-node-count"},
    in_active_node_count{YType::uint32, "in-active-node-count"},
    last_process_start_time{YType::str, "last-process-start-time"},
    last_process_duration{YType::str, "last-process-duration"},
    last_process_state{YType::enumeration, "last-process-state"},
    process_count{YType::uint32, "process-count"},
    spf_process_count{YType::uint32, "spf-process-count"},
    reports_archive_path{YType::str, "reports-archive-path"},
    reports_archive_node{YType::str, "reports-archive-node"},
    last_archival_status{YType::str, "last-archival-status"},
    last_archival_error{YType::str, "last-archival-error"},
    last_archival_error_time{YType::str, "last-archival-error-time"},
    archive_count{YType::uint32, "archive-count"},
    diagnostics_archive_path{YType::str, "diagnostics-archive-path"},
    diagnostics_archive_node{YType::str, "diagnostics-archive-node"}
        ,
    protocol_config(this, {})
    , server_detail(this, {})
{

    yang_name = "detail"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcmd::Server::Detail::~Detail()
{
}

bool Rcmd::Server::Detail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<protocol_config.len(); index++)
    {
        if(protocol_config[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<server_detail.len(); index++)
    {
        if(server_detail[index]->has_data())
            return true;
    }
    return host_name.is_set
	|| status.is_set
	|| max_events.is_set
	|| event_buffer_size.is_set
	|| monitoring_interval.is_set
	|| next_interval.is_set
	|| max_interface_count.is_set
	|| interface_count.is_set
	|| node_rp_count.is_set
	|| node_lc_count.is_set
	|| diag_node_count.is_set
	|| disabled_node_count.is_set
	|| in_active_node_count.is_set
	|| last_process_start_time.is_set
	|| last_process_duration.is_set
	|| last_process_state.is_set
	|| process_count.is_set
	|| spf_process_count.is_set
	|| reports_archive_path.is_set
	|| reports_archive_node.is_set
	|| last_archival_status.is_set
	|| last_archival_error.is_set
	|| last_archival_error_time.is_set
	|| archive_count.is_set
	|| diagnostics_archive_path.is_set
	|| diagnostics_archive_node.is_set;
}

bool Rcmd::Server::Detail::has_operation() const
{
    for (std::size_t index=0; index<protocol_config.len(); index++)
    {
        if(protocol_config[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<server_detail.len(); index++)
    {
        if(server_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(host_name.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(max_events.yfilter)
	|| ydk::is_set(event_buffer_size.yfilter)
	|| ydk::is_set(monitoring_interval.yfilter)
	|| ydk::is_set(next_interval.yfilter)
	|| ydk::is_set(max_interface_count.yfilter)
	|| ydk::is_set(interface_count.yfilter)
	|| ydk::is_set(node_rp_count.yfilter)
	|| ydk::is_set(node_lc_count.yfilter)
	|| ydk::is_set(diag_node_count.yfilter)
	|| ydk::is_set(disabled_node_count.yfilter)
	|| ydk::is_set(in_active_node_count.yfilter)
	|| ydk::is_set(last_process_start_time.yfilter)
	|| ydk::is_set(last_process_duration.yfilter)
	|| ydk::is_set(last_process_state.yfilter)
	|| ydk::is_set(process_count.yfilter)
	|| ydk::is_set(spf_process_count.yfilter)
	|| ydk::is_set(reports_archive_path.yfilter)
	|| ydk::is_set(reports_archive_node.yfilter)
	|| ydk::is_set(last_archival_status.yfilter)
	|| ydk::is_set(last_archival_error.yfilter)
	|| ydk::is_set(last_archival_error_time.yfilter)
	|| ydk::is_set(archive_count.yfilter)
	|| ydk::is_set(diagnostics_archive_path.yfilter)
	|| ydk::is_set(diagnostics_archive_node.yfilter);
}

std::string Rcmd::Server::Detail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/server/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Server::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Server::Detail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (max_events.is_set || is_set(max_events.yfilter)) leaf_name_data.push_back(max_events.get_name_leafdata());
    if (event_buffer_size.is_set || is_set(event_buffer_size.yfilter)) leaf_name_data.push_back(event_buffer_size.get_name_leafdata());
    if (monitoring_interval.is_set || is_set(monitoring_interval.yfilter)) leaf_name_data.push_back(monitoring_interval.get_name_leafdata());
    if (next_interval.is_set || is_set(next_interval.yfilter)) leaf_name_data.push_back(next_interval.get_name_leafdata());
    if (max_interface_count.is_set || is_set(max_interface_count.yfilter)) leaf_name_data.push_back(max_interface_count.get_name_leafdata());
    if (interface_count.is_set || is_set(interface_count.yfilter)) leaf_name_data.push_back(interface_count.get_name_leafdata());
    if (node_rp_count.is_set || is_set(node_rp_count.yfilter)) leaf_name_data.push_back(node_rp_count.get_name_leafdata());
    if (node_lc_count.is_set || is_set(node_lc_count.yfilter)) leaf_name_data.push_back(node_lc_count.get_name_leafdata());
    if (diag_node_count.is_set || is_set(diag_node_count.yfilter)) leaf_name_data.push_back(diag_node_count.get_name_leafdata());
    if (disabled_node_count.is_set || is_set(disabled_node_count.yfilter)) leaf_name_data.push_back(disabled_node_count.get_name_leafdata());
    if (in_active_node_count.is_set || is_set(in_active_node_count.yfilter)) leaf_name_data.push_back(in_active_node_count.get_name_leafdata());
    if (last_process_start_time.is_set || is_set(last_process_start_time.yfilter)) leaf_name_data.push_back(last_process_start_time.get_name_leafdata());
    if (last_process_duration.is_set || is_set(last_process_duration.yfilter)) leaf_name_data.push_back(last_process_duration.get_name_leafdata());
    if (last_process_state.is_set || is_set(last_process_state.yfilter)) leaf_name_data.push_back(last_process_state.get_name_leafdata());
    if (process_count.is_set || is_set(process_count.yfilter)) leaf_name_data.push_back(process_count.get_name_leafdata());
    if (spf_process_count.is_set || is_set(spf_process_count.yfilter)) leaf_name_data.push_back(spf_process_count.get_name_leafdata());
    if (reports_archive_path.is_set || is_set(reports_archive_path.yfilter)) leaf_name_data.push_back(reports_archive_path.get_name_leafdata());
    if (reports_archive_node.is_set || is_set(reports_archive_node.yfilter)) leaf_name_data.push_back(reports_archive_node.get_name_leafdata());
    if (last_archival_status.is_set || is_set(last_archival_status.yfilter)) leaf_name_data.push_back(last_archival_status.get_name_leafdata());
    if (last_archival_error.is_set || is_set(last_archival_error.yfilter)) leaf_name_data.push_back(last_archival_error.get_name_leafdata());
    if (last_archival_error_time.is_set || is_set(last_archival_error_time.yfilter)) leaf_name_data.push_back(last_archival_error_time.get_name_leafdata());
    if (archive_count.is_set || is_set(archive_count.yfilter)) leaf_name_data.push_back(archive_count.get_name_leafdata());
    if (diagnostics_archive_path.is_set || is_set(diagnostics_archive_path.yfilter)) leaf_name_data.push_back(diagnostics_archive_path.get_name_leafdata());
    if (diagnostics_archive_node.is_set || is_set(diagnostics_archive_node.yfilter)) leaf_name_data.push_back(diagnostics_archive_node.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Server::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-config")
    {
        auto ent_ = std::make_shared<Rcmd::Server::Detail::ProtocolConfig>();
        ent_->parent = this;
        protocol_config.append(ent_);
        return ent_;
    }

    if(child_yang_name == "server-detail")
    {
        auto ent_ = std::make_shared<Rcmd::Server::Detail::ServerDetail>();
        ent_->parent = this;
        server_detail.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Server::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : protocol_config.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : server_detail.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Server::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "host-name")
    {
        host_name = value;
        host_name.value_namespace = name_space;
        host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-events")
    {
        max_events = value;
        max_events.value_namespace = name_space;
        max_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-buffer-size")
    {
        event_buffer_size = value;
        event_buffer_size.value_namespace = name_space;
        event_buffer_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "monitoring-interval")
    {
        monitoring_interval = value;
        monitoring_interval.value_namespace = name_space;
        monitoring_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-interval")
    {
        next_interval = value;
        next_interval.value_namespace = name_space;
        next_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-interface-count")
    {
        max_interface_count = value;
        max_interface_count.value_namespace = name_space;
        max_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-count")
    {
        interface_count = value;
        interface_count.value_namespace = name_space;
        interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-rp-count")
    {
        node_rp_count = value;
        node_rp_count.value_namespace = name_space;
        node_rp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-lc-count")
    {
        node_lc_count = value;
        node_lc_count.value_namespace = name_space;
        node_lc_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diag-node-count")
    {
        diag_node_count = value;
        diag_node_count.value_namespace = name_space;
        diag_node_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disabled-node-count")
    {
        disabled_node_count = value;
        disabled_node_count.value_namespace = name_space;
        disabled_node_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-active-node-count")
    {
        in_active_node_count = value;
        in_active_node_count.value_namespace = name_space;
        in_active_node_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-process-start-time")
    {
        last_process_start_time = value;
        last_process_start_time.value_namespace = name_space;
        last_process_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-process-duration")
    {
        last_process_duration = value;
        last_process_duration.value_namespace = name_space;
        last_process_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-process-state")
    {
        last_process_state = value;
        last_process_state.value_namespace = name_space;
        last_process_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-count")
    {
        process_count = value;
        process_count.value_namespace = name_space;
        process_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-process-count")
    {
        spf_process_count = value;
        spf_process_count.value_namespace = name_space;
        spf_process_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reports-archive-path")
    {
        reports_archive_path = value;
        reports_archive_path.value_namespace = name_space;
        reports_archive_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reports-archive-node")
    {
        reports_archive_node = value;
        reports_archive_node.value_namespace = name_space;
        reports_archive_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-archival-status")
    {
        last_archival_status = value;
        last_archival_status.value_namespace = name_space;
        last_archival_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-archival-error")
    {
        last_archival_error = value;
        last_archival_error.value_namespace = name_space;
        last_archival_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-archival-error-time")
    {
        last_archival_error_time = value;
        last_archival_error_time.value_namespace = name_space;
        last_archival_error_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "archive-count")
    {
        archive_count = value;
        archive_count.value_namespace = name_space;
        archive_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diagnostics-archive-path")
    {
        diagnostics_archive_path = value;
        diagnostics_archive_path.value_namespace = name_space;
        diagnostics_archive_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diagnostics-archive-node")
    {
        diagnostics_archive_node = value;
        diagnostics_archive_node.value_namespace = name_space;
        diagnostics_archive_node.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Server::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "max-events")
    {
        max_events.yfilter = yfilter;
    }
    if(value_path == "event-buffer-size")
    {
        event_buffer_size.yfilter = yfilter;
    }
    if(value_path == "monitoring-interval")
    {
        monitoring_interval.yfilter = yfilter;
    }
    if(value_path == "next-interval")
    {
        next_interval.yfilter = yfilter;
    }
    if(value_path == "max-interface-count")
    {
        max_interface_count.yfilter = yfilter;
    }
    if(value_path == "interface-count")
    {
        interface_count.yfilter = yfilter;
    }
    if(value_path == "node-rp-count")
    {
        node_rp_count.yfilter = yfilter;
    }
    if(value_path == "node-lc-count")
    {
        node_lc_count.yfilter = yfilter;
    }
    if(value_path == "diag-node-count")
    {
        diag_node_count.yfilter = yfilter;
    }
    if(value_path == "disabled-node-count")
    {
        disabled_node_count.yfilter = yfilter;
    }
    if(value_path == "in-active-node-count")
    {
        in_active_node_count.yfilter = yfilter;
    }
    if(value_path == "last-process-start-time")
    {
        last_process_start_time.yfilter = yfilter;
    }
    if(value_path == "last-process-duration")
    {
        last_process_duration.yfilter = yfilter;
    }
    if(value_path == "last-process-state")
    {
        last_process_state.yfilter = yfilter;
    }
    if(value_path == "process-count")
    {
        process_count.yfilter = yfilter;
    }
    if(value_path == "spf-process-count")
    {
        spf_process_count.yfilter = yfilter;
    }
    if(value_path == "reports-archive-path")
    {
        reports_archive_path.yfilter = yfilter;
    }
    if(value_path == "reports-archive-node")
    {
        reports_archive_node.yfilter = yfilter;
    }
    if(value_path == "last-archival-status")
    {
        last_archival_status.yfilter = yfilter;
    }
    if(value_path == "last-archival-error")
    {
        last_archival_error.yfilter = yfilter;
    }
    if(value_path == "last-archival-error-time")
    {
        last_archival_error_time.yfilter = yfilter;
    }
    if(value_path == "archive-count")
    {
        archive_count.yfilter = yfilter;
    }
    if(value_path == "diagnostics-archive-path")
    {
        diagnostics_archive_path.yfilter = yfilter;
    }
    if(value_path == "diagnostics-archive-node")
    {
        diagnostics_archive_node.yfilter = yfilter;
    }
}

bool Rcmd::Server::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-config" || name == "server-detail" || name == "host-name" || name == "status" || name == "max-events" || name == "event-buffer-size" || name == "monitoring-interval" || name == "next-interval" || name == "max-interface-count" || name == "interface-count" || name == "node-rp-count" || name == "node-lc-count" || name == "diag-node-count" || name == "disabled-node-count" || name == "in-active-node-count" || name == "last-process-start-time" || name == "last-process-duration" || name == "last-process-state" || name == "process-count" || name == "spf-process-count" || name == "reports-archive-path" || name == "reports-archive-node" || name == "last-archival-status" || name == "last-archival-error" || name == "last-archival-error-time" || name == "archive-count" || name == "diagnostics-archive-path" || name == "diagnostics-archive-node")
        return true;
    return false;
}

Rcmd::Server::Detail::ProtocolConfig::ProtocolConfig()
    :
    protocol_name{YType::str, "protocol-name"}
        ,
    priority(this, {})
{

    yang_name = "protocol-config"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcmd::Server::Detail::ProtocolConfig::~ProtocolConfig()
{
}

bool Rcmd::Server::Detail::ProtocolConfig::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<priority.len(); index++)
    {
        if(priority[index]->has_data())
            return true;
    }
    return protocol_name.is_set;
}

bool Rcmd::Server::Detail::ProtocolConfig::has_operation() const
{
    for (std::size_t index=0; index<priority.len(); index++)
    {
        if(priority[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol_name.yfilter);
}

std::string Rcmd::Server::Detail::ProtocolConfig::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/server/detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Server::Detail::ProtocolConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-config";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Server::Detail::ProtocolConfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Server::Detail::ProtocolConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        auto ent_ = std::make_shared<Rcmd::Server::Detail::ProtocolConfig::Priority>();
        ent_->parent = this;
        priority.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Server::Detail::ProtocolConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : priority.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Server::Detail::ProtocolConfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol-name")
    {
        protocol_name = value;
        protocol_name.value_namespace = name_space;
        protocol_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Server::Detail::ProtocolConfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol-name")
    {
        protocol_name.yfilter = yfilter;
    }
}

bool Rcmd::Server::Detail::ProtocolConfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "protocol-name")
        return true;
    return false;
}

Rcmd::Server::Detail::ProtocolConfig::Priority::Priority()
    :
    priority_name{YType::enumeration, "priority-name"},
    threshold{YType::uint32, "threshold"},
    disable{YType::enumeration, "disable"}
{

    yang_name = "priority"; yang_parent_name = "protocol-config"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcmd::Server::Detail::ProtocolConfig::Priority::~Priority()
{
}

bool Rcmd::Server::Detail::ProtocolConfig::Priority::has_data() const
{
    if (is_presence_container) return true;
    return priority_name.is_set
	|| threshold.is_set
	|| disable.is_set;
}

bool Rcmd::Server::Detail::ProtocolConfig::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority_name.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(disable.yfilter);
}

std::string Rcmd::Server::Detail::ProtocolConfig::Priority::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/server/detail/protocol-config/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Server::Detail::ProtocolConfig::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Server::Detail::ProtocolConfig::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority_name.is_set || is_set(priority_name.yfilter)) leaf_name_data.push_back(priority_name.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Server::Detail::ProtocolConfig::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Server::Detail::ProtocolConfig::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Server::Detail::ProtocolConfig::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority-name")
    {
        priority_name = value;
        priority_name.value_namespace = name_space;
        priority_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Server::Detail::ProtocolConfig::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority-name")
    {
        priority_name.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
}

bool Rcmd::Server::Detail::ProtocolConfig::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority-name" || name == "threshold" || name == "disable")
        return true;
    return false;
}

Rcmd::Server::Detail::ServerDetail::ServerDetail()
    :
    overload_suspend{YType::uint32, "overload-suspend"},
    memory_suspend{YType::uint32, "memory-suspend"}
        ,
    trace_information(this, {})
{

    yang_name = "server-detail"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcmd::Server::Detail::ServerDetail::~ServerDetail()
{
}

bool Rcmd::Server::Detail::ServerDetail::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trace_information.len(); index++)
    {
        if(trace_information[index]->has_data())
            return true;
    }
    return overload_suspend.is_set
	|| memory_suspend.is_set;
}

bool Rcmd::Server::Detail::ServerDetail::has_operation() const
{
    for (std::size_t index=0; index<trace_information.len(); index++)
    {
        if(trace_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(overload_suspend.yfilter)
	|| ydk::is_set(memory_suspend.yfilter);
}

std::string Rcmd::Server::Detail::ServerDetail::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/server/detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Server::Detail::ServerDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-detail";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Server::Detail::ServerDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (overload_suspend.is_set || is_set(overload_suspend.yfilter)) leaf_name_data.push_back(overload_suspend.get_name_leafdata());
    if (memory_suspend.is_set || is_set(memory_suspend.yfilter)) leaf_name_data.push_back(memory_suspend.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Server::Detail::ServerDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace-information")
    {
        auto ent_ = std::make_shared<Rcmd::Server::Detail::ServerDetail::TraceInformation>();
        ent_->parent = this;
        trace_information.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Server::Detail::ServerDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : trace_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Server::Detail::ServerDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "overload-suspend")
    {
        overload_suspend = value;
        overload_suspend.value_namespace = name_space;
        overload_suspend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory-suspend")
    {
        memory_suspend = value;
        memory_suspend.value_namespace = name_space;
        memory_suspend.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Server::Detail::ServerDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "overload-suspend")
    {
        overload_suspend.yfilter = yfilter;
    }
    if(value_path == "memory-suspend")
    {
        memory_suspend.yfilter = yfilter;
    }
}

bool Rcmd::Server::Detail::ServerDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace-information" || name == "overload-suspend" || name == "memory-suspend")
        return true;
    return false;
}

Rcmd::Server::Detail::ServerDetail::TraceInformation::TraceInformation()
    :
    trace_name{YType::str, "trace-name"},
    total_stats{YType::uint32, "total-stats"},
    last_run_stats{YType::uint32, "last-run-stats"},
    error_stats{YType::uint32, "error-stats"}
{

    yang_name = "trace-information"; yang_parent_name = "server-detail"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcmd::Server::Detail::ServerDetail::TraceInformation::~TraceInformation()
{
}

bool Rcmd::Server::Detail::ServerDetail::TraceInformation::has_data() const
{
    if (is_presence_container) return true;
    return trace_name.is_set
	|| total_stats.is_set
	|| last_run_stats.is_set
	|| error_stats.is_set;
}

bool Rcmd::Server::Detail::ServerDetail::TraceInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trace_name.yfilter)
	|| ydk::is_set(total_stats.yfilter)
	|| ydk::is_set(last_run_stats.yfilter)
	|| ydk::is_set(error_stats.yfilter);
}

std::string Rcmd::Server::Detail::ServerDetail::TraceInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/server/detail/server-detail/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Server::Detail::ServerDetail::TraceInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Server::Detail::ServerDetail::TraceInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trace_name.is_set || is_set(trace_name.yfilter)) leaf_name_data.push_back(trace_name.get_name_leafdata());
    if (total_stats.is_set || is_set(total_stats.yfilter)) leaf_name_data.push_back(total_stats.get_name_leafdata());
    if (last_run_stats.is_set || is_set(last_run_stats.yfilter)) leaf_name_data.push_back(last_run_stats.get_name_leafdata());
    if (error_stats.is_set || is_set(error_stats.yfilter)) leaf_name_data.push_back(error_stats.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Server::Detail::ServerDetail::TraceInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Server::Detail::ServerDetail::TraceInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Server::Detail::ServerDetail::TraceInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trace-name")
    {
        trace_name = value;
        trace_name.value_namespace = name_space;
        trace_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-stats")
    {
        total_stats = value;
        total_stats.value_namespace = name_space;
        total_stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-run-stats")
    {
        last_run_stats = value;
        last_run_stats.value_namespace = name_space;
        last_run_stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-stats")
    {
        error_stats = value;
        error_stats.value_namespace = name_space;
        error_stats.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Server::Detail::ServerDetail::TraceInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trace-name")
    {
        trace_name.yfilter = yfilter;
    }
    if(value_path == "total-stats")
    {
        total_stats.yfilter = yfilter;
    }
    if(value_path == "last-run-stats")
    {
        last_run_stats.yfilter = yfilter;
    }
    if(value_path == "error-stats")
    {
        error_stats.yfilter = yfilter;
    }
}

bool Rcmd::Server::Detail::ServerDetail::TraceInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace-name" || name == "total-stats" || name == "last-run-stats" || name == "error-stats")
        return true;
    return false;
}

Rcmd::Node::Node()
    :
    node_information(this, {})
{

    yang_name = "node"; yang_parent_name = "rcmd"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcmd::Node::~Node()
{
}

bool Rcmd::Node::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node_information.len(); index++)
    {
        if(node_information[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Node::has_operation() const
{
    for (std::size_t index=0; index<node_information.len(); index++)
    {
        if(node_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rcmd::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-information")
    {
        auto ent_ = std::make_shared<Rcmd::Node::NodeInformation>();
        ent_->parent = this;
        node_information.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : node_information.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-information")
        return true;
    return false;
}

Rcmd::Node::NodeInformation::NodeInformation()
    :
    node_id{YType::uint32, "node-id"},
    node_name{YType::str, "node-name"},
    rack_id{YType::uint32, "rack-id"},
    last_update_time{YType::str, "last-update-time"},
    fwd_referenced{YType::enumeration, "fwd-referenced"},
    node_type{YType::enumeration, "node-type"},
    software_state{YType::uint32, "software-state"},
    card_state{YType::uint32, "card-state"},
    node_state{YType::enumeration, "node-state"},
    status{YType::enumeration, "status"},
    diag_mode{YType::uint32, "diag-mode"},
    redundancy_state{YType::uint32, "redundancy-state"}
{

    yang_name = "node-information"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcmd::Node::NodeInformation::~NodeInformation()
{
}

bool Rcmd::Node::NodeInformation::has_data() const
{
    if (is_presence_container) return true;
    return node_id.is_set
	|| node_name.is_set
	|| rack_id.is_set
	|| last_update_time.is_set
	|| fwd_referenced.is_set
	|| node_type.is_set
	|| software_state.is_set
	|| card_state.is_set
	|| node_state.is_set
	|| status.is_set
	|| diag_mode.is_set
	|| redundancy_state.is_set;
}

bool Rcmd::Node::NodeInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(rack_id.yfilter)
	|| ydk::is_set(last_update_time.yfilter)
	|| ydk::is_set(fwd_referenced.yfilter)
	|| ydk::is_set(node_type.yfilter)
	|| ydk::is_set(software_state.yfilter)
	|| ydk::is_set(card_state.yfilter)
	|| ydk::is_set(node_state.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(diag_mode.yfilter)
	|| ydk::is_set(redundancy_state.yfilter);
}

std::string Rcmd::Node::NodeInformation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/node/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Node::NodeInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Node::NodeInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (rack_id.is_set || is_set(rack_id.yfilter)) leaf_name_data.push_back(rack_id.get_name_leafdata());
    if (last_update_time.is_set || is_set(last_update_time.yfilter)) leaf_name_data.push_back(last_update_time.get_name_leafdata());
    if (fwd_referenced.is_set || is_set(fwd_referenced.yfilter)) leaf_name_data.push_back(fwd_referenced.get_name_leafdata());
    if (node_type.is_set || is_set(node_type.yfilter)) leaf_name_data.push_back(node_type.get_name_leafdata());
    if (software_state.is_set || is_set(software_state.yfilter)) leaf_name_data.push_back(software_state.get_name_leafdata());
    if (card_state.is_set || is_set(card_state.yfilter)) leaf_name_data.push_back(card_state.get_name_leafdata());
    if (node_state.is_set || is_set(node_state.yfilter)) leaf_name_data.push_back(node_state.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (diag_mode.is_set || is_set(diag_mode.yfilter)) leaf_name_data.push_back(diag_mode.get_name_leafdata());
    if (redundancy_state.is_set || is_set(redundancy_state.yfilter)) leaf_name_data.push_back(redundancy_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Node::NodeInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Node::NodeInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Node::NodeInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack-id")
    {
        rack_id = value;
        rack_id.value_namespace = name_space;
        rack_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-time")
    {
        last_update_time = value;
        last_update_time.value_namespace = name_space;
        last_update_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwd-referenced")
    {
        fwd_referenced = value;
        fwd_referenced.value_namespace = name_space;
        fwd_referenced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-type")
    {
        node_type = value;
        node_type.value_namespace = name_space;
        node_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software-state")
    {
        software_state = value;
        software_state.value_namespace = name_space;
        software_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "card-state")
    {
        card_state = value;
        card_state.value_namespace = name_space;
        card_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-state")
    {
        node_state = value;
        node_state.value_namespace = name_space;
        node_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diag-mode")
    {
        diag_mode = value;
        diag_mode.value_namespace = name_space;
        diag_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-state")
    {
        redundancy_state = value;
        redundancy_state.value_namespace = name_space;
        redundancy_state.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Node::NodeInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "rack-id")
    {
        rack_id.yfilter = yfilter;
    }
    if(value_path == "last-update-time")
    {
        last_update_time.yfilter = yfilter;
    }
    if(value_path == "fwd-referenced")
    {
        fwd_referenced.yfilter = yfilter;
    }
    if(value_path == "node-type")
    {
        node_type.yfilter = yfilter;
    }
    if(value_path == "software-state")
    {
        software_state.yfilter = yfilter;
    }
    if(value_path == "card-state")
    {
        card_state.yfilter = yfilter;
    }
    if(value_path == "node-state")
    {
        node_state.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "diag-mode")
    {
        diag_mode.yfilter = yfilter;
    }
    if(value_path == "redundancy-state")
    {
        redundancy_state.yfilter = yfilter;
    }
}

bool Rcmd::Node::NodeInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-id" || name == "node-name" || name == "rack-id" || name == "last-update-time" || name == "fwd-referenced" || name == "node-type" || name == "software-state" || name == "card-state" || name == "node-state" || name == "status" || name == "diag-mode" || name == "redundancy-state")
        return true;
    return false;
}

Rcmd::Isis::Isis()
    :
    instances(std::make_shared<Rcmd::Isis::Instances>())
{
    instances->parent = this;

    yang_name = "isis"; yang_parent_name = "rcmd"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcmd::Isis::~Isis()
{
}

bool Rcmd::Isis::has_data() const
{
    if (is_presence_container) return true;
    return (instances !=  nullptr && instances->has_data());
}

bool Rcmd::Isis::has_operation() const
{
    return is_set(yfilter)
	|| (instances !=  nullptr && instances->has_operation());
}

std::string Rcmd::Isis::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instances")
    {
        if(instances == nullptr)
        {
            instances = std::make_shared<Rcmd::Isis::Instances>();
        }
        return instances;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(instances != nullptr)
    {
        _children["instances"] = instances;
    }

    return _children;
}

void Rcmd::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instances")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instances()
    :
    instance(this, {"instance_name"})
{

    yang_name = "instances"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcmd::Isis::Instances::~Instances()
{
}

bool Rcmd::Isis::Instances::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Isis::Instances::has_operation() const
{
    for (std::size_t index=0; index<instance.len(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rcmd::Isis::Instances::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/isis/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Isis::Instances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance>();
        ent_->parent = this;
        instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : instance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Isis::Instances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Isis::Instances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Isis::Instances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::Instance()
    :
    instance_name{YType::str, "instance-name"}
        ,
    ipfrr_event_summaries(std::make_shared<Rcmd::Isis::Instances::Instance::IpfrrEventSummaries>())
    , prefix_event_statistics(std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventStatistics>())
    , spf_run_summaries(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries>())
    , ipfrr_event_offlines(std::make_shared<Rcmd::Isis::Instances::Instance::IpfrrEventOfflines>())
    , spf_run_offlines(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines>())
    , prefix_event_summaries(std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventSummaries>())
    , prefix_event_offlines(std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventOfflines>())
    , lsp_regenerateds(std::make_shared<Rcmd::Isis::Instances::Instance::LspRegenerateds>())
{
    ipfrr_event_summaries->parent = this;
    prefix_event_statistics->parent = this;
    spf_run_summaries->parent = this;
    ipfrr_event_offlines->parent = this;
    spf_run_offlines->parent = this;
    prefix_event_summaries->parent = this;
    prefix_event_offlines->parent = this;
    lsp_regenerateds->parent = this;

    yang_name = "instance"; yang_parent_name = "instances"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcmd::Isis::Instances::Instance::~Instance()
{
}

bool Rcmd::Isis::Instances::Instance::has_data() const
{
    if (is_presence_container) return true;
    return instance_name.is_set
	|| (ipfrr_event_summaries !=  nullptr && ipfrr_event_summaries->has_data())
	|| (prefix_event_statistics !=  nullptr && prefix_event_statistics->has_data())
	|| (spf_run_summaries !=  nullptr && spf_run_summaries->has_data())
	|| (ipfrr_event_offlines !=  nullptr && ipfrr_event_offlines->has_data())
	|| (spf_run_offlines !=  nullptr && spf_run_offlines->has_data())
	|| (prefix_event_summaries !=  nullptr && prefix_event_summaries->has_data())
	|| (prefix_event_offlines !=  nullptr && prefix_event_offlines->has_data())
	|| (lsp_regenerateds !=  nullptr && lsp_regenerateds->has_data());
}

bool Rcmd::Isis::Instances::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| (ipfrr_event_summaries !=  nullptr && ipfrr_event_summaries->has_operation())
	|| (prefix_event_statistics !=  nullptr && prefix_event_statistics->has_operation())
	|| (spf_run_summaries !=  nullptr && spf_run_summaries->has_operation())
	|| (ipfrr_event_offlines !=  nullptr && ipfrr_event_offlines->has_operation())
	|| (spf_run_offlines !=  nullptr && spf_run_offlines->has_operation())
	|| (prefix_event_summaries !=  nullptr && prefix_event_summaries->has_operation())
	|| (prefix_event_offlines !=  nullptr && prefix_event_offlines->has_operation())
	|| (lsp_regenerateds !=  nullptr && lsp_regenerateds->has_operation());
}

std::string Rcmd::Isis::Instances::Instance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/isis/instances/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Isis::Instances::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    ADD_KEY_TOKEN(instance_name, "instance-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipfrr-event-summaries")
    {
        if(ipfrr_event_summaries == nullptr)
        {
            ipfrr_event_summaries = std::make_shared<Rcmd::Isis::Instances::Instance::IpfrrEventSummaries>();
        }
        return ipfrr_event_summaries;
    }

    if(child_yang_name == "prefix-event-statistics")
    {
        if(prefix_event_statistics == nullptr)
        {
            prefix_event_statistics = std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventStatistics>();
        }
        return prefix_event_statistics;
    }

    if(child_yang_name == "spf-run-summaries")
    {
        if(spf_run_summaries == nullptr)
        {
            spf_run_summaries = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries>();
        }
        return spf_run_summaries;
    }

    if(child_yang_name == "ipfrr-event-offlines")
    {
        if(ipfrr_event_offlines == nullptr)
        {
            ipfrr_event_offlines = std::make_shared<Rcmd::Isis::Instances::Instance::IpfrrEventOfflines>();
        }
        return ipfrr_event_offlines;
    }

    if(child_yang_name == "spf-run-offlines")
    {
        if(spf_run_offlines == nullptr)
        {
            spf_run_offlines = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines>();
        }
        return spf_run_offlines;
    }

    if(child_yang_name == "prefix-event-summaries")
    {
        if(prefix_event_summaries == nullptr)
        {
            prefix_event_summaries = std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventSummaries>();
        }
        return prefix_event_summaries;
    }

    if(child_yang_name == "prefix-event-offlines")
    {
        if(prefix_event_offlines == nullptr)
        {
            prefix_event_offlines = std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventOfflines>();
        }
        return prefix_event_offlines;
    }

    if(child_yang_name == "lsp-regenerateds")
    {
        if(lsp_regenerateds == nullptr)
        {
            lsp_regenerateds = std::make_shared<Rcmd::Isis::Instances::Instance::LspRegenerateds>();
        }
        return lsp_regenerateds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipfrr_event_summaries != nullptr)
    {
        _children["ipfrr-event-summaries"] = ipfrr_event_summaries;
    }

    if(prefix_event_statistics != nullptr)
    {
        _children["prefix-event-statistics"] = prefix_event_statistics;
    }

    if(spf_run_summaries != nullptr)
    {
        _children["spf-run-summaries"] = spf_run_summaries;
    }

    if(ipfrr_event_offlines != nullptr)
    {
        _children["ipfrr-event-offlines"] = ipfrr_event_offlines;
    }

    if(spf_run_offlines != nullptr)
    {
        _children["spf-run-offlines"] = spf_run_offlines;
    }

    if(prefix_event_summaries != nullptr)
    {
        _children["prefix-event-summaries"] = prefix_event_summaries;
    }

    if(prefix_event_offlines != nullptr)
    {
        _children["prefix-event-offlines"] = prefix_event_offlines;
    }

    if(lsp_regenerateds != nullptr)
    {
        _children["lsp-regenerateds"] = lsp_regenerateds;
    }

    return _children;
}

void Rcmd::Isis::Instances::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance-name")
    {
        instance_name = value;
        instance_name.value_namespace = name_space;
        instance_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance-name")
    {
        instance_name.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipfrr-event-summaries" || name == "prefix-event-statistics" || name == "spf-run-summaries" || name == "ipfrr-event-offlines" || name == "spf-run-offlines" || name == "prefix-event-summaries" || name == "prefix-event-offlines" || name == "lsp-regenerateds" || name == "instance-name")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummaries()
    :
    ipfrr_event_summary(this, {"event_id"})
{

    yang_name = "ipfrr-event-summaries"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::~IpfrrEventSummaries()
{
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipfrr_event_summary.len(); index++)
    {
        if(ipfrr_event_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::has_operation() const
{
    for (std::size_t index=0; index<ipfrr_event_summary.len(); index++)
    {
        if(ipfrr_event_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipfrr-event-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipfrr-event-summary")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary>();
        ent_->parent = this;
        ipfrr_event_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipfrr_event_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipfrr-event-summary")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrEventSummary()
    :
    event_id{YType::uint32, "event-id"},
    event_id_xr{YType::uint32, "event-id-xr"},
    trigger_time{YType::str, "trigger-time"},
    trigger_spf_run{YType::uint32, "trigger-spf-run"},
    wait_time{YType::uint32, "wait-time"},
    start_time_offset{YType::str, "start-time-offset"},
    duration{YType::str, "duration"},
    completed_spf_run{YType::uint32, "completed-spf-run"},
    total_routes{YType::uint32, "total-routes"},
    fully_protected_routes{YType::uint32, "fully-protected-routes"},
    partially_protected_routes{YType::uint32, "partially-protected-routes"},
    coverage{YType::str, "coverage"}
        ,
    ipfrr_statistic(this, {})
    , remote_node(this, {})
{

    yang_name = "ipfrr-event-summary"; yang_parent_name = "ipfrr-event-summaries"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::~IpfrrEventSummary()
{
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipfrr_statistic.len(); index++)
    {
        if(ipfrr_statistic[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<remote_node.len(); index++)
    {
        if(remote_node[index]->has_data())
            return true;
    }
    return event_id.is_set
	|| event_id_xr.is_set
	|| trigger_time.is_set
	|| trigger_spf_run.is_set
	|| wait_time.is_set
	|| start_time_offset.is_set
	|| duration.is_set
	|| completed_spf_run.is_set
	|| total_routes.is_set
	|| fully_protected_routes.is_set
	|| partially_protected_routes.is_set
	|| coverage.is_set;
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::has_operation() const
{
    for (std::size_t index=0; index<ipfrr_statistic.len(); index++)
    {
        if(ipfrr_statistic[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<remote_node.len(); index++)
    {
        if(remote_node[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(event_id.yfilter)
	|| ydk::is_set(event_id_xr.yfilter)
	|| ydk::is_set(trigger_time.yfilter)
	|| ydk::is_set(trigger_spf_run.yfilter)
	|| ydk::is_set(wait_time.yfilter)
	|| ydk::is_set(start_time_offset.yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(completed_spf_run.yfilter)
	|| ydk::is_set(total_routes.yfilter)
	|| ydk::is_set(fully_protected_routes.yfilter)
	|| ydk::is_set(partially_protected_routes.yfilter)
	|| ydk::is_set(coverage.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipfrr-event-summary";
    ADD_KEY_TOKEN(event_id, "event-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_id.is_set || is_set(event_id.yfilter)) leaf_name_data.push_back(event_id.get_name_leafdata());
    if (event_id_xr.is_set || is_set(event_id_xr.yfilter)) leaf_name_data.push_back(event_id_xr.get_name_leafdata());
    if (trigger_time.is_set || is_set(trigger_time.yfilter)) leaf_name_data.push_back(trigger_time.get_name_leafdata());
    if (trigger_spf_run.is_set || is_set(trigger_spf_run.yfilter)) leaf_name_data.push_back(trigger_spf_run.get_name_leafdata());
    if (wait_time.is_set || is_set(wait_time.yfilter)) leaf_name_data.push_back(wait_time.get_name_leafdata());
    if (start_time_offset.is_set || is_set(start_time_offset.yfilter)) leaf_name_data.push_back(start_time_offset.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (completed_spf_run.is_set || is_set(completed_spf_run.yfilter)) leaf_name_data.push_back(completed_spf_run.get_name_leafdata());
    if (total_routes.is_set || is_set(total_routes.yfilter)) leaf_name_data.push_back(total_routes.get_name_leafdata());
    if (fully_protected_routes.is_set || is_set(fully_protected_routes.yfilter)) leaf_name_data.push_back(fully_protected_routes.get_name_leafdata());
    if (partially_protected_routes.is_set || is_set(partially_protected_routes.yfilter)) leaf_name_data.push_back(partially_protected_routes.get_name_leafdata());
    if (coverage.is_set || is_set(coverage.yfilter)) leaf_name_data.push_back(coverage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipfrr-statistic")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic>();
        ent_->parent = this;
        ipfrr_statistic.append(ent_);
        return ent_;
    }

    if(child_yang_name == "remote-node")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode>();
        ent_->parent = this;
        remote_node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipfrr_statistic.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : remote_node.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-id")
    {
        event_id = value;
        event_id.value_namespace = name_space;
        event_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-id-xr")
    {
        event_id_xr = value;
        event_id_xr.value_namespace = name_space;
        event_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-time")
    {
        trigger_time = value;
        trigger_time.value_namespace = name_space;
        trigger_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-spf-run")
    {
        trigger_spf_run = value;
        trigger_spf_run.value_namespace = name_space;
        trigger_spf_run.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-time")
    {
        wait_time = value;
        wait_time.value_namespace = name_space;
        wait_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time-offset")
    {
        start_time_offset = value;
        start_time_offset.value_namespace = name_space;
        start_time_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "completed-spf-run")
    {
        completed_spf_run = value;
        completed_spf_run.value_namespace = name_space;
        completed_spf_run.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-routes")
    {
        total_routes = value;
        total_routes.value_namespace = name_space;
        total_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fully-protected-routes")
    {
        fully_protected_routes = value;
        fully_protected_routes.value_namespace = name_space;
        fully_protected_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partially-protected-routes")
    {
        partially_protected_routes = value;
        partially_protected_routes.value_namespace = name_space;
        partially_protected_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coverage")
    {
        coverage = value;
        coverage.value_namespace = name_space;
        coverage.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-id")
    {
        event_id.yfilter = yfilter;
    }
    if(value_path == "event-id-xr")
    {
        event_id_xr.yfilter = yfilter;
    }
    if(value_path == "trigger-time")
    {
        trigger_time.yfilter = yfilter;
    }
    if(value_path == "trigger-spf-run")
    {
        trigger_spf_run.yfilter = yfilter;
    }
    if(value_path == "wait-time")
    {
        wait_time.yfilter = yfilter;
    }
    if(value_path == "start-time-offset")
    {
        start_time_offset.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "completed-spf-run")
    {
        completed_spf_run.yfilter = yfilter;
    }
    if(value_path == "total-routes")
    {
        total_routes.yfilter = yfilter;
    }
    if(value_path == "fully-protected-routes")
    {
        fully_protected_routes.yfilter = yfilter;
    }
    if(value_path == "partially-protected-routes")
    {
        partially_protected_routes.yfilter = yfilter;
    }
    if(value_path == "coverage")
    {
        coverage.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipfrr-statistic" || name == "remote-node" || name == "event-id" || name == "event-id-xr" || name == "trigger-time" || name == "trigger-spf-run" || name == "wait-time" || name == "start-time-offset" || name == "duration" || name == "completed-spf-run" || name == "total-routes" || name == "fully-protected-routes" || name == "partially-protected-routes" || name == "coverage")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic::IpfrrStatistic()
    :
    priority{YType::enumeration, "priority"},
    total_routes{YType::uint32, "total-routes"},
    fully_protected_routes{YType::uint32, "fully-protected-routes"},
    partially_protected_routes{YType::uint32, "partially-protected-routes"},
    coverage{YType::str, "coverage"},
    local_lfa_coverage{YType::str, "local-lfa-coverage"},
    remote_lfa_coverage{YType::str, "remote-lfa-coverage"},
    below_threshold{YType::boolean, "below-threshold"}
{

    yang_name = "ipfrr-statistic"; yang_parent_name = "ipfrr-event-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic::~IpfrrStatistic()
{
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic::has_data() const
{
    if (is_presence_container) return true;
    return priority.is_set
	|| total_routes.is_set
	|| fully_protected_routes.is_set
	|| partially_protected_routes.is_set
	|| coverage.is_set
	|| local_lfa_coverage.is_set
	|| remote_lfa_coverage.is_set
	|| below_threshold.is_set;
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(total_routes.yfilter)
	|| ydk::is_set(fully_protected_routes.yfilter)
	|| ydk::is_set(partially_protected_routes.yfilter)
	|| ydk::is_set(coverage.yfilter)
	|| ydk::is_set(local_lfa_coverage.yfilter)
	|| ydk::is_set(remote_lfa_coverage.yfilter)
	|| ydk::is_set(below_threshold.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipfrr-statistic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (total_routes.is_set || is_set(total_routes.yfilter)) leaf_name_data.push_back(total_routes.get_name_leafdata());
    if (fully_protected_routes.is_set || is_set(fully_protected_routes.yfilter)) leaf_name_data.push_back(fully_protected_routes.get_name_leafdata());
    if (partially_protected_routes.is_set || is_set(partially_protected_routes.yfilter)) leaf_name_data.push_back(partially_protected_routes.get_name_leafdata());
    if (coverage.is_set || is_set(coverage.yfilter)) leaf_name_data.push_back(coverage.get_name_leafdata());
    if (local_lfa_coverage.is_set || is_set(local_lfa_coverage.yfilter)) leaf_name_data.push_back(local_lfa_coverage.get_name_leafdata());
    if (remote_lfa_coverage.is_set || is_set(remote_lfa_coverage.yfilter)) leaf_name_data.push_back(remote_lfa_coverage.get_name_leafdata());
    if (below_threshold.is_set || is_set(below_threshold.yfilter)) leaf_name_data.push_back(below_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-routes")
    {
        total_routes = value;
        total_routes.value_namespace = name_space;
        total_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fully-protected-routes")
    {
        fully_protected_routes = value;
        fully_protected_routes.value_namespace = name_space;
        fully_protected_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partially-protected-routes")
    {
        partially_protected_routes = value;
        partially_protected_routes.value_namespace = name_space;
        partially_protected_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coverage")
    {
        coverage = value;
        coverage.value_namespace = name_space;
        coverage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-lfa-coverage")
    {
        local_lfa_coverage = value;
        local_lfa_coverage.value_namespace = name_space;
        local_lfa_coverage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-coverage")
    {
        remote_lfa_coverage = value;
        remote_lfa_coverage.value_namespace = name_space;
        remote_lfa_coverage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "below-threshold")
    {
        below_threshold = value;
        below_threshold.value_namespace = name_space;
        below_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "total-routes")
    {
        total_routes.yfilter = yfilter;
    }
    if(value_path == "fully-protected-routes")
    {
        fully_protected_routes.yfilter = yfilter;
    }
    if(value_path == "partially-protected-routes")
    {
        partially_protected_routes.yfilter = yfilter;
    }
    if(value_path == "coverage")
    {
        coverage.yfilter = yfilter;
    }
    if(value_path == "local-lfa-coverage")
    {
        local_lfa_coverage.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-coverage")
    {
        remote_lfa_coverage.yfilter = yfilter;
    }
    if(value_path == "below-threshold")
    {
        below_threshold.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "total-routes" || name == "fully-protected-routes" || name == "partially-protected-routes" || name == "coverage" || name == "local-lfa-coverage" || name == "remote-lfa-coverage" || name == "below-threshold")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::RemoteNode()
    :
    remote_node_id{YType::str, "remote-node-id"},
    interface_name{YType::str, "interface-name"},
    neighbour_address{YType::str, "neighbour-address"},
    path_count{YType::uint32, "path-count"},
    in_use_time{YType::str, "in-use-time"}
        ,
    primary_path(this, {})
{

    yang_name = "remote-node"; yang_parent_name = "ipfrr-event-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::~RemoteNode()
{
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<primary_path.len(); index++)
    {
        if(primary_path[index]->has_data())
            return true;
    }
    return remote_node_id.is_set
	|| interface_name.is_set
	|| neighbour_address.is_set
	|| path_count.is_set
	|| in_use_time.is_set;
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::has_operation() const
{
    for (std::size_t index=0; index<primary_path.len(); index++)
    {
        if(primary_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(remote_node_id.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbour_address.yfilter)
	|| ydk::is_set(path_count.yfilter)
	|| ydk::is_set(in_use_time.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-node";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (remote_node_id.is_set || is_set(remote_node_id.yfilter)) leaf_name_data.push_back(remote_node_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbour_address.is_set || is_set(neighbour_address.yfilter)) leaf_name_data.push_back(neighbour_address.get_name_leafdata());
    if (path_count.is_set || is_set(path_count.yfilter)) leaf_name_data.push_back(path_count.get_name_leafdata());
    if (in_use_time.is_set || is_set(in_use_time.yfilter)) leaf_name_data.push_back(in_use_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "primary-path")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath>();
        ent_->parent = this;
        primary_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : primary_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "remote-node-id")
    {
        remote_node_id = value;
        remote_node_id.value_namespace = name_space;
        remote_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address = value;
        neighbour_address.value_namespace = name_space;
        neighbour_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-count")
    {
        path_count = value;
        path_count.value_namespace = name_space;
        path_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-use-time")
    {
        in_use_time = value;
        in_use_time.value_namespace = name_space;
        in_use_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "remote-node-id")
    {
        remote_node_id.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address.yfilter = yfilter;
    }
    if(value_path == "path-count")
    {
        path_count.yfilter = yfilter;
    }
    if(value_path == "in-use-time")
    {
        in_use_time.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary-path" || name == "remote-node-id" || name == "interface-name" || name == "neighbour-address" || name == "path-count" || name == "in-use-time")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath::PrimaryPath()
    :
    interface_name{YType::str, "interface-name"},
    neighbour_address{YType::str, "neighbour-address"}
{

    yang_name = "primary-path"; yang_parent_name = "remote-node"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath::~PrimaryPath()
{
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| neighbour_address.is_set;
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbour_address.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbour_address.is_set || is_set(neighbour_address.yfilter)) leaf_name_data.push_back(neighbour_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address = value;
        neighbour_address.value_namespace = name_space;
        neighbour_address.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "neighbour-address")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::PrefixEventStatistics::PrefixEventStatistics()
    :
    prefix_event_statistic(this, {"prefix_info"})
{

    yang_name = "prefix-event-statistics"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::PrefixEventStatistics::~PrefixEventStatistics()
{
}

bool Rcmd::Isis::Instances::Instance::PrefixEventStatistics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefix_event_statistic.len(); index++)
    {
        if(prefix_event_statistic[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Isis::Instances::Instance::PrefixEventStatistics::has_operation() const
{
    for (std::size_t index=0; index<prefix_event_statistic.len(); index++)
    {
        if(prefix_event_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rcmd::Isis::Instances::Instance::PrefixEventStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-event-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::PrefixEventStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::PrefixEventStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-event-statistic")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic>();
        ent_->parent = this;
        prefix_event_statistic.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::PrefixEventStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prefix_event_statistic.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Isis::Instances::Instance::PrefixEventStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Isis::Instances::Instance::PrefixEventStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Isis::Instances::Instance::PrefixEventStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-event-statistic")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic::PrefixEventStatistic()
    :
    prefix_info{YType::str, "prefix-info"},
    prefix{YType::str, "prefix"},
    prefix_lenth{YType::uint32, "prefix-lenth"},
    last_event_time{YType::str, "last-event-time"},
    last_priority{YType::enumeration, "last-priority"},
    last_route_type{YType::enumeration, "last-route-type"},
    last_change_type{YType::enumeration, "last-change-type"},
    last_cost{YType::uint32, "last-cost"},
    critical_priority{YType::uint32, "critical-priority"},
    high_priority{YType::uint32, "high-priority"},
    medium_priority{YType::uint32, "medium-priority"},
    low_priority{YType::uint32, "low-priority"},
    add_count{YType::uint32, "add-count"},
    modify_count{YType::uint32, "modify-count"},
    delete_count{YType::uint32, "delete-count"},
    threshold_exceed_count{YType::uint32, "threshold-exceed-count"}
{

    yang_name = "prefix-event-statistic"; yang_parent_name = "prefix-event-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic::~PrefixEventStatistic()
{
}

bool Rcmd::Isis::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic::has_data() const
{
    if (is_presence_container) return true;
    return prefix_info.is_set
	|| prefix.is_set
	|| prefix_lenth.is_set
	|| last_event_time.is_set
	|| last_priority.is_set
	|| last_route_type.is_set
	|| last_change_type.is_set
	|| last_cost.is_set
	|| critical_priority.is_set
	|| high_priority.is_set
	|| medium_priority.is_set
	|| low_priority.is_set
	|| add_count.is_set
	|| modify_count.is_set
	|| delete_count.is_set
	|| threshold_exceed_count.is_set;
}

bool Rcmd::Isis::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_info.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_lenth.yfilter)
	|| ydk::is_set(last_event_time.yfilter)
	|| ydk::is_set(last_priority.yfilter)
	|| ydk::is_set(last_route_type.yfilter)
	|| ydk::is_set(last_change_type.yfilter)
	|| ydk::is_set(last_cost.yfilter)
	|| ydk::is_set(critical_priority.yfilter)
	|| ydk::is_set(high_priority.yfilter)
	|| ydk::is_set(medium_priority.yfilter)
	|| ydk::is_set(low_priority.yfilter)
	|| ydk::is_set(add_count.yfilter)
	|| ydk::is_set(modify_count.yfilter)
	|| ydk::is_set(delete_count.yfilter)
	|| ydk::is_set(threshold_exceed_count.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-event-statistic";
    ADD_KEY_TOKEN(prefix_info, "prefix-info");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_info.is_set || is_set(prefix_info.yfilter)) leaf_name_data.push_back(prefix_info.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_lenth.is_set || is_set(prefix_lenth.yfilter)) leaf_name_data.push_back(prefix_lenth.get_name_leafdata());
    if (last_event_time.is_set || is_set(last_event_time.yfilter)) leaf_name_data.push_back(last_event_time.get_name_leafdata());
    if (last_priority.is_set || is_set(last_priority.yfilter)) leaf_name_data.push_back(last_priority.get_name_leafdata());
    if (last_route_type.is_set || is_set(last_route_type.yfilter)) leaf_name_data.push_back(last_route_type.get_name_leafdata());
    if (last_change_type.is_set || is_set(last_change_type.yfilter)) leaf_name_data.push_back(last_change_type.get_name_leafdata());
    if (last_cost.is_set || is_set(last_cost.yfilter)) leaf_name_data.push_back(last_cost.get_name_leafdata());
    if (critical_priority.is_set || is_set(critical_priority.yfilter)) leaf_name_data.push_back(critical_priority.get_name_leafdata());
    if (high_priority.is_set || is_set(high_priority.yfilter)) leaf_name_data.push_back(high_priority.get_name_leafdata());
    if (medium_priority.is_set || is_set(medium_priority.yfilter)) leaf_name_data.push_back(medium_priority.get_name_leafdata());
    if (low_priority.is_set || is_set(low_priority.yfilter)) leaf_name_data.push_back(low_priority.get_name_leafdata());
    if (add_count.is_set || is_set(add_count.yfilter)) leaf_name_data.push_back(add_count.get_name_leafdata());
    if (modify_count.is_set || is_set(modify_count.yfilter)) leaf_name_data.push_back(modify_count.get_name_leafdata());
    if (delete_count.is_set || is_set(delete_count.yfilter)) leaf_name_data.push_back(delete_count.get_name_leafdata());
    if (threshold_exceed_count.is_set || is_set(threshold_exceed_count.yfilter)) leaf_name_data.push_back(threshold_exceed_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-info")
    {
        prefix_info = value;
        prefix_info.value_namespace = name_space;
        prefix_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-lenth")
    {
        prefix_lenth = value;
        prefix_lenth.value_namespace = name_space;
        prefix_lenth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-event-time")
    {
        last_event_time = value;
        last_event_time.value_namespace = name_space;
        last_event_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-priority")
    {
        last_priority = value;
        last_priority.value_namespace = name_space;
        last_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-route-type")
    {
        last_route_type = value;
        last_route_type.value_namespace = name_space;
        last_route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-change-type")
    {
        last_change_type = value;
        last_change_type.value_namespace = name_space;
        last_change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-cost")
    {
        last_cost = value;
        last_cost.value_namespace = name_space;
        last_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "critical-priority")
    {
        critical_priority = value;
        critical_priority.value_namespace = name_space;
        critical_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-priority")
    {
        high_priority = value;
        high_priority.value_namespace = name_space;
        high_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "medium-priority")
    {
        medium_priority = value;
        medium_priority.value_namespace = name_space;
        medium_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low-priority")
    {
        low_priority = value;
        low_priority.value_namespace = name_space;
        low_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "add-count")
    {
        add_count = value;
        add_count.value_namespace = name_space;
        add_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "modify-count")
    {
        modify_count = value;
        modify_count.value_namespace = name_space;
        modify_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delete-count")
    {
        delete_count = value;
        delete_count.value_namespace = name_space;
        delete_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-exceed-count")
    {
        threshold_exceed_count = value;
        threshold_exceed_count.value_namespace = name_space;
        threshold_exceed_count.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-info")
    {
        prefix_info.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-lenth")
    {
        prefix_lenth.yfilter = yfilter;
    }
    if(value_path == "last-event-time")
    {
        last_event_time.yfilter = yfilter;
    }
    if(value_path == "last-priority")
    {
        last_priority.yfilter = yfilter;
    }
    if(value_path == "last-route-type")
    {
        last_route_type.yfilter = yfilter;
    }
    if(value_path == "last-change-type")
    {
        last_change_type.yfilter = yfilter;
    }
    if(value_path == "last-cost")
    {
        last_cost.yfilter = yfilter;
    }
    if(value_path == "critical-priority")
    {
        critical_priority.yfilter = yfilter;
    }
    if(value_path == "high-priority")
    {
        high_priority.yfilter = yfilter;
    }
    if(value_path == "medium-priority")
    {
        medium_priority.yfilter = yfilter;
    }
    if(value_path == "low-priority")
    {
        low_priority.yfilter = yfilter;
    }
    if(value_path == "add-count")
    {
        add_count.yfilter = yfilter;
    }
    if(value_path == "modify-count")
    {
        modify_count.yfilter = yfilter;
    }
    if(value_path == "delete-count")
    {
        delete_count.yfilter = yfilter;
    }
    if(value_path == "threshold-exceed-count")
    {
        threshold_exceed_count.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-info" || name == "prefix" || name == "prefix-lenth" || name == "last-event-time" || name == "last-priority" || name == "last-route-type" || name == "last-change-type" || name == "last-cost" || name == "critical-priority" || name == "high-priority" || name == "medium-priority" || name == "low-priority" || name == "add-count" || name == "modify-count" || name == "delete-count" || name == "threshold-exceed-count")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummaries()
    :
    spf_run_summary(this, {"spf_run_number"})
{

    yang_name = "spf-run-summaries"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::~SpfRunSummaries()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<spf_run_summary.len(); index++)
    {
        if(spf_run_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::has_operation() const
{
    for (std::size_t index=0; index<spf_run_summary.len(); index++)
    {
        if(spf_run_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-run-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spf-run-summary")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary>();
        ent_->parent = this;
        spf_run_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : spf_run_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spf-run-summary")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfRunSummary()
    :
    spf_run_number{YType::uint32, "spf-run-number"},
    start_time{YType::str, "start-time"},
    wait_time{YType::uint32, "wait-time"},
    reason{YType::str, "reason"}
        ,
    spf_summary(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary>())
    , node_statistics(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::NodeStatistics>())
    , trigger_lsp(this, {})
    , priority(this, {})
    , lsp_processed(this, {})
    , lsp_regenerated(this, {})
{
    spf_summary->parent = this;
    node_statistics->parent = this;

    yang_name = "spf-run-summary"; yang_parent_name = "spf-run-summaries"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::~SpfRunSummary()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trigger_lsp.len(); index++)
    {
        if(trigger_lsp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<priority.len(); index++)
    {
        if(priority[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lsp_processed.len(); index++)
    {
        if(lsp_processed[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lsp_regenerated.len(); index++)
    {
        if(lsp_regenerated[index]->has_data())
            return true;
    }
    return spf_run_number.is_set
	|| start_time.is_set
	|| wait_time.is_set
	|| reason.is_set
	|| (spf_summary !=  nullptr && spf_summary->has_data())
	|| (node_statistics !=  nullptr && node_statistics->has_data());
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::has_operation() const
{
    for (std::size_t index=0; index<trigger_lsp.len(); index++)
    {
        if(trigger_lsp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<priority.len(); index++)
    {
        if(priority[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lsp_processed.len(); index++)
    {
        if(lsp_processed[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lsp_regenerated.len(); index++)
    {
        if(lsp_regenerated[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(spf_run_number.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(wait_time.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| (spf_summary !=  nullptr && spf_summary->has_operation())
	|| (node_statistics !=  nullptr && node_statistics->has_operation());
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-run-summary";
    ADD_KEY_TOKEN(spf_run_number, "spf-run-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (spf_run_number.is_set || is_set(spf_run_number.yfilter)) leaf_name_data.push_back(spf_run_number.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (wait_time.is_set || is_set(wait_time.yfilter)) leaf_name_data.push_back(wait_time.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spf-summary")
    {
        if(spf_summary == nullptr)
        {
            spf_summary = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary>();
        }
        return spf_summary;
    }

    if(child_yang_name == "node-statistics")
    {
        if(node_statistics == nullptr)
        {
            node_statistics = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::NodeStatistics>();
        }
        return node_statistics;
    }

    if(child_yang_name == "trigger-lsp")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::TriggerLsp>();
        ent_->parent = this;
        trigger_lsp.append(ent_);
        return ent_;
    }

    if(child_yang_name == "priority")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority>();
        ent_->parent = this;
        priority.append(ent_);
        return ent_;
    }

    if(child_yang_name == "lsp-processed")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspProcessed>();
        ent_->parent = this;
        lsp_processed.append(ent_);
        return ent_;
    }

    if(child_yang_name == "lsp-regenerated")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspRegenerated>();
        ent_->parent = this;
        lsp_regenerated.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(spf_summary != nullptr)
    {
        _children["spf-summary"] = spf_summary;
    }

    if(node_statistics != nullptr)
    {
        _children["node-statistics"] = node_statistics;
    }

    count_ = 0;
    for (auto ent_ : trigger_lsp.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : priority.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : lsp_processed.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : lsp_regenerated.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "spf-run-number")
    {
        spf_run_number = value;
        spf_run_number.value_namespace = name_space;
        spf_run_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-time")
    {
        wait_time = value;
        wait_time.value_namespace = name_space;
        wait_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "spf-run-number")
    {
        spf_run_number.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "wait-time")
    {
        wait_time.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spf-summary" || name == "node-statistics" || name == "trigger-lsp" || name == "priority" || name == "lsp-processed" || name == "lsp-regenerated" || name == "spf-run-number" || name == "start-time" || name == "wait-time" || name == "reason")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::SpfSummary()
    :
    topology{YType::uint32, "topology"},
    isis_level{YType::enumeration, "isis-level"},
    type{YType::enumeration, "type"},
    threshold_exceeded{YType::boolean, "threshold-exceeded"},
    state{YType::enumeration, "state"},
    is_data_complete{YType::boolean, "is-data-complete"},
    trigger_time{YType::str, "trigger-time"},
    duration{YType::str, "duration"},
    total_lsp_changes{YType::uint16, "total-lsp-changes"}
        ,
    priority_summary(this, {})
{

    yang_name = "spf-summary"; yang_parent_name = "spf-run-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::~SpfSummary()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<priority_summary.len(); index++)
    {
        if(priority_summary[index]->has_data())
            return true;
    }
    return topology.is_set
	|| isis_level.is_set
	|| type.is_set
	|| threshold_exceeded.is_set
	|| state.is_set
	|| is_data_complete.is_set
	|| trigger_time.is_set
	|| duration.is_set
	|| total_lsp_changes.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::has_operation() const
{
    for (std::size_t index=0; index<priority_summary.len(); index++)
    {
        if(priority_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(topology.yfilter)
	|| ydk::is_set(isis_level.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(threshold_exceeded.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(is_data_complete.yfilter)
	|| ydk::is_set(trigger_time.yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(total_lsp_changes.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (topology.is_set || is_set(topology.yfilter)) leaf_name_data.push_back(topology.get_name_leafdata());
    if (isis_level.is_set || is_set(isis_level.yfilter)) leaf_name_data.push_back(isis_level.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (threshold_exceeded.is_set || is_set(threshold_exceeded.yfilter)) leaf_name_data.push_back(threshold_exceeded.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (is_data_complete.is_set || is_set(is_data_complete.yfilter)) leaf_name_data.push_back(is_data_complete.get_name_leafdata());
    if (trigger_time.is_set || is_set(trigger_time.yfilter)) leaf_name_data.push_back(trigger_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (total_lsp_changes.is_set || is_set(total_lsp_changes.yfilter)) leaf_name_data.push_back(total_lsp_changes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority-summary")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary>();
        ent_->parent = this;
        priority_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : priority_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "topology")
    {
        topology = value;
        topology.value_namespace = name_space;
        topology.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-level")
    {
        isis_level = value;
        isis_level.value_namespace = name_space;
        isis_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded = value;
        threshold_exceeded.value_namespace = name_space;
        threshold_exceeded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-data-complete")
    {
        is_data_complete = value;
        is_data_complete.value_namespace = name_space;
        is_data_complete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-time")
    {
        trigger_time = value;
        trigger_time.value_namespace = name_space;
        trigger_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-lsp-changes")
    {
        total_lsp_changes = value;
        total_lsp_changes.value_namespace = name_space;
        total_lsp_changes.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "topology")
    {
        topology.yfilter = yfilter;
    }
    if(value_path == "isis-level")
    {
        isis_level.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "is-data-complete")
    {
        is_data_complete.yfilter = yfilter;
    }
    if(value_path == "trigger-time")
    {
        trigger_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "total-lsp-changes")
    {
        total_lsp_changes.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority-summary" || name == "topology" || name == "isis-level" || name == "type" || name == "threshold-exceeded" || name == "state" || name == "is-data-complete" || name == "trigger-time" || name == "duration" || name == "total-lsp-changes")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::PrioritySummary()
    :
    level{YType::enumeration, "level"},
    threshold_exceeded{YType::boolean, "threshold-exceeded"}
        ,
    route_statistics(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics>())
    , ip_convergence_time(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime>())
    , mpls_convergence_time(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime>())
    , frr_statistic(this, {})
{
    route_statistics->parent = this;
    ip_convergence_time->parent = this;
    mpls_convergence_time->parent = this;

    yang_name = "priority-summary"; yang_parent_name = "spf-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::~PrioritySummary()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<frr_statistic.len(); index++)
    {
        if(frr_statistic[index]->has_data())
            return true;
    }
    return level.is_set
	|| threshold_exceeded.is_set
	|| (route_statistics !=  nullptr && route_statistics->has_data())
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_data())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_data());
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::has_operation() const
{
    for (std::size_t index=0; index<frr_statistic.len(); index++)
    {
        if(frr_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(threshold_exceeded.yfilter)
	|| (route_statistics !=  nullptr && route_statistics->has_operation())
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_operation())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_operation());
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (threshold_exceeded.is_set || is_set(threshold_exceeded.yfilter)) leaf_name_data.push_back(threshold_exceeded.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-statistics")
    {
        if(route_statistics == nullptr)
        {
            route_statistics = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics>();
        }
        return route_statistics;
    }

    if(child_yang_name == "ip-convergence-time")
    {
        if(ip_convergence_time == nullptr)
        {
            ip_convergence_time = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime>();
        }
        return ip_convergence_time;
    }

    if(child_yang_name == "mpls-convergence-time")
    {
        if(mpls_convergence_time == nullptr)
        {
            mpls_convergence_time = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime>();
        }
        return mpls_convergence_time;
    }

    if(child_yang_name == "frr-statistic")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic>();
        ent_->parent = this;
        frr_statistic.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(route_statistics != nullptr)
    {
        _children["route-statistics"] = route_statistics;
    }

    if(ip_convergence_time != nullptr)
    {
        _children["ip-convergence-time"] = ip_convergence_time;
    }

    if(mpls_convergence_time != nullptr)
    {
        _children["mpls-convergence-time"] = mpls_convergence_time;
    }

    count_ = 0;
    for (auto ent_ : frr_statistic.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded = value;
        threshold_exceeded.value_namespace = name_space;
        threshold_exceeded.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-statistics" || name == "ip-convergence-time" || name == "mpls-convergence-time" || name == "frr-statistic" || name == "level" || name == "threshold-exceeded")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics::RouteStatistics()
    :
    adds{YType::uint32, "adds"},
    deletes{YType::uint32, "deletes"},
    modifies{YType::uint32, "modifies"},
    reachables{YType::uint32, "reachables"},
    unreachables{YType::uint32, "unreachables"},
    touches{YType::uint32, "touches"}
{

    yang_name = "route-statistics"; yang_parent_name = "priority-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics::~RouteStatistics()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics::has_data() const
{
    if (is_presence_container) return true;
    return adds.is_set
	|| deletes.is_set
	|| modifies.is_set
	|| reachables.is_set
	|| unreachables.is_set
	|| touches.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adds.yfilter)
	|| ydk::is_set(deletes.yfilter)
	|| ydk::is_set(modifies.yfilter)
	|| ydk::is_set(reachables.yfilter)
	|| ydk::is_set(unreachables.yfilter)
	|| ydk::is_set(touches.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adds.is_set || is_set(adds.yfilter)) leaf_name_data.push_back(adds.get_name_leafdata());
    if (deletes.is_set || is_set(deletes.yfilter)) leaf_name_data.push_back(deletes.get_name_leafdata());
    if (modifies.is_set || is_set(modifies.yfilter)) leaf_name_data.push_back(modifies.get_name_leafdata());
    if (reachables.is_set || is_set(reachables.yfilter)) leaf_name_data.push_back(reachables.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.yfilter)) leaf_name_data.push_back(unreachables.get_name_leafdata());
    if (touches.is_set || is_set(touches.yfilter)) leaf_name_data.push_back(touches.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adds")
    {
        adds = value;
        adds.value_namespace = name_space;
        adds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deletes")
    {
        deletes = value;
        deletes.value_namespace = name_space;
        deletes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "modifies")
    {
        modifies = value;
        modifies.value_namespace = name_space;
        modifies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachables")
    {
        reachables = value;
        reachables.value_namespace = name_space;
        reachables.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachables")
    {
        unreachables = value;
        unreachables.value_namespace = name_space;
        unreachables.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "touches")
    {
        touches = value;
        touches.value_namespace = name_space;
        touches.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adds")
    {
        adds.yfilter = yfilter;
    }
    if(value_path == "deletes")
    {
        deletes.yfilter = yfilter;
    }
    if(value_path == "modifies")
    {
        modifies.yfilter = yfilter;
    }
    if(value_path == "reachables")
    {
        reachables.yfilter = yfilter;
    }
    if(value_path == "unreachables")
    {
        unreachables.yfilter = yfilter;
    }
    if(value_path == "touches")
    {
        touches.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adds" || name == "deletes" || name == "modifies" || name == "reachables" || name == "unreachables" || name == "touches")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime::IpConvergenceTime()
    :
    minimum_time{YType::str, "minimum-time"},
    maximum_time{YType::str, "maximum-time"},
    slowest_node_name{YType::str, "slowest-node-name"},
    fastest_node_name{YType::str, "fastest-node-name"}
{

    yang_name = "ip-convergence-time"; yang_parent_name = "priority-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime::~IpConvergenceTime()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime::has_data() const
{
    if (is_presence_container) return true;
    return minimum_time.is_set
	|| maximum_time.is_set
	|| slowest_node_name.is_set
	|| fastest_node_name.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter)
	|| ydk::is_set(fastest_node_name.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-convergence-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());
    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-time" || name == "maximum-time" || name == "slowest-node-name" || name == "fastest-node-name")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime::MplsConvergenceTime()
    :
    minimum_time{YType::str, "minimum-time"},
    maximum_time{YType::str, "maximum-time"},
    slowest_node_name{YType::str, "slowest-node-name"},
    fastest_node_name{YType::str, "fastest-node-name"}
{

    yang_name = "mpls-convergence-time"; yang_parent_name = "priority-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime::~MplsConvergenceTime()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime::has_data() const
{
    if (is_presence_container) return true;
    return minimum_time.is_set
	|| maximum_time.is_set
	|| slowest_node_name.is_set
	|| fastest_node_name.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter)
	|| ydk::is_set(fastest_node_name.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-convergence-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());
    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-time" || name == "maximum-time" || name == "slowest-node-name" || name == "fastest-node-name")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic::FrrStatistic()
    :
    total_routes{YType::uint32, "total-routes"},
    fully_protected_routes{YType::uint32, "fully-protected-routes"},
    partially_protected_routes{YType::uint32, "partially-protected-routes"},
    coverage{YType::str, "coverage"}
{

    yang_name = "frr-statistic"; yang_parent_name = "priority-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic::~FrrStatistic()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic::has_data() const
{
    if (is_presence_container) return true;
    return total_routes.is_set
	|| fully_protected_routes.is_set
	|| partially_protected_routes.is_set
	|| coverage.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_routes.yfilter)
	|| ydk::is_set(fully_protected_routes.yfilter)
	|| ydk::is_set(partially_protected_routes.yfilter)
	|| ydk::is_set(coverage.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-statistic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_routes.is_set || is_set(total_routes.yfilter)) leaf_name_data.push_back(total_routes.get_name_leafdata());
    if (fully_protected_routes.is_set || is_set(fully_protected_routes.yfilter)) leaf_name_data.push_back(fully_protected_routes.get_name_leafdata());
    if (partially_protected_routes.is_set || is_set(partially_protected_routes.yfilter)) leaf_name_data.push_back(partially_protected_routes.get_name_leafdata());
    if (coverage.is_set || is_set(coverage.yfilter)) leaf_name_data.push_back(coverage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-routes")
    {
        total_routes = value;
        total_routes.value_namespace = name_space;
        total_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fully-protected-routes")
    {
        fully_protected_routes = value;
        fully_protected_routes.value_namespace = name_space;
        fully_protected_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partially-protected-routes")
    {
        partially_protected_routes = value;
        partially_protected_routes.value_namespace = name_space;
        partially_protected_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coverage")
    {
        coverage = value;
        coverage.value_namespace = name_space;
        coverage.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-routes")
    {
        total_routes.yfilter = yfilter;
    }
    if(value_path == "fully-protected-routes")
    {
        fully_protected_routes.yfilter = yfilter;
    }
    if(value_path == "partially-protected-routes")
    {
        partially_protected_routes.yfilter = yfilter;
    }
    if(value_path == "coverage")
    {
        coverage.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-routes" || name == "fully-protected-routes" || name == "partially-protected-routes" || name == "coverage")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::NodeStatistics::NodeStatistics()
    :
    adds{YType::uint32, "adds"},
    deletes{YType::uint32, "deletes"},
    modifies{YType::uint32, "modifies"},
    reachables{YType::uint32, "reachables"},
    unreachables{YType::uint32, "unreachables"},
    touches{YType::uint32, "touches"}
{

    yang_name = "node-statistics"; yang_parent_name = "spf-run-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::NodeStatistics::~NodeStatistics()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::NodeStatistics::has_data() const
{
    if (is_presence_container) return true;
    return adds.is_set
	|| deletes.is_set
	|| modifies.is_set
	|| reachables.is_set
	|| unreachables.is_set
	|| touches.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::NodeStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adds.yfilter)
	|| ydk::is_set(deletes.yfilter)
	|| ydk::is_set(modifies.yfilter)
	|| ydk::is_set(reachables.yfilter)
	|| ydk::is_set(unreachables.yfilter)
	|| ydk::is_set(touches.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::NodeStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::NodeStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adds.is_set || is_set(adds.yfilter)) leaf_name_data.push_back(adds.get_name_leafdata());
    if (deletes.is_set || is_set(deletes.yfilter)) leaf_name_data.push_back(deletes.get_name_leafdata());
    if (modifies.is_set || is_set(modifies.yfilter)) leaf_name_data.push_back(modifies.get_name_leafdata());
    if (reachables.is_set || is_set(reachables.yfilter)) leaf_name_data.push_back(reachables.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.yfilter)) leaf_name_data.push_back(unreachables.get_name_leafdata());
    if (touches.is_set || is_set(touches.yfilter)) leaf_name_data.push_back(touches.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::NodeStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::NodeStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::NodeStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adds")
    {
        adds = value;
        adds.value_namespace = name_space;
        adds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deletes")
    {
        deletes = value;
        deletes.value_namespace = name_space;
        deletes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "modifies")
    {
        modifies = value;
        modifies.value_namespace = name_space;
        modifies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachables")
    {
        reachables = value;
        reachables.value_namespace = name_space;
        reachables.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachables")
    {
        unreachables = value;
        unreachables.value_namespace = name_space;
        unreachables.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "touches")
    {
        touches = value;
        touches.value_namespace = name_space;
        touches.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::NodeStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adds")
    {
        adds.yfilter = yfilter;
    }
    if(value_path == "deletes")
    {
        deletes.yfilter = yfilter;
    }
    if(value_path == "modifies")
    {
        modifies.yfilter = yfilter;
    }
    if(value_path == "reachables")
    {
        reachables.yfilter = yfilter;
    }
    if(value_path == "unreachables")
    {
        unreachables.yfilter = yfilter;
    }
    if(value_path == "touches")
    {
        touches.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::NodeStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adds" || name == "deletes" || name == "modifies" || name == "reachables" || name == "unreachables" || name == "touches")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::TriggerLsp::TriggerLsp()
    :
    lsp_id{YType::str, "lsp-id"},
    sequence_number{YType::uint32, "sequence-number"},
    change_type{YType::enumeration, "change-type"},
    reception_time{YType::str, "reception-time"}
{

    yang_name = "trigger-lsp"; yang_parent_name = "spf-run-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::TriggerLsp::~TriggerLsp()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::TriggerLsp::has_data() const
{
    if (is_presence_container) return true;
    return lsp_id.is_set
	|| sequence_number.is_set
	|| change_type.is_set
	|| reception_time.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::TriggerLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(reception_time.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::TriggerLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::TriggerLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (reception_time.is_set || is_set(reception_time.yfilter)) leaf_name_data.push_back(reception_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::TriggerLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::TriggerLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::TriggerLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reception-time")
    {
        reception_time = value;
        reception_time.value_namespace = name_space;
        reception_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::TriggerLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "reception-time")
    {
        reception_time.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::TriggerLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-id" || name == "sequence-number" || name == "change-type" || name == "reception-time")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::Priority()
    :
    priority_summary(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary>())
    , convergence_timeline(this, {})
    , leaf_networks_added(this, {})
    , leaf_networks_deleted(this, {})
{
    priority_summary->parent = this;

    yang_name = "priority"; yang_parent_name = "spf-run-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::~Priority()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<convergence_timeline.len(); index++)
    {
        if(convergence_timeline[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<leaf_networks_added.len(); index++)
    {
        if(leaf_networks_added[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<leaf_networks_deleted.len(); index++)
    {
        if(leaf_networks_deleted[index]->has_data())
            return true;
    }
    return (priority_summary !=  nullptr && priority_summary->has_data());
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::has_operation() const
{
    for (std::size_t index=0; index<convergence_timeline.len(); index++)
    {
        if(convergence_timeline[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<leaf_networks_added.len(); index++)
    {
        if(leaf_networks_added[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<leaf_networks_deleted.len(); index++)
    {
        if(leaf_networks_deleted[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (priority_summary !=  nullptr && priority_summary->has_operation());
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority-summary")
    {
        if(priority_summary == nullptr)
        {
            priority_summary = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary>();
        }
        return priority_summary;
    }

    if(child_yang_name == "convergence-timeline")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline>();
        ent_->parent = this;
        convergence_timeline.append(ent_);
        return ent_;
    }

    if(child_yang_name == "leaf-networks-added")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksAdded>();
        ent_->parent = this;
        leaf_networks_added.append(ent_);
        return ent_;
    }

    if(child_yang_name == "leaf-networks-deleted")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksDeleted>();
        ent_->parent = this;
        leaf_networks_deleted.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(priority_summary != nullptr)
    {
        _children["priority-summary"] = priority_summary;
    }

    count_ = 0;
    for (auto ent_ : convergence_timeline.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : leaf_networks_added.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : leaf_networks_deleted.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority-summary" || name == "convergence-timeline" || name == "leaf-networks-added" || name == "leaf-networks-deleted")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::PrioritySummary()
    :
    level{YType::enumeration, "level"},
    threshold_exceeded{YType::boolean, "threshold-exceeded"}
        ,
    route_statistics(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::RouteStatistics>())
    , ip_convergence_time(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::IpConvergenceTime>())
    , mpls_convergence_time(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::MplsConvergenceTime>())
    , frr_statistic(this, {})
{
    route_statistics->parent = this;
    ip_convergence_time->parent = this;
    mpls_convergence_time->parent = this;

    yang_name = "priority-summary"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::~PrioritySummary()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<frr_statistic.len(); index++)
    {
        if(frr_statistic[index]->has_data())
            return true;
    }
    return level.is_set
	|| threshold_exceeded.is_set
	|| (route_statistics !=  nullptr && route_statistics->has_data())
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_data())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_data());
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::has_operation() const
{
    for (std::size_t index=0; index<frr_statistic.len(); index++)
    {
        if(frr_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(threshold_exceeded.yfilter)
	|| (route_statistics !=  nullptr && route_statistics->has_operation())
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_operation())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_operation());
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (threshold_exceeded.is_set || is_set(threshold_exceeded.yfilter)) leaf_name_data.push_back(threshold_exceeded.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-statistics")
    {
        if(route_statistics == nullptr)
        {
            route_statistics = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::RouteStatistics>();
        }
        return route_statistics;
    }

    if(child_yang_name == "ip-convergence-time")
    {
        if(ip_convergence_time == nullptr)
        {
            ip_convergence_time = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::IpConvergenceTime>();
        }
        return ip_convergence_time;
    }

    if(child_yang_name == "mpls-convergence-time")
    {
        if(mpls_convergence_time == nullptr)
        {
            mpls_convergence_time = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::MplsConvergenceTime>();
        }
        return mpls_convergence_time;
    }

    if(child_yang_name == "frr-statistic")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::FrrStatistic>();
        ent_->parent = this;
        frr_statistic.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(route_statistics != nullptr)
    {
        _children["route-statistics"] = route_statistics;
    }

    if(ip_convergence_time != nullptr)
    {
        _children["ip-convergence-time"] = ip_convergence_time;
    }

    if(mpls_convergence_time != nullptr)
    {
        _children["mpls-convergence-time"] = mpls_convergence_time;
    }

    count_ = 0;
    for (auto ent_ : frr_statistic.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded = value;
        threshold_exceeded.value_namespace = name_space;
        threshold_exceeded.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-statistics" || name == "ip-convergence-time" || name == "mpls-convergence-time" || name == "frr-statistic" || name == "level" || name == "threshold-exceeded")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::RouteStatistics::RouteStatistics()
    :
    adds{YType::uint32, "adds"},
    deletes{YType::uint32, "deletes"},
    modifies{YType::uint32, "modifies"},
    reachables{YType::uint32, "reachables"},
    unreachables{YType::uint32, "unreachables"},
    touches{YType::uint32, "touches"}
{

    yang_name = "route-statistics"; yang_parent_name = "priority-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::RouteStatistics::~RouteStatistics()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::RouteStatistics::has_data() const
{
    if (is_presence_container) return true;
    return adds.is_set
	|| deletes.is_set
	|| modifies.is_set
	|| reachables.is_set
	|| unreachables.is_set
	|| touches.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::RouteStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adds.yfilter)
	|| ydk::is_set(deletes.yfilter)
	|| ydk::is_set(modifies.yfilter)
	|| ydk::is_set(reachables.yfilter)
	|| ydk::is_set(unreachables.yfilter)
	|| ydk::is_set(touches.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::RouteStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::RouteStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adds.is_set || is_set(adds.yfilter)) leaf_name_data.push_back(adds.get_name_leafdata());
    if (deletes.is_set || is_set(deletes.yfilter)) leaf_name_data.push_back(deletes.get_name_leafdata());
    if (modifies.is_set || is_set(modifies.yfilter)) leaf_name_data.push_back(modifies.get_name_leafdata());
    if (reachables.is_set || is_set(reachables.yfilter)) leaf_name_data.push_back(reachables.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.yfilter)) leaf_name_data.push_back(unreachables.get_name_leafdata());
    if (touches.is_set || is_set(touches.yfilter)) leaf_name_data.push_back(touches.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::RouteStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::RouteStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::RouteStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adds")
    {
        adds = value;
        adds.value_namespace = name_space;
        adds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deletes")
    {
        deletes = value;
        deletes.value_namespace = name_space;
        deletes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "modifies")
    {
        modifies = value;
        modifies.value_namespace = name_space;
        modifies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachables")
    {
        reachables = value;
        reachables.value_namespace = name_space;
        reachables.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachables")
    {
        unreachables = value;
        unreachables.value_namespace = name_space;
        unreachables.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "touches")
    {
        touches = value;
        touches.value_namespace = name_space;
        touches.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::RouteStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adds")
    {
        adds.yfilter = yfilter;
    }
    if(value_path == "deletes")
    {
        deletes.yfilter = yfilter;
    }
    if(value_path == "modifies")
    {
        modifies.yfilter = yfilter;
    }
    if(value_path == "reachables")
    {
        reachables.yfilter = yfilter;
    }
    if(value_path == "unreachables")
    {
        unreachables.yfilter = yfilter;
    }
    if(value_path == "touches")
    {
        touches.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::RouteStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adds" || name == "deletes" || name == "modifies" || name == "reachables" || name == "unreachables" || name == "touches")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::IpConvergenceTime::IpConvergenceTime()
    :
    minimum_time{YType::str, "minimum-time"},
    maximum_time{YType::str, "maximum-time"},
    slowest_node_name{YType::str, "slowest-node-name"},
    fastest_node_name{YType::str, "fastest-node-name"}
{

    yang_name = "ip-convergence-time"; yang_parent_name = "priority-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::IpConvergenceTime::~IpConvergenceTime()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::IpConvergenceTime::has_data() const
{
    if (is_presence_container) return true;
    return minimum_time.is_set
	|| maximum_time.is_set
	|| slowest_node_name.is_set
	|| fastest_node_name.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::IpConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter)
	|| ydk::is_set(fastest_node_name.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::IpConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-convergence-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::IpConvergenceTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());
    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::IpConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::IpConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::IpConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::IpConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::IpConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-time" || name == "maximum-time" || name == "slowest-node-name" || name == "fastest-node-name")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::MplsConvergenceTime::MplsConvergenceTime()
    :
    minimum_time{YType::str, "minimum-time"},
    maximum_time{YType::str, "maximum-time"},
    slowest_node_name{YType::str, "slowest-node-name"},
    fastest_node_name{YType::str, "fastest-node-name"}
{

    yang_name = "mpls-convergence-time"; yang_parent_name = "priority-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::MplsConvergenceTime::~MplsConvergenceTime()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::MplsConvergenceTime::has_data() const
{
    if (is_presence_container) return true;
    return minimum_time.is_set
	|| maximum_time.is_set
	|| slowest_node_name.is_set
	|| fastest_node_name.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::MplsConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter)
	|| ydk::is_set(fastest_node_name.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::MplsConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-convergence-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::MplsConvergenceTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());
    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::MplsConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::MplsConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::MplsConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::MplsConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::MplsConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-time" || name == "maximum-time" || name == "slowest-node-name" || name == "fastest-node-name")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::FrrStatistic::FrrStatistic()
    :
    total_routes{YType::uint32, "total-routes"},
    fully_protected_routes{YType::uint32, "fully-protected-routes"},
    partially_protected_routes{YType::uint32, "partially-protected-routes"},
    coverage{YType::str, "coverage"}
{

    yang_name = "frr-statistic"; yang_parent_name = "priority-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::FrrStatistic::~FrrStatistic()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::FrrStatistic::has_data() const
{
    if (is_presence_container) return true;
    return total_routes.is_set
	|| fully_protected_routes.is_set
	|| partially_protected_routes.is_set
	|| coverage.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::FrrStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_routes.yfilter)
	|| ydk::is_set(fully_protected_routes.yfilter)
	|| ydk::is_set(partially_protected_routes.yfilter)
	|| ydk::is_set(coverage.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::FrrStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-statistic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::FrrStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_routes.is_set || is_set(total_routes.yfilter)) leaf_name_data.push_back(total_routes.get_name_leafdata());
    if (fully_protected_routes.is_set || is_set(fully_protected_routes.yfilter)) leaf_name_data.push_back(fully_protected_routes.get_name_leafdata());
    if (partially_protected_routes.is_set || is_set(partially_protected_routes.yfilter)) leaf_name_data.push_back(partially_protected_routes.get_name_leafdata());
    if (coverage.is_set || is_set(coverage.yfilter)) leaf_name_data.push_back(coverage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::FrrStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::FrrStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::FrrStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-routes")
    {
        total_routes = value;
        total_routes.value_namespace = name_space;
        total_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fully-protected-routes")
    {
        fully_protected_routes = value;
        fully_protected_routes.value_namespace = name_space;
        fully_protected_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partially-protected-routes")
    {
        partially_protected_routes = value;
        partially_protected_routes.value_namespace = name_space;
        partially_protected_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coverage")
    {
        coverage = value;
        coverage.value_namespace = name_space;
        coverage.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::FrrStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-routes")
    {
        total_routes.yfilter = yfilter;
    }
    if(value_path == "fully-protected-routes")
    {
        fully_protected_routes.yfilter = yfilter;
    }
    if(value_path == "partially-protected-routes")
    {
        partially_protected_routes.yfilter = yfilter;
    }
    if(value_path == "coverage")
    {
        coverage.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::FrrStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-routes" || name == "fully-protected-routes" || name == "partially-protected-routes" || name == "coverage")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::ConvergenceTimeline()
    :
    route_origin(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RouteOrigin>())
    , ri_bv4_enter(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Enter>())
    , ri_bv4_exit(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Exit>())
    , ri_bv4_redistribute(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Redistribute>())
    , ldp_enter(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpEnter>())
    , ldp_exit(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpExit>())
    , lsd_enter(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdEnter>())
    , lsd_exit(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdExit>())
    , lc_ip(this, {})
    , lc_mpls(this, {})
{
    route_origin->parent = this;
    ri_bv4_enter->parent = this;
    ri_bv4_exit->parent = this;
    ri_bv4_redistribute->parent = this;
    ldp_enter->parent = this;
    ldp_exit->parent = this;
    lsd_enter->parent = this;
    lsd_exit->parent = this;

    yang_name = "convergence-timeline"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::~ConvergenceTimeline()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lc_ip.len(); index++)
    {
        if(lc_ip[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lc_mpls.len(); index++)
    {
        if(lc_mpls[index]->has_data())
            return true;
    }
    return (route_origin !=  nullptr && route_origin->has_data())
	|| (ri_bv4_enter !=  nullptr && ri_bv4_enter->has_data())
	|| (ri_bv4_exit !=  nullptr && ri_bv4_exit->has_data())
	|| (ri_bv4_redistribute !=  nullptr && ri_bv4_redistribute->has_data())
	|| (ldp_enter !=  nullptr && ldp_enter->has_data())
	|| (ldp_exit !=  nullptr && ldp_exit->has_data())
	|| (lsd_enter !=  nullptr && lsd_enter->has_data())
	|| (lsd_exit !=  nullptr && lsd_exit->has_data());
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::has_operation() const
{
    for (std::size_t index=0; index<lc_ip.len(); index++)
    {
        if(lc_ip[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lc_mpls.len(); index++)
    {
        if(lc_mpls[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (route_origin !=  nullptr && route_origin->has_operation())
	|| (ri_bv4_enter !=  nullptr && ri_bv4_enter->has_operation())
	|| (ri_bv4_exit !=  nullptr && ri_bv4_exit->has_operation())
	|| (ri_bv4_redistribute !=  nullptr && ri_bv4_redistribute->has_operation())
	|| (ldp_enter !=  nullptr && ldp_enter->has_operation())
	|| (ldp_exit !=  nullptr && ldp_exit->has_operation())
	|| (lsd_enter !=  nullptr && lsd_enter->has_operation())
	|| (lsd_exit !=  nullptr && lsd_exit->has_operation());
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "convergence-timeline";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-origin")
    {
        if(route_origin == nullptr)
        {
            route_origin = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RouteOrigin>();
        }
        return route_origin;
    }

    if(child_yang_name == "ri-bv4-enter")
    {
        if(ri_bv4_enter == nullptr)
        {
            ri_bv4_enter = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Enter>();
        }
        return ri_bv4_enter;
    }

    if(child_yang_name == "ri-bv4-exit")
    {
        if(ri_bv4_exit == nullptr)
        {
            ri_bv4_exit = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Exit>();
        }
        return ri_bv4_exit;
    }

    if(child_yang_name == "ri-bv4-redistribute")
    {
        if(ri_bv4_redistribute == nullptr)
        {
            ri_bv4_redistribute = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Redistribute>();
        }
        return ri_bv4_redistribute;
    }

    if(child_yang_name == "ldp-enter")
    {
        if(ldp_enter == nullptr)
        {
            ldp_enter = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpEnter>();
        }
        return ldp_enter;
    }

    if(child_yang_name == "ldp-exit")
    {
        if(ldp_exit == nullptr)
        {
            ldp_exit = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpExit>();
        }
        return ldp_exit;
    }

    if(child_yang_name == "lsd-enter")
    {
        if(lsd_enter == nullptr)
        {
            lsd_enter = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdEnter>();
        }
        return lsd_enter;
    }

    if(child_yang_name == "lsd-exit")
    {
        if(lsd_exit == nullptr)
        {
            lsd_exit = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdExit>();
        }
        return lsd_exit;
    }

    if(child_yang_name == "lc-ip")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp>();
        ent_->parent = this;
        lc_ip.append(ent_);
        return ent_;
    }

    if(child_yang_name == "lc-mpls")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls>();
        ent_->parent = this;
        lc_mpls.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(route_origin != nullptr)
    {
        _children["route-origin"] = route_origin;
    }

    if(ri_bv4_enter != nullptr)
    {
        _children["ri-bv4-enter"] = ri_bv4_enter;
    }

    if(ri_bv4_exit != nullptr)
    {
        _children["ri-bv4-exit"] = ri_bv4_exit;
    }

    if(ri_bv4_redistribute != nullptr)
    {
        _children["ri-bv4-redistribute"] = ri_bv4_redistribute;
    }

    if(ldp_enter != nullptr)
    {
        _children["ldp-enter"] = ldp_enter;
    }

    if(ldp_exit != nullptr)
    {
        _children["ldp-exit"] = ldp_exit;
    }

    if(lsd_enter != nullptr)
    {
        _children["lsd-enter"] = lsd_enter;
    }

    if(lsd_exit != nullptr)
    {
        _children["lsd-exit"] = lsd_exit;
    }

    count_ = 0;
    for (auto ent_ : lc_ip.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : lc_mpls.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-origin" || name == "ri-bv4-enter" || name == "ri-bv4-exit" || name == "ri-bv4-redistribute" || name == "ldp-enter" || name == "ldp-exit" || name == "lsd-enter" || name == "lsd-exit" || name == "lc-ip" || name == "lc-mpls")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RouteOrigin::RouteOrigin()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "route-origin"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RouteOrigin::~RouteOrigin()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RouteOrigin::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RouteOrigin::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RouteOrigin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-origin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RouteOrigin::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RouteOrigin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RouteOrigin::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RouteOrigin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RouteOrigin::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RouteOrigin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Enter::RiBv4Enter()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "ri-bv4-enter"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Enter::~RiBv4Enter()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Enter::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Enter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Enter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ri-bv4-enter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Enter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Enter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Enter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Enter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Enter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Enter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Exit::RiBv4Exit()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "ri-bv4-exit"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Exit::~RiBv4Exit()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Exit::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Exit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Exit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ri-bv4-exit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Exit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Exit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Exit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Exit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Exit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Exit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Redistribute::RiBv4Redistribute()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "ri-bv4-redistribute"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Redistribute::~RiBv4Redistribute()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Redistribute::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Redistribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ri-bv4-redistribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Redistribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Redistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Redistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Redistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpEnter::LdpEnter()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "ldp-enter"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpEnter::~LdpEnter()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpEnter::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpEnter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpEnter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-enter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpEnter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpEnter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpEnter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpEnter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpEnter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpEnter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpExit::LdpExit()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "ldp-exit"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpExit::~LdpExit()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpExit::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpExit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpExit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-exit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpExit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpExit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpExit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpExit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpExit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpExit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdEnter::LsdEnter()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "lsd-enter"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdEnter::~LsdEnter()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdEnter::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdEnter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdEnter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsd-enter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdEnter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdEnter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdEnter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdEnter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdEnter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdEnter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdExit::LsdExit()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "lsd-exit"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdExit::~LsdExit()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdExit::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdExit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdExit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsd-exit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdExit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdExit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdExit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdExit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdExit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdExit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::LcIp()
    :
    node_name{YType::str, "node-name"},
    speed{YType::enumeration, "speed"}
        ,
    fib_complete(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::FibComplete>())
{
    fib_complete->parent = this;

    yang_name = "lc-ip"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::~LcIp()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| speed.is_set
	|| (fib_complete !=  nullptr && fib_complete->has_data());
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| (fib_complete !=  nullptr && fib_complete->has_operation());
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lc-ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fib-complete")
    {
        if(fib_complete == nullptr)
        {
            fib_complete = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::FibComplete>();
        }
        return fib_complete;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fib_complete != nullptr)
    {
        _children["fib-complete"] = fib_complete;
    }

    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fib-complete" || name == "node-name" || name == "speed")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::FibComplete::FibComplete()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "fib-complete"; yang_parent_name = "lc-ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::FibComplete::~FibComplete()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::FibComplete::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::FibComplete::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::FibComplete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-complete";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::FibComplete::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::FibComplete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::FibComplete::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::FibComplete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::FibComplete::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::FibComplete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::LcMpls()
    :
    node_name{YType::str, "node-name"},
    speed{YType::enumeration, "speed"}
        ,
    fib_complete(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::FibComplete>())
{
    fib_complete->parent = this;

    yang_name = "lc-mpls"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::~LcMpls()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| speed.is_set
	|| (fib_complete !=  nullptr && fib_complete->has_data());
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| (fib_complete !=  nullptr && fib_complete->has_operation());
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lc-mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fib-complete")
    {
        if(fib_complete == nullptr)
        {
            fib_complete = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::FibComplete>();
        }
        return fib_complete;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fib_complete != nullptr)
    {
        _children["fib-complete"] = fib_complete;
    }

    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fib-complete" || name == "node-name" || name == "speed")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::FibComplete::FibComplete()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "fib-complete"; yang_parent_name = "lc-mpls"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::FibComplete::~FibComplete()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::FibComplete::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::FibComplete::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::FibComplete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-complete";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::FibComplete::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::FibComplete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::FibComplete::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::FibComplete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::FibComplete::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::FibComplete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksAdded::LeafNetworksAdded()
    :
    address{YType::str, "address"},
    net_mask{YType::uint8, "net-mask"}
{

    yang_name = "leaf-networks-added"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksAdded::~LeafNetworksAdded()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksAdded::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| net_mask.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksAdded::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(net_mask.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksAdded::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "leaf-networks-added";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksAdded::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (net_mask.is_set || is_set(net_mask.yfilter)) leaf_name_data.push_back(net_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksAdded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksAdded::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksAdded::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "net-mask")
    {
        net_mask = value;
        net_mask.value_namespace = name_space;
        net_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksAdded::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "net-mask")
    {
        net_mask.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksAdded::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "net-mask")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksDeleted::LeafNetworksDeleted()
    :
    address{YType::str, "address"},
    net_mask{YType::uint8, "net-mask"}
{

    yang_name = "leaf-networks-deleted"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksDeleted::~LeafNetworksDeleted()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksDeleted::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| net_mask.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksDeleted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(net_mask.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksDeleted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "leaf-networks-deleted";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksDeleted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (net_mask.is_set || is_set(net_mask.yfilter)) leaf_name_data.push_back(net_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksDeleted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksDeleted::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksDeleted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "net-mask")
    {
        net_mask = value;
        net_mask.value_namespace = name_space;
        net_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksDeleted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "net-mask")
    {
        net_mask.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksDeleted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "net-mask")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspProcessed::LspProcessed()
    :
    lsp_id{YType::str, "lsp-id"},
    sequence_number{YType::uint32, "sequence-number"},
    change_type{YType::enumeration, "change-type"},
    reception_time{YType::str, "reception-time"}
{

    yang_name = "lsp-processed"; yang_parent_name = "spf-run-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspProcessed::~LspProcessed()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspProcessed::has_data() const
{
    if (is_presence_container) return true;
    return lsp_id.is_set
	|| sequence_number.is_set
	|| change_type.is_set
	|| reception_time.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspProcessed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(reception_time.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspProcessed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-processed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspProcessed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (reception_time.is_set || is_set(reception_time.yfilter)) leaf_name_data.push_back(reception_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspProcessed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspProcessed::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspProcessed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reception-time")
    {
        reception_time = value;
        reception_time.value_namespace = name_space;
        reception_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspProcessed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "reception-time")
    {
        reception_time.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspProcessed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-id" || name == "sequence-number" || name == "change-type" || name == "reception-time")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspRegenerated::LspRegenerated()
    :
    serial_number_xr{YType::uint32, "serial-number-xr"},
    lsp_id{YType::str, "lsp-id"},
    sequence_number{YType::uint32, "sequence-number"},
    reception_time{YType::str, "reception-time"},
    isis_level{YType::enumeration, "isis-level"},
    spf_run_number{YType::uint32, "spf-run-number"},
    reason{YType::str, "reason"}
{

    yang_name = "lsp-regenerated"; yang_parent_name = "spf-run-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspRegenerated::~LspRegenerated()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspRegenerated::has_data() const
{
    if (is_presence_container) return true;
    return serial_number_xr.is_set
	|| lsp_id.is_set
	|| sequence_number.is_set
	|| reception_time.is_set
	|| isis_level.is_set
	|| spf_run_number.is_set
	|| reason.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspRegenerated::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(serial_number_xr.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(reception_time.yfilter)
	|| ydk::is_set(isis_level.yfilter)
	|| ydk::is_set(spf_run_number.yfilter)
	|| ydk::is_set(reason.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspRegenerated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-regenerated";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspRegenerated::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (serial_number_xr.is_set || is_set(serial_number_xr.yfilter)) leaf_name_data.push_back(serial_number_xr.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (reception_time.is_set || is_set(reception_time.yfilter)) leaf_name_data.push_back(reception_time.get_name_leafdata());
    if (isis_level.is_set || is_set(isis_level.yfilter)) leaf_name_data.push_back(isis_level.get_name_leafdata());
    if (spf_run_number.is_set || is_set(spf_run_number.yfilter)) leaf_name_data.push_back(spf_run_number.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspRegenerated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspRegenerated::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspRegenerated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "serial-number-xr")
    {
        serial_number_xr = value;
        serial_number_xr.value_namespace = name_space;
        serial_number_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reception-time")
    {
        reception_time = value;
        reception_time.value_namespace = name_space;
        reception_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-level")
    {
        isis_level = value;
        isis_level.value_namespace = name_space;
        isis_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-run-number")
    {
        spf_run_number = value;
        spf_run_number.value_namespace = name_space;
        spf_run_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspRegenerated::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "serial-number-xr")
    {
        serial_number_xr.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "reception-time")
    {
        reception_time.yfilter = yfilter;
    }
    if(value_path == "isis-level")
    {
        isis_level.yfilter = yfilter;
    }
    if(value_path == "spf-run-number")
    {
        spf_run_number.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspRegenerated::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "serial-number-xr" || name == "lsp-id" || name == "sequence-number" || name == "reception-time" || name == "isis-level" || name == "spf-run-number" || name == "reason")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOfflines()
    :
    ipfrr_event_offline(this, {"event_id"})
{

    yang_name = "ipfrr-event-offlines"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::~IpfrrEventOfflines()
{
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipfrr_event_offline.len(); index++)
    {
        if(ipfrr_event_offline[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::has_operation() const
{
    for (std::size_t index=0; index<ipfrr_event_offline.len(); index++)
    {
        if(ipfrr_event_offline[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipfrr-event-offlines";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipfrr-event-offline")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline>();
        ent_->parent = this;
        ipfrr_event_offline.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipfrr_event_offline.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipfrr-event-offline")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrEventOffline()
    :
    event_id{YType::uint32, "event-id"},
    event_id_xr{YType::uint32, "event-id-xr"},
    trigger_time{YType::str, "trigger-time"},
    trigger_spf_run{YType::uint32, "trigger-spf-run"},
    wait_time{YType::uint32, "wait-time"},
    start_time_offset{YType::str, "start-time-offset"},
    duration{YType::str, "duration"},
    completed_spf_run{YType::uint32, "completed-spf-run"},
    total_routes{YType::uint32, "total-routes"},
    fully_protected_routes{YType::uint32, "fully-protected-routes"},
    partially_protected_routes{YType::uint32, "partially-protected-routes"},
    coverage{YType::str, "coverage"}
        ,
    ipfrr_statistic(this, {})
    , remote_node(this, {})
{

    yang_name = "ipfrr-event-offline"; yang_parent_name = "ipfrr-event-offlines"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::~IpfrrEventOffline()
{
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipfrr_statistic.len(); index++)
    {
        if(ipfrr_statistic[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<remote_node.len(); index++)
    {
        if(remote_node[index]->has_data())
            return true;
    }
    return event_id.is_set
	|| event_id_xr.is_set
	|| trigger_time.is_set
	|| trigger_spf_run.is_set
	|| wait_time.is_set
	|| start_time_offset.is_set
	|| duration.is_set
	|| completed_spf_run.is_set
	|| total_routes.is_set
	|| fully_protected_routes.is_set
	|| partially_protected_routes.is_set
	|| coverage.is_set;
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::has_operation() const
{
    for (std::size_t index=0; index<ipfrr_statistic.len(); index++)
    {
        if(ipfrr_statistic[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<remote_node.len(); index++)
    {
        if(remote_node[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(event_id.yfilter)
	|| ydk::is_set(event_id_xr.yfilter)
	|| ydk::is_set(trigger_time.yfilter)
	|| ydk::is_set(trigger_spf_run.yfilter)
	|| ydk::is_set(wait_time.yfilter)
	|| ydk::is_set(start_time_offset.yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(completed_spf_run.yfilter)
	|| ydk::is_set(total_routes.yfilter)
	|| ydk::is_set(fully_protected_routes.yfilter)
	|| ydk::is_set(partially_protected_routes.yfilter)
	|| ydk::is_set(coverage.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipfrr-event-offline";
    ADD_KEY_TOKEN(event_id, "event-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_id.is_set || is_set(event_id.yfilter)) leaf_name_data.push_back(event_id.get_name_leafdata());
    if (event_id_xr.is_set || is_set(event_id_xr.yfilter)) leaf_name_data.push_back(event_id_xr.get_name_leafdata());
    if (trigger_time.is_set || is_set(trigger_time.yfilter)) leaf_name_data.push_back(trigger_time.get_name_leafdata());
    if (trigger_spf_run.is_set || is_set(trigger_spf_run.yfilter)) leaf_name_data.push_back(trigger_spf_run.get_name_leafdata());
    if (wait_time.is_set || is_set(wait_time.yfilter)) leaf_name_data.push_back(wait_time.get_name_leafdata());
    if (start_time_offset.is_set || is_set(start_time_offset.yfilter)) leaf_name_data.push_back(start_time_offset.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (completed_spf_run.is_set || is_set(completed_spf_run.yfilter)) leaf_name_data.push_back(completed_spf_run.get_name_leafdata());
    if (total_routes.is_set || is_set(total_routes.yfilter)) leaf_name_data.push_back(total_routes.get_name_leafdata());
    if (fully_protected_routes.is_set || is_set(fully_protected_routes.yfilter)) leaf_name_data.push_back(fully_protected_routes.get_name_leafdata());
    if (partially_protected_routes.is_set || is_set(partially_protected_routes.yfilter)) leaf_name_data.push_back(partially_protected_routes.get_name_leafdata());
    if (coverage.is_set || is_set(coverage.yfilter)) leaf_name_data.push_back(coverage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipfrr-statistic")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic>();
        ent_->parent = this;
        ipfrr_statistic.append(ent_);
        return ent_;
    }

    if(child_yang_name == "remote-node")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode>();
        ent_->parent = this;
        remote_node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipfrr_statistic.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : remote_node.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-id")
    {
        event_id = value;
        event_id.value_namespace = name_space;
        event_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-id-xr")
    {
        event_id_xr = value;
        event_id_xr.value_namespace = name_space;
        event_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-time")
    {
        trigger_time = value;
        trigger_time.value_namespace = name_space;
        trigger_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-spf-run")
    {
        trigger_spf_run = value;
        trigger_spf_run.value_namespace = name_space;
        trigger_spf_run.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-time")
    {
        wait_time = value;
        wait_time.value_namespace = name_space;
        wait_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time-offset")
    {
        start_time_offset = value;
        start_time_offset.value_namespace = name_space;
        start_time_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "completed-spf-run")
    {
        completed_spf_run = value;
        completed_spf_run.value_namespace = name_space;
        completed_spf_run.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-routes")
    {
        total_routes = value;
        total_routes.value_namespace = name_space;
        total_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fully-protected-routes")
    {
        fully_protected_routes = value;
        fully_protected_routes.value_namespace = name_space;
        fully_protected_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partially-protected-routes")
    {
        partially_protected_routes = value;
        partially_protected_routes.value_namespace = name_space;
        partially_protected_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coverage")
    {
        coverage = value;
        coverage.value_namespace = name_space;
        coverage.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-id")
    {
        event_id.yfilter = yfilter;
    }
    if(value_path == "event-id-xr")
    {
        event_id_xr.yfilter = yfilter;
    }
    if(value_path == "trigger-time")
    {
        trigger_time.yfilter = yfilter;
    }
    if(value_path == "trigger-spf-run")
    {
        trigger_spf_run.yfilter = yfilter;
    }
    if(value_path == "wait-time")
    {
        wait_time.yfilter = yfilter;
    }
    if(value_path == "start-time-offset")
    {
        start_time_offset.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "completed-spf-run")
    {
        completed_spf_run.yfilter = yfilter;
    }
    if(value_path == "total-routes")
    {
        total_routes.yfilter = yfilter;
    }
    if(value_path == "fully-protected-routes")
    {
        fully_protected_routes.yfilter = yfilter;
    }
    if(value_path == "partially-protected-routes")
    {
        partially_protected_routes.yfilter = yfilter;
    }
    if(value_path == "coverage")
    {
        coverage.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipfrr-statistic" || name == "remote-node" || name == "event-id" || name == "event-id-xr" || name == "trigger-time" || name == "trigger-spf-run" || name == "wait-time" || name == "start-time-offset" || name == "duration" || name == "completed-spf-run" || name == "total-routes" || name == "fully-protected-routes" || name == "partially-protected-routes" || name == "coverage")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic::IpfrrStatistic()
    :
    priority{YType::enumeration, "priority"},
    total_routes{YType::uint32, "total-routes"},
    fully_protected_routes{YType::uint32, "fully-protected-routes"},
    partially_protected_routes{YType::uint32, "partially-protected-routes"},
    coverage{YType::str, "coverage"},
    local_lfa_coverage{YType::str, "local-lfa-coverage"},
    remote_lfa_coverage{YType::str, "remote-lfa-coverage"},
    below_threshold{YType::boolean, "below-threshold"}
{

    yang_name = "ipfrr-statistic"; yang_parent_name = "ipfrr-event-offline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic::~IpfrrStatistic()
{
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic::has_data() const
{
    if (is_presence_container) return true;
    return priority.is_set
	|| total_routes.is_set
	|| fully_protected_routes.is_set
	|| partially_protected_routes.is_set
	|| coverage.is_set
	|| local_lfa_coverage.is_set
	|| remote_lfa_coverage.is_set
	|| below_threshold.is_set;
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(total_routes.yfilter)
	|| ydk::is_set(fully_protected_routes.yfilter)
	|| ydk::is_set(partially_protected_routes.yfilter)
	|| ydk::is_set(coverage.yfilter)
	|| ydk::is_set(local_lfa_coverage.yfilter)
	|| ydk::is_set(remote_lfa_coverage.yfilter)
	|| ydk::is_set(below_threshold.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipfrr-statistic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (total_routes.is_set || is_set(total_routes.yfilter)) leaf_name_data.push_back(total_routes.get_name_leafdata());
    if (fully_protected_routes.is_set || is_set(fully_protected_routes.yfilter)) leaf_name_data.push_back(fully_protected_routes.get_name_leafdata());
    if (partially_protected_routes.is_set || is_set(partially_protected_routes.yfilter)) leaf_name_data.push_back(partially_protected_routes.get_name_leafdata());
    if (coverage.is_set || is_set(coverage.yfilter)) leaf_name_data.push_back(coverage.get_name_leafdata());
    if (local_lfa_coverage.is_set || is_set(local_lfa_coverage.yfilter)) leaf_name_data.push_back(local_lfa_coverage.get_name_leafdata());
    if (remote_lfa_coverage.is_set || is_set(remote_lfa_coverage.yfilter)) leaf_name_data.push_back(remote_lfa_coverage.get_name_leafdata());
    if (below_threshold.is_set || is_set(below_threshold.yfilter)) leaf_name_data.push_back(below_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-routes")
    {
        total_routes = value;
        total_routes.value_namespace = name_space;
        total_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fully-protected-routes")
    {
        fully_protected_routes = value;
        fully_protected_routes.value_namespace = name_space;
        fully_protected_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partially-protected-routes")
    {
        partially_protected_routes = value;
        partially_protected_routes.value_namespace = name_space;
        partially_protected_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coverage")
    {
        coverage = value;
        coverage.value_namespace = name_space;
        coverage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-lfa-coverage")
    {
        local_lfa_coverage = value;
        local_lfa_coverage.value_namespace = name_space;
        local_lfa_coverage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-coverage")
    {
        remote_lfa_coverage = value;
        remote_lfa_coverage.value_namespace = name_space;
        remote_lfa_coverage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "below-threshold")
    {
        below_threshold = value;
        below_threshold.value_namespace = name_space;
        below_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "total-routes")
    {
        total_routes.yfilter = yfilter;
    }
    if(value_path == "fully-protected-routes")
    {
        fully_protected_routes.yfilter = yfilter;
    }
    if(value_path == "partially-protected-routes")
    {
        partially_protected_routes.yfilter = yfilter;
    }
    if(value_path == "coverage")
    {
        coverage.yfilter = yfilter;
    }
    if(value_path == "local-lfa-coverage")
    {
        local_lfa_coverage.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-coverage")
    {
        remote_lfa_coverage.yfilter = yfilter;
    }
    if(value_path == "below-threshold")
    {
        below_threshold.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority" || name == "total-routes" || name == "fully-protected-routes" || name == "partially-protected-routes" || name == "coverage" || name == "local-lfa-coverage" || name == "remote-lfa-coverage" || name == "below-threshold")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::RemoteNode()
    :
    remote_node_id{YType::str, "remote-node-id"},
    interface_name{YType::str, "interface-name"},
    neighbour_address{YType::str, "neighbour-address"},
    path_count{YType::uint32, "path-count"},
    in_use_time{YType::str, "in-use-time"}
        ,
    primary_path(this, {})
{

    yang_name = "remote-node"; yang_parent_name = "ipfrr-event-offline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::~RemoteNode()
{
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<primary_path.len(); index++)
    {
        if(primary_path[index]->has_data())
            return true;
    }
    return remote_node_id.is_set
	|| interface_name.is_set
	|| neighbour_address.is_set
	|| path_count.is_set
	|| in_use_time.is_set;
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::has_operation() const
{
    for (std::size_t index=0; index<primary_path.len(); index++)
    {
        if(primary_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(remote_node_id.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbour_address.yfilter)
	|| ydk::is_set(path_count.yfilter)
	|| ydk::is_set(in_use_time.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-node";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (remote_node_id.is_set || is_set(remote_node_id.yfilter)) leaf_name_data.push_back(remote_node_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbour_address.is_set || is_set(neighbour_address.yfilter)) leaf_name_data.push_back(neighbour_address.get_name_leafdata());
    if (path_count.is_set || is_set(path_count.yfilter)) leaf_name_data.push_back(path_count.get_name_leafdata());
    if (in_use_time.is_set || is_set(in_use_time.yfilter)) leaf_name_data.push_back(in_use_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "primary-path")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath>();
        ent_->parent = this;
        primary_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : primary_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "remote-node-id")
    {
        remote_node_id = value;
        remote_node_id.value_namespace = name_space;
        remote_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address = value;
        neighbour_address.value_namespace = name_space;
        neighbour_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-count")
    {
        path_count = value;
        path_count.value_namespace = name_space;
        path_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-use-time")
    {
        in_use_time = value;
        in_use_time.value_namespace = name_space;
        in_use_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "remote-node-id")
    {
        remote_node_id.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address.yfilter = yfilter;
    }
    if(value_path == "path-count")
    {
        path_count.yfilter = yfilter;
    }
    if(value_path == "in-use-time")
    {
        in_use_time.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary-path" || name == "remote-node-id" || name == "interface-name" || name == "neighbour-address" || name == "path-count" || name == "in-use-time")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath::PrimaryPath()
    :
    interface_name{YType::str, "interface-name"},
    neighbour_address{YType::str, "neighbour-address"}
{

    yang_name = "primary-path"; yang_parent_name = "remote-node"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath::~PrimaryPath()
{
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| neighbour_address.is_set;
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbour_address.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbour_address.is_set || is_set(neighbour_address.yfilter)) leaf_name_data.push_back(neighbour_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address = value;
        neighbour_address.value_namespace = name_space;
        neighbour_address.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "neighbour-address")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOfflines()
    :
    spf_run_offline(this, {"spf_run_number"})
{

    yang_name = "spf-run-offlines"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::~SpfRunOfflines()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<spf_run_offline.len(); index++)
    {
        if(spf_run_offline[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::has_operation() const
{
    for (std::size_t index=0; index<spf_run_offline.len(); index++)
    {
        if(spf_run_offline[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-run-offlines";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunOfflines::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spf-run-offline")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline>();
        ent_->parent = this;
        spf_run_offline.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : spf_run_offline.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spf-run-offline")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfRunOffline()
    :
    spf_run_number{YType::uint32, "spf-run-number"},
    start_time{YType::str, "start-time"},
    wait_time{YType::uint32, "wait-time"},
    reason{YType::str, "reason"}
        ,
    spf_summary(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary>())
    , node_statistics(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::NodeStatistics>())
    , trigger_lsp(this, {})
    , priority(this, {})
    , lsp_processed(this, {})
    , lsp_regenerated(this, {})
{
    spf_summary->parent = this;
    node_statistics->parent = this;

    yang_name = "spf-run-offline"; yang_parent_name = "spf-run-offlines"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::~SpfRunOffline()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<trigger_lsp.len(); index++)
    {
        if(trigger_lsp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<priority.len(); index++)
    {
        if(priority[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lsp_processed.len(); index++)
    {
        if(lsp_processed[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lsp_regenerated.len(); index++)
    {
        if(lsp_regenerated[index]->has_data())
            return true;
    }
    return spf_run_number.is_set
	|| start_time.is_set
	|| wait_time.is_set
	|| reason.is_set
	|| (spf_summary !=  nullptr && spf_summary->has_data())
	|| (node_statistics !=  nullptr && node_statistics->has_data());
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::has_operation() const
{
    for (std::size_t index=0; index<trigger_lsp.len(); index++)
    {
        if(trigger_lsp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<priority.len(); index++)
    {
        if(priority[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lsp_processed.len(); index++)
    {
        if(lsp_processed[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lsp_regenerated.len(); index++)
    {
        if(lsp_regenerated[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(spf_run_number.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(wait_time.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| (spf_summary !=  nullptr && spf_summary->has_operation())
	|| (node_statistics !=  nullptr && node_statistics->has_operation());
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-run-offline";
    ADD_KEY_TOKEN(spf_run_number, "spf-run-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (spf_run_number.is_set || is_set(spf_run_number.yfilter)) leaf_name_data.push_back(spf_run_number.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (wait_time.is_set || is_set(wait_time.yfilter)) leaf_name_data.push_back(wait_time.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spf-summary")
    {
        if(spf_summary == nullptr)
        {
            spf_summary = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary>();
        }
        return spf_summary;
    }

    if(child_yang_name == "node-statistics")
    {
        if(node_statistics == nullptr)
        {
            node_statistics = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::NodeStatistics>();
        }
        return node_statistics;
    }

    if(child_yang_name == "trigger-lsp")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::TriggerLsp>();
        ent_->parent = this;
        trigger_lsp.append(ent_);
        return ent_;
    }

    if(child_yang_name == "priority")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority>();
        ent_->parent = this;
        priority.append(ent_);
        return ent_;
    }

    if(child_yang_name == "lsp-processed")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspProcessed>();
        ent_->parent = this;
        lsp_processed.append(ent_);
        return ent_;
    }

    if(child_yang_name == "lsp-regenerated")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspRegenerated>();
        ent_->parent = this;
        lsp_regenerated.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(spf_summary != nullptr)
    {
        _children["spf-summary"] = spf_summary;
    }

    if(node_statistics != nullptr)
    {
        _children["node-statistics"] = node_statistics;
    }

    count_ = 0;
    for (auto ent_ : trigger_lsp.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : priority.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : lsp_processed.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : lsp_regenerated.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "spf-run-number")
    {
        spf_run_number = value;
        spf_run_number.value_namespace = name_space;
        spf_run_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-time")
    {
        wait_time = value;
        wait_time.value_namespace = name_space;
        wait_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "spf-run-number")
    {
        spf_run_number.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "wait-time")
    {
        wait_time.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spf-summary" || name == "node-statistics" || name == "trigger-lsp" || name == "priority" || name == "lsp-processed" || name == "lsp-regenerated" || name == "spf-run-number" || name == "start-time" || name == "wait-time" || name == "reason")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::SpfSummary()
    :
    topology{YType::uint32, "topology"},
    isis_level{YType::enumeration, "isis-level"},
    type{YType::enumeration, "type"},
    threshold_exceeded{YType::boolean, "threshold-exceeded"},
    state{YType::enumeration, "state"},
    is_data_complete{YType::boolean, "is-data-complete"},
    trigger_time{YType::str, "trigger-time"},
    duration{YType::str, "duration"},
    total_lsp_changes{YType::uint16, "total-lsp-changes"}
        ,
    priority_summary(this, {})
{

    yang_name = "spf-summary"; yang_parent_name = "spf-run-offline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::~SpfSummary()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<priority_summary.len(); index++)
    {
        if(priority_summary[index]->has_data())
            return true;
    }
    return topology.is_set
	|| isis_level.is_set
	|| type.is_set
	|| threshold_exceeded.is_set
	|| state.is_set
	|| is_data_complete.is_set
	|| trigger_time.is_set
	|| duration.is_set
	|| total_lsp_changes.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::has_operation() const
{
    for (std::size_t index=0; index<priority_summary.len(); index++)
    {
        if(priority_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(topology.yfilter)
	|| ydk::is_set(isis_level.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(threshold_exceeded.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(is_data_complete.yfilter)
	|| ydk::is_set(trigger_time.yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(total_lsp_changes.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (topology.is_set || is_set(topology.yfilter)) leaf_name_data.push_back(topology.get_name_leafdata());
    if (isis_level.is_set || is_set(isis_level.yfilter)) leaf_name_data.push_back(isis_level.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (threshold_exceeded.is_set || is_set(threshold_exceeded.yfilter)) leaf_name_data.push_back(threshold_exceeded.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (is_data_complete.is_set || is_set(is_data_complete.yfilter)) leaf_name_data.push_back(is_data_complete.get_name_leafdata());
    if (trigger_time.is_set || is_set(trigger_time.yfilter)) leaf_name_data.push_back(trigger_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (total_lsp_changes.is_set || is_set(total_lsp_changes.yfilter)) leaf_name_data.push_back(total_lsp_changes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority-summary")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary>();
        ent_->parent = this;
        priority_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : priority_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "topology")
    {
        topology = value;
        topology.value_namespace = name_space;
        topology.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-level")
    {
        isis_level = value;
        isis_level.value_namespace = name_space;
        isis_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded = value;
        threshold_exceeded.value_namespace = name_space;
        threshold_exceeded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-data-complete")
    {
        is_data_complete = value;
        is_data_complete.value_namespace = name_space;
        is_data_complete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-time")
    {
        trigger_time = value;
        trigger_time.value_namespace = name_space;
        trigger_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-lsp-changes")
    {
        total_lsp_changes = value;
        total_lsp_changes.value_namespace = name_space;
        total_lsp_changes.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "topology")
    {
        topology.yfilter = yfilter;
    }
    if(value_path == "isis-level")
    {
        isis_level.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "is-data-complete")
    {
        is_data_complete.yfilter = yfilter;
    }
    if(value_path == "trigger-time")
    {
        trigger_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "total-lsp-changes")
    {
        total_lsp_changes.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority-summary" || name == "topology" || name == "isis-level" || name == "type" || name == "threshold-exceeded" || name == "state" || name == "is-data-complete" || name == "trigger-time" || name == "duration" || name == "total-lsp-changes")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::PrioritySummary()
    :
    level{YType::enumeration, "level"},
    threshold_exceeded{YType::boolean, "threshold-exceeded"}
        ,
    route_statistics(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics>())
    , ip_convergence_time(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime>())
    , mpls_convergence_time(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime>())
    , frr_statistic(this, {})
{
    route_statistics->parent = this;
    ip_convergence_time->parent = this;
    mpls_convergence_time->parent = this;

    yang_name = "priority-summary"; yang_parent_name = "spf-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::~PrioritySummary()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<frr_statistic.len(); index++)
    {
        if(frr_statistic[index]->has_data())
            return true;
    }
    return level.is_set
	|| threshold_exceeded.is_set
	|| (route_statistics !=  nullptr && route_statistics->has_data())
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_data())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_data());
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::has_operation() const
{
    for (std::size_t index=0; index<frr_statistic.len(); index++)
    {
        if(frr_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(threshold_exceeded.yfilter)
	|| (route_statistics !=  nullptr && route_statistics->has_operation())
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_operation())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_operation());
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (threshold_exceeded.is_set || is_set(threshold_exceeded.yfilter)) leaf_name_data.push_back(threshold_exceeded.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-statistics")
    {
        if(route_statistics == nullptr)
        {
            route_statistics = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics>();
        }
        return route_statistics;
    }

    if(child_yang_name == "ip-convergence-time")
    {
        if(ip_convergence_time == nullptr)
        {
            ip_convergence_time = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime>();
        }
        return ip_convergence_time;
    }

    if(child_yang_name == "mpls-convergence-time")
    {
        if(mpls_convergence_time == nullptr)
        {
            mpls_convergence_time = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime>();
        }
        return mpls_convergence_time;
    }

    if(child_yang_name == "frr-statistic")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic>();
        ent_->parent = this;
        frr_statistic.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(route_statistics != nullptr)
    {
        _children["route-statistics"] = route_statistics;
    }

    if(ip_convergence_time != nullptr)
    {
        _children["ip-convergence-time"] = ip_convergence_time;
    }

    if(mpls_convergence_time != nullptr)
    {
        _children["mpls-convergence-time"] = mpls_convergence_time;
    }

    count_ = 0;
    for (auto ent_ : frr_statistic.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded = value;
        threshold_exceeded.value_namespace = name_space;
        threshold_exceeded.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-statistics" || name == "ip-convergence-time" || name == "mpls-convergence-time" || name == "frr-statistic" || name == "level" || name == "threshold-exceeded")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics::RouteStatistics()
    :
    adds{YType::uint32, "adds"},
    deletes{YType::uint32, "deletes"},
    modifies{YType::uint32, "modifies"},
    reachables{YType::uint32, "reachables"},
    unreachables{YType::uint32, "unreachables"},
    touches{YType::uint32, "touches"}
{

    yang_name = "route-statistics"; yang_parent_name = "priority-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics::~RouteStatistics()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics::has_data() const
{
    if (is_presence_container) return true;
    return adds.is_set
	|| deletes.is_set
	|| modifies.is_set
	|| reachables.is_set
	|| unreachables.is_set
	|| touches.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adds.yfilter)
	|| ydk::is_set(deletes.yfilter)
	|| ydk::is_set(modifies.yfilter)
	|| ydk::is_set(reachables.yfilter)
	|| ydk::is_set(unreachables.yfilter)
	|| ydk::is_set(touches.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adds.is_set || is_set(adds.yfilter)) leaf_name_data.push_back(adds.get_name_leafdata());
    if (deletes.is_set || is_set(deletes.yfilter)) leaf_name_data.push_back(deletes.get_name_leafdata());
    if (modifies.is_set || is_set(modifies.yfilter)) leaf_name_data.push_back(modifies.get_name_leafdata());
    if (reachables.is_set || is_set(reachables.yfilter)) leaf_name_data.push_back(reachables.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.yfilter)) leaf_name_data.push_back(unreachables.get_name_leafdata());
    if (touches.is_set || is_set(touches.yfilter)) leaf_name_data.push_back(touches.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adds")
    {
        adds = value;
        adds.value_namespace = name_space;
        adds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deletes")
    {
        deletes = value;
        deletes.value_namespace = name_space;
        deletes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "modifies")
    {
        modifies = value;
        modifies.value_namespace = name_space;
        modifies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachables")
    {
        reachables = value;
        reachables.value_namespace = name_space;
        reachables.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachables")
    {
        unreachables = value;
        unreachables.value_namespace = name_space;
        unreachables.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "touches")
    {
        touches = value;
        touches.value_namespace = name_space;
        touches.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adds")
    {
        adds.yfilter = yfilter;
    }
    if(value_path == "deletes")
    {
        deletes.yfilter = yfilter;
    }
    if(value_path == "modifies")
    {
        modifies.yfilter = yfilter;
    }
    if(value_path == "reachables")
    {
        reachables.yfilter = yfilter;
    }
    if(value_path == "unreachables")
    {
        unreachables.yfilter = yfilter;
    }
    if(value_path == "touches")
    {
        touches.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adds" || name == "deletes" || name == "modifies" || name == "reachables" || name == "unreachables" || name == "touches")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime::IpConvergenceTime()
    :
    minimum_time{YType::str, "minimum-time"},
    maximum_time{YType::str, "maximum-time"},
    slowest_node_name{YType::str, "slowest-node-name"},
    fastest_node_name{YType::str, "fastest-node-name"}
{

    yang_name = "ip-convergence-time"; yang_parent_name = "priority-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime::~IpConvergenceTime()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime::has_data() const
{
    if (is_presence_container) return true;
    return minimum_time.is_set
	|| maximum_time.is_set
	|| slowest_node_name.is_set
	|| fastest_node_name.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter)
	|| ydk::is_set(fastest_node_name.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-convergence-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());
    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-time" || name == "maximum-time" || name == "slowest-node-name" || name == "fastest-node-name")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime::MplsConvergenceTime()
    :
    minimum_time{YType::str, "minimum-time"},
    maximum_time{YType::str, "maximum-time"},
    slowest_node_name{YType::str, "slowest-node-name"},
    fastest_node_name{YType::str, "fastest-node-name"}
{

    yang_name = "mpls-convergence-time"; yang_parent_name = "priority-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime::~MplsConvergenceTime()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime::has_data() const
{
    if (is_presence_container) return true;
    return minimum_time.is_set
	|| maximum_time.is_set
	|| slowest_node_name.is_set
	|| fastest_node_name.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter)
	|| ydk::is_set(fastest_node_name.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-convergence-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());
    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-time" || name == "maximum-time" || name == "slowest-node-name" || name == "fastest-node-name")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic::FrrStatistic()
    :
    total_routes{YType::uint32, "total-routes"},
    fully_protected_routes{YType::uint32, "fully-protected-routes"},
    partially_protected_routes{YType::uint32, "partially-protected-routes"},
    coverage{YType::str, "coverage"}
{

    yang_name = "frr-statistic"; yang_parent_name = "priority-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic::~FrrStatistic()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic::has_data() const
{
    if (is_presence_container) return true;
    return total_routes.is_set
	|| fully_protected_routes.is_set
	|| partially_protected_routes.is_set
	|| coverage.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_routes.yfilter)
	|| ydk::is_set(fully_protected_routes.yfilter)
	|| ydk::is_set(partially_protected_routes.yfilter)
	|| ydk::is_set(coverage.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-statistic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_routes.is_set || is_set(total_routes.yfilter)) leaf_name_data.push_back(total_routes.get_name_leafdata());
    if (fully_protected_routes.is_set || is_set(fully_protected_routes.yfilter)) leaf_name_data.push_back(fully_protected_routes.get_name_leafdata());
    if (partially_protected_routes.is_set || is_set(partially_protected_routes.yfilter)) leaf_name_data.push_back(partially_protected_routes.get_name_leafdata());
    if (coverage.is_set || is_set(coverage.yfilter)) leaf_name_data.push_back(coverage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-routes")
    {
        total_routes = value;
        total_routes.value_namespace = name_space;
        total_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fully-protected-routes")
    {
        fully_protected_routes = value;
        fully_protected_routes.value_namespace = name_space;
        fully_protected_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partially-protected-routes")
    {
        partially_protected_routes = value;
        partially_protected_routes.value_namespace = name_space;
        partially_protected_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coverage")
    {
        coverage = value;
        coverage.value_namespace = name_space;
        coverage.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-routes")
    {
        total_routes.yfilter = yfilter;
    }
    if(value_path == "fully-protected-routes")
    {
        fully_protected_routes.yfilter = yfilter;
    }
    if(value_path == "partially-protected-routes")
    {
        partially_protected_routes.yfilter = yfilter;
    }
    if(value_path == "coverage")
    {
        coverage.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-routes" || name == "fully-protected-routes" || name == "partially-protected-routes" || name == "coverage")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::NodeStatistics::NodeStatistics()
    :
    adds{YType::uint32, "adds"},
    deletes{YType::uint32, "deletes"},
    modifies{YType::uint32, "modifies"},
    reachables{YType::uint32, "reachables"},
    unreachables{YType::uint32, "unreachables"},
    touches{YType::uint32, "touches"}
{

    yang_name = "node-statistics"; yang_parent_name = "spf-run-offline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::NodeStatistics::~NodeStatistics()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::NodeStatistics::has_data() const
{
    if (is_presence_container) return true;
    return adds.is_set
	|| deletes.is_set
	|| modifies.is_set
	|| reachables.is_set
	|| unreachables.is_set
	|| touches.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::NodeStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adds.yfilter)
	|| ydk::is_set(deletes.yfilter)
	|| ydk::is_set(modifies.yfilter)
	|| ydk::is_set(reachables.yfilter)
	|| ydk::is_set(unreachables.yfilter)
	|| ydk::is_set(touches.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::NodeStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::NodeStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adds.is_set || is_set(adds.yfilter)) leaf_name_data.push_back(adds.get_name_leafdata());
    if (deletes.is_set || is_set(deletes.yfilter)) leaf_name_data.push_back(deletes.get_name_leafdata());
    if (modifies.is_set || is_set(modifies.yfilter)) leaf_name_data.push_back(modifies.get_name_leafdata());
    if (reachables.is_set || is_set(reachables.yfilter)) leaf_name_data.push_back(reachables.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.yfilter)) leaf_name_data.push_back(unreachables.get_name_leafdata());
    if (touches.is_set || is_set(touches.yfilter)) leaf_name_data.push_back(touches.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::NodeStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::NodeStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::NodeStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adds")
    {
        adds = value;
        adds.value_namespace = name_space;
        adds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deletes")
    {
        deletes = value;
        deletes.value_namespace = name_space;
        deletes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "modifies")
    {
        modifies = value;
        modifies.value_namespace = name_space;
        modifies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachables")
    {
        reachables = value;
        reachables.value_namespace = name_space;
        reachables.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachables")
    {
        unreachables = value;
        unreachables.value_namespace = name_space;
        unreachables.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "touches")
    {
        touches = value;
        touches.value_namespace = name_space;
        touches.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::NodeStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adds")
    {
        adds.yfilter = yfilter;
    }
    if(value_path == "deletes")
    {
        deletes.yfilter = yfilter;
    }
    if(value_path == "modifies")
    {
        modifies.yfilter = yfilter;
    }
    if(value_path == "reachables")
    {
        reachables.yfilter = yfilter;
    }
    if(value_path == "unreachables")
    {
        unreachables.yfilter = yfilter;
    }
    if(value_path == "touches")
    {
        touches.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::NodeStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adds" || name == "deletes" || name == "modifies" || name == "reachables" || name == "unreachables" || name == "touches")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::TriggerLsp::TriggerLsp()
    :
    lsp_id{YType::str, "lsp-id"},
    sequence_number{YType::uint32, "sequence-number"},
    change_type{YType::enumeration, "change-type"},
    reception_time{YType::str, "reception-time"}
{

    yang_name = "trigger-lsp"; yang_parent_name = "spf-run-offline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::TriggerLsp::~TriggerLsp()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::TriggerLsp::has_data() const
{
    if (is_presence_container) return true;
    return lsp_id.is_set
	|| sequence_number.is_set
	|| change_type.is_set
	|| reception_time.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::TriggerLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(reception_time.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::TriggerLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::TriggerLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (reception_time.is_set || is_set(reception_time.yfilter)) leaf_name_data.push_back(reception_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::TriggerLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::TriggerLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::TriggerLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reception-time")
    {
        reception_time = value;
        reception_time.value_namespace = name_space;
        reception_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::TriggerLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "reception-time")
    {
        reception_time.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::TriggerLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-id" || name == "sequence-number" || name == "change-type" || name == "reception-time")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::Priority()
    :
    priority_summary(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary>())
    , convergence_timeline(this, {})
    , leaf_networks_added(this, {})
    , leaf_networks_deleted(this, {})
{
    priority_summary->parent = this;

    yang_name = "priority"; yang_parent_name = "spf-run-offline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::~Priority()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<convergence_timeline.len(); index++)
    {
        if(convergence_timeline[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<leaf_networks_added.len(); index++)
    {
        if(leaf_networks_added[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<leaf_networks_deleted.len(); index++)
    {
        if(leaf_networks_deleted[index]->has_data())
            return true;
    }
    return (priority_summary !=  nullptr && priority_summary->has_data());
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::has_operation() const
{
    for (std::size_t index=0; index<convergence_timeline.len(); index++)
    {
        if(convergence_timeline[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<leaf_networks_added.len(); index++)
    {
        if(leaf_networks_added[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<leaf_networks_deleted.len(); index++)
    {
        if(leaf_networks_deleted[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (priority_summary !=  nullptr && priority_summary->has_operation());
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority-summary")
    {
        if(priority_summary == nullptr)
        {
            priority_summary = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary>();
        }
        return priority_summary;
    }

    if(child_yang_name == "convergence-timeline")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline>();
        ent_->parent = this;
        convergence_timeline.append(ent_);
        return ent_;
    }

    if(child_yang_name == "leaf-networks-added")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksAdded>();
        ent_->parent = this;
        leaf_networks_added.append(ent_);
        return ent_;
    }

    if(child_yang_name == "leaf-networks-deleted")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksDeleted>();
        ent_->parent = this;
        leaf_networks_deleted.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(priority_summary != nullptr)
    {
        _children["priority-summary"] = priority_summary;
    }

    count_ = 0;
    for (auto ent_ : convergence_timeline.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : leaf_networks_added.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : leaf_networks_deleted.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority-summary" || name == "convergence-timeline" || name == "leaf-networks-added" || name == "leaf-networks-deleted")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::PrioritySummary()
    :
    level{YType::enumeration, "level"},
    threshold_exceeded{YType::boolean, "threshold-exceeded"}
        ,
    route_statistics(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::RouteStatistics>())
    , ip_convergence_time(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::IpConvergenceTime>())
    , mpls_convergence_time(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::MplsConvergenceTime>())
    , frr_statistic(this, {})
{
    route_statistics->parent = this;
    ip_convergence_time->parent = this;
    mpls_convergence_time->parent = this;

    yang_name = "priority-summary"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::~PrioritySummary()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<frr_statistic.len(); index++)
    {
        if(frr_statistic[index]->has_data())
            return true;
    }
    return level.is_set
	|| threshold_exceeded.is_set
	|| (route_statistics !=  nullptr && route_statistics->has_data())
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_data())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_data());
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::has_operation() const
{
    for (std::size_t index=0; index<frr_statistic.len(); index++)
    {
        if(frr_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(threshold_exceeded.yfilter)
	|| (route_statistics !=  nullptr && route_statistics->has_operation())
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_operation())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_operation());
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (threshold_exceeded.is_set || is_set(threshold_exceeded.yfilter)) leaf_name_data.push_back(threshold_exceeded.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-statistics")
    {
        if(route_statistics == nullptr)
        {
            route_statistics = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::RouteStatistics>();
        }
        return route_statistics;
    }

    if(child_yang_name == "ip-convergence-time")
    {
        if(ip_convergence_time == nullptr)
        {
            ip_convergence_time = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::IpConvergenceTime>();
        }
        return ip_convergence_time;
    }

    if(child_yang_name == "mpls-convergence-time")
    {
        if(mpls_convergence_time == nullptr)
        {
            mpls_convergence_time = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::MplsConvergenceTime>();
        }
        return mpls_convergence_time;
    }

    if(child_yang_name == "frr-statistic")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::FrrStatistic>();
        ent_->parent = this;
        frr_statistic.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(route_statistics != nullptr)
    {
        _children["route-statistics"] = route_statistics;
    }

    if(ip_convergence_time != nullptr)
    {
        _children["ip-convergence-time"] = ip_convergence_time;
    }

    if(mpls_convergence_time != nullptr)
    {
        _children["mpls-convergence-time"] = mpls_convergence_time;
    }

    count_ = 0;
    for (auto ent_ : frr_statistic.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded = value;
        threshold_exceeded.value_namespace = name_space;
        threshold_exceeded.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-statistics" || name == "ip-convergence-time" || name == "mpls-convergence-time" || name == "frr-statistic" || name == "level" || name == "threshold-exceeded")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::RouteStatistics::RouteStatistics()
    :
    adds{YType::uint32, "adds"},
    deletes{YType::uint32, "deletes"},
    modifies{YType::uint32, "modifies"},
    reachables{YType::uint32, "reachables"},
    unreachables{YType::uint32, "unreachables"},
    touches{YType::uint32, "touches"}
{

    yang_name = "route-statistics"; yang_parent_name = "priority-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::RouteStatistics::~RouteStatistics()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::RouteStatistics::has_data() const
{
    if (is_presence_container) return true;
    return adds.is_set
	|| deletes.is_set
	|| modifies.is_set
	|| reachables.is_set
	|| unreachables.is_set
	|| touches.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::RouteStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adds.yfilter)
	|| ydk::is_set(deletes.yfilter)
	|| ydk::is_set(modifies.yfilter)
	|| ydk::is_set(reachables.yfilter)
	|| ydk::is_set(unreachables.yfilter)
	|| ydk::is_set(touches.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::RouteStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::RouteStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adds.is_set || is_set(adds.yfilter)) leaf_name_data.push_back(adds.get_name_leafdata());
    if (deletes.is_set || is_set(deletes.yfilter)) leaf_name_data.push_back(deletes.get_name_leafdata());
    if (modifies.is_set || is_set(modifies.yfilter)) leaf_name_data.push_back(modifies.get_name_leafdata());
    if (reachables.is_set || is_set(reachables.yfilter)) leaf_name_data.push_back(reachables.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.yfilter)) leaf_name_data.push_back(unreachables.get_name_leafdata());
    if (touches.is_set || is_set(touches.yfilter)) leaf_name_data.push_back(touches.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::RouteStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::RouteStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::RouteStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adds")
    {
        adds = value;
        adds.value_namespace = name_space;
        adds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "deletes")
    {
        deletes = value;
        deletes.value_namespace = name_space;
        deletes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "modifies")
    {
        modifies = value;
        modifies.value_namespace = name_space;
        modifies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachables")
    {
        reachables = value;
        reachables.value_namespace = name_space;
        reachables.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachables")
    {
        unreachables = value;
        unreachables.value_namespace = name_space;
        unreachables.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "touches")
    {
        touches = value;
        touches.value_namespace = name_space;
        touches.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::RouteStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adds")
    {
        adds.yfilter = yfilter;
    }
    if(value_path == "deletes")
    {
        deletes.yfilter = yfilter;
    }
    if(value_path == "modifies")
    {
        modifies.yfilter = yfilter;
    }
    if(value_path == "reachables")
    {
        reachables.yfilter = yfilter;
    }
    if(value_path == "unreachables")
    {
        unreachables.yfilter = yfilter;
    }
    if(value_path == "touches")
    {
        touches.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::RouteStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adds" || name == "deletes" || name == "modifies" || name == "reachables" || name == "unreachables" || name == "touches")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::IpConvergenceTime::IpConvergenceTime()
    :
    minimum_time{YType::str, "minimum-time"},
    maximum_time{YType::str, "maximum-time"},
    slowest_node_name{YType::str, "slowest-node-name"},
    fastest_node_name{YType::str, "fastest-node-name"}
{

    yang_name = "ip-convergence-time"; yang_parent_name = "priority-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::IpConvergenceTime::~IpConvergenceTime()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::IpConvergenceTime::has_data() const
{
    if (is_presence_container) return true;
    return minimum_time.is_set
	|| maximum_time.is_set
	|| slowest_node_name.is_set
	|| fastest_node_name.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::IpConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter)
	|| ydk::is_set(fastest_node_name.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::IpConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-convergence-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::IpConvergenceTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());
    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::IpConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::IpConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::IpConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::IpConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::IpConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-time" || name == "maximum-time" || name == "slowest-node-name" || name == "fastest-node-name")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::MplsConvergenceTime::MplsConvergenceTime()
    :
    minimum_time{YType::str, "minimum-time"},
    maximum_time{YType::str, "maximum-time"},
    slowest_node_name{YType::str, "slowest-node-name"},
    fastest_node_name{YType::str, "fastest-node-name"}
{

    yang_name = "mpls-convergence-time"; yang_parent_name = "priority-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::MplsConvergenceTime::~MplsConvergenceTime()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::MplsConvergenceTime::has_data() const
{
    if (is_presence_container) return true;
    return minimum_time.is_set
	|| maximum_time.is_set
	|| slowest_node_name.is_set
	|| fastest_node_name.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::MplsConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter)
	|| ydk::is_set(fastest_node_name.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::MplsConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-convergence-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::MplsConvergenceTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());
    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::MplsConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::MplsConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::MplsConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::MplsConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::MplsConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-time" || name == "maximum-time" || name == "slowest-node-name" || name == "fastest-node-name")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::FrrStatistic::FrrStatistic()
    :
    total_routes{YType::uint32, "total-routes"},
    fully_protected_routes{YType::uint32, "fully-protected-routes"},
    partially_protected_routes{YType::uint32, "partially-protected-routes"},
    coverage{YType::str, "coverage"}
{

    yang_name = "frr-statistic"; yang_parent_name = "priority-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::FrrStatistic::~FrrStatistic()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::FrrStatistic::has_data() const
{
    if (is_presence_container) return true;
    return total_routes.is_set
	|| fully_protected_routes.is_set
	|| partially_protected_routes.is_set
	|| coverage.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::FrrStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_routes.yfilter)
	|| ydk::is_set(fully_protected_routes.yfilter)
	|| ydk::is_set(partially_protected_routes.yfilter)
	|| ydk::is_set(coverage.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::FrrStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-statistic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::FrrStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_routes.is_set || is_set(total_routes.yfilter)) leaf_name_data.push_back(total_routes.get_name_leafdata());
    if (fully_protected_routes.is_set || is_set(fully_protected_routes.yfilter)) leaf_name_data.push_back(fully_protected_routes.get_name_leafdata());
    if (partially_protected_routes.is_set || is_set(partially_protected_routes.yfilter)) leaf_name_data.push_back(partially_protected_routes.get_name_leafdata());
    if (coverage.is_set || is_set(coverage.yfilter)) leaf_name_data.push_back(coverage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::FrrStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::FrrStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::FrrStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-routes")
    {
        total_routes = value;
        total_routes.value_namespace = name_space;
        total_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fully-protected-routes")
    {
        fully_protected_routes = value;
        fully_protected_routes.value_namespace = name_space;
        fully_protected_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partially-protected-routes")
    {
        partially_protected_routes = value;
        partially_protected_routes.value_namespace = name_space;
        partially_protected_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coverage")
    {
        coverage = value;
        coverage.value_namespace = name_space;
        coverage.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::FrrStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-routes")
    {
        total_routes.yfilter = yfilter;
    }
    if(value_path == "fully-protected-routes")
    {
        fully_protected_routes.yfilter = yfilter;
    }
    if(value_path == "partially-protected-routes")
    {
        partially_protected_routes.yfilter = yfilter;
    }
    if(value_path == "coverage")
    {
        coverage.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::FrrStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-routes" || name == "fully-protected-routes" || name == "partially-protected-routes" || name == "coverage")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::ConvergenceTimeline()
    :
    route_origin(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RouteOrigin>())
    , ri_bv4_enter(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Enter>())
    , ri_bv4_exit(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Exit>())
    , ri_bv4_redistribute(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Redistribute>())
    , ldp_enter(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpEnter>())
    , ldp_exit(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpExit>())
    , lsd_enter(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdEnter>())
    , lsd_exit(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdExit>())
    , lc_ip(this, {})
    , lc_mpls(this, {})
{
    route_origin->parent = this;
    ri_bv4_enter->parent = this;
    ri_bv4_exit->parent = this;
    ri_bv4_redistribute->parent = this;
    ldp_enter->parent = this;
    ldp_exit->parent = this;
    lsd_enter->parent = this;
    lsd_exit->parent = this;

    yang_name = "convergence-timeline"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::~ConvergenceTimeline()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lc_ip.len(); index++)
    {
        if(lc_ip[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lc_mpls.len(); index++)
    {
        if(lc_mpls[index]->has_data())
            return true;
    }
    return (route_origin !=  nullptr && route_origin->has_data())
	|| (ri_bv4_enter !=  nullptr && ri_bv4_enter->has_data())
	|| (ri_bv4_exit !=  nullptr && ri_bv4_exit->has_data())
	|| (ri_bv4_redistribute !=  nullptr && ri_bv4_redistribute->has_data())
	|| (ldp_enter !=  nullptr && ldp_enter->has_data())
	|| (ldp_exit !=  nullptr && ldp_exit->has_data())
	|| (lsd_enter !=  nullptr && lsd_enter->has_data())
	|| (lsd_exit !=  nullptr && lsd_exit->has_data());
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::has_operation() const
{
    for (std::size_t index=0; index<lc_ip.len(); index++)
    {
        if(lc_ip[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lc_mpls.len(); index++)
    {
        if(lc_mpls[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (route_origin !=  nullptr && route_origin->has_operation())
	|| (ri_bv4_enter !=  nullptr && ri_bv4_enter->has_operation())
	|| (ri_bv4_exit !=  nullptr && ri_bv4_exit->has_operation())
	|| (ri_bv4_redistribute !=  nullptr && ri_bv4_redistribute->has_operation())
	|| (ldp_enter !=  nullptr && ldp_enter->has_operation())
	|| (ldp_exit !=  nullptr && ldp_exit->has_operation())
	|| (lsd_enter !=  nullptr && lsd_enter->has_operation())
	|| (lsd_exit !=  nullptr && lsd_exit->has_operation());
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "convergence-timeline";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route-origin")
    {
        if(route_origin == nullptr)
        {
            route_origin = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RouteOrigin>();
        }
        return route_origin;
    }

    if(child_yang_name == "ri-bv4-enter")
    {
        if(ri_bv4_enter == nullptr)
        {
            ri_bv4_enter = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Enter>();
        }
        return ri_bv4_enter;
    }

    if(child_yang_name == "ri-bv4-exit")
    {
        if(ri_bv4_exit == nullptr)
        {
            ri_bv4_exit = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Exit>();
        }
        return ri_bv4_exit;
    }

    if(child_yang_name == "ri-bv4-redistribute")
    {
        if(ri_bv4_redistribute == nullptr)
        {
            ri_bv4_redistribute = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Redistribute>();
        }
        return ri_bv4_redistribute;
    }

    if(child_yang_name == "ldp-enter")
    {
        if(ldp_enter == nullptr)
        {
            ldp_enter = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpEnter>();
        }
        return ldp_enter;
    }

    if(child_yang_name == "ldp-exit")
    {
        if(ldp_exit == nullptr)
        {
            ldp_exit = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpExit>();
        }
        return ldp_exit;
    }

    if(child_yang_name == "lsd-enter")
    {
        if(lsd_enter == nullptr)
        {
            lsd_enter = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdEnter>();
        }
        return lsd_enter;
    }

    if(child_yang_name == "lsd-exit")
    {
        if(lsd_exit == nullptr)
        {
            lsd_exit = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdExit>();
        }
        return lsd_exit;
    }

    if(child_yang_name == "lc-ip")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp>();
        ent_->parent = this;
        lc_ip.append(ent_);
        return ent_;
    }

    if(child_yang_name == "lc-mpls")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls>();
        ent_->parent = this;
        lc_mpls.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(route_origin != nullptr)
    {
        _children["route-origin"] = route_origin;
    }

    if(ri_bv4_enter != nullptr)
    {
        _children["ri-bv4-enter"] = ri_bv4_enter;
    }

    if(ri_bv4_exit != nullptr)
    {
        _children["ri-bv4-exit"] = ri_bv4_exit;
    }

    if(ri_bv4_redistribute != nullptr)
    {
        _children["ri-bv4-redistribute"] = ri_bv4_redistribute;
    }

    if(ldp_enter != nullptr)
    {
        _children["ldp-enter"] = ldp_enter;
    }

    if(ldp_exit != nullptr)
    {
        _children["ldp-exit"] = ldp_exit;
    }

    if(lsd_enter != nullptr)
    {
        _children["lsd-enter"] = lsd_enter;
    }

    if(lsd_exit != nullptr)
    {
        _children["lsd-exit"] = lsd_exit;
    }

    count_ = 0;
    for (auto ent_ : lc_ip.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : lc_mpls.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-origin" || name == "ri-bv4-enter" || name == "ri-bv4-exit" || name == "ri-bv4-redistribute" || name == "ldp-enter" || name == "ldp-exit" || name == "lsd-enter" || name == "lsd-exit" || name == "lc-ip" || name == "lc-mpls")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RouteOrigin::RouteOrigin()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "route-origin"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RouteOrigin::~RouteOrigin()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RouteOrigin::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RouteOrigin::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RouteOrigin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-origin";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RouteOrigin::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RouteOrigin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RouteOrigin::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RouteOrigin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RouteOrigin::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RouteOrigin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Enter::RiBv4Enter()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "ri-bv4-enter"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Enter::~RiBv4Enter()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Enter::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Enter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Enter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ri-bv4-enter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Enter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Enter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Enter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Enter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Enter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Enter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Exit::RiBv4Exit()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "ri-bv4-exit"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Exit::~RiBv4Exit()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Exit::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Exit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Exit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ri-bv4-exit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Exit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Exit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Exit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Exit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Exit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Exit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Redistribute::RiBv4Redistribute()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "ri-bv4-redistribute"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Redistribute::~RiBv4Redistribute()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Redistribute::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Redistribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ri-bv4-redistribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Redistribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Redistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Redistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Redistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpEnter::LdpEnter()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "ldp-enter"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpEnter::~LdpEnter()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpEnter::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpEnter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpEnter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-enter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpEnter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpEnter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpEnter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpEnter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpEnter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpEnter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpExit::LdpExit()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "ldp-exit"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpExit::~LdpExit()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpExit::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpExit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpExit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-exit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpExit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpExit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpExit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpExit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpExit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpExit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdEnter::LsdEnter()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "lsd-enter"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdEnter::~LsdEnter()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdEnter::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdEnter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdEnter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsd-enter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdEnter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdEnter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdEnter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdEnter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdEnter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdEnter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdExit::LsdExit()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "lsd-exit"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdExit::~LsdExit()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdExit::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdExit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdExit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsd-exit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdExit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdExit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdExit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdExit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdExit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdExit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::LcIp()
    :
    node_name{YType::str, "node-name"},
    speed{YType::enumeration, "speed"}
        ,
    fib_complete(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::FibComplete>())
{
    fib_complete->parent = this;

    yang_name = "lc-ip"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::~LcIp()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| speed.is_set
	|| (fib_complete !=  nullptr && fib_complete->has_data());
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| (fib_complete !=  nullptr && fib_complete->has_operation());
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lc-ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fib-complete")
    {
        if(fib_complete == nullptr)
        {
            fib_complete = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::FibComplete>();
        }
        return fib_complete;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fib_complete != nullptr)
    {
        _children["fib-complete"] = fib_complete;
    }

    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fib-complete" || name == "node-name" || name == "speed")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::FibComplete::FibComplete()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "fib-complete"; yang_parent_name = "lc-ip"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::FibComplete::~FibComplete()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::FibComplete::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::FibComplete::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::FibComplete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-complete";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::FibComplete::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::FibComplete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::FibComplete::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::FibComplete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::FibComplete::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::FibComplete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::LcMpls()
    :
    node_name{YType::str, "node-name"},
    speed{YType::enumeration, "speed"}
        ,
    fib_complete(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::FibComplete>())
{
    fib_complete->parent = this;

    yang_name = "lc-mpls"; yang_parent_name = "convergence-timeline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::~LcMpls()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| speed.is_set
	|| (fib_complete !=  nullptr && fib_complete->has_data());
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| (fib_complete !=  nullptr && fib_complete->has_operation());
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lc-mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fib-complete")
    {
        if(fib_complete == nullptr)
        {
            fib_complete = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::FibComplete>();
        }
        return fib_complete;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(fib_complete != nullptr)
    {
        _children["fib-complete"] = fib_complete;
    }

    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fib-complete" || name == "node-name" || name == "speed")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::FibComplete::FibComplete()
    :
    start_time{YType::str, "start-time"},
    end_time{YType::str, "end-time"},
    duration{YType::str, "duration"}
{

    yang_name = "fib-complete"; yang_parent_name = "lc-mpls"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::FibComplete::~FibComplete()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::FibComplete::has_data() const
{
    if (is_presence_container) return true;
    return start_time.is_set
	|| end_time.is_set
	|| duration.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::FibComplete::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(duration.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::FibComplete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-complete";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::FibComplete::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::FibComplete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::FibComplete::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::FibComplete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::FibComplete::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::FibComplete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start-time" || name == "end-time" || name == "duration")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksAdded::LeafNetworksAdded()
    :
    address{YType::str, "address"},
    net_mask{YType::uint8, "net-mask"}
{

    yang_name = "leaf-networks-added"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksAdded::~LeafNetworksAdded()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksAdded::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| net_mask.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksAdded::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(net_mask.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksAdded::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "leaf-networks-added";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksAdded::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (net_mask.is_set || is_set(net_mask.yfilter)) leaf_name_data.push_back(net_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksAdded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksAdded::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksAdded::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "net-mask")
    {
        net_mask = value;
        net_mask.value_namespace = name_space;
        net_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksAdded::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "net-mask")
    {
        net_mask.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksAdded::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "net-mask")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksDeleted::LeafNetworksDeleted()
    :
    address{YType::str, "address"},
    net_mask{YType::uint8, "net-mask"}
{

    yang_name = "leaf-networks-deleted"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksDeleted::~LeafNetworksDeleted()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksDeleted::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| net_mask.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksDeleted::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(net_mask.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksDeleted::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "leaf-networks-deleted";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksDeleted::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (net_mask.is_set || is_set(net_mask.yfilter)) leaf_name_data.push_back(net_mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksDeleted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksDeleted::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksDeleted::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "net-mask")
    {
        net_mask = value;
        net_mask.value_namespace = name_space;
        net_mask.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksDeleted::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "net-mask")
    {
        net_mask.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksDeleted::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "net-mask")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspProcessed::LspProcessed()
    :
    lsp_id{YType::str, "lsp-id"},
    sequence_number{YType::uint32, "sequence-number"},
    change_type{YType::enumeration, "change-type"},
    reception_time{YType::str, "reception-time"}
{

    yang_name = "lsp-processed"; yang_parent_name = "spf-run-offline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspProcessed::~LspProcessed()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspProcessed::has_data() const
{
    if (is_presence_container) return true;
    return lsp_id.is_set
	|| sequence_number.is_set
	|| change_type.is_set
	|| reception_time.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspProcessed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(reception_time.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspProcessed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-processed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspProcessed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (reception_time.is_set || is_set(reception_time.yfilter)) leaf_name_data.push_back(reception_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspProcessed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspProcessed::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspProcessed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reception-time")
    {
        reception_time = value;
        reception_time.value_namespace = name_space;
        reception_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspProcessed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "reception-time")
    {
        reception_time.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspProcessed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-id" || name == "sequence-number" || name == "change-type" || name == "reception-time")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspRegenerated::LspRegenerated()
    :
    serial_number_xr{YType::uint32, "serial-number-xr"},
    lsp_id{YType::str, "lsp-id"},
    sequence_number{YType::uint32, "sequence-number"},
    reception_time{YType::str, "reception-time"},
    isis_level{YType::enumeration, "isis-level"},
    spf_run_number{YType::uint32, "spf-run-number"},
    reason{YType::str, "reason"}
{

    yang_name = "lsp-regenerated"; yang_parent_name = "spf-run-offline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspRegenerated::~LspRegenerated()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspRegenerated::has_data() const
{
    if (is_presence_container) return true;
    return serial_number_xr.is_set
	|| lsp_id.is_set
	|| sequence_number.is_set
	|| reception_time.is_set
	|| isis_level.is_set
	|| spf_run_number.is_set
	|| reason.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspRegenerated::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(serial_number_xr.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(reception_time.yfilter)
	|| ydk::is_set(isis_level.yfilter)
	|| ydk::is_set(spf_run_number.yfilter)
	|| ydk::is_set(reason.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspRegenerated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-regenerated";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspRegenerated::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (serial_number_xr.is_set || is_set(serial_number_xr.yfilter)) leaf_name_data.push_back(serial_number_xr.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (reception_time.is_set || is_set(reception_time.yfilter)) leaf_name_data.push_back(reception_time.get_name_leafdata());
    if (isis_level.is_set || is_set(isis_level.yfilter)) leaf_name_data.push_back(isis_level.get_name_leafdata());
    if (spf_run_number.is_set || is_set(spf_run_number.yfilter)) leaf_name_data.push_back(spf_run_number.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspRegenerated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspRegenerated::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspRegenerated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "serial-number-xr")
    {
        serial_number_xr = value;
        serial_number_xr.value_namespace = name_space;
        serial_number_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reception-time")
    {
        reception_time = value;
        reception_time.value_namespace = name_space;
        reception_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-level")
    {
        isis_level = value;
        isis_level.value_namespace = name_space;
        isis_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-run-number")
    {
        spf_run_number = value;
        spf_run_number.value_namespace = name_space;
        spf_run_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspRegenerated::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "serial-number-xr")
    {
        serial_number_xr.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "reception-time")
    {
        reception_time.yfilter = yfilter;
    }
    if(value_path == "isis-level")
    {
        isis_level.yfilter = yfilter;
    }
    if(value_path == "spf-run-number")
    {
        spf_run_number.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspRegenerated::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "serial-number-xr" || name == "lsp-id" || name == "sequence-number" || name == "reception-time" || name == "isis-level" || name == "spf-run-number" || name == "reason")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummaries()
    :
    prefix_event_summary(this, {"event_id"})
{

    yang_name = "prefix-event-summaries"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::PrefixEventSummaries::~PrefixEventSummaries()
{
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefix_event_summary.len(); index++)
    {
        if(prefix_event_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::has_operation() const
{
    for (std::size_t index=0; index<prefix_event_summary.len(); index++)
    {
        if(prefix_event_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rcmd::Isis::Instances::Instance::PrefixEventSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-event-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::PrefixEventSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::PrefixEventSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-event-summary")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary>();
        ent_->parent = this;
        prefix_event_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::PrefixEventSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prefix_event_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Isis::Instances::Instance::PrefixEventSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Isis::Instances::Instance::PrefixEventSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-event-summary")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::PrefixEventSummary()
    :
    event_id{YType::uint32, "event-id"},
    prefix{YType::str, "prefix"},
    prefix_lenth{YType::uint32, "prefix-lenth"},
    spf_run_no{YType::uint32, "spf-run-no"},
    ipfrr_event_id{YType::uint32, "ipfrr-event-id"},
    threshold_exceeded{YType::boolean, "threshold-exceeded"},
    priority{YType::enumeration, "priority"},
    change_type{YType::enumeration, "change-type"},
    route_type{YType::enumeration, "route-type"},
    route_path_change_type{YType::enumeration, "route-path-change-type"},
    cost{YType::uint32, "cost"},
    trigger_time{YType::str, "trigger-time"}
        ,
    ip_convergence_time(std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime>())
    , mpls_convergence_time(std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime>())
    , path(this, {})
    , trigger_lsa(this, {})
    , time_line(this, {})
    , lsa_processed(this, {})
{
    ip_convergence_time->parent = this;
    mpls_convergence_time->parent = this;

    yang_name = "prefix-event-summary"; yang_parent_name = "prefix-event-summaries"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::~PrefixEventSummary()
{
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path.len(); index++)
    {
        if(path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<trigger_lsa.len(); index++)
    {
        if(trigger_lsa[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<time_line.len(); index++)
    {
        if(time_line[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lsa_processed.len(); index++)
    {
        if(lsa_processed[index]->has_data())
            return true;
    }
    return event_id.is_set
	|| prefix.is_set
	|| prefix_lenth.is_set
	|| spf_run_no.is_set
	|| ipfrr_event_id.is_set
	|| threshold_exceeded.is_set
	|| priority.is_set
	|| change_type.is_set
	|| route_type.is_set
	|| route_path_change_type.is_set
	|| cost.is_set
	|| trigger_time.is_set
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_data())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_data());
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::has_operation() const
{
    for (std::size_t index=0; index<path.len(); index++)
    {
        if(path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<trigger_lsa.len(); index++)
    {
        if(trigger_lsa[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<time_line.len(); index++)
    {
        if(time_line[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lsa_processed.len(); index++)
    {
        if(lsa_processed[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(event_id.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_lenth.yfilter)
	|| ydk::is_set(spf_run_no.yfilter)
	|| ydk::is_set(ipfrr_event_id.yfilter)
	|| ydk::is_set(threshold_exceeded.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(route_path_change_type.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(trigger_time.yfilter)
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_operation())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_operation());
}

std::string Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-event-summary";
    ADD_KEY_TOKEN(event_id, "event-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_id.is_set || is_set(event_id.yfilter)) leaf_name_data.push_back(event_id.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_lenth.is_set || is_set(prefix_lenth.yfilter)) leaf_name_data.push_back(prefix_lenth.get_name_leafdata());
    if (spf_run_no.is_set || is_set(spf_run_no.yfilter)) leaf_name_data.push_back(spf_run_no.get_name_leafdata());
    if (ipfrr_event_id.is_set || is_set(ipfrr_event_id.yfilter)) leaf_name_data.push_back(ipfrr_event_id.get_name_leafdata());
    if (threshold_exceeded.is_set || is_set(threshold_exceeded.yfilter)) leaf_name_data.push_back(threshold_exceeded.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_path_change_type.is_set || is_set(route_path_change_type.yfilter)) leaf_name_data.push_back(route_path_change_type.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (trigger_time.is_set || is_set(trigger_time.yfilter)) leaf_name_data.push_back(trigger_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-convergence-time")
    {
        if(ip_convergence_time == nullptr)
        {
            ip_convergence_time = std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime>();
        }
        return ip_convergence_time;
    }

    if(child_yang_name == "mpls-convergence-time")
    {
        if(mpls_convergence_time == nullptr)
        {
            mpls_convergence_time = std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime>();
        }
        return mpls_convergence_time;
    }

    if(child_yang_name == "path")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path>();
        ent_->parent = this;
        path.append(ent_);
        return ent_;
    }

    if(child_yang_name == "trigger-lsa")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa>();
        ent_->parent = this;
        trigger_lsa.append(ent_);
        return ent_;
    }

    if(child_yang_name == "time-line")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine>();
        ent_->parent = this;
        time_line.append(ent_);
        return ent_;
    }

    if(child_yang_name == "lsa-processed")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed>();
        ent_->parent = this;
        lsa_processed.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip_convergence_time != nullptr)
    {
        _children["ip-convergence-time"] = ip_convergence_time;
    }

    if(mpls_convergence_time != nullptr)
    {
        _children["mpls-convergence-time"] = mpls_convergence_time;
    }

    count_ = 0;
    for (auto ent_ : path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : trigger_lsa.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : time_line.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : lsa_processed.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-id")
    {
        event_id = value;
        event_id.value_namespace = name_space;
        event_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-lenth")
    {
        prefix_lenth = value;
        prefix_lenth.value_namespace = name_space;
        prefix_lenth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-run-no")
    {
        spf_run_no = value;
        spf_run_no.value_namespace = name_space;
        spf_run_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipfrr-event-id")
    {
        ipfrr_event_id = value;
        ipfrr_event_id.value_namespace = name_space;
        ipfrr_event_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded = value;
        threshold_exceeded.value_namespace = name_space;
        threshold_exceeded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-change-type")
    {
        route_path_change_type = value;
        route_path_change_type.value_namespace = name_space;
        route_path_change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-time")
    {
        trigger_time = value;
        trigger_time.value_namespace = name_space;
        trigger_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-id")
    {
        event_id.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-lenth")
    {
        prefix_lenth.yfilter = yfilter;
    }
    if(value_path == "spf-run-no")
    {
        spf_run_no.yfilter = yfilter;
    }
    if(value_path == "ipfrr-event-id")
    {
        ipfrr_event_id.yfilter = yfilter;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "route-path-change-type")
    {
        route_path_change_type.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "trigger-time")
    {
        trigger_time.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-convergence-time" || name == "mpls-convergence-time" || name == "path" || name == "trigger-lsa" || name == "time-line" || name == "lsa-processed" || name == "event-id" || name == "prefix" || name == "prefix-lenth" || name == "spf-run-no" || name == "ipfrr-event-id" || name == "threshold-exceeded" || name == "priority" || name == "change-type" || name == "route-type" || name == "route-path-change-type" || name == "cost" || name == "trigger-time")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime::IpConvergenceTime()
    :
    minimum_time{YType::str, "minimum-time"},
    maximum_time{YType::str, "maximum-time"},
    slowest_node_name{YType::str, "slowest-node-name"},
    fastest_node_name{YType::str, "fastest-node-name"}
{

    yang_name = "ip-convergence-time"; yang_parent_name = "prefix-event-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime::~IpConvergenceTime()
{
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime::has_data() const
{
    if (is_presence_container) return true;
    return minimum_time.is_set
	|| maximum_time.is_set
	|| slowest_node_name.is_set
	|| fastest_node_name.is_set;
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter)
	|| ydk::is_set(fastest_node_name.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-convergence-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());
    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-time" || name == "maximum-time" || name == "slowest-node-name" || name == "fastest-node-name")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime::MplsConvergenceTime()
    :
    minimum_time{YType::str, "minimum-time"},
    maximum_time{YType::str, "maximum-time"},
    slowest_node_name{YType::str, "slowest-node-name"},
    fastest_node_name{YType::str, "fastest-node-name"}
{

    yang_name = "mpls-convergence-time"; yang_parent_name = "prefix-event-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime::~MplsConvergenceTime()
{
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime::has_data() const
{
    if (is_presence_container) return true;
    return minimum_time.is_set
	|| maximum_time.is_set
	|| slowest_node_name.is_set
	|| fastest_node_name.is_set;
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter)
	|| ydk::is_set(fastest_node_name.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-convergence-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());
    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-time" || name == "maximum-time" || name == "slowest-node-name" || name == "fastest-node-name")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::Path()
    :
    interface_name{YType::str, "interface-name"},
    neighbour_address{YType::str, "neighbour-address"},
    change_type{YType::enumeration, "change-type"},
    path_metric{YType::uint32, "path-metric"}
        ,
    lfa_path(this, {})
{

    yang_name = "path"; yang_parent_name = "prefix-event-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::~Path()
{
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lfa_path.len(); index++)
    {
        if(lfa_path[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| neighbour_address.is_set
	|| change_type.is_set
	|| path_metric.is_set;
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::has_operation() const
{
    for (std::size_t index=0; index<lfa_path.len(); index++)
    {
        if(lfa_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbour_address.yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(path_metric.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbour_address.is_set || is_set(neighbour_address.yfilter)) leaf_name_data.push_back(neighbour_address.get_name_leafdata());
    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (path_metric.is_set || is_set(path_metric.yfilter)) leaf_name_data.push_back(path_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lfa-path")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath>();
        ent_->parent = this;
        lfa_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lfa_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address = value;
        neighbour_address.value_namespace = name_space;
        neighbour_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-metric")
    {
        path_metric = value;
        path_metric.value_namespace = name_space;
        path_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address.yfilter = yfilter;
    }
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "path-metric")
    {
        path_metric.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lfa-path" || name == "interface-name" || name == "neighbour-address" || name == "change-type" || name == "path-metric")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath::LfaPath()
    :
    lfa_type{YType::enumeration, "lfa-type"},
    interface_name{YType::str, "interface-name"},
    neighbour_address{YType::str, "neighbour-address"},
    change_type{YType::enumeration, "change-type"},
    path_metric{YType::uint32, "path-metric"},
    remote_node_id{YType::str, "remote-node-id"}
{

    yang_name = "lfa-path"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath::~LfaPath()
{
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath::has_data() const
{
    if (is_presence_container) return true;
    return lfa_type.is_set
	|| interface_name.is_set
	|| neighbour_address.is_set
	|| change_type.is_set
	|| path_metric.is_set
	|| remote_node_id.is_set;
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lfa_type.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbour_address.yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(path_metric.yfilter)
	|| ydk::is_set(remote_node_id.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lfa-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lfa_type.is_set || is_set(lfa_type.yfilter)) leaf_name_data.push_back(lfa_type.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbour_address.is_set || is_set(neighbour_address.yfilter)) leaf_name_data.push_back(neighbour_address.get_name_leafdata());
    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (path_metric.is_set || is_set(path_metric.yfilter)) leaf_name_data.push_back(path_metric.get_name_leafdata());
    if (remote_node_id.is_set || is_set(remote_node_id.yfilter)) leaf_name_data.push_back(remote_node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lfa-type")
    {
        lfa_type = value;
        lfa_type.value_namespace = name_space;
        lfa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address = value;
        neighbour_address.value_namespace = name_space;
        neighbour_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-metric")
    {
        path_metric = value;
        path_metric.value_namespace = name_space;
        path_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-node-id")
    {
        remote_node_id = value;
        remote_node_id.value_namespace = name_space;
        remote_node_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lfa-type")
    {
        lfa_type.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address.yfilter = yfilter;
    }
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "path-metric")
    {
        path_metric.yfilter = yfilter;
    }
    if(value_path == "remote-node-id")
    {
        remote_node_id.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lfa-type" || name == "interface-name" || name == "neighbour-address" || name == "change-type" || name == "path-metric" || name == "remote-node-id")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa::TriggerLsa()
    :
    lsa_id{YType::str, "lsa-id"},
    sequence_number{YType::str, "sequence-number"},
    lsa_type{YType::enumeration, "lsa-type"},
    origin_router_id{YType::str, "origin-router-id"},
    change_type{YType::enumeration, "change-type"},
    reception_time{YType::str, "reception-time"}
{

    yang_name = "trigger-lsa"; yang_parent_name = "prefix-event-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa::~TriggerLsa()
{
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa::has_data() const
{
    if (is_presence_container) return true;
    return lsa_id.is_set
	|| sequence_number.is_set
	|| lsa_type.is_set
	|| origin_router_id.is_set
	|| change_type.is_set
	|| reception_time.is_set;
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(origin_router_id.yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(reception_time.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (origin_router_id.is_set || is_set(origin_router_id.yfilter)) leaf_name_data.push_back(origin_router_id.get_name_leafdata());
    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (reception_time.is_set || is_set(reception_time.yfilter)) leaf_name_data.push_back(reception_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin-router-id")
    {
        origin_router_id = value;
        origin_router_id.value_namespace = name_space;
        origin_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reception-time")
    {
        reception_time = value;
        reception_time.value_namespace = name_space;
        reception_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "origin-router-id")
    {
        origin_router_id.yfilter = yfilter;
    }
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "reception-time")
    {
        reception_time.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-id" || name == "sequence-number" || name == "lsa-type" || name == "origin-router-id" || name == "change-type" || name == "reception-time")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::TimeLine()
    :
    route_origin{YType::str, "route-origin"},
    ri_bv4_enter{YType::str, "ri-bv4-enter"},
    ri_bv4_exit{YType::str, "ri-bv4-exit"},
    ri_bv4_redistribute{YType::str, "ri-bv4-redistribute"},
    ldp_enter{YType::str, "ldp-enter"},
    ldp_exit{YType::str, "ldp-exit"},
    lsd_enter{YType::str, "lsd-enter"},
    lsd_exit{YType::str, "lsd-exit"}
        ,
    lc_ip(this, {})
    , lc_mpls(this, {})
{

    yang_name = "time-line"; yang_parent_name = "prefix-event-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::~TimeLine()
{
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lc_ip.len(); index++)
    {
        if(lc_ip[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lc_mpls.len(); index++)
    {
        if(lc_mpls[index]->has_data())
            return true;
    }
    return route_origin.is_set
	|| ri_bv4_enter.is_set
	|| ri_bv4_exit.is_set
	|| ri_bv4_redistribute.is_set
	|| ldp_enter.is_set
	|| ldp_exit.is_set
	|| lsd_enter.is_set
	|| lsd_exit.is_set;
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::has_operation() const
{
    for (std::size_t index=0; index<lc_ip.len(); index++)
    {
        if(lc_ip[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lc_mpls.len(); index++)
    {
        if(lc_mpls[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(route_origin.yfilter)
	|| ydk::is_set(ri_bv4_enter.yfilter)
	|| ydk::is_set(ri_bv4_exit.yfilter)
	|| ydk::is_set(ri_bv4_redistribute.yfilter)
	|| ydk::is_set(ldp_enter.yfilter)
	|| ydk::is_set(ldp_exit.yfilter)
	|| ydk::is_set(lsd_enter.yfilter)
	|| ydk::is_set(lsd_exit.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time-line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_origin.is_set || is_set(route_origin.yfilter)) leaf_name_data.push_back(route_origin.get_name_leafdata());
    if (ri_bv4_enter.is_set || is_set(ri_bv4_enter.yfilter)) leaf_name_data.push_back(ri_bv4_enter.get_name_leafdata());
    if (ri_bv4_exit.is_set || is_set(ri_bv4_exit.yfilter)) leaf_name_data.push_back(ri_bv4_exit.get_name_leafdata());
    if (ri_bv4_redistribute.is_set || is_set(ri_bv4_redistribute.yfilter)) leaf_name_data.push_back(ri_bv4_redistribute.get_name_leafdata());
    if (ldp_enter.is_set || is_set(ldp_enter.yfilter)) leaf_name_data.push_back(ldp_enter.get_name_leafdata());
    if (ldp_exit.is_set || is_set(ldp_exit.yfilter)) leaf_name_data.push_back(ldp_exit.get_name_leafdata());
    if (lsd_enter.is_set || is_set(lsd_enter.yfilter)) leaf_name_data.push_back(lsd_enter.get_name_leafdata());
    if (lsd_exit.is_set || is_set(lsd_exit.yfilter)) leaf_name_data.push_back(lsd_exit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lc-ip")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp>();
        ent_->parent = this;
        lc_ip.append(ent_);
        return ent_;
    }

    if(child_yang_name == "lc-mpls")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls>();
        ent_->parent = this;
        lc_mpls.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lc_ip.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : lc_mpls.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-origin")
    {
        route_origin = value;
        route_origin.value_namespace = name_space;
        route_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ri-bv4-enter")
    {
        ri_bv4_enter = value;
        ri_bv4_enter.value_namespace = name_space;
        ri_bv4_enter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ri-bv4-exit")
    {
        ri_bv4_exit = value;
        ri_bv4_exit.value_namespace = name_space;
        ri_bv4_exit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ri-bv4-redistribute")
    {
        ri_bv4_redistribute = value;
        ri_bv4_redistribute.value_namespace = name_space;
        ri_bv4_redistribute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-enter")
    {
        ldp_enter = value;
        ldp_enter.value_namespace = name_space;
        ldp_enter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-exit")
    {
        ldp_exit = value;
        ldp_exit.value_namespace = name_space;
        ldp_exit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsd-enter")
    {
        lsd_enter = value;
        lsd_enter.value_namespace = name_space;
        lsd_enter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsd-exit")
    {
        lsd_exit = value;
        lsd_exit.value_namespace = name_space;
        lsd_exit.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-origin")
    {
        route_origin.yfilter = yfilter;
    }
    if(value_path == "ri-bv4-enter")
    {
        ri_bv4_enter.yfilter = yfilter;
    }
    if(value_path == "ri-bv4-exit")
    {
        ri_bv4_exit.yfilter = yfilter;
    }
    if(value_path == "ri-bv4-redistribute")
    {
        ri_bv4_redistribute.yfilter = yfilter;
    }
    if(value_path == "ldp-enter")
    {
        ldp_enter.yfilter = yfilter;
    }
    if(value_path == "ldp-exit")
    {
        ldp_exit.yfilter = yfilter;
    }
    if(value_path == "lsd-enter")
    {
        lsd_enter.yfilter = yfilter;
    }
    if(value_path == "lsd-exit")
    {
        lsd_exit.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lc-ip" || name == "lc-mpls" || name == "route-origin" || name == "ri-bv4-enter" || name == "ri-bv4-exit" || name == "ri-bv4-redistribute" || name == "ldp-enter" || name == "ldp-exit" || name == "lsd-enter" || name == "lsd-exit")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp::LcIp()
    :
    node_name{YType::str, "node-name"},
    speed{YType::enumeration, "speed"},
    fib_complete{YType::str, "fib-complete"}
{

    yang_name = "lc-ip"; yang_parent_name = "time-line"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp::~LcIp()
{
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| speed.is_set
	|| fib_complete.is_set;
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(fib_complete.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lc-ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (fib_complete.is_set || is_set(fib_complete.yfilter)) leaf_name_data.push_back(fib_complete.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fib-complete")
    {
        fib_complete = value;
        fib_complete.value_namespace = name_space;
        fib_complete.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "fib-complete")
    {
        fib_complete.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-name" || name == "speed" || name == "fib-complete")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls::LcMpls()
    :
    node_name{YType::str, "node-name"},
    speed{YType::enumeration, "speed"},
    fib_complete{YType::str, "fib-complete"}
{

    yang_name = "lc-mpls"; yang_parent_name = "time-line"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls::~LcMpls()
{
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| speed.is_set
	|| fib_complete.is_set;
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(fib_complete.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lc-mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (fib_complete.is_set || is_set(fib_complete.yfilter)) leaf_name_data.push_back(fib_complete.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fib-complete")
    {
        fib_complete = value;
        fib_complete.value_namespace = name_space;
        fib_complete.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "fib-complete")
    {
        fib_complete.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-name" || name == "speed" || name == "fib-complete")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed::LsaProcessed()
    :
    lsa_id{YType::str, "lsa-id"},
    sequence_number{YType::str, "sequence-number"},
    lsa_type{YType::enumeration, "lsa-type"},
    origin_router_id{YType::str, "origin-router-id"},
    change_type{YType::enumeration, "change-type"},
    reception_time{YType::str, "reception-time"}
{

    yang_name = "lsa-processed"; yang_parent_name = "prefix-event-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed::~LsaProcessed()
{
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed::has_data() const
{
    if (is_presence_container) return true;
    return lsa_id.is_set
	|| sequence_number.is_set
	|| lsa_type.is_set
	|| origin_router_id.is_set
	|| change_type.is_set
	|| reception_time.is_set;
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(origin_router_id.yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(reception_time.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-processed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (origin_router_id.is_set || is_set(origin_router_id.yfilter)) leaf_name_data.push_back(origin_router_id.get_name_leafdata());
    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (reception_time.is_set || is_set(reception_time.yfilter)) leaf_name_data.push_back(reception_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin-router-id")
    {
        origin_router_id = value;
        origin_router_id.value_namespace = name_space;
        origin_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reception-time")
    {
        reception_time = value;
        reception_time.value_namespace = name_space;
        reception_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "origin-router-id")
    {
        origin_router_id.yfilter = yfilter;
    }
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "reception-time")
    {
        reception_time.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-id" || name == "sequence-number" || name == "lsa-type" || name == "origin-router-id" || name == "change-type" || name == "reception-time")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOfflines()
    :
    prefix_event_offline(this, {"event_id"})
{

    yang_name = "prefix-event-offlines"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::PrefixEventOfflines::~PrefixEventOfflines()
{
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<prefix_event_offline.len(); index++)
    {
        if(prefix_event_offline[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::has_operation() const
{
    for (std::size_t index=0; index<prefix_event_offline.len(); index++)
    {
        if(prefix_event_offline[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rcmd::Isis::Instances::Instance::PrefixEventOfflines::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-event-offlines";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::PrefixEventOfflines::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::PrefixEventOfflines::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-event-offline")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline>();
        ent_->parent = this;
        prefix_event_offline.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::PrefixEventOfflines::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : prefix_event_offline.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Isis::Instances::Instance::PrefixEventOfflines::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Isis::Instances::Instance::PrefixEventOfflines::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-event-offline")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::PrefixEventOffline()
    :
    event_id{YType::uint32, "event-id"},
    prefix{YType::str, "prefix"},
    prefix_lenth{YType::uint32, "prefix-lenth"},
    spf_run_no{YType::uint32, "spf-run-no"},
    ipfrr_event_id{YType::uint32, "ipfrr-event-id"},
    threshold_exceeded{YType::boolean, "threshold-exceeded"},
    priority{YType::enumeration, "priority"},
    change_type{YType::enumeration, "change-type"},
    route_type{YType::enumeration, "route-type"},
    route_path_change_type{YType::enumeration, "route-path-change-type"},
    cost{YType::uint32, "cost"},
    trigger_time{YType::str, "trigger-time"}
        ,
    ip_convergence_time(std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime>())
    , mpls_convergence_time(std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime>())
    , path(this, {})
    , trigger_lsa(this, {})
    , time_line(this, {})
    , lsa_processed(this, {})
{
    ip_convergence_time->parent = this;
    mpls_convergence_time->parent = this;

    yang_name = "prefix-event-offline"; yang_parent_name = "prefix-event-offlines"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::~PrefixEventOffline()
{
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<path.len(); index++)
    {
        if(path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<trigger_lsa.len(); index++)
    {
        if(trigger_lsa[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<time_line.len(); index++)
    {
        if(time_line[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lsa_processed.len(); index++)
    {
        if(lsa_processed[index]->has_data())
            return true;
    }
    return event_id.is_set
	|| prefix.is_set
	|| prefix_lenth.is_set
	|| spf_run_no.is_set
	|| ipfrr_event_id.is_set
	|| threshold_exceeded.is_set
	|| priority.is_set
	|| change_type.is_set
	|| route_type.is_set
	|| route_path_change_type.is_set
	|| cost.is_set
	|| trigger_time.is_set
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_data())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_data());
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::has_operation() const
{
    for (std::size_t index=0; index<path.len(); index++)
    {
        if(path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<trigger_lsa.len(); index++)
    {
        if(trigger_lsa[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<time_line.len(); index++)
    {
        if(time_line[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lsa_processed.len(); index++)
    {
        if(lsa_processed[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(event_id.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_lenth.yfilter)
	|| ydk::is_set(spf_run_no.yfilter)
	|| ydk::is_set(ipfrr_event_id.yfilter)
	|| ydk::is_set(threshold_exceeded.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(route_path_change_type.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(trigger_time.yfilter)
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_operation())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_operation());
}

std::string Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-event-offline";
    ADD_KEY_TOKEN(event_id, "event-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_id.is_set || is_set(event_id.yfilter)) leaf_name_data.push_back(event_id.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_lenth.is_set || is_set(prefix_lenth.yfilter)) leaf_name_data.push_back(prefix_lenth.get_name_leafdata());
    if (spf_run_no.is_set || is_set(spf_run_no.yfilter)) leaf_name_data.push_back(spf_run_no.get_name_leafdata());
    if (ipfrr_event_id.is_set || is_set(ipfrr_event_id.yfilter)) leaf_name_data.push_back(ipfrr_event_id.get_name_leafdata());
    if (threshold_exceeded.is_set || is_set(threshold_exceeded.yfilter)) leaf_name_data.push_back(threshold_exceeded.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (route_path_change_type.is_set || is_set(route_path_change_type.yfilter)) leaf_name_data.push_back(route_path_change_type.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (trigger_time.is_set || is_set(trigger_time.yfilter)) leaf_name_data.push_back(trigger_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-convergence-time")
    {
        if(ip_convergence_time == nullptr)
        {
            ip_convergence_time = std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime>();
        }
        return ip_convergence_time;
    }

    if(child_yang_name == "mpls-convergence-time")
    {
        if(mpls_convergence_time == nullptr)
        {
            mpls_convergence_time = std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime>();
        }
        return mpls_convergence_time;
    }

    if(child_yang_name == "path")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path>();
        ent_->parent = this;
        path.append(ent_);
        return ent_;
    }

    if(child_yang_name == "trigger-lsa")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa>();
        ent_->parent = this;
        trigger_lsa.append(ent_);
        return ent_;
    }

    if(child_yang_name == "time-line")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine>();
        ent_->parent = this;
        time_line.append(ent_);
        return ent_;
    }

    if(child_yang_name == "lsa-processed")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed>();
        ent_->parent = this;
        lsa_processed.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip_convergence_time != nullptr)
    {
        _children["ip-convergence-time"] = ip_convergence_time;
    }

    if(mpls_convergence_time != nullptr)
    {
        _children["mpls-convergence-time"] = mpls_convergence_time;
    }

    count_ = 0;
    for (auto ent_ : path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : trigger_lsa.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : time_line.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : lsa_processed.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-id")
    {
        event_id = value;
        event_id.value_namespace = name_space;
        event_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-lenth")
    {
        prefix_lenth = value;
        prefix_lenth.value_namespace = name_space;
        prefix_lenth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-run-no")
    {
        spf_run_no = value;
        spf_run_no.value_namespace = name_space;
        spf_run_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipfrr-event-id")
    {
        ipfrr_event_id = value;
        ipfrr_event_id.value_namespace = name_space;
        ipfrr_event_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded = value;
        threshold_exceeded.value_namespace = name_space;
        threshold_exceeded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-change-type")
    {
        route_path_change_type = value;
        route_path_change_type.value_namespace = name_space;
        route_path_change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-time")
    {
        trigger_time = value;
        trigger_time.value_namespace = name_space;
        trigger_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-id")
    {
        event_id.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-lenth")
    {
        prefix_lenth.yfilter = yfilter;
    }
    if(value_path == "spf-run-no")
    {
        spf_run_no.yfilter = yfilter;
    }
    if(value_path == "ipfrr-event-id")
    {
        ipfrr_event_id.yfilter = yfilter;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "route-path-change-type")
    {
        route_path_change_type.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "trigger-time")
    {
        trigger_time.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-convergence-time" || name == "mpls-convergence-time" || name == "path" || name == "trigger-lsa" || name == "time-line" || name == "lsa-processed" || name == "event-id" || name == "prefix" || name == "prefix-lenth" || name == "spf-run-no" || name == "ipfrr-event-id" || name == "threshold-exceeded" || name == "priority" || name == "change-type" || name == "route-type" || name == "route-path-change-type" || name == "cost" || name == "trigger-time")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime::IpConvergenceTime()
    :
    minimum_time{YType::str, "minimum-time"},
    maximum_time{YType::str, "maximum-time"},
    slowest_node_name{YType::str, "slowest-node-name"},
    fastest_node_name{YType::str, "fastest-node-name"}
{

    yang_name = "ip-convergence-time"; yang_parent_name = "prefix-event-offline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime::~IpConvergenceTime()
{
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime::has_data() const
{
    if (is_presence_container) return true;
    return minimum_time.is_set
	|| maximum_time.is_set
	|| slowest_node_name.is_set
	|| fastest_node_name.is_set;
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter)
	|| ydk::is_set(fastest_node_name.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-convergence-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());
    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-time" || name == "maximum-time" || name == "slowest-node-name" || name == "fastest-node-name")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime::MplsConvergenceTime()
    :
    minimum_time{YType::str, "minimum-time"},
    maximum_time{YType::str, "maximum-time"},
    slowest_node_name{YType::str, "slowest-node-name"},
    fastest_node_name{YType::str, "fastest-node-name"}
{

    yang_name = "mpls-convergence-time"; yang_parent_name = "prefix-event-offline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime::~MplsConvergenceTime()
{
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime::has_data() const
{
    if (is_presence_container) return true;
    return minimum_time.is_set
	|| maximum_time.is_set
	|| slowest_node_name.is_set
	|| fastest_node_name.is_set;
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter)
	|| ydk::is_set(fastest_node_name.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-convergence-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());
    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "minimum-time" || name == "maximum-time" || name == "slowest-node-name" || name == "fastest-node-name")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::Path()
    :
    interface_name{YType::str, "interface-name"},
    neighbour_address{YType::str, "neighbour-address"},
    change_type{YType::enumeration, "change-type"},
    path_metric{YType::uint32, "path-metric"}
        ,
    lfa_path(this, {})
{

    yang_name = "path"; yang_parent_name = "prefix-event-offline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::~Path()
{
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lfa_path.len(); index++)
    {
        if(lfa_path[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| neighbour_address.is_set
	|| change_type.is_set
	|| path_metric.is_set;
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::has_operation() const
{
    for (std::size_t index=0; index<lfa_path.len(); index++)
    {
        if(lfa_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbour_address.yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(path_metric.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbour_address.is_set || is_set(neighbour_address.yfilter)) leaf_name_data.push_back(neighbour_address.get_name_leafdata());
    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (path_metric.is_set || is_set(path_metric.yfilter)) leaf_name_data.push_back(path_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lfa-path")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath>();
        ent_->parent = this;
        lfa_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lfa_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address = value;
        neighbour_address.value_namespace = name_space;
        neighbour_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-metric")
    {
        path_metric = value;
        path_metric.value_namespace = name_space;
        path_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address.yfilter = yfilter;
    }
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "path-metric")
    {
        path_metric.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lfa-path" || name == "interface-name" || name == "neighbour-address" || name == "change-type" || name == "path-metric")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath::LfaPath()
    :
    lfa_type{YType::enumeration, "lfa-type"},
    interface_name{YType::str, "interface-name"},
    neighbour_address{YType::str, "neighbour-address"},
    change_type{YType::enumeration, "change-type"},
    path_metric{YType::uint32, "path-metric"},
    remote_node_id{YType::str, "remote-node-id"}
{

    yang_name = "lfa-path"; yang_parent_name = "path"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath::~LfaPath()
{
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath::has_data() const
{
    if (is_presence_container) return true;
    return lfa_type.is_set
	|| interface_name.is_set
	|| neighbour_address.is_set
	|| change_type.is_set
	|| path_metric.is_set
	|| remote_node_id.is_set;
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lfa_type.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbour_address.yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(path_metric.yfilter)
	|| ydk::is_set(remote_node_id.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lfa-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lfa_type.is_set || is_set(lfa_type.yfilter)) leaf_name_data.push_back(lfa_type.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbour_address.is_set || is_set(neighbour_address.yfilter)) leaf_name_data.push_back(neighbour_address.get_name_leafdata());
    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (path_metric.is_set || is_set(path_metric.yfilter)) leaf_name_data.push_back(path_metric.get_name_leafdata());
    if (remote_node_id.is_set || is_set(remote_node_id.yfilter)) leaf_name_data.push_back(remote_node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lfa-type")
    {
        lfa_type = value;
        lfa_type.value_namespace = name_space;
        lfa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address = value;
        neighbour_address.value_namespace = name_space;
        neighbour_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-metric")
    {
        path_metric = value;
        path_metric.value_namespace = name_space;
        path_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-node-id")
    {
        remote_node_id = value;
        remote_node_id.value_namespace = name_space;
        remote_node_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lfa-type")
    {
        lfa_type.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address.yfilter = yfilter;
    }
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "path-metric")
    {
        path_metric.yfilter = yfilter;
    }
    if(value_path == "remote-node-id")
    {
        remote_node_id.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lfa-type" || name == "interface-name" || name == "neighbour-address" || name == "change-type" || name == "path-metric" || name == "remote-node-id")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa::TriggerLsa()
    :
    lsa_id{YType::str, "lsa-id"},
    sequence_number{YType::str, "sequence-number"},
    lsa_type{YType::enumeration, "lsa-type"},
    origin_router_id{YType::str, "origin-router-id"},
    change_type{YType::enumeration, "change-type"},
    reception_time{YType::str, "reception-time"}
{

    yang_name = "trigger-lsa"; yang_parent_name = "prefix-event-offline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa::~TriggerLsa()
{
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa::has_data() const
{
    if (is_presence_container) return true;
    return lsa_id.is_set
	|| sequence_number.is_set
	|| lsa_type.is_set
	|| origin_router_id.is_set
	|| change_type.is_set
	|| reception_time.is_set;
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(origin_router_id.yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(reception_time.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-lsa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (origin_router_id.is_set || is_set(origin_router_id.yfilter)) leaf_name_data.push_back(origin_router_id.get_name_leafdata());
    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (reception_time.is_set || is_set(reception_time.yfilter)) leaf_name_data.push_back(reception_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin-router-id")
    {
        origin_router_id = value;
        origin_router_id.value_namespace = name_space;
        origin_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reception-time")
    {
        reception_time = value;
        reception_time.value_namespace = name_space;
        reception_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "origin-router-id")
    {
        origin_router_id.yfilter = yfilter;
    }
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "reception-time")
    {
        reception_time.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-id" || name == "sequence-number" || name == "lsa-type" || name == "origin-router-id" || name == "change-type" || name == "reception-time")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::TimeLine()
    :
    route_origin{YType::str, "route-origin"},
    ri_bv4_enter{YType::str, "ri-bv4-enter"},
    ri_bv4_exit{YType::str, "ri-bv4-exit"},
    ri_bv4_redistribute{YType::str, "ri-bv4-redistribute"},
    ldp_enter{YType::str, "ldp-enter"},
    ldp_exit{YType::str, "ldp-exit"},
    lsd_enter{YType::str, "lsd-enter"},
    lsd_exit{YType::str, "lsd-exit"}
        ,
    lc_ip(this, {})
    , lc_mpls(this, {})
{

    yang_name = "time-line"; yang_parent_name = "prefix-event-offline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::~TimeLine()
{
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lc_ip.len(); index++)
    {
        if(lc_ip[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lc_mpls.len(); index++)
    {
        if(lc_mpls[index]->has_data())
            return true;
    }
    return route_origin.is_set
	|| ri_bv4_enter.is_set
	|| ri_bv4_exit.is_set
	|| ri_bv4_redistribute.is_set
	|| ldp_enter.is_set
	|| ldp_exit.is_set
	|| lsd_enter.is_set
	|| lsd_exit.is_set;
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::has_operation() const
{
    for (std::size_t index=0; index<lc_ip.len(); index++)
    {
        if(lc_ip[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lc_mpls.len(); index++)
    {
        if(lc_mpls[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(route_origin.yfilter)
	|| ydk::is_set(ri_bv4_enter.yfilter)
	|| ydk::is_set(ri_bv4_exit.yfilter)
	|| ydk::is_set(ri_bv4_redistribute.yfilter)
	|| ydk::is_set(ldp_enter.yfilter)
	|| ydk::is_set(ldp_exit.yfilter)
	|| ydk::is_set(lsd_enter.yfilter)
	|| ydk::is_set(lsd_exit.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time-line";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_origin.is_set || is_set(route_origin.yfilter)) leaf_name_data.push_back(route_origin.get_name_leafdata());
    if (ri_bv4_enter.is_set || is_set(ri_bv4_enter.yfilter)) leaf_name_data.push_back(ri_bv4_enter.get_name_leafdata());
    if (ri_bv4_exit.is_set || is_set(ri_bv4_exit.yfilter)) leaf_name_data.push_back(ri_bv4_exit.get_name_leafdata());
    if (ri_bv4_redistribute.is_set || is_set(ri_bv4_redistribute.yfilter)) leaf_name_data.push_back(ri_bv4_redistribute.get_name_leafdata());
    if (ldp_enter.is_set || is_set(ldp_enter.yfilter)) leaf_name_data.push_back(ldp_enter.get_name_leafdata());
    if (ldp_exit.is_set || is_set(ldp_exit.yfilter)) leaf_name_data.push_back(ldp_exit.get_name_leafdata());
    if (lsd_enter.is_set || is_set(lsd_enter.yfilter)) leaf_name_data.push_back(lsd_enter.get_name_leafdata());
    if (lsd_exit.is_set || is_set(lsd_exit.yfilter)) leaf_name_data.push_back(lsd_exit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lc-ip")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp>();
        ent_->parent = this;
        lc_ip.append(ent_);
        return ent_;
    }

    if(child_yang_name == "lc-mpls")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls>();
        ent_->parent = this;
        lc_mpls.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lc_ip.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : lc_mpls.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-origin")
    {
        route_origin = value;
        route_origin.value_namespace = name_space;
        route_origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ri-bv4-enter")
    {
        ri_bv4_enter = value;
        ri_bv4_enter.value_namespace = name_space;
        ri_bv4_enter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ri-bv4-exit")
    {
        ri_bv4_exit = value;
        ri_bv4_exit.value_namespace = name_space;
        ri_bv4_exit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ri-bv4-redistribute")
    {
        ri_bv4_redistribute = value;
        ri_bv4_redistribute.value_namespace = name_space;
        ri_bv4_redistribute.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-enter")
    {
        ldp_enter = value;
        ldp_enter.value_namespace = name_space;
        ldp_enter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ldp-exit")
    {
        ldp_exit = value;
        ldp_exit.value_namespace = name_space;
        ldp_exit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsd-enter")
    {
        lsd_enter = value;
        lsd_enter.value_namespace = name_space;
        lsd_enter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsd-exit")
    {
        lsd_exit = value;
        lsd_exit.value_namespace = name_space;
        lsd_exit.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-origin")
    {
        route_origin.yfilter = yfilter;
    }
    if(value_path == "ri-bv4-enter")
    {
        ri_bv4_enter.yfilter = yfilter;
    }
    if(value_path == "ri-bv4-exit")
    {
        ri_bv4_exit.yfilter = yfilter;
    }
    if(value_path == "ri-bv4-redistribute")
    {
        ri_bv4_redistribute.yfilter = yfilter;
    }
    if(value_path == "ldp-enter")
    {
        ldp_enter.yfilter = yfilter;
    }
    if(value_path == "ldp-exit")
    {
        ldp_exit.yfilter = yfilter;
    }
    if(value_path == "lsd-enter")
    {
        lsd_enter.yfilter = yfilter;
    }
    if(value_path == "lsd-exit")
    {
        lsd_exit.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lc-ip" || name == "lc-mpls" || name == "route-origin" || name == "ri-bv4-enter" || name == "ri-bv4-exit" || name == "ri-bv4-redistribute" || name == "ldp-enter" || name == "ldp-exit" || name == "lsd-enter" || name == "lsd-exit")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp::LcIp()
    :
    node_name{YType::str, "node-name"},
    speed{YType::enumeration, "speed"},
    fib_complete{YType::str, "fib-complete"}
{

    yang_name = "lc-ip"; yang_parent_name = "time-line"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp::~LcIp()
{
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| speed.is_set
	|| fib_complete.is_set;
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(fib_complete.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lc-ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (fib_complete.is_set || is_set(fib_complete.yfilter)) leaf_name_data.push_back(fib_complete.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fib-complete")
    {
        fib_complete = value;
        fib_complete.value_namespace = name_space;
        fib_complete.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "fib-complete")
    {
        fib_complete.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-name" || name == "speed" || name == "fib-complete")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls::LcMpls()
    :
    node_name{YType::str, "node-name"},
    speed{YType::enumeration, "speed"},
    fib_complete{YType::str, "fib-complete"}
{

    yang_name = "lc-mpls"; yang_parent_name = "time-line"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls::~LcMpls()
{
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| speed.is_set
	|| fib_complete.is_set;
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(speed.yfilter)
	|| ydk::is_set(fib_complete.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lc-mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());
    if (fib_complete.is_set || is_set(fib_complete.yfilter)) leaf_name_data.push_back(fib_complete.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speed")
    {
        speed = value;
        speed.value_namespace = name_space;
        speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fib-complete")
    {
        fib_complete = value;
        fib_complete.value_namespace = name_space;
        fib_complete.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
    if(value_path == "fib-complete")
    {
        fib_complete.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node-name" || name == "speed" || name == "fib-complete")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed::LsaProcessed()
    :
    lsa_id{YType::str, "lsa-id"},
    sequence_number{YType::str, "sequence-number"},
    lsa_type{YType::enumeration, "lsa-type"},
    origin_router_id{YType::str, "origin-router-id"},
    change_type{YType::enumeration, "change-type"},
    reception_time{YType::str, "reception-time"}
{

    yang_name = "lsa-processed"; yang_parent_name = "prefix-event-offline"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed::~LsaProcessed()
{
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed::has_data() const
{
    if (is_presence_container) return true;
    return lsa_id.is_set
	|| sequence_number.is_set
	|| lsa_type.is_set
	|| origin_router_id.is_set
	|| change_type.is_set
	|| reception_time.is_set;
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(origin_router_id.yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(reception_time.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-processed";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (origin_router_id.is_set || is_set(origin_router_id.yfilter)) leaf_name_data.push_back(origin_router_id.get_name_leafdata());
    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (reception_time.is_set || is_set(reception_time.yfilter)) leaf_name_data.push_back(reception_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-type")
    {
        lsa_type = value;
        lsa_type.value_namespace = name_space;
        lsa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin-router-id")
    {
        origin_router_id = value;
        origin_router_id.value_namespace = name_space;
        origin_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reception-time")
    {
        reception_time = value;
        reception_time.value_namespace = name_space;
        reception_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "origin-router-id")
    {
        origin_router_id.yfilter = yfilter;
    }
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "reception-time")
    {
        reception_time.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsa-id" || name == "sequence-number" || name == "lsa-type" || name == "origin-router-id" || name == "change-type" || name == "reception-time")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::LspRegenerateds::LspRegenerateds()
    :
    lsp_regenerated(this, {"serial_number"})
{

    yang_name = "lsp-regenerateds"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::LspRegenerateds::~LspRegenerateds()
{
}

bool Rcmd::Isis::Instances::Instance::LspRegenerateds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<lsp_regenerated.len(); index++)
    {
        if(lsp_regenerated[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Isis::Instances::Instance::LspRegenerateds::has_operation() const
{
    for (std::size_t index=0; index<lsp_regenerated.len(); index++)
    {
        if(lsp_regenerated[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rcmd::Isis::Instances::Instance::LspRegenerateds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-regenerateds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::LspRegenerateds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::LspRegenerateds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-regenerated")
    {
        auto ent_ = std::make_shared<Rcmd::Isis::Instances::Instance::LspRegenerateds::LspRegenerated>();
        ent_->parent = this;
        lsp_regenerated.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::LspRegenerateds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : lsp_regenerated.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Isis::Instances::Instance::LspRegenerateds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Isis::Instances::Instance::LspRegenerateds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Isis::Instances::Instance::LspRegenerateds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-regenerated")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::LspRegenerateds::LspRegenerated::LspRegenerated()
    :
    serial_number{YType::uint32, "serial-number"},
    serial_number_xr{YType::uint32, "serial-number-xr"},
    lsp_id{YType::str, "lsp-id"},
    sequence_number{YType::uint32, "sequence-number"},
    reception_time{YType::str, "reception-time"},
    isis_level{YType::enumeration, "isis-level"},
    spf_run_number{YType::uint32, "spf-run-number"},
    reason{YType::str, "reason"}
{

    yang_name = "lsp-regenerated"; yang_parent_name = "lsp-regenerateds"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Isis::Instances::Instance::LspRegenerateds::LspRegenerated::~LspRegenerated()
{
}

bool Rcmd::Isis::Instances::Instance::LspRegenerateds::LspRegenerated::has_data() const
{
    if (is_presence_container) return true;
    return serial_number.is_set
	|| serial_number_xr.is_set
	|| lsp_id.is_set
	|| sequence_number.is_set
	|| reception_time.is_set
	|| isis_level.is_set
	|| spf_run_number.is_set
	|| reason.is_set;
}

bool Rcmd::Isis::Instances::Instance::LspRegenerateds::LspRegenerated::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(serial_number_xr.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(reception_time.yfilter)
	|| ydk::is_set(isis_level.yfilter)
	|| ydk::is_set(spf_run_number.yfilter)
	|| ydk::is_set(reason.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::LspRegenerateds::LspRegenerated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-regenerated";
    ADD_KEY_TOKEN(serial_number, "serial-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Isis::Instances::Instance::LspRegenerateds::LspRegenerated::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (serial_number_xr.is_set || is_set(serial_number_xr.yfilter)) leaf_name_data.push_back(serial_number_xr.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (reception_time.is_set || is_set(reception_time.yfilter)) leaf_name_data.push_back(reception_time.get_name_leafdata());
    if (isis_level.is_set || is_set(isis_level.yfilter)) leaf_name_data.push_back(isis_level.get_name_leafdata());
    if (spf_run_number.is_set || is_set(spf_run_number.yfilter)) leaf_name_data.push_back(spf_run_number.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Isis::Instances::Instance::LspRegenerateds::LspRegenerated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Isis::Instances::Instance::LspRegenerateds::LspRegenerated::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Isis::Instances::Instance::LspRegenerateds::LspRegenerated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number-xr")
    {
        serial_number_xr = value;
        serial_number_xr.value_namespace = name_space;
        serial_number_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reception-time")
    {
        reception_time = value;
        reception_time.value_namespace = name_space;
        reception_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-level")
    {
        isis_level = value;
        isis_level.value_namespace = name_space;
        isis_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-run-number")
    {
        spf_run_number = value;
        spf_run_number.value_namespace = name_space;
        spf_run_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::LspRegenerateds::LspRegenerated::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "serial-number-xr")
    {
        serial_number_xr.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "reception-time")
    {
        reception_time.yfilter = yfilter;
    }
    if(value_path == "isis-level")
    {
        isis_level.yfilter = yfilter;
    }
    if(value_path == "spf-run-number")
    {
        spf_run_number.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::LspRegenerateds::LspRegenerated::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "serial-number" || name == "serial-number-xr" || name == "lsp-id" || name == "sequence-number" || name == "reception-time" || name == "isis-level" || name == "spf-run-number" || name == "reason")
        return true;
    return false;
}

Rcmd::Memory::Memory()
    :
    memory_info(this, {})
    , edm_memory_info(this, {})
    , string_memory_info(this, {})
{

    yang_name = "memory"; yang_parent_name = "rcmd"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcmd::Memory::~Memory()
{
}

bool Rcmd::Memory::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<memory_info.len(); index++)
    {
        if(memory_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<edm_memory_info.len(); index++)
    {
        if(edm_memory_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<string_memory_info.len(); index++)
    {
        if(string_memory_info[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Memory::has_operation() const
{
    for (std::size_t index=0; index<memory_info.len(); index++)
    {
        if(memory_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<edm_memory_info.len(); index++)
    {
        if(edm_memory_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<string_memory_info.len(); index++)
    {
        if(string_memory_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rcmd::Memory::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Memory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Memory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Memory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "memory-info")
    {
        auto ent_ = std::make_shared<Rcmd::Memory::MemoryInfo>();
        ent_->parent = this;
        memory_info.append(ent_);
        return ent_;
    }

    if(child_yang_name == "edm-memory-info")
    {
        auto ent_ = std::make_shared<Rcmd::Memory::EdmMemoryInfo>();
        ent_->parent = this;
        edm_memory_info.append(ent_);
        return ent_;
    }

    if(child_yang_name == "string-memory-info")
    {
        auto ent_ = std::make_shared<Rcmd::Memory::StringMemoryInfo>();
        ent_->parent = this;
        string_memory_info.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Memory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : memory_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : edm_memory_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : string_memory_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Memory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Memory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Memory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "memory-info" || name == "edm-memory-info" || name == "string-memory-info")
        return true;
    return false;
}

Rcmd::Memory::MemoryInfo::MemoryInfo()
    :
    structure_name{YType::str, "structure-name"},
    size{YType::uint32, "size"},
    current_count{YType::uint32, "current-count"},
    alloc_fails{YType::uint32, "alloc-fails"},
    alloc_count{YType::uint32, "alloc-count"},
    freed_count{YType::uint32, "freed-count"},
    memory_type{YType::enumeration, "memory-type"}
{

    yang_name = "memory-info"; yang_parent_name = "memory"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcmd::Memory::MemoryInfo::~MemoryInfo()
{
}

bool Rcmd::Memory::MemoryInfo::has_data() const
{
    if (is_presence_container) return true;
    return structure_name.is_set
	|| size.is_set
	|| current_count.is_set
	|| alloc_fails.is_set
	|| alloc_count.is_set
	|| freed_count.is_set
	|| memory_type.is_set;
}

bool Rcmd::Memory::MemoryInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(structure_name.yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(current_count.yfilter)
	|| ydk::is_set(alloc_fails.yfilter)
	|| ydk::is_set(alloc_count.yfilter)
	|| ydk::is_set(freed_count.yfilter)
	|| ydk::is_set(memory_type.yfilter);
}

std::string Rcmd::Memory::MemoryInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/memory/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Memory::MemoryInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Memory::MemoryInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (structure_name.is_set || is_set(structure_name.yfilter)) leaf_name_data.push_back(structure_name.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (current_count.is_set || is_set(current_count.yfilter)) leaf_name_data.push_back(current_count.get_name_leafdata());
    if (alloc_fails.is_set || is_set(alloc_fails.yfilter)) leaf_name_data.push_back(alloc_fails.get_name_leafdata());
    if (alloc_count.is_set || is_set(alloc_count.yfilter)) leaf_name_data.push_back(alloc_count.get_name_leafdata());
    if (freed_count.is_set || is_set(freed_count.yfilter)) leaf_name_data.push_back(freed_count.get_name_leafdata());
    if (memory_type.is_set || is_set(memory_type.yfilter)) leaf_name_data.push_back(memory_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Memory::MemoryInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Memory::MemoryInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Memory::MemoryInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "structure-name")
    {
        structure_name = value;
        structure_name.value_namespace = name_space;
        structure_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-count")
    {
        current_count = value;
        current_count.value_namespace = name_space;
        current_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alloc-fails")
    {
        alloc_fails = value;
        alloc_fails.value_namespace = name_space;
        alloc_fails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alloc-count")
    {
        alloc_count = value;
        alloc_count.value_namespace = name_space;
        alloc_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "freed-count")
    {
        freed_count = value;
        freed_count.value_namespace = name_space;
        freed_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory-type")
    {
        memory_type = value;
        memory_type.value_namespace = name_space;
        memory_type.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Memory::MemoryInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "structure-name")
    {
        structure_name.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "current-count")
    {
        current_count.yfilter = yfilter;
    }
    if(value_path == "alloc-fails")
    {
        alloc_fails.yfilter = yfilter;
    }
    if(value_path == "alloc-count")
    {
        alloc_count.yfilter = yfilter;
    }
    if(value_path == "freed-count")
    {
        freed_count.yfilter = yfilter;
    }
    if(value_path == "memory-type")
    {
        memory_type.yfilter = yfilter;
    }
}

bool Rcmd::Memory::MemoryInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "structure-name" || name == "size" || name == "current-count" || name == "alloc-fails" || name == "alloc-count" || name == "freed-count" || name == "memory-type")
        return true;
    return false;
}

Rcmd::Memory::EdmMemoryInfo::EdmMemoryInfo()
    :
    size{YType::uint32, "size"},
    total{YType::uint32, "total"},
    success{YType::uint32, "success"},
    failure{YType::uint32, "failure"}
{

    yang_name = "edm-memory-info"; yang_parent_name = "memory"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcmd::Memory::EdmMemoryInfo::~EdmMemoryInfo()
{
}

bool Rcmd::Memory::EdmMemoryInfo::has_data() const
{
    if (is_presence_container) return true;
    return size.is_set
	|| total.is_set
	|| success.is_set
	|| failure.is_set;
}

bool Rcmd::Memory::EdmMemoryInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(total.yfilter)
	|| ydk::is_set(success.yfilter)
	|| ydk::is_set(failure.yfilter);
}

std::string Rcmd::Memory::EdmMemoryInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/memory/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Memory::EdmMemoryInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "edm-memory-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Memory::EdmMemoryInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());
    if (success.is_set || is_set(success.yfilter)) leaf_name_data.push_back(success.get_name_leafdata());
    if (failure.is_set || is_set(failure.yfilter)) leaf_name_data.push_back(failure.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Memory::EdmMemoryInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Memory::EdmMemoryInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Memory::EdmMemoryInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success")
    {
        success = value;
        success.value_namespace = name_space;
        success.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failure")
    {
        failure = value;
        failure.value_namespace = name_space;
        failure.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Memory::EdmMemoryInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
    if(value_path == "success")
    {
        success.yfilter = yfilter;
    }
    if(value_path == "failure")
    {
        failure.yfilter = yfilter;
    }
}

bool Rcmd::Memory::EdmMemoryInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size" || name == "total" || name == "success" || name == "failure")
        return true;
    return false;
}

Rcmd::Memory::StringMemoryInfo::StringMemoryInfo()
    :
    size{YType::uint32, "size"},
    total{YType::uint32, "total"},
    success{YType::uint32, "success"},
    failure{YType::uint32, "failure"}
{

    yang_name = "string-memory-info"; yang_parent_name = "memory"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcmd::Memory::StringMemoryInfo::~StringMemoryInfo()
{
}

bool Rcmd::Memory::StringMemoryInfo::has_data() const
{
    if (is_presence_container) return true;
    return size.is_set
	|| total.is_set
	|| success.is_set
	|| failure.is_set;
}

bool Rcmd::Memory::StringMemoryInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(total.yfilter)
	|| ydk::is_set(success.yfilter)
	|| ydk::is_set(failure.yfilter);
}

std::string Rcmd::Memory::StringMemoryInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/memory/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Memory::StringMemoryInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "string-memory-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Memory::StringMemoryInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());
    if (success.is_set || is_set(success.yfilter)) leaf_name_data.push_back(success.get_name_leafdata());
    if (failure.is_set || is_set(failure.yfilter)) leaf_name_data.push_back(failure.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Memory::StringMemoryInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Memory::StringMemoryInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Memory::StringMemoryInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success")
    {
        success = value;
        success.value_namespace = name_space;
        success.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failure")
    {
        failure = value;
        failure.value_namespace = name_space;
        failure.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Memory::StringMemoryInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
    if(value_path == "success")
    {
        success.yfilter = yfilter;
    }
    if(value_path == "failure")
    {
        failure.yfilter = yfilter;
    }
}

bool Rcmd::Memory::StringMemoryInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "size" || name == "total" || name == "success" || name == "failure")
        return true;
    return false;
}

Rcmd::Ldp::Ldp()
    :
    sessions(std::make_shared<Rcmd::Ldp::Sessions>())
    , remote_lfa_s(std::make_shared<Rcmd::Ldp::RemoteLfaS>())
    , remote_lfa_summaries(std::make_shared<Rcmd::Ldp::RemoteLfaSummaries>())
{
    sessions->parent = this;
    remote_lfa_s->parent = this;
    remote_lfa_summaries->parent = this;

    yang_name = "ldp"; yang_parent_name = "rcmd"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcmd::Ldp::~Ldp()
{
}

bool Rcmd::Ldp::has_data() const
{
    if (is_presence_container) return true;
    return (sessions !=  nullptr && sessions->has_data())
	|| (remote_lfa_s !=  nullptr && remote_lfa_s->has_data())
	|| (remote_lfa_summaries !=  nullptr && remote_lfa_summaries->has_data());
}

bool Rcmd::Ldp::has_operation() const
{
    return is_set(yfilter)
	|| (sessions !=  nullptr && sessions->has_operation())
	|| (remote_lfa_s !=  nullptr && remote_lfa_s->has_operation())
	|| (remote_lfa_summaries !=  nullptr && remote_lfa_summaries->has_operation());
}

std::string Rcmd::Ldp::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Ldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ldp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sessions")
    {
        if(sessions == nullptr)
        {
            sessions = std::make_shared<Rcmd::Ldp::Sessions>();
        }
        return sessions;
    }

    if(child_yang_name == "remote-lfa-s")
    {
        if(remote_lfa_s == nullptr)
        {
            remote_lfa_s = std::make_shared<Rcmd::Ldp::RemoteLfaS>();
        }
        return remote_lfa_s;
    }

    if(child_yang_name == "remote-lfa-summaries")
    {
        if(remote_lfa_summaries == nullptr)
        {
            remote_lfa_summaries = std::make_shared<Rcmd::Ldp::RemoteLfaSummaries>();
        }
        return remote_lfa_summaries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ldp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sessions != nullptr)
    {
        _children["sessions"] = sessions;
    }

    if(remote_lfa_s != nullptr)
    {
        _children["remote-lfa-s"] = remote_lfa_s;
    }

    if(remote_lfa_summaries != nullptr)
    {
        _children["remote-lfa-summaries"] = remote_lfa_summaries;
    }

    return _children;
}

void Rcmd::Ldp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Ldp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Ldp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sessions" || name == "remote-lfa-s" || name == "remote-lfa-summaries")
        return true;
    return false;
}

Rcmd::Ldp::Sessions::Sessions()
    :
    session(this, {"event_id"})
{

    yang_name = "sessions"; yang_parent_name = "ldp"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcmd::Ldp::Sessions::~Sessions()
{
}

bool Rcmd::Ldp::Sessions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<session.len(); index++)
    {
        if(session[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Ldp::Sessions::has_operation() const
{
    for (std::size_t index=0; index<session.len(); index++)
    {
        if(session[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rcmd::Ldp::Sessions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/ldp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Ldp::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ldp::Sessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ldp::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        auto ent_ = std::make_shared<Rcmd::Ldp::Sessions::Session>();
        ent_->parent = this;
        session.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ldp::Sessions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : session.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Ldp::Sessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Ldp::Sessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Ldp::Sessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session")
        return true;
    return false;
}

Rcmd::Ldp::Sessions::Session::Session()
    :
    event_id{YType::uint32, "event-id"},
    event_id_xr{YType::uint32, "event-id-xr"},
    event_type{YType::enumeration, "event-type"},
    event_time{YType::str, "event-time"},
    lsr_id{YType::str, "lsr-id"},
    interface_name{YType::str, "interface-name"},
    address{YType::str, "address"},
    state{YType::enumeration, "state"}
{

    yang_name = "session"; yang_parent_name = "sessions"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcmd::Ldp::Sessions::Session::~Session()
{
}

bool Rcmd::Ldp::Sessions::Session::has_data() const
{
    if (is_presence_container) return true;
    return event_id.is_set
	|| event_id_xr.is_set
	|| event_type.is_set
	|| event_time.is_set
	|| lsr_id.is_set
	|| interface_name.is_set
	|| address.is_set
	|| state.is_set;
}

bool Rcmd::Ldp::Sessions::Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_id.yfilter)
	|| ydk::is_set(event_id_xr.yfilter)
	|| ydk::is_set(event_type.yfilter)
	|| ydk::is_set(event_time.yfilter)
	|| ydk::is_set(lsr_id.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string Rcmd::Ldp::Sessions::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/ldp/sessions/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Ldp::Sessions::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    ADD_KEY_TOKEN(event_id, "event-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ldp::Sessions::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_id.is_set || is_set(event_id.yfilter)) leaf_name_data.push_back(event_id.get_name_leafdata());
    if (event_id_xr.is_set || is_set(event_id_xr.yfilter)) leaf_name_data.push_back(event_id_xr.get_name_leafdata());
    if (event_type.is_set || is_set(event_type.yfilter)) leaf_name_data.push_back(event_type.get_name_leafdata());
    if (event_time.is_set || is_set(event_time.yfilter)) leaf_name_data.push_back(event_time.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.yfilter)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ldp::Sessions::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ldp::Sessions::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ldp::Sessions::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-id")
    {
        event_id = value;
        event_id.value_namespace = name_space;
        event_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-id-xr")
    {
        event_id_xr = value;
        event_id_xr.value_namespace = name_space;
        event_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-type")
    {
        event_type = value;
        event_type.value_namespace = name_space;
        event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-time")
    {
        event_time = value;
        event_time.value_namespace = name_space;
        event_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
        lsr_id.value_namespace = name_space;
        lsr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ldp::Sessions::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-id")
    {
        event_id.yfilter = yfilter;
    }
    if(value_path == "event-id-xr")
    {
        event_id_xr.yfilter = yfilter;
    }
    if(value_path == "event-type")
    {
        event_type.yfilter = yfilter;
    }
    if(value_path == "event-time")
    {
        event_time.yfilter = yfilter;
    }
    if(value_path == "lsr-id")
    {
        lsr_id.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool Rcmd::Ldp::Sessions::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-id" || name == "event-id-xr" || name == "event-type" || name == "event-time" || name == "lsr-id" || name == "interface-name" || name == "address" || name == "state")
        return true;
    return false;
}

Rcmd::Ldp::RemoteLfaS::RemoteLfaS()
    :
    remote_lfa(this, {"event_id"})
{

    yang_name = "remote-lfa-s"; yang_parent_name = "ldp"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcmd::Ldp::RemoteLfaS::~RemoteLfaS()
{
}

bool Rcmd::Ldp::RemoteLfaS::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remote_lfa.len(); index++)
    {
        if(remote_lfa[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Ldp::RemoteLfaS::has_operation() const
{
    for (std::size_t index=0; index<remote_lfa.len(); index++)
    {
        if(remote_lfa[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rcmd::Ldp::RemoteLfaS::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/ldp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Ldp::RemoteLfaS::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-lfa-s";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ldp::RemoteLfaS::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ldp::RemoteLfaS::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-lfa")
    {
        auto ent_ = std::make_shared<Rcmd::Ldp::RemoteLfaS::RemoteLfa>();
        ent_->parent = this;
        remote_lfa.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ldp::RemoteLfaS::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : remote_lfa.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Ldp::RemoteLfaS::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Ldp::RemoteLfaS::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Ldp::RemoteLfaS::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-lfa")
        return true;
    return false;
}

Rcmd::Ldp::RemoteLfaS::RemoteLfa::RemoteLfa()
    :
    event_id{YType::uint32, "event-id"},
    event_id_xr{YType::uint32, "event-id-xr"},
    end_of_calculation_time{YType::str, "end-of-calculation-time"},
    igp_protocol{YType::enumeration, "igp-protocol"},
    process_name{YType::str, "process-name"},
    ipfrr_event_id{YType::uint32, "ipfrr-event-id"},
    below_threshold{YType::boolean, "below-threshold"}
        ,
    session_statistic(this, {})
    , remote_node(this, {})
    , logs(this, {})
{

    yang_name = "remote-lfa"; yang_parent_name = "remote-lfa-s"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcmd::Ldp::RemoteLfaS::RemoteLfa::~RemoteLfa()
{
}

bool Rcmd::Ldp::RemoteLfaS::RemoteLfa::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<session_statistic.len(); index++)
    {
        if(session_statistic[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<remote_node.len(); index++)
    {
        if(remote_node[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<logs.len(); index++)
    {
        if(logs[index]->has_data())
            return true;
    }
    return event_id.is_set
	|| event_id_xr.is_set
	|| end_of_calculation_time.is_set
	|| igp_protocol.is_set
	|| process_name.is_set
	|| ipfrr_event_id.is_set
	|| below_threshold.is_set;
}

bool Rcmd::Ldp::RemoteLfaS::RemoteLfa::has_operation() const
{
    for (std::size_t index=0; index<session_statistic.len(); index++)
    {
        if(session_statistic[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<remote_node.len(); index++)
    {
        if(remote_node[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<logs.len(); index++)
    {
        if(logs[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(event_id.yfilter)
	|| ydk::is_set(event_id_xr.yfilter)
	|| ydk::is_set(end_of_calculation_time.yfilter)
	|| ydk::is_set(igp_protocol.yfilter)
	|| ydk::is_set(process_name.yfilter)
	|| ydk::is_set(ipfrr_event_id.yfilter)
	|| ydk::is_set(below_threshold.yfilter);
}

std::string Rcmd::Ldp::RemoteLfaS::RemoteLfa::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/ldp/remote-lfa-s/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Ldp::RemoteLfaS::RemoteLfa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-lfa";
    ADD_KEY_TOKEN(event_id, "event-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ldp::RemoteLfaS::RemoteLfa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_id.is_set || is_set(event_id.yfilter)) leaf_name_data.push_back(event_id.get_name_leafdata());
    if (event_id_xr.is_set || is_set(event_id_xr.yfilter)) leaf_name_data.push_back(event_id_xr.get_name_leafdata());
    if (end_of_calculation_time.is_set || is_set(end_of_calculation_time.yfilter)) leaf_name_data.push_back(end_of_calculation_time.get_name_leafdata());
    if (igp_protocol.is_set || is_set(igp_protocol.yfilter)) leaf_name_data.push_back(igp_protocol.get_name_leafdata());
    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());
    if (ipfrr_event_id.is_set || is_set(ipfrr_event_id.yfilter)) leaf_name_data.push_back(ipfrr_event_id.get_name_leafdata());
    if (below_threshold.is_set || is_set(below_threshold.yfilter)) leaf_name_data.push_back(below_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ldp::RemoteLfaS::RemoteLfa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-statistic")
    {
        auto ent_ = std::make_shared<Rcmd::Ldp::RemoteLfaS::RemoteLfa::SessionStatistic>();
        ent_->parent = this;
        session_statistic.append(ent_);
        return ent_;
    }

    if(child_yang_name == "remote-node")
    {
        auto ent_ = std::make_shared<Rcmd::Ldp::RemoteLfaS::RemoteLfa::RemoteNode>();
        ent_->parent = this;
        remote_node.append(ent_);
        return ent_;
    }

    if(child_yang_name == "logs")
    {
        auto ent_ = std::make_shared<Rcmd::Ldp::RemoteLfaS::RemoteLfa::Logs>();
        ent_->parent = this;
        logs.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ldp::RemoteLfaS::RemoteLfa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : session_statistic.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : remote_node.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : logs.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Ldp::RemoteLfaS::RemoteLfa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-id")
    {
        event_id = value;
        event_id.value_namespace = name_space;
        event_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-id-xr")
    {
        event_id_xr = value;
        event_id_xr.value_namespace = name_space;
        event_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-of-calculation-time")
    {
        end_of_calculation_time = value;
        end_of_calculation_time.value_namespace = name_space;
        end_of_calculation_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-protocol")
    {
        igp_protocol = value;
        igp_protocol.value_namespace = name_space;
        igp_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-name")
    {
        process_name = value;
        process_name.value_namespace = name_space;
        process_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipfrr-event-id")
    {
        ipfrr_event_id = value;
        ipfrr_event_id.value_namespace = name_space;
        ipfrr_event_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "below-threshold")
    {
        below_threshold = value;
        below_threshold.value_namespace = name_space;
        below_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ldp::RemoteLfaS::RemoteLfa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-id")
    {
        event_id.yfilter = yfilter;
    }
    if(value_path == "event-id-xr")
    {
        event_id_xr.yfilter = yfilter;
    }
    if(value_path == "end-of-calculation-time")
    {
        end_of_calculation_time.yfilter = yfilter;
    }
    if(value_path == "igp-protocol")
    {
        igp_protocol.yfilter = yfilter;
    }
    if(value_path == "process-name")
    {
        process_name.yfilter = yfilter;
    }
    if(value_path == "ipfrr-event-id")
    {
        ipfrr_event_id.yfilter = yfilter;
    }
    if(value_path == "below-threshold")
    {
        below_threshold.yfilter = yfilter;
    }
}

bool Rcmd::Ldp::RemoteLfaS::RemoteLfa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-statistic" || name == "remote-node" || name == "logs" || name == "event-id" || name == "event-id-xr" || name == "end-of-calculation-time" || name == "igp-protocol" || name == "process-name" || name == "ipfrr-event-id" || name == "below-threshold")
        return true;
    return false;
}

Rcmd::Ldp::RemoteLfaS::RemoteLfa::SessionStatistic::SessionStatistic()
    :
    session_state{YType::enumeration, "session-state"},
    session_count{YType::uint32, "session-count"},
    route_count{YType::uint32, "route-count"},
    path_count{YType::uint32, "path-count"},
    remote_label_count{YType::uint32, "remote-label-count"},
    protected_route_count{YType::uint32, "protected-route-count"},
    protected_path_count{YType::uint32, "protected-path-count"}
{

    yang_name = "session-statistic"; yang_parent_name = "remote-lfa"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ldp::RemoteLfaS::RemoteLfa::SessionStatistic::~SessionStatistic()
{
}

bool Rcmd::Ldp::RemoteLfaS::RemoteLfa::SessionStatistic::has_data() const
{
    if (is_presence_container) return true;
    return session_state.is_set
	|| session_count.is_set
	|| route_count.is_set
	|| path_count.is_set
	|| remote_label_count.is_set
	|| protected_route_count.is_set
	|| protected_path_count.is_set;
}

bool Rcmd::Ldp::RemoteLfaS::RemoteLfa::SessionStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_state.yfilter)
	|| ydk::is_set(session_count.yfilter)
	|| ydk::is_set(route_count.yfilter)
	|| ydk::is_set(path_count.yfilter)
	|| ydk::is_set(remote_label_count.yfilter)
	|| ydk::is_set(protected_route_count.yfilter)
	|| ydk::is_set(protected_path_count.yfilter);
}

std::string Rcmd::Ldp::RemoteLfaS::RemoteLfa::SessionStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-statistic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ldp::RemoteLfaS::RemoteLfa::SessionStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_state.is_set || is_set(session_state.yfilter)) leaf_name_data.push_back(session_state.get_name_leafdata());
    if (session_count.is_set || is_set(session_count.yfilter)) leaf_name_data.push_back(session_count.get_name_leafdata());
    if (route_count.is_set || is_set(route_count.yfilter)) leaf_name_data.push_back(route_count.get_name_leafdata());
    if (path_count.is_set || is_set(path_count.yfilter)) leaf_name_data.push_back(path_count.get_name_leafdata());
    if (remote_label_count.is_set || is_set(remote_label_count.yfilter)) leaf_name_data.push_back(remote_label_count.get_name_leafdata());
    if (protected_route_count.is_set || is_set(protected_route_count.yfilter)) leaf_name_data.push_back(protected_route_count.get_name_leafdata());
    if (protected_path_count.is_set || is_set(protected_path_count.yfilter)) leaf_name_data.push_back(protected_path_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ldp::RemoteLfaS::RemoteLfa::SessionStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ldp::RemoteLfaS::RemoteLfa::SessionStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ldp::RemoteLfaS::RemoteLfa::SessionStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-state")
    {
        session_state = value;
        session_state.value_namespace = name_space;
        session_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-count")
    {
        session_count = value;
        session_count.value_namespace = name_space;
        session_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-count")
    {
        route_count = value;
        route_count.value_namespace = name_space;
        route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-count")
    {
        path_count = value;
        path_count.value_namespace = name_space;
        path_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-label-count")
    {
        remote_label_count = value;
        remote_label_count.value_namespace = name_space;
        remote_label_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-route-count")
    {
        protected_route_count = value;
        protected_route_count.value_namespace = name_space;
        protected_route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-path-count")
    {
        protected_path_count = value;
        protected_path_count.value_namespace = name_space;
        protected_path_count.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ldp::RemoteLfaS::RemoteLfa::SessionStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-state")
    {
        session_state.yfilter = yfilter;
    }
    if(value_path == "session-count")
    {
        session_count.yfilter = yfilter;
    }
    if(value_path == "route-count")
    {
        route_count.yfilter = yfilter;
    }
    if(value_path == "path-count")
    {
        path_count.yfilter = yfilter;
    }
    if(value_path == "remote-label-count")
    {
        remote_label_count.yfilter = yfilter;
    }
    if(value_path == "protected-route-count")
    {
        protected_route_count.yfilter = yfilter;
    }
    if(value_path == "protected-path-count")
    {
        protected_path_count.yfilter = yfilter;
    }
}

bool Rcmd::Ldp::RemoteLfaS::RemoteLfa::SessionStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-state" || name == "session-count" || name == "route-count" || name == "path-count" || name == "remote-label-count" || name == "protected-route-count" || name == "protected-path-count")
        return true;
    return false;
}

Rcmd::Ldp::RemoteLfaS::RemoteLfa::RemoteNode::RemoteNode()
    :
    remote_node_id{YType::str, "remote-node-id"},
    lsr_id{YType::str, "lsr-id"},
    transport_address{YType::str, "transport-address"},
    in_use_time{YType::str, "in-use-time"},
    session_state{YType::enumeration, "session-state"},
    route_count{YType::uint32, "route-count"},
    path_count{YType::uint32, "path-count"},
    remote_label_count{YType::uint32, "remote-label-count"},
    protected_route_count{YType::uint32, "protected-route-count"},
    protected_path_count{YType::uint32, "protected-path-count"}
{

    yang_name = "remote-node"; yang_parent_name = "remote-lfa"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ldp::RemoteLfaS::RemoteLfa::RemoteNode::~RemoteNode()
{
}

bool Rcmd::Ldp::RemoteLfaS::RemoteLfa::RemoteNode::has_data() const
{
    if (is_presence_container) return true;
    return remote_node_id.is_set
	|| lsr_id.is_set
	|| transport_address.is_set
	|| in_use_time.is_set
	|| session_state.is_set
	|| route_count.is_set
	|| path_count.is_set
	|| remote_label_count.is_set
	|| protected_route_count.is_set
	|| protected_path_count.is_set;
}

bool Rcmd::Ldp::RemoteLfaS::RemoteLfa::RemoteNode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(remote_node_id.yfilter)
	|| ydk::is_set(lsr_id.yfilter)
	|| ydk::is_set(transport_address.yfilter)
	|| ydk::is_set(in_use_time.yfilter)
	|| ydk::is_set(session_state.yfilter)
	|| ydk::is_set(route_count.yfilter)
	|| ydk::is_set(path_count.yfilter)
	|| ydk::is_set(remote_label_count.yfilter)
	|| ydk::is_set(protected_route_count.yfilter)
	|| ydk::is_set(protected_path_count.yfilter);
}

std::string Rcmd::Ldp::RemoteLfaS::RemoteLfa::RemoteNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-node";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ldp::RemoteLfaS::RemoteLfa::RemoteNode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (remote_node_id.is_set || is_set(remote_node_id.yfilter)) leaf_name_data.push_back(remote_node_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.yfilter)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (transport_address.is_set || is_set(transport_address.yfilter)) leaf_name_data.push_back(transport_address.get_name_leafdata());
    if (in_use_time.is_set || is_set(in_use_time.yfilter)) leaf_name_data.push_back(in_use_time.get_name_leafdata());
    if (session_state.is_set || is_set(session_state.yfilter)) leaf_name_data.push_back(session_state.get_name_leafdata());
    if (route_count.is_set || is_set(route_count.yfilter)) leaf_name_data.push_back(route_count.get_name_leafdata());
    if (path_count.is_set || is_set(path_count.yfilter)) leaf_name_data.push_back(path_count.get_name_leafdata());
    if (remote_label_count.is_set || is_set(remote_label_count.yfilter)) leaf_name_data.push_back(remote_label_count.get_name_leafdata());
    if (protected_route_count.is_set || is_set(protected_route_count.yfilter)) leaf_name_data.push_back(protected_route_count.get_name_leafdata());
    if (protected_path_count.is_set || is_set(protected_path_count.yfilter)) leaf_name_data.push_back(protected_path_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ldp::RemoteLfaS::RemoteLfa::RemoteNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ldp::RemoteLfaS::RemoteLfa::RemoteNode::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ldp::RemoteLfaS::RemoteLfa::RemoteNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "remote-node-id")
    {
        remote_node_id = value;
        remote_node_id.value_namespace = name_space;
        remote_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
        lsr_id.value_namespace = name_space;
        lsr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport-address")
    {
        transport_address = value;
        transport_address.value_namespace = name_space;
        transport_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-use-time")
    {
        in_use_time = value;
        in_use_time.value_namespace = name_space;
        in_use_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-state")
    {
        session_state = value;
        session_state.value_namespace = name_space;
        session_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-count")
    {
        route_count = value;
        route_count.value_namespace = name_space;
        route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-count")
    {
        path_count = value;
        path_count.value_namespace = name_space;
        path_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-label-count")
    {
        remote_label_count = value;
        remote_label_count.value_namespace = name_space;
        remote_label_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-route-count")
    {
        protected_route_count = value;
        protected_route_count.value_namespace = name_space;
        protected_route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-path-count")
    {
        protected_path_count = value;
        protected_path_count.value_namespace = name_space;
        protected_path_count.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ldp::RemoteLfaS::RemoteLfa::RemoteNode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "remote-node-id")
    {
        remote_node_id.yfilter = yfilter;
    }
    if(value_path == "lsr-id")
    {
        lsr_id.yfilter = yfilter;
    }
    if(value_path == "transport-address")
    {
        transport_address.yfilter = yfilter;
    }
    if(value_path == "in-use-time")
    {
        in_use_time.yfilter = yfilter;
    }
    if(value_path == "session-state")
    {
        session_state.yfilter = yfilter;
    }
    if(value_path == "route-count")
    {
        route_count.yfilter = yfilter;
    }
    if(value_path == "path-count")
    {
        path_count.yfilter = yfilter;
    }
    if(value_path == "remote-label-count")
    {
        remote_label_count.yfilter = yfilter;
    }
    if(value_path == "protected-route-count")
    {
        protected_route_count.yfilter = yfilter;
    }
    if(value_path == "protected-path-count")
    {
        protected_path_count.yfilter = yfilter;
    }
}

bool Rcmd::Ldp::RemoteLfaS::RemoteLfa::RemoteNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-node-id" || name == "lsr-id" || name == "transport-address" || name == "in-use-time" || name == "session-state" || name == "route-count" || name == "path-count" || name == "remote-label-count" || name == "protected-route-count" || name == "protected-path-count")
        return true;
    return false;
}

Rcmd::Ldp::RemoteLfaS::RemoteLfa::Logs::Logs()
    :
    log_time{YType::str, "log-time"},
    label_coverage_state{YType::enumeration, "label-coverage-state"},
    route_count{YType::uint32, "route-count"},
    remote_label_count{YType::uint32, "remote-label-count"}
{

    yang_name = "logs"; yang_parent_name = "remote-lfa"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ldp::RemoteLfaS::RemoteLfa::Logs::~Logs()
{
}

bool Rcmd::Ldp::RemoteLfaS::RemoteLfa::Logs::has_data() const
{
    if (is_presence_container) return true;
    return log_time.is_set
	|| label_coverage_state.is_set
	|| route_count.is_set
	|| remote_label_count.is_set;
}

bool Rcmd::Ldp::RemoteLfaS::RemoteLfa::Logs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(log_time.yfilter)
	|| ydk::is_set(label_coverage_state.yfilter)
	|| ydk::is_set(route_count.yfilter)
	|| ydk::is_set(remote_label_count.yfilter);
}

std::string Rcmd::Ldp::RemoteLfaS::RemoteLfa::Logs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ldp::RemoteLfaS::RemoteLfa::Logs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (log_time.is_set || is_set(log_time.yfilter)) leaf_name_data.push_back(log_time.get_name_leafdata());
    if (label_coverage_state.is_set || is_set(label_coverage_state.yfilter)) leaf_name_data.push_back(label_coverage_state.get_name_leafdata());
    if (route_count.is_set || is_set(route_count.yfilter)) leaf_name_data.push_back(route_count.get_name_leafdata());
    if (remote_label_count.is_set || is_set(remote_label_count.yfilter)) leaf_name_data.push_back(remote_label_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ldp::RemoteLfaS::RemoteLfa::Logs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ldp::RemoteLfaS::RemoteLfa::Logs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ldp::RemoteLfaS::RemoteLfa::Logs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "log-time")
    {
        log_time = value;
        log_time.value_namespace = name_space;
        log_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-coverage-state")
    {
        label_coverage_state = value;
        label_coverage_state.value_namespace = name_space;
        label_coverage_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-count")
    {
        route_count = value;
        route_count.value_namespace = name_space;
        route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-label-count")
    {
        remote_label_count = value;
        remote_label_count.value_namespace = name_space;
        remote_label_count.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ldp::RemoteLfaS::RemoteLfa::Logs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "log-time")
    {
        log_time.yfilter = yfilter;
    }
    if(value_path == "label-coverage-state")
    {
        label_coverage_state.yfilter = yfilter;
    }
    if(value_path == "route-count")
    {
        route_count.yfilter = yfilter;
    }
    if(value_path == "remote-label-count")
    {
        remote_label_count.yfilter = yfilter;
    }
}

bool Rcmd::Ldp::RemoteLfaS::RemoteLfa::Logs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "log-time" || name == "label-coverage-state" || name == "route-count" || name == "remote-label-count")
        return true;
    return false;
}

Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummaries()
    :
    remote_lfa_summary(this, {"event_id"})
{

    yang_name = "remote-lfa-summaries"; yang_parent_name = "ldp"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcmd::Ldp::RemoteLfaSummaries::~RemoteLfaSummaries()
{
}

bool Rcmd::Ldp::RemoteLfaSummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remote_lfa_summary.len(); index++)
    {
        if(remote_lfa_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Ldp::RemoteLfaSummaries::has_operation() const
{
    for (std::size_t index=0; index<remote_lfa_summary.len(); index++)
    {
        if(remote_lfa_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rcmd::Ldp::RemoteLfaSummaries::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/ldp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Ldp::RemoteLfaSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-lfa-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ldp::RemoteLfaSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ldp::RemoteLfaSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-lfa-summary")
    {
        auto ent_ = std::make_shared<Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary>();
        ent_->parent = this;
        remote_lfa_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ldp::RemoteLfaSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : remote_lfa_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Ldp::RemoteLfaSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Ldp::RemoteLfaSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Ldp::RemoteLfaSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-lfa-summary")
        return true;
    return false;
}

Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::RemoteLfaSummary()
    :
    event_id{YType::uint32, "event-id"},
    event_id_xr{YType::uint32, "event-id-xr"},
    end_of_calculation_time{YType::str, "end-of-calculation-time"},
    igp_protocol{YType::enumeration, "igp-protocol"},
    process_name{YType::str, "process-name"},
    ipfrr_event_id{YType::uint32, "ipfrr-event-id"},
    below_threshold{YType::boolean, "below-threshold"}
        ,
    session_statistic(this, {})
    , remote_node(this, {})
    , logs(this, {})
{

    yang_name = "remote-lfa-summary"; yang_parent_name = "remote-lfa-summaries"; is_top_level_class = false; has_list_ancestor = false; 
}

Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::~RemoteLfaSummary()
{
}

bool Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<session_statistic.len(); index++)
    {
        if(session_statistic[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<remote_node.len(); index++)
    {
        if(remote_node[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<logs.len(); index++)
    {
        if(logs[index]->has_data())
            return true;
    }
    return event_id.is_set
	|| event_id_xr.is_set
	|| end_of_calculation_time.is_set
	|| igp_protocol.is_set
	|| process_name.is_set
	|| ipfrr_event_id.is_set
	|| below_threshold.is_set;
}

bool Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::has_operation() const
{
    for (std::size_t index=0; index<session_statistic.len(); index++)
    {
        if(session_statistic[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<remote_node.len(); index++)
    {
        if(remote_node[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<logs.len(); index++)
    {
        if(logs[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(event_id.yfilter)
	|| ydk::is_set(event_id_xr.yfilter)
	|| ydk::is_set(end_of_calculation_time.yfilter)
	|| ydk::is_set(igp_protocol.yfilter)
	|| ydk::is_set(process_name.yfilter)
	|| ydk::is_set(ipfrr_event_id.yfilter)
	|| ydk::is_set(below_threshold.yfilter);
}

std::string Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/ldp/remote-lfa-summaries/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-lfa-summary";
    ADD_KEY_TOKEN(event_id, "event-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_id.is_set || is_set(event_id.yfilter)) leaf_name_data.push_back(event_id.get_name_leafdata());
    if (event_id_xr.is_set || is_set(event_id_xr.yfilter)) leaf_name_data.push_back(event_id_xr.get_name_leafdata());
    if (end_of_calculation_time.is_set || is_set(end_of_calculation_time.yfilter)) leaf_name_data.push_back(end_of_calculation_time.get_name_leafdata());
    if (igp_protocol.is_set || is_set(igp_protocol.yfilter)) leaf_name_data.push_back(igp_protocol.get_name_leafdata());
    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());
    if (ipfrr_event_id.is_set || is_set(ipfrr_event_id.yfilter)) leaf_name_data.push_back(ipfrr_event_id.get_name_leafdata());
    if (below_threshold.is_set || is_set(below_threshold.yfilter)) leaf_name_data.push_back(below_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-statistic")
    {
        auto ent_ = std::make_shared<Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::SessionStatistic>();
        ent_->parent = this;
        session_statistic.append(ent_);
        return ent_;
    }

    if(child_yang_name == "remote-node")
    {
        auto ent_ = std::make_shared<Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::RemoteNode>();
        ent_->parent = this;
        remote_node.append(ent_);
        return ent_;
    }

    if(child_yang_name == "logs")
    {
        auto ent_ = std::make_shared<Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::Logs>();
        ent_->parent = this;
        logs.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : session_statistic.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : remote_node.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : logs.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-id")
    {
        event_id = value;
        event_id.value_namespace = name_space;
        event_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-id-xr")
    {
        event_id_xr = value;
        event_id_xr.value_namespace = name_space;
        event_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-of-calculation-time")
    {
        end_of_calculation_time = value;
        end_of_calculation_time.value_namespace = name_space;
        end_of_calculation_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-protocol")
    {
        igp_protocol = value;
        igp_protocol.value_namespace = name_space;
        igp_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-name")
    {
        process_name = value;
        process_name.value_namespace = name_space;
        process_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipfrr-event-id")
    {
        ipfrr_event_id = value;
        ipfrr_event_id.value_namespace = name_space;
        ipfrr_event_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "below-threshold")
    {
        below_threshold = value;
        below_threshold.value_namespace = name_space;
        below_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-id")
    {
        event_id.yfilter = yfilter;
    }
    if(value_path == "event-id-xr")
    {
        event_id_xr.yfilter = yfilter;
    }
    if(value_path == "end-of-calculation-time")
    {
        end_of_calculation_time.yfilter = yfilter;
    }
    if(value_path == "igp-protocol")
    {
        igp_protocol.yfilter = yfilter;
    }
    if(value_path == "process-name")
    {
        process_name.yfilter = yfilter;
    }
    if(value_path == "ipfrr-event-id")
    {
        ipfrr_event_id.yfilter = yfilter;
    }
    if(value_path == "below-threshold")
    {
        below_threshold.yfilter = yfilter;
    }
}

bool Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-statistic" || name == "remote-node" || name == "logs" || name == "event-id" || name == "event-id-xr" || name == "end-of-calculation-time" || name == "igp-protocol" || name == "process-name" || name == "ipfrr-event-id" || name == "below-threshold")
        return true;
    return false;
}

Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::SessionStatistic::SessionStatistic()
    :
    session_state{YType::enumeration, "session-state"},
    session_count{YType::uint32, "session-count"},
    route_count{YType::uint32, "route-count"},
    path_count{YType::uint32, "path-count"},
    remote_label_count{YType::uint32, "remote-label-count"},
    protected_route_count{YType::uint32, "protected-route-count"},
    protected_path_count{YType::uint32, "protected-path-count"}
{

    yang_name = "session-statistic"; yang_parent_name = "remote-lfa-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::SessionStatistic::~SessionStatistic()
{
}

bool Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::SessionStatistic::has_data() const
{
    if (is_presence_container) return true;
    return session_state.is_set
	|| session_count.is_set
	|| route_count.is_set
	|| path_count.is_set
	|| remote_label_count.is_set
	|| protected_route_count.is_set
	|| protected_path_count.is_set;
}

bool Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::SessionStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_state.yfilter)
	|| ydk::is_set(session_count.yfilter)
	|| ydk::is_set(route_count.yfilter)
	|| ydk::is_set(path_count.yfilter)
	|| ydk::is_set(remote_label_count.yfilter)
	|| ydk::is_set(protected_route_count.yfilter)
	|| ydk::is_set(protected_path_count.yfilter);
}

std::string Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::SessionStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-statistic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::SessionStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_state.is_set || is_set(session_state.yfilter)) leaf_name_data.push_back(session_state.get_name_leafdata());
    if (session_count.is_set || is_set(session_count.yfilter)) leaf_name_data.push_back(session_count.get_name_leafdata());
    if (route_count.is_set || is_set(route_count.yfilter)) leaf_name_data.push_back(route_count.get_name_leafdata());
    if (path_count.is_set || is_set(path_count.yfilter)) leaf_name_data.push_back(path_count.get_name_leafdata());
    if (remote_label_count.is_set || is_set(remote_label_count.yfilter)) leaf_name_data.push_back(remote_label_count.get_name_leafdata());
    if (protected_route_count.is_set || is_set(protected_route_count.yfilter)) leaf_name_data.push_back(protected_route_count.get_name_leafdata());
    if (protected_path_count.is_set || is_set(protected_path_count.yfilter)) leaf_name_data.push_back(protected_path_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::SessionStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::SessionStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::SessionStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-state")
    {
        session_state = value;
        session_state.value_namespace = name_space;
        session_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-count")
    {
        session_count = value;
        session_count.value_namespace = name_space;
        session_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-count")
    {
        route_count = value;
        route_count.value_namespace = name_space;
        route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-count")
    {
        path_count = value;
        path_count.value_namespace = name_space;
        path_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-label-count")
    {
        remote_label_count = value;
        remote_label_count.value_namespace = name_space;
        remote_label_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-route-count")
    {
        protected_route_count = value;
        protected_route_count.value_namespace = name_space;
        protected_route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-path-count")
    {
        protected_path_count = value;
        protected_path_count.value_namespace = name_space;
        protected_path_count.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::SessionStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-state")
    {
        session_state.yfilter = yfilter;
    }
    if(value_path == "session-count")
    {
        session_count.yfilter = yfilter;
    }
    if(value_path == "route-count")
    {
        route_count.yfilter = yfilter;
    }
    if(value_path == "path-count")
    {
        path_count.yfilter = yfilter;
    }
    if(value_path == "remote-label-count")
    {
        remote_label_count.yfilter = yfilter;
    }
    if(value_path == "protected-route-count")
    {
        protected_route_count.yfilter = yfilter;
    }
    if(value_path == "protected-path-count")
    {
        protected_path_count.yfilter = yfilter;
    }
}

bool Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::SessionStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-state" || name == "session-count" || name == "route-count" || name == "path-count" || name == "remote-label-count" || name == "protected-route-count" || name == "protected-path-count")
        return true;
    return false;
}


}
}

