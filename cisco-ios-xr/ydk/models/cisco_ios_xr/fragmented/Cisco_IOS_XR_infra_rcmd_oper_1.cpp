
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
    change_type{YType::enumeration, "change-type"},
    lsa_id{YType::str, "lsa-id"},
    lsa_type{YType::enumeration, "lsa-type"},
    origin_router_id{YType::str, "origin-router-id"},
    reception_time{YType::str, "reception-time"},
    sequence_number{YType::str, "sequence-number"}
{
    yang_name = "trigger-lsa"; yang_parent_name = "summary-external-event-offline";
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TriggerLsa::~TriggerLsa()
{
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TriggerLsa::has_data() const
{
    return change_type.is_set
	|| lsa_id.is_set
	|| lsa_type.is_set
	|| origin_router_id.is_set
	|| reception_time.is_set
	|| sequence_number.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TriggerLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(origin_router_id.yfilter)
	|| ydk::is_set(reception_time.yfilter)
	|| ydk::is_set(sequence_number.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TriggerLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-lsa";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TriggerLsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TriggerLsa' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (origin_router_id.is_set || is_set(origin_router_id.yfilter)) leaf_name_data.push_back(origin_router_id.get_name_leafdata());
    if (reception_time.is_set || is_set(reception_time.yfilter)) leaf_name_data.push_back(reception_time.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TriggerLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TriggerLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TriggerLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "reception-time")
    {
        reception_time = value;
        reception_time.value_namespace = name_space;
        reception_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TriggerLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "origin-router-id")
    {
        origin_router_id.yfilter = yfilter;
    }
    if(value_path == "reception-time")
    {
        reception_time.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TriggerLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "change-type" || name == "lsa-id" || name == "lsa-type" || name == "origin-router-id" || name == "reception-time" || name == "sequence-number")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::TimeLine()
    :
    ldp_enter{YType::str, "ldp-enter"},
    ldp_exit{YType::str, "ldp-exit"},
    lsd_enter{YType::str, "lsd-enter"},
    lsd_exit{YType::str, "lsd-exit"},
    ri_bv4_enter{YType::str, "ri-bv4-enter"},
    ri_bv4_exit{YType::str, "ri-bv4-exit"},
    ri_bv4_redistribute{YType::str, "ri-bv4-redistribute"},
    route_origin{YType::str, "route-origin"}
{
    yang_name = "time-line"; yang_parent_name = "summary-external-event-offline";
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::~TimeLine()
{
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::has_data() const
{
    for (std::size_t index=0; index<lc_ip.size(); index++)
    {
        if(lc_ip[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lc_mpls.size(); index++)
    {
        if(lc_mpls[index]->has_data())
            return true;
    }
    return ldp_enter.is_set
	|| ldp_exit.is_set
	|| lsd_enter.is_set
	|| lsd_exit.is_set
	|| ri_bv4_enter.is_set
	|| ri_bv4_exit.is_set
	|| ri_bv4_redistribute.is_set
	|| route_origin.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::has_operation() const
{
    for (std::size_t index=0; index<lc_ip.size(); index++)
    {
        if(lc_ip[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lc_mpls.size(); index++)
    {
        if(lc_mpls[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ldp_enter.yfilter)
	|| ydk::is_set(ldp_exit.yfilter)
	|| ydk::is_set(lsd_enter.yfilter)
	|| ydk::is_set(lsd_exit.yfilter)
	|| ydk::is_set(ri_bv4_enter.yfilter)
	|| ydk::is_set(ri_bv4_exit.yfilter)
	|| ydk::is_set(ri_bv4_redistribute.yfilter)
	|| ydk::is_set(route_origin.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time-line";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TimeLine' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ldp_enter.is_set || is_set(ldp_enter.yfilter)) leaf_name_data.push_back(ldp_enter.get_name_leafdata());
    if (ldp_exit.is_set || is_set(ldp_exit.yfilter)) leaf_name_data.push_back(ldp_exit.get_name_leafdata());
    if (lsd_enter.is_set || is_set(lsd_enter.yfilter)) leaf_name_data.push_back(lsd_enter.get_name_leafdata());
    if (lsd_exit.is_set || is_set(lsd_exit.yfilter)) leaf_name_data.push_back(lsd_exit.get_name_leafdata());
    if (ri_bv4_enter.is_set || is_set(ri_bv4_enter.yfilter)) leaf_name_data.push_back(ri_bv4_enter.get_name_leafdata());
    if (ri_bv4_exit.is_set || is_set(ri_bv4_exit.yfilter)) leaf_name_data.push_back(ri_bv4_exit.get_name_leafdata());
    if (ri_bv4_redistribute.is_set || is_set(ri_bv4_redistribute.yfilter)) leaf_name_data.push_back(ri_bv4_redistribute.get_name_leafdata());
    if (route_origin.is_set || is_set(route_origin.yfilter)) leaf_name_data.push_back(route_origin.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lc-ip")
    {
        for(auto const & c : lc_ip)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcIp>();
        c->parent = this;
        lc_ip.push_back(c);
        return c;
    }

    if(child_yang_name == "lc-mpls")
    {
        for(auto const & c : lc_mpls)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcMpls>();
        c->parent = this;
        lc_mpls.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lc_ip)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : lc_mpls)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "route-origin")
    {
        route_origin = value;
        route_origin.value_namespace = name_space;
        route_origin.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "route-origin")
    {
        route_origin.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lc-ip" || name == "lc-mpls" || name == "ldp-enter" || name == "ldp-exit" || name == "lsd-enter" || name == "lsd-exit" || name == "ri-bv4-enter" || name == "ri-bv4-exit" || name == "ri-bv4-redistribute" || name == "route-origin")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcIp::LcIp()
    :
    fib_complete{YType::str, "fib-complete"},
    node_name{YType::str, "node-name"},
    speed{YType::enumeration, "speed"}
{
    yang_name = "lc-ip"; yang_parent_name = "time-line";
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcIp::~LcIp()
{
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcIp::has_data() const
{
    return fib_complete.is_set
	|| node_name.is_set
	|| speed.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcIp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fib_complete.yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(speed.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lc-ip";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcIp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LcIp' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fib_complete.is_set || is_set(fib_complete.yfilter)) leaf_name_data.push_back(fib_complete.get_name_leafdata());
    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcIp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcIp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fib-complete")
    {
        fib_complete = value;
        fib_complete.value_namespace = name_space;
        fib_complete.value_namespace_prefix = name_space_prefix;
    }
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

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcIp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fib-complete")
    {
        fib_complete.yfilter = yfilter;
    }
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcIp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fib-complete" || name == "node-name" || name == "speed")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcMpls::LcMpls()
    :
    fib_complete{YType::str, "fib-complete"},
    node_name{YType::str, "node-name"},
    speed{YType::enumeration, "speed"}
{
    yang_name = "lc-mpls"; yang_parent_name = "time-line";
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcMpls::~LcMpls()
{
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcMpls::has_data() const
{
    return fib_complete.is_set
	|| node_name.is_set
	|| speed.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcMpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fib_complete.yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(speed.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcMpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lc-mpls";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcMpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LcMpls' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fib_complete.is_set || is_set(fib_complete.yfilter)) leaf_name_data.push_back(fib_complete.get_name_leafdata());
    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcMpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcMpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcMpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fib-complete")
    {
        fib_complete = value;
        fib_complete.value_namespace = name_space;
        fib_complete.value_namespace_prefix = name_space_prefix;
    }
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

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcMpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fib-complete")
    {
        fib_complete.yfilter = yfilter;
    }
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::TimeLine::LcMpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fib-complete" || name == "node-name" || name == "speed")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::LsaProcessed::LsaProcessed()
    :
    change_type{YType::enumeration, "change-type"},
    lsa_id{YType::str, "lsa-id"},
    lsa_type{YType::enumeration, "lsa-type"},
    origin_router_id{YType::str, "origin-router-id"},
    reception_time{YType::str, "reception-time"},
    sequence_number{YType::str, "sequence-number"}
{
    yang_name = "lsa-processed"; yang_parent_name = "summary-external-event-offline";
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::LsaProcessed::~LsaProcessed()
{
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::LsaProcessed::has_data() const
{
    return change_type.is_set
	|| lsa_id.is_set
	|| lsa_type.is_set
	|| origin_router_id.is_set
	|| reception_time.is_set
	|| sequence_number.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::LsaProcessed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(origin_router_id.yfilter)
	|| ydk::is_set(reception_time.yfilter)
	|| ydk::is_set(sequence_number.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::LsaProcessed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-processed";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::LsaProcessed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaProcessed' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (origin_router_id.is_set || is_set(origin_router_id.yfilter)) leaf_name_data.push_back(origin_router_id.get_name_leafdata());
    if (reception_time.is_set || is_set(reception_time.yfilter)) leaf_name_data.push_back(reception_time.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::LsaProcessed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::LsaProcessed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::LsaProcessed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "reception-time")
    {
        reception_time = value;
        reception_time.value_namespace = name_space;
        reception_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::LsaProcessed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "origin-router-id")
    {
        origin_router_id.yfilter = yfilter;
    }
    if(value_path == "reception-time")
    {
        reception_time.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventOfflines::SummaryExternalEventOffline::LsaProcessed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "change-type" || name == "lsa-id" || name == "lsa-type" || name == "origin-router-id" || name == "reception-time" || name == "sequence-number")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOfflines()
{
    yang_name = "prefix-event-offlines"; yang_parent_name = "instance";
}

Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::~PrefixEventOfflines()
{
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::has_data() const
{
    for (std::size_t index=0; index<prefix_event_offline.size(); index++)
    {
        if(prefix_event_offline[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::has_operation() const
{
    for (std::size_t index=0; index<prefix_event_offline.size(); index++)
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

const EntityPath Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixEventOfflines' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-event-offline")
    {
        for(auto const & c : prefix_event_offline)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline>();
        c->parent = this;
        prefix_event_offline.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prefix_event_offline)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
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
    event_id{YType::int32, "event-id"},
    change_type{YType::enumeration, "change-type"},
    cost{YType::uint32, "cost"},
    ipfrr_event_id{YType::uint32, "ipfrr-event-id"},
    prefix{YType::str, "prefix"},
    prefix_lenth{YType::uint32, "prefix-lenth"},
    priority{YType::enumeration, "priority"},
    route_path_change_type{YType::enumeration, "route-path-change-type"},
    route_type{YType::enumeration, "route-type"},
    spf_run_no{YType::uint32, "spf-run-no"},
    threshold_exceeded{YType::boolean, "threshold-exceeded"},
    trigger_time{YType::str, "trigger-time"}
    	,
    ip_convergence_time(std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime>())
	,mpls_convergence_time(std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime>())
{
    ip_convergence_time->parent = this;

    mpls_convergence_time->parent = this;

    yang_name = "prefix-event-offline"; yang_parent_name = "prefix-event-offlines";
}

Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::~PrefixEventOffline()
{
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::has_data() const
{
    for (std::size_t index=0; index<lsa_processed.size(); index++)
    {
        if(lsa_processed[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<time_line.size(); index++)
    {
        if(time_line[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<trigger_lsa.size(); index++)
    {
        if(trigger_lsa[index]->has_data())
            return true;
    }
    return event_id.is_set
	|| change_type.is_set
	|| cost.is_set
	|| ipfrr_event_id.is_set
	|| prefix.is_set
	|| prefix_lenth.is_set
	|| priority.is_set
	|| route_path_change_type.is_set
	|| route_type.is_set
	|| spf_run_no.is_set
	|| threshold_exceeded.is_set
	|| trigger_time.is_set
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_data())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_data());
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::has_operation() const
{
    for (std::size_t index=0; index<lsa_processed.size(); index++)
    {
        if(lsa_processed[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<time_line.size(); index++)
    {
        if(time_line[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<trigger_lsa.size(); index++)
    {
        if(trigger_lsa[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(event_id.yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(ipfrr_event_id.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_lenth.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(route_path_change_type.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(spf_run_no.yfilter)
	|| ydk::is_set(threshold_exceeded.yfilter)
	|| ydk::is_set(trigger_time.yfilter)
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_operation())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_operation());
}

std::string Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-event-offline" <<"[event-id='" <<event_id <<"']";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixEventOffline' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_id.is_set || is_set(event_id.yfilter)) leaf_name_data.push_back(event_id.get_name_leafdata());
    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (ipfrr_event_id.is_set || is_set(ipfrr_event_id.yfilter)) leaf_name_data.push_back(ipfrr_event_id.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_lenth.is_set || is_set(prefix_lenth.yfilter)) leaf_name_data.push_back(prefix_lenth.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (route_path_change_type.is_set || is_set(route_path_change_type.yfilter)) leaf_name_data.push_back(route_path_change_type.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (spf_run_no.is_set || is_set(spf_run_no.yfilter)) leaf_name_data.push_back(spf_run_no.get_name_leafdata());
    if (threshold_exceeded.is_set || is_set(threshold_exceeded.yfilter)) leaf_name_data.push_back(threshold_exceeded.get_name_leafdata());
    if (trigger_time.is_set || is_set(trigger_time.yfilter)) leaf_name_data.push_back(trigger_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-convergence-time")
    {
        if(ip_convergence_time == nullptr)
        {
            ip_convergence_time = std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime>();
        }
        return ip_convergence_time;
    }

    if(child_yang_name == "lsa-processed")
    {
        for(auto const & c : lsa_processed)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed>();
        c->parent = this;
        lsa_processed.push_back(c);
        return c;
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
        for(auto const & c : path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path>();
        c->parent = this;
        path.push_back(c);
        return c;
    }

    if(child_yang_name == "time-line")
    {
        for(auto const & c : time_line)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine>();
        c->parent = this;
        time_line.push_back(c);
        return c;
    }

    if(child_yang_name == "trigger-lsa")
    {
        for(auto const & c : trigger_lsa)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa>();
        c->parent = this;
        trigger_lsa.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_convergence_time != nullptr)
    {
        children["ip-convergence-time"] = ip_convergence_time;
    }

    for (auto const & c : lsa_processed)
    {
        children[c->get_segment_path()] = c;
    }

    if(mpls_convergence_time != nullptr)
    {
        children["mpls-convergence-time"] = mpls_convergence_time;
    }

    for (auto const & c : path)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : time_line)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : trigger_lsa)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-id")
    {
        event_id = value;
        event_id.value_namespace = name_space;
        event_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipfrr-event-id")
    {
        ipfrr_event_id = value;
        ipfrr_event_id.value_namespace = name_space;
        ipfrr_event_id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-change-type")
    {
        route_path_change_type = value;
        route_path_change_type.value_namespace = name_space;
        route_path_change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-run-no")
    {
        spf_run_no = value;
        spf_run_no.value_namespace = name_space;
        spf_run_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded = value;
        threshold_exceeded.value_namespace = name_space;
        threshold_exceeded.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "ipfrr-event-id")
    {
        ipfrr_event_id.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-lenth")
    {
        prefix_lenth.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "route-path-change-type")
    {
        route_path_change_type.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "spf-run-no")
    {
        spf_run_no.yfilter = yfilter;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded.yfilter = yfilter;
    }
    if(value_path == "trigger-time")
    {
        trigger_time.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-convergence-time" || name == "lsa-processed" || name == "mpls-convergence-time" || name == "path" || name == "time-line" || name == "trigger-lsa" || name == "event-id" || name == "change-type" || name == "cost" || name == "ipfrr-event-id" || name == "prefix" || name == "prefix-lenth" || name == "priority" || name == "route-path-change-type" || name == "route-type" || name == "spf-run-no" || name == "threshold-exceeded" || name == "trigger-time")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime::IpConvergenceTime()
    :
    fastest_node_name{YType::str, "fastest-node-name"},
    maximum_time{YType::str, "maximum-time"},
    minimum_time{YType::str, "minimum-time"},
    slowest_node_name{YType::str, "slowest-node-name"}
{
    yang_name = "ip-convergence-time"; yang_parent_name = "prefix-event-offline";
}

Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime::~IpConvergenceTime()
{
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime::has_data() const
{
    return fastest_node_name.is_set
	|| maximum_time.is_set
	|| minimum_time.is_set
	|| slowest_node_name.is_set;
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fastest_node_name.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-convergence-time";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpConvergenceTime' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fastest-node-name" || name == "maximum-time" || name == "minimum-time" || name == "slowest-node-name")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime::MplsConvergenceTime()
    :
    fastest_node_name{YType::str, "fastest-node-name"},
    maximum_time{YType::str, "maximum-time"},
    minimum_time{YType::str, "minimum-time"},
    slowest_node_name{YType::str, "slowest-node-name"}
{
    yang_name = "mpls-convergence-time"; yang_parent_name = "prefix-event-offline";
}

Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime::~MplsConvergenceTime()
{
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime::has_data() const
{
    return fastest_node_name.is_set
	|| maximum_time.is_set
	|| minimum_time.is_set
	|| slowest_node_name.is_set;
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fastest_node_name.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-convergence-time";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsConvergenceTime' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fastest-node-name" || name == "maximum-time" || name == "minimum-time" || name == "slowest-node-name")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::Path()
    :
    change_type{YType::enumeration, "change-type"},
    interface_name{YType::str, "interface-name"},
    neighbour_address{YType::str, "neighbour-address"},
    path_metric{YType::uint32, "path-metric"}
{
    yang_name = "path"; yang_parent_name = "prefix-event-offline";
}

Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::~Path()
{
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::has_data() const
{
    for (std::size_t index=0; index<lfa_path.size(); index++)
    {
        if(lfa_path[index]->has_data())
            return true;
    }
    return change_type.is_set
	|| interface_name.is_set
	|| neighbour_address.is_set
	|| path_metric.is_set;
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::has_operation() const
{
    for (std::size_t index=0; index<lfa_path.size(); index++)
    {
        if(lfa_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbour_address.yfilter)
	|| ydk::is_set(path_metric.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Path' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbour_address.is_set || is_set(neighbour_address.yfilter)) leaf_name_data.push_back(neighbour_address.get_name_leafdata());
    if (path_metric.is_set || is_set(path_metric.yfilter)) leaf_name_data.push_back(path_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lfa-path")
    {
        for(auto const & c : lfa_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath>();
        c->parent = this;
        lfa_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lfa_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "path-metric")
    {
        path_metric = value;
        path_metric.value_namespace = name_space;
        path_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address.yfilter = yfilter;
    }
    if(value_path == "path-metric")
    {
        path_metric.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lfa-path" || name == "change-type" || name == "interface-name" || name == "neighbour-address" || name == "path-metric")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath::LfaPath()
    :
    change_type{YType::enumeration, "change-type"},
    interface_name{YType::str, "interface-name"},
    lfa_type{YType::enumeration, "lfa-type"},
    neighbour_address{YType::str, "neighbour-address"},
    path_metric{YType::uint32, "path-metric"},
    remote_node_id{YType::str, "remote-node-id"}
{
    yang_name = "lfa-path"; yang_parent_name = "path";
}

Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath::~LfaPath()
{
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath::has_data() const
{
    return change_type.is_set
	|| interface_name.is_set
	|| lfa_type.is_set
	|| neighbour_address.is_set
	|| path_metric.is_set
	|| remote_node_id.is_set;
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(lfa_type.yfilter)
	|| ydk::is_set(neighbour_address.yfilter)
	|| ydk::is_set(path_metric.yfilter)
	|| ydk::is_set(remote_node_id.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lfa-path";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LfaPath' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (lfa_type.is_set || is_set(lfa_type.yfilter)) leaf_name_data.push_back(lfa_type.get_name_leafdata());
    if (neighbour_address.is_set || is_set(neighbour_address.yfilter)) leaf_name_data.push_back(neighbour_address.get_name_leafdata());
    if (path_metric.is_set || is_set(path_metric.yfilter)) leaf_name_data.push_back(path_metric.get_name_leafdata());
    if (remote_node_id.is_set || is_set(remote_node_id.yfilter)) leaf_name_data.push_back(remote_node_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lfa-type")
    {
        lfa_type = value;
        lfa_type.value_namespace = name_space;
        lfa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address = value;
        neighbour_address.value_namespace = name_space;
        neighbour_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "lfa-type")
    {
        lfa_type.yfilter = yfilter;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address.yfilter = yfilter;
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
    if(name == "change-type" || name == "interface-name" || name == "lfa-type" || name == "neighbour-address" || name == "path-metric" || name == "remote-node-id")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa::TriggerLsa()
    :
    change_type{YType::enumeration, "change-type"},
    lsa_id{YType::str, "lsa-id"},
    lsa_type{YType::enumeration, "lsa-type"},
    origin_router_id{YType::str, "origin-router-id"},
    reception_time{YType::str, "reception-time"},
    sequence_number{YType::str, "sequence-number"}
{
    yang_name = "trigger-lsa"; yang_parent_name = "prefix-event-offline";
}

Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa::~TriggerLsa()
{
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa::has_data() const
{
    return change_type.is_set
	|| lsa_id.is_set
	|| lsa_type.is_set
	|| origin_router_id.is_set
	|| reception_time.is_set
	|| sequence_number.is_set;
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(origin_router_id.yfilter)
	|| ydk::is_set(reception_time.yfilter)
	|| ydk::is_set(sequence_number.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-lsa";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TriggerLsa' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (origin_router_id.is_set || is_set(origin_router_id.yfilter)) leaf_name_data.push_back(origin_router_id.get_name_leafdata());
    if (reception_time.is_set || is_set(reception_time.yfilter)) leaf_name_data.push_back(reception_time.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "reception-time")
    {
        reception_time = value;
        reception_time.value_namespace = name_space;
        reception_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "origin-router-id")
    {
        origin_router_id.yfilter = yfilter;
    }
    if(value_path == "reception-time")
    {
        reception_time.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "change-type" || name == "lsa-id" || name == "lsa-type" || name == "origin-router-id" || name == "reception-time" || name == "sequence-number")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::TimeLine()
    :
    ldp_enter{YType::str, "ldp-enter"},
    ldp_exit{YType::str, "ldp-exit"},
    lsd_enter{YType::str, "lsd-enter"},
    lsd_exit{YType::str, "lsd-exit"},
    ri_bv4_enter{YType::str, "ri-bv4-enter"},
    ri_bv4_exit{YType::str, "ri-bv4-exit"},
    ri_bv4_redistribute{YType::str, "ri-bv4-redistribute"},
    route_origin{YType::str, "route-origin"}
{
    yang_name = "time-line"; yang_parent_name = "prefix-event-offline";
}

Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::~TimeLine()
{
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::has_data() const
{
    for (std::size_t index=0; index<lc_ip.size(); index++)
    {
        if(lc_ip[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lc_mpls.size(); index++)
    {
        if(lc_mpls[index]->has_data())
            return true;
    }
    return ldp_enter.is_set
	|| ldp_exit.is_set
	|| lsd_enter.is_set
	|| lsd_exit.is_set
	|| ri_bv4_enter.is_set
	|| ri_bv4_exit.is_set
	|| ri_bv4_redistribute.is_set
	|| route_origin.is_set;
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::has_operation() const
{
    for (std::size_t index=0; index<lc_ip.size(); index++)
    {
        if(lc_ip[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lc_mpls.size(); index++)
    {
        if(lc_mpls[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ldp_enter.yfilter)
	|| ydk::is_set(ldp_exit.yfilter)
	|| ydk::is_set(lsd_enter.yfilter)
	|| ydk::is_set(lsd_exit.yfilter)
	|| ydk::is_set(ri_bv4_enter.yfilter)
	|| ydk::is_set(ri_bv4_exit.yfilter)
	|| ydk::is_set(ri_bv4_redistribute.yfilter)
	|| ydk::is_set(route_origin.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time-line";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TimeLine' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ldp_enter.is_set || is_set(ldp_enter.yfilter)) leaf_name_data.push_back(ldp_enter.get_name_leafdata());
    if (ldp_exit.is_set || is_set(ldp_exit.yfilter)) leaf_name_data.push_back(ldp_exit.get_name_leafdata());
    if (lsd_enter.is_set || is_set(lsd_enter.yfilter)) leaf_name_data.push_back(lsd_enter.get_name_leafdata());
    if (lsd_exit.is_set || is_set(lsd_exit.yfilter)) leaf_name_data.push_back(lsd_exit.get_name_leafdata());
    if (ri_bv4_enter.is_set || is_set(ri_bv4_enter.yfilter)) leaf_name_data.push_back(ri_bv4_enter.get_name_leafdata());
    if (ri_bv4_exit.is_set || is_set(ri_bv4_exit.yfilter)) leaf_name_data.push_back(ri_bv4_exit.get_name_leafdata());
    if (ri_bv4_redistribute.is_set || is_set(ri_bv4_redistribute.yfilter)) leaf_name_data.push_back(ri_bv4_redistribute.get_name_leafdata());
    if (route_origin.is_set || is_set(route_origin.yfilter)) leaf_name_data.push_back(route_origin.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lc-ip")
    {
        for(auto const & c : lc_ip)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp>();
        c->parent = this;
        lc_ip.push_back(c);
        return c;
    }

    if(child_yang_name == "lc-mpls")
    {
        for(auto const & c : lc_mpls)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls>();
        c->parent = this;
        lc_mpls.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lc_ip)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : lc_mpls)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "route-origin")
    {
        route_origin = value;
        route_origin.value_namespace = name_space;
        route_origin.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "route-origin")
    {
        route_origin.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lc-ip" || name == "lc-mpls" || name == "ldp-enter" || name == "ldp-exit" || name == "lsd-enter" || name == "lsd-exit" || name == "ri-bv4-enter" || name == "ri-bv4-exit" || name == "ri-bv4-redistribute" || name == "route-origin")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp::LcIp()
    :
    fib_complete{YType::str, "fib-complete"},
    node_name{YType::str, "node-name"},
    speed{YType::enumeration, "speed"}
{
    yang_name = "lc-ip"; yang_parent_name = "time-line";
}

Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp::~LcIp()
{
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp::has_data() const
{
    return fib_complete.is_set
	|| node_name.is_set
	|| speed.is_set;
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fib_complete.yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(speed.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lc-ip";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LcIp' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fib_complete.is_set || is_set(fib_complete.yfilter)) leaf_name_data.push_back(fib_complete.get_name_leafdata());
    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fib-complete")
    {
        fib_complete = value;
        fib_complete.value_namespace = name_space;
        fib_complete.value_namespace_prefix = name_space_prefix;
    }
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

void Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fib-complete")
    {
        fib_complete.yfilter = yfilter;
    }
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fib-complete" || name == "node-name" || name == "speed")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls::LcMpls()
    :
    fib_complete{YType::str, "fib-complete"},
    node_name{YType::str, "node-name"},
    speed{YType::enumeration, "speed"}
{
    yang_name = "lc-mpls"; yang_parent_name = "time-line";
}

Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls::~LcMpls()
{
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls::has_data() const
{
    return fib_complete.is_set
	|| node_name.is_set
	|| speed.is_set;
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fib_complete.yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(speed.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lc-mpls";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LcMpls' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fib_complete.is_set || is_set(fib_complete.yfilter)) leaf_name_data.push_back(fib_complete.get_name_leafdata());
    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fib-complete")
    {
        fib_complete = value;
        fib_complete.value_namespace = name_space;
        fib_complete.value_namespace_prefix = name_space_prefix;
    }
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

void Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fib-complete")
    {
        fib_complete.yfilter = yfilter;
    }
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fib-complete" || name == "node-name" || name == "speed")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed::LsaProcessed()
    :
    change_type{YType::enumeration, "change-type"},
    lsa_id{YType::str, "lsa-id"},
    lsa_type{YType::enumeration, "lsa-type"},
    origin_router_id{YType::str, "origin-router-id"},
    reception_time{YType::str, "reception-time"},
    sequence_number{YType::str, "sequence-number"}
{
    yang_name = "lsa-processed"; yang_parent_name = "prefix-event-offline";
}

Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed::~LsaProcessed()
{
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed::has_data() const
{
    return change_type.is_set
	|| lsa_id.is_set
	|| lsa_type.is_set
	|| origin_router_id.is_set
	|| reception_time.is_set
	|| sequence_number.is_set;
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(origin_router_id.yfilter)
	|| ydk::is_set(reception_time.yfilter)
	|| ydk::is_set(sequence_number.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-processed";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaProcessed' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (origin_router_id.is_set || is_set(origin_router_id.yfilter)) leaf_name_data.push_back(origin_router_id.get_name_leafdata());
    if (reception_time.is_set || is_set(reception_time.yfilter)) leaf_name_data.push_back(reception_time.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "reception-time")
    {
        reception_time = value;
        reception_time.value_namespace = name_space;
        reception_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "origin-router-id")
    {
        origin_router_id.yfilter = yfilter;
    }
    if(value_path == "reception-time")
    {
        reception_time.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "change-type" || name == "lsa-id" || name == "lsa-type" || name == "origin-router-id" || name == "reception-time" || name == "sequence-number")
        return true;
    return false;
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventStatistics::SummaryExternalEventStatistics()
    :
    external_added{YType::uint32, "external-added"},
    external_critical{YType::uint32, "external-critical"},
    external_deleted{YType::uint32, "external-deleted"},
    external_high{YType::uint32, "external-high"},
    external_low{YType::uint32, "external-low"},
    external_medium{YType::uint32, "external-medium"},
    external_modified{YType::uint32, "external-modified"},
    external_routes{YType::uint32, "external-routes"},
    inter_area_added{YType::uint32, "inter-area-added"},
    inter_area_critical{YType::uint32, "inter-area-critical"},
    inter_area_deleted{YType::uint32, "inter-area-deleted"},
    inter_area_high{YType::uint32, "inter-area-high"},
    inter_area_low{YType::uint32, "inter-area-low"},
    inter_area_medium{YType::uint32, "inter-area-medium"},
    inter_area_modified{YType::uint32, "inter-area-modified"},
    inter_area_routes{YType::uint32, "inter-area-routes"}
{
    yang_name = "summary-external-event-statistics"; yang_parent_name = "instance";
}

Rcmd::Ospf::Instances::Instance::SummaryExternalEventStatistics::~SummaryExternalEventStatistics()
{
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventStatistics::has_data() const
{
    return external_added.is_set
	|| external_critical.is_set
	|| external_deleted.is_set
	|| external_high.is_set
	|| external_low.is_set
	|| external_medium.is_set
	|| external_modified.is_set
	|| external_routes.is_set
	|| inter_area_added.is_set
	|| inter_area_critical.is_set
	|| inter_area_deleted.is_set
	|| inter_area_high.is_set
	|| inter_area_low.is_set
	|| inter_area_medium.is_set
	|| inter_area_modified.is_set
	|| inter_area_routes.is_set;
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_added.yfilter)
	|| ydk::is_set(external_critical.yfilter)
	|| ydk::is_set(external_deleted.yfilter)
	|| ydk::is_set(external_high.yfilter)
	|| ydk::is_set(external_low.yfilter)
	|| ydk::is_set(external_medium.yfilter)
	|| ydk::is_set(external_modified.yfilter)
	|| ydk::is_set(external_routes.yfilter)
	|| ydk::is_set(inter_area_added.yfilter)
	|| ydk::is_set(inter_area_critical.yfilter)
	|| ydk::is_set(inter_area_deleted.yfilter)
	|| ydk::is_set(inter_area_high.yfilter)
	|| ydk::is_set(inter_area_low.yfilter)
	|| ydk::is_set(inter_area_medium.yfilter)
	|| ydk::is_set(inter_area_modified.yfilter)
	|| ydk::is_set(inter_area_routes.yfilter);
}

std::string Rcmd::Ospf::Instances::Instance::SummaryExternalEventStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-external-event-statistics";

    return path_buffer.str();

}

const EntityPath Rcmd::Ospf::Instances::Instance::SummaryExternalEventStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SummaryExternalEventStatistics' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_added.is_set || is_set(external_added.yfilter)) leaf_name_data.push_back(external_added.get_name_leafdata());
    if (external_critical.is_set || is_set(external_critical.yfilter)) leaf_name_data.push_back(external_critical.get_name_leafdata());
    if (external_deleted.is_set || is_set(external_deleted.yfilter)) leaf_name_data.push_back(external_deleted.get_name_leafdata());
    if (external_high.is_set || is_set(external_high.yfilter)) leaf_name_data.push_back(external_high.get_name_leafdata());
    if (external_low.is_set || is_set(external_low.yfilter)) leaf_name_data.push_back(external_low.get_name_leafdata());
    if (external_medium.is_set || is_set(external_medium.yfilter)) leaf_name_data.push_back(external_medium.get_name_leafdata());
    if (external_modified.is_set || is_set(external_modified.yfilter)) leaf_name_data.push_back(external_modified.get_name_leafdata());
    if (external_routes.is_set || is_set(external_routes.yfilter)) leaf_name_data.push_back(external_routes.get_name_leafdata());
    if (inter_area_added.is_set || is_set(inter_area_added.yfilter)) leaf_name_data.push_back(inter_area_added.get_name_leafdata());
    if (inter_area_critical.is_set || is_set(inter_area_critical.yfilter)) leaf_name_data.push_back(inter_area_critical.get_name_leafdata());
    if (inter_area_deleted.is_set || is_set(inter_area_deleted.yfilter)) leaf_name_data.push_back(inter_area_deleted.get_name_leafdata());
    if (inter_area_high.is_set || is_set(inter_area_high.yfilter)) leaf_name_data.push_back(inter_area_high.get_name_leafdata());
    if (inter_area_low.is_set || is_set(inter_area_low.yfilter)) leaf_name_data.push_back(inter_area_low.get_name_leafdata());
    if (inter_area_medium.is_set || is_set(inter_area_medium.yfilter)) leaf_name_data.push_back(inter_area_medium.get_name_leafdata());
    if (inter_area_modified.is_set || is_set(inter_area_modified.yfilter)) leaf_name_data.push_back(inter_area_modified.get_name_leafdata());
    if (inter_area_routes.is_set || is_set(inter_area_routes.yfilter)) leaf_name_data.push_back(inter_area_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ospf::Instances::Instance::SummaryExternalEventStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ospf::Instances::Instance::SummaryExternalEventStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-added")
    {
        external_added = value;
        external_added.value_namespace = name_space;
        external_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-critical")
    {
        external_critical = value;
        external_critical.value_namespace = name_space;
        external_critical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-deleted")
    {
        external_deleted = value;
        external_deleted.value_namespace = name_space;
        external_deleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-high")
    {
        external_high = value;
        external_high.value_namespace = name_space;
        external_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-low")
    {
        external_low = value;
        external_low.value_namespace = name_space;
        external_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-medium")
    {
        external_medium = value;
        external_medium.value_namespace = name_space;
        external_medium.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-modified")
    {
        external_modified = value;
        external_modified.value_namespace = name_space;
        external_modified.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "external-routes")
    {
        external_routes = value;
        external_routes.value_namespace = name_space;
        external_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-area-added")
    {
        inter_area_added = value;
        inter_area_added.value_namespace = name_space;
        inter_area_added.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-area-critical")
    {
        inter_area_critical = value;
        inter_area_critical.value_namespace = name_space;
        inter_area_critical.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-area-deleted")
    {
        inter_area_deleted = value;
        inter_area_deleted.value_namespace = name_space;
        inter_area_deleted.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-area-high")
    {
        inter_area_high = value;
        inter_area_high.value_namespace = name_space;
        inter_area_high.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-area-low")
    {
        inter_area_low = value;
        inter_area_low.value_namespace = name_space;
        inter_area_low.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-area-medium")
    {
        inter_area_medium = value;
        inter_area_medium.value_namespace = name_space;
        inter_area_medium.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-area-modified")
    {
        inter_area_modified = value;
        inter_area_modified.value_namespace = name_space;
        inter_area_modified.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inter-area-routes")
    {
        inter_area_routes = value;
        inter_area_routes.value_namespace = name_space;
        inter_area_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ospf::Instances::Instance::SummaryExternalEventStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-added")
    {
        external_added.yfilter = yfilter;
    }
    if(value_path == "external-critical")
    {
        external_critical.yfilter = yfilter;
    }
    if(value_path == "external-deleted")
    {
        external_deleted.yfilter = yfilter;
    }
    if(value_path == "external-high")
    {
        external_high.yfilter = yfilter;
    }
    if(value_path == "external-low")
    {
        external_low.yfilter = yfilter;
    }
    if(value_path == "external-medium")
    {
        external_medium.yfilter = yfilter;
    }
    if(value_path == "external-modified")
    {
        external_modified.yfilter = yfilter;
    }
    if(value_path == "external-routes")
    {
        external_routes.yfilter = yfilter;
    }
    if(value_path == "inter-area-added")
    {
        inter_area_added.yfilter = yfilter;
    }
    if(value_path == "inter-area-critical")
    {
        inter_area_critical.yfilter = yfilter;
    }
    if(value_path == "inter-area-deleted")
    {
        inter_area_deleted.yfilter = yfilter;
    }
    if(value_path == "inter-area-high")
    {
        inter_area_high.yfilter = yfilter;
    }
    if(value_path == "inter-area-low")
    {
        inter_area_low.yfilter = yfilter;
    }
    if(value_path == "inter-area-medium")
    {
        inter_area_medium.yfilter = yfilter;
    }
    if(value_path == "inter-area-modified")
    {
        inter_area_modified.yfilter = yfilter;
    }
    if(value_path == "inter-area-routes")
    {
        inter_area_routes.yfilter = yfilter;
    }
}

bool Rcmd::Ospf::Instances::Instance::SummaryExternalEventStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-added" || name == "external-critical" || name == "external-deleted" || name == "external-high" || name == "external-low" || name == "external-medium" || name == "external-modified" || name == "external-routes" || name == "inter-area-added" || name == "inter-area-critical" || name == "inter-area-deleted" || name == "inter-area-high" || name == "inter-area-low" || name == "inter-area-medium" || name == "inter-area-modified" || name == "inter-area-routes")
        return true;
    return false;
}

Rcmd::Server::Server()
    :
    detail(std::make_shared<Rcmd::Server::Detail>())
	,normal(std::make_shared<Rcmd::Server::Normal>())
{
    detail->parent = this;

    normal->parent = this;

    yang_name = "server"; yang_parent_name = "rcmd";
}

Rcmd::Server::~Server()
{
}

bool Rcmd::Server::has_data() const
{
    return (detail !=  nullptr && detail->has_data())
	|| (normal !=  nullptr && normal->has_data());
}

bool Rcmd::Server::has_operation() const
{
    return is_set(yfilter)
	|| (detail !=  nullptr && detail->has_operation())
	|| (normal !=  nullptr && normal->has_operation());
}

std::string Rcmd::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";

    return path_buffer.str();

}

const EntityPath Rcmd::Server::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail")
    {
        if(detail == nullptr)
        {
            detail = std::make_shared<Rcmd::Server::Detail>();
        }
        return detail;
    }

    if(child_yang_name == "normal")
    {
        if(normal == nullptr)
        {
            normal = std::make_shared<Rcmd::Server::Normal>();
        }
        return normal;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(detail != nullptr)
    {
        children["detail"] = detail;
    }

    if(normal != nullptr)
    {
        children["normal"] = normal;
    }

    return children;
}

void Rcmd::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail" || name == "normal")
        return true;
    return false;
}

Rcmd::Server::Normal::Normal()
    :
    archive_count{YType::uint32, "archive-count"},
    diag_node_count{YType::uint32, "diag-node-count"},
    diagnostics_archive_node{YType::str, "diagnostics-archive-node"},
    diagnostics_archive_path{YType::str, "diagnostics-archive-path"},
    disabled_node_count{YType::uint32, "disabled-node-count"},
    event_buffer_size{YType::uint32, "event-buffer-size"},
    host_name{YType::str, "host-name"},
    in_active_node_count{YType::uint32, "in-active-node-count"},
    interface_count{YType::uint32, "interface-count"},
    last_archival_error{YType::str, "last-archival-error"},
    last_archival_error_time{YType::str, "last-archival-error-time"},
    last_archival_status{YType::str, "last-archival-status"},
    last_process_duration{YType::str, "last-process-duration"},
    last_process_start_time{YType::str, "last-process-start-time"},
    last_process_state{YType::enumeration, "last-process-state"},
    max_events{YType::uint32, "max-events"},
    max_interface_count{YType::uint32, "max-interface-count"},
    monitoring_interval{YType::uint32, "monitoring-interval"},
    next_interval{YType::uint32, "next-interval"},
    node_lc_count{YType::uint32, "node-lc-count"},
    node_rp_count{YType::uint32, "node-rp-count"},
    process_count{YType::uint32, "process-count"},
    reports_archive_node{YType::str, "reports-archive-node"},
    reports_archive_path{YType::str, "reports-archive-path"},
    spf_process_count{YType::uint32, "spf-process-count"},
    status{YType::enumeration, "status"}
{
    yang_name = "normal"; yang_parent_name = "server";
}

Rcmd::Server::Normal::~Normal()
{
}

bool Rcmd::Server::Normal::has_data() const
{
    for (std::size_t index=0; index<protocol_config.size(); index++)
    {
        if(protocol_config[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<server_detail.size(); index++)
    {
        if(server_detail[index]->has_data())
            return true;
    }
    return archive_count.is_set
	|| diag_node_count.is_set
	|| diagnostics_archive_node.is_set
	|| diagnostics_archive_path.is_set
	|| disabled_node_count.is_set
	|| event_buffer_size.is_set
	|| host_name.is_set
	|| in_active_node_count.is_set
	|| interface_count.is_set
	|| last_archival_error.is_set
	|| last_archival_error_time.is_set
	|| last_archival_status.is_set
	|| last_process_duration.is_set
	|| last_process_start_time.is_set
	|| last_process_state.is_set
	|| max_events.is_set
	|| max_interface_count.is_set
	|| monitoring_interval.is_set
	|| next_interval.is_set
	|| node_lc_count.is_set
	|| node_rp_count.is_set
	|| process_count.is_set
	|| reports_archive_node.is_set
	|| reports_archive_path.is_set
	|| spf_process_count.is_set
	|| status.is_set;
}

bool Rcmd::Server::Normal::has_operation() const
{
    for (std::size_t index=0; index<protocol_config.size(); index++)
    {
        if(protocol_config[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<server_detail.size(); index++)
    {
        if(server_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(archive_count.yfilter)
	|| ydk::is_set(diag_node_count.yfilter)
	|| ydk::is_set(diagnostics_archive_node.yfilter)
	|| ydk::is_set(diagnostics_archive_path.yfilter)
	|| ydk::is_set(disabled_node_count.yfilter)
	|| ydk::is_set(event_buffer_size.yfilter)
	|| ydk::is_set(host_name.yfilter)
	|| ydk::is_set(in_active_node_count.yfilter)
	|| ydk::is_set(interface_count.yfilter)
	|| ydk::is_set(last_archival_error.yfilter)
	|| ydk::is_set(last_archival_error_time.yfilter)
	|| ydk::is_set(last_archival_status.yfilter)
	|| ydk::is_set(last_process_duration.yfilter)
	|| ydk::is_set(last_process_start_time.yfilter)
	|| ydk::is_set(last_process_state.yfilter)
	|| ydk::is_set(max_events.yfilter)
	|| ydk::is_set(max_interface_count.yfilter)
	|| ydk::is_set(monitoring_interval.yfilter)
	|| ydk::is_set(next_interval.yfilter)
	|| ydk::is_set(node_lc_count.yfilter)
	|| ydk::is_set(node_rp_count.yfilter)
	|| ydk::is_set(process_count.yfilter)
	|| ydk::is_set(reports_archive_node.yfilter)
	|| ydk::is_set(reports_archive_path.yfilter)
	|| ydk::is_set(spf_process_count.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string Rcmd::Server::Normal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "normal";

    return path_buffer.str();

}

const EntityPath Rcmd::Server::Normal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (archive_count.is_set || is_set(archive_count.yfilter)) leaf_name_data.push_back(archive_count.get_name_leafdata());
    if (diag_node_count.is_set || is_set(diag_node_count.yfilter)) leaf_name_data.push_back(diag_node_count.get_name_leafdata());
    if (diagnostics_archive_node.is_set || is_set(diagnostics_archive_node.yfilter)) leaf_name_data.push_back(diagnostics_archive_node.get_name_leafdata());
    if (diagnostics_archive_path.is_set || is_set(diagnostics_archive_path.yfilter)) leaf_name_data.push_back(diagnostics_archive_path.get_name_leafdata());
    if (disabled_node_count.is_set || is_set(disabled_node_count.yfilter)) leaf_name_data.push_back(disabled_node_count.get_name_leafdata());
    if (event_buffer_size.is_set || is_set(event_buffer_size.yfilter)) leaf_name_data.push_back(event_buffer_size.get_name_leafdata());
    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (in_active_node_count.is_set || is_set(in_active_node_count.yfilter)) leaf_name_data.push_back(in_active_node_count.get_name_leafdata());
    if (interface_count.is_set || is_set(interface_count.yfilter)) leaf_name_data.push_back(interface_count.get_name_leafdata());
    if (last_archival_error.is_set || is_set(last_archival_error.yfilter)) leaf_name_data.push_back(last_archival_error.get_name_leafdata());
    if (last_archival_error_time.is_set || is_set(last_archival_error_time.yfilter)) leaf_name_data.push_back(last_archival_error_time.get_name_leafdata());
    if (last_archival_status.is_set || is_set(last_archival_status.yfilter)) leaf_name_data.push_back(last_archival_status.get_name_leafdata());
    if (last_process_duration.is_set || is_set(last_process_duration.yfilter)) leaf_name_data.push_back(last_process_duration.get_name_leafdata());
    if (last_process_start_time.is_set || is_set(last_process_start_time.yfilter)) leaf_name_data.push_back(last_process_start_time.get_name_leafdata());
    if (last_process_state.is_set || is_set(last_process_state.yfilter)) leaf_name_data.push_back(last_process_state.get_name_leafdata());
    if (max_events.is_set || is_set(max_events.yfilter)) leaf_name_data.push_back(max_events.get_name_leafdata());
    if (max_interface_count.is_set || is_set(max_interface_count.yfilter)) leaf_name_data.push_back(max_interface_count.get_name_leafdata());
    if (monitoring_interval.is_set || is_set(monitoring_interval.yfilter)) leaf_name_data.push_back(monitoring_interval.get_name_leafdata());
    if (next_interval.is_set || is_set(next_interval.yfilter)) leaf_name_data.push_back(next_interval.get_name_leafdata());
    if (node_lc_count.is_set || is_set(node_lc_count.yfilter)) leaf_name_data.push_back(node_lc_count.get_name_leafdata());
    if (node_rp_count.is_set || is_set(node_rp_count.yfilter)) leaf_name_data.push_back(node_rp_count.get_name_leafdata());
    if (process_count.is_set || is_set(process_count.yfilter)) leaf_name_data.push_back(process_count.get_name_leafdata());
    if (reports_archive_node.is_set || is_set(reports_archive_node.yfilter)) leaf_name_data.push_back(reports_archive_node.get_name_leafdata());
    if (reports_archive_path.is_set || is_set(reports_archive_path.yfilter)) leaf_name_data.push_back(reports_archive_path.get_name_leafdata());
    if (spf_process_count.is_set || is_set(spf_process_count.yfilter)) leaf_name_data.push_back(spf_process_count.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Server::Normal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-config")
    {
        for(auto const & c : protocol_config)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Server::Normal::ProtocolConfig>();
        c->parent = this;
        protocol_config.push_back(c);
        return c;
    }

    if(child_yang_name == "server-detail")
    {
        for(auto const & c : server_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Server::Normal::ServerDetail>();
        c->parent = this;
        server_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Server::Normal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : protocol_config)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : server_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Server::Normal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "archive-count")
    {
        archive_count = value;
        archive_count.value_namespace = name_space;
        archive_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diag-node-count")
    {
        diag_node_count = value;
        diag_node_count.value_namespace = name_space;
        diag_node_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diagnostics-archive-node")
    {
        diagnostics_archive_node = value;
        diagnostics_archive_node.value_namespace = name_space;
        diagnostics_archive_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diagnostics-archive-path")
    {
        diagnostics_archive_path = value;
        diagnostics_archive_path.value_namespace = name_space;
        diagnostics_archive_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disabled-node-count")
    {
        disabled_node_count = value;
        disabled_node_count.value_namespace = name_space;
        disabled_node_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-buffer-size")
    {
        event_buffer_size = value;
        event_buffer_size.value_namespace = name_space;
        event_buffer_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-name")
    {
        host_name = value;
        host_name.value_namespace = name_space;
        host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-active-node-count")
    {
        in_active_node_count = value;
        in_active_node_count.value_namespace = name_space;
        in_active_node_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-count")
    {
        interface_count = value;
        interface_count.value_namespace = name_space;
        interface_count.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "last-archival-status")
    {
        last_archival_status = value;
        last_archival_status.value_namespace = name_space;
        last_archival_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-process-duration")
    {
        last_process_duration = value;
        last_process_duration.value_namespace = name_space;
        last_process_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-process-start-time")
    {
        last_process_start_time = value;
        last_process_start_time.value_namespace = name_space;
        last_process_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-process-state")
    {
        last_process_state = value;
        last_process_state.value_namespace = name_space;
        last_process_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-events")
    {
        max_events = value;
        max_events.value_namespace = name_space;
        max_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-interface-count")
    {
        max_interface_count = value;
        max_interface_count.value_namespace = name_space;
        max_interface_count.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "node-lc-count")
    {
        node_lc_count = value;
        node_lc_count.value_namespace = name_space;
        node_lc_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-rp-count")
    {
        node_rp_count = value;
        node_rp_count.value_namespace = name_space;
        node_rp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-count")
    {
        process_count = value;
        process_count.value_namespace = name_space;
        process_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reports-archive-node")
    {
        reports_archive_node = value;
        reports_archive_node.value_namespace = name_space;
        reports_archive_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reports-archive-path")
    {
        reports_archive_path = value;
        reports_archive_path.value_namespace = name_space;
        reports_archive_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-process-count")
    {
        spf_process_count = value;
        spf_process_count.value_namespace = name_space;
        spf_process_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Server::Normal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "archive-count")
    {
        archive_count.yfilter = yfilter;
    }
    if(value_path == "diag-node-count")
    {
        diag_node_count.yfilter = yfilter;
    }
    if(value_path == "diagnostics-archive-node")
    {
        diagnostics_archive_node.yfilter = yfilter;
    }
    if(value_path == "diagnostics-archive-path")
    {
        diagnostics_archive_path.yfilter = yfilter;
    }
    if(value_path == "disabled-node-count")
    {
        disabled_node_count.yfilter = yfilter;
    }
    if(value_path == "event-buffer-size")
    {
        event_buffer_size.yfilter = yfilter;
    }
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
    if(value_path == "in-active-node-count")
    {
        in_active_node_count.yfilter = yfilter;
    }
    if(value_path == "interface-count")
    {
        interface_count.yfilter = yfilter;
    }
    if(value_path == "last-archival-error")
    {
        last_archival_error.yfilter = yfilter;
    }
    if(value_path == "last-archival-error-time")
    {
        last_archival_error_time.yfilter = yfilter;
    }
    if(value_path == "last-archival-status")
    {
        last_archival_status.yfilter = yfilter;
    }
    if(value_path == "last-process-duration")
    {
        last_process_duration.yfilter = yfilter;
    }
    if(value_path == "last-process-start-time")
    {
        last_process_start_time.yfilter = yfilter;
    }
    if(value_path == "last-process-state")
    {
        last_process_state.yfilter = yfilter;
    }
    if(value_path == "max-events")
    {
        max_events.yfilter = yfilter;
    }
    if(value_path == "max-interface-count")
    {
        max_interface_count.yfilter = yfilter;
    }
    if(value_path == "monitoring-interval")
    {
        monitoring_interval.yfilter = yfilter;
    }
    if(value_path == "next-interval")
    {
        next_interval.yfilter = yfilter;
    }
    if(value_path == "node-lc-count")
    {
        node_lc_count.yfilter = yfilter;
    }
    if(value_path == "node-rp-count")
    {
        node_rp_count.yfilter = yfilter;
    }
    if(value_path == "process-count")
    {
        process_count.yfilter = yfilter;
    }
    if(value_path == "reports-archive-node")
    {
        reports_archive_node.yfilter = yfilter;
    }
    if(value_path == "reports-archive-path")
    {
        reports_archive_path.yfilter = yfilter;
    }
    if(value_path == "spf-process-count")
    {
        spf_process_count.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Rcmd::Server::Normal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-config" || name == "server-detail" || name == "archive-count" || name == "diag-node-count" || name == "diagnostics-archive-node" || name == "diagnostics-archive-path" || name == "disabled-node-count" || name == "event-buffer-size" || name == "host-name" || name == "in-active-node-count" || name == "interface-count" || name == "last-archival-error" || name == "last-archival-error-time" || name == "last-archival-status" || name == "last-process-duration" || name == "last-process-start-time" || name == "last-process-state" || name == "max-events" || name == "max-interface-count" || name == "monitoring-interval" || name == "next-interval" || name == "node-lc-count" || name == "node-rp-count" || name == "process-count" || name == "reports-archive-node" || name == "reports-archive-path" || name == "spf-process-count" || name == "status")
        return true;
    return false;
}

Rcmd::Server::Normal::ProtocolConfig::ProtocolConfig()
    :
    protocol_name{YType::str, "protocol-name"}
{
    yang_name = "protocol-config"; yang_parent_name = "normal";
}

Rcmd::Server::Normal::ProtocolConfig::~ProtocolConfig()
{
}

bool Rcmd::Server::Normal::ProtocolConfig::has_data() const
{
    for (std::size_t index=0; index<priority.size(); index++)
    {
        if(priority[index]->has_data())
            return true;
    }
    return protocol_name.is_set;
}

bool Rcmd::Server::Normal::ProtocolConfig::has_operation() const
{
    for (std::size_t index=0; index<priority.size(); index++)
    {
        if(priority[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol_name.yfilter);
}

std::string Rcmd::Server::Normal::ProtocolConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-config";

    return path_buffer.str();

}

const EntityPath Rcmd::Server::Normal::ProtocolConfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/server/normal/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Server::Normal::ProtocolConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        for(auto const & c : priority)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Server::Normal::ProtocolConfig::Priority>();
        c->parent = this;
        priority.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Server::Normal::ProtocolConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : priority)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
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
    disable{YType::enumeration, "disable"},
    priority_name{YType::enumeration, "priority-name"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "priority"; yang_parent_name = "protocol-config";
}

Rcmd::Server::Normal::ProtocolConfig::Priority::~Priority()
{
}

bool Rcmd::Server::Normal::ProtocolConfig::Priority::has_data() const
{
    return disable.is_set
	|| priority_name.is_set
	|| threshold.is_set;
}

bool Rcmd::Server::Normal::ProtocolConfig::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(priority_name.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Rcmd::Server::Normal::ProtocolConfig::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

const EntityPath Rcmd::Server::Normal::ProtocolConfig::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/server/normal/protocol-config/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (priority_name.is_set || is_set(priority_name.yfilter)) leaf_name_data.push_back(priority_name.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Server::Normal::ProtocolConfig::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Server::Normal::ProtocolConfig::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Server::Normal::ProtocolConfig::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
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
}

void Rcmd::Server::Normal::ProtocolConfig::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "priority-name")
    {
        priority_name.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Rcmd::Server::Normal::ProtocolConfig::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "priority-name" || name == "threshold")
        return true;
    return false;
}

Rcmd::Server::Normal::ServerDetail::ServerDetail()
    :
    memory_suspend{YType::uint32, "memory-suspend"},
    overload_suspend{YType::uint32, "overload-suspend"}
{
    yang_name = "server-detail"; yang_parent_name = "normal";
}

Rcmd::Server::Normal::ServerDetail::~ServerDetail()
{
}

bool Rcmd::Server::Normal::ServerDetail::has_data() const
{
    for (std::size_t index=0; index<trace_information.size(); index++)
    {
        if(trace_information[index]->has_data())
            return true;
    }
    return memory_suspend.is_set
	|| overload_suspend.is_set;
}

bool Rcmd::Server::Normal::ServerDetail::has_operation() const
{
    for (std::size_t index=0; index<trace_information.size(); index++)
    {
        if(trace_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(memory_suspend.yfilter)
	|| ydk::is_set(overload_suspend.yfilter);
}

std::string Rcmd::Server::Normal::ServerDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-detail";

    return path_buffer.str();

}

const EntityPath Rcmd::Server::Normal::ServerDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/server/normal/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (memory_suspend.is_set || is_set(memory_suspend.yfilter)) leaf_name_data.push_back(memory_suspend.get_name_leafdata());
    if (overload_suspend.is_set || is_set(overload_suspend.yfilter)) leaf_name_data.push_back(overload_suspend.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Server::Normal::ServerDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace-information")
    {
        for(auto const & c : trace_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Server::Normal::ServerDetail::TraceInformation>();
        c->parent = this;
        trace_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Server::Normal::ServerDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : trace_information)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Server::Normal::ServerDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "memory-suspend")
    {
        memory_suspend = value;
        memory_suspend.value_namespace = name_space;
        memory_suspend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overload-suspend")
    {
        overload_suspend = value;
        overload_suspend.value_namespace = name_space;
        overload_suspend.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Server::Normal::ServerDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "memory-suspend")
    {
        memory_suspend.yfilter = yfilter;
    }
    if(value_path == "overload-suspend")
    {
        overload_suspend.yfilter = yfilter;
    }
}

bool Rcmd::Server::Normal::ServerDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace-information" || name == "memory-suspend" || name == "overload-suspend")
        return true;
    return false;
}

Rcmd::Server::Normal::ServerDetail::TraceInformation::TraceInformation()
    :
    error_stats{YType::uint32, "error-stats"},
    last_run_stats{YType::uint32, "last-run-stats"},
    total_stats{YType::uint32, "total-stats"},
    trace_name{YType::str, "trace-name"}
{
    yang_name = "trace-information"; yang_parent_name = "server-detail";
}

Rcmd::Server::Normal::ServerDetail::TraceInformation::~TraceInformation()
{
}

bool Rcmd::Server::Normal::ServerDetail::TraceInformation::has_data() const
{
    return error_stats.is_set
	|| last_run_stats.is_set
	|| total_stats.is_set
	|| trace_name.is_set;
}

bool Rcmd::Server::Normal::ServerDetail::TraceInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_stats.yfilter)
	|| ydk::is_set(last_run_stats.yfilter)
	|| ydk::is_set(total_stats.yfilter)
	|| ydk::is_set(trace_name.yfilter);
}

std::string Rcmd::Server::Normal::ServerDetail::TraceInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace-information";

    return path_buffer.str();

}

const EntityPath Rcmd::Server::Normal::ServerDetail::TraceInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/server/normal/server-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_stats.is_set || is_set(error_stats.yfilter)) leaf_name_data.push_back(error_stats.get_name_leafdata());
    if (last_run_stats.is_set || is_set(last_run_stats.yfilter)) leaf_name_data.push_back(last_run_stats.get_name_leafdata());
    if (total_stats.is_set || is_set(total_stats.yfilter)) leaf_name_data.push_back(total_stats.get_name_leafdata());
    if (trace_name.is_set || is_set(trace_name.yfilter)) leaf_name_data.push_back(trace_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Server::Normal::ServerDetail::TraceInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Server::Normal::ServerDetail::TraceInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Server::Normal::ServerDetail::TraceInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-stats")
    {
        error_stats = value;
        error_stats.value_namespace = name_space;
        error_stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-run-stats")
    {
        last_run_stats = value;
        last_run_stats.value_namespace = name_space;
        last_run_stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-stats")
    {
        total_stats = value;
        total_stats.value_namespace = name_space;
        total_stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trace-name")
    {
        trace_name = value;
        trace_name.value_namespace = name_space;
        trace_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Server::Normal::ServerDetail::TraceInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-stats")
    {
        error_stats.yfilter = yfilter;
    }
    if(value_path == "last-run-stats")
    {
        last_run_stats.yfilter = yfilter;
    }
    if(value_path == "total-stats")
    {
        total_stats.yfilter = yfilter;
    }
    if(value_path == "trace-name")
    {
        trace_name.yfilter = yfilter;
    }
}

bool Rcmd::Server::Normal::ServerDetail::TraceInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-stats" || name == "last-run-stats" || name == "total-stats" || name == "trace-name")
        return true;
    return false;
}

Rcmd::Server::Detail::Detail()
    :
    archive_count{YType::uint32, "archive-count"},
    diag_node_count{YType::uint32, "diag-node-count"},
    diagnostics_archive_node{YType::str, "diagnostics-archive-node"},
    diagnostics_archive_path{YType::str, "diagnostics-archive-path"},
    disabled_node_count{YType::uint32, "disabled-node-count"},
    event_buffer_size{YType::uint32, "event-buffer-size"},
    host_name{YType::str, "host-name"},
    in_active_node_count{YType::uint32, "in-active-node-count"},
    interface_count{YType::uint32, "interface-count"},
    last_archival_error{YType::str, "last-archival-error"},
    last_archival_error_time{YType::str, "last-archival-error-time"},
    last_archival_status{YType::str, "last-archival-status"},
    last_process_duration{YType::str, "last-process-duration"},
    last_process_start_time{YType::str, "last-process-start-time"},
    last_process_state{YType::enumeration, "last-process-state"},
    max_events{YType::uint32, "max-events"},
    max_interface_count{YType::uint32, "max-interface-count"},
    monitoring_interval{YType::uint32, "monitoring-interval"},
    next_interval{YType::uint32, "next-interval"},
    node_lc_count{YType::uint32, "node-lc-count"},
    node_rp_count{YType::uint32, "node-rp-count"},
    process_count{YType::uint32, "process-count"},
    reports_archive_node{YType::str, "reports-archive-node"},
    reports_archive_path{YType::str, "reports-archive-path"},
    spf_process_count{YType::uint32, "spf-process-count"},
    status{YType::enumeration, "status"}
{
    yang_name = "detail"; yang_parent_name = "server";
}

Rcmd::Server::Detail::~Detail()
{
}

bool Rcmd::Server::Detail::has_data() const
{
    for (std::size_t index=0; index<protocol_config.size(); index++)
    {
        if(protocol_config[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<server_detail.size(); index++)
    {
        if(server_detail[index]->has_data())
            return true;
    }
    return archive_count.is_set
	|| diag_node_count.is_set
	|| diagnostics_archive_node.is_set
	|| diagnostics_archive_path.is_set
	|| disabled_node_count.is_set
	|| event_buffer_size.is_set
	|| host_name.is_set
	|| in_active_node_count.is_set
	|| interface_count.is_set
	|| last_archival_error.is_set
	|| last_archival_error_time.is_set
	|| last_archival_status.is_set
	|| last_process_duration.is_set
	|| last_process_start_time.is_set
	|| last_process_state.is_set
	|| max_events.is_set
	|| max_interface_count.is_set
	|| monitoring_interval.is_set
	|| next_interval.is_set
	|| node_lc_count.is_set
	|| node_rp_count.is_set
	|| process_count.is_set
	|| reports_archive_node.is_set
	|| reports_archive_path.is_set
	|| spf_process_count.is_set
	|| status.is_set;
}

bool Rcmd::Server::Detail::has_operation() const
{
    for (std::size_t index=0; index<protocol_config.size(); index++)
    {
        if(protocol_config[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<server_detail.size(); index++)
    {
        if(server_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(archive_count.yfilter)
	|| ydk::is_set(diag_node_count.yfilter)
	|| ydk::is_set(diagnostics_archive_node.yfilter)
	|| ydk::is_set(diagnostics_archive_path.yfilter)
	|| ydk::is_set(disabled_node_count.yfilter)
	|| ydk::is_set(event_buffer_size.yfilter)
	|| ydk::is_set(host_name.yfilter)
	|| ydk::is_set(in_active_node_count.yfilter)
	|| ydk::is_set(interface_count.yfilter)
	|| ydk::is_set(last_archival_error.yfilter)
	|| ydk::is_set(last_archival_error_time.yfilter)
	|| ydk::is_set(last_archival_status.yfilter)
	|| ydk::is_set(last_process_duration.yfilter)
	|| ydk::is_set(last_process_start_time.yfilter)
	|| ydk::is_set(last_process_state.yfilter)
	|| ydk::is_set(max_events.yfilter)
	|| ydk::is_set(max_interface_count.yfilter)
	|| ydk::is_set(monitoring_interval.yfilter)
	|| ydk::is_set(next_interval.yfilter)
	|| ydk::is_set(node_lc_count.yfilter)
	|| ydk::is_set(node_rp_count.yfilter)
	|| ydk::is_set(process_count.yfilter)
	|| ydk::is_set(reports_archive_node.yfilter)
	|| ydk::is_set(reports_archive_path.yfilter)
	|| ydk::is_set(spf_process_count.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string Rcmd::Server::Detail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail";

    return path_buffer.str();

}

const EntityPath Rcmd::Server::Detail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (archive_count.is_set || is_set(archive_count.yfilter)) leaf_name_data.push_back(archive_count.get_name_leafdata());
    if (diag_node_count.is_set || is_set(diag_node_count.yfilter)) leaf_name_data.push_back(diag_node_count.get_name_leafdata());
    if (diagnostics_archive_node.is_set || is_set(diagnostics_archive_node.yfilter)) leaf_name_data.push_back(diagnostics_archive_node.get_name_leafdata());
    if (diagnostics_archive_path.is_set || is_set(diagnostics_archive_path.yfilter)) leaf_name_data.push_back(diagnostics_archive_path.get_name_leafdata());
    if (disabled_node_count.is_set || is_set(disabled_node_count.yfilter)) leaf_name_data.push_back(disabled_node_count.get_name_leafdata());
    if (event_buffer_size.is_set || is_set(event_buffer_size.yfilter)) leaf_name_data.push_back(event_buffer_size.get_name_leafdata());
    if (host_name.is_set || is_set(host_name.yfilter)) leaf_name_data.push_back(host_name.get_name_leafdata());
    if (in_active_node_count.is_set || is_set(in_active_node_count.yfilter)) leaf_name_data.push_back(in_active_node_count.get_name_leafdata());
    if (interface_count.is_set || is_set(interface_count.yfilter)) leaf_name_data.push_back(interface_count.get_name_leafdata());
    if (last_archival_error.is_set || is_set(last_archival_error.yfilter)) leaf_name_data.push_back(last_archival_error.get_name_leafdata());
    if (last_archival_error_time.is_set || is_set(last_archival_error_time.yfilter)) leaf_name_data.push_back(last_archival_error_time.get_name_leafdata());
    if (last_archival_status.is_set || is_set(last_archival_status.yfilter)) leaf_name_data.push_back(last_archival_status.get_name_leafdata());
    if (last_process_duration.is_set || is_set(last_process_duration.yfilter)) leaf_name_data.push_back(last_process_duration.get_name_leafdata());
    if (last_process_start_time.is_set || is_set(last_process_start_time.yfilter)) leaf_name_data.push_back(last_process_start_time.get_name_leafdata());
    if (last_process_state.is_set || is_set(last_process_state.yfilter)) leaf_name_data.push_back(last_process_state.get_name_leafdata());
    if (max_events.is_set || is_set(max_events.yfilter)) leaf_name_data.push_back(max_events.get_name_leafdata());
    if (max_interface_count.is_set || is_set(max_interface_count.yfilter)) leaf_name_data.push_back(max_interface_count.get_name_leafdata());
    if (monitoring_interval.is_set || is_set(monitoring_interval.yfilter)) leaf_name_data.push_back(monitoring_interval.get_name_leafdata());
    if (next_interval.is_set || is_set(next_interval.yfilter)) leaf_name_data.push_back(next_interval.get_name_leafdata());
    if (node_lc_count.is_set || is_set(node_lc_count.yfilter)) leaf_name_data.push_back(node_lc_count.get_name_leafdata());
    if (node_rp_count.is_set || is_set(node_rp_count.yfilter)) leaf_name_data.push_back(node_rp_count.get_name_leafdata());
    if (process_count.is_set || is_set(process_count.yfilter)) leaf_name_data.push_back(process_count.get_name_leafdata());
    if (reports_archive_node.is_set || is_set(reports_archive_node.yfilter)) leaf_name_data.push_back(reports_archive_node.get_name_leafdata());
    if (reports_archive_path.is_set || is_set(reports_archive_path.yfilter)) leaf_name_data.push_back(reports_archive_path.get_name_leafdata());
    if (spf_process_count.is_set || is_set(spf_process_count.yfilter)) leaf_name_data.push_back(spf_process_count.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Server::Detail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-config")
    {
        for(auto const & c : protocol_config)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Server::Detail::ProtocolConfig>();
        c->parent = this;
        protocol_config.push_back(c);
        return c;
    }

    if(child_yang_name == "server-detail")
    {
        for(auto const & c : server_detail)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Server::Detail::ServerDetail>();
        c->parent = this;
        server_detail.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Server::Detail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : protocol_config)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : server_detail)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Server::Detail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "archive-count")
    {
        archive_count = value;
        archive_count.value_namespace = name_space;
        archive_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diag-node-count")
    {
        diag_node_count = value;
        diag_node_count.value_namespace = name_space;
        diag_node_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diagnostics-archive-node")
    {
        diagnostics_archive_node = value;
        diagnostics_archive_node.value_namespace = name_space;
        diagnostics_archive_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diagnostics-archive-path")
    {
        diagnostics_archive_path = value;
        diagnostics_archive_path.value_namespace = name_space;
        diagnostics_archive_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disabled-node-count")
    {
        disabled_node_count = value;
        disabled_node_count.value_namespace = name_space;
        disabled_node_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-buffer-size")
    {
        event_buffer_size = value;
        event_buffer_size.value_namespace = name_space;
        event_buffer_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "host-name")
    {
        host_name = value;
        host_name.value_namespace = name_space;
        host_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-active-node-count")
    {
        in_active_node_count = value;
        in_active_node_count.value_namespace = name_space;
        in_active_node_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-count")
    {
        interface_count = value;
        interface_count.value_namespace = name_space;
        interface_count.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "last-archival-status")
    {
        last_archival_status = value;
        last_archival_status.value_namespace = name_space;
        last_archival_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-process-duration")
    {
        last_process_duration = value;
        last_process_duration.value_namespace = name_space;
        last_process_duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-process-start-time")
    {
        last_process_start_time = value;
        last_process_start_time.value_namespace = name_space;
        last_process_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-process-state")
    {
        last_process_state = value;
        last_process_state.value_namespace = name_space;
        last_process_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-events")
    {
        max_events = value;
        max_events.value_namespace = name_space;
        max_events.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-interface-count")
    {
        max_interface_count = value;
        max_interface_count.value_namespace = name_space;
        max_interface_count.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "node-lc-count")
    {
        node_lc_count = value;
        node_lc_count.value_namespace = name_space;
        node_lc_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-rp-count")
    {
        node_rp_count = value;
        node_rp_count.value_namespace = name_space;
        node_rp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-count")
    {
        process_count = value;
        process_count.value_namespace = name_space;
        process_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reports-archive-node")
    {
        reports_archive_node = value;
        reports_archive_node.value_namespace = name_space;
        reports_archive_node.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reports-archive-path")
    {
        reports_archive_path = value;
        reports_archive_path.value_namespace = name_space;
        reports_archive_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-process-count")
    {
        spf_process_count = value;
        spf_process_count.value_namespace = name_space;
        spf_process_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Server::Detail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "archive-count")
    {
        archive_count.yfilter = yfilter;
    }
    if(value_path == "diag-node-count")
    {
        diag_node_count.yfilter = yfilter;
    }
    if(value_path == "diagnostics-archive-node")
    {
        diagnostics_archive_node.yfilter = yfilter;
    }
    if(value_path == "diagnostics-archive-path")
    {
        diagnostics_archive_path.yfilter = yfilter;
    }
    if(value_path == "disabled-node-count")
    {
        disabled_node_count.yfilter = yfilter;
    }
    if(value_path == "event-buffer-size")
    {
        event_buffer_size.yfilter = yfilter;
    }
    if(value_path == "host-name")
    {
        host_name.yfilter = yfilter;
    }
    if(value_path == "in-active-node-count")
    {
        in_active_node_count.yfilter = yfilter;
    }
    if(value_path == "interface-count")
    {
        interface_count.yfilter = yfilter;
    }
    if(value_path == "last-archival-error")
    {
        last_archival_error.yfilter = yfilter;
    }
    if(value_path == "last-archival-error-time")
    {
        last_archival_error_time.yfilter = yfilter;
    }
    if(value_path == "last-archival-status")
    {
        last_archival_status.yfilter = yfilter;
    }
    if(value_path == "last-process-duration")
    {
        last_process_duration.yfilter = yfilter;
    }
    if(value_path == "last-process-start-time")
    {
        last_process_start_time.yfilter = yfilter;
    }
    if(value_path == "last-process-state")
    {
        last_process_state.yfilter = yfilter;
    }
    if(value_path == "max-events")
    {
        max_events.yfilter = yfilter;
    }
    if(value_path == "max-interface-count")
    {
        max_interface_count.yfilter = yfilter;
    }
    if(value_path == "monitoring-interval")
    {
        monitoring_interval.yfilter = yfilter;
    }
    if(value_path == "next-interval")
    {
        next_interval.yfilter = yfilter;
    }
    if(value_path == "node-lc-count")
    {
        node_lc_count.yfilter = yfilter;
    }
    if(value_path == "node-rp-count")
    {
        node_rp_count.yfilter = yfilter;
    }
    if(value_path == "process-count")
    {
        process_count.yfilter = yfilter;
    }
    if(value_path == "reports-archive-node")
    {
        reports_archive_node.yfilter = yfilter;
    }
    if(value_path == "reports-archive-path")
    {
        reports_archive_path.yfilter = yfilter;
    }
    if(value_path == "spf-process-count")
    {
        spf_process_count.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Rcmd::Server::Detail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-config" || name == "server-detail" || name == "archive-count" || name == "diag-node-count" || name == "diagnostics-archive-node" || name == "diagnostics-archive-path" || name == "disabled-node-count" || name == "event-buffer-size" || name == "host-name" || name == "in-active-node-count" || name == "interface-count" || name == "last-archival-error" || name == "last-archival-error-time" || name == "last-archival-status" || name == "last-process-duration" || name == "last-process-start-time" || name == "last-process-state" || name == "max-events" || name == "max-interface-count" || name == "monitoring-interval" || name == "next-interval" || name == "node-lc-count" || name == "node-rp-count" || name == "process-count" || name == "reports-archive-node" || name == "reports-archive-path" || name == "spf-process-count" || name == "status")
        return true;
    return false;
}

Rcmd::Server::Detail::ProtocolConfig::ProtocolConfig()
    :
    protocol_name{YType::str, "protocol-name"}
{
    yang_name = "protocol-config"; yang_parent_name = "detail";
}

Rcmd::Server::Detail::ProtocolConfig::~ProtocolConfig()
{
}

bool Rcmd::Server::Detail::ProtocolConfig::has_data() const
{
    for (std::size_t index=0; index<priority.size(); index++)
    {
        if(priority[index]->has_data())
            return true;
    }
    return protocol_name.is_set;
}

bool Rcmd::Server::Detail::ProtocolConfig::has_operation() const
{
    for (std::size_t index=0; index<priority.size(); index++)
    {
        if(priority[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(protocol_name.yfilter);
}

std::string Rcmd::Server::Detail::ProtocolConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-config";

    return path_buffer.str();

}

const EntityPath Rcmd::Server::Detail::ProtocolConfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/server/detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol_name.is_set || is_set(protocol_name.yfilter)) leaf_name_data.push_back(protocol_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Server::Detail::ProtocolConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        for(auto const & c : priority)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Server::Detail::ProtocolConfig::Priority>();
        c->parent = this;
        priority.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Server::Detail::ProtocolConfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : priority)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
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
    disable{YType::enumeration, "disable"},
    priority_name{YType::enumeration, "priority-name"},
    threshold{YType::uint32, "threshold"}
{
    yang_name = "priority"; yang_parent_name = "protocol-config";
}

Rcmd::Server::Detail::ProtocolConfig::Priority::~Priority()
{
}

bool Rcmd::Server::Detail::ProtocolConfig::Priority::has_data() const
{
    return disable.is_set
	|| priority_name.is_set
	|| threshold.is_set;
}

bool Rcmd::Server::Detail::ProtocolConfig::Priority::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(priority_name.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Rcmd::Server::Detail::ProtocolConfig::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

const EntityPath Rcmd::Server::Detail::ProtocolConfig::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/server/detail/protocol-config/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (priority_name.is_set || is_set(priority_name.yfilter)) leaf_name_data.push_back(priority_name.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Server::Detail::ProtocolConfig::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Server::Detail::ProtocolConfig::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Server::Detail::ProtocolConfig::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
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
}

void Rcmd::Server::Detail::ProtocolConfig::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "priority-name")
    {
        priority_name.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Rcmd::Server::Detail::ProtocolConfig::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "priority-name" || name == "threshold")
        return true;
    return false;
}

Rcmd::Server::Detail::ServerDetail::ServerDetail()
    :
    memory_suspend{YType::uint32, "memory-suspend"},
    overload_suspend{YType::uint32, "overload-suspend"}
{
    yang_name = "server-detail"; yang_parent_name = "detail";
}

Rcmd::Server::Detail::ServerDetail::~ServerDetail()
{
}

bool Rcmd::Server::Detail::ServerDetail::has_data() const
{
    for (std::size_t index=0; index<trace_information.size(); index++)
    {
        if(trace_information[index]->has_data())
            return true;
    }
    return memory_suspend.is_set
	|| overload_suspend.is_set;
}

bool Rcmd::Server::Detail::ServerDetail::has_operation() const
{
    for (std::size_t index=0; index<trace_information.size(); index++)
    {
        if(trace_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(memory_suspend.yfilter)
	|| ydk::is_set(overload_suspend.yfilter);
}

std::string Rcmd::Server::Detail::ServerDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-detail";

    return path_buffer.str();

}

const EntityPath Rcmd::Server::Detail::ServerDetail::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/server/detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (memory_suspend.is_set || is_set(memory_suspend.yfilter)) leaf_name_data.push_back(memory_suspend.get_name_leafdata());
    if (overload_suspend.is_set || is_set(overload_suspend.yfilter)) leaf_name_data.push_back(overload_suspend.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Server::Detail::ServerDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trace-information")
    {
        for(auto const & c : trace_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Server::Detail::ServerDetail::TraceInformation>();
        c->parent = this;
        trace_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Server::Detail::ServerDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : trace_information)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Server::Detail::ServerDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "memory-suspend")
    {
        memory_suspend = value;
        memory_suspend.value_namespace = name_space;
        memory_suspend.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overload-suspend")
    {
        overload_suspend = value;
        overload_suspend.value_namespace = name_space;
        overload_suspend.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Server::Detail::ServerDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "memory-suspend")
    {
        memory_suspend.yfilter = yfilter;
    }
    if(value_path == "overload-suspend")
    {
        overload_suspend.yfilter = yfilter;
    }
}

bool Rcmd::Server::Detail::ServerDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trace-information" || name == "memory-suspend" || name == "overload-suspend")
        return true;
    return false;
}

Rcmd::Server::Detail::ServerDetail::TraceInformation::TraceInformation()
    :
    error_stats{YType::uint32, "error-stats"},
    last_run_stats{YType::uint32, "last-run-stats"},
    total_stats{YType::uint32, "total-stats"},
    trace_name{YType::str, "trace-name"}
{
    yang_name = "trace-information"; yang_parent_name = "server-detail";
}

Rcmd::Server::Detail::ServerDetail::TraceInformation::~TraceInformation()
{
}

bool Rcmd::Server::Detail::ServerDetail::TraceInformation::has_data() const
{
    return error_stats.is_set
	|| last_run_stats.is_set
	|| total_stats.is_set
	|| trace_name.is_set;
}

bool Rcmd::Server::Detail::ServerDetail::TraceInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(error_stats.yfilter)
	|| ydk::is_set(last_run_stats.yfilter)
	|| ydk::is_set(total_stats.yfilter)
	|| ydk::is_set(trace_name.yfilter);
}

std::string Rcmd::Server::Detail::ServerDetail::TraceInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trace-information";

    return path_buffer.str();

}

const EntityPath Rcmd::Server::Detail::ServerDetail::TraceInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/server/detail/server-detail/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_stats.is_set || is_set(error_stats.yfilter)) leaf_name_data.push_back(error_stats.get_name_leafdata());
    if (last_run_stats.is_set || is_set(last_run_stats.yfilter)) leaf_name_data.push_back(last_run_stats.get_name_leafdata());
    if (total_stats.is_set || is_set(total_stats.yfilter)) leaf_name_data.push_back(total_stats.get_name_leafdata());
    if (trace_name.is_set || is_set(trace_name.yfilter)) leaf_name_data.push_back(trace_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Server::Detail::ServerDetail::TraceInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Server::Detail::ServerDetail::TraceInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Server::Detail::ServerDetail::TraceInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "error-stats")
    {
        error_stats = value;
        error_stats.value_namespace = name_space;
        error_stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-run-stats")
    {
        last_run_stats = value;
        last_run_stats.value_namespace = name_space;
        last_run_stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-stats")
    {
        total_stats = value;
        total_stats.value_namespace = name_space;
        total_stats.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trace-name")
    {
        trace_name = value;
        trace_name.value_namespace = name_space;
        trace_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Server::Detail::ServerDetail::TraceInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "error-stats")
    {
        error_stats.yfilter = yfilter;
    }
    if(value_path == "last-run-stats")
    {
        last_run_stats.yfilter = yfilter;
    }
    if(value_path == "total-stats")
    {
        total_stats.yfilter = yfilter;
    }
    if(value_path == "trace-name")
    {
        trace_name.yfilter = yfilter;
    }
}

bool Rcmd::Server::Detail::ServerDetail::TraceInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "error-stats" || name == "last-run-stats" || name == "total-stats" || name == "trace-name")
        return true;
    return false;
}

Rcmd::Node::Node()
{
    yang_name = "node"; yang_parent_name = "rcmd";
}

Rcmd::Node::~Node()
{
}

bool Rcmd::Node::has_data() const
{
    for (std::size_t index=0; index<node_information.size(); index++)
    {
        if(node_information[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Node::has_operation() const
{
    for (std::size_t index=0; index<node_information.size(); index++)
    {
        if(node_information[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rcmd::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";

    return path_buffer.str();

}

const EntityPath Rcmd::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-information")
    {
        for(auto const & c : node_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Node::NodeInformation>();
        c->parent = this;
        node_information.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node_information)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
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
    card_state{YType::uint32, "card-state"},
    diag_mode{YType::uint32, "diag-mode"},
    fwd_referenced{YType::enumeration, "fwd-referenced"},
    last_update_time{YType::str, "last-update-time"},
    node_id{YType::uint32, "node-id"},
    node_name{YType::str, "node-name"},
    node_state{YType::enumeration, "node-state"},
    node_type{YType::enumeration, "node-type"},
    rack_id{YType::uint32, "rack-id"},
    redundancy_state{YType::uint32, "redundancy-state"},
    software_state{YType::uint32, "software-state"},
    status{YType::enumeration, "status"}
{
    yang_name = "node-information"; yang_parent_name = "node";
}

Rcmd::Node::NodeInformation::~NodeInformation()
{
}

bool Rcmd::Node::NodeInformation::has_data() const
{
    return card_state.is_set
	|| diag_mode.is_set
	|| fwd_referenced.is_set
	|| last_update_time.is_set
	|| node_id.is_set
	|| node_name.is_set
	|| node_state.is_set
	|| node_type.is_set
	|| rack_id.is_set
	|| redundancy_state.is_set
	|| software_state.is_set
	|| status.is_set;
}

bool Rcmd::Node::NodeInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(card_state.yfilter)
	|| ydk::is_set(diag_mode.yfilter)
	|| ydk::is_set(fwd_referenced.yfilter)
	|| ydk::is_set(last_update_time.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(node_state.yfilter)
	|| ydk::is_set(node_type.yfilter)
	|| ydk::is_set(rack_id.yfilter)
	|| ydk::is_set(redundancy_state.yfilter)
	|| ydk::is_set(software_state.yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string Rcmd::Node::NodeInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-information";

    return path_buffer.str();

}

const EntityPath Rcmd::Node::NodeInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/node/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (card_state.is_set || is_set(card_state.yfilter)) leaf_name_data.push_back(card_state.get_name_leafdata());
    if (diag_mode.is_set || is_set(diag_mode.yfilter)) leaf_name_data.push_back(diag_mode.get_name_leafdata());
    if (fwd_referenced.is_set || is_set(fwd_referenced.yfilter)) leaf_name_data.push_back(fwd_referenced.get_name_leafdata());
    if (last_update_time.is_set || is_set(last_update_time.yfilter)) leaf_name_data.push_back(last_update_time.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (node_state.is_set || is_set(node_state.yfilter)) leaf_name_data.push_back(node_state.get_name_leafdata());
    if (node_type.is_set || is_set(node_type.yfilter)) leaf_name_data.push_back(node_type.get_name_leafdata());
    if (rack_id.is_set || is_set(rack_id.yfilter)) leaf_name_data.push_back(rack_id.get_name_leafdata());
    if (redundancy_state.is_set || is_set(redundancy_state.yfilter)) leaf_name_data.push_back(redundancy_state.get_name_leafdata());
    if (software_state.is_set || is_set(software_state.yfilter)) leaf_name_data.push_back(software_state.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Node::NodeInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Node::NodeInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Node::NodeInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "card-state")
    {
        card_state = value;
        card_state.value_namespace = name_space;
        card_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diag-mode")
    {
        diag_mode = value;
        diag_mode.value_namespace = name_space;
        diag_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwd-referenced")
    {
        fwd_referenced = value;
        fwd_referenced.value_namespace = name_space;
        fwd_referenced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-time")
    {
        last_update_time = value;
        last_update_time.value_namespace = name_space;
        last_update_time.value_namespace_prefix = name_space_prefix;
    }
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
    if(value_path == "node-state")
    {
        node_state = value;
        node_state.value_namespace = name_space;
        node_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-type")
    {
        node_type = value;
        node_type.value_namespace = name_space;
        node_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rack-id")
    {
        rack_id = value;
        rack_id.value_namespace = name_space;
        rack_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-state")
    {
        redundancy_state = value;
        redundancy_state.value_namespace = name_space;
        redundancy_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "software-state")
    {
        software_state = value;
        software_state.value_namespace = name_space;
        software_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Node::NodeInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "card-state")
    {
        card_state.yfilter = yfilter;
    }
    if(value_path == "diag-mode")
    {
        diag_mode.yfilter = yfilter;
    }
    if(value_path == "fwd-referenced")
    {
        fwd_referenced.yfilter = yfilter;
    }
    if(value_path == "last-update-time")
    {
        last_update_time.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "node-state")
    {
        node_state.yfilter = yfilter;
    }
    if(value_path == "node-type")
    {
        node_type.yfilter = yfilter;
    }
    if(value_path == "rack-id")
    {
        rack_id.yfilter = yfilter;
    }
    if(value_path == "redundancy-state")
    {
        redundancy_state.yfilter = yfilter;
    }
    if(value_path == "software-state")
    {
        software_state.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Rcmd::Node::NodeInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "card-state" || name == "diag-mode" || name == "fwd-referenced" || name == "last-update-time" || name == "node-id" || name == "node-name" || name == "node-state" || name == "node-type" || name == "rack-id" || name == "redundancy-state" || name == "software-state" || name == "status")
        return true;
    return false;
}

Rcmd::Isis::Isis()
    :
    instances(std::make_shared<Rcmd::Isis::Instances>())
{
    instances->parent = this;

    yang_name = "isis"; yang_parent_name = "rcmd";
}

Rcmd::Isis::~Isis()
{
}

bool Rcmd::Isis::has_data() const
{
    return (instances !=  nullptr && instances->has_data());
}

bool Rcmd::Isis::has_operation() const
{
    return is_set(yfilter)
	|| (instances !=  nullptr && instances->has_operation());
}

std::string Rcmd::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(instances != nullptr)
    {
        children["instances"] = instances;
    }

    return children;
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
{
    yang_name = "instances"; yang_parent_name = "isis";
}

Rcmd::Isis::Instances::~Instances()
{
}

bool Rcmd::Isis::Instances::has_data() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Isis::Instances::has_operation() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rcmd::Isis::Instances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instances";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/isis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance")
    {
        for(auto const & c : instance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance>();
        c->parent = this;
        instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
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
    ipfrr_event_offlines(std::make_shared<Rcmd::Isis::Instances::Instance::IpfrrEventOfflines>())
	,ipfrr_event_summaries(std::make_shared<Rcmd::Isis::Instances::Instance::IpfrrEventSummaries>())
	,lsp_regenerateds(std::make_shared<Rcmd::Isis::Instances::Instance::LspRegenerateds>())
	,prefix_event_offlines(std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventOfflines>())
	,prefix_event_statistics(std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventStatistics>())
	,prefix_event_summaries(std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventSummaries>())
	,spf_run_offlines(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines>())
	,spf_run_summaries(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries>())
{
    ipfrr_event_offlines->parent = this;

    ipfrr_event_summaries->parent = this;

    lsp_regenerateds->parent = this;

    prefix_event_offlines->parent = this;

    prefix_event_statistics->parent = this;

    prefix_event_summaries->parent = this;

    spf_run_offlines->parent = this;

    spf_run_summaries->parent = this;

    yang_name = "instance"; yang_parent_name = "instances";
}

Rcmd::Isis::Instances::Instance::~Instance()
{
}

bool Rcmd::Isis::Instances::Instance::has_data() const
{
    return instance_name.is_set
	|| (ipfrr_event_offlines !=  nullptr && ipfrr_event_offlines->has_data())
	|| (ipfrr_event_summaries !=  nullptr && ipfrr_event_summaries->has_data())
	|| (lsp_regenerateds !=  nullptr && lsp_regenerateds->has_data())
	|| (prefix_event_offlines !=  nullptr && prefix_event_offlines->has_data())
	|| (prefix_event_statistics !=  nullptr && prefix_event_statistics->has_data())
	|| (prefix_event_summaries !=  nullptr && prefix_event_summaries->has_data())
	|| (spf_run_offlines !=  nullptr && spf_run_offlines->has_data())
	|| (spf_run_summaries !=  nullptr && spf_run_summaries->has_data());
}

bool Rcmd::Isis::Instances::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance_name.yfilter)
	|| (ipfrr_event_offlines !=  nullptr && ipfrr_event_offlines->has_operation())
	|| (ipfrr_event_summaries !=  nullptr && ipfrr_event_summaries->has_operation())
	|| (lsp_regenerateds !=  nullptr && lsp_regenerateds->has_operation())
	|| (prefix_event_offlines !=  nullptr && prefix_event_offlines->has_operation())
	|| (prefix_event_statistics !=  nullptr && prefix_event_statistics->has_operation())
	|| (prefix_event_summaries !=  nullptr && prefix_event_summaries->has_operation())
	|| (spf_run_offlines !=  nullptr && spf_run_offlines->has_operation())
	|| (spf_run_summaries !=  nullptr && spf_run_summaries->has_operation());
}

std::string Rcmd::Isis::Instances::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance" <<"[instance-name='" <<instance_name <<"']";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/isis/instances/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance_name.is_set || is_set(instance_name.yfilter)) leaf_name_data.push_back(instance_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipfrr-event-offlines")
    {
        if(ipfrr_event_offlines == nullptr)
        {
            ipfrr_event_offlines = std::make_shared<Rcmd::Isis::Instances::Instance::IpfrrEventOfflines>();
        }
        return ipfrr_event_offlines;
    }

    if(child_yang_name == "ipfrr-event-summaries")
    {
        if(ipfrr_event_summaries == nullptr)
        {
            ipfrr_event_summaries = std::make_shared<Rcmd::Isis::Instances::Instance::IpfrrEventSummaries>();
        }
        return ipfrr_event_summaries;
    }

    if(child_yang_name == "lsp-regenerateds")
    {
        if(lsp_regenerateds == nullptr)
        {
            lsp_regenerateds = std::make_shared<Rcmd::Isis::Instances::Instance::LspRegenerateds>();
        }
        return lsp_regenerateds;
    }

    if(child_yang_name == "prefix-event-offlines")
    {
        if(prefix_event_offlines == nullptr)
        {
            prefix_event_offlines = std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventOfflines>();
        }
        return prefix_event_offlines;
    }

    if(child_yang_name == "prefix-event-statistics")
    {
        if(prefix_event_statistics == nullptr)
        {
            prefix_event_statistics = std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventStatistics>();
        }
        return prefix_event_statistics;
    }

    if(child_yang_name == "prefix-event-summaries")
    {
        if(prefix_event_summaries == nullptr)
        {
            prefix_event_summaries = std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventSummaries>();
        }
        return prefix_event_summaries;
    }

    if(child_yang_name == "spf-run-offlines")
    {
        if(spf_run_offlines == nullptr)
        {
            spf_run_offlines = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines>();
        }
        return spf_run_offlines;
    }

    if(child_yang_name == "spf-run-summaries")
    {
        if(spf_run_summaries == nullptr)
        {
            spf_run_summaries = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries>();
        }
        return spf_run_summaries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipfrr_event_offlines != nullptr)
    {
        children["ipfrr-event-offlines"] = ipfrr_event_offlines;
    }

    if(ipfrr_event_summaries != nullptr)
    {
        children["ipfrr-event-summaries"] = ipfrr_event_summaries;
    }

    if(lsp_regenerateds != nullptr)
    {
        children["lsp-regenerateds"] = lsp_regenerateds;
    }

    if(prefix_event_offlines != nullptr)
    {
        children["prefix-event-offlines"] = prefix_event_offlines;
    }

    if(prefix_event_statistics != nullptr)
    {
        children["prefix-event-statistics"] = prefix_event_statistics;
    }

    if(prefix_event_summaries != nullptr)
    {
        children["prefix-event-summaries"] = prefix_event_summaries;
    }

    if(spf_run_offlines != nullptr)
    {
        children["spf-run-offlines"] = spf_run_offlines;
    }

    if(spf_run_summaries != nullptr)
    {
        children["spf-run-summaries"] = spf_run_summaries;
    }

    return children;
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
    if(name == "ipfrr-event-offlines" || name == "ipfrr-event-summaries" || name == "lsp-regenerateds" || name == "prefix-event-offlines" || name == "prefix-event-statistics" || name == "prefix-event-summaries" || name == "spf-run-offlines" || name == "spf-run-summaries" || name == "instance-name")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummaries()
{
    yang_name = "ipfrr-event-summaries"; yang_parent_name = "instance";
}

Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::~IpfrrEventSummaries()
{
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::has_data() const
{
    for (std::size_t index=0; index<ipfrr_event_summary.size(); index++)
    {
        if(ipfrr_event_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::has_operation() const
{
    for (std::size_t index=0; index<ipfrr_event_summary.size(); index++)
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

const EntityPath Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpfrrEventSummaries' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipfrr-event-summary")
    {
        for(auto const & c : ipfrr_event_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary>();
        c->parent = this;
        ipfrr_event_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipfrr_event_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
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
    event_id{YType::int32, "event-id"},
    completed_spf_run{YType::uint32, "completed-spf-run"},
    coverage{YType::str, "coverage"},
    duration{YType::str, "duration"},
    event_id_xr{YType::uint32, "event-id-xr"},
    fully_protected_routes{YType::uint32, "fully-protected-routes"},
    partially_protected_routes{YType::uint32, "partially-protected-routes"},
    start_time_offset{YType::str, "start-time-offset"},
    total_routes{YType::uint32, "total-routes"},
    trigger_spf_run{YType::uint32, "trigger-spf-run"},
    trigger_time{YType::str, "trigger-time"},
    wait_time{YType::uint32, "wait-time"}
{
    yang_name = "ipfrr-event-summary"; yang_parent_name = "ipfrr-event-summaries";
}

Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::~IpfrrEventSummary()
{
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::has_data() const
{
    for (std::size_t index=0; index<ipfrr_statistic.size(); index++)
    {
        if(ipfrr_statistic[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<remote_node.size(); index++)
    {
        if(remote_node[index]->has_data())
            return true;
    }
    return event_id.is_set
	|| completed_spf_run.is_set
	|| coverage.is_set
	|| duration.is_set
	|| event_id_xr.is_set
	|| fully_protected_routes.is_set
	|| partially_protected_routes.is_set
	|| start_time_offset.is_set
	|| total_routes.is_set
	|| trigger_spf_run.is_set
	|| trigger_time.is_set
	|| wait_time.is_set;
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::has_operation() const
{
    for (std::size_t index=0; index<ipfrr_statistic.size(); index++)
    {
        if(ipfrr_statistic[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<remote_node.size(); index++)
    {
        if(remote_node[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(event_id.yfilter)
	|| ydk::is_set(completed_spf_run.yfilter)
	|| ydk::is_set(coverage.yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(event_id_xr.yfilter)
	|| ydk::is_set(fully_protected_routes.yfilter)
	|| ydk::is_set(partially_protected_routes.yfilter)
	|| ydk::is_set(start_time_offset.yfilter)
	|| ydk::is_set(total_routes.yfilter)
	|| ydk::is_set(trigger_spf_run.yfilter)
	|| ydk::is_set(trigger_time.yfilter)
	|| ydk::is_set(wait_time.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipfrr-event-summary" <<"[event-id='" <<event_id <<"']";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpfrrEventSummary' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_id.is_set || is_set(event_id.yfilter)) leaf_name_data.push_back(event_id.get_name_leafdata());
    if (completed_spf_run.is_set || is_set(completed_spf_run.yfilter)) leaf_name_data.push_back(completed_spf_run.get_name_leafdata());
    if (coverage.is_set || is_set(coverage.yfilter)) leaf_name_data.push_back(coverage.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (event_id_xr.is_set || is_set(event_id_xr.yfilter)) leaf_name_data.push_back(event_id_xr.get_name_leafdata());
    if (fully_protected_routes.is_set || is_set(fully_protected_routes.yfilter)) leaf_name_data.push_back(fully_protected_routes.get_name_leafdata());
    if (partially_protected_routes.is_set || is_set(partially_protected_routes.yfilter)) leaf_name_data.push_back(partially_protected_routes.get_name_leafdata());
    if (start_time_offset.is_set || is_set(start_time_offset.yfilter)) leaf_name_data.push_back(start_time_offset.get_name_leafdata());
    if (total_routes.is_set || is_set(total_routes.yfilter)) leaf_name_data.push_back(total_routes.get_name_leafdata());
    if (trigger_spf_run.is_set || is_set(trigger_spf_run.yfilter)) leaf_name_data.push_back(trigger_spf_run.get_name_leafdata());
    if (trigger_time.is_set || is_set(trigger_time.yfilter)) leaf_name_data.push_back(trigger_time.get_name_leafdata());
    if (wait_time.is_set || is_set(wait_time.yfilter)) leaf_name_data.push_back(wait_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipfrr-statistic")
    {
        for(auto const & c : ipfrr_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic>();
        c->parent = this;
        ipfrr_statistic.push_back(c);
        return c;
    }

    if(child_yang_name == "remote-node")
    {
        for(auto const & c : remote_node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode>();
        c->parent = this;
        remote_node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipfrr_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : remote_node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-id")
    {
        event_id = value;
        event_id.value_namespace = name_space;
        event_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "completed-spf-run")
    {
        completed_spf_run = value;
        completed_spf_run.value_namespace = name_space;
        completed_spf_run.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coverage")
    {
        coverage = value;
        coverage.value_namespace = name_space;
        coverage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-id-xr")
    {
        event_id_xr = value;
        event_id_xr.value_namespace = name_space;
        event_id_xr.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "start-time-offset")
    {
        start_time_offset = value;
        start_time_offset.value_namespace = name_space;
        start_time_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-routes")
    {
        total_routes = value;
        total_routes.value_namespace = name_space;
        total_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-spf-run")
    {
        trigger_spf_run = value;
        trigger_spf_run.value_namespace = name_space;
        trigger_spf_run.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-time")
    {
        trigger_time = value;
        trigger_time.value_namespace = name_space;
        trigger_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-time")
    {
        wait_time = value;
        wait_time.value_namespace = name_space;
        wait_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-id")
    {
        event_id.yfilter = yfilter;
    }
    if(value_path == "completed-spf-run")
    {
        completed_spf_run.yfilter = yfilter;
    }
    if(value_path == "coverage")
    {
        coverage.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "event-id-xr")
    {
        event_id_xr.yfilter = yfilter;
    }
    if(value_path == "fully-protected-routes")
    {
        fully_protected_routes.yfilter = yfilter;
    }
    if(value_path == "partially-protected-routes")
    {
        partially_protected_routes.yfilter = yfilter;
    }
    if(value_path == "start-time-offset")
    {
        start_time_offset.yfilter = yfilter;
    }
    if(value_path == "total-routes")
    {
        total_routes.yfilter = yfilter;
    }
    if(value_path == "trigger-spf-run")
    {
        trigger_spf_run.yfilter = yfilter;
    }
    if(value_path == "trigger-time")
    {
        trigger_time.yfilter = yfilter;
    }
    if(value_path == "wait-time")
    {
        wait_time.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipfrr-statistic" || name == "remote-node" || name == "event-id" || name == "completed-spf-run" || name == "coverage" || name == "duration" || name == "event-id-xr" || name == "fully-protected-routes" || name == "partially-protected-routes" || name == "start-time-offset" || name == "total-routes" || name == "trigger-spf-run" || name == "trigger-time" || name == "wait-time")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic::IpfrrStatistic()
    :
    below_threshold{YType::boolean, "below-threshold"},
    coverage{YType::str, "coverage"},
    fully_protected_routes{YType::uint32, "fully-protected-routes"},
    local_lfa_coverage{YType::str, "local-lfa-coverage"},
    partially_protected_routes{YType::uint32, "partially-protected-routes"},
    priority{YType::enumeration, "priority"},
    remote_lfa_coverage{YType::str, "remote-lfa-coverage"},
    total_routes{YType::uint32, "total-routes"}
{
    yang_name = "ipfrr-statistic"; yang_parent_name = "ipfrr-event-summary";
}

Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic::~IpfrrStatistic()
{
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic::has_data() const
{
    return below_threshold.is_set
	|| coverage.is_set
	|| fully_protected_routes.is_set
	|| local_lfa_coverage.is_set
	|| partially_protected_routes.is_set
	|| priority.is_set
	|| remote_lfa_coverage.is_set
	|| total_routes.is_set;
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(below_threshold.yfilter)
	|| ydk::is_set(coverage.yfilter)
	|| ydk::is_set(fully_protected_routes.yfilter)
	|| ydk::is_set(local_lfa_coverage.yfilter)
	|| ydk::is_set(partially_protected_routes.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(remote_lfa_coverage.yfilter)
	|| ydk::is_set(total_routes.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipfrr-statistic";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpfrrStatistic' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (below_threshold.is_set || is_set(below_threshold.yfilter)) leaf_name_data.push_back(below_threshold.get_name_leafdata());
    if (coverage.is_set || is_set(coverage.yfilter)) leaf_name_data.push_back(coverage.get_name_leafdata());
    if (fully_protected_routes.is_set || is_set(fully_protected_routes.yfilter)) leaf_name_data.push_back(fully_protected_routes.get_name_leafdata());
    if (local_lfa_coverage.is_set || is_set(local_lfa_coverage.yfilter)) leaf_name_data.push_back(local_lfa_coverage.get_name_leafdata());
    if (partially_protected_routes.is_set || is_set(partially_protected_routes.yfilter)) leaf_name_data.push_back(partially_protected_routes.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (remote_lfa_coverage.is_set || is_set(remote_lfa_coverage.yfilter)) leaf_name_data.push_back(remote_lfa_coverage.get_name_leafdata());
    if (total_routes.is_set || is_set(total_routes.yfilter)) leaf_name_data.push_back(total_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "below-threshold")
    {
        below_threshold = value;
        below_threshold.value_namespace = name_space;
        below_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coverage")
    {
        coverage = value;
        coverage.value_namespace = name_space;
        coverage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fully-protected-routes")
    {
        fully_protected_routes = value;
        fully_protected_routes.value_namespace = name_space;
        fully_protected_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-lfa-coverage")
    {
        local_lfa_coverage = value;
        local_lfa_coverage.value_namespace = name_space;
        local_lfa_coverage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partially-protected-routes")
    {
        partially_protected_routes = value;
        partially_protected_routes.value_namespace = name_space;
        partially_protected_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-coverage")
    {
        remote_lfa_coverage = value;
        remote_lfa_coverage.value_namespace = name_space;
        remote_lfa_coverage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-routes")
    {
        total_routes = value;
        total_routes.value_namespace = name_space;
        total_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "below-threshold")
    {
        below_threshold.yfilter = yfilter;
    }
    if(value_path == "coverage")
    {
        coverage.yfilter = yfilter;
    }
    if(value_path == "fully-protected-routes")
    {
        fully_protected_routes.yfilter = yfilter;
    }
    if(value_path == "local-lfa-coverage")
    {
        local_lfa_coverage.yfilter = yfilter;
    }
    if(value_path == "partially-protected-routes")
    {
        partially_protected_routes.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-coverage")
    {
        remote_lfa_coverage.yfilter = yfilter;
    }
    if(value_path == "total-routes")
    {
        total_routes.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::IpfrrStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "below-threshold" || name == "coverage" || name == "fully-protected-routes" || name == "local-lfa-coverage" || name == "partially-protected-routes" || name == "priority" || name == "remote-lfa-coverage" || name == "total-routes")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::RemoteNode()
    :
    in_use_time{YType::str, "in-use-time"},
    interface_name{YType::str, "interface-name"},
    neighbour_address{YType::str, "neighbour-address"},
    path_count{YType::uint32, "path-count"},
    remote_node_id{YType::str, "remote-node-id"}
{
    yang_name = "remote-node"; yang_parent_name = "ipfrr-event-summary";
}

Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::~RemoteNode()
{
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::has_data() const
{
    for (std::size_t index=0; index<primary_path.size(); index++)
    {
        if(primary_path[index]->has_data())
            return true;
    }
    return in_use_time.is_set
	|| interface_name.is_set
	|| neighbour_address.is_set
	|| path_count.is_set
	|| remote_node_id.is_set;
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::has_operation() const
{
    for (std::size_t index=0; index<primary_path.size(); index++)
    {
        if(primary_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(in_use_time.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbour_address.yfilter)
	|| ydk::is_set(path_count.yfilter)
	|| ydk::is_set(remote_node_id.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-node";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteNode' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_use_time.is_set || is_set(in_use_time.yfilter)) leaf_name_data.push_back(in_use_time.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbour_address.is_set || is_set(neighbour_address.yfilter)) leaf_name_data.push_back(neighbour_address.get_name_leafdata());
    if (path_count.is_set || is_set(path_count.yfilter)) leaf_name_data.push_back(path_count.get_name_leafdata());
    if (remote_node_id.is_set || is_set(remote_node_id.yfilter)) leaf_name_data.push_back(remote_node_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "primary-path")
    {
        for(auto const & c : primary_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath>();
        c->parent = this;
        primary_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : primary_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-use-time")
    {
        in_use_time = value;
        in_use_time.value_namespace = name_space;
        in_use_time.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "remote-node-id")
    {
        remote_node_id = value;
        remote_node_id.value_namespace = name_space;
        remote_node_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-use-time")
    {
        in_use_time.yfilter = yfilter;
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
    if(value_path == "remote-node-id")
    {
        remote_node_id.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary-path" || name == "in-use-time" || name == "interface-name" || name == "neighbour-address" || name == "path-count" || name == "remote-node-id")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath::PrimaryPath()
    :
    interface_name{YType::str, "interface-name"},
    neighbour_address{YType::str, "neighbour-address"}
{
    yang_name = "primary-path"; yang_parent_name = "remote-node";
}

Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath::~PrimaryPath()
{
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath::has_data() const
{
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

const EntityPath Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrimaryPath' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbour_address.is_set || is_set(neighbour_address.yfilter)) leaf_name_data.push_back(neighbour_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::IpfrrEventSummaries::IpfrrEventSummary::RemoteNode::PrimaryPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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
{
    yang_name = "prefix-event-statistics"; yang_parent_name = "instance";
}

Rcmd::Isis::Instances::Instance::PrefixEventStatistics::~PrefixEventStatistics()
{
}

bool Rcmd::Isis::Instances::Instance::PrefixEventStatistics::has_data() const
{
    for (std::size_t index=0; index<prefix_event_statistic.size(); index++)
    {
        if(prefix_event_statistic[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Isis::Instances::Instance::PrefixEventStatistics::has_operation() const
{
    for (std::size_t index=0; index<prefix_event_statistic.size(); index++)
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

const EntityPath Rcmd::Isis::Instances::Instance::PrefixEventStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixEventStatistics' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::PrefixEventStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-event-statistic")
    {
        for(auto const & c : prefix_event_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic>();
        c->parent = this;
        prefix_event_statistic.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::PrefixEventStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prefix_event_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
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
    add_count{YType::uint32, "add-count"},
    critical_priority{YType::uint32, "critical-priority"},
    delete_count{YType::uint32, "delete-count"},
    high_priority{YType::uint32, "high-priority"},
    last_change_type{YType::enumeration, "last-change-type"},
    last_cost{YType::uint32, "last-cost"},
    last_event_time{YType::str, "last-event-time"},
    last_priority{YType::enumeration, "last-priority"},
    last_route_type{YType::enumeration, "last-route-type"},
    low_priority{YType::uint32, "low-priority"},
    medium_priority{YType::uint32, "medium-priority"},
    modify_count{YType::uint32, "modify-count"},
    prefix{YType::str, "prefix"},
    prefix_lenth{YType::uint32, "prefix-lenth"},
    threshold_exceed_count{YType::uint32, "threshold-exceed-count"}
{
    yang_name = "prefix-event-statistic"; yang_parent_name = "prefix-event-statistics";
}

Rcmd::Isis::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic::~PrefixEventStatistic()
{
}

bool Rcmd::Isis::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic::has_data() const
{
    return prefix_info.is_set
	|| add_count.is_set
	|| critical_priority.is_set
	|| delete_count.is_set
	|| high_priority.is_set
	|| last_change_type.is_set
	|| last_cost.is_set
	|| last_event_time.is_set
	|| last_priority.is_set
	|| last_route_type.is_set
	|| low_priority.is_set
	|| medium_priority.is_set
	|| modify_count.is_set
	|| prefix.is_set
	|| prefix_lenth.is_set
	|| threshold_exceed_count.is_set;
}

bool Rcmd::Isis::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix_info.yfilter)
	|| ydk::is_set(add_count.yfilter)
	|| ydk::is_set(critical_priority.yfilter)
	|| ydk::is_set(delete_count.yfilter)
	|| ydk::is_set(high_priority.yfilter)
	|| ydk::is_set(last_change_type.yfilter)
	|| ydk::is_set(last_cost.yfilter)
	|| ydk::is_set(last_event_time.yfilter)
	|| ydk::is_set(last_priority.yfilter)
	|| ydk::is_set(last_route_type.yfilter)
	|| ydk::is_set(low_priority.yfilter)
	|| ydk::is_set(medium_priority.yfilter)
	|| ydk::is_set(modify_count.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_lenth.yfilter)
	|| ydk::is_set(threshold_exceed_count.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-event-statistic" <<"[prefix-info='" <<prefix_info <<"']";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixEventStatistic' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_info.is_set || is_set(prefix_info.yfilter)) leaf_name_data.push_back(prefix_info.get_name_leafdata());
    if (add_count.is_set || is_set(add_count.yfilter)) leaf_name_data.push_back(add_count.get_name_leafdata());
    if (critical_priority.is_set || is_set(critical_priority.yfilter)) leaf_name_data.push_back(critical_priority.get_name_leafdata());
    if (delete_count.is_set || is_set(delete_count.yfilter)) leaf_name_data.push_back(delete_count.get_name_leafdata());
    if (high_priority.is_set || is_set(high_priority.yfilter)) leaf_name_data.push_back(high_priority.get_name_leafdata());
    if (last_change_type.is_set || is_set(last_change_type.yfilter)) leaf_name_data.push_back(last_change_type.get_name_leafdata());
    if (last_cost.is_set || is_set(last_cost.yfilter)) leaf_name_data.push_back(last_cost.get_name_leafdata());
    if (last_event_time.is_set || is_set(last_event_time.yfilter)) leaf_name_data.push_back(last_event_time.get_name_leafdata());
    if (last_priority.is_set || is_set(last_priority.yfilter)) leaf_name_data.push_back(last_priority.get_name_leafdata());
    if (last_route_type.is_set || is_set(last_route_type.yfilter)) leaf_name_data.push_back(last_route_type.get_name_leafdata());
    if (low_priority.is_set || is_set(low_priority.yfilter)) leaf_name_data.push_back(low_priority.get_name_leafdata());
    if (medium_priority.is_set || is_set(medium_priority.yfilter)) leaf_name_data.push_back(medium_priority.get_name_leafdata());
    if (modify_count.is_set || is_set(modify_count.yfilter)) leaf_name_data.push_back(modify_count.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_lenth.is_set || is_set(prefix_lenth.yfilter)) leaf_name_data.push_back(prefix_lenth.get_name_leafdata());
    if (threshold_exceed_count.is_set || is_set(threshold_exceed_count.yfilter)) leaf_name_data.push_back(threshold_exceed_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-info")
    {
        prefix_info = value;
        prefix_info.value_namespace = name_space;
        prefix_info.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "add-count")
    {
        add_count = value;
        add_count.value_namespace = name_space;
        add_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "critical-priority")
    {
        critical_priority = value;
        critical_priority.value_namespace = name_space;
        critical_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delete-count")
    {
        delete_count = value;
        delete_count.value_namespace = name_space;
        delete_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "high-priority")
    {
        high_priority = value;
        high_priority.value_namespace = name_space;
        high_priority.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "low-priority")
    {
        low_priority = value;
        low_priority.value_namespace = name_space;
        low_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "medium-priority")
    {
        medium_priority = value;
        medium_priority.value_namespace = name_space;
        medium_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "modify-count")
    {
        modify_count = value;
        modify_count.value_namespace = name_space;
        modify_count.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "add-count")
    {
        add_count.yfilter = yfilter;
    }
    if(value_path == "critical-priority")
    {
        critical_priority.yfilter = yfilter;
    }
    if(value_path == "delete-count")
    {
        delete_count.yfilter = yfilter;
    }
    if(value_path == "high-priority")
    {
        high_priority.yfilter = yfilter;
    }
    if(value_path == "last-change-type")
    {
        last_change_type.yfilter = yfilter;
    }
    if(value_path == "last-cost")
    {
        last_cost.yfilter = yfilter;
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
    if(value_path == "low-priority")
    {
        low_priority.yfilter = yfilter;
    }
    if(value_path == "medium-priority")
    {
        medium_priority.yfilter = yfilter;
    }
    if(value_path == "modify-count")
    {
        modify_count.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-lenth")
    {
        prefix_lenth.yfilter = yfilter;
    }
    if(value_path == "threshold-exceed-count")
    {
        threshold_exceed_count.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::PrefixEventStatistics::PrefixEventStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-info" || name == "add-count" || name == "critical-priority" || name == "delete-count" || name == "high-priority" || name == "last-change-type" || name == "last-cost" || name == "last-event-time" || name == "last-priority" || name == "last-route-type" || name == "low-priority" || name == "medium-priority" || name == "modify-count" || name == "prefix" || name == "prefix-lenth" || name == "threshold-exceed-count")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummaries()
{
    yang_name = "spf-run-summaries"; yang_parent_name = "instance";
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::~SpfRunSummaries()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::has_data() const
{
    for (std::size_t index=0; index<spf_run_summary.size(); index++)
    {
        if(spf_run_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::has_operation() const
{
    for (std::size_t index=0; index<spf_run_summary.size(); index++)
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

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpfRunSummaries' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spf-run-summary")
    {
        for(auto const & c : spf_run_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary>();
        c->parent = this;
        spf_run_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : spf_run_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
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
    spf_run_number{YType::int32, "spf-run-number"},
    reason{YType::str, "reason"},
    start_time{YType::str, "start-time"},
    wait_time{YType::uint32, "wait-time"}
    	,
    node_statistics(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::NodeStatistics>())
	,spf_summary(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary>())
{
    node_statistics->parent = this;

    spf_summary->parent = this;

    yang_name = "spf-run-summary"; yang_parent_name = "spf-run-summaries";
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::~SpfRunSummary()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::has_data() const
{
    for (std::size_t index=0; index<lsp_processed.size(); index++)
    {
        if(lsp_processed[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lsp_regenerated.size(); index++)
    {
        if(lsp_regenerated[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<priority.size(); index++)
    {
        if(priority[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<trigger_lsp.size(); index++)
    {
        if(trigger_lsp[index]->has_data())
            return true;
    }
    return spf_run_number.is_set
	|| reason.is_set
	|| start_time.is_set
	|| wait_time.is_set
	|| (node_statistics !=  nullptr && node_statistics->has_data())
	|| (spf_summary !=  nullptr && spf_summary->has_data());
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::has_operation() const
{
    for (std::size_t index=0; index<lsp_processed.size(); index++)
    {
        if(lsp_processed[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lsp_regenerated.size(); index++)
    {
        if(lsp_regenerated[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<priority.size(); index++)
    {
        if(priority[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<trigger_lsp.size(); index++)
    {
        if(trigger_lsp[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(spf_run_number.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(wait_time.yfilter)
	|| (node_statistics !=  nullptr && node_statistics->has_operation())
	|| (spf_summary !=  nullptr && spf_summary->has_operation());
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-run-summary" <<"[spf-run-number='" <<spf_run_number <<"']";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpfRunSummary' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (spf_run_number.is_set || is_set(spf_run_number.yfilter)) leaf_name_data.push_back(spf_run_number.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (wait_time.is_set || is_set(wait_time.yfilter)) leaf_name_data.push_back(wait_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-processed")
    {
        for(auto const & c : lsp_processed)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspProcessed>();
        c->parent = this;
        lsp_processed.push_back(c);
        return c;
    }

    if(child_yang_name == "lsp-regenerated")
    {
        for(auto const & c : lsp_regenerated)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspRegenerated>();
        c->parent = this;
        lsp_regenerated.push_back(c);
        return c;
    }

    if(child_yang_name == "node-statistics")
    {
        if(node_statistics == nullptr)
        {
            node_statistics = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::NodeStatistics>();
        }
        return node_statistics;
    }

    if(child_yang_name == "priority")
    {
        for(auto const & c : priority)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority>();
        c->parent = this;
        priority.push_back(c);
        return c;
    }

    if(child_yang_name == "spf-summary")
    {
        if(spf_summary == nullptr)
        {
            spf_summary = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary>();
        }
        return spf_summary;
    }

    if(child_yang_name == "trigger-lsp")
    {
        for(auto const & c : trigger_lsp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::TriggerLsp>();
        c->parent = this;
        trigger_lsp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lsp_processed)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : lsp_regenerated)
    {
        children[c->get_segment_path()] = c;
    }

    if(node_statistics != nullptr)
    {
        children["node-statistics"] = node_statistics;
    }

    for (auto const & c : priority)
    {
        children[c->get_segment_path()] = c;
    }

    if(spf_summary != nullptr)
    {
        children["spf-summary"] = spf_summary;
    }

    for (auto const & c : trigger_lsp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "spf-run-number")
    {
        spf_run_number.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "wait-time")
    {
        wait_time.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-processed" || name == "lsp-regenerated" || name == "node-statistics" || name == "priority" || name == "spf-summary" || name == "trigger-lsp" || name == "spf-run-number" || name == "reason" || name == "start-time" || name == "wait-time")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::SpfSummary()
    :
    duration{YType::str, "duration"},
    is_data_complete{YType::boolean, "is-data-complete"},
    isis_level{YType::enumeration, "isis-level"},
    state{YType::enumeration, "state"},
    threshold_exceeded{YType::boolean, "threshold-exceeded"},
    topology{YType::uint32, "topology"},
    total_lsp_changes{YType::uint16, "total-lsp-changes"},
    trigger_time{YType::str, "trigger-time"},
    type{YType::enumeration, "type"}
{
    yang_name = "spf-summary"; yang_parent_name = "spf-run-summary";
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::~SpfSummary()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::has_data() const
{
    for (std::size_t index=0; index<priority_summary.size(); index++)
    {
        if(priority_summary[index]->has_data())
            return true;
    }
    return duration.is_set
	|| is_data_complete.is_set
	|| isis_level.is_set
	|| state.is_set
	|| threshold_exceeded.is_set
	|| topology.is_set
	|| total_lsp_changes.is_set
	|| trigger_time.is_set
	|| type.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::has_operation() const
{
    for (std::size_t index=0; index<priority_summary.size(); index++)
    {
        if(priority_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(is_data_complete.yfilter)
	|| ydk::is_set(isis_level.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(threshold_exceeded.yfilter)
	|| ydk::is_set(topology.yfilter)
	|| ydk::is_set(total_lsp_changes.yfilter)
	|| ydk::is_set(trigger_time.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-summary";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpfSummary' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (is_data_complete.is_set || is_set(is_data_complete.yfilter)) leaf_name_data.push_back(is_data_complete.get_name_leafdata());
    if (isis_level.is_set || is_set(isis_level.yfilter)) leaf_name_data.push_back(isis_level.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (threshold_exceeded.is_set || is_set(threshold_exceeded.yfilter)) leaf_name_data.push_back(threshold_exceeded.get_name_leafdata());
    if (topology.is_set || is_set(topology.yfilter)) leaf_name_data.push_back(topology.get_name_leafdata());
    if (total_lsp_changes.is_set || is_set(total_lsp_changes.yfilter)) leaf_name_data.push_back(total_lsp_changes.get_name_leafdata());
    if (trigger_time.is_set || is_set(trigger_time.yfilter)) leaf_name_data.push_back(trigger_time.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority-summary")
    {
        for(auto const & c : priority_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary>();
        c->parent = this;
        priority_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : priority_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-data-complete")
    {
        is_data_complete = value;
        is_data_complete.value_namespace = name_space;
        is_data_complete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-level")
    {
        isis_level = value;
        isis_level.value_namespace = name_space;
        isis_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded = value;
        threshold_exceeded.value_namespace = name_space;
        threshold_exceeded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology")
    {
        topology = value;
        topology.value_namespace = name_space;
        topology.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-lsp-changes")
    {
        total_lsp_changes = value;
        total_lsp_changes.value_namespace = name_space;
        total_lsp_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-time")
    {
        trigger_time = value;
        trigger_time.value_namespace = name_space;
        trigger_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "is-data-complete")
    {
        is_data_complete.yfilter = yfilter;
    }
    if(value_path == "isis-level")
    {
        isis_level.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded.yfilter = yfilter;
    }
    if(value_path == "topology")
    {
        topology.yfilter = yfilter;
    }
    if(value_path == "total-lsp-changes")
    {
        total_lsp_changes.yfilter = yfilter;
    }
    if(value_path == "trigger-time")
    {
        trigger_time.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority-summary" || name == "duration" || name == "is-data-complete" || name == "isis-level" || name == "state" || name == "threshold-exceeded" || name == "topology" || name == "total-lsp-changes" || name == "trigger-time" || name == "type")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::PrioritySummary()
    :
    level{YType::enumeration, "level"},
    threshold_exceeded{YType::boolean, "threshold-exceeded"}
    	,
    ip_convergence_time(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime>())
	,mpls_convergence_time(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime>())
	,route_statistics(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics>())
{
    ip_convergence_time->parent = this;

    mpls_convergence_time->parent = this;

    route_statistics->parent = this;

    yang_name = "priority-summary"; yang_parent_name = "spf-summary";
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::~PrioritySummary()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::has_data() const
{
    for (std::size_t index=0; index<frr_statistic.size(); index++)
    {
        if(frr_statistic[index]->has_data())
            return true;
    }
    return level.is_set
	|| threshold_exceeded.is_set
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_data())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_data())
	|| (route_statistics !=  nullptr && route_statistics->has_data());
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::has_operation() const
{
    for (std::size_t index=0; index<frr_statistic.size(); index++)
    {
        if(frr_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(threshold_exceeded.yfilter)
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_operation())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_operation())
	|| (route_statistics !=  nullptr && route_statistics->has_operation());
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-summary";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrioritySummary' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (threshold_exceeded.is_set || is_set(threshold_exceeded.yfilter)) leaf_name_data.push_back(threshold_exceeded.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-statistic")
    {
        for(auto const & c : frr_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic>();
        c->parent = this;
        frr_statistic.push_back(c);
        return c;
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

    if(child_yang_name == "route-statistics")
    {
        if(route_statistics == nullptr)
        {
            route_statistics = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics>();
        }
        return route_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : frr_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    if(ip_convergence_time != nullptr)
    {
        children["ip-convergence-time"] = ip_convergence_time;
    }

    if(mpls_convergence_time != nullptr)
    {
        children["mpls-convergence-time"] = mpls_convergence_time;
    }

    if(route_statistics != nullptr)
    {
        children["route-statistics"] = route_statistics;
    }

    return children;
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
    if(name == "frr-statistic" || name == "ip-convergence-time" || name == "mpls-convergence-time" || name == "route-statistics" || name == "level" || name == "threshold-exceeded")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics::RouteStatistics()
    :
    adds{YType::uint32, "adds"},
    deletes{YType::uint32, "deletes"},
    modifies{YType::uint32, "modifies"},
    reachables{YType::uint32, "reachables"},
    touches{YType::uint32, "touches"},
    unreachables{YType::uint32, "unreachables"}
{
    yang_name = "route-statistics"; yang_parent_name = "priority-summary";
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics::~RouteStatistics()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics::has_data() const
{
    return adds.is_set
	|| deletes.is_set
	|| modifies.is_set
	|| reachables.is_set
	|| touches.is_set
	|| unreachables.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adds.yfilter)
	|| ydk::is_set(deletes.yfilter)
	|| ydk::is_set(modifies.yfilter)
	|| ydk::is_set(reachables.yfilter)
	|| ydk::is_set(touches.yfilter)
	|| ydk::is_set(unreachables.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-statistics";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteStatistics' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adds.is_set || is_set(adds.yfilter)) leaf_name_data.push_back(adds.get_name_leafdata());
    if (deletes.is_set || is_set(deletes.yfilter)) leaf_name_data.push_back(deletes.get_name_leafdata());
    if (modifies.is_set || is_set(modifies.yfilter)) leaf_name_data.push_back(modifies.get_name_leafdata());
    if (reachables.is_set || is_set(reachables.yfilter)) leaf_name_data.push_back(reachables.get_name_leafdata());
    if (touches.is_set || is_set(touches.yfilter)) leaf_name_data.push_back(touches.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.yfilter)) leaf_name_data.push_back(unreachables.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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
    if(value_path == "touches")
    {
        touches = value;
        touches.value_namespace = name_space;
        touches.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachables")
    {
        unreachables = value;
        unreachables.value_namespace = name_space;
        unreachables.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "touches")
    {
        touches.yfilter = yfilter;
    }
    if(value_path == "unreachables")
    {
        unreachables.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::RouteStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adds" || name == "deletes" || name == "modifies" || name == "reachables" || name == "touches" || name == "unreachables")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime::IpConvergenceTime()
    :
    fastest_node_name{YType::str, "fastest-node-name"},
    maximum_time{YType::str, "maximum-time"},
    minimum_time{YType::str, "minimum-time"},
    slowest_node_name{YType::str, "slowest-node-name"}
{
    yang_name = "ip-convergence-time"; yang_parent_name = "priority-summary";
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime::~IpConvergenceTime()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime::has_data() const
{
    return fastest_node_name.is_set
	|| maximum_time.is_set
	|| minimum_time.is_set
	|| slowest_node_name.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fastest_node_name.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-convergence-time";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpConvergenceTime' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::IpConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fastest-node-name" || name == "maximum-time" || name == "minimum-time" || name == "slowest-node-name")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime::MplsConvergenceTime()
    :
    fastest_node_name{YType::str, "fastest-node-name"},
    maximum_time{YType::str, "maximum-time"},
    minimum_time{YType::str, "minimum-time"},
    slowest_node_name{YType::str, "slowest-node-name"}
{
    yang_name = "mpls-convergence-time"; yang_parent_name = "priority-summary";
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime::~MplsConvergenceTime()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime::has_data() const
{
    return fastest_node_name.is_set
	|| maximum_time.is_set
	|| minimum_time.is_set
	|| slowest_node_name.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fastest_node_name.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-convergence-time";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsConvergenceTime' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::MplsConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fastest-node-name" || name == "maximum-time" || name == "minimum-time" || name == "slowest-node-name")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic::FrrStatistic()
    :
    coverage{YType::str, "coverage"},
    fully_protected_routes{YType::uint32, "fully-protected-routes"},
    partially_protected_routes{YType::uint32, "partially-protected-routes"},
    total_routes{YType::uint32, "total-routes"}
{
    yang_name = "frr-statistic"; yang_parent_name = "priority-summary";
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic::~FrrStatistic()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic::has_data() const
{
    return coverage.is_set
	|| fully_protected_routes.is_set
	|| partially_protected_routes.is_set
	|| total_routes.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(coverage.yfilter)
	|| ydk::is_set(fully_protected_routes.yfilter)
	|| ydk::is_set(partially_protected_routes.yfilter)
	|| ydk::is_set(total_routes.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-statistic";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrStatistic' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (coverage.is_set || is_set(coverage.yfilter)) leaf_name_data.push_back(coverage.get_name_leafdata());
    if (fully_protected_routes.is_set || is_set(fully_protected_routes.yfilter)) leaf_name_data.push_back(fully_protected_routes.get_name_leafdata());
    if (partially_protected_routes.is_set || is_set(partially_protected_routes.yfilter)) leaf_name_data.push_back(partially_protected_routes.get_name_leafdata());
    if (total_routes.is_set || is_set(total_routes.yfilter)) leaf_name_data.push_back(total_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "coverage")
    {
        coverage = value;
        coverage.value_namespace = name_space;
        coverage.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "total-routes")
    {
        total_routes = value;
        total_routes.value_namespace = name_space;
        total_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "coverage")
    {
        coverage.yfilter = yfilter;
    }
    if(value_path == "fully-protected-routes")
    {
        fully_protected_routes.yfilter = yfilter;
    }
    if(value_path == "partially-protected-routes")
    {
        partially_protected_routes.yfilter = yfilter;
    }
    if(value_path == "total-routes")
    {
        total_routes.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::SpfSummary::PrioritySummary::FrrStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "coverage" || name == "fully-protected-routes" || name == "partially-protected-routes" || name == "total-routes")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::NodeStatistics::NodeStatistics()
    :
    adds{YType::uint32, "adds"},
    deletes{YType::uint32, "deletes"},
    modifies{YType::uint32, "modifies"},
    reachables{YType::uint32, "reachables"},
    touches{YType::uint32, "touches"},
    unreachables{YType::uint32, "unreachables"}
{
    yang_name = "node-statistics"; yang_parent_name = "spf-run-summary";
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::NodeStatistics::~NodeStatistics()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::NodeStatistics::has_data() const
{
    return adds.is_set
	|| deletes.is_set
	|| modifies.is_set
	|| reachables.is_set
	|| touches.is_set
	|| unreachables.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::NodeStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adds.yfilter)
	|| ydk::is_set(deletes.yfilter)
	|| ydk::is_set(modifies.yfilter)
	|| ydk::is_set(reachables.yfilter)
	|| ydk::is_set(touches.yfilter)
	|| ydk::is_set(unreachables.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::NodeStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-statistics";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::NodeStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NodeStatistics' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adds.is_set || is_set(adds.yfilter)) leaf_name_data.push_back(adds.get_name_leafdata());
    if (deletes.is_set || is_set(deletes.yfilter)) leaf_name_data.push_back(deletes.get_name_leafdata());
    if (modifies.is_set || is_set(modifies.yfilter)) leaf_name_data.push_back(modifies.get_name_leafdata());
    if (reachables.is_set || is_set(reachables.yfilter)) leaf_name_data.push_back(reachables.get_name_leafdata());
    if (touches.is_set || is_set(touches.yfilter)) leaf_name_data.push_back(touches.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.yfilter)) leaf_name_data.push_back(unreachables.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::NodeStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::NodeStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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
    if(value_path == "touches")
    {
        touches = value;
        touches.value_namespace = name_space;
        touches.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachables")
    {
        unreachables = value;
        unreachables.value_namespace = name_space;
        unreachables.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "touches")
    {
        touches.yfilter = yfilter;
    }
    if(value_path == "unreachables")
    {
        unreachables.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::NodeStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adds" || name == "deletes" || name == "modifies" || name == "reachables" || name == "touches" || name == "unreachables")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::TriggerLsp::TriggerLsp()
    :
    change_type{YType::enumeration, "change-type"},
    lsp_id{YType::str, "lsp-id"},
    reception_time{YType::str, "reception-time"},
    sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "trigger-lsp"; yang_parent_name = "spf-run-summary";
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::TriggerLsp::~TriggerLsp()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::TriggerLsp::has_data() const
{
    return change_type.is_set
	|| lsp_id.is_set
	|| reception_time.is_set
	|| sequence_number.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::TriggerLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(reception_time.yfilter)
	|| ydk::is_set(sequence_number.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::TriggerLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-lsp";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::TriggerLsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TriggerLsp' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (reception_time.is_set || is_set(reception_time.yfilter)) leaf_name_data.push_back(reception_time.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::TriggerLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::TriggerLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::TriggerLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reception-time")
    {
        reception_time = value;
        reception_time.value_namespace = name_space;
        reception_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::TriggerLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "reception-time")
    {
        reception_time.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::TriggerLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "change-type" || name == "lsp-id" || name == "reception-time" || name == "sequence-number")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::Priority()
    :
    priority_summary(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary>())
{
    priority_summary->parent = this;

    yang_name = "priority"; yang_parent_name = "spf-run-summary";
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::~Priority()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::has_data() const
{
    for (std::size_t index=0; index<convergence_timeline.size(); index++)
    {
        if(convergence_timeline[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<leaf_networks_added.size(); index++)
    {
        if(leaf_networks_added[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<leaf_networks_deleted.size(); index++)
    {
        if(leaf_networks_deleted[index]->has_data())
            return true;
    }
    return (priority_summary !=  nullptr && priority_summary->has_data());
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::has_operation() const
{
    for (std::size_t index=0; index<convergence_timeline.size(); index++)
    {
        if(convergence_timeline[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<leaf_networks_added.size(); index++)
    {
        if(leaf_networks_added[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<leaf_networks_deleted.size(); index++)
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

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priority' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "convergence-timeline")
    {
        for(auto const & c : convergence_timeline)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline>();
        c->parent = this;
        convergence_timeline.push_back(c);
        return c;
    }

    if(child_yang_name == "leaf-networks-added")
    {
        for(auto const & c : leaf_networks_added)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksAdded>();
        c->parent = this;
        leaf_networks_added.push_back(c);
        return c;
    }

    if(child_yang_name == "leaf-networks-deleted")
    {
        for(auto const & c : leaf_networks_deleted)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksDeleted>();
        c->parent = this;
        leaf_networks_deleted.push_back(c);
        return c;
    }

    if(child_yang_name == "priority-summary")
    {
        if(priority_summary == nullptr)
        {
            priority_summary = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary>();
        }
        return priority_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : convergence_timeline)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : leaf_networks_added)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : leaf_networks_deleted)
    {
        children[c->get_segment_path()] = c;
    }

    if(priority_summary != nullptr)
    {
        children["priority-summary"] = priority_summary;
    }

    return children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "convergence-timeline" || name == "leaf-networks-added" || name == "leaf-networks-deleted" || name == "priority-summary")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::PrioritySummary()
    :
    level{YType::enumeration, "level"},
    threshold_exceeded{YType::boolean, "threshold-exceeded"}
    	,
    ip_convergence_time(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::IpConvergenceTime>())
	,mpls_convergence_time(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::MplsConvergenceTime>())
	,route_statistics(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::RouteStatistics>())
{
    ip_convergence_time->parent = this;

    mpls_convergence_time->parent = this;

    route_statistics->parent = this;

    yang_name = "priority-summary"; yang_parent_name = "priority";
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::~PrioritySummary()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::has_data() const
{
    for (std::size_t index=0; index<frr_statistic.size(); index++)
    {
        if(frr_statistic[index]->has_data())
            return true;
    }
    return level.is_set
	|| threshold_exceeded.is_set
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_data())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_data())
	|| (route_statistics !=  nullptr && route_statistics->has_data());
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::has_operation() const
{
    for (std::size_t index=0; index<frr_statistic.size(); index++)
    {
        if(frr_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(threshold_exceeded.yfilter)
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_operation())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_operation())
	|| (route_statistics !=  nullptr && route_statistics->has_operation());
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-summary";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrioritySummary' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (threshold_exceeded.is_set || is_set(threshold_exceeded.yfilter)) leaf_name_data.push_back(threshold_exceeded.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-statistic")
    {
        for(auto const & c : frr_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::FrrStatistic>();
        c->parent = this;
        frr_statistic.push_back(c);
        return c;
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

    if(child_yang_name == "route-statistics")
    {
        if(route_statistics == nullptr)
        {
            route_statistics = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::RouteStatistics>();
        }
        return route_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : frr_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    if(ip_convergence_time != nullptr)
    {
        children["ip-convergence-time"] = ip_convergence_time;
    }

    if(mpls_convergence_time != nullptr)
    {
        children["mpls-convergence-time"] = mpls_convergence_time;
    }

    if(route_statistics != nullptr)
    {
        children["route-statistics"] = route_statistics;
    }

    return children;
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
    if(name == "frr-statistic" || name == "ip-convergence-time" || name == "mpls-convergence-time" || name == "route-statistics" || name == "level" || name == "threshold-exceeded")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::RouteStatistics::RouteStatistics()
    :
    adds{YType::uint32, "adds"},
    deletes{YType::uint32, "deletes"},
    modifies{YType::uint32, "modifies"},
    reachables{YType::uint32, "reachables"},
    touches{YType::uint32, "touches"},
    unreachables{YType::uint32, "unreachables"}
{
    yang_name = "route-statistics"; yang_parent_name = "priority-summary";
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::RouteStatistics::~RouteStatistics()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::RouteStatistics::has_data() const
{
    return adds.is_set
	|| deletes.is_set
	|| modifies.is_set
	|| reachables.is_set
	|| touches.is_set
	|| unreachables.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::RouteStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adds.yfilter)
	|| ydk::is_set(deletes.yfilter)
	|| ydk::is_set(modifies.yfilter)
	|| ydk::is_set(reachables.yfilter)
	|| ydk::is_set(touches.yfilter)
	|| ydk::is_set(unreachables.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::RouteStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-statistics";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::RouteStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteStatistics' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adds.is_set || is_set(adds.yfilter)) leaf_name_data.push_back(adds.get_name_leafdata());
    if (deletes.is_set || is_set(deletes.yfilter)) leaf_name_data.push_back(deletes.get_name_leafdata());
    if (modifies.is_set || is_set(modifies.yfilter)) leaf_name_data.push_back(modifies.get_name_leafdata());
    if (reachables.is_set || is_set(reachables.yfilter)) leaf_name_data.push_back(reachables.get_name_leafdata());
    if (touches.is_set || is_set(touches.yfilter)) leaf_name_data.push_back(touches.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.yfilter)) leaf_name_data.push_back(unreachables.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::RouteStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::RouteStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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
    if(value_path == "touches")
    {
        touches = value;
        touches.value_namespace = name_space;
        touches.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachables")
    {
        unreachables = value;
        unreachables.value_namespace = name_space;
        unreachables.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "touches")
    {
        touches.yfilter = yfilter;
    }
    if(value_path == "unreachables")
    {
        unreachables.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::RouteStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adds" || name == "deletes" || name == "modifies" || name == "reachables" || name == "touches" || name == "unreachables")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::IpConvergenceTime::IpConvergenceTime()
    :
    fastest_node_name{YType::str, "fastest-node-name"},
    maximum_time{YType::str, "maximum-time"},
    minimum_time{YType::str, "minimum-time"},
    slowest_node_name{YType::str, "slowest-node-name"}
{
    yang_name = "ip-convergence-time"; yang_parent_name = "priority-summary";
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::IpConvergenceTime::~IpConvergenceTime()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::IpConvergenceTime::has_data() const
{
    return fastest_node_name.is_set
	|| maximum_time.is_set
	|| minimum_time.is_set
	|| slowest_node_name.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::IpConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fastest_node_name.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::IpConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-convergence-time";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::IpConvergenceTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpConvergenceTime' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::IpConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::IpConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::IpConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::IpConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::IpConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fastest-node-name" || name == "maximum-time" || name == "minimum-time" || name == "slowest-node-name")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::MplsConvergenceTime::MplsConvergenceTime()
    :
    fastest_node_name{YType::str, "fastest-node-name"},
    maximum_time{YType::str, "maximum-time"},
    minimum_time{YType::str, "minimum-time"},
    slowest_node_name{YType::str, "slowest-node-name"}
{
    yang_name = "mpls-convergence-time"; yang_parent_name = "priority-summary";
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::MplsConvergenceTime::~MplsConvergenceTime()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::MplsConvergenceTime::has_data() const
{
    return fastest_node_name.is_set
	|| maximum_time.is_set
	|| minimum_time.is_set
	|| slowest_node_name.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::MplsConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fastest_node_name.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::MplsConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-convergence-time";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::MplsConvergenceTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsConvergenceTime' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::MplsConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::MplsConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::MplsConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::MplsConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::MplsConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fastest-node-name" || name == "maximum-time" || name == "minimum-time" || name == "slowest-node-name")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::FrrStatistic::FrrStatistic()
    :
    coverage{YType::str, "coverage"},
    fully_protected_routes{YType::uint32, "fully-protected-routes"},
    partially_protected_routes{YType::uint32, "partially-protected-routes"},
    total_routes{YType::uint32, "total-routes"}
{
    yang_name = "frr-statistic"; yang_parent_name = "priority-summary";
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::FrrStatistic::~FrrStatistic()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::FrrStatistic::has_data() const
{
    return coverage.is_set
	|| fully_protected_routes.is_set
	|| partially_protected_routes.is_set
	|| total_routes.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::FrrStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(coverage.yfilter)
	|| ydk::is_set(fully_protected_routes.yfilter)
	|| ydk::is_set(partially_protected_routes.yfilter)
	|| ydk::is_set(total_routes.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::FrrStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-statistic";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::FrrStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrStatistic' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (coverage.is_set || is_set(coverage.yfilter)) leaf_name_data.push_back(coverage.get_name_leafdata());
    if (fully_protected_routes.is_set || is_set(fully_protected_routes.yfilter)) leaf_name_data.push_back(fully_protected_routes.get_name_leafdata());
    if (partially_protected_routes.is_set || is_set(partially_protected_routes.yfilter)) leaf_name_data.push_back(partially_protected_routes.get_name_leafdata());
    if (total_routes.is_set || is_set(total_routes.yfilter)) leaf_name_data.push_back(total_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::FrrStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::FrrStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::FrrStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "coverage")
    {
        coverage = value;
        coverage.value_namespace = name_space;
        coverage.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "total-routes")
    {
        total_routes = value;
        total_routes.value_namespace = name_space;
        total_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::FrrStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "coverage")
    {
        coverage.yfilter = yfilter;
    }
    if(value_path == "fully-protected-routes")
    {
        fully_protected_routes.yfilter = yfilter;
    }
    if(value_path == "partially-protected-routes")
    {
        partially_protected_routes.yfilter = yfilter;
    }
    if(value_path == "total-routes")
    {
        total_routes.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::PrioritySummary::FrrStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "coverage" || name == "fully-protected-routes" || name == "partially-protected-routes" || name == "total-routes")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::ConvergenceTimeline()
    :
    ldp_enter(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpEnter>())
	,ldp_exit(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpExit>())
	,lsd_enter(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdEnter>())
	,lsd_exit(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdExit>())
	,ri_bv4_enter(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Enter>())
	,ri_bv4_exit(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Exit>())
	,ri_bv4_redistribute(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Redistribute>())
	,route_origin(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RouteOrigin>())
{
    ldp_enter->parent = this;

    ldp_exit->parent = this;

    lsd_enter->parent = this;

    lsd_exit->parent = this;

    ri_bv4_enter->parent = this;

    ri_bv4_exit->parent = this;

    ri_bv4_redistribute->parent = this;

    route_origin->parent = this;

    yang_name = "convergence-timeline"; yang_parent_name = "priority";
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::~ConvergenceTimeline()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::has_data() const
{
    for (std::size_t index=0; index<lc_ip.size(); index++)
    {
        if(lc_ip[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lc_mpls.size(); index++)
    {
        if(lc_mpls[index]->has_data())
            return true;
    }
    return (ldp_enter !=  nullptr && ldp_enter->has_data())
	|| (ldp_exit !=  nullptr && ldp_exit->has_data())
	|| (lsd_enter !=  nullptr && lsd_enter->has_data())
	|| (lsd_exit !=  nullptr && lsd_exit->has_data())
	|| (ri_bv4_enter !=  nullptr && ri_bv4_enter->has_data())
	|| (ri_bv4_exit !=  nullptr && ri_bv4_exit->has_data())
	|| (ri_bv4_redistribute !=  nullptr && ri_bv4_redistribute->has_data())
	|| (route_origin !=  nullptr && route_origin->has_data());
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::has_operation() const
{
    for (std::size_t index=0; index<lc_ip.size(); index++)
    {
        if(lc_ip[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lc_mpls.size(); index++)
    {
        if(lc_mpls[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (ldp_enter !=  nullptr && ldp_enter->has_operation())
	|| (ldp_exit !=  nullptr && ldp_exit->has_operation())
	|| (lsd_enter !=  nullptr && lsd_enter->has_operation())
	|| (lsd_exit !=  nullptr && lsd_exit->has_operation())
	|| (ri_bv4_enter !=  nullptr && ri_bv4_enter->has_operation())
	|| (ri_bv4_exit !=  nullptr && ri_bv4_exit->has_operation())
	|| (ri_bv4_redistribute !=  nullptr && ri_bv4_redistribute->has_operation())
	|| (route_origin !=  nullptr && route_origin->has_operation());
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "convergence-timeline";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConvergenceTimeline' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lc-ip")
    {
        for(auto const & c : lc_ip)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp>();
        c->parent = this;
        lc_ip.push_back(c);
        return c;
    }

    if(child_yang_name == "lc-mpls")
    {
        for(auto const & c : lc_mpls)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls>();
        c->parent = this;
        lc_mpls.push_back(c);
        return c;
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

    if(child_yang_name == "route-origin")
    {
        if(route_origin == nullptr)
        {
            route_origin = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RouteOrigin>();
        }
        return route_origin;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lc_ip)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : lc_mpls)
    {
        children[c->get_segment_path()] = c;
    }

    if(ldp_enter != nullptr)
    {
        children["ldp-enter"] = ldp_enter;
    }

    if(ldp_exit != nullptr)
    {
        children["ldp-exit"] = ldp_exit;
    }

    if(lsd_enter != nullptr)
    {
        children["lsd-enter"] = lsd_enter;
    }

    if(lsd_exit != nullptr)
    {
        children["lsd-exit"] = lsd_exit;
    }

    if(ri_bv4_enter != nullptr)
    {
        children["ri-bv4-enter"] = ri_bv4_enter;
    }

    if(ri_bv4_exit != nullptr)
    {
        children["ri-bv4-exit"] = ri_bv4_exit;
    }

    if(ri_bv4_redistribute != nullptr)
    {
        children["ri-bv4-redistribute"] = ri_bv4_redistribute;
    }

    if(route_origin != nullptr)
    {
        children["route-origin"] = route_origin;
    }

    return children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lc-ip" || name == "lc-mpls" || name == "ldp-enter" || name == "ldp-exit" || name == "lsd-enter" || name == "lsd-exit" || name == "ri-bv4-enter" || name == "ri-bv4-exit" || name == "ri-bv4-redistribute" || name == "route-origin")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RouteOrigin::RouteOrigin()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "route-origin"; yang_parent_name = "convergence-timeline";
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RouteOrigin::~RouteOrigin()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RouteOrigin::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RouteOrigin::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RouteOrigin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-origin";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RouteOrigin::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteOrigin' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RouteOrigin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RouteOrigin::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RouteOrigin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RouteOrigin::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RouteOrigin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Enter::RiBv4Enter()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "ri-bv4-enter"; yang_parent_name = "convergence-timeline";
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Enter::~RiBv4Enter()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Enter::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Enter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Enter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ri-bv4-enter";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Enter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RiBv4Enter' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Enter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Enter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Enter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Enter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Enter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Exit::RiBv4Exit()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "ri-bv4-exit"; yang_parent_name = "convergence-timeline";
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Exit::~RiBv4Exit()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Exit::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Exit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Exit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ri-bv4-exit";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Exit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RiBv4Exit' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Exit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Exit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Exit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Exit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Exit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Redistribute::RiBv4Redistribute()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "ri-bv4-redistribute"; yang_parent_name = "convergence-timeline";
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Redistribute::~RiBv4Redistribute()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Redistribute::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Redistribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ri-bv4-redistribute";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Redistribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RiBv4Redistribute' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Redistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Redistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::RiBv4Redistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpEnter::LdpEnter()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "ldp-enter"; yang_parent_name = "convergence-timeline";
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpEnter::~LdpEnter()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpEnter::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpEnter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpEnter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-enter";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpEnter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LdpEnter' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpEnter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpEnter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpEnter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpEnter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpEnter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpExit::LdpExit()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "ldp-exit"; yang_parent_name = "convergence-timeline";
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpExit::~LdpExit()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpExit::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpExit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpExit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-exit";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpExit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LdpExit' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpExit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpExit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpExit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpExit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LdpExit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdEnter::LsdEnter()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "lsd-enter"; yang_parent_name = "convergence-timeline";
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdEnter::~LsdEnter()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdEnter::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdEnter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdEnter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsd-enter";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdEnter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsdEnter' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdEnter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdEnter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdEnter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdEnter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdEnter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdExit::LsdExit()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "lsd-exit"; yang_parent_name = "convergence-timeline";
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdExit::~LsdExit()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdExit::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdExit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdExit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsd-exit";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdExit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsdExit' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdExit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdExit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdExit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdExit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LsdExit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
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

    yang_name = "lc-ip"; yang_parent_name = "convergence-timeline";
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::~LcIp()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::has_data() const
{
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

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LcIp' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fib_complete != nullptr)
    {
        children["fib-complete"] = fib_complete;
    }

    return children;
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
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "fib-complete"; yang_parent_name = "lc-ip";
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::FibComplete::~FibComplete()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::FibComplete::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::FibComplete::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::FibComplete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-complete";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::FibComplete::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FibComplete' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::FibComplete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::FibComplete::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::FibComplete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::FibComplete::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcIp::FibComplete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
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

    yang_name = "lc-mpls"; yang_parent_name = "convergence-timeline";
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::~LcMpls()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::has_data() const
{
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

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LcMpls' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fib_complete != nullptr)
    {
        children["fib-complete"] = fib_complete;
    }

    return children;
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
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "fib-complete"; yang_parent_name = "lc-mpls";
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::FibComplete::~FibComplete()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::FibComplete::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::FibComplete::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::FibComplete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-complete";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::FibComplete::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FibComplete' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::FibComplete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::FibComplete::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::FibComplete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::FibComplete::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::ConvergenceTimeline::LcMpls::FibComplete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksAdded::LeafNetworksAdded()
    :
    address{YType::str, "address"},
    net_mask{YType::uint8, "net-mask"}
{
    yang_name = "leaf-networks-added"; yang_parent_name = "priority";
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksAdded::~LeafNetworksAdded()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksAdded::has_data() const
{
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

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksAdded::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LeafNetworksAdded' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (net_mask.is_set || is_set(net_mask.yfilter)) leaf_name_data.push_back(net_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksAdded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksAdded::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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
    yang_name = "leaf-networks-deleted"; yang_parent_name = "priority";
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksDeleted::~LeafNetworksDeleted()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksDeleted::has_data() const
{
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

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksDeleted::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LeafNetworksDeleted' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (net_mask.is_set || is_set(net_mask.yfilter)) leaf_name_data.push_back(net_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksDeleted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::Priority::LeafNetworksDeleted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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
    change_type{YType::enumeration, "change-type"},
    lsp_id{YType::str, "lsp-id"},
    reception_time{YType::str, "reception-time"},
    sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "lsp-processed"; yang_parent_name = "spf-run-summary";
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspProcessed::~LspProcessed()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspProcessed::has_data() const
{
    return change_type.is_set
	|| lsp_id.is_set
	|| reception_time.is_set
	|| sequence_number.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspProcessed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(reception_time.yfilter)
	|| ydk::is_set(sequence_number.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspProcessed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-processed";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspProcessed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspProcessed' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (reception_time.is_set || is_set(reception_time.yfilter)) leaf_name_data.push_back(reception_time.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspProcessed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspProcessed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspProcessed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reception-time")
    {
        reception_time = value;
        reception_time.value_namespace = name_space;
        reception_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspProcessed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "reception-time")
    {
        reception_time.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspProcessed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "change-type" || name == "lsp-id" || name == "reception-time" || name == "sequence-number")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspRegenerated::LspRegenerated()
    :
    isis_level{YType::enumeration, "isis-level"},
    lsp_id{YType::str, "lsp-id"},
    reason{YType::str, "reason"},
    reception_time{YType::str, "reception-time"},
    sequence_number{YType::uint32, "sequence-number"},
    serial_number_xr{YType::uint32, "serial-number-xr"},
    spf_run_number{YType::uint32, "spf-run-number"}
{
    yang_name = "lsp-regenerated"; yang_parent_name = "spf-run-summary";
}

Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspRegenerated::~LspRegenerated()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspRegenerated::has_data() const
{
    return isis_level.is_set
	|| lsp_id.is_set
	|| reason.is_set
	|| reception_time.is_set
	|| sequence_number.is_set
	|| serial_number_xr.is_set
	|| spf_run_number.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspRegenerated::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(isis_level.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(reception_time.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(serial_number_xr.yfilter)
	|| ydk::is_set(spf_run_number.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspRegenerated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-regenerated";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspRegenerated::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspRegenerated' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_level.is_set || is_set(isis_level.yfilter)) leaf_name_data.push_back(isis_level.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (reception_time.is_set || is_set(reception_time.yfilter)) leaf_name_data.push_back(reception_time.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (serial_number_xr.is_set || is_set(serial_number_xr.yfilter)) leaf_name_data.push_back(serial_number_xr.get_name_leafdata());
    if (spf_run_number.is_set || is_set(spf_run_number.yfilter)) leaf_name_data.push_back(spf_run_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspRegenerated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspRegenerated::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspRegenerated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isis-level")
    {
        isis_level = value;
        isis_level.value_namespace = name_space;
        isis_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reception-time")
    {
        reception_time = value;
        reception_time.value_namespace = name_space;
        reception_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number-xr")
    {
        serial_number_xr = value;
        serial_number_xr.value_namespace = name_space;
        serial_number_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-run-number")
    {
        spf_run_number = value;
        spf_run_number.value_namespace = name_space;
        spf_run_number.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspRegenerated::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isis-level")
    {
        isis_level.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "reception-time")
    {
        reception_time.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "serial-number-xr")
    {
        serial_number_xr.yfilter = yfilter;
    }
    if(value_path == "spf-run-number")
    {
        spf_run_number.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunSummaries::SpfRunSummary::LspRegenerated::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-level" || name == "lsp-id" || name == "reason" || name == "reception-time" || name == "sequence-number" || name == "serial-number-xr" || name == "spf-run-number")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOfflines()
{
    yang_name = "ipfrr-event-offlines"; yang_parent_name = "instance";
}

Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::~IpfrrEventOfflines()
{
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::has_data() const
{
    for (std::size_t index=0; index<ipfrr_event_offline.size(); index++)
    {
        if(ipfrr_event_offline[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::has_operation() const
{
    for (std::size_t index=0; index<ipfrr_event_offline.size(); index++)
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

const EntityPath Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpfrrEventOfflines' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipfrr-event-offline")
    {
        for(auto const & c : ipfrr_event_offline)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline>();
        c->parent = this;
        ipfrr_event_offline.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipfrr_event_offline)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
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
    event_id{YType::int32, "event-id"},
    completed_spf_run{YType::uint32, "completed-spf-run"},
    coverage{YType::str, "coverage"},
    duration{YType::str, "duration"},
    event_id_xr{YType::uint32, "event-id-xr"},
    fully_protected_routes{YType::uint32, "fully-protected-routes"},
    partially_protected_routes{YType::uint32, "partially-protected-routes"},
    start_time_offset{YType::str, "start-time-offset"},
    total_routes{YType::uint32, "total-routes"},
    trigger_spf_run{YType::uint32, "trigger-spf-run"},
    trigger_time{YType::str, "trigger-time"},
    wait_time{YType::uint32, "wait-time"}
{
    yang_name = "ipfrr-event-offline"; yang_parent_name = "ipfrr-event-offlines";
}

Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::~IpfrrEventOffline()
{
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::has_data() const
{
    for (std::size_t index=0; index<ipfrr_statistic.size(); index++)
    {
        if(ipfrr_statistic[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<remote_node.size(); index++)
    {
        if(remote_node[index]->has_data())
            return true;
    }
    return event_id.is_set
	|| completed_spf_run.is_set
	|| coverage.is_set
	|| duration.is_set
	|| event_id_xr.is_set
	|| fully_protected_routes.is_set
	|| partially_protected_routes.is_set
	|| start_time_offset.is_set
	|| total_routes.is_set
	|| trigger_spf_run.is_set
	|| trigger_time.is_set
	|| wait_time.is_set;
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::has_operation() const
{
    for (std::size_t index=0; index<ipfrr_statistic.size(); index++)
    {
        if(ipfrr_statistic[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<remote_node.size(); index++)
    {
        if(remote_node[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(event_id.yfilter)
	|| ydk::is_set(completed_spf_run.yfilter)
	|| ydk::is_set(coverage.yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(event_id_xr.yfilter)
	|| ydk::is_set(fully_protected_routes.yfilter)
	|| ydk::is_set(partially_protected_routes.yfilter)
	|| ydk::is_set(start_time_offset.yfilter)
	|| ydk::is_set(total_routes.yfilter)
	|| ydk::is_set(trigger_spf_run.yfilter)
	|| ydk::is_set(trigger_time.yfilter)
	|| ydk::is_set(wait_time.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipfrr-event-offline" <<"[event-id='" <<event_id <<"']";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpfrrEventOffline' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_id.is_set || is_set(event_id.yfilter)) leaf_name_data.push_back(event_id.get_name_leafdata());
    if (completed_spf_run.is_set || is_set(completed_spf_run.yfilter)) leaf_name_data.push_back(completed_spf_run.get_name_leafdata());
    if (coverage.is_set || is_set(coverage.yfilter)) leaf_name_data.push_back(coverage.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (event_id_xr.is_set || is_set(event_id_xr.yfilter)) leaf_name_data.push_back(event_id_xr.get_name_leafdata());
    if (fully_protected_routes.is_set || is_set(fully_protected_routes.yfilter)) leaf_name_data.push_back(fully_protected_routes.get_name_leafdata());
    if (partially_protected_routes.is_set || is_set(partially_protected_routes.yfilter)) leaf_name_data.push_back(partially_protected_routes.get_name_leafdata());
    if (start_time_offset.is_set || is_set(start_time_offset.yfilter)) leaf_name_data.push_back(start_time_offset.get_name_leafdata());
    if (total_routes.is_set || is_set(total_routes.yfilter)) leaf_name_data.push_back(total_routes.get_name_leafdata());
    if (trigger_spf_run.is_set || is_set(trigger_spf_run.yfilter)) leaf_name_data.push_back(trigger_spf_run.get_name_leafdata());
    if (trigger_time.is_set || is_set(trigger_time.yfilter)) leaf_name_data.push_back(trigger_time.get_name_leafdata());
    if (wait_time.is_set || is_set(wait_time.yfilter)) leaf_name_data.push_back(wait_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipfrr-statistic")
    {
        for(auto const & c : ipfrr_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic>();
        c->parent = this;
        ipfrr_statistic.push_back(c);
        return c;
    }

    if(child_yang_name == "remote-node")
    {
        for(auto const & c : remote_node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode>();
        c->parent = this;
        remote_node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipfrr_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : remote_node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-id")
    {
        event_id = value;
        event_id.value_namespace = name_space;
        event_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "completed-spf-run")
    {
        completed_spf_run = value;
        completed_spf_run.value_namespace = name_space;
        completed_spf_run.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coverage")
    {
        coverage = value;
        coverage.value_namespace = name_space;
        coverage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-id-xr")
    {
        event_id_xr = value;
        event_id_xr.value_namespace = name_space;
        event_id_xr.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "start-time-offset")
    {
        start_time_offset = value;
        start_time_offset.value_namespace = name_space;
        start_time_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-routes")
    {
        total_routes = value;
        total_routes.value_namespace = name_space;
        total_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-spf-run")
    {
        trigger_spf_run = value;
        trigger_spf_run.value_namespace = name_space;
        trigger_spf_run.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-time")
    {
        trigger_time = value;
        trigger_time.value_namespace = name_space;
        trigger_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-time")
    {
        wait_time = value;
        wait_time.value_namespace = name_space;
        wait_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-id")
    {
        event_id.yfilter = yfilter;
    }
    if(value_path == "completed-spf-run")
    {
        completed_spf_run.yfilter = yfilter;
    }
    if(value_path == "coverage")
    {
        coverage.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "event-id-xr")
    {
        event_id_xr.yfilter = yfilter;
    }
    if(value_path == "fully-protected-routes")
    {
        fully_protected_routes.yfilter = yfilter;
    }
    if(value_path == "partially-protected-routes")
    {
        partially_protected_routes.yfilter = yfilter;
    }
    if(value_path == "start-time-offset")
    {
        start_time_offset.yfilter = yfilter;
    }
    if(value_path == "total-routes")
    {
        total_routes.yfilter = yfilter;
    }
    if(value_path == "trigger-spf-run")
    {
        trigger_spf_run.yfilter = yfilter;
    }
    if(value_path == "trigger-time")
    {
        trigger_time.yfilter = yfilter;
    }
    if(value_path == "wait-time")
    {
        wait_time.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipfrr-statistic" || name == "remote-node" || name == "event-id" || name == "completed-spf-run" || name == "coverage" || name == "duration" || name == "event-id-xr" || name == "fully-protected-routes" || name == "partially-protected-routes" || name == "start-time-offset" || name == "total-routes" || name == "trigger-spf-run" || name == "trigger-time" || name == "wait-time")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic::IpfrrStatistic()
    :
    below_threshold{YType::boolean, "below-threshold"},
    coverage{YType::str, "coverage"},
    fully_protected_routes{YType::uint32, "fully-protected-routes"},
    local_lfa_coverage{YType::str, "local-lfa-coverage"},
    partially_protected_routes{YType::uint32, "partially-protected-routes"},
    priority{YType::enumeration, "priority"},
    remote_lfa_coverage{YType::str, "remote-lfa-coverage"},
    total_routes{YType::uint32, "total-routes"}
{
    yang_name = "ipfrr-statistic"; yang_parent_name = "ipfrr-event-offline";
}

Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic::~IpfrrStatistic()
{
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic::has_data() const
{
    return below_threshold.is_set
	|| coverage.is_set
	|| fully_protected_routes.is_set
	|| local_lfa_coverage.is_set
	|| partially_protected_routes.is_set
	|| priority.is_set
	|| remote_lfa_coverage.is_set
	|| total_routes.is_set;
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(below_threshold.yfilter)
	|| ydk::is_set(coverage.yfilter)
	|| ydk::is_set(fully_protected_routes.yfilter)
	|| ydk::is_set(local_lfa_coverage.yfilter)
	|| ydk::is_set(partially_protected_routes.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(remote_lfa_coverage.yfilter)
	|| ydk::is_set(total_routes.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipfrr-statistic";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpfrrStatistic' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (below_threshold.is_set || is_set(below_threshold.yfilter)) leaf_name_data.push_back(below_threshold.get_name_leafdata());
    if (coverage.is_set || is_set(coverage.yfilter)) leaf_name_data.push_back(coverage.get_name_leafdata());
    if (fully_protected_routes.is_set || is_set(fully_protected_routes.yfilter)) leaf_name_data.push_back(fully_protected_routes.get_name_leafdata());
    if (local_lfa_coverage.is_set || is_set(local_lfa_coverage.yfilter)) leaf_name_data.push_back(local_lfa_coverage.get_name_leafdata());
    if (partially_protected_routes.is_set || is_set(partially_protected_routes.yfilter)) leaf_name_data.push_back(partially_protected_routes.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (remote_lfa_coverage.is_set || is_set(remote_lfa_coverage.yfilter)) leaf_name_data.push_back(remote_lfa_coverage.get_name_leafdata());
    if (total_routes.is_set || is_set(total_routes.yfilter)) leaf_name_data.push_back(total_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "below-threshold")
    {
        below_threshold = value;
        below_threshold.value_namespace = name_space;
        below_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coverage")
    {
        coverage = value;
        coverage.value_namespace = name_space;
        coverage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fully-protected-routes")
    {
        fully_protected_routes = value;
        fully_protected_routes.value_namespace = name_space;
        fully_protected_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-lfa-coverage")
    {
        local_lfa_coverage = value;
        local_lfa_coverage.value_namespace = name_space;
        local_lfa_coverage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partially-protected-routes")
    {
        partially_protected_routes = value;
        partially_protected_routes.value_namespace = name_space;
        partially_protected_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-lfa-coverage")
    {
        remote_lfa_coverage = value;
        remote_lfa_coverage.value_namespace = name_space;
        remote_lfa_coverage.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-routes")
    {
        total_routes = value;
        total_routes.value_namespace = name_space;
        total_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "below-threshold")
    {
        below_threshold.yfilter = yfilter;
    }
    if(value_path == "coverage")
    {
        coverage.yfilter = yfilter;
    }
    if(value_path == "fully-protected-routes")
    {
        fully_protected_routes.yfilter = yfilter;
    }
    if(value_path == "local-lfa-coverage")
    {
        local_lfa_coverage.yfilter = yfilter;
    }
    if(value_path == "partially-protected-routes")
    {
        partially_protected_routes.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "remote-lfa-coverage")
    {
        remote_lfa_coverage.yfilter = yfilter;
    }
    if(value_path == "total-routes")
    {
        total_routes.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::IpfrrStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "below-threshold" || name == "coverage" || name == "fully-protected-routes" || name == "local-lfa-coverage" || name == "partially-protected-routes" || name == "priority" || name == "remote-lfa-coverage" || name == "total-routes")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::RemoteNode()
    :
    in_use_time{YType::str, "in-use-time"},
    interface_name{YType::str, "interface-name"},
    neighbour_address{YType::str, "neighbour-address"},
    path_count{YType::uint32, "path-count"},
    remote_node_id{YType::str, "remote-node-id"}
{
    yang_name = "remote-node"; yang_parent_name = "ipfrr-event-offline";
}

Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::~RemoteNode()
{
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::has_data() const
{
    for (std::size_t index=0; index<primary_path.size(); index++)
    {
        if(primary_path[index]->has_data())
            return true;
    }
    return in_use_time.is_set
	|| interface_name.is_set
	|| neighbour_address.is_set
	|| path_count.is_set
	|| remote_node_id.is_set;
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::has_operation() const
{
    for (std::size_t index=0; index<primary_path.size(); index++)
    {
        if(primary_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(in_use_time.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbour_address.yfilter)
	|| ydk::is_set(path_count.yfilter)
	|| ydk::is_set(remote_node_id.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-node";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteNode' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_use_time.is_set || is_set(in_use_time.yfilter)) leaf_name_data.push_back(in_use_time.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbour_address.is_set || is_set(neighbour_address.yfilter)) leaf_name_data.push_back(neighbour_address.get_name_leafdata());
    if (path_count.is_set || is_set(path_count.yfilter)) leaf_name_data.push_back(path_count.get_name_leafdata());
    if (remote_node_id.is_set || is_set(remote_node_id.yfilter)) leaf_name_data.push_back(remote_node_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "primary-path")
    {
        for(auto const & c : primary_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath>();
        c->parent = this;
        primary_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : primary_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-use-time")
    {
        in_use_time = value;
        in_use_time.value_namespace = name_space;
        in_use_time.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "remote-node-id")
    {
        remote_node_id = value;
        remote_node_id.value_namespace = name_space;
        remote_node_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-use-time")
    {
        in_use_time.yfilter = yfilter;
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
    if(value_path == "remote-node-id")
    {
        remote_node_id.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "primary-path" || name == "in-use-time" || name == "interface-name" || name == "neighbour-address" || name == "path-count" || name == "remote-node-id")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath::PrimaryPath()
    :
    interface_name{YType::str, "interface-name"},
    neighbour_address{YType::str, "neighbour-address"}
{
    yang_name = "primary-path"; yang_parent_name = "remote-node";
}

Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath::~PrimaryPath()
{
}

bool Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath::has_data() const
{
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

const EntityPath Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrimaryPath' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbour_address.is_set || is_set(neighbour_address.yfilter)) leaf_name_data.push_back(neighbour_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::IpfrrEventOfflines::IpfrrEventOffline::RemoteNode::PrimaryPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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
{
    yang_name = "spf-run-offlines"; yang_parent_name = "instance";
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::~SpfRunOfflines()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::has_data() const
{
    for (std::size_t index=0; index<spf_run_offline.size(); index++)
    {
        if(spf_run_offline[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::has_operation() const
{
    for (std::size_t index=0; index<spf_run_offline.size(); index++)
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

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunOfflines::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpfRunOfflines' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spf-run-offline")
    {
        for(auto const & c : spf_run_offline)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline>();
        c->parent = this;
        spf_run_offline.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : spf_run_offline)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
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
    spf_run_number{YType::int32, "spf-run-number"},
    reason{YType::str, "reason"},
    start_time{YType::str, "start-time"},
    wait_time{YType::uint32, "wait-time"}
    	,
    node_statistics(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::NodeStatistics>())
	,spf_summary(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary>())
{
    node_statistics->parent = this;

    spf_summary->parent = this;

    yang_name = "spf-run-offline"; yang_parent_name = "spf-run-offlines";
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::~SpfRunOffline()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::has_data() const
{
    for (std::size_t index=0; index<lsp_processed.size(); index++)
    {
        if(lsp_processed[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lsp_regenerated.size(); index++)
    {
        if(lsp_regenerated[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<priority.size(); index++)
    {
        if(priority[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<trigger_lsp.size(); index++)
    {
        if(trigger_lsp[index]->has_data())
            return true;
    }
    return spf_run_number.is_set
	|| reason.is_set
	|| start_time.is_set
	|| wait_time.is_set
	|| (node_statistics !=  nullptr && node_statistics->has_data())
	|| (spf_summary !=  nullptr && spf_summary->has_data());
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::has_operation() const
{
    for (std::size_t index=0; index<lsp_processed.size(); index++)
    {
        if(lsp_processed[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lsp_regenerated.size(); index++)
    {
        if(lsp_regenerated[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<priority.size(); index++)
    {
        if(priority[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<trigger_lsp.size(); index++)
    {
        if(trigger_lsp[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(spf_run_number.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(wait_time.yfilter)
	|| (node_statistics !=  nullptr && node_statistics->has_operation())
	|| (spf_summary !=  nullptr && spf_summary->has_operation());
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-run-offline" <<"[spf-run-number='" <<spf_run_number <<"']";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpfRunOffline' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (spf_run_number.is_set || is_set(spf_run_number.yfilter)) leaf_name_data.push_back(spf_run_number.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (wait_time.is_set || is_set(wait_time.yfilter)) leaf_name_data.push_back(wait_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-processed")
    {
        for(auto const & c : lsp_processed)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspProcessed>();
        c->parent = this;
        lsp_processed.push_back(c);
        return c;
    }

    if(child_yang_name == "lsp-regenerated")
    {
        for(auto const & c : lsp_regenerated)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspRegenerated>();
        c->parent = this;
        lsp_regenerated.push_back(c);
        return c;
    }

    if(child_yang_name == "node-statistics")
    {
        if(node_statistics == nullptr)
        {
            node_statistics = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::NodeStatistics>();
        }
        return node_statistics;
    }

    if(child_yang_name == "priority")
    {
        for(auto const & c : priority)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority>();
        c->parent = this;
        priority.push_back(c);
        return c;
    }

    if(child_yang_name == "spf-summary")
    {
        if(spf_summary == nullptr)
        {
            spf_summary = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary>();
        }
        return spf_summary;
    }

    if(child_yang_name == "trigger-lsp")
    {
        for(auto const & c : trigger_lsp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::TriggerLsp>();
        c->parent = this;
        trigger_lsp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lsp_processed)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : lsp_regenerated)
    {
        children[c->get_segment_path()] = c;
    }

    if(node_statistics != nullptr)
    {
        children["node-statistics"] = node_statistics;
    }

    for (auto const & c : priority)
    {
        children[c->get_segment_path()] = c;
    }

    if(spf_summary != nullptr)
    {
        children["spf-summary"] = spf_summary;
    }

    for (auto const & c : trigger_lsp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "spf-run-number")
    {
        spf_run_number.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "wait-time")
    {
        wait_time.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lsp-processed" || name == "lsp-regenerated" || name == "node-statistics" || name == "priority" || name == "spf-summary" || name == "trigger-lsp" || name == "spf-run-number" || name == "reason" || name == "start-time" || name == "wait-time")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::SpfSummary()
    :
    duration{YType::str, "duration"},
    is_data_complete{YType::boolean, "is-data-complete"},
    isis_level{YType::enumeration, "isis-level"},
    state{YType::enumeration, "state"},
    threshold_exceeded{YType::boolean, "threshold-exceeded"},
    topology{YType::uint32, "topology"},
    total_lsp_changes{YType::uint16, "total-lsp-changes"},
    trigger_time{YType::str, "trigger-time"},
    type{YType::enumeration, "type"}
{
    yang_name = "spf-summary"; yang_parent_name = "spf-run-offline";
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::~SpfSummary()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::has_data() const
{
    for (std::size_t index=0; index<priority_summary.size(); index++)
    {
        if(priority_summary[index]->has_data())
            return true;
    }
    return duration.is_set
	|| is_data_complete.is_set
	|| isis_level.is_set
	|| state.is_set
	|| threshold_exceeded.is_set
	|| topology.is_set
	|| total_lsp_changes.is_set
	|| trigger_time.is_set
	|| type.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::has_operation() const
{
    for (std::size_t index=0; index<priority_summary.size(); index++)
    {
        if(priority_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(is_data_complete.yfilter)
	|| ydk::is_set(isis_level.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(threshold_exceeded.yfilter)
	|| ydk::is_set(topology.yfilter)
	|| ydk::is_set(total_lsp_changes.yfilter)
	|| ydk::is_set(trigger_time.yfilter)
	|| ydk::is_set(type.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-summary";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpfSummary' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (is_data_complete.is_set || is_set(is_data_complete.yfilter)) leaf_name_data.push_back(is_data_complete.get_name_leafdata());
    if (isis_level.is_set || is_set(isis_level.yfilter)) leaf_name_data.push_back(isis_level.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (threshold_exceeded.is_set || is_set(threshold_exceeded.yfilter)) leaf_name_data.push_back(threshold_exceeded.get_name_leafdata());
    if (topology.is_set || is_set(topology.yfilter)) leaf_name_data.push_back(topology.get_name_leafdata());
    if (total_lsp_changes.is_set || is_set(total_lsp_changes.yfilter)) leaf_name_data.push_back(total_lsp_changes.get_name_leafdata());
    if (trigger_time.is_set || is_set(trigger_time.yfilter)) leaf_name_data.push_back(trigger_time.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority-summary")
    {
        for(auto const & c : priority_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary>();
        c->parent = this;
        priority_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : priority_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-data-complete")
    {
        is_data_complete = value;
        is_data_complete.value_namespace = name_space;
        is_data_complete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-level")
    {
        isis_level = value;
        isis_level.value_namespace = name_space;
        isis_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded = value;
        threshold_exceeded.value_namespace = name_space;
        threshold_exceeded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology")
    {
        topology = value;
        topology.value_namespace = name_space;
        topology.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-lsp-changes")
    {
        total_lsp_changes = value;
        total_lsp_changes.value_namespace = name_space;
        total_lsp_changes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trigger-time")
    {
        trigger_time = value;
        trigger_time.value_namespace = name_space;
        trigger_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "is-data-complete")
    {
        is_data_complete.yfilter = yfilter;
    }
    if(value_path == "isis-level")
    {
        isis_level.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded.yfilter = yfilter;
    }
    if(value_path == "topology")
    {
        topology.yfilter = yfilter;
    }
    if(value_path == "total-lsp-changes")
    {
        total_lsp_changes.yfilter = yfilter;
    }
    if(value_path == "trigger-time")
    {
        trigger_time.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority-summary" || name == "duration" || name == "is-data-complete" || name == "isis-level" || name == "state" || name == "threshold-exceeded" || name == "topology" || name == "total-lsp-changes" || name == "trigger-time" || name == "type")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::PrioritySummary()
    :
    level{YType::enumeration, "level"},
    threshold_exceeded{YType::boolean, "threshold-exceeded"}
    	,
    ip_convergence_time(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime>())
	,mpls_convergence_time(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime>())
	,route_statistics(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics>())
{
    ip_convergence_time->parent = this;

    mpls_convergence_time->parent = this;

    route_statistics->parent = this;

    yang_name = "priority-summary"; yang_parent_name = "spf-summary";
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::~PrioritySummary()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::has_data() const
{
    for (std::size_t index=0; index<frr_statistic.size(); index++)
    {
        if(frr_statistic[index]->has_data())
            return true;
    }
    return level.is_set
	|| threshold_exceeded.is_set
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_data())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_data())
	|| (route_statistics !=  nullptr && route_statistics->has_data());
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::has_operation() const
{
    for (std::size_t index=0; index<frr_statistic.size(); index++)
    {
        if(frr_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(threshold_exceeded.yfilter)
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_operation())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_operation())
	|| (route_statistics !=  nullptr && route_statistics->has_operation());
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-summary";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrioritySummary' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (threshold_exceeded.is_set || is_set(threshold_exceeded.yfilter)) leaf_name_data.push_back(threshold_exceeded.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-statistic")
    {
        for(auto const & c : frr_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic>();
        c->parent = this;
        frr_statistic.push_back(c);
        return c;
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

    if(child_yang_name == "route-statistics")
    {
        if(route_statistics == nullptr)
        {
            route_statistics = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics>();
        }
        return route_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : frr_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    if(ip_convergence_time != nullptr)
    {
        children["ip-convergence-time"] = ip_convergence_time;
    }

    if(mpls_convergence_time != nullptr)
    {
        children["mpls-convergence-time"] = mpls_convergence_time;
    }

    if(route_statistics != nullptr)
    {
        children["route-statistics"] = route_statistics;
    }

    return children;
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
    if(name == "frr-statistic" || name == "ip-convergence-time" || name == "mpls-convergence-time" || name == "route-statistics" || name == "level" || name == "threshold-exceeded")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics::RouteStatistics()
    :
    adds{YType::uint32, "adds"},
    deletes{YType::uint32, "deletes"},
    modifies{YType::uint32, "modifies"},
    reachables{YType::uint32, "reachables"},
    touches{YType::uint32, "touches"},
    unreachables{YType::uint32, "unreachables"}
{
    yang_name = "route-statistics"; yang_parent_name = "priority-summary";
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics::~RouteStatistics()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics::has_data() const
{
    return adds.is_set
	|| deletes.is_set
	|| modifies.is_set
	|| reachables.is_set
	|| touches.is_set
	|| unreachables.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adds.yfilter)
	|| ydk::is_set(deletes.yfilter)
	|| ydk::is_set(modifies.yfilter)
	|| ydk::is_set(reachables.yfilter)
	|| ydk::is_set(touches.yfilter)
	|| ydk::is_set(unreachables.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-statistics";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteStatistics' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adds.is_set || is_set(adds.yfilter)) leaf_name_data.push_back(adds.get_name_leafdata());
    if (deletes.is_set || is_set(deletes.yfilter)) leaf_name_data.push_back(deletes.get_name_leafdata());
    if (modifies.is_set || is_set(modifies.yfilter)) leaf_name_data.push_back(modifies.get_name_leafdata());
    if (reachables.is_set || is_set(reachables.yfilter)) leaf_name_data.push_back(reachables.get_name_leafdata());
    if (touches.is_set || is_set(touches.yfilter)) leaf_name_data.push_back(touches.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.yfilter)) leaf_name_data.push_back(unreachables.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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
    if(value_path == "touches")
    {
        touches = value;
        touches.value_namespace = name_space;
        touches.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachables")
    {
        unreachables = value;
        unreachables.value_namespace = name_space;
        unreachables.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "touches")
    {
        touches.yfilter = yfilter;
    }
    if(value_path == "unreachables")
    {
        unreachables.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::RouteStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adds" || name == "deletes" || name == "modifies" || name == "reachables" || name == "touches" || name == "unreachables")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime::IpConvergenceTime()
    :
    fastest_node_name{YType::str, "fastest-node-name"},
    maximum_time{YType::str, "maximum-time"},
    minimum_time{YType::str, "minimum-time"},
    slowest_node_name{YType::str, "slowest-node-name"}
{
    yang_name = "ip-convergence-time"; yang_parent_name = "priority-summary";
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime::~IpConvergenceTime()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime::has_data() const
{
    return fastest_node_name.is_set
	|| maximum_time.is_set
	|| minimum_time.is_set
	|| slowest_node_name.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fastest_node_name.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-convergence-time";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpConvergenceTime' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::IpConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fastest-node-name" || name == "maximum-time" || name == "minimum-time" || name == "slowest-node-name")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime::MplsConvergenceTime()
    :
    fastest_node_name{YType::str, "fastest-node-name"},
    maximum_time{YType::str, "maximum-time"},
    minimum_time{YType::str, "minimum-time"},
    slowest_node_name{YType::str, "slowest-node-name"}
{
    yang_name = "mpls-convergence-time"; yang_parent_name = "priority-summary";
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime::~MplsConvergenceTime()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime::has_data() const
{
    return fastest_node_name.is_set
	|| maximum_time.is_set
	|| minimum_time.is_set
	|| slowest_node_name.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fastest_node_name.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-convergence-time";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsConvergenceTime' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::MplsConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fastest-node-name" || name == "maximum-time" || name == "minimum-time" || name == "slowest-node-name")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic::FrrStatistic()
    :
    coverage{YType::str, "coverage"},
    fully_protected_routes{YType::uint32, "fully-protected-routes"},
    partially_protected_routes{YType::uint32, "partially-protected-routes"},
    total_routes{YType::uint32, "total-routes"}
{
    yang_name = "frr-statistic"; yang_parent_name = "priority-summary";
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic::~FrrStatistic()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic::has_data() const
{
    return coverage.is_set
	|| fully_protected_routes.is_set
	|| partially_protected_routes.is_set
	|| total_routes.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(coverage.yfilter)
	|| ydk::is_set(fully_protected_routes.yfilter)
	|| ydk::is_set(partially_protected_routes.yfilter)
	|| ydk::is_set(total_routes.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-statistic";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrStatistic' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (coverage.is_set || is_set(coverage.yfilter)) leaf_name_data.push_back(coverage.get_name_leafdata());
    if (fully_protected_routes.is_set || is_set(fully_protected_routes.yfilter)) leaf_name_data.push_back(fully_protected_routes.get_name_leafdata());
    if (partially_protected_routes.is_set || is_set(partially_protected_routes.yfilter)) leaf_name_data.push_back(partially_protected_routes.get_name_leafdata());
    if (total_routes.is_set || is_set(total_routes.yfilter)) leaf_name_data.push_back(total_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "coverage")
    {
        coverage = value;
        coverage.value_namespace = name_space;
        coverage.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "total-routes")
    {
        total_routes = value;
        total_routes.value_namespace = name_space;
        total_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "coverage")
    {
        coverage.yfilter = yfilter;
    }
    if(value_path == "fully-protected-routes")
    {
        fully_protected_routes.yfilter = yfilter;
    }
    if(value_path == "partially-protected-routes")
    {
        partially_protected_routes.yfilter = yfilter;
    }
    if(value_path == "total-routes")
    {
        total_routes.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::SpfSummary::PrioritySummary::FrrStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "coverage" || name == "fully-protected-routes" || name == "partially-protected-routes" || name == "total-routes")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::NodeStatistics::NodeStatistics()
    :
    adds{YType::uint32, "adds"},
    deletes{YType::uint32, "deletes"},
    modifies{YType::uint32, "modifies"},
    reachables{YType::uint32, "reachables"},
    touches{YType::uint32, "touches"},
    unreachables{YType::uint32, "unreachables"}
{
    yang_name = "node-statistics"; yang_parent_name = "spf-run-offline";
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::NodeStatistics::~NodeStatistics()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::NodeStatistics::has_data() const
{
    return adds.is_set
	|| deletes.is_set
	|| modifies.is_set
	|| reachables.is_set
	|| touches.is_set
	|| unreachables.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::NodeStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adds.yfilter)
	|| ydk::is_set(deletes.yfilter)
	|| ydk::is_set(modifies.yfilter)
	|| ydk::is_set(reachables.yfilter)
	|| ydk::is_set(touches.yfilter)
	|| ydk::is_set(unreachables.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::NodeStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-statistics";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::NodeStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NodeStatistics' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adds.is_set || is_set(adds.yfilter)) leaf_name_data.push_back(adds.get_name_leafdata());
    if (deletes.is_set || is_set(deletes.yfilter)) leaf_name_data.push_back(deletes.get_name_leafdata());
    if (modifies.is_set || is_set(modifies.yfilter)) leaf_name_data.push_back(modifies.get_name_leafdata());
    if (reachables.is_set || is_set(reachables.yfilter)) leaf_name_data.push_back(reachables.get_name_leafdata());
    if (touches.is_set || is_set(touches.yfilter)) leaf_name_data.push_back(touches.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.yfilter)) leaf_name_data.push_back(unreachables.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::NodeStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::NodeStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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
    if(value_path == "touches")
    {
        touches = value;
        touches.value_namespace = name_space;
        touches.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachables")
    {
        unreachables = value;
        unreachables.value_namespace = name_space;
        unreachables.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "touches")
    {
        touches.yfilter = yfilter;
    }
    if(value_path == "unreachables")
    {
        unreachables.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::NodeStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adds" || name == "deletes" || name == "modifies" || name == "reachables" || name == "touches" || name == "unreachables")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::TriggerLsp::TriggerLsp()
    :
    change_type{YType::enumeration, "change-type"},
    lsp_id{YType::str, "lsp-id"},
    reception_time{YType::str, "reception-time"},
    sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "trigger-lsp"; yang_parent_name = "spf-run-offline";
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::TriggerLsp::~TriggerLsp()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::TriggerLsp::has_data() const
{
    return change_type.is_set
	|| lsp_id.is_set
	|| reception_time.is_set
	|| sequence_number.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::TriggerLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(reception_time.yfilter)
	|| ydk::is_set(sequence_number.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::TriggerLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-lsp";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::TriggerLsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TriggerLsp' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (reception_time.is_set || is_set(reception_time.yfilter)) leaf_name_data.push_back(reception_time.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::TriggerLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::TriggerLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::TriggerLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reception-time")
    {
        reception_time = value;
        reception_time.value_namespace = name_space;
        reception_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::TriggerLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "reception-time")
    {
        reception_time.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::TriggerLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "change-type" || name == "lsp-id" || name == "reception-time" || name == "sequence-number")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::Priority()
    :
    priority_summary(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary>())
{
    priority_summary->parent = this;

    yang_name = "priority"; yang_parent_name = "spf-run-offline";
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::~Priority()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::has_data() const
{
    for (std::size_t index=0; index<convergence_timeline.size(); index++)
    {
        if(convergence_timeline[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<leaf_networks_added.size(); index++)
    {
        if(leaf_networks_added[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<leaf_networks_deleted.size(); index++)
    {
        if(leaf_networks_deleted[index]->has_data())
            return true;
    }
    return (priority_summary !=  nullptr && priority_summary->has_data());
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::has_operation() const
{
    for (std::size_t index=0; index<convergence_timeline.size(); index++)
    {
        if(convergence_timeline[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<leaf_networks_added.size(); index++)
    {
        if(leaf_networks_added[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<leaf_networks_deleted.size(); index++)
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

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priority' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "convergence-timeline")
    {
        for(auto const & c : convergence_timeline)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline>();
        c->parent = this;
        convergence_timeline.push_back(c);
        return c;
    }

    if(child_yang_name == "leaf-networks-added")
    {
        for(auto const & c : leaf_networks_added)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksAdded>();
        c->parent = this;
        leaf_networks_added.push_back(c);
        return c;
    }

    if(child_yang_name == "leaf-networks-deleted")
    {
        for(auto const & c : leaf_networks_deleted)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksDeleted>();
        c->parent = this;
        leaf_networks_deleted.push_back(c);
        return c;
    }

    if(child_yang_name == "priority-summary")
    {
        if(priority_summary == nullptr)
        {
            priority_summary = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary>();
        }
        return priority_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : convergence_timeline)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : leaf_networks_added)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : leaf_networks_deleted)
    {
        children[c->get_segment_path()] = c;
    }

    if(priority_summary != nullptr)
    {
        children["priority-summary"] = priority_summary;
    }

    return children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "convergence-timeline" || name == "leaf-networks-added" || name == "leaf-networks-deleted" || name == "priority-summary")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::PrioritySummary()
    :
    level{YType::enumeration, "level"},
    threshold_exceeded{YType::boolean, "threshold-exceeded"}
    	,
    ip_convergence_time(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::IpConvergenceTime>())
	,mpls_convergence_time(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::MplsConvergenceTime>())
	,route_statistics(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::RouteStatistics>())
{
    ip_convergence_time->parent = this;

    mpls_convergence_time->parent = this;

    route_statistics->parent = this;

    yang_name = "priority-summary"; yang_parent_name = "priority";
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::~PrioritySummary()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::has_data() const
{
    for (std::size_t index=0; index<frr_statistic.size(); index++)
    {
        if(frr_statistic[index]->has_data())
            return true;
    }
    return level.is_set
	|| threshold_exceeded.is_set
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_data())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_data())
	|| (route_statistics !=  nullptr && route_statistics->has_data());
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::has_operation() const
{
    for (std::size_t index=0; index<frr_statistic.size(); index++)
    {
        if(frr_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(threshold_exceeded.yfilter)
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_operation())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_operation())
	|| (route_statistics !=  nullptr && route_statistics->has_operation());
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-summary";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrioritySummary' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (threshold_exceeded.is_set || is_set(threshold_exceeded.yfilter)) leaf_name_data.push_back(threshold_exceeded.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "frr-statistic")
    {
        for(auto const & c : frr_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::FrrStatistic>();
        c->parent = this;
        frr_statistic.push_back(c);
        return c;
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

    if(child_yang_name == "route-statistics")
    {
        if(route_statistics == nullptr)
        {
            route_statistics = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::RouteStatistics>();
        }
        return route_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : frr_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    if(ip_convergence_time != nullptr)
    {
        children["ip-convergence-time"] = ip_convergence_time;
    }

    if(mpls_convergence_time != nullptr)
    {
        children["mpls-convergence-time"] = mpls_convergence_time;
    }

    if(route_statistics != nullptr)
    {
        children["route-statistics"] = route_statistics;
    }

    return children;
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
    if(name == "frr-statistic" || name == "ip-convergence-time" || name == "mpls-convergence-time" || name == "route-statistics" || name == "level" || name == "threshold-exceeded")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::RouteStatistics::RouteStatistics()
    :
    adds{YType::uint32, "adds"},
    deletes{YType::uint32, "deletes"},
    modifies{YType::uint32, "modifies"},
    reachables{YType::uint32, "reachables"},
    touches{YType::uint32, "touches"},
    unreachables{YType::uint32, "unreachables"}
{
    yang_name = "route-statistics"; yang_parent_name = "priority-summary";
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::RouteStatistics::~RouteStatistics()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::RouteStatistics::has_data() const
{
    return adds.is_set
	|| deletes.is_set
	|| modifies.is_set
	|| reachables.is_set
	|| touches.is_set
	|| unreachables.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::RouteStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adds.yfilter)
	|| ydk::is_set(deletes.yfilter)
	|| ydk::is_set(modifies.yfilter)
	|| ydk::is_set(reachables.yfilter)
	|| ydk::is_set(touches.yfilter)
	|| ydk::is_set(unreachables.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::RouteStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-statistics";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::RouteStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteStatistics' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adds.is_set || is_set(adds.yfilter)) leaf_name_data.push_back(adds.get_name_leafdata());
    if (deletes.is_set || is_set(deletes.yfilter)) leaf_name_data.push_back(deletes.get_name_leafdata());
    if (modifies.is_set || is_set(modifies.yfilter)) leaf_name_data.push_back(modifies.get_name_leafdata());
    if (reachables.is_set || is_set(reachables.yfilter)) leaf_name_data.push_back(reachables.get_name_leafdata());
    if (touches.is_set || is_set(touches.yfilter)) leaf_name_data.push_back(touches.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.yfilter)) leaf_name_data.push_back(unreachables.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::RouteStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::RouteStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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
    if(value_path == "touches")
    {
        touches = value;
        touches.value_namespace = name_space;
        touches.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachables")
    {
        unreachables = value;
        unreachables.value_namespace = name_space;
        unreachables.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "touches")
    {
        touches.yfilter = yfilter;
    }
    if(value_path == "unreachables")
    {
        unreachables.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::RouteStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adds" || name == "deletes" || name == "modifies" || name == "reachables" || name == "touches" || name == "unreachables")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::IpConvergenceTime::IpConvergenceTime()
    :
    fastest_node_name{YType::str, "fastest-node-name"},
    maximum_time{YType::str, "maximum-time"},
    minimum_time{YType::str, "minimum-time"},
    slowest_node_name{YType::str, "slowest-node-name"}
{
    yang_name = "ip-convergence-time"; yang_parent_name = "priority-summary";
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::IpConvergenceTime::~IpConvergenceTime()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::IpConvergenceTime::has_data() const
{
    return fastest_node_name.is_set
	|| maximum_time.is_set
	|| minimum_time.is_set
	|| slowest_node_name.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::IpConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fastest_node_name.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::IpConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-convergence-time";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::IpConvergenceTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpConvergenceTime' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::IpConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::IpConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::IpConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::IpConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::IpConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fastest-node-name" || name == "maximum-time" || name == "minimum-time" || name == "slowest-node-name")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::MplsConvergenceTime::MplsConvergenceTime()
    :
    fastest_node_name{YType::str, "fastest-node-name"},
    maximum_time{YType::str, "maximum-time"},
    minimum_time{YType::str, "minimum-time"},
    slowest_node_name{YType::str, "slowest-node-name"}
{
    yang_name = "mpls-convergence-time"; yang_parent_name = "priority-summary";
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::MplsConvergenceTime::~MplsConvergenceTime()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::MplsConvergenceTime::has_data() const
{
    return fastest_node_name.is_set
	|| maximum_time.is_set
	|| minimum_time.is_set
	|| slowest_node_name.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::MplsConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fastest_node_name.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::MplsConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-convergence-time";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::MplsConvergenceTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsConvergenceTime' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::MplsConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::MplsConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::MplsConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::MplsConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::MplsConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fastest-node-name" || name == "maximum-time" || name == "minimum-time" || name == "slowest-node-name")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::FrrStatistic::FrrStatistic()
    :
    coverage{YType::str, "coverage"},
    fully_protected_routes{YType::uint32, "fully-protected-routes"},
    partially_protected_routes{YType::uint32, "partially-protected-routes"},
    total_routes{YType::uint32, "total-routes"}
{
    yang_name = "frr-statistic"; yang_parent_name = "priority-summary";
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::FrrStatistic::~FrrStatistic()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::FrrStatistic::has_data() const
{
    return coverage.is_set
	|| fully_protected_routes.is_set
	|| partially_protected_routes.is_set
	|| total_routes.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::FrrStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(coverage.yfilter)
	|| ydk::is_set(fully_protected_routes.yfilter)
	|| ydk::is_set(partially_protected_routes.yfilter)
	|| ydk::is_set(total_routes.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::FrrStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "frr-statistic";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::FrrStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FrrStatistic' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (coverage.is_set || is_set(coverage.yfilter)) leaf_name_data.push_back(coverage.get_name_leafdata());
    if (fully_protected_routes.is_set || is_set(fully_protected_routes.yfilter)) leaf_name_data.push_back(fully_protected_routes.get_name_leafdata());
    if (partially_protected_routes.is_set || is_set(partially_protected_routes.yfilter)) leaf_name_data.push_back(partially_protected_routes.get_name_leafdata());
    if (total_routes.is_set || is_set(total_routes.yfilter)) leaf_name_data.push_back(total_routes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::FrrStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::FrrStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::FrrStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "coverage")
    {
        coverage = value;
        coverage.value_namespace = name_space;
        coverage.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "total-routes")
    {
        total_routes = value;
        total_routes.value_namespace = name_space;
        total_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::FrrStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "coverage")
    {
        coverage.yfilter = yfilter;
    }
    if(value_path == "fully-protected-routes")
    {
        fully_protected_routes.yfilter = yfilter;
    }
    if(value_path == "partially-protected-routes")
    {
        partially_protected_routes.yfilter = yfilter;
    }
    if(value_path == "total-routes")
    {
        total_routes.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::PrioritySummary::FrrStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "coverage" || name == "fully-protected-routes" || name == "partially-protected-routes" || name == "total-routes")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::ConvergenceTimeline()
    :
    ldp_enter(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpEnter>())
	,ldp_exit(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpExit>())
	,lsd_enter(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdEnter>())
	,lsd_exit(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdExit>())
	,ri_bv4_enter(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Enter>())
	,ri_bv4_exit(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Exit>())
	,ri_bv4_redistribute(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Redistribute>())
	,route_origin(std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RouteOrigin>())
{
    ldp_enter->parent = this;

    ldp_exit->parent = this;

    lsd_enter->parent = this;

    lsd_exit->parent = this;

    ri_bv4_enter->parent = this;

    ri_bv4_exit->parent = this;

    ri_bv4_redistribute->parent = this;

    route_origin->parent = this;

    yang_name = "convergence-timeline"; yang_parent_name = "priority";
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::~ConvergenceTimeline()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::has_data() const
{
    for (std::size_t index=0; index<lc_ip.size(); index++)
    {
        if(lc_ip[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lc_mpls.size(); index++)
    {
        if(lc_mpls[index]->has_data())
            return true;
    }
    return (ldp_enter !=  nullptr && ldp_enter->has_data())
	|| (ldp_exit !=  nullptr && ldp_exit->has_data())
	|| (lsd_enter !=  nullptr && lsd_enter->has_data())
	|| (lsd_exit !=  nullptr && lsd_exit->has_data())
	|| (ri_bv4_enter !=  nullptr && ri_bv4_enter->has_data())
	|| (ri_bv4_exit !=  nullptr && ri_bv4_exit->has_data())
	|| (ri_bv4_redistribute !=  nullptr && ri_bv4_redistribute->has_data())
	|| (route_origin !=  nullptr && route_origin->has_data());
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::has_operation() const
{
    for (std::size_t index=0; index<lc_ip.size(); index++)
    {
        if(lc_ip[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lc_mpls.size(); index++)
    {
        if(lc_mpls[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (ldp_enter !=  nullptr && ldp_enter->has_operation())
	|| (ldp_exit !=  nullptr && ldp_exit->has_operation())
	|| (lsd_enter !=  nullptr && lsd_enter->has_operation())
	|| (lsd_exit !=  nullptr && lsd_exit->has_operation())
	|| (ri_bv4_enter !=  nullptr && ri_bv4_enter->has_operation())
	|| (ri_bv4_exit !=  nullptr && ri_bv4_exit->has_operation())
	|| (ri_bv4_redistribute !=  nullptr && ri_bv4_redistribute->has_operation())
	|| (route_origin !=  nullptr && route_origin->has_operation());
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "convergence-timeline";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConvergenceTimeline' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lc-ip")
    {
        for(auto const & c : lc_ip)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp>();
        c->parent = this;
        lc_ip.push_back(c);
        return c;
    }

    if(child_yang_name == "lc-mpls")
    {
        for(auto const & c : lc_mpls)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls>();
        c->parent = this;
        lc_mpls.push_back(c);
        return c;
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

    if(child_yang_name == "route-origin")
    {
        if(route_origin == nullptr)
        {
            route_origin = std::make_shared<Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RouteOrigin>();
        }
        return route_origin;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lc_ip)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : lc_mpls)
    {
        children[c->get_segment_path()] = c;
    }

    if(ldp_enter != nullptr)
    {
        children["ldp-enter"] = ldp_enter;
    }

    if(ldp_exit != nullptr)
    {
        children["ldp-exit"] = ldp_exit;
    }

    if(lsd_enter != nullptr)
    {
        children["lsd-enter"] = lsd_enter;
    }

    if(lsd_exit != nullptr)
    {
        children["lsd-exit"] = lsd_exit;
    }

    if(ri_bv4_enter != nullptr)
    {
        children["ri-bv4-enter"] = ri_bv4_enter;
    }

    if(ri_bv4_exit != nullptr)
    {
        children["ri-bv4-exit"] = ri_bv4_exit;
    }

    if(ri_bv4_redistribute != nullptr)
    {
        children["ri-bv4-redistribute"] = ri_bv4_redistribute;
    }

    if(route_origin != nullptr)
    {
        children["route-origin"] = route_origin;
    }

    return children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lc-ip" || name == "lc-mpls" || name == "ldp-enter" || name == "ldp-exit" || name == "lsd-enter" || name == "lsd-exit" || name == "ri-bv4-enter" || name == "ri-bv4-exit" || name == "ri-bv4-redistribute" || name == "route-origin")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RouteOrigin::RouteOrigin()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "route-origin"; yang_parent_name = "convergence-timeline";
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RouteOrigin::~RouteOrigin()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RouteOrigin::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RouteOrigin::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RouteOrigin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-origin";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RouteOrigin::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteOrigin' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RouteOrigin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RouteOrigin::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RouteOrigin::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RouteOrigin::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RouteOrigin::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Enter::RiBv4Enter()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "ri-bv4-enter"; yang_parent_name = "convergence-timeline";
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Enter::~RiBv4Enter()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Enter::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Enter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Enter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ri-bv4-enter";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Enter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RiBv4Enter' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Enter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Enter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Enter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Enter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Enter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Exit::RiBv4Exit()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "ri-bv4-exit"; yang_parent_name = "convergence-timeline";
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Exit::~RiBv4Exit()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Exit::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Exit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Exit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ri-bv4-exit";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Exit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RiBv4Exit' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Exit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Exit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Exit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Exit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Exit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Redistribute::RiBv4Redistribute()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "ri-bv4-redistribute"; yang_parent_name = "convergence-timeline";
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Redistribute::~RiBv4Redistribute()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Redistribute::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Redistribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ri-bv4-redistribute";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Redistribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RiBv4Redistribute' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Redistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Redistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::RiBv4Redistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpEnter::LdpEnter()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "ldp-enter"; yang_parent_name = "convergence-timeline";
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpEnter::~LdpEnter()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpEnter::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpEnter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpEnter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-enter";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpEnter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LdpEnter' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpEnter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpEnter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpEnter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpEnter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpEnter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpExit::LdpExit()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "ldp-exit"; yang_parent_name = "convergence-timeline";
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpExit::~LdpExit()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpExit::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpExit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpExit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-exit";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpExit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LdpExit' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpExit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpExit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpExit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpExit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LdpExit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdEnter::LsdEnter()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "lsd-enter"; yang_parent_name = "convergence-timeline";
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdEnter::~LsdEnter()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdEnter::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdEnter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdEnter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsd-enter";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdEnter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsdEnter' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdEnter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdEnter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdEnter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdEnter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdEnter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdExit::LsdExit()
    :
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "lsd-exit"; yang_parent_name = "convergence-timeline";
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdExit::~LsdExit()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdExit::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdExit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdExit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsd-exit";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdExit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsdExit' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdExit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdExit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdExit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdExit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LsdExit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
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

    yang_name = "lc-ip"; yang_parent_name = "convergence-timeline";
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::~LcIp()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::has_data() const
{
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

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LcIp' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fib_complete != nullptr)
    {
        children["fib-complete"] = fib_complete;
    }

    return children;
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
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "fib-complete"; yang_parent_name = "lc-ip";
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::FibComplete::~FibComplete()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::FibComplete::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::FibComplete::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::FibComplete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-complete";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::FibComplete::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FibComplete' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::FibComplete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::FibComplete::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::FibComplete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::FibComplete::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcIp::FibComplete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
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

    yang_name = "lc-mpls"; yang_parent_name = "convergence-timeline";
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::~LcMpls()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::has_data() const
{
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

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LcMpls' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fib_complete != nullptr)
    {
        children["fib-complete"] = fib_complete;
    }

    return children;
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
    duration{YType::str, "duration"},
    end_time{YType::str, "end-time"},
    start_time{YType::str, "start-time"}
{
    yang_name = "fib-complete"; yang_parent_name = "lc-mpls";
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::FibComplete::~FibComplete()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::FibComplete::has_data() const
{
    return duration.is_set
	|| end_time.is_set
	|| start_time.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::FibComplete::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(end_time.yfilter)
	|| ydk::is_set(start_time.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::FibComplete::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fib-complete";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::FibComplete::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FibComplete' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (end_time.is_set || is_set(end_time.yfilter)) leaf_name_data.push_back(end_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::FibComplete::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::FibComplete::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::FibComplete::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-time")
    {
        end_time = value;
        end_time.value_namespace = name_space;
        end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::FibComplete::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "end-time")
    {
        end_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::ConvergenceTimeline::LcMpls::FibComplete::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "duration" || name == "end-time" || name == "start-time")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksAdded::LeafNetworksAdded()
    :
    address{YType::str, "address"},
    net_mask{YType::uint8, "net-mask"}
{
    yang_name = "leaf-networks-added"; yang_parent_name = "priority";
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksAdded::~LeafNetworksAdded()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksAdded::has_data() const
{
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

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksAdded::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LeafNetworksAdded' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (net_mask.is_set || is_set(net_mask.yfilter)) leaf_name_data.push_back(net_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksAdded::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksAdded::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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
    yang_name = "leaf-networks-deleted"; yang_parent_name = "priority";
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksDeleted::~LeafNetworksDeleted()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksDeleted::has_data() const
{
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

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksDeleted::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LeafNetworksDeleted' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (net_mask.is_set || is_set(net_mask.yfilter)) leaf_name_data.push_back(net_mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksDeleted::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::Priority::LeafNetworksDeleted::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
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
    change_type{YType::enumeration, "change-type"},
    lsp_id{YType::str, "lsp-id"},
    reception_time{YType::str, "reception-time"},
    sequence_number{YType::uint32, "sequence-number"}
{
    yang_name = "lsp-processed"; yang_parent_name = "spf-run-offline";
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspProcessed::~LspProcessed()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspProcessed::has_data() const
{
    return change_type.is_set
	|| lsp_id.is_set
	|| reception_time.is_set
	|| sequence_number.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspProcessed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(reception_time.yfilter)
	|| ydk::is_set(sequence_number.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspProcessed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-processed";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspProcessed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspProcessed' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (reception_time.is_set || is_set(reception_time.yfilter)) leaf_name_data.push_back(reception_time.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspProcessed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspProcessed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspProcessed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reception-time")
    {
        reception_time = value;
        reception_time.value_namespace = name_space;
        reception_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspProcessed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "reception-time")
    {
        reception_time.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspProcessed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "change-type" || name == "lsp-id" || name == "reception-time" || name == "sequence-number")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspRegenerated::LspRegenerated()
    :
    isis_level{YType::enumeration, "isis-level"},
    lsp_id{YType::str, "lsp-id"},
    reason{YType::str, "reason"},
    reception_time{YType::str, "reception-time"},
    sequence_number{YType::uint32, "sequence-number"},
    serial_number_xr{YType::uint32, "serial-number-xr"},
    spf_run_number{YType::uint32, "spf-run-number"}
{
    yang_name = "lsp-regenerated"; yang_parent_name = "spf-run-offline";
}

Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspRegenerated::~LspRegenerated()
{
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspRegenerated::has_data() const
{
    return isis_level.is_set
	|| lsp_id.is_set
	|| reason.is_set
	|| reception_time.is_set
	|| sequence_number.is_set
	|| serial_number_xr.is_set
	|| spf_run_number.is_set;
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspRegenerated::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(isis_level.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(reception_time.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(serial_number_xr.yfilter)
	|| ydk::is_set(spf_run_number.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspRegenerated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-regenerated";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspRegenerated::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspRegenerated' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_level.is_set || is_set(isis_level.yfilter)) leaf_name_data.push_back(isis_level.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (reception_time.is_set || is_set(reception_time.yfilter)) leaf_name_data.push_back(reception_time.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (serial_number_xr.is_set || is_set(serial_number_xr.yfilter)) leaf_name_data.push_back(serial_number_xr.get_name_leafdata());
    if (spf_run_number.is_set || is_set(spf_run_number.yfilter)) leaf_name_data.push_back(spf_run_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspRegenerated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspRegenerated::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspRegenerated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isis-level")
    {
        isis_level = value;
        isis_level.value_namespace = name_space;
        isis_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reception-time")
    {
        reception_time = value;
        reception_time.value_namespace = name_space;
        reception_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number-xr")
    {
        serial_number_xr = value;
        serial_number_xr.value_namespace = name_space;
        serial_number_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-run-number")
    {
        spf_run_number = value;
        spf_run_number.value_namespace = name_space;
        spf_run_number.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspRegenerated::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isis-level")
    {
        isis_level.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "reception-time")
    {
        reception_time.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "serial-number-xr")
    {
        serial_number_xr.yfilter = yfilter;
    }
    if(value_path == "spf-run-number")
    {
        spf_run_number.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::SpfRunOfflines::SpfRunOffline::LspRegenerated::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-level" || name == "lsp-id" || name == "reason" || name == "reception-time" || name == "sequence-number" || name == "serial-number-xr" || name == "spf-run-number")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummaries()
{
    yang_name = "prefix-event-summaries"; yang_parent_name = "instance";
}

Rcmd::Isis::Instances::Instance::PrefixEventSummaries::~PrefixEventSummaries()
{
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::has_data() const
{
    for (std::size_t index=0; index<prefix_event_summary.size(); index++)
    {
        if(prefix_event_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::has_operation() const
{
    for (std::size_t index=0; index<prefix_event_summary.size(); index++)
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

const EntityPath Rcmd::Isis::Instances::Instance::PrefixEventSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixEventSummaries' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::PrefixEventSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-event-summary")
    {
        for(auto const & c : prefix_event_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary>();
        c->parent = this;
        prefix_event_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::PrefixEventSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prefix_event_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
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
    event_id{YType::int32, "event-id"},
    change_type{YType::enumeration, "change-type"},
    cost{YType::uint32, "cost"},
    ipfrr_event_id{YType::uint32, "ipfrr-event-id"},
    prefix{YType::str, "prefix"},
    prefix_lenth{YType::uint32, "prefix-lenth"},
    priority{YType::enumeration, "priority"},
    route_path_change_type{YType::enumeration, "route-path-change-type"},
    route_type{YType::enumeration, "route-type"},
    spf_run_no{YType::uint32, "spf-run-no"},
    threshold_exceeded{YType::boolean, "threshold-exceeded"},
    trigger_time{YType::str, "trigger-time"}
    	,
    ip_convergence_time(std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime>())
	,mpls_convergence_time(std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime>())
{
    ip_convergence_time->parent = this;

    mpls_convergence_time->parent = this;

    yang_name = "prefix-event-summary"; yang_parent_name = "prefix-event-summaries";
}

Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::~PrefixEventSummary()
{
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::has_data() const
{
    for (std::size_t index=0; index<lsa_processed.size(); index++)
    {
        if(lsa_processed[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<time_line.size(); index++)
    {
        if(time_line[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<trigger_lsa.size(); index++)
    {
        if(trigger_lsa[index]->has_data())
            return true;
    }
    return event_id.is_set
	|| change_type.is_set
	|| cost.is_set
	|| ipfrr_event_id.is_set
	|| prefix.is_set
	|| prefix_lenth.is_set
	|| priority.is_set
	|| route_path_change_type.is_set
	|| route_type.is_set
	|| spf_run_no.is_set
	|| threshold_exceeded.is_set
	|| trigger_time.is_set
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_data())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_data());
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::has_operation() const
{
    for (std::size_t index=0; index<lsa_processed.size(); index++)
    {
        if(lsa_processed[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<time_line.size(); index++)
    {
        if(time_line[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<trigger_lsa.size(); index++)
    {
        if(trigger_lsa[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(event_id.yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(ipfrr_event_id.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_lenth.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(route_path_change_type.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(spf_run_no.yfilter)
	|| ydk::is_set(threshold_exceeded.yfilter)
	|| ydk::is_set(trigger_time.yfilter)
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_operation())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_operation());
}

std::string Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-event-summary" <<"[event-id='" <<event_id <<"']";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixEventSummary' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_id.is_set || is_set(event_id.yfilter)) leaf_name_data.push_back(event_id.get_name_leafdata());
    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (ipfrr_event_id.is_set || is_set(ipfrr_event_id.yfilter)) leaf_name_data.push_back(ipfrr_event_id.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_lenth.is_set || is_set(prefix_lenth.yfilter)) leaf_name_data.push_back(prefix_lenth.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (route_path_change_type.is_set || is_set(route_path_change_type.yfilter)) leaf_name_data.push_back(route_path_change_type.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (spf_run_no.is_set || is_set(spf_run_no.yfilter)) leaf_name_data.push_back(spf_run_no.get_name_leafdata());
    if (threshold_exceeded.is_set || is_set(threshold_exceeded.yfilter)) leaf_name_data.push_back(threshold_exceeded.get_name_leafdata());
    if (trigger_time.is_set || is_set(trigger_time.yfilter)) leaf_name_data.push_back(trigger_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-convergence-time")
    {
        if(ip_convergence_time == nullptr)
        {
            ip_convergence_time = std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime>();
        }
        return ip_convergence_time;
    }

    if(child_yang_name == "lsa-processed")
    {
        for(auto const & c : lsa_processed)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed>();
        c->parent = this;
        lsa_processed.push_back(c);
        return c;
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
        for(auto const & c : path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path>();
        c->parent = this;
        path.push_back(c);
        return c;
    }

    if(child_yang_name == "time-line")
    {
        for(auto const & c : time_line)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine>();
        c->parent = this;
        time_line.push_back(c);
        return c;
    }

    if(child_yang_name == "trigger-lsa")
    {
        for(auto const & c : trigger_lsa)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa>();
        c->parent = this;
        trigger_lsa.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_convergence_time != nullptr)
    {
        children["ip-convergence-time"] = ip_convergence_time;
    }

    for (auto const & c : lsa_processed)
    {
        children[c->get_segment_path()] = c;
    }

    if(mpls_convergence_time != nullptr)
    {
        children["mpls-convergence-time"] = mpls_convergence_time;
    }

    for (auto const & c : path)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : time_line)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : trigger_lsa)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-id")
    {
        event_id = value;
        event_id.value_namespace = name_space;
        event_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipfrr-event-id")
    {
        ipfrr_event_id = value;
        ipfrr_event_id.value_namespace = name_space;
        ipfrr_event_id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-change-type")
    {
        route_path_change_type = value;
        route_path_change_type.value_namespace = name_space;
        route_path_change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-run-no")
    {
        spf_run_no = value;
        spf_run_no.value_namespace = name_space;
        spf_run_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded = value;
        threshold_exceeded.value_namespace = name_space;
        threshold_exceeded.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "ipfrr-event-id")
    {
        ipfrr_event_id.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-lenth")
    {
        prefix_lenth.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "route-path-change-type")
    {
        route_path_change_type.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "spf-run-no")
    {
        spf_run_no.yfilter = yfilter;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded.yfilter = yfilter;
    }
    if(value_path == "trigger-time")
    {
        trigger_time.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-convergence-time" || name == "lsa-processed" || name == "mpls-convergence-time" || name == "path" || name == "time-line" || name == "trigger-lsa" || name == "event-id" || name == "change-type" || name == "cost" || name == "ipfrr-event-id" || name == "prefix" || name == "prefix-lenth" || name == "priority" || name == "route-path-change-type" || name == "route-type" || name == "spf-run-no" || name == "threshold-exceeded" || name == "trigger-time")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime::IpConvergenceTime()
    :
    fastest_node_name{YType::str, "fastest-node-name"},
    maximum_time{YType::str, "maximum-time"},
    minimum_time{YType::str, "minimum-time"},
    slowest_node_name{YType::str, "slowest-node-name"}
{
    yang_name = "ip-convergence-time"; yang_parent_name = "prefix-event-summary";
}

Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime::~IpConvergenceTime()
{
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime::has_data() const
{
    return fastest_node_name.is_set
	|| maximum_time.is_set
	|| minimum_time.is_set
	|| slowest_node_name.is_set;
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fastest_node_name.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-convergence-time";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpConvergenceTime' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::IpConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fastest-node-name" || name == "maximum-time" || name == "minimum-time" || name == "slowest-node-name")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime::MplsConvergenceTime()
    :
    fastest_node_name{YType::str, "fastest-node-name"},
    maximum_time{YType::str, "maximum-time"},
    minimum_time{YType::str, "minimum-time"},
    slowest_node_name{YType::str, "slowest-node-name"}
{
    yang_name = "mpls-convergence-time"; yang_parent_name = "prefix-event-summary";
}

Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime::~MplsConvergenceTime()
{
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime::has_data() const
{
    return fastest_node_name.is_set
	|| maximum_time.is_set
	|| minimum_time.is_set
	|| slowest_node_name.is_set;
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fastest_node_name.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-convergence-time";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsConvergenceTime' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::MplsConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fastest-node-name" || name == "maximum-time" || name == "minimum-time" || name == "slowest-node-name")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::Path()
    :
    change_type{YType::enumeration, "change-type"},
    interface_name{YType::str, "interface-name"},
    neighbour_address{YType::str, "neighbour-address"},
    path_metric{YType::uint32, "path-metric"}
{
    yang_name = "path"; yang_parent_name = "prefix-event-summary";
}

Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::~Path()
{
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::has_data() const
{
    for (std::size_t index=0; index<lfa_path.size(); index++)
    {
        if(lfa_path[index]->has_data())
            return true;
    }
    return change_type.is_set
	|| interface_name.is_set
	|| neighbour_address.is_set
	|| path_metric.is_set;
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::has_operation() const
{
    for (std::size_t index=0; index<lfa_path.size(); index++)
    {
        if(lfa_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbour_address.yfilter)
	|| ydk::is_set(path_metric.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Path' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbour_address.is_set || is_set(neighbour_address.yfilter)) leaf_name_data.push_back(neighbour_address.get_name_leafdata());
    if (path_metric.is_set || is_set(path_metric.yfilter)) leaf_name_data.push_back(path_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lfa-path")
    {
        for(auto const & c : lfa_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath>();
        c->parent = this;
        lfa_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lfa_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "path-metric")
    {
        path_metric = value;
        path_metric.value_namespace = name_space;
        path_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address.yfilter = yfilter;
    }
    if(value_path == "path-metric")
    {
        path_metric.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lfa-path" || name == "change-type" || name == "interface-name" || name == "neighbour-address" || name == "path-metric")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath::LfaPath()
    :
    change_type{YType::enumeration, "change-type"},
    interface_name{YType::str, "interface-name"},
    lfa_type{YType::enumeration, "lfa-type"},
    neighbour_address{YType::str, "neighbour-address"},
    path_metric{YType::uint32, "path-metric"},
    remote_node_id{YType::str, "remote-node-id"}
{
    yang_name = "lfa-path"; yang_parent_name = "path";
}

Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath::~LfaPath()
{
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath::has_data() const
{
    return change_type.is_set
	|| interface_name.is_set
	|| lfa_type.is_set
	|| neighbour_address.is_set
	|| path_metric.is_set
	|| remote_node_id.is_set;
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(lfa_type.yfilter)
	|| ydk::is_set(neighbour_address.yfilter)
	|| ydk::is_set(path_metric.yfilter)
	|| ydk::is_set(remote_node_id.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lfa-path";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LfaPath' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (lfa_type.is_set || is_set(lfa_type.yfilter)) leaf_name_data.push_back(lfa_type.get_name_leafdata());
    if (neighbour_address.is_set || is_set(neighbour_address.yfilter)) leaf_name_data.push_back(neighbour_address.get_name_leafdata());
    if (path_metric.is_set || is_set(path_metric.yfilter)) leaf_name_data.push_back(path_metric.get_name_leafdata());
    if (remote_node_id.is_set || is_set(remote_node_id.yfilter)) leaf_name_data.push_back(remote_node_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::Path::LfaPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lfa-type")
    {
        lfa_type = value;
        lfa_type.value_namespace = name_space;
        lfa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address = value;
        neighbour_address.value_namespace = name_space;
        neighbour_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "lfa-type")
    {
        lfa_type.yfilter = yfilter;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address.yfilter = yfilter;
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
    if(name == "change-type" || name == "interface-name" || name == "lfa-type" || name == "neighbour-address" || name == "path-metric" || name == "remote-node-id")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa::TriggerLsa()
    :
    change_type{YType::enumeration, "change-type"},
    lsa_id{YType::str, "lsa-id"},
    lsa_type{YType::enumeration, "lsa-type"},
    origin_router_id{YType::str, "origin-router-id"},
    reception_time{YType::str, "reception-time"},
    sequence_number{YType::str, "sequence-number"}
{
    yang_name = "trigger-lsa"; yang_parent_name = "prefix-event-summary";
}

Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa::~TriggerLsa()
{
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa::has_data() const
{
    return change_type.is_set
	|| lsa_id.is_set
	|| lsa_type.is_set
	|| origin_router_id.is_set
	|| reception_time.is_set
	|| sequence_number.is_set;
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(origin_router_id.yfilter)
	|| ydk::is_set(reception_time.yfilter)
	|| ydk::is_set(sequence_number.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-lsa";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TriggerLsa' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (origin_router_id.is_set || is_set(origin_router_id.yfilter)) leaf_name_data.push_back(origin_router_id.get_name_leafdata());
    if (reception_time.is_set || is_set(reception_time.yfilter)) leaf_name_data.push_back(reception_time.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "reception-time")
    {
        reception_time = value;
        reception_time.value_namespace = name_space;
        reception_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "origin-router-id")
    {
        origin_router_id.yfilter = yfilter;
    }
    if(value_path == "reception-time")
    {
        reception_time.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TriggerLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "change-type" || name == "lsa-id" || name == "lsa-type" || name == "origin-router-id" || name == "reception-time" || name == "sequence-number")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::TimeLine()
    :
    ldp_enter{YType::str, "ldp-enter"},
    ldp_exit{YType::str, "ldp-exit"},
    lsd_enter{YType::str, "lsd-enter"},
    lsd_exit{YType::str, "lsd-exit"},
    ri_bv4_enter{YType::str, "ri-bv4-enter"},
    ri_bv4_exit{YType::str, "ri-bv4-exit"},
    ri_bv4_redistribute{YType::str, "ri-bv4-redistribute"},
    route_origin{YType::str, "route-origin"}
{
    yang_name = "time-line"; yang_parent_name = "prefix-event-summary";
}

Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::~TimeLine()
{
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::has_data() const
{
    for (std::size_t index=0; index<lc_ip.size(); index++)
    {
        if(lc_ip[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lc_mpls.size(); index++)
    {
        if(lc_mpls[index]->has_data())
            return true;
    }
    return ldp_enter.is_set
	|| ldp_exit.is_set
	|| lsd_enter.is_set
	|| lsd_exit.is_set
	|| ri_bv4_enter.is_set
	|| ri_bv4_exit.is_set
	|| ri_bv4_redistribute.is_set
	|| route_origin.is_set;
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::has_operation() const
{
    for (std::size_t index=0; index<lc_ip.size(); index++)
    {
        if(lc_ip[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lc_mpls.size(); index++)
    {
        if(lc_mpls[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ldp_enter.yfilter)
	|| ydk::is_set(ldp_exit.yfilter)
	|| ydk::is_set(lsd_enter.yfilter)
	|| ydk::is_set(lsd_exit.yfilter)
	|| ydk::is_set(ri_bv4_enter.yfilter)
	|| ydk::is_set(ri_bv4_exit.yfilter)
	|| ydk::is_set(ri_bv4_redistribute.yfilter)
	|| ydk::is_set(route_origin.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time-line";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TimeLine' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ldp_enter.is_set || is_set(ldp_enter.yfilter)) leaf_name_data.push_back(ldp_enter.get_name_leafdata());
    if (ldp_exit.is_set || is_set(ldp_exit.yfilter)) leaf_name_data.push_back(ldp_exit.get_name_leafdata());
    if (lsd_enter.is_set || is_set(lsd_enter.yfilter)) leaf_name_data.push_back(lsd_enter.get_name_leafdata());
    if (lsd_exit.is_set || is_set(lsd_exit.yfilter)) leaf_name_data.push_back(lsd_exit.get_name_leafdata());
    if (ri_bv4_enter.is_set || is_set(ri_bv4_enter.yfilter)) leaf_name_data.push_back(ri_bv4_enter.get_name_leafdata());
    if (ri_bv4_exit.is_set || is_set(ri_bv4_exit.yfilter)) leaf_name_data.push_back(ri_bv4_exit.get_name_leafdata());
    if (ri_bv4_redistribute.is_set || is_set(ri_bv4_redistribute.yfilter)) leaf_name_data.push_back(ri_bv4_redistribute.get_name_leafdata());
    if (route_origin.is_set || is_set(route_origin.yfilter)) leaf_name_data.push_back(route_origin.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lc-ip")
    {
        for(auto const & c : lc_ip)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp>();
        c->parent = this;
        lc_ip.push_back(c);
        return c;
    }

    if(child_yang_name == "lc-mpls")
    {
        for(auto const & c : lc_mpls)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls>();
        c->parent = this;
        lc_mpls.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lc_ip)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : lc_mpls)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "route-origin")
    {
        route_origin = value;
        route_origin.value_namespace = name_space;
        route_origin.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "route-origin")
    {
        route_origin.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lc-ip" || name == "lc-mpls" || name == "ldp-enter" || name == "ldp-exit" || name == "lsd-enter" || name == "lsd-exit" || name == "ri-bv4-enter" || name == "ri-bv4-exit" || name == "ri-bv4-redistribute" || name == "route-origin")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp::LcIp()
    :
    fib_complete{YType::str, "fib-complete"},
    node_name{YType::str, "node-name"},
    speed{YType::enumeration, "speed"}
{
    yang_name = "lc-ip"; yang_parent_name = "time-line";
}

Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp::~LcIp()
{
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp::has_data() const
{
    return fib_complete.is_set
	|| node_name.is_set
	|| speed.is_set;
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fib_complete.yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(speed.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lc-ip";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LcIp' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fib_complete.is_set || is_set(fib_complete.yfilter)) leaf_name_data.push_back(fib_complete.get_name_leafdata());
    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fib-complete")
    {
        fib_complete = value;
        fib_complete.value_namespace = name_space;
        fib_complete.value_namespace_prefix = name_space_prefix;
    }
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

void Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fib-complete")
    {
        fib_complete.yfilter = yfilter;
    }
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcIp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fib-complete" || name == "node-name" || name == "speed")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls::LcMpls()
    :
    fib_complete{YType::str, "fib-complete"},
    node_name{YType::str, "node-name"},
    speed{YType::enumeration, "speed"}
{
    yang_name = "lc-mpls"; yang_parent_name = "time-line";
}

Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls::~LcMpls()
{
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls::has_data() const
{
    return fib_complete.is_set
	|| node_name.is_set
	|| speed.is_set;
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fib_complete.yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(speed.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lc-mpls";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LcMpls' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fib_complete.is_set || is_set(fib_complete.yfilter)) leaf_name_data.push_back(fib_complete.get_name_leafdata());
    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fib-complete")
    {
        fib_complete = value;
        fib_complete.value_namespace = name_space;
        fib_complete.value_namespace_prefix = name_space_prefix;
    }
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

void Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fib-complete")
    {
        fib_complete.yfilter = yfilter;
    }
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::TimeLine::LcMpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fib-complete" || name == "node-name" || name == "speed")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed::LsaProcessed()
    :
    change_type{YType::enumeration, "change-type"},
    lsa_id{YType::str, "lsa-id"},
    lsa_type{YType::enumeration, "lsa-type"},
    origin_router_id{YType::str, "origin-router-id"},
    reception_time{YType::str, "reception-time"},
    sequence_number{YType::str, "sequence-number"}
{
    yang_name = "lsa-processed"; yang_parent_name = "prefix-event-summary";
}

Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed::~LsaProcessed()
{
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed::has_data() const
{
    return change_type.is_set
	|| lsa_id.is_set
	|| lsa_type.is_set
	|| origin_router_id.is_set
	|| reception_time.is_set
	|| sequence_number.is_set;
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(origin_router_id.yfilter)
	|| ydk::is_set(reception_time.yfilter)
	|| ydk::is_set(sequence_number.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-processed";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaProcessed' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (origin_router_id.is_set || is_set(origin_router_id.yfilter)) leaf_name_data.push_back(origin_router_id.get_name_leafdata());
    if (reception_time.is_set || is_set(reception_time.yfilter)) leaf_name_data.push_back(reception_time.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "reception-time")
    {
        reception_time = value;
        reception_time.value_namespace = name_space;
        reception_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "origin-router-id")
    {
        origin_router_id.yfilter = yfilter;
    }
    if(value_path == "reception-time")
    {
        reception_time.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::PrefixEventSummaries::PrefixEventSummary::LsaProcessed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "change-type" || name == "lsa-id" || name == "lsa-type" || name == "origin-router-id" || name == "reception-time" || name == "sequence-number")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOfflines()
{
    yang_name = "prefix-event-offlines"; yang_parent_name = "instance";
}

Rcmd::Isis::Instances::Instance::PrefixEventOfflines::~PrefixEventOfflines()
{
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::has_data() const
{
    for (std::size_t index=0; index<prefix_event_offline.size(); index++)
    {
        if(prefix_event_offline[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::has_operation() const
{
    for (std::size_t index=0; index<prefix_event_offline.size(); index++)
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

const EntityPath Rcmd::Isis::Instances::Instance::PrefixEventOfflines::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixEventOfflines' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::PrefixEventOfflines::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-event-offline")
    {
        for(auto const & c : prefix_event_offline)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline>();
        c->parent = this;
        prefix_event_offline.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::PrefixEventOfflines::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prefix_event_offline)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
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
    event_id{YType::int32, "event-id"},
    change_type{YType::enumeration, "change-type"},
    cost{YType::uint32, "cost"},
    ipfrr_event_id{YType::uint32, "ipfrr-event-id"},
    prefix{YType::str, "prefix"},
    prefix_lenth{YType::uint32, "prefix-lenth"},
    priority{YType::enumeration, "priority"},
    route_path_change_type{YType::enumeration, "route-path-change-type"},
    route_type{YType::enumeration, "route-type"},
    spf_run_no{YType::uint32, "spf-run-no"},
    threshold_exceeded{YType::boolean, "threshold-exceeded"},
    trigger_time{YType::str, "trigger-time"}
    	,
    ip_convergence_time(std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime>())
	,mpls_convergence_time(std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime>())
{
    ip_convergence_time->parent = this;

    mpls_convergence_time->parent = this;

    yang_name = "prefix-event-offline"; yang_parent_name = "prefix-event-offlines";
}

Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::~PrefixEventOffline()
{
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::has_data() const
{
    for (std::size_t index=0; index<lsa_processed.size(); index++)
    {
        if(lsa_processed[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<time_line.size(); index++)
    {
        if(time_line[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<trigger_lsa.size(); index++)
    {
        if(trigger_lsa[index]->has_data())
            return true;
    }
    return event_id.is_set
	|| change_type.is_set
	|| cost.is_set
	|| ipfrr_event_id.is_set
	|| prefix.is_set
	|| prefix_lenth.is_set
	|| priority.is_set
	|| route_path_change_type.is_set
	|| route_type.is_set
	|| spf_run_no.is_set
	|| threshold_exceeded.is_set
	|| trigger_time.is_set
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_data())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_data());
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::has_operation() const
{
    for (std::size_t index=0; index<lsa_processed.size(); index++)
    {
        if(lsa_processed[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<path.size(); index++)
    {
        if(path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<time_line.size(); index++)
    {
        if(time_line[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<trigger_lsa.size(); index++)
    {
        if(trigger_lsa[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(event_id.yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(cost.yfilter)
	|| ydk::is_set(ipfrr_event_id.yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(prefix_lenth.yfilter)
	|| ydk::is_set(priority.yfilter)
	|| ydk::is_set(route_path_change_type.yfilter)
	|| ydk::is_set(route_type.yfilter)
	|| ydk::is_set(spf_run_no.yfilter)
	|| ydk::is_set(threshold_exceeded.yfilter)
	|| ydk::is_set(trigger_time.yfilter)
	|| (ip_convergence_time !=  nullptr && ip_convergence_time->has_operation())
	|| (mpls_convergence_time !=  nullptr && mpls_convergence_time->has_operation());
}

std::string Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-event-offline" <<"[event-id='" <<event_id <<"']";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixEventOffline' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_id.is_set || is_set(event_id.yfilter)) leaf_name_data.push_back(event_id.get_name_leafdata());
    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (cost.is_set || is_set(cost.yfilter)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (ipfrr_event_id.is_set || is_set(ipfrr_event_id.yfilter)) leaf_name_data.push_back(ipfrr_event_id.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_lenth.is_set || is_set(prefix_lenth.yfilter)) leaf_name_data.push_back(prefix_lenth.get_name_leafdata());
    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (route_path_change_type.is_set || is_set(route_path_change_type.yfilter)) leaf_name_data.push_back(route_path_change_type.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.yfilter)) leaf_name_data.push_back(route_type.get_name_leafdata());
    if (spf_run_no.is_set || is_set(spf_run_no.yfilter)) leaf_name_data.push_back(spf_run_no.get_name_leafdata());
    if (threshold_exceeded.is_set || is_set(threshold_exceeded.yfilter)) leaf_name_data.push_back(threshold_exceeded.get_name_leafdata());
    if (trigger_time.is_set || is_set(trigger_time.yfilter)) leaf_name_data.push_back(trigger_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-convergence-time")
    {
        if(ip_convergence_time == nullptr)
        {
            ip_convergence_time = std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime>();
        }
        return ip_convergence_time;
    }

    if(child_yang_name == "lsa-processed")
    {
        for(auto const & c : lsa_processed)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed>();
        c->parent = this;
        lsa_processed.push_back(c);
        return c;
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
        for(auto const & c : path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path>();
        c->parent = this;
        path.push_back(c);
        return c;
    }

    if(child_yang_name == "time-line")
    {
        for(auto const & c : time_line)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine>();
        c->parent = this;
        time_line.push_back(c);
        return c;
    }

    if(child_yang_name == "trigger-lsa")
    {
        for(auto const & c : trigger_lsa)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa>();
        c->parent = this;
        trigger_lsa.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_convergence_time != nullptr)
    {
        children["ip-convergence-time"] = ip_convergence_time;
    }

    for (auto const & c : lsa_processed)
    {
        children[c->get_segment_path()] = c;
    }

    if(mpls_convergence_time != nullptr)
    {
        children["mpls-convergence-time"] = mpls_convergence_time;
    }

    for (auto const & c : path)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : time_line)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : trigger_lsa)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-id")
    {
        event_id = value;
        event_id.value_namespace = name_space;
        event_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cost")
    {
        cost = value;
        cost.value_namespace = name_space;
        cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipfrr-event-id")
    {
        ipfrr_event_id = value;
        ipfrr_event_id.value_namespace = name_space;
        ipfrr_event_id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-path-change-type")
    {
        route_path_change_type = value;
        route_path_change_type.value_namespace = name_space;
        route_path_change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-type")
    {
        route_type = value;
        route_type.value_namespace = name_space;
        route_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-run-no")
    {
        spf_run_no = value;
        spf_run_no.value_namespace = name_space;
        spf_run_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded = value;
        threshold_exceeded.value_namespace = name_space;
        threshold_exceeded.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "cost")
    {
        cost.yfilter = yfilter;
    }
    if(value_path == "ipfrr-event-id")
    {
        ipfrr_event_id.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "prefix-lenth")
    {
        prefix_lenth.yfilter = yfilter;
    }
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
    if(value_path == "route-path-change-type")
    {
        route_path_change_type.yfilter = yfilter;
    }
    if(value_path == "route-type")
    {
        route_type.yfilter = yfilter;
    }
    if(value_path == "spf-run-no")
    {
        spf_run_no.yfilter = yfilter;
    }
    if(value_path == "threshold-exceeded")
    {
        threshold_exceeded.yfilter = yfilter;
    }
    if(value_path == "trigger-time")
    {
        trigger_time.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-convergence-time" || name == "lsa-processed" || name == "mpls-convergence-time" || name == "path" || name == "time-line" || name == "trigger-lsa" || name == "event-id" || name == "change-type" || name == "cost" || name == "ipfrr-event-id" || name == "prefix" || name == "prefix-lenth" || name == "priority" || name == "route-path-change-type" || name == "route-type" || name == "spf-run-no" || name == "threshold-exceeded" || name == "trigger-time")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime::IpConvergenceTime()
    :
    fastest_node_name{YType::str, "fastest-node-name"},
    maximum_time{YType::str, "maximum-time"},
    minimum_time{YType::str, "minimum-time"},
    slowest_node_name{YType::str, "slowest-node-name"}
{
    yang_name = "ip-convergence-time"; yang_parent_name = "prefix-event-offline";
}

Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime::~IpConvergenceTime()
{
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime::has_data() const
{
    return fastest_node_name.is_set
	|| maximum_time.is_set
	|| minimum_time.is_set
	|| slowest_node_name.is_set;
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fastest_node_name.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-convergence-time";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpConvergenceTime' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::IpConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fastest-node-name" || name == "maximum-time" || name == "minimum-time" || name == "slowest-node-name")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime::MplsConvergenceTime()
    :
    fastest_node_name{YType::str, "fastest-node-name"},
    maximum_time{YType::str, "maximum-time"},
    minimum_time{YType::str, "minimum-time"},
    slowest_node_name{YType::str, "slowest-node-name"}
{
    yang_name = "mpls-convergence-time"; yang_parent_name = "prefix-event-offline";
}

Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime::~MplsConvergenceTime()
{
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime::has_data() const
{
    return fastest_node_name.is_set
	|| maximum_time.is_set
	|| minimum_time.is_set
	|| slowest_node_name.is_set;
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fastest_node_name.yfilter)
	|| ydk::is_set(maximum_time.yfilter)
	|| ydk::is_set(minimum_time.yfilter)
	|| ydk::is_set(slowest_node_name.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-convergence-time";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsConvergenceTime' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fastest_node_name.is_set || is_set(fastest_node_name.yfilter)) leaf_name_data.push_back(fastest_node_name.get_name_leafdata());
    if (maximum_time.is_set || is_set(maximum_time.yfilter)) leaf_name_data.push_back(maximum_time.get_name_leafdata());
    if (minimum_time.is_set || is_set(minimum_time.yfilter)) leaf_name_data.push_back(minimum_time.get_name_leafdata());
    if (slowest_node_name.is_set || is_set(slowest_node_name.yfilter)) leaf_name_data.push_back(slowest_node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name = value;
        fastest_node_name.value_namespace = name_space;
        fastest_node_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-time")
    {
        maximum_time = value;
        maximum_time.value_namespace = name_space;
        maximum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-time")
    {
        minimum_time = value;
        minimum_time.value_namespace = name_space;
        minimum_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name = value;
        slowest_node_name.value_namespace = name_space;
        slowest_node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fastest-node-name")
    {
        fastest_node_name.yfilter = yfilter;
    }
    if(value_path == "maximum-time")
    {
        maximum_time.yfilter = yfilter;
    }
    if(value_path == "minimum-time")
    {
        minimum_time.yfilter = yfilter;
    }
    if(value_path == "slowest-node-name")
    {
        slowest_node_name.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::MplsConvergenceTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fastest-node-name" || name == "maximum-time" || name == "minimum-time" || name == "slowest-node-name")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::Path()
    :
    change_type{YType::enumeration, "change-type"},
    interface_name{YType::str, "interface-name"},
    neighbour_address{YType::str, "neighbour-address"},
    path_metric{YType::uint32, "path-metric"}
{
    yang_name = "path"; yang_parent_name = "prefix-event-offline";
}

Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::~Path()
{
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::has_data() const
{
    for (std::size_t index=0; index<lfa_path.size(); index++)
    {
        if(lfa_path[index]->has_data())
            return true;
    }
    return change_type.is_set
	|| interface_name.is_set
	|| neighbour_address.is_set
	|| path_metric.is_set;
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::has_operation() const
{
    for (std::size_t index=0; index<lfa_path.size(); index++)
    {
        if(lfa_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(neighbour_address.yfilter)
	|| ydk::is_set(path_metric.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Path' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbour_address.is_set || is_set(neighbour_address.yfilter)) leaf_name_data.push_back(neighbour_address.get_name_leafdata());
    if (path_metric.is_set || is_set(path_metric.yfilter)) leaf_name_data.push_back(path_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lfa-path")
    {
        for(auto const & c : lfa_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath>();
        c->parent = this;
        lfa_path.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lfa_path)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "path-metric")
    {
        path_metric = value;
        path_metric.value_namespace = name_space;
        path_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address.yfilter = yfilter;
    }
    if(value_path == "path-metric")
    {
        path_metric.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lfa-path" || name == "change-type" || name == "interface-name" || name == "neighbour-address" || name == "path-metric")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath::LfaPath()
    :
    change_type{YType::enumeration, "change-type"},
    interface_name{YType::str, "interface-name"},
    lfa_type{YType::enumeration, "lfa-type"},
    neighbour_address{YType::str, "neighbour-address"},
    path_metric{YType::uint32, "path-metric"},
    remote_node_id{YType::str, "remote-node-id"}
{
    yang_name = "lfa-path"; yang_parent_name = "path";
}

Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath::~LfaPath()
{
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath::has_data() const
{
    return change_type.is_set
	|| interface_name.is_set
	|| lfa_type.is_set
	|| neighbour_address.is_set
	|| path_metric.is_set
	|| remote_node_id.is_set;
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(lfa_type.yfilter)
	|| ydk::is_set(neighbour_address.yfilter)
	|| ydk::is_set(path_metric.yfilter)
	|| ydk::is_set(remote_node_id.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lfa-path";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LfaPath' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (lfa_type.is_set || is_set(lfa_type.yfilter)) leaf_name_data.push_back(lfa_type.get_name_leafdata());
    if (neighbour_address.is_set || is_set(neighbour_address.yfilter)) leaf_name_data.push_back(neighbour_address.get_name_leafdata());
    if (path_metric.is_set || is_set(path_metric.yfilter)) leaf_name_data.push_back(path_metric.get_name_leafdata());
    if (remote_node_id.is_set || is_set(remote_node_id.yfilter)) leaf_name_data.push_back(remote_node_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::Path::LfaPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lfa-type")
    {
        lfa_type = value;
        lfa_type.value_namespace = name_space;
        lfa_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address = value;
        neighbour_address.value_namespace = name_space;
        neighbour_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "lfa-type")
    {
        lfa_type.yfilter = yfilter;
    }
    if(value_path == "neighbour-address")
    {
        neighbour_address.yfilter = yfilter;
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
    if(name == "change-type" || name == "interface-name" || name == "lfa-type" || name == "neighbour-address" || name == "path-metric" || name == "remote-node-id")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa::TriggerLsa()
    :
    change_type{YType::enumeration, "change-type"},
    lsa_id{YType::str, "lsa-id"},
    lsa_type{YType::enumeration, "lsa-type"},
    origin_router_id{YType::str, "origin-router-id"},
    reception_time{YType::str, "reception-time"},
    sequence_number{YType::str, "sequence-number"}
{
    yang_name = "trigger-lsa"; yang_parent_name = "prefix-event-offline";
}

Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa::~TriggerLsa()
{
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa::has_data() const
{
    return change_type.is_set
	|| lsa_id.is_set
	|| lsa_type.is_set
	|| origin_router_id.is_set
	|| reception_time.is_set
	|| sequence_number.is_set;
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(origin_router_id.yfilter)
	|| ydk::is_set(reception_time.yfilter)
	|| ydk::is_set(sequence_number.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-lsa";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TriggerLsa' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (origin_router_id.is_set || is_set(origin_router_id.yfilter)) leaf_name_data.push_back(origin_router_id.get_name_leafdata());
    if (reception_time.is_set || is_set(reception_time.yfilter)) leaf_name_data.push_back(reception_time.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "reception-time")
    {
        reception_time = value;
        reception_time.value_namespace = name_space;
        reception_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "origin-router-id")
    {
        origin_router_id.yfilter = yfilter;
    }
    if(value_path == "reception-time")
    {
        reception_time.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TriggerLsa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "change-type" || name == "lsa-id" || name == "lsa-type" || name == "origin-router-id" || name == "reception-time" || name == "sequence-number")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::TimeLine()
    :
    ldp_enter{YType::str, "ldp-enter"},
    ldp_exit{YType::str, "ldp-exit"},
    lsd_enter{YType::str, "lsd-enter"},
    lsd_exit{YType::str, "lsd-exit"},
    ri_bv4_enter{YType::str, "ri-bv4-enter"},
    ri_bv4_exit{YType::str, "ri-bv4-exit"},
    ri_bv4_redistribute{YType::str, "ri-bv4-redistribute"},
    route_origin{YType::str, "route-origin"}
{
    yang_name = "time-line"; yang_parent_name = "prefix-event-offline";
}

Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::~TimeLine()
{
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::has_data() const
{
    for (std::size_t index=0; index<lc_ip.size(); index++)
    {
        if(lc_ip[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lc_mpls.size(); index++)
    {
        if(lc_mpls[index]->has_data())
            return true;
    }
    return ldp_enter.is_set
	|| ldp_exit.is_set
	|| lsd_enter.is_set
	|| lsd_exit.is_set
	|| ri_bv4_enter.is_set
	|| ri_bv4_exit.is_set
	|| ri_bv4_redistribute.is_set
	|| route_origin.is_set;
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::has_operation() const
{
    for (std::size_t index=0; index<lc_ip.size(); index++)
    {
        if(lc_ip[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lc_mpls.size(); index++)
    {
        if(lc_mpls[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ldp_enter.yfilter)
	|| ydk::is_set(ldp_exit.yfilter)
	|| ydk::is_set(lsd_enter.yfilter)
	|| ydk::is_set(lsd_exit.yfilter)
	|| ydk::is_set(ri_bv4_enter.yfilter)
	|| ydk::is_set(ri_bv4_exit.yfilter)
	|| ydk::is_set(ri_bv4_redistribute.yfilter)
	|| ydk::is_set(route_origin.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time-line";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TimeLine' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ldp_enter.is_set || is_set(ldp_enter.yfilter)) leaf_name_data.push_back(ldp_enter.get_name_leafdata());
    if (ldp_exit.is_set || is_set(ldp_exit.yfilter)) leaf_name_data.push_back(ldp_exit.get_name_leafdata());
    if (lsd_enter.is_set || is_set(lsd_enter.yfilter)) leaf_name_data.push_back(lsd_enter.get_name_leafdata());
    if (lsd_exit.is_set || is_set(lsd_exit.yfilter)) leaf_name_data.push_back(lsd_exit.get_name_leafdata());
    if (ri_bv4_enter.is_set || is_set(ri_bv4_enter.yfilter)) leaf_name_data.push_back(ri_bv4_enter.get_name_leafdata());
    if (ri_bv4_exit.is_set || is_set(ri_bv4_exit.yfilter)) leaf_name_data.push_back(ri_bv4_exit.get_name_leafdata());
    if (ri_bv4_redistribute.is_set || is_set(ri_bv4_redistribute.yfilter)) leaf_name_data.push_back(ri_bv4_redistribute.get_name_leafdata());
    if (route_origin.is_set || is_set(route_origin.yfilter)) leaf_name_data.push_back(route_origin.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lc-ip")
    {
        for(auto const & c : lc_ip)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp>();
        c->parent = this;
        lc_ip.push_back(c);
        return c;
    }

    if(child_yang_name == "lc-mpls")
    {
        for(auto const & c : lc_mpls)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls>();
        c->parent = this;
        lc_mpls.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lc_ip)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : lc_mpls)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "route-origin")
    {
        route_origin = value;
        route_origin.value_namespace = name_space;
        route_origin.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "route-origin")
    {
        route_origin.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lc-ip" || name == "lc-mpls" || name == "ldp-enter" || name == "ldp-exit" || name == "lsd-enter" || name == "lsd-exit" || name == "ri-bv4-enter" || name == "ri-bv4-exit" || name == "ri-bv4-redistribute" || name == "route-origin")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp::LcIp()
    :
    fib_complete{YType::str, "fib-complete"},
    node_name{YType::str, "node-name"},
    speed{YType::enumeration, "speed"}
{
    yang_name = "lc-ip"; yang_parent_name = "time-line";
}

Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp::~LcIp()
{
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp::has_data() const
{
    return fib_complete.is_set
	|| node_name.is_set
	|| speed.is_set;
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fib_complete.yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(speed.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lc-ip";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LcIp' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fib_complete.is_set || is_set(fib_complete.yfilter)) leaf_name_data.push_back(fib_complete.get_name_leafdata());
    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fib-complete")
    {
        fib_complete = value;
        fib_complete.value_namespace = name_space;
        fib_complete.value_namespace_prefix = name_space_prefix;
    }
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

void Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fib-complete")
    {
        fib_complete.yfilter = yfilter;
    }
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcIp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fib-complete" || name == "node-name" || name == "speed")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls::LcMpls()
    :
    fib_complete{YType::str, "fib-complete"},
    node_name{YType::str, "node-name"},
    speed{YType::enumeration, "speed"}
{
    yang_name = "lc-mpls"; yang_parent_name = "time-line";
}

Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls::~LcMpls()
{
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls::has_data() const
{
    return fib_complete.is_set
	|| node_name.is_set
	|| speed.is_set;
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fib_complete.yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| ydk::is_set(speed.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lc-mpls";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LcMpls' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fib_complete.is_set || is_set(fib_complete.yfilter)) leaf_name_data.push_back(fib_complete.get_name_leafdata());
    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (speed.is_set || is_set(speed.yfilter)) leaf_name_data.push_back(speed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "fib-complete")
    {
        fib_complete = value;
        fib_complete.value_namespace = name_space;
        fib_complete.value_namespace_prefix = name_space_prefix;
    }
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

void Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "fib-complete")
    {
        fib_complete.yfilter = yfilter;
    }
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
    if(value_path == "speed")
    {
        speed.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::TimeLine::LcMpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "fib-complete" || name == "node-name" || name == "speed")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed::LsaProcessed()
    :
    change_type{YType::enumeration, "change-type"},
    lsa_id{YType::str, "lsa-id"},
    lsa_type{YType::enumeration, "lsa-type"},
    origin_router_id{YType::str, "origin-router-id"},
    reception_time{YType::str, "reception-time"},
    sequence_number{YType::str, "sequence-number"}
{
    yang_name = "lsa-processed"; yang_parent_name = "prefix-event-offline";
}

Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed::~LsaProcessed()
{
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed::has_data() const
{
    return change_type.is_set
	|| lsa_id.is_set
	|| lsa_type.is_set
	|| origin_router_id.is_set
	|| reception_time.is_set
	|| sequence_number.is_set;
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(change_type.yfilter)
	|| ydk::is_set(lsa_id.yfilter)
	|| ydk::is_set(lsa_type.yfilter)
	|| ydk::is_set(origin_router_id.yfilter)
	|| ydk::is_set(reception_time.yfilter)
	|| ydk::is_set(sequence_number.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-processed";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaProcessed' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (change_type.is_set || is_set(change_type.yfilter)) leaf_name_data.push_back(change_type.get_name_leafdata());
    if (lsa_id.is_set || is_set(lsa_id.yfilter)) leaf_name_data.push_back(lsa_id.get_name_leafdata());
    if (lsa_type.is_set || is_set(lsa_type.yfilter)) leaf_name_data.push_back(lsa_type.get_name_leafdata());
    if (origin_router_id.is_set || is_set(origin_router_id.yfilter)) leaf_name_data.push_back(origin_router_id.get_name_leafdata());
    if (reception_time.is_set || is_set(reception_time.yfilter)) leaf_name_data.push_back(reception_time.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "change-type")
    {
        change_type = value;
        change_type.value_namespace = name_space;
        change_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsa-id")
    {
        lsa_id = value;
        lsa_id.value_namespace = name_space;
        lsa_id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "reception-time")
    {
        reception_time = value;
        reception_time.value_namespace = name_space;
        reception_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "change-type")
    {
        change_type.yfilter = yfilter;
    }
    if(value_path == "lsa-id")
    {
        lsa_id.yfilter = yfilter;
    }
    if(value_path == "lsa-type")
    {
        lsa_type.yfilter = yfilter;
    }
    if(value_path == "origin-router-id")
    {
        origin_router_id.yfilter = yfilter;
    }
    if(value_path == "reception-time")
    {
        reception_time.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::PrefixEventOfflines::PrefixEventOffline::LsaProcessed::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "change-type" || name == "lsa-id" || name == "lsa-type" || name == "origin-router-id" || name == "reception-time" || name == "sequence-number")
        return true;
    return false;
}

Rcmd::Isis::Instances::Instance::LspRegenerateds::LspRegenerateds()
{
    yang_name = "lsp-regenerateds"; yang_parent_name = "instance";
}

Rcmd::Isis::Instances::Instance::LspRegenerateds::~LspRegenerateds()
{
}

bool Rcmd::Isis::Instances::Instance::LspRegenerateds::has_data() const
{
    for (std::size_t index=0; index<lsp_regenerated.size(); index++)
    {
        if(lsp_regenerated[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Isis::Instances::Instance::LspRegenerateds::has_operation() const
{
    for (std::size_t index=0; index<lsp_regenerated.size(); index++)
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

const EntityPath Rcmd::Isis::Instances::Instance::LspRegenerateds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspRegenerateds' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::LspRegenerateds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lsp-regenerated")
    {
        for(auto const & c : lsp_regenerated)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Isis::Instances::Instance::LspRegenerateds::LspRegenerated>();
        c->parent = this;
        lsp_regenerated.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::LspRegenerateds::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : lsp_regenerated)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
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
    serial_number{YType::int32, "serial-number"},
    isis_level{YType::enumeration, "isis-level"},
    lsp_id{YType::str, "lsp-id"},
    reason{YType::str, "reason"},
    reception_time{YType::str, "reception-time"},
    sequence_number{YType::uint32, "sequence-number"},
    serial_number_xr{YType::uint32, "serial-number-xr"},
    spf_run_number{YType::uint32, "spf-run-number"}
{
    yang_name = "lsp-regenerated"; yang_parent_name = "lsp-regenerateds";
}

Rcmd::Isis::Instances::Instance::LspRegenerateds::LspRegenerated::~LspRegenerated()
{
}

bool Rcmd::Isis::Instances::Instance::LspRegenerateds::LspRegenerated::has_data() const
{
    return serial_number.is_set
	|| isis_level.is_set
	|| lsp_id.is_set
	|| reason.is_set
	|| reception_time.is_set
	|| sequence_number.is_set
	|| serial_number_xr.is_set
	|| spf_run_number.is_set;
}

bool Rcmd::Isis::Instances::Instance::LspRegenerateds::LspRegenerated::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(serial_number.yfilter)
	|| ydk::is_set(isis_level.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| ydk::is_set(reception_time.yfilter)
	|| ydk::is_set(sequence_number.yfilter)
	|| ydk::is_set(serial_number_xr.yfilter)
	|| ydk::is_set(spf_run_number.yfilter);
}

std::string Rcmd::Isis::Instances::Instance::LspRegenerateds::LspRegenerated::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-regenerated" <<"[serial-number='" <<serial_number <<"']";

    return path_buffer.str();

}

const EntityPath Rcmd::Isis::Instances::Instance::LspRegenerateds::LspRegenerated::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspRegenerated' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (serial_number.is_set || is_set(serial_number.yfilter)) leaf_name_data.push_back(serial_number.get_name_leafdata());
    if (isis_level.is_set || is_set(isis_level.yfilter)) leaf_name_data.push_back(isis_level.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());
    if (reception_time.is_set || is_set(reception_time.yfilter)) leaf_name_data.push_back(reception_time.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());
    if (serial_number_xr.is_set || is_set(serial_number_xr.yfilter)) leaf_name_data.push_back(serial_number_xr.get_name_leafdata());
    if (spf_run_number.is_set || is_set(spf_run_number.yfilter)) leaf_name_data.push_back(spf_run_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Isis::Instances::Instance::LspRegenerateds::LspRegenerated::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Isis::Instances::Instance::LspRegenerateds::LspRegenerated::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Isis::Instances::Instance::LspRegenerateds::LspRegenerated::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "serial-number")
    {
        serial_number = value;
        serial_number.value_namespace = name_space;
        serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-level")
    {
        isis_level = value;
        isis_level.value_namespace = name_space;
        isis_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reception-time")
    {
        reception_time = value;
        reception_time.value_namespace = name_space;
        reception_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "serial-number-xr")
    {
        serial_number_xr = value;
        serial_number_xr.value_namespace = name_space;
        serial_number_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-run-number")
    {
        spf_run_number = value;
        spf_run_number.value_namespace = name_space;
        spf_run_number.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Isis::Instances::Instance::LspRegenerateds::LspRegenerated::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "serial-number")
    {
        serial_number.yfilter = yfilter;
    }
    if(value_path == "isis-level")
    {
        isis_level.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
    if(value_path == "reception-time")
    {
        reception_time.yfilter = yfilter;
    }
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
    if(value_path == "serial-number-xr")
    {
        serial_number_xr.yfilter = yfilter;
    }
    if(value_path == "spf-run-number")
    {
        spf_run_number.yfilter = yfilter;
    }
}

bool Rcmd::Isis::Instances::Instance::LspRegenerateds::LspRegenerated::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "serial-number" || name == "isis-level" || name == "lsp-id" || name == "reason" || name == "reception-time" || name == "sequence-number" || name == "serial-number-xr" || name == "spf-run-number")
        return true;
    return false;
}

Rcmd::Memory::Memory()
{
    yang_name = "memory"; yang_parent_name = "rcmd";
}

Rcmd::Memory::~Memory()
{
}

bool Rcmd::Memory::has_data() const
{
    for (std::size_t index=0; index<edm_memory_info.size(); index++)
    {
        if(edm_memory_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<memory_info.size(); index++)
    {
        if(memory_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<string_memory_info.size(); index++)
    {
        if(string_memory_info[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Memory::has_operation() const
{
    for (std::size_t index=0; index<edm_memory_info.size(); index++)
    {
        if(edm_memory_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<memory_info.size(); index++)
    {
        if(memory_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<string_memory_info.size(); index++)
    {
        if(string_memory_info[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rcmd::Memory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory";

    return path_buffer.str();

}

const EntityPath Rcmd::Memory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Memory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "edm-memory-info")
    {
        for(auto const & c : edm_memory_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Memory::EdmMemoryInfo>();
        c->parent = this;
        edm_memory_info.push_back(c);
        return c;
    }

    if(child_yang_name == "memory-info")
    {
        for(auto const & c : memory_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Memory::MemoryInfo>();
        c->parent = this;
        memory_info.push_back(c);
        return c;
    }

    if(child_yang_name == "string-memory-info")
    {
        for(auto const & c : string_memory_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Memory::StringMemoryInfo>();
        c->parent = this;
        string_memory_info.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Memory::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : edm_memory_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : memory_info)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : string_memory_info)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Memory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Memory::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Memory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "edm-memory-info" || name == "memory-info" || name == "string-memory-info")
        return true;
    return false;
}

Rcmd::Memory::MemoryInfo::MemoryInfo()
    :
    alloc_count{YType::uint32, "alloc-count"},
    alloc_fails{YType::uint32, "alloc-fails"},
    current_count{YType::uint32, "current-count"},
    freed_count{YType::uint32, "freed-count"},
    memory_type{YType::enumeration, "memory-type"},
    size{YType::uint32, "size"},
    structure_name{YType::str, "structure-name"}
{
    yang_name = "memory-info"; yang_parent_name = "memory";
}

Rcmd::Memory::MemoryInfo::~MemoryInfo()
{
}

bool Rcmd::Memory::MemoryInfo::has_data() const
{
    return alloc_count.is_set
	|| alloc_fails.is_set
	|| current_count.is_set
	|| freed_count.is_set
	|| memory_type.is_set
	|| size.is_set
	|| structure_name.is_set;
}

bool Rcmd::Memory::MemoryInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(alloc_count.yfilter)
	|| ydk::is_set(alloc_fails.yfilter)
	|| ydk::is_set(current_count.yfilter)
	|| ydk::is_set(freed_count.yfilter)
	|| ydk::is_set(memory_type.yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(structure_name.yfilter);
}

std::string Rcmd::Memory::MemoryInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "memory-info";

    return path_buffer.str();

}

const EntityPath Rcmd::Memory::MemoryInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/memory/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alloc_count.is_set || is_set(alloc_count.yfilter)) leaf_name_data.push_back(alloc_count.get_name_leafdata());
    if (alloc_fails.is_set || is_set(alloc_fails.yfilter)) leaf_name_data.push_back(alloc_fails.get_name_leafdata());
    if (current_count.is_set || is_set(current_count.yfilter)) leaf_name_data.push_back(current_count.get_name_leafdata());
    if (freed_count.is_set || is_set(freed_count.yfilter)) leaf_name_data.push_back(freed_count.get_name_leafdata());
    if (memory_type.is_set || is_set(memory_type.yfilter)) leaf_name_data.push_back(memory_type.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (structure_name.is_set || is_set(structure_name.yfilter)) leaf_name_data.push_back(structure_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Memory::MemoryInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Memory::MemoryInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Memory::MemoryInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "alloc-count")
    {
        alloc_count = value;
        alloc_count.value_namespace = name_space;
        alloc_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alloc-fails")
    {
        alloc_fails = value;
        alloc_fails.value_namespace = name_space;
        alloc_fails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-count")
    {
        current_count = value;
        current_count.value_namespace = name_space;
        current_count.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "structure-name")
    {
        structure_name = value;
        structure_name.value_namespace = name_space;
        structure_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Memory::MemoryInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "alloc-count")
    {
        alloc_count.yfilter = yfilter;
    }
    if(value_path == "alloc-fails")
    {
        alloc_fails.yfilter = yfilter;
    }
    if(value_path == "current-count")
    {
        current_count.yfilter = yfilter;
    }
    if(value_path == "freed-count")
    {
        freed_count.yfilter = yfilter;
    }
    if(value_path == "memory-type")
    {
        memory_type.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "structure-name")
    {
        structure_name.yfilter = yfilter;
    }
}

bool Rcmd::Memory::MemoryInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "alloc-count" || name == "alloc-fails" || name == "current-count" || name == "freed-count" || name == "memory-type" || name == "size" || name == "structure-name")
        return true;
    return false;
}

Rcmd::Memory::EdmMemoryInfo::EdmMemoryInfo()
    :
    failure{YType::uint32, "failure"},
    size{YType::uint32, "size"},
    success{YType::uint32, "success"},
    total{YType::uint32, "total"}
{
    yang_name = "edm-memory-info"; yang_parent_name = "memory";
}

Rcmd::Memory::EdmMemoryInfo::~EdmMemoryInfo()
{
}

bool Rcmd::Memory::EdmMemoryInfo::has_data() const
{
    return failure.is_set
	|| size.is_set
	|| success.is_set
	|| total.is_set;
}

bool Rcmd::Memory::EdmMemoryInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(failure.yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(success.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string Rcmd::Memory::EdmMemoryInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "edm-memory-info";

    return path_buffer.str();

}

const EntityPath Rcmd::Memory::EdmMemoryInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/memory/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failure.is_set || is_set(failure.yfilter)) leaf_name_data.push_back(failure.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (success.is_set || is_set(success.yfilter)) leaf_name_data.push_back(success.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Memory::EdmMemoryInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Memory::EdmMemoryInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Memory::EdmMemoryInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "failure")
    {
        failure = value;
        failure.value_namespace = name_space;
        failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success")
    {
        success = value;
        success.value_namespace = name_space;
        success.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Memory::EdmMemoryInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "failure")
    {
        failure.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "success")
    {
        success.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool Rcmd::Memory::EdmMemoryInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "failure" || name == "size" || name == "success" || name == "total")
        return true;
    return false;
}

Rcmd::Memory::StringMemoryInfo::StringMemoryInfo()
    :
    failure{YType::uint32, "failure"},
    size{YType::uint32, "size"},
    success{YType::uint32, "success"},
    total{YType::uint32, "total"}
{
    yang_name = "string-memory-info"; yang_parent_name = "memory";
}

Rcmd::Memory::StringMemoryInfo::~StringMemoryInfo()
{
}

bool Rcmd::Memory::StringMemoryInfo::has_data() const
{
    return failure.is_set
	|| size.is_set
	|| success.is_set
	|| total.is_set;
}

bool Rcmd::Memory::StringMemoryInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(failure.yfilter)
	|| ydk::is_set(size.yfilter)
	|| ydk::is_set(success.yfilter)
	|| ydk::is_set(total.yfilter);
}

std::string Rcmd::Memory::StringMemoryInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "string-memory-info";

    return path_buffer.str();

}

const EntityPath Rcmd::Memory::StringMemoryInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/memory/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (failure.is_set || is_set(failure.yfilter)) leaf_name_data.push_back(failure.get_name_leafdata());
    if (size.is_set || is_set(size.yfilter)) leaf_name_data.push_back(size.get_name_leafdata());
    if (success.is_set || is_set(success.yfilter)) leaf_name_data.push_back(success.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Memory::StringMemoryInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Memory::StringMemoryInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Memory::StringMemoryInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "failure")
    {
        failure = value;
        failure.value_namespace = name_space;
        failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "size")
    {
        size = value;
        size.value_namespace = name_space;
        size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "success")
    {
        success = value;
        success.value_namespace = name_space;
        success.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Memory::StringMemoryInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "failure")
    {
        failure.yfilter = yfilter;
    }
    if(value_path == "size")
    {
        size.yfilter = yfilter;
    }
    if(value_path == "success")
    {
        success.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
}

bool Rcmd::Memory::StringMemoryInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "failure" || name == "size" || name == "success" || name == "total")
        return true;
    return false;
}

Rcmd::Ldp::Ldp()
    :
    remote_lfa_s(std::make_shared<Rcmd::Ldp::RemoteLfaS>())
	,remote_lfa_summaries(std::make_shared<Rcmd::Ldp::RemoteLfaSummaries>())
	,sessions(std::make_shared<Rcmd::Ldp::Sessions>())
{
    remote_lfa_s->parent = this;

    remote_lfa_summaries->parent = this;

    sessions->parent = this;

    yang_name = "ldp"; yang_parent_name = "rcmd";
}

Rcmd::Ldp::~Ldp()
{
}

bool Rcmd::Ldp::has_data() const
{
    return (remote_lfa_s !=  nullptr && remote_lfa_s->has_data())
	|| (remote_lfa_summaries !=  nullptr && remote_lfa_summaries->has_data())
	|| (sessions !=  nullptr && sessions->has_data());
}

bool Rcmd::Ldp::has_operation() const
{
    return is_set(yfilter)
	|| (remote_lfa_s !=  nullptr && remote_lfa_s->has_operation())
	|| (remote_lfa_summaries !=  nullptr && remote_lfa_summaries->has_operation())
	|| (sessions !=  nullptr && sessions->has_operation());
}

std::string Rcmd::Ldp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp";

    return path_buffer.str();

}

const EntityPath Rcmd::Ldp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ldp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    if(child_yang_name == "sessions")
    {
        if(sessions == nullptr)
        {
            sessions = std::make_shared<Rcmd::Ldp::Sessions>();
        }
        return sessions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ldp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(remote_lfa_s != nullptr)
    {
        children["remote-lfa-s"] = remote_lfa_s;
    }

    if(remote_lfa_summaries != nullptr)
    {
        children["remote-lfa-summaries"] = remote_lfa_summaries;
    }

    if(sessions != nullptr)
    {
        children["sessions"] = sessions;
    }

    return children;
}

void Rcmd::Ldp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Ldp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Ldp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "remote-lfa-s" || name == "remote-lfa-summaries" || name == "sessions")
        return true;
    return false;
}

Rcmd::Ldp::Sessions::Sessions()
{
    yang_name = "sessions"; yang_parent_name = "ldp";
}

Rcmd::Ldp::Sessions::~Sessions()
{
}

bool Rcmd::Ldp::Sessions::has_data() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Ldp::Sessions::has_operation() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rcmd::Ldp::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";

    return path_buffer.str();

}

const EntityPath Rcmd::Ldp::Sessions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/ldp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ldp::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        for(auto const & c : session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ldp::Sessions::Session>();
        c->parent = this;
        session.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ldp::Sessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : session)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
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
    event_id{YType::int32, "event-id"},
    address{YType::str, "address"},
    event_id_xr{YType::uint32, "event-id-xr"},
    event_time{YType::str, "event-time"},
    event_type{YType::enumeration, "event-type"},
    interface_name{YType::str, "interface-name"},
    lsr_id{YType::str, "lsr-id"},
    state{YType::enumeration, "state"}
{
    yang_name = "session"; yang_parent_name = "sessions";
}

Rcmd::Ldp::Sessions::Session::~Session()
{
}

bool Rcmd::Ldp::Sessions::Session::has_data() const
{
    return event_id.is_set
	|| address.is_set
	|| event_id_xr.is_set
	|| event_time.is_set
	|| event_type.is_set
	|| interface_name.is_set
	|| lsr_id.is_set
	|| state.is_set;
}

bool Rcmd::Ldp::Sessions::Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(event_id.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(event_id_xr.yfilter)
	|| ydk::is_set(event_time.yfilter)
	|| ydk::is_set(event_type.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(lsr_id.yfilter)
	|| ydk::is_set(state.yfilter);
}

std::string Rcmd::Ldp::Sessions::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session" <<"[event-id='" <<event_id <<"']";

    return path_buffer.str();

}

const EntityPath Rcmd::Ldp::Sessions::Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/ldp/sessions/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_id.is_set || is_set(event_id.yfilter)) leaf_name_data.push_back(event_id.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (event_id_xr.is_set || is_set(event_id_xr.yfilter)) leaf_name_data.push_back(event_id_xr.get_name_leafdata());
    if (event_time.is_set || is_set(event_time.yfilter)) leaf_name_data.push_back(event_time.get_name_leafdata());
    if (event_type.is_set || is_set(event_type.yfilter)) leaf_name_data.push_back(event_type.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.yfilter)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ldp::Sessions::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ldp::Sessions::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ldp::Sessions::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-id")
    {
        event_id = value;
        event_id.value_namespace = name_space;
        event_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-id-xr")
    {
        event_id_xr = value;
        event_id_xr.value_namespace = name_space;
        event_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-time")
    {
        event_time = value;
        event_time.value_namespace = name_space;
        event_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-type")
    {
        event_type = value;
        event_type.value_namespace = name_space;
        event_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
        lsr_id.value_namespace = name_space;
        lsr_id.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "event-id-xr")
    {
        event_id_xr.yfilter = yfilter;
    }
    if(value_path == "event-time")
    {
        event_time.yfilter = yfilter;
    }
    if(value_path == "event-type")
    {
        event_type.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "lsr-id")
    {
        lsr_id.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool Rcmd::Ldp::Sessions::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event-id" || name == "address" || name == "event-id-xr" || name == "event-time" || name == "event-type" || name == "interface-name" || name == "lsr-id" || name == "state")
        return true;
    return false;
}

Rcmd::Ldp::RemoteLfaS::RemoteLfaS()
{
    yang_name = "remote-lfa-s"; yang_parent_name = "ldp";
}

Rcmd::Ldp::RemoteLfaS::~RemoteLfaS()
{
}

bool Rcmd::Ldp::RemoteLfaS::has_data() const
{
    for (std::size_t index=0; index<remote_lfa.size(); index++)
    {
        if(remote_lfa[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Ldp::RemoteLfaS::has_operation() const
{
    for (std::size_t index=0; index<remote_lfa.size(); index++)
    {
        if(remote_lfa[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rcmd::Ldp::RemoteLfaS::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-lfa-s";

    return path_buffer.str();

}

const EntityPath Rcmd::Ldp::RemoteLfaS::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/ldp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ldp::RemoteLfaS::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-lfa")
    {
        for(auto const & c : remote_lfa)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ldp::RemoteLfaS::RemoteLfa>();
        c->parent = this;
        remote_lfa.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ldp::RemoteLfaS::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : remote_lfa)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
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
    event_id{YType::int32, "event-id"},
    below_threshold{YType::boolean, "below-threshold"},
    end_of_calculation_time{YType::str, "end-of-calculation-time"},
    event_id_xr{YType::uint32, "event-id-xr"},
    igp_protocol{YType::enumeration, "igp-protocol"},
    ipfrr_event_id{YType::uint32, "ipfrr-event-id"},
    process_name{YType::str, "process-name"}
{
    yang_name = "remote-lfa"; yang_parent_name = "remote-lfa-s";
}

Rcmd::Ldp::RemoteLfaS::RemoteLfa::~RemoteLfa()
{
}

bool Rcmd::Ldp::RemoteLfaS::RemoteLfa::has_data() const
{
    for (std::size_t index=0; index<logs.size(); index++)
    {
        if(logs[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<remote_node.size(); index++)
    {
        if(remote_node[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<session_statistic.size(); index++)
    {
        if(session_statistic[index]->has_data())
            return true;
    }
    return event_id.is_set
	|| below_threshold.is_set
	|| end_of_calculation_time.is_set
	|| event_id_xr.is_set
	|| igp_protocol.is_set
	|| ipfrr_event_id.is_set
	|| process_name.is_set;
}

bool Rcmd::Ldp::RemoteLfaS::RemoteLfa::has_operation() const
{
    for (std::size_t index=0; index<logs.size(); index++)
    {
        if(logs[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<remote_node.size(); index++)
    {
        if(remote_node[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<session_statistic.size(); index++)
    {
        if(session_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(event_id.yfilter)
	|| ydk::is_set(below_threshold.yfilter)
	|| ydk::is_set(end_of_calculation_time.yfilter)
	|| ydk::is_set(event_id_xr.yfilter)
	|| ydk::is_set(igp_protocol.yfilter)
	|| ydk::is_set(ipfrr_event_id.yfilter)
	|| ydk::is_set(process_name.yfilter);
}

std::string Rcmd::Ldp::RemoteLfaS::RemoteLfa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-lfa" <<"[event-id='" <<event_id <<"']";

    return path_buffer.str();

}

const EntityPath Rcmd::Ldp::RemoteLfaS::RemoteLfa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/ldp/remote-lfa-s/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_id.is_set || is_set(event_id.yfilter)) leaf_name_data.push_back(event_id.get_name_leafdata());
    if (below_threshold.is_set || is_set(below_threshold.yfilter)) leaf_name_data.push_back(below_threshold.get_name_leafdata());
    if (end_of_calculation_time.is_set || is_set(end_of_calculation_time.yfilter)) leaf_name_data.push_back(end_of_calculation_time.get_name_leafdata());
    if (event_id_xr.is_set || is_set(event_id_xr.yfilter)) leaf_name_data.push_back(event_id_xr.get_name_leafdata());
    if (igp_protocol.is_set || is_set(igp_protocol.yfilter)) leaf_name_data.push_back(igp_protocol.get_name_leafdata());
    if (ipfrr_event_id.is_set || is_set(ipfrr_event_id.yfilter)) leaf_name_data.push_back(ipfrr_event_id.get_name_leafdata());
    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ldp::RemoteLfaS::RemoteLfa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "logs")
    {
        for(auto const & c : logs)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ldp::RemoteLfaS::RemoteLfa::Logs>();
        c->parent = this;
        logs.push_back(c);
        return c;
    }

    if(child_yang_name == "remote-node")
    {
        for(auto const & c : remote_node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ldp::RemoteLfaS::RemoteLfa::RemoteNode>();
        c->parent = this;
        remote_node.push_back(c);
        return c;
    }

    if(child_yang_name == "session-statistic")
    {
        for(auto const & c : session_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ldp::RemoteLfaS::RemoteLfa::SessionStatistic>();
        c->parent = this;
        session_statistic.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ldp::RemoteLfaS::RemoteLfa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : logs)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : remote_node)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : session_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Ldp::RemoteLfaS::RemoteLfa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-id")
    {
        event_id = value;
        event_id.value_namespace = name_space;
        event_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "below-threshold")
    {
        below_threshold = value;
        below_threshold.value_namespace = name_space;
        below_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-of-calculation-time")
    {
        end_of_calculation_time = value;
        end_of_calculation_time.value_namespace = name_space;
        end_of_calculation_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-id-xr")
    {
        event_id_xr = value;
        event_id_xr.value_namespace = name_space;
        event_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-protocol")
    {
        igp_protocol = value;
        igp_protocol.value_namespace = name_space;
        igp_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipfrr-event-id")
    {
        ipfrr_event_id = value;
        ipfrr_event_id.value_namespace = name_space;
        ipfrr_event_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-name")
    {
        process_name = value;
        process_name.value_namespace = name_space;
        process_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ldp::RemoteLfaS::RemoteLfa::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-id")
    {
        event_id.yfilter = yfilter;
    }
    if(value_path == "below-threshold")
    {
        below_threshold.yfilter = yfilter;
    }
    if(value_path == "end-of-calculation-time")
    {
        end_of_calculation_time.yfilter = yfilter;
    }
    if(value_path == "event-id-xr")
    {
        event_id_xr.yfilter = yfilter;
    }
    if(value_path == "igp-protocol")
    {
        igp_protocol.yfilter = yfilter;
    }
    if(value_path == "ipfrr-event-id")
    {
        ipfrr_event_id.yfilter = yfilter;
    }
    if(value_path == "process-name")
    {
        process_name.yfilter = yfilter;
    }
}

bool Rcmd::Ldp::RemoteLfaS::RemoteLfa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logs" || name == "remote-node" || name == "session-statistic" || name == "event-id" || name == "below-threshold" || name == "end-of-calculation-time" || name == "event-id-xr" || name == "igp-protocol" || name == "ipfrr-event-id" || name == "process-name")
        return true;
    return false;
}

Rcmd::Ldp::RemoteLfaS::RemoteLfa::SessionStatistic::SessionStatistic()
    :
    path_count{YType::uint32, "path-count"},
    protected_path_count{YType::uint32, "protected-path-count"},
    protected_route_count{YType::uint32, "protected-route-count"},
    remote_label_count{YType::uint32, "remote-label-count"},
    route_count{YType::uint32, "route-count"},
    session_count{YType::uint32, "session-count"},
    session_state{YType::enumeration, "session-state"}
{
    yang_name = "session-statistic"; yang_parent_name = "remote-lfa";
}

Rcmd::Ldp::RemoteLfaS::RemoteLfa::SessionStatistic::~SessionStatistic()
{
}

bool Rcmd::Ldp::RemoteLfaS::RemoteLfa::SessionStatistic::has_data() const
{
    return path_count.is_set
	|| protected_path_count.is_set
	|| protected_route_count.is_set
	|| remote_label_count.is_set
	|| route_count.is_set
	|| session_count.is_set
	|| session_state.is_set;
}

bool Rcmd::Ldp::RemoteLfaS::RemoteLfa::SessionStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_count.yfilter)
	|| ydk::is_set(protected_path_count.yfilter)
	|| ydk::is_set(protected_route_count.yfilter)
	|| ydk::is_set(remote_label_count.yfilter)
	|| ydk::is_set(route_count.yfilter)
	|| ydk::is_set(session_count.yfilter)
	|| ydk::is_set(session_state.yfilter);
}

std::string Rcmd::Ldp::RemoteLfaS::RemoteLfa::SessionStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-statistic";

    return path_buffer.str();

}

const EntityPath Rcmd::Ldp::RemoteLfaS::RemoteLfa::SessionStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SessionStatistic' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_count.is_set || is_set(path_count.yfilter)) leaf_name_data.push_back(path_count.get_name_leafdata());
    if (protected_path_count.is_set || is_set(protected_path_count.yfilter)) leaf_name_data.push_back(protected_path_count.get_name_leafdata());
    if (protected_route_count.is_set || is_set(protected_route_count.yfilter)) leaf_name_data.push_back(protected_route_count.get_name_leafdata());
    if (remote_label_count.is_set || is_set(remote_label_count.yfilter)) leaf_name_data.push_back(remote_label_count.get_name_leafdata());
    if (route_count.is_set || is_set(route_count.yfilter)) leaf_name_data.push_back(route_count.get_name_leafdata());
    if (session_count.is_set || is_set(session_count.yfilter)) leaf_name_data.push_back(session_count.get_name_leafdata());
    if (session_state.is_set || is_set(session_state.yfilter)) leaf_name_data.push_back(session_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ldp::RemoteLfaS::RemoteLfa::SessionStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ldp::RemoteLfaS::RemoteLfa::SessionStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ldp::RemoteLfaS::RemoteLfa::SessionStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-count")
    {
        path_count = value;
        path_count.value_namespace = name_space;
        path_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-path-count")
    {
        protected_path_count = value;
        protected_path_count.value_namespace = name_space;
        protected_path_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-route-count")
    {
        protected_route_count = value;
        protected_route_count.value_namespace = name_space;
        protected_route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-label-count")
    {
        remote_label_count = value;
        remote_label_count.value_namespace = name_space;
        remote_label_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-count")
    {
        route_count = value;
        route_count.value_namespace = name_space;
        route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-count")
    {
        session_count = value;
        session_count.value_namespace = name_space;
        session_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-state")
    {
        session_state = value;
        session_state.value_namespace = name_space;
        session_state.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ldp::RemoteLfaS::RemoteLfa::SessionStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-count")
    {
        path_count.yfilter = yfilter;
    }
    if(value_path == "protected-path-count")
    {
        protected_path_count.yfilter = yfilter;
    }
    if(value_path == "protected-route-count")
    {
        protected_route_count.yfilter = yfilter;
    }
    if(value_path == "remote-label-count")
    {
        remote_label_count.yfilter = yfilter;
    }
    if(value_path == "route-count")
    {
        route_count.yfilter = yfilter;
    }
    if(value_path == "session-count")
    {
        session_count.yfilter = yfilter;
    }
    if(value_path == "session-state")
    {
        session_state.yfilter = yfilter;
    }
}

bool Rcmd::Ldp::RemoteLfaS::RemoteLfa::SessionStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-count" || name == "protected-path-count" || name == "protected-route-count" || name == "remote-label-count" || name == "route-count" || name == "session-count" || name == "session-state")
        return true;
    return false;
}

Rcmd::Ldp::RemoteLfaS::RemoteLfa::RemoteNode::RemoteNode()
    :
    in_use_time{YType::str, "in-use-time"},
    lsr_id{YType::str, "lsr-id"},
    path_count{YType::uint32, "path-count"},
    protected_path_count{YType::uint32, "protected-path-count"},
    protected_route_count{YType::uint32, "protected-route-count"},
    remote_label_count{YType::uint32, "remote-label-count"},
    remote_node_id{YType::str, "remote-node-id"},
    route_count{YType::uint32, "route-count"},
    session_state{YType::enumeration, "session-state"},
    transport_address{YType::str, "transport-address"}
{
    yang_name = "remote-node"; yang_parent_name = "remote-lfa";
}

Rcmd::Ldp::RemoteLfaS::RemoteLfa::RemoteNode::~RemoteNode()
{
}

bool Rcmd::Ldp::RemoteLfaS::RemoteLfa::RemoteNode::has_data() const
{
    return in_use_time.is_set
	|| lsr_id.is_set
	|| path_count.is_set
	|| protected_path_count.is_set
	|| protected_route_count.is_set
	|| remote_label_count.is_set
	|| remote_node_id.is_set
	|| route_count.is_set
	|| session_state.is_set
	|| transport_address.is_set;
}

bool Rcmd::Ldp::RemoteLfaS::RemoteLfa::RemoteNode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_use_time.yfilter)
	|| ydk::is_set(lsr_id.yfilter)
	|| ydk::is_set(path_count.yfilter)
	|| ydk::is_set(protected_path_count.yfilter)
	|| ydk::is_set(protected_route_count.yfilter)
	|| ydk::is_set(remote_label_count.yfilter)
	|| ydk::is_set(remote_node_id.yfilter)
	|| ydk::is_set(route_count.yfilter)
	|| ydk::is_set(session_state.yfilter)
	|| ydk::is_set(transport_address.yfilter);
}

std::string Rcmd::Ldp::RemoteLfaS::RemoteLfa::RemoteNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-node";

    return path_buffer.str();

}

const EntityPath Rcmd::Ldp::RemoteLfaS::RemoteLfa::RemoteNode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteNode' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_use_time.is_set || is_set(in_use_time.yfilter)) leaf_name_data.push_back(in_use_time.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.yfilter)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (path_count.is_set || is_set(path_count.yfilter)) leaf_name_data.push_back(path_count.get_name_leafdata());
    if (protected_path_count.is_set || is_set(protected_path_count.yfilter)) leaf_name_data.push_back(protected_path_count.get_name_leafdata());
    if (protected_route_count.is_set || is_set(protected_route_count.yfilter)) leaf_name_data.push_back(protected_route_count.get_name_leafdata());
    if (remote_label_count.is_set || is_set(remote_label_count.yfilter)) leaf_name_data.push_back(remote_label_count.get_name_leafdata());
    if (remote_node_id.is_set || is_set(remote_node_id.yfilter)) leaf_name_data.push_back(remote_node_id.get_name_leafdata());
    if (route_count.is_set || is_set(route_count.yfilter)) leaf_name_data.push_back(route_count.get_name_leafdata());
    if (session_state.is_set || is_set(session_state.yfilter)) leaf_name_data.push_back(session_state.get_name_leafdata());
    if (transport_address.is_set || is_set(transport_address.yfilter)) leaf_name_data.push_back(transport_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ldp::RemoteLfaS::RemoteLfa::RemoteNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ldp::RemoteLfaS::RemoteLfa::RemoteNode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ldp::RemoteLfaS::RemoteLfa::RemoteNode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-use-time")
    {
        in_use_time = value;
        in_use_time.value_namespace = name_space;
        in_use_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
        lsr_id.value_namespace = name_space;
        lsr_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-count")
    {
        path_count = value;
        path_count.value_namespace = name_space;
        path_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-path-count")
    {
        protected_path_count = value;
        protected_path_count.value_namespace = name_space;
        protected_path_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-route-count")
    {
        protected_route_count = value;
        protected_route_count.value_namespace = name_space;
        protected_route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-label-count")
    {
        remote_label_count = value;
        remote_label_count.value_namespace = name_space;
        remote_label_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-node-id")
    {
        remote_node_id = value;
        remote_node_id.value_namespace = name_space;
        remote_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-count")
    {
        route_count = value;
        route_count.value_namespace = name_space;
        route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-state")
    {
        session_state = value;
        session_state.value_namespace = name_space;
        session_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transport-address")
    {
        transport_address = value;
        transport_address.value_namespace = name_space;
        transport_address.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ldp::RemoteLfaS::RemoteLfa::RemoteNode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-use-time")
    {
        in_use_time.yfilter = yfilter;
    }
    if(value_path == "lsr-id")
    {
        lsr_id.yfilter = yfilter;
    }
    if(value_path == "path-count")
    {
        path_count.yfilter = yfilter;
    }
    if(value_path == "protected-path-count")
    {
        protected_path_count.yfilter = yfilter;
    }
    if(value_path == "protected-route-count")
    {
        protected_route_count.yfilter = yfilter;
    }
    if(value_path == "remote-label-count")
    {
        remote_label_count.yfilter = yfilter;
    }
    if(value_path == "remote-node-id")
    {
        remote_node_id.yfilter = yfilter;
    }
    if(value_path == "route-count")
    {
        route_count.yfilter = yfilter;
    }
    if(value_path == "session-state")
    {
        session_state.yfilter = yfilter;
    }
    if(value_path == "transport-address")
    {
        transport_address.yfilter = yfilter;
    }
}

bool Rcmd::Ldp::RemoteLfaS::RemoteLfa::RemoteNode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-use-time" || name == "lsr-id" || name == "path-count" || name == "protected-path-count" || name == "protected-route-count" || name == "remote-label-count" || name == "remote-node-id" || name == "route-count" || name == "session-state" || name == "transport-address")
        return true;
    return false;
}

Rcmd::Ldp::RemoteLfaS::RemoteLfa::Logs::Logs()
    :
    label_coverage_state{YType::enumeration, "label-coverage-state"},
    log_time{YType::str, "log-time"},
    remote_label_count{YType::uint32, "remote-label-count"},
    route_count{YType::uint32, "route-count"}
{
    yang_name = "logs"; yang_parent_name = "remote-lfa";
}

Rcmd::Ldp::RemoteLfaS::RemoteLfa::Logs::~Logs()
{
}

bool Rcmd::Ldp::RemoteLfaS::RemoteLfa::Logs::has_data() const
{
    return label_coverage_state.is_set
	|| log_time.is_set
	|| remote_label_count.is_set
	|| route_count.is_set;
}

bool Rcmd::Ldp::RemoteLfaS::RemoteLfa::Logs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(label_coverage_state.yfilter)
	|| ydk::is_set(log_time.yfilter)
	|| ydk::is_set(remote_label_count.yfilter)
	|| ydk::is_set(route_count.yfilter);
}

std::string Rcmd::Ldp::RemoteLfaS::RemoteLfa::Logs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logs";

    return path_buffer.str();

}

const EntityPath Rcmd::Ldp::RemoteLfaS::RemoteLfa::Logs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Logs' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_coverage_state.is_set || is_set(label_coverage_state.yfilter)) leaf_name_data.push_back(label_coverage_state.get_name_leafdata());
    if (log_time.is_set || is_set(log_time.yfilter)) leaf_name_data.push_back(log_time.get_name_leafdata());
    if (remote_label_count.is_set || is_set(remote_label_count.yfilter)) leaf_name_data.push_back(remote_label_count.get_name_leafdata());
    if (route_count.is_set || is_set(route_count.yfilter)) leaf_name_data.push_back(route_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ldp::RemoteLfaS::RemoteLfa::Logs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ldp::RemoteLfaS::RemoteLfa::Logs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ldp::RemoteLfaS::RemoteLfa::Logs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-coverage-state")
    {
        label_coverage_state = value;
        label_coverage_state.value_namespace = name_space;
        label_coverage_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "log-time")
    {
        log_time = value;
        log_time.value_namespace = name_space;
        log_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-label-count")
    {
        remote_label_count = value;
        remote_label_count.value_namespace = name_space;
        remote_label_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-count")
    {
        route_count = value;
        route_count.value_namespace = name_space;
        route_count.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ldp::RemoteLfaS::RemoteLfa::Logs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-coverage-state")
    {
        label_coverage_state.yfilter = yfilter;
    }
    if(value_path == "log-time")
    {
        log_time.yfilter = yfilter;
    }
    if(value_path == "remote-label-count")
    {
        remote_label_count.yfilter = yfilter;
    }
    if(value_path == "route-count")
    {
        route_count.yfilter = yfilter;
    }
}

bool Rcmd::Ldp::RemoteLfaS::RemoteLfa::Logs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-coverage-state" || name == "log-time" || name == "remote-label-count" || name == "route-count")
        return true;
    return false;
}

Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummaries()
{
    yang_name = "remote-lfa-summaries"; yang_parent_name = "ldp";
}

Rcmd::Ldp::RemoteLfaSummaries::~RemoteLfaSummaries()
{
}

bool Rcmd::Ldp::RemoteLfaSummaries::has_data() const
{
    for (std::size_t index=0; index<remote_lfa_summary.size(); index++)
    {
        if(remote_lfa_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Ldp::RemoteLfaSummaries::has_operation() const
{
    for (std::size_t index=0; index<remote_lfa_summary.size(); index++)
    {
        if(remote_lfa_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rcmd::Ldp::RemoteLfaSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-lfa-summaries";

    return path_buffer.str();

}

const EntityPath Rcmd::Ldp::RemoteLfaSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/ldp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ldp::RemoteLfaSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-lfa-summary")
    {
        for(auto const & c : remote_lfa_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary>();
        c->parent = this;
        remote_lfa_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ldp::RemoteLfaSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : remote_lfa_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
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
    event_id{YType::int32, "event-id"},
    below_threshold{YType::boolean, "below-threshold"},
    end_of_calculation_time{YType::str, "end-of-calculation-time"},
    event_id_xr{YType::uint32, "event-id-xr"},
    igp_protocol{YType::enumeration, "igp-protocol"},
    ipfrr_event_id{YType::uint32, "ipfrr-event-id"},
    process_name{YType::str, "process-name"}
{
    yang_name = "remote-lfa-summary"; yang_parent_name = "remote-lfa-summaries";
}

Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::~RemoteLfaSummary()
{
}

bool Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::has_data() const
{
    for (std::size_t index=0; index<logs.size(); index++)
    {
        if(logs[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<remote_node.size(); index++)
    {
        if(remote_node[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<session_statistic.size(); index++)
    {
        if(session_statistic[index]->has_data())
            return true;
    }
    return event_id.is_set
	|| below_threshold.is_set
	|| end_of_calculation_time.is_set
	|| event_id_xr.is_set
	|| igp_protocol.is_set
	|| ipfrr_event_id.is_set
	|| process_name.is_set;
}

bool Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::has_operation() const
{
    for (std::size_t index=0; index<logs.size(); index++)
    {
        if(logs[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<remote_node.size(); index++)
    {
        if(remote_node[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<session_statistic.size(); index++)
    {
        if(session_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(event_id.yfilter)
	|| ydk::is_set(below_threshold.yfilter)
	|| ydk::is_set(end_of_calculation_time.yfilter)
	|| ydk::is_set(event_id_xr.yfilter)
	|| ydk::is_set(igp_protocol.yfilter)
	|| ydk::is_set(ipfrr_event_id.yfilter)
	|| ydk::is_set(process_name.yfilter);
}

std::string Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-lfa-summary" <<"[event-id='" <<event_id <<"']";

    return path_buffer.str();

}

const EntityPath Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/ldp/remote-lfa-summaries/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_id.is_set || is_set(event_id.yfilter)) leaf_name_data.push_back(event_id.get_name_leafdata());
    if (below_threshold.is_set || is_set(below_threshold.yfilter)) leaf_name_data.push_back(below_threshold.get_name_leafdata());
    if (end_of_calculation_time.is_set || is_set(end_of_calculation_time.yfilter)) leaf_name_data.push_back(end_of_calculation_time.get_name_leafdata());
    if (event_id_xr.is_set || is_set(event_id_xr.yfilter)) leaf_name_data.push_back(event_id_xr.get_name_leafdata());
    if (igp_protocol.is_set || is_set(igp_protocol.yfilter)) leaf_name_data.push_back(igp_protocol.get_name_leafdata());
    if (ipfrr_event_id.is_set || is_set(ipfrr_event_id.yfilter)) leaf_name_data.push_back(ipfrr_event_id.get_name_leafdata());
    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "logs")
    {
        for(auto const & c : logs)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::Logs>();
        c->parent = this;
        logs.push_back(c);
        return c;
    }

    if(child_yang_name == "remote-node")
    {
        for(auto const & c : remote_node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::RemoteNode>();
        c->parent = this;
        remote_node.push_back(c);
        return c;
    }

    if(child_yang_name == "session-statistic")
    {
        for(auto const & c : session_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::SessionStatistic>();
        c->parent = this;
        session_statistic.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : logs)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : remote_node)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : session_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "event-id")
    {
        event_id = value;
        event_id.value_namespace = name_space;
        event_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "below-threshold")
    {
        below_threshold = value;
        below_threshold.value_namespace = name_space;
        below_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-of-calculation-time")
    {
        end_of_calculation_time = value;
        end_of_calculation_time.value_namespace = name_space;
        end_of_calculation_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-id-xr")
    {
        event_id_xr = value;
        event_id_xr.value_namespace = name_space;
        event_id_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "igp-protocol")
    {
        igp_protocol = value;
        igp_protocol.value_namespace = name_space;
        igp_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipfrr-event-id")
    {
        ipfrr_event_id = value;
        ipfrr_event_id.value_namespace = name_space;
        ipfrr_event_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-name")
    {
        process_name = value;
        process_name.value_namespace = name_space;
        process_name.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "event-id")
    {
        event_id.yfilter = yfilter;
    }
    if(value_path == "below-threshold")
    {
        below_threshold.yfilter = yfilter;
    }
    if(value_path == "end-of-calculation-time")
    {
        end_of_calculation_time.yfilter = yfilter;
    }
    if(value_path == "event-id-xr")
    {
        event_id_xr.yfilter = yfilter;
    }
    if(value_path == "igp-protocol")
    {
        igp_protocol.yfilter = yfilter;
    }
    if(value_path == "ipfrr-event-id")
    {
        ipfrr_event_id.yfilter = yfilter;
    }
    if(value_path == "process-name")
    {
        process_name.yfilter = yfilter;
    }
}

bool Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "logs" || name == "remote-node" || name == "session-statistic" || name == "event-id" || name == "below-threshold" || name == "end-of-calculation-time" || name == "event-id-xr" || name == "igp-protocol" || name == "ipfrr-event-id" || name == "process-name")
        return true;
    return false;
}

Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::SessionStatistic::SessionStatistic()
    :
    path_count{YType::uint32, "path-count"},
    protected_path_count{YType::uint32, "protected-path-count"},
    protected_route_count{YType::uint32, "protected-route-count"},
    remote_label_count{YType::uint32, "remote-label-count"},
    route_count{YType::uint32, "route-count"},
    session_count{YType::uint32, "session-count"},
    session_state{YType::enumeration, "session-state"}
{
    yang_name = "session-statistic"; yang_parent_name = "remote-lfa-summary";
}

Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::SessionStatistic::~SessionStatistic()
{
}

bool Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::SessionStatistic::has_data() const
{
    return path_count.is_set
	|| protected_path_count.is_set
	|| protected_route_count.is_set
	|| remote_label_count.is_set
	|| route_count.is_set
	|| session_count.is_set
	|| session_state.is_set;
}

bool Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::SessionStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_count.yfilter)
	|| ydk::is_set(protected_path_count.yfilter)
	|| ydk::is_set(protected_route_count.yfilter)
	|| ydk::is_set(remote_label_count.yfilter)
	|| ydk::is_set(route_count.yfilter)
	|| ydk::is_set(session_count.yfilter)
	|| ydk::is_set(session_state.yfilter);
}

std::string Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::SessionStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-statistic";

    return path_buffer.str();

}

const EntityPath Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::SessionStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SessionStatistic' in Cisco_IOS_XR_infra_rcmd_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_count.is_set || is_set(path_count.yfilter)) leaf_name_data.push_back(path_count.get_name_leafdata());
    if (protected_path_count.is_set || is_set(protected_path_count.yfilter)) leaf_name_data.push_back(protected_path_count.get_name_leafdata());
    if (protected_route_count.is_set || is_set(protected_route_count.yfilter)) leaf_name_data.push_back(protected_route_count.get_name_leafdata());
    if (remote_label_count.is_set || is_set(remote_label_count.yfilter)) leaf_name_data.push_back(remote_label_count.get_name_leafdata());
    if (route_count.is_set || is_set(route_count.yfilter)) leaf_name_data.push_back(route_count.get_name_leafdata());
    if (session_count.is_set || is_set(session_count.yfilter)) leaf_name_data.push_back(session_count.get_name_leafdata());
    if (session_state.is_set || is_set(session_state.yfilter)) leaf_name_data.push_back(session_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::SessionStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::SessionStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::SessionStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-count")
    {
        path_count = value;
        path_count.value_namespace = name_space;
        path_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-path-count")
    {
        protected_path_count = value;
        protected_path_count.value_namespace = name_space;
        protected_path_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected-route-count")
    {
        protected_route_count = value;
        protected_route_count.value_namespace = name_space;
        protected_route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-label-count")
    {
        remote_label_count = value;
        remote_label_count.value_namespace = name_space;
        remote_label_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-count")
    {
        route_count = value;
        route_count.value_namespace = name_space;
        route_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-count")
    {
        session_count = value;
        session_count.value_namespace = name_space;
        session_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-state")
    {
        session_state = value;
        session_state.value_namespace = name_space;
        session_state.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::SessionStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-count")
    {
        path_count.yfilter = yfilter;
    }
    if(value_path == "protected-path-count")
    {
        protected_path_count.yfilter = yfilter;
    }
    if(value_path == "protected-route-count")
    {
        protected_route_count.yfilter = yfilter;
    }
    if(value_path == "remote-label-count")
    {
        remote_label_count.yfilter = yfilter;
    }
    if(value_path == "route-count")
    {
        route_count.yfilter = yfilter;
    }
    if(value_path == "session-count")
    {
        session_count.yfilter = yfilter;
    }
    if(value_path == "session-state")
    {
        session_state.yfilter = yfilter;
    }
}

bool Rcmd::Ldp::RemoteLfaSummaries::RemoteLfaSummary::SessionStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-count" || name == "protected-path-count" || name == "protected-route-count" || name == "remote-label-count" || name == "route-count" || name == "session-count" || name == "session-state")
        return true;
    return false;
}


}
}

