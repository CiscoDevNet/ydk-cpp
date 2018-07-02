
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_clns_isis_oper_7.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_clns_isis_oper {

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::LanData()
    :
    memory_exhausted_iih_count{YType::uint32, "memory-exhausted-iih-count"},
    dis_election_count{YType::uint32, "dis-election-count"}
        ,
    iih_count(std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount>())
{
    iih_count->parent = this;

    yang_name = "lan-data"; yang_parent_name = "per-area-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::~LanData()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::has_data() const
{
    if (is_presence_container) return true;
    return memory_exhausted_iih_count.is_set
	|| dis_election_count.is_set
	|| (iih_count !=  nullptr && iih_count->has_data());
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(memory_exhausted_iih_count.yfilter)
	|| ydk::is_set(dis_election_count.yfilter)
	|| (iih_count !=  nullptr && iih_count->has_operation());
}

std::string Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lan-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (memory_exhausted_iih_count.is_set || is_set(memory_exhausted_iih_count.yfilter)) leaf_name_data.push_back(memory_exhausted_iih_count.get_name_leafdata());
    if (dis_election_count.is_set || is_set(dis_election_count.yfilter)) leaf_name_data.push_back(dis_election_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iih-count")
    {
        if(iih_count == nullptr)
        {
            iih_count = std::make_shared<Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount>();
        }
        return iih_count;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(iih_count != nullptr)
    {
        children["iih-count"] = iih_count;
    }

    return children;
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "memory-exhausted-iih-count")
    {
        memory_exhausted_iih_count = value;
        memory_exhausted_iih_count.value_namespace = name_space;
        memory_exhausted_iih_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dis-election-count")
    {
        dis_election_count = value;
        dis_election_count.value_namespace = name_space;
        dis_election_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "memory-exhausted-iih-count")
    {
        memory_exhausted_iih_count.yfilter = yfilter;
    }
    if(value_path == "dis-election-count")
    {
        dis_election_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iih-count" || name == "memory-exhausted-iih-count" || name == "dis-election-count")
        return true;
    return false;
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::IihCount()
    :
    pdu_receive_count{YType::uint32, "pdu-receive-count"},
    pdu_send_count{YType::uint32, "pdu-send-count"}
{

    yang_name = "iih-count"; yang_parent_name = "lan-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::~IihCount()
{
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::has_data() const
{
    if (is_presence_container) return true;
    return pdu_receive_count.is_set
	|| pdu_send_count.is_set;
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pdu_receive_count.yfilter)
	|| ydk::is_set(pdu_send_count.yfilter);
}

std::string Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iih-count";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pdu_receive_count.is_set || is_set(pdu_receive_count.yfilter)) leaf_name_data.push_back(pdu_receive_count.get_name_leafdata());
    if (pdu_send_count.is_set || is_set(pdu_send_count.yfilter)) leaf_name_data.push_back(pdu_send_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pdu-receive-count")
    {
        pdu_receive_count = value;
        pdu_receive_count.value_namespace = name_space;
        pdu_receive_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pdu-send-count")
    {
        pdu_send_count = value;
        pdu_send_count.value_namespace = name_space;
        pdu_send_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pdu-receive-count")
    {
        pdu_receive_count.yfilter = yfilter;
    }
    if(value_path == "pdu-send-count")
    {
        pdu_send_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::InterfaceStatistics::InterfaceStatistic::PerAreaData::LanData::IihCount::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pdu-receive-count" || name == "pdu-send-count")
        return true;
    return false;
}

Isis::Instances::Instance::Protocol::Protocol()
    :
    vrf_context{YType::str, "vrf-context"},
    nsap_system_id{YType::str, "nsap-system-id"},
    valid_nsap_system_id{YType::boolean, "valid-nsap-system-id"},
    instance_id{YType::uint16, "instance-id"},
    running_levels{YType::enumeration, "running-levels"},
    configured_nsf_flavor{YType::enumeration, "configured-nsf-flavor"},
    last_restart_nsf_flavor{YType::enumeration, "last-restart-nsf-flavor"},
    last_restart_status{YType::enumeration, "last-restart-status"},
    te_connection{YType::enumeration, "te-connection"},
    remaining_time_for_next_nsf_restart{YType::uint32, "remaining-time-for-next-nsf-restart"},
    adj_form_count{YType::uint32, "adj-form-count"},
    adj_full_count{YType::uint32, "adj-full-count"},
    adj_stagger_enabled{YType::boolean, "adj-stagger-enabled"},
    adj_stagger_init{YType::uint32, "adj-stagger-init"},
    adj_stagger_max{YType::uint32, "adj-stagger-max"},
    srgb_allocated{YType::boolean, "srgb-allocated"},
    srgb_start{YType::uint32, "srgb-start"},
    srgb_end{YType::uint32, "srgb-end"},
    srlb_allocated{YType::boolean, "srlb-allocated"},
    srlb_start{YType::uint32, "srlb-start"},
    srlb_end{YType::uint32, "srlb-end"}
        ,
    manual_area_address(this, {})
    , active_area_address(this, {})
    , per_topo_data(this, {})
{

    yang_name = "protocol"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Protocol::~Protocol()
{
}

bool Isis::Instances::Instance::Protocol::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<manual_area_address.len(); index++)
    {
        if(manual_area_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<active_area_address.len(); index++)
    {
        if(active_area_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<per_topo_data.len(); index++)
    {
        if(per_topo_data[index]->has_data())
            return true;
    }
    return vrf_context.is_set
	|| nsap_system_id.is_set
	|| valid_nsap_system_id.is_set
	|| instance_id.is_set
	|| running_levels.is_set
	|| configured_nsf_flavor.is_set
	|| last_restart_nsf_flavor.is_set
	|| last_restart_status.is_set
	|| te_connection.is_set
	|| remaining_time_for_next_nsf_restart.is_set
	|| adj_form_count.is_set
	|| adj_full_count.is_set
	|| adj_stagger_enabled.is_set
	|| adj_stagger_init.is_set
	|| adj_stagger_max.is_set
	|| srgb_allocated.is_set
	|| srgb_start.is_set
	|| srgb_end.is_set
	|| srlb_allocated.is_set
	|| srlb_start.is_set
	|| srlb_end.is_set;
}

bool Isis::Instances::Instance::Protocol::has_operation() const
{
    for (std::size_t index=0; index<manual_area_address.len(); index++)
    {
        if(manual_area_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<active_area_address.len(); index++)
    {
        if(active_area_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<per_topo_data.len(); index++)
    {
        if(per_topo_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(vrf_context.yfilter)
	|| ydk::is_set(nsap_system_id.yfilter)
	|| ydk::is_set(valid_nsap_system_id.yfilter)
	|| ydk::is_set(instance_id.yfilter)
	|| ydk::is_set(running_levels.yfilter)
	|| ydk::is_set(configured_nsf_flavor.yfilter)
	|| ydk::is_set(last_restart_nsf_flavor.yfilter)
	|| ydk::is_set(last_restart_status.yfilter)
	|| ydk::is_set(te_connection.yfilter)
	|| ydk::is_set(remaining_time_for_next_nsf_restart.yfilter)
	|| ydk::is_set(adj_form_count.yfilter)
	|| ydk::is_set(adj_full_count.yfilter)
	|| ydk::is_set(adj_stagger_enabled.yfilter)
	|| ydk::is_set(adj_stagger_init.yfilter)
	|| ydk::is_set(adj_stagger_max.yfilter)
	|| ydk::is_set(srgb_allocated.yfilter)
	|| ydk::is_set(srgb_start.yfilter)
	|| ydk::is_set(srgb_end.yfilter)
	|| ydk::is_set(srlb_allocated.yfilter)
	|| ydk::is_set(srlb_start.yfilter)
	|| ydk::is_set(srlb_end.yfilter);
}

std::string Isis::Instances::Instance::Protocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Protocol::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_context.is_set || is_set(vrf_context.yfilter)) leaf_name_data.push_back(vrf_context.get_name_leafdata());
    if (nsap_system_id.is_set || is_set(nsap_system_id.yfilter)) leaf_name_data.push_back(nsap_system_id.get_name_leafdata());
    if (valid_nsap_system_id.is_set || is_set(valid_nsap_system_id.yfilter)) leaf_name_data.push_back(valid_nsap_system_id.get_name_leafdata());
    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (running_levels.is_set || is_set(running_levels.yfilter)) leaf_name_data.push_back(running_levels.get_name_leafdata());
    if (configured_nsf_flavor.is_set || is_set(configured_nsf_flavor.yfilter)) leaf_name_data.push_back(configured_nsf_flavor.get_name_leafdata());
    if (last_restart_nsf_flavor.is_set || is_set(last_restart_nsf_flavor.yfilter)) leaf_name_data.push_back(last_restart_nsf_flavor.get_name_leafdata());
    if (last_restart_status.is_set || is_set(last_restart_status.yfilter)) leaf_name_data.push_back(last_restart_status.get_name_leafdata());
    if (te_connection.is_set || is_set(te_connection.yfilter)) leaf_name_data.push_back(te_connection.get_name_leafdata());
    if (remaining_time_for_next_nsf_restart.is_set || is_set(remaining_time_for_next_nsf_restart.yfilter)) leaf_name_data.push_back(remaining_time_for_next_nsf_restart.get_name_leafdata());
    if (adj_form_count.is_set || is_set(adj_form_count.yfilter)) leaf_name_data.push_back(adj_form_count.get_name_leafdata());
    if (adj_full_count.is_set || is_set(adj_full_count.yfilter)) leaf_name_data.push_back(adj_full_count.get_name_leafdata());
    if (adj_stagger_enabled.is_set || is_set(adj_stagger_enabled.yfilter)) leaf_name_data.push_back(adj_stagger_enabled.get_name_leafdata());
    if (adj_stagger_init.is_set || is_set(adj_stagger_init.yfilter)) leaf_name_data.push_back(adj_stagger_init.get_name_leafdata());
    if (adj_stagger_max.is_set || is_set(adj_stagger_max.yfilter)) leaf_name_data.push_back(adj_stagger_max.get_name_leafdata());
    if (srgb_allocated.is_set || is_set(srgb_allocated.yfilter)) leaf_name_data.push_back(srgb_allocated.get_name_leafdata());
    if (srgb_start.is_set || is_set(srgb_start.yfilter)) leaf_name_data.push_back(srgb_start.get_name_leafdata());
    if (srgb_end.is_set || is_set(srgb_end.yfilter)) leaf_name_data.push_back(srgb_end.get_name_leafdata());
    if (srlb_allocated.is_set || is_set(srlb_allocated.yfilter)) leaf_name_data.push_back(srlb_allocated.get_name_leafdata());
    if (srlb_start.is_set || is_set(srlb_start.yfilter)) leaf_name_data.push_back(srlb_start.get_name_leafdata());
    if (srlb_end.is_set || is_set(srlb_end.yfilter)) leaf_name_data.push_back(srlb_end.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Protocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "manual-area-address")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Protocol::ManualAreaAddress>();
        c->parent = this;
        manual_area_address.append(c);
        return c;
    }

    if(child_yang_name == "active-area-address")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Protocol::ActiveAreaAddress>();
        c->parent = this;
        active_area_address.append(c);
        return c;
    }

    if(child_yang_name == "per-topo-data")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Protocol::PerTopoData>();
        c->parent = this;
        per_topo_data.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Protocol::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : manual_area_address.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : active_area_address.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto c : per_topo_data.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Protocol::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-context")
    {
        vrf_context = value;
        vrf_context.value_namespace = name_space;
        vrf_context.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nsap-system-id")
    {
        nsap_system_id = value;
        nsap_system_id.value_namespace = name_space;
        nsap_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid-nsap-system-id")
    {
        valid_nsap_system_id = value;
        valid_nsap_system_id.value_namespace = name_space;
        valid_nsap_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-id")
    {
        instance_id = value;
        instance_id.value_namespace = name_space;
        instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "running-levels")
    {
        running_levels = value;
        running_levels.value_namespace = name_space;
        running_levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-nsf-flavor")
    {
        configured_nsf_flavor = value;
        configured_nsf_flavor.value_namespace = name_space;
        configured_nsf_flavor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-restart-nsf-flavor")
    {
        last_restart_nsf_flavor = value;
        last_restart_nsf_flavor.value_namespace = name_space;
        last_restart_nsf_flavor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-restart-status")
    {
        last_restart_status = value;
        last_restart_status.value_namespace = name_space;
        last_restart_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-connection")
    {
        te_connection = value;
        te_connection.value_namespace = name_space;
        te_connection.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remaining-time-for-next-nsf-restart")
    {
        remaining_time_for_next_nsf_restart = value;
        remaining_time_for_next_nsf_restart.value_namespace = name_space;
        remaining_time_for_next_nsf_restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adj-form-count")
    {
        adj_form_count = value;
        adj_form_count.value_namespace = name_space;
        adj_form_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adj-full-count")
    {
        adj_full_count = value;
        adj_full_count.value_namespace = name_space;
        adj_full_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adj-stagger-enabled")
    {
        adj_stagger_enabled = value;
        adj_stagger_enabled.value_namespace = name_space;
        adj_stagger_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adj-stagger-init")
    {
        adj_stagger_init = value;
        adj_stagger_init.value_namespace = name_space;
        adj_stagger_init.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adj-stagger-max")
    {
        adj_stagger_max = value;
        adj_stagger_max.value_namespace = name_space;
        adj_stagger_max.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srgb-allocated")
    {
        srgb_allocated = value;
        srgb_allocated.value_namespace = name_space;
        srgb_allocated.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "srlb-allocated")
    {
        srlb_allocated = value;
        srlb_allocated.value_namespace = name_space;
        srlb_allocated.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlb-start")
    {
        srlb_start = value;
        srlb_start.value_namespace = name_space;
        srlb_start.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srlb-end")
    {
        srlb_end = value;
        srlb_end.value_namespace = name_space;
        srlb_end.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Protocol::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-context")
    {
        vrf_context.yfilter = yfilter;
    }
    if(value_path == "nsap-system-id")
    {
        nsap_system_id.yfilter = yfilter;
    }
    if(value_path == "valid-nsap-system-id")
    {
        valid_nsap_system_id.yfilter = yfilter;
    }
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
    if(value_path == "running-levels")
    {
        running_levels.yfilter = yfilter;
    }
    if(value_path == "configured-nsf-flavor")
    {
        configured_nsf_flavor.yfilter = yfilter;
    }
    if(value_path == "last-restart-nsf-flavor")
    {
        last_restart_nsf_flavor.yfilter = yfilter;
    }
    if(value_path == "last-restart-status")
    {
        last_restart_status.yfilter = yfilter;
    }
    if(value_path == "te-connection")
    {
        te_connection.yfilter = yfilter;
    }
    if(value_path == "remaining-time-for-next-nsf-restart")
    {
        remaining_time_for_next_nsf_restart.yfilter = yfilter;
    }
    if(value_path == "adj-form-count")
    {
        adj_form_count.yfilter = yfilter;
    }
    if(value_path == "adj-full-count")
    {
        adj_full_count.yfilter = yfilter;
    }
    if(value_path == "adj-stagger-enabled")
    {
        adj_stagger_enabled.yfilter = yfilter;
    }
    if(value_path == "adj-stagger-init")
    {
        adj_stagger_init.yfilter = yfilter;
    }
    if(value_path == "adj-stagger-max")
    {
        adj_stagger_max.yfilter = yfilter;
    }
    if(value_path == "srgb-allocated")
    {
        srgb_allocated.yfilter = yfilter;
    }
    if(value_path == "srgb-start")
    {
        srgb_start.yfilter = yfilter;
    }
    if(value_path == "srgb-end")
    {
        srgb_end.yfilter = yfilter;
    }
    if(value_path == "srlb-allocated")
    {
        srlb_allocated.yfilter = yfilter;
    }
    if(value_path == "srlb-start")
    {
        srlb_start.yfilter = yfilter;
    }
    if(value_path == "srlb-end")
    {
        srlb_end.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Protocol::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "manual-area-address" || name == "active-area-address" || name == "per-topo-data" || name == "vrf-context" || name == "nsap-system-id" || name == "valid-nsap-system-id" || name == "instance-id" || name == "running-levels" || name == "configured-nsf-flavor" || name == "last-restart-nsf-flavor" || name == "last-restart-status" || name == "te-connection" || name == "remaining-time-for-next-nsf-restart" || name == "adj-form-count" || name == "adj-full-count" || name == "adj-stagger-enabled" || name == "adj-stagger-init" || name == "adj-stagger-max" || name == "srgb-allocated" || name == "srgb-start" || name == "srgb-end" || name == "srlb-allocated" || name == "srlb-start" || name == "srlb-end")
        return true;
    return false;
}

Isis::Instances::Instance::Protocol::ManualAreaAddress::ManualAreaAddress()
    :
    entry{YType::str, "entry"}
{

    yang_name = "manual-area-address"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Protocol::ManualAreaAddress::~ManualAreaAddress()
{
}

bool Isis::Instances::Instance::Protocol::ManualAreaAddress::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::Protocol::ManualAreaAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Protocol::ManualAreaAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manual-area-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Protocol::ManualAreaAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Protocol::ManualAreaAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Protocol::ManualAreaAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Protocol::ManualAreaAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Protocol::ManualAreaAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Protocol::ManualAreaAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Protocol::ActiveAreaAddress::ActiveAreaAddress()
    :
    entry{YType::str, "entry"}
{

    yang_name = "active-area-address"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Protocol::ActiveAreaAddress::~ActiveAreaAddress()
{
}

bool Isis::Instances::Instance::Protocol::ActiveAreaAddress::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool Isis::Instances::Instance::Protocol::ActiveAreaAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string Isis::Instances::Instance::Protocol::ActiveAreaAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-area-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Protocol::ActiveAreaAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Protocol::ActiveAreaAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Protocol::ActiveAreaAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Protocol::ActiveAreaAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Protocol::ActiveAreaAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Protocol::ActiveAreaAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

Isis::Instances::Instance::Protocol::PerTopoData::PerTopoData()
    :
    default_admin_distance{YType::uint32, "default-admin-distance"},
    advertise_passive_only{YType::boolean, "advertise-passive-only"},
    wait_redist_complete{YType::boolean, "wait-redist-complete"}
        ,
    id(std::make_shared<Isis::Instances::Instance::Protocol::PerTopoData::Id>())
    , redist_protocols_list(std::make_shared<Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList>())
    , per_area_data(this, {})
{
    id->parent = this;
    redist_protocols_list->parent = this;

    yang_name = "per-topo-data"; yang_parent_name = "protocol"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Protocol::PerTopoData::~PerTopoData()
{
}

bool Isis::Instances::Instance::Protocol::PerTopoData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<per_area_data.len(); index++)
    {
        if(per_area_data[index]->has_data())
            return true;
    }
    return default_admin_distance.is_set
	|| advertise_passive_only.is_set
	|| wait_redist_complete.is_set
	|| (id !=  nullptr && id->has_data())
	|| (redist_protocols_list !=  nullptr && redist_protocols_list->has_data());
}

bool Isis::Instances::Instance::Protocol::PerTopoData::has_operation() const
{
    for (std::size_t index=0; index<per_area_data.len(); index++)
    {
        if(per_area_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(default_admin_distance.yfilter)
	|| ydk::is_set(advertise_passive_only.yfilter)
	|| ydk::is_set(wait_redist_complete.yfilter)
	|| (id !=  nullptr && id->has_operation())
	|| (redist_protocols_list !=  nullptr && redist_protocols_list->has_operation());
}

std::string Isis::Instances::Instance::Protocol::PerTopoData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-topo-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Protocol::PerTopoData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_admin_distance.is_set || is_set(default_admin_distance.yfilter)) leaf_name_data.push_back(default_admin_distance.get_name_leafdata());
    if (advertise_passive_only.is_set || is_set(advertise_passive_only.yfilter)) leaf_name_data.push_back(advertise_passive_only.get_name_leafdata());
    if (wait_redist_complete.is_set || is_set(wait_redist_complete.yfilter)) leaf_name_data.push_back(wait_redist_complete.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Protocol::PerTopoData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "id")
    {
        if(id == nullptr)
        {
            id = std::make_shared<Isis::Instances::Instance::Protocol::PerTopoData::Id>();
        }
        return id;
    }

    if(child_yang_name == "redist-protocols-list")
    {
        if(redist_protocols_list == nullptr)
        {
            redist_protocols_list = std::make_shared<Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList>();
        }
        return redist_protocols_list;
    }

    if(child_yang_name == "per-area-data")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData>();
        c->parent = this;
        per_area_data.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Protocol::PerTopoData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(id != nullptr)
    {
        children["id"] = id;
    }

    if(redist_protocols_list != nullptr)
    {
        children["redist-protocols-list"] = redist_protocols_list;
    }

    count = 0;
    for (auto c : per_area_data.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Protocol::PerTopoData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-admin-distance")
    {
        default_admin_distance = value;
        default_admin_distance.value_namespace = name_space;
        default_admin_distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertise-passive-only")
    {
        advertise_passive_only = value;
        advertise_passive_only.value_namespace = name_space;
        advertise_passive_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "wait-redist-complete")
    {
        wait_redist_complete = value;
        wait_redist_complete.value_namespace = name_space;
        wait_redist_complete.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Protocol::PerTopoData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-admin-distance")
    {
        default_admin_distance.yfilter = yfilter;
    }
    if(value_path == "advertise-passive-only")
    {
        advertise_passive_only.yfilter = yfilter;
    }
    if(value_path == "wait-redist-complete")
    {
        wait_redist_complete.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Protocol::PerTopoData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "redist-protocols-list" || name == "per-area-data" || name == "default-admin-distance" || name == "advertise-passive-only" || name == "wait-redist-complete")
        return true;
    return false;
}

Isis::Instances::Instance::Protocol::PerTopoData::Id::Id()
    :
    af_name{YType::enumeration, "af-name"},
    saf_name{YType::enumeration, "saf-name"},
    vrf_name{YType::str, "vrf-name"},
    topology_name{YType::str, "topology-name"}
{

    yang_name = "id"; yang_parent_name = "per-topo-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Protocol::PerTopoData::Id::~Id()
{
}

bool Isis::Instances::Instance::Protocol::PerTopoData::Id::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| saf_name.is_set
	|| vrf_name.is_set
	|| topology_name.is_set;
}

bool Isis::Instances::Instance::Protocol::PerTopoData::Id::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| ydk::is_set(saf_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(topology_name.yfilter);
}

std::string Isis::Instances::Instance::Protocol::PerTopoData::Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Protocol::PerTopoData::Id::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (saf_name.is_set || is_set(saf_name.yfilter)) leaf_name_data.push_back(saf_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (topology_name.is_set || is_set(topology_name.yfilter)) leaf_name_data.push_back(topology_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Protocol::PerTopoData::Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Protocol::PerTopoData::Id::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Protocol::PerTopoData::Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "saf-name")
    {
        saf_name = value;
        saf_name.value_namespace = name_space;
        saf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "topology-name")
    {
        topology_name = value;
        topology_name.value_namespace = name_space;
        topology_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Protocol::PerTopoData::Id::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
    if(value_path == "saf-name")
    {
        saf_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "topology-name")
    {
        topology_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Protocol::PerTopoData::Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "af-name" || name == "saf-name" || name == "vrf-name" || name == "topology-name")
        return true;
    return false;
}

Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::RedistProtocolsList()
    :
    isis_sh_redist_entry(this, {})
{

    yang_name = "redist-protocols-list"; yang_parent_name = "per-topo-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::~RedistProtocolsList()
{
}

bool Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<isis_sh_redist_entry.len(); index++)
    {
        if(isis_sh_redist_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::has_operation() const
{
    for (std::size_t index=0; index<isis_sh_redist_entry.len(); index++)
    {
        if(isis_sh_redist_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redist-protocols-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis-sh-redist-entry")
    {
        auto c = std::make_shared<Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry>();
        c->parent = this;
        isis_sh_redist_entry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : isis_sh_redist_entry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-sh-redist-entry")
        return true;
    return false;
}

Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::IsisShRedistEntry()
    :
    protocol_details(std::make_shared<Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails>())
{
    protocol_details->parent = this;

    yang_name = "isis-sh-redist-entry"; yang_parent_name = "redist-protocols-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::~IsisShRedistEntry()
{
}

bool Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::has_data() const
{
    if (is_presence_container) return true;
    return (protocol_details !=  nullptr && protocol_details->has_data());
}

bool Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::has_operation() const
{
    return is_set(yfilter)
	|| (protocol_details !=  nullptr && protocol_details->has_operation());
}

std::string Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-sh-redist-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-details")
    {
        if(protocol_details == nullptr)
        {
            protocol_details = std::make_shared<Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails>();
        }
        return protocol_details;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(protocol_details != nullptr)
    {
        children["protocol-details"] = protocol_details;
    }

    return children;
}

void Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-details")
        return true;
    return false;
}

Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::ProtocolDetails()
    :
    protocol{YType::enumeration, "protocol"},
    isis_instance_id{YType::str, "isis-instance-id"},
    ospf_process_id{YType::str, "ospf-process-id"},
    ospfv3_process_id{YType::str, "ospfv3-process-id"},
    bgp_as_number{YType::str, "bgp-as-number"},
    eigrp_as_number{YType::str, "eigrp-as-number"},
    application_name{YType::str, "application-name"}
{

    yang_name = "protocol-details"; yang_parent_name = "isis-sh-redist-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::~ProtocolDetails()
{
}

bool Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::has_data() const
{
    if (is_presence_container) return true;
    return protocol.is_set
	|| isis_instance_id.is_set
	|| ospf_process_id.is_set
	|| ospfv3_process_id.is_set
	|| bgp_as_number.is_set
	|| eigrp_as_number.is_set
	|| application_name.is_set;
}

bool Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(isis_instance_id.yfilter)
	|| ydk::is_set(ospf_process_id.yfilter)
	|| ydk::is_set(ospfv3_process_id.yfilter)
	|| ydk::is_set(bgp_as_number.yfilter)
	|| ydk::is_set(eigrp_as_number.yfilter)
	|| ydk::is_set(application_name.yfilter);
}

std::string Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-details";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (isis_instance_id.is_set || is_set(isis_instance_id.yfilter)) leaf_name_data.push_back(isis_instance_id.get_name_leafdata());
    if (ospf_process_id.is_set || is_set(ospf_process_id.yfilter)) leaf_name_data.push_back(ospf_process_id.get_name_leafdata());
    if (ospfv3_process_id.is_set || is_set(ospfv3_process_id.yfilter)) leaf_name_data.push_back(ospfv3_process_id.get_name_leafdata());
    if (bgp_as_number.is_set || is_set(bgp_as_number.yfilter)) leaf_name_data.push_back(bgp_as_number.get_name_leafdata());
    if (eigrp_as_number.is_set || is_set(eigrp_as_number.yfilter)) leaf_name_data.push_back(eigrp_as_number.get_name_leafdata());
    if (application_name.is_set || is_set(application_name.yfilter)) leaf_name_data.push_back(application_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-instance-id")
    {
        isis_instance_id = value;
        isis_instance_id.value_namespace = name_space;
        isis_instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf-process-id")
    {
        ospf_process_id = value;
        ospf_process_id.value_namespace = name_space;
        ospf_process_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospfv3-process-id")
    {
        ospfv3_process_id = value;
        ospfv3_process_id.value_namespace = name_space;
        ospfv3_process_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-as-number")
    {
        bgp_as_number = value;
        bgp_as_number.value_namespace = name_space;
        bgp_as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eigrp-as-number")
    {
        eigrp_as_number = value;
        eigrp_as_number.value_namespace = name_space;
        eigrp_as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "application-name")
    {
        application_name = value;
        application_name.value_namespace = name_space;
        application_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "isis-instance-id")
    {
        isis_instance_id.yfilter = yfilter;
    }
    if(value_path == "ospf-process-id")
    {
        ospf_process_id.yfilter = yfilter;
    }
    if(value_path == "ospfv3-process-id")
    {
        ospfv3_process_id.yfilter = yfilter;
    }
    if(value_path == "bgp-as-number")
    {
        bgp_as_number.yfilter = yfilter;
    }
    if(value_path == "eigrp-as-number")
    {
        eigrp_as_number.yfilter = yfilter;
    }
    if(value_path == "application-name")
    {
        application_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Protocol::PerTopoData::RedistProtocolsList::IsisShRedistEntry::ProtocolDetails::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol" || name == "isis-instance-id" || name == "ospf-process-id" || name == "ospfv3-process-id" || name == "bgp-as-number" || name == "eigrp-as-number" || name == "application-name")
        return true;
    return false;
}

Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::PerAreaData()
    :
    level{YType::enumeration, "level"},
    uses_default_link_topo_flag{YType::boolean, "uses-default-link-topo-flag"},
    generated_metric_style{YType::enumeration, "generated-metric-style"},
    accepted_metric_style{YType::enumeration, "accepted-metric-style"},
    metric{YType::uint32, "metric"},
    ispf_state{YType::enumeration, "ispf-state"},
    te_enabled{YType::boolean, "te-enabled"},
    uloop_avoidance_type{YType::enumeration, "uloop-avoidance-type"},
    rib_update_delay{YType::uint32, "rib-update-delay"},
    sr_uloop_is_active{YType::boolean, "sr-uloop-is-active"},
    duration{YType::uint32, "duration"},
    sr_uloop_event{YType::enumeration, "sr-uloop-event"},
    sr_uloop_near_node_id{YType::str, "sr-uloop-near-node-id"},
    sr_uloop_far_node_id{YType::str, "sr-uloop-far-node-id"}
{

    yang_name = "per-area-data"; yang_parent_name = "per-topo-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::~PerAreaData()
{
}

bool Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| uses_default_link_topo_flag.is_set
	|| generated_metric_style.is_set
	|| accepted_metric_style.is_set
	|| metric.is_set
	|| ispf_state.is_set
	|| te_enabled.is_set
	|| uloop_avoidance_type.is_set
	|| rib_update_delay.is_set
	|| sr_uloop_is_active.is_set
	|| duration.is_set
	|| sr_uloop_event.is_set
	|| sr_uloop_near_node_id.is_set
	|| sr_uloop_far_node_id.is_set;
}

bool Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(uses_default_link_topo_flag.yfilter)
	|| ydk::is_set(generated_metric_style.yfilter)
	|| ydk::is_set(accepted_metric_style.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(ispf_state.yfilter)
	|| ydk::is_set(te_enabled.yfilter)
	|| ydk::is_set(uloop_avoidance_type.yfilter)
	|| ydk::is_set(rib_update_delay.yfilter)
	|| ydk::is_set(sr_uloop_is_active.yfilter)
	|| ydk::is_set(duration.yfilter)
	|| ydk::is_set(sr_uloop_event.yfilter)
	|| ydk::is_set(sr_uloop_near_node_id.yfilter)
	|| ydk::is_set(sr_uloop_far_node_id.yfilter);
}

std::string Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-area-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (uses_default_link_topo_flag.is_set || is_set(uses_default_link_topo_flag.yfilter)) leaf_name_data.push_back(uses_default_link_topo_flag.get_name_leafdata());
    if (generated_metric_style.is_set || is_set(generated_metric_style.yfilter)) leaf_name_data.push_back(generated_metric_style.get_name_leafdata());
    if (accepted_metric_style.is_set || is_set(accepted_metric_style.yfilter)) leaf_name_data.push_back(accepted_metric_style.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (ispf_state.is_set || is_set(ispf_state.yfilter)) leaf_name_data.push_back(ispf_state.get_name_leafdata());
    if (te_enabled.is_set || is_set(te_enabled.yfilter)) leaf_name_data.push_back(te_enabled.get_name_leafdata());
    if (uloop_avoidance_type.is_set || is_set(uloop_avoidance_type.yfilter)) leaf_name_data.push_back(uloop_avoidance_type.get_name_leafdata());
    if (rib_update_delay.is_set || is_set(rib_update_delay.yfilter)) leaf_name_data.push_back(rib_update_delay.get_name_leafdata());
    if (sr_uloop_is_active.is_set || is_set(sr_uloop_is_active.yfilter)) leaf_name_data.push_back(sr_uloop_is_active.get_name_leafdata());
    if (duration.is_set || is_set(duration.yfilter)) leaf_name_data.push_back(duration.get_name_leafdata());
    if (sr_uloop_event.is_set || is_set(sr_uloop_event.yfilter)) leaf_name_data.push_back(sr_uloop_event.get_name_leafdata());
    if (sr_uloop_near_node_id.is_set || is_set(sr_uloop_near_node_id.yfilter)) leaf_name_data.push_back(sr_uloop_near_node_id.get_name_leafdata());
    if (sr_uloop_far_node_id.is_set || is_set(sr_uloop_far_node_id.yfilter)) leaf_name_data.push_back(sr_uloop_far_node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uses-default-link-topo-flag")
    {
        uses_default_link_topo_flag = value;
        uses_default_link_topo_flag.value_namespace = name_space;
        uses_default_link_topo_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generated-metric-style")
    {
        generated_metric_style = value;
        generated_metric_style.value_namespace = name_space;
        generated_metric_style.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accepted-metric-style")
    {
        accepted_metric_style = value;
        accepted_metric_style.value_namespace = name_space;
        accepted_metric_style.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ispf-state")
    {
        ispf_state = value;
        ispf_state.value_namespace = name_space;
        ispf_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "te-enabled")
    {
        te_enabled = value;
        te_enabled.value_namespace = name_space;
        te_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uloop-avoidance-type")
    {
        uloop_avoidance_type = value;
        uloop_avoidance_type.value_namespace = name_space;
        uloop_avoidance_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-update-delay")
    {
        rib_update_delay = value;
        rib_update_delay.value_namespace = name_space;
        rib_update_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-uloop-is-active")
    {
        sr_uloop_is_active = value;
        sr_uloop_is_active.value_namespace = name_space;
        sr_uloop_is_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "duration")
    {
        duration = value;
        duration.value_namespace = name_space;
        duration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-uloop-event")
    {
        sr_uloop_event = value;
        sr_uloop_event.value_namespace = name_space;
        sr_uloop_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-uloop-near-node-id")
    {
        sr_uloop_near_node_id = value;
        sr_uloop_near_node_id.value_namespace = name_space;
        sr_uloop_near_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-uloop-far-node-id")
    {
        sr_uloop_far_node_id = value;
        sr_uloop_far_node_id.value_namespace = name_space;
        sr_uloop_far_node_id.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "uses-default-link-topo-flag")
    {
        uses_default_link_topo_flag.yfilter = yfilter;
    }
    if(value_path == "generated-metric-style")
    {
        generated_metric_style.yfilter = yfilter;
    }
    if(value_path == "accepted-metric-style")
    {
        accepted_metric_style.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "ispf-state")
    {
        ispf_state.yfilter = yfilter;
    }
    if(value_path == "te-enabled")
    {
        te_enabled.yfilter = yfilter;
    }
    if(value_path == "uloop-avoidance-type")
    {
        uloop_avoidance_type.yfilter = yfilter;
    }
    if(value_path == "rib-update-delay")
    {
        rib_update_delay.yfilter = yfilter;
    }
    if(value_path == "sr-uloop-is-active")
    {
        sr_uloop_is_active.yfilter = yfilter;
    }
    if(value_path == "duration")
    {
        duration.yfilter = yfilter;
    }
    if(value_path == "sr-uloop-event")
    {
        sr_uloop_event.yfilter = yfilter;
    }
    if(value_path == "sr-uloop-near-node-id")
    {
        sr_uloop_near_node_id.yfilter = yfilter;
    }
    if(value_path == "sr-uloop-far-node-id")
    {
        sr_uloop_far_node_id.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::Protocol::PerTopoData::PerAreaData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "uses-default-link-topo-flag" || name == "generated-metric-style" || name == "accepted-metric-style" || name == "metric" || name == "ispf-state" || name == "te-enabled" || name == "uloop-avoidance-type" || name == "rib-update-delay" || name == "sr-uloop-is-active" || name == "duration" || name == "sr-uloop-event" || name == "sr-uloop-near-node-id" || name == "sr-uloop-far-node-id")
        return true;
    return false;
}

Isis::Instances::Instance::NeighborSummaries::NeighborSummaries()
    :
    neighbor_summary(this, {"interface_name"})
{

    yang_name = "neighbor-summaries"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::NeighborSummaries::~NeighborSummaries()
{
}

bool Isis::Instances::Instance::NeighborSummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor_summary.len(); index++)
    {
        if(neighbor_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::NeighborSummaries::has_operation() const
{
    for (std::size_t index=0; index<neighbor_summary.len(); index++)
    {
        if(neighbor_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::NeighborSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NeighborSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NeighborSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor-summary")
    {
        auto c = std::make_shared<Isis::Instances::Instance::NeighborSummaries::NeighborSummary>();
        c->parent = this;
        neighbor_summary.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NeighborSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : neighbor_summary.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::NeighborSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::NeighborSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::NeighborSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-summary")
        return true;
    return false;
}

Isis::Instances::Instance::NeighborSummaries::NeighborSummary::NeighborSummary()
    :
    interface_name{YType::str, "interface-name"}
        ,
    level1_neighbors(std::make_shared<Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors>())
    , level2_neighbors(std::make_shared<Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors>())
    , level12_neigbors(std::make_shared<Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors>())
{
    level1_neighbors->parent = this;
    level2_neighbors->parent = this;
    level12_neigbors->parent = this;

    yang_name = "neighbor-summary"; yang_parent_name = "neighbor-summaries"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::NeighborSummaries::NeighborSummary::~NeighborSummary()
{
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| (level1_neighbors !=  nullptr && level1_neighbors->has_data())
	|| (level2_neighbors !=  nullptr && level2_neighbors->has_data())
	|| (level12_neigbors !=  nullptr && level12_neigbors->has_data());
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (level1_neighbors !=  nullptr && level1_neighbors->has_operation())
	|| (level2_neighbors !=  nullptr && level2_neighbors->has_operation())
	|| (level12_neigbors !=  nullptr && level12_neigbors->has_operation());
}

std::string Isis::Instances::Instance::NeighborSummaries::NeighborSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-summary";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NeighborSummaries::NeighborSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NeighborSummaries::NeighborSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level1-neighbors")
    {
        if(level1_neighbors == nullptr)
        {
            level1_neighbors = std::make_shared<Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors>();
        }
        return level1_neighbors;
    }

    if(child_yang_name == "level2-neighbors")
    {
        if(level2_neighbors == nullptr)
        {
            level2_neighbors = std::make_shared<Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors>();
        }
        return level2_neighbors;
    }

    if(child_yang_name == "level12-neigbors")
    {
        if(level12_neigbors == nullptr)
        {
            level12_neigbors = std::make_shared<Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors>();
        }
        return level12_neigbors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NeighborSummaries::NeighborSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(level1_neighbors != nullptr)
    {
        children["level1-neighbors"] = level1_neighbors;
    }

    if(level2_neighbors != nullptr)
    {
        children["level2-neighbors"] = level2_neighbors;
    }

    if(level12_neigbors != nullptr)
    {
        children["level12-neigbors"] = level12_neigbors;
    }

    return children;
}

void Isis::Instances::Instance::NeighborSummaries::NeighborSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NeighborSummaries::NeighborSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level1-neighbors" || name == "level2-neighbors" || name == "level12-neigbors" || name == "interface-name")
        return true;
    return false;
}

Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::Level1Neighbors()
    :
    neighbor_up_count{YType::uint32, "neighbor-up-count"},
    neighbor_init_count{YType::uint32, "neighbor-init-count"},
    neighbor_down_count{YType::uint32, "neighbor-down-count"}
{

    yang_name = "level1-neighbors"; yang_parent_name = "neighbor-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::~Level1Neighbors()
{
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::has_data() const
{
    if (is_presence_container) return true;
    return neighbor_up_count.is_set
	|| neighbor_init_count.is_set
	|| neighbor_down_count.is_set;
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_up_count.yfilter)
	|| ydk::is_set(neighbor_init_count.yfilter)
	|| ydk::is_set(neighbor_down_count.yfilter);
}

std::string Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level1-neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_up_count.is_set || is_set(neighbor_up_count.yfilter)) leaf_name_data.push_back(neighbor_up_count.get_name_leafdata());
    if (neighbor_init_count.is_set || is_set(neighbor_init_count.yfilter)) leaf_name_data.push_back(neighbor_init_count.get_name_leafdata());
    if (neighbor_down_count.is_set || is_set(neighbor_down_count.yfilter)) leaf_name_data.push_back(neighbor_down_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-up-count")
    {
        neighbor_up_count = value;
        neighbor_up_count.value_namespace = name_space;
        neighbor_up_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-init-count")
    {
        neighbor_init_count = value;
        neighbor_init_count.value_namespace = name_space;
        neighbor_init_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-down-count")
    {
        neighbor_down_count = value;
        neighbor_down_count.value_namespace = name_space;
        neighbor_down_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-up-count")
    {
        neighbor_up_count.yfilter = yfilter;
    }
    if(value_path == "neighbor-init-count")
    {
        neighbor_init_count.yfilter = yfilter;
    }
    if(value_path == "neighbor-down-count")
    {
        neighbor_down_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level1Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-up-count" || name == "neighbor-init-count" || name == "neighbor-down-count")
        return true;
    return false;
}

Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::Level2Neighbors()
    :
    neighbor_up_count{YType::uint32, "neighbor-up-count"},
    neighbor_init_count{YType::uint32, "neighbor-init-count"},
    neighbor_down_count{YType::uint32, "neighbor-down-count"}
{

    yang_name = "level2-neighbors"; yang_parent_name = "neighbor-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::~Level2Neighbors()
{
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::has_data() const
{
    if (is_presence_container) return true;
    return neighbor_up_count.is_set
	|| neighbor_init_count.is_set
	|| neighbor_down_count.is_set;
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_up_count.yfilter)
	|| ydk::is_set(neighbor_init_count.yfilter)
	|| ydk::is_set(neighbor_down_count.yfilter);
}

std::string Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level2-neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_up_count.is_set || is_set(neighbor_up_count.yfilter)) leaf_name_data.push_back(neighbor_up_count.get_name_leafdata());
    if (neighbor_init_count.is_set || is_set(neighbor_init_count.yfilter)) leaf_name_data.push_back(neighbor_init_count.get_name_leafdata());
    if (neighbor_down_count.is_set || is_set(neighbor_down_count.yfilter)) leaf_name_data.push_back(neighbor_down_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-up-count")
    {
        neighbor_up_count = value;
        neighbor_up_count.value_namespace = name_space;
        neighbor_up_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-init-count")
    {
        neighbor_init_count = value;
        neighbor_init_count.value_namespace = name_space;
        neighbor_init_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-down-count")
    {
        neighbor_down_count = value;
        neighbor_down_count.value_namespace = name_space;
        neighbor_down_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-up-count")
    {
        neighbor_up_count.yfilter = yfilter;
    }
    if(value_path == "neighbor-init-count")
    {
        neighbor_init_count.yfilter = yfilter;
    }
    if(value_path == "neighbor-down-count")
    {
        neighbor_down_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level2Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-up-count" || name == "neighbor-init-count" || name == "neighbor-down-count")
        return true;
    return false;
}

Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::Level12Neigbors()
    :
    neighbor_up_count{YType::uint32, "neighbor-up-count"},
    neighbor_init_count{YType::uint32, "neighbor-init-count"},
    neighbor_down_count{YType::uint32, "neighbor-down-count"}
{

    yang_name = "level12-neigbors"; yang_parent_name = "neighbor-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::~Level12Neigbors()
{
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::has_data() const
{
    if (is_presence_container) return true;
    return neighbor_up_count.is_set
	|| neighbor_init_count.is_set
	|| neighbor_down_count.is_set;
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_up_count.yfilter)
	|| ydk::is_set(neighbor_init_count.yfilter)
	|| ydk::is_set(neighbor_down_count.yfilter);
}

std::string Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level12-neigbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_up_count.is_set || is_set(neighbor_up_count.yfilter)) leaf_name_data.push_back(neighbor_up_count.get_name_leafdata());
    if (neighbor_init_count.is_set || is_set(neighbor_init_count.yfilter)) leaf_name_data.push_back(neighbor_init_count.get_name_leafdata());
    if (neighbor_down_count.is_set || is_set(neighbor_down_count.yfilter)) leaf_name_data.push_back(neighbor_down_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-up-count")
    {
        neighbor_up_count = value;
        neighbor_up_count.value_namespace = name_space;
        neighbor_up_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-init-count")
    {
        neighbor_init_count = value;
        neighbor_init_count.value_namespace = name_space;
        neighbor_init_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-down-count")
    {
        neighbor_down_count = value;
        neighbor_down_count.value_namespace = name_space;
        neighbor_down_count.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-up-count")
    {
        neighbor_up_count.yfilter = yfilter;
    }
    if(value_path == "neighbor-init-count")
    {
        neighbor_init_count.yfilter = yfilter;
    }
    if(value_path == "neighbor-down-count")
    {
        neighbor_down_count.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NeighborSummaries::NeighborSummary::Level12Neigbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor-up-count" || name == "neighbor-init-count" || name == "neighbor-down-count")
        return true;
    return false;
}

Isis::Instances::Instance::CheckpointLsps::CheckpointLsps()
    :
    checkpoint_lsp(this, {})
{

    yang_name = "checkpoint-lsps"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::CheckpointLsps::~CheckpointLsps()
{
}

bool Isis::Instances::Instance::CheckpointLsps::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<checkpoint_lsp.len(); index++)
    {
        if(checkpoint_lsp[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::CheckpointLsps::has_operation() const
{
    for (std::size_t index=0; index<checkpoint_lsp.len(); index++)
    {
        if(checkpoint_lsp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::CheckpointLsps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checkpoint-lsps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::CheckpointLsps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::CheckpointLsps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "checkpoint-lsp")
    {
        auto c = std::make_shared<Isis::Instances::Instance::CheckpointLsps::CheckpointLsp>();
        c->parent = this;
        checkpoint_lsp.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::CheckpointLsps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : checkpoint_lsp.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::CheckpointLsps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::CheckpointLsps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::CheckpointLsps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "checkpoint-lsp")
        return true;
    return false;
}

Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::CheckpointLsp()
    :
    level{YType::enumeration, "level"},
    lsp_id{YType::str, "lsp-id"},
    checkpoint_lsp_object_id{YType::uint32, "checkpoint-lsp-object-id"},
    checkpoint_lsp_level{YType::uint8, "checkpoint-lsp-level"},
    checkpoint_lsp_local_flag{YType::boolean, "checkpoint-lsp-local-flag"},
    checkpoint_lsp_id{YType::str, "checkpoint-lsp-id"}
{

    yang_name = "checkpoint-lsp"; yang_parent_name = "checkpoint-lsps"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::~CheckpointLsp()
{
}

bool Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| lsp_id.is_set
	|| checkpoint_lsp_object_id.is_set
	|| checkpoint_lsp_level.is_set
	|| checkpoint_lsp_local_flag.is_set
	|| checkpoint_lsp_id.is_set;
}

bool Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(lsp_id.yfilter)
	|| ydk::is_set(checkpoint_lsp_object_id.yfilter)
	|| ydk::is_set(checkpoint_lsp_level.yfilter)
	|| ydk::is_set(checkpoint_lsp_local_flag.yfilter)
	|| ydk::is_set(checkpoint_lsp_id.yfilter);
}

std::string Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checkpoint-lsp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.yfilter)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (checkpoint_lsp_object_id.is_set || is_set(checkpoint_lsp_object_id.yfilter)) leaf_name_data.push_back(checkpoint_lsp_object_id.get_name_leafdata());
    if (checkpoint_lsp_level.is_set || is_set(checkpoint_lsp_level.yfilter)) leaf_name_data.push_back(checkpoint_lsp_level.get_name_leafdata());
    if (checkpoint_lsp_local_flag.is_set || is_set(checkpoint_lsp_local_flag.yfilter)) leaf_name_data.push_back(checkpoint_lsp_local_flag.get_name_leafdata());
    if (checkpoint_lsp_id.is_set || is_set(checkpoint_lsp_id.yfilter)) leaf_name_data.push_back(checkpoint_lsp_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
        lsp_id.value_namespace = name_space;
        lsp_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-lsp-object-id")
    {
        checkpoint_lsp_object_id = value;
        checkpoint_lsp_object_id.value_namespace = name_space;
        checkpoint_lsp_object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-lsp-level")
    {
        checkpoint_lsp_level = value;
        checkpoint_lsp_level.value_namespace = name_space;
        checkpoint_lsp_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-lsp-local-flag")
    {
        checkpoint_lsp_local_flag = value;
        checkpoint_lsp_local_flag.value_namespace = name_space;
        checkpoint_lsp_local_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-lsp-id")
    {
        checkpoint_lsp_id = value;
        checkpoint_lsp_id.value_namespace = name_space;
        checkpoint_lsp_id.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "lsp-id")
    {
        lsp_id.yfilter = yfilter;
    }
    if(value_path == "checkpoint-lsp-object-id")
    {
        checkpoint_lsp_object_id.yfilter = yfilter;
    }
    if(value_path == "checkpoint-lsp-level")
    {
        checkpoint_lsp_level.yfilter = yfilter;
    }
    if(value_path == "checkpoint-lsp-local-flag")
    {
        checkpoint_lsp_local_flag.yfilter = yfilter;
    }
    if(value_path == "checkpoint-lsp-id")
    {
        checkpoint_lsp_id.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::CheckpointLsps::CheckpointLsp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "lsp-id" || name == "checkpoint-lsp-object-id" || name == "checkpoint-lsp-level" || name == "checkpoint-lsp-local-flag" || name == "checkpoint-lsp-id")
        return true;
    return false;
}

Isis::Instances::Instance::MeshGroups::MeshGroups()
    :
    mesh_group_configured_interface_list(std::make_shared<Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList>())
{
    mesh_group_configured_interface_list->parent = this;

    yang_name = "mesh-groups"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::MeshGroups::~MeshGroups()
{
}

bool Isis::Instances::Instance::MeshGroups::has_data() const
{
    if (is_presence_container) return true;
    return (mesh_group_configured_interface_list !=  nullptr && mesh_group_configured_interface_list->has_data());
}

bool Isis::Instances::Instance::MeshGroups::has_operation() const
{
    return is_set(yfilter)
	|| (mesh_group_configured_interface_list !=  nullptr && mesh_group_configured_interface_list->has_operation());
}

std::string Isis::Instances::Instance::MeshGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::MeshGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::MeshGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mesh-group-configured-interface-list")
    {
        if(mesh_group_configured_interface_list == nullptr)
        {
            mesh_group_configured_interface_list = std::make_shared<Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList>();
        }
        return mesh_group_configured_interface_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::MeshGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(mesh_group_configured_interface_list != nullptr)
    {
        children["mesh-group-configured-interface-list"] = mesh_group_configured_interface_list;
    }

    return children;
}

void Isis::Instances::Instance::MeshGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::MeshGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::MeshGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mesh-group-configured-interface-list")
        return true;
    return false;
}

Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::MeshGroupConfiguredInterfaceList()
    :
    isis_sh_mesh_entry(this, {})
{

    yang_name = "mesh-group-configured-interface-list"; yang_parent_name = "mesh-groups"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::~MeshGroupConfiguredInterfaceList()
{
}

bool Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<isis_sh_mesh_entry.len(); index++)
    {
        if(isis_sh_mesh_entry[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::has_operation() const
{
    for (std::size_t index=0; index<isis_sh_mesh_entry.len(); index++)
    {
        if(isis_sh_mesh_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mesh-group-configured-interface-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis-sh-mesh-entry")
    {
        auto c = std::make_shared<Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry>();
        c->parent = this;
        isis_sh_mesh_entry.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : isis_sh_mesh_entry.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-sh-mesh-entry")
        return true;
    return false;
}

Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::IsisShMeshEntry()
    :
    mesh_group_interface{YType::str, "mesh-group-interface"},
    mesh_group_number{YType::uint32, "mesh-group-number"}
{

    yang_name = "isis-sh-mesh-entry"; yang_parent_name = "mesh-group-configured-interface-list"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::~IsisShMeshEntry()
{
}

bool Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::has_data() const
{
    if (is_presence_container) return true;
    return mesh_group_interface.is_set
	|| mesh_group_number.is_set;
}

bool Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mesh_group_interface.yfilter)
	|| ydk::is_set(mesh_group_number.yfilter);
}

std::string Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-sh-mesh-entry";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mesh_group_interface.is_set || is_set(mesh_group_interface.yfilter)) leaf_name_data.push_back(mesh_group_interface.get_name_leafdata());
    if (mesh_group_number.is_set || is_set(mesh_group_number.yfilter)) leaf_name_data.push_back(mesh_group_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mesh-group-interface")
    {
        mesh_group_interface = value;
        mesh_group_interface.value_namespace = name_space;
        mesh_group_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mesh-group-number")
    {
        mesh_group_number = value;
        mesh_group_number.value_namespace = name_space;
        mesh_group_number.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mesh-group-interface")
    {
        mesh_group_interface.yfilter = yfilter;
    }
    if(value_path == "mesh-group-number")
    {
        mesh_group_number.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::MeshGroups::MeshGroupConfiguredInterfaceList::IsisShMeshEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mesh-group-interface" || name == "mesh-group-number")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatistics::NsrStatistics()
    :
    isis_vm_state{YType::uint16, "isis-vm-state"}
        ,
    isis_nsr_stats_data(std::make_shared<Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData>())
{
    isis_nsr_stats_data->parent = this;

    yang_name = "nsr-statistics"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::NsrStatistics::~NsrStatistics()
{
}

bool Isis::Instances::Instance::NsrStatistics::has_data() const
{
    if (is_presence_container) return true;
    return isis_vm_state.is_set
	|| (isis_nsr_stats_data !=  nullptr && isis_nsr_stats_data->has_data());
}

bool Isis::Instances::Instance::NsrStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(isis_vm_state.yfilter)
	|| (isis_nsr_stats_data !=  nullptr && isis_nsr_stats_data->has_operation());
}

std::string Isis::Instances::Instance::NsrStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_vm_state.is_set || is_set(isis_vm_state.yfilter)) leaf_name_data.push_back(isis_vm_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis-nsr-stats-data")
    {
        if(isis_nsr_stats_data == nullptr)
        {
            isis_nsr_stats_data = std::make_shared<Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData>();
        }
        return isis_nsr_stats_data;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(isis_nsr_stats_data != nullptr)
    {
        children["isis-nsr-stats-data"] = isis_nsr_stats_data;
    }

    return children;
}

void Isis::Instances::Instance::NsrStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isis-vm-state")
    {
        isis_vm_state = value;
        isis_vm_state.value_namespace = name_space;
        isis_vm_state.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isis-vm-state")
    {
        isis_vm_state.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-nsr-stats-data" || name == "isis-vm-state")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::IsisNsrStatsData()
    :
    self(std::make_shared<Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self>())
    , peer(this, {})
{
    self->parent = this;

    yang_name = "isis-nsr-stats-data"; yang_parent_name = "nsr-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::~IsisNsrStatsData()
{
}

bool Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<peer.len(); index++)
    {
        if(peer[index]->has_data())
            return true;
    }
    return (self !=  nullptr && self->has_data());
}

bool Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::has_operation() const
{
    for (std::size_t index=0; index<peer.len(); index++)
    {
        if(peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (self !=  nullptr && self->has_operation());
}

std::string Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-nsr-stats-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "self")
    {
        if(self == nullptr)
        {
            self = std::make_shared<Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self>();
        }
        return self;
    }

    if(child_yang_name == "peer")
    {
        auto c = std::make_shared<Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer>();
        c->parent = this;
        peer.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(self != nullptr)
    {
        children["self"] = self;
    }

    count = 0;
    for (auto c : peer.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "self" || name == "peer")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::Self()
    :
    no_of_l1_lsp{YType::uint32, "no-of-l1-lsp"},
    no_of_l2_lsp{YType::uint32, "no-of-l2-lsp"},
    no_of_l1_adj{YType::uint16, "no-of-l1-adj"},
    no_of_l2_adj{YType::uint16, "no-of-l2-adj"},
    no_of_live_interface{YType::uint16, "no-of-live-interface"},
    no_of_ptp_interface{YType::uint16, "no-of-ptp-interface"},
    no_of_lan_interface{YType::uint16, "no-of-lan-interface"},
    no_of_loopback_interface{YType::uint16, "no-of-loopback-interface"},
    no_of_te_tunnels{YType::uint16, "no-of-te-tunnels"},
    no_of_te_links{YType::uint16, "no-of-te-links"},
    no_of_ipv4_routes{YType::uint32, "no-of-ipv4-routes"},
    no_of_ipv6_routes{YType::uint32, "no-of-ipv6-routes"},
    seqnum{YType::uint32, "seqnum"}
{

    yang_name = "self"; yang_parent_name = "isis-nsr-stats-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::~Self()
{
}

bool Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::has_data() const
{
    if (is_presence_container) return true;
    return no_of_l1_lsp.is_set
	|| no_of_l2_lsp.is_set
	|| no_of_l1_adj.is_set
	|| no_of_l2_adj.is_set
	|| no_of_live_interface.is_set
	|| no_of_ptp_interface.is_set
	|| no_of_lan_interface.is_set
	|| no_of_loopback_interface.is_set
	|| no_of_te_tunnels.is_set
	|| no_of_te_links.is_set
	|| no_of_ipv4_routes.is_set
	|| no_of_ipv6_routes.is_set
	|| seqnum.is_set;
}

bool Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(no_of_l1_lsp.yfilter)
	|| ydk::is_set(no_of_l2_lsp.yfilter)
	|| ydk::is_set(no_of_l1_adj.yfilter)
	|| ydk::is_set(no_of_l2_adj.yfilter)
	|| ydk::is_set(no_of_live_interface.yfilter)
	|| ydk::is_set(no_of_ptp_interface.yfilter)
	|| ydk::is_set(no_of_lan_interface.yfilter)
	|| ydk::is_set(no_of_loopback_interface.yfilter)
	|| ydk::is_set(no_of_te_tunnels.yfilter)
	|| ydk::is_set(no_of_te_links.yfilter)
	|| ydk::is_set(no_of_ipv4_routes.yfilter)
	|| ydk::is_set(no_of_ipv6_routes.yfilter)
	|| ydk::is_set(seqnum.yfilter);
}

std::string Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "self";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no_of_l1_lsp.is_set || is_set(no_of_l1_lsp.yfilter)) leaf_name_data.push_back(no_of_l1_lsp.get_name_leafdata());
    if (no_of_l2_lsp.is_set || is_set(no_of_l2_lsp.yfilter)) leaf_name_data.push_back(no_of_l2_lsp.get_name_leafdata());
    if (no_of_l1_adj.is_set || is_set(no_of_l1_adj.yfilter)) leaf_name_data.push_back(no_of_l1_adj.get_name_leafdata());
    if (no_of_l2_adj.is_set || is_set(no_of_l2_adj.yfilter)) leaf_name_data.push_back(no_of_l2_adj.get_name_leafdata());
    if (no_of_live_interface.is_set || is_set(no_of_live_interface.yfilter)) leaf_name_data.push_back(no_of_live_interface.get_name_leafdata());
    if (no_of_ptp_interface.is_set || is_set(no_of_ptp_interface.yfilter)) leaf_name_data.push_back(no_of_ptp_interface.get_name_leafdata());
    if (no_of_lan_interface.is_set || is_set(no_of_lan_interface.yfilter)) leaf_name_data.push_back(no_of_lan_interface.get_name_leafdata());
    if (no_of_loopback_interface.is_set || is_set(no_of_loopback_interface.yfilter)) leaf_name_data.push_back(no_of_loopback_interface.get_name_leafdata());
    if (no_of_te_tunnels.is_set || is_set(no_of_te_tunnels.yfilter)) leaf_name_data.push_back(no_of_te_tunnels.get_name_leafdata());
    if (no_of_te_links.is_set || is_set(no_of_te_links.yfilter)) leaf_name_data.push_back(no_of_te_links.get_name_leafdata());
    if (no_of_ipv4_routes.is_set || is_set(no_of_ipv4_routes.yfilter)) leaf_name_data.push_back(no_of_ipv4_routes.get_name_leafdata());
    if (no_of_ipv6_routes.is_set || is_set(no_of_ipv6_routes.yfilter)) leaf_name_data.push_back(no_of_ipv6_routes.get_name_leafdata());
    if (seqnum.is_set || is_set(seqnum.yfilter)) leaf_name_data.push_back(seqnum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no-of-l1-lsp")
    {
        no_of_l1_lsp = value;
        no_of_l1_lsp.value_namespace = name_space;
        no_of_l1_lsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-l2-lsp")
    {
        no_of_l2_lsp = value;
        no_of_l2_lsp.value_namespace = name_space;
        no_of_l2_lsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-l1-adj")
    {
        no_of_l1_adj = value;
        no_of_l1_adj.value_namespace = name_space;
        no_of_l1_adj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-l2-adj")
    {
        no_of_l2_adj = value;
        no_of_l2_adj.value_namespace = name_space;
        no_of_l2_adj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-live-interface")
    {
        no_of_live_interface = value;
        no_of_live_interface.value_namespace = name_space;
        no_of_live_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-ptp-interface")
    {
        no_of_ptp_interface = value;
        no_of_ptp_interface.value_namespace = name_space;
        no_of_ptp_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-lan-interface")
    {
        no_of_lan_interface = value;
        no_of_lan_interface.value_namespace = name_space;
        no_of_lan_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-loopback-interface")
    {
        no_of_loopback_interface = value;
        no_of_loopback_interface.value_namespace = name_space;
        no_of_loopback_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-te-tunnels")
    {
        no_of_te_tunnels = value;
        no_of_te_tunnels.value_namespace = name_space;
        no_of_te_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-te-links")
    {
        no_of_te_links = value;
        no_of_te_links.value_namespace = name_space;
        no_of_te_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-ipv4-routes")
    {
        no_of_ipv4_routes = value;
        no_of_ipv4_routes.value_namespace = name_space;
        no_of_ipv4_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-ipv6-routes")
    {
        no_of_ipv6_routes = value;
        no_of_ipv6_routes.value_namespace = name_space;
        no_of_ipv6_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seqnum")
    {
        seqnum = value;
        seqnum.value_namespace = name_space;
        seqnum.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no-of-l1-lsp")
    {
        no_of_l1_lsp.yfilter = yfilter;
    }
    if(value_path == "no-of-l2-lsp")
    {
        no_of_l2_lsp.yfilter = yfilter;
    }
    if(value_path == "no-of-l1-adj")
    {
        no_of_l1_adj.yfilter = yfilter;
    }
    if(value_path == "no-of-l2-adj")
    {
        no_of_l2_adj.yfilter = yfilter;
    }
    if(value_path == "no-of-live-interface")
    {
        no_of_live_interface.yfilter = yfilter;
    }
    if(value_path == "no-of-ptp-interface")
    {
        no_of_ptp_interface.yfilter = yfilter;
    }
    if(value_path == "no-of-lan-interface")
    {
        no_of_lan_interface.yfilter = yfilter;
    }
    if(value_path == "no-of-loopback-interface")
    {
        no_of_loopback_interface.yfilter = yfilter;
    }
    if(value_path == "no-of-te-tunnels")
    {
        no_of_te_tunnels.yfilter = yfilter;
    }
    if(value_path == "no-of-te-links")
    {
        no_of_te_links.yfilter = yfilter;
    }
    if(value_path == "no-of-ipv4-routes")
    {
        no_of_ipv4_routes.yfilter = yfilter;
    }
    if(value_path == "no-of-ipv6-routes")
    {
        no_of_ipv6_routes.yfilter = yfilter;
    }
    if(value_path == "seqnum")
    {
        seqnum.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Self::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "no-of-l1-lsp" || name == "no-of-l2-lsp" || name == "no-of-l1-adj" || name == "no-of-l2-adj" || name == "no-of-live-interface" || name == "no-of-ptp-interface" || name == "no-of-lan-interface" || name == "no-of-loopback-interface" || name == "no-of-te-tunnels" || name == "no-of-te-links" || name == "no-of-ipv4-routes" || name == "no-of-ipv6-routes" || name == "seqnum")
        return true;
    return false;
}

Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::Peer()
    :
    no_of_l1_lsp{YType::uint32, "no-of-l1-lsp"},
    no_of_l2_lsp{YType::uint32, "no-of-l2-lsp"},
    no_of_l1_adj{YType::uint16, "no-of-l1-adj"},
    no_of_l2_adj{YType::uint16, "no-of-l2-adj"},
    no_of_live_interface{YType::uint16, "no-of-live-interface"},
    no_of_ptp_interface{YType::uint16, "no-of-ptp-interface"},
    no_of_lan_interface{YType::uint16, "no-of-lan-interface"},
    no_of_loopback_interface{YType::uint16, "no-of-loopback-interface"},
    no_of_te_tunnels{YType::uint16, "no-of-te-tunnels"},
    no_of_te_links{YType::uint16, "no-of-te-links"},
    no_of_ipv4_routes{YType::uint32, "no-of-ipv4-routes"},
    no_of_ipv6_routes{YType::uint32, "no-of-ipv6-routes"},
    seqnum{YType::uint32, "seqnum"}
{

    yang_name = "peer"; yang_parent_name = "isis-nsr-stats-data"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::~Peer()
{
}

bool Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::has_data() const
{
    if (is_presence_container) return true;
    return no_of_l1_lsp.is_set
	|| no_of_l2_lsp.is_set
	|| no_of_l1_adj.is_set
	|| no_of_l2_adj.is_set
	|| no_of_live_interface.is_set
	|| no_of_ptp_interface.is_set
	|| no_of_lan_interface.is_set
	|| no_of_loopback_interface.is_set
	|| no_of_te_tunnels.is_set
	|| no_of_te_links.is_set
	|| no_of_ipv4_routes.is_set
	|| no_of_ipv6_routes.is_set
	|| seqnum.is_set;
}

bool Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(no_of_l1_lsp.yfilter)
	|| ydk::is_set(no_of_l2_lsp.yfilter)
	|| ydk::is_set(no_of_l1_adj.yfilter)
	|| ydk::is_set(no_of_l2_adj.yfilter)
	|| ydk::is_set(no_of_live_interface.yfilter)
	|| ydk::is_set(no_of_ptp_interface.yfilter)
	|| ydk::is_set(no_of_lan_interface.yfilter)
	|| ydk::is_set(no_of_loopback_interface.yfilter)
	|| ydk::is_set(no_of_te_tunnels.yfilter)
	|| ydk::is_set(no_of_te_links.yfilter)
	|| ydk::is_set(no_of_ipv4_routes.yfilter)
	|| ydk::is_set(no_of_ipv6_routes.yfilter)
	|| ydk::is_set(seqnum.yfilter);
}

std::string Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no_of_l1_lsp.is_set || is_set(no_of_l1_lsp.yfilter)) leaf_name_data.push_back(no_of_l1_lsp.get_name_leafdata());
    if (no_of_l2_lsp.is_set || is_set(no_of_l2_lsp.yfilter)) leaf_name_data.push_back(no_of_l2_lsp.get_name_leafdata());
    if (no_of_l1_adj.is_set || is_set(no_of_l1_adj.yfilter)) leaf_name_data.push_back(no_of_l1_adj.get_name_leafdata());
    if (no_of_l2_adj.is_set || is_set(no_of_l2_adj.yfilter)) leaf_name_data.push_back(no_of_l2_adj.get_name_leafdata());
    if (no_of_live_interface.is_set || is_set(no_of_live_interface.yfilter)) leaf_name_data.push_back(no_of_live_interface.get_name_leafdata());
    if (no_of_ptp_interface.is_set || is_set(no_of_ptp_interface.yfilter)) leaf_name_data.push_back(no_of_ptp_interface.get_name_leafdata());
    if (no_of_lan_interface.is_set || is_set(no_of_lan_interface.yfilter)) leaf_name_data.push_back(no_of_lan_interface.get_name_leafdata());
    if (no_of_loopback_interface.is_set || is_set(no_of_loopback_interface.yfilter)) leaf_name_data.push_back(no_of_loopback_interface.get_name_leafdata());
    if (no_of_te_tunnels.is_set || is_set(no_of_te_tunnels.yfilter)) leaf_name_data.push_back(no_of_te_tunnels.get_name_leafdata());
    if (no_of_te_links.is_set || is_set(no_of_te_links.yfilter)) leaf_name_data.push_back(no_of_te_links.get_name_leafdata());
    if (no_of_ipv4_routes.is_set || is_set(no_of_ipv4_routes.yfilter)) leaf_name_data.push_back(no_of_ipv4_routes.get_name_leafdata());
    if (no_of_ipv6_routes.is_set || is_set(no_of_ipv6_routes.yfilter)) leaf_name_data.push_back(no_of_ipv6_routes.get_name_leafdata());
    if (seqnum.is_set || is_set(seqnum.yfilter)) leaf_name_data.push_back(seqnum.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no-of-l1-lsp")
    {
        no_of_l1_lsp = value;
        no_of_l1_lsp.value_namespace = name_space;
        no_of_l1_lsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-l2-lsp")
    {
        no_of_l2_lsp = value;
        no_of_l2_lsp.value_namespace = name_space;
        no_of_l2_lsp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-l1-adj")
    {
        no_of_l1_adj = value;
        no_of_l1_adj.value_namespace = name_space;
        no_of_l1_adj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-l2-adj")
    {
        no_of_l2_adj = value;
        no_of_l2_adj.value_namespace = name_space;
        no_of_l2_adj.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-live-interface")
    {
        no_of_live_interface = value;
        no_of_live_interface.value_namespace = name_space;
        no_of_live_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-ptp-interface")
    {
        no_of_ptp_interface = value;
        no_of_ptp_interface.value_namespace = name_space;
        no_of_ptp_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-lan-interface")
    {
        no_of_lan_interface = value;
        no_of_lan_interface.value_namespace = name_space;
        no_of_lan_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-loopback-interface")
    {
        no_of_loopback_interface = value;
        no_of_loopback_interface.value_namespace = name_space;
        no_of_loopback_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-te-tunnels")
    {
        no_of_te_tunnels = value;
        no_of_te_tunnels.value_namespace = name_space;
        no_of_te_tunnels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-te-links")
    {
        no_of_te_links = value;
        no_of_te_links.value_namespace = name_space;
        no_of_te_links.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-ipv4-routes")
    {
        no_of_ipv4_routes = value;
        no_of_ipv4_routes.value_namespace = name_space;
        no_of_ipv4_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-of-ipv6-routes")
    {
        no_of_ipv6_routes = value;
        no_of_ipv6_routes.value_namespace = name_space;
        no_of_ipv6_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seqnum")
    {
        seqnum = value;
        seqnum.value_namespace = name_space;
        seqnum.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no-of-l1-lsp")
    {
        no_of_l1_lsp.yfilter = yfilter;
    }
    if(value_path == "no-of-l2-lsp")
    {
        no_of_l2_lsp.yfilter = yfilter;
    }
    if(value_path == "no-of-l1-adj")
    {
        no_of_l1_adj.yfilter = yfilter;
    }
    if(value_path == "no-of-l2-adj")
    {
        no_of_l2_adj.yfilter = yfilter;
    }
    if(value_path == "no-of-live-interface")
    {
        no_of_live_interface.yfilter = yfilter;
    }
    if(value_path == "no-of-ptp-interface")
    {
        no_of_ptp_interface.yfilter = yfilter;
    }
    if(value_path == "no-of-lan-interface")
    {
        no_of_lan_interface.yfilter = yfilter;
    }
    if(value_path == "no-of-loopback-interface")
    {
        no_of_loopback_interface.yfilter = yfilter;
    }
    if(value_path == "no-of-te-tunnels")
    {
        no_of_te_tunnels.yfilter = yfilter;
    }
    if(value_path == "no-of-te-links")
    {
        no_of_te_links.yfilter = yfilter;
    }
    if(value_path == "no-of-ipv4-routes")
    {
        no_of_ipv4_routes.yfilter = yfilter;
    }
    if(value_path == "no-of-ipv6-routes")
    {
        no_of_ipv6_routes.yfilter = yfilter;
    }
    if(value_path == "seqnum")
    {
        seqnum.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::NsrStatistics::IsisNsrStatsData::Peer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "no-of-l1-lsp" || name == "no-of-l2-lsp" || name == "no-of-l1-adj" || name == "no-of-l2-adj" || name == "no-of-live-interface" || name == "no-of-ptp-interface" || name == "no-of-lan-interface" || name == "no-of-loopback-interface" || name == "no-of-te-tunnels" || name == "no-of-te-links" || name == "no-of-ipv4-routes" || name == "no-of-ipv6-routes" || name == "seqnum")
        return true;
    return false;
}

Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnels()
    :
    checkpoint_te_tunnel(this, {})
{

    yang_name = "checkpoint-te-tunnels"; yang_parent_name = "instance"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::CheckpointTeTunnels::~CheckpointTeTunnels()
{
}

bool Isis::Instances::Instance::CheckpointTeTunnels::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<checkpoint_te_tunnel.len(); index++)
    {
        if(checkpoint_te_tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool Isis::Instances::Instance::CheckpointTeTunnels::has_operation() const
{
    for (std::size_t index=0; index<checkpoint_te_tunnel.len(); index++)
    {
        if(checkpoint_te_tunnel[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Isis::Instances::Instance::CheckpointTeTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checkpoint-te-tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::CheckpointTeTunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::CheckpointTeTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "checkpoint-te-tunnel")
    {
        auto c = std::make_shared<Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel>();
        c->parent = this;
        checkpoint_te_tunnel.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::CheckpointTeTunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : checkpoint_te_tunnel.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Isis::Instances::Instance::CheckpointTeTunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Isis::Instances::Instance::CheckpointTeTunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Isis::Instances::Instance::CheckpointTeTunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "checkpoint-te-tunnel")
        return true;
    return false;
}

Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::CheckpointTeTunnel()
    :
    level{YType::enumeration, "level"},
    interface_name{YType::str, "interface-name"},
    checkpoint_te_level{YType::enumeration, "checkpoint-te-level"},
    checkpoint_te_system_id{YType::str, "checkpoint-te-system-id"},
    checkpoint_te_interface{YType::str, "checkpoint-te-interface"},
    checkpoint_te_flags{YType::uint32, "checkpoint-te-flags"},
    checkpoint_te_nexthop{YType::str, "checkpoint-te-nexthop"},
    checkpoint_te_metric{YType::int32, "checkpoint-te-metric"},
    checkpoint_te_metric_mode{YType::enumeration, "checkpoint-te-metric-mode"},
    checkpoint_te_bandwidth{YType::uint32, "checkpoint-te-bandwidth"},
    checkpoint_te_object_id{YType::uint32, "checkpoint-te-object-id"}
{

    yang_name = "checkpoint-te-tunnel"; yang_parent_name = "checkpoint-te-tunnels"; is_top_level_class = false; has_list_ancestor = true; 
}

Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::~CheckpointTeTunnel()
{
}

bool Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::has_data() const
{
    if (is_presence_container) return true;
    return level.is_set
	|| interface_name.is_set
	|| checkpoint_te_level.is_set
	|| checkpoint_te_system_id.is_set
	|| checkpoint_te_interface.is_set
	|| checkpoint_te_flags.is_set
	|| checkpoint_te_nexthop.is_set
	|| checkpoint_te_metric.is_set
	|| checkpoint_te_metric_mode.is_set
	|| checkpoint_te_bandwidth.is_set
	|| checkpoint_te_object_id.is_set;
}

bool Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(checkpoint_te_level.yfilter)
	|| ydk::is_set(checkpoint_te_system_id.yfilter)
	|| ydk::is_set(checkpoint_te_interface.yfilter)
	|| ydk::is_set(checkpoint_te_flags.yfilter)
	|| ydk::is_set(checkpoint_te_nexthop.yfilter)
	|| ydk::is_set(checkpoint_te_metric.yfilter)
	|| ydk::is_set(checkpoint_te_metric_mode.yfilter)
	|| ydk::is_set(checkpoint_te_bandwidth.yfilter)
	|| ydk::is_set(checkpoint_te_object_id.yfilter);
}

std::string Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "checkpoint-te-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (checkpoint_te_level.is_set || is_set(checkpoint_te_level.yfilter)) leaf_name_data.push_back(checkpoint_te_level.get_name_leafdata());
    if (checkpoint_te_system_id.is_set || is_set(checkpoint_te_system_id.yfilter)) leaf_name_data.push_back(checkpoint_te_system_id.get_name_leafdata());
    if (checkpoint_te_interface.is_set || is_set(checkpoint_te_interface.yfilter)) leaf_name_data.push_back(checkpoint_te_interface.get_name_leafdata());
    if (checkpoint_te_flags.is_set || is_set(checkpoint_te_flags.yfilter)) leaf_name_data.push_back(checkpoint_te_flags.get_name_leafdata());
    if (checkpoint_te_nexthop.is_set || is_set(checkpoint_te_nexthop.yfilter)) leaf_name_data.push_back(checkpoint_te_nexthop.get_name_leafdata());
    if (checkpoint_te_metric.is_set || is_set(checkpoint_te_metric.yfilter)) leaf_name_data.push_back(checkpoint_te_metric.get_name_leafdata());
    if (checkpoint_te_metric_mode.is_set || is_set(checkpoint_te_metric_mode.yfilter)) leaf_name_data.push_back(checkpoint_te_metric_mode.get_name_leafdata());
    if (checkpoint_te_bandwidth.is_set || is_set(checkpoint_te_bandwidth.yfilter)) leaf_name_data.push_back(checkpoint_te_bandwidth.get_name_leafdata());
    if (checkpoint_te_object_id.is_set || is_set(checkpoint_te_object_id.yfilter)) leaf_name_data.push_back(checkpoint_te_object_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-te-level")
    {
        checkpoint_te_level = value;
        checkpoint_te_level.value_namespace = name_space;
        checkpoint_te_level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-te-system-id")
    {
        checkpoint_te_system_id = value;
        checkpoint_te_system_id.value_namespace = name_space;
        checkpoint_te_system_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-te-interface")
    {
        checkpoint_te_interface = value;
        checkpoint_te_interface.value_namespace = name_space;
        checkpoint_te_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-te-flags")
    {
        checkpoint_te_flags = value;
        checkpoint_te_flags.value_namespace = name_space;
        checkpoint_te_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-te-nexthop")
    {
        checkpoint_te_nexthop = value;
        checkpoint_te_nexthop.value_namespace = name_space;
        checkpoint_te_nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-te-metric")
    {
        checkpoint_te_metric = value;
        checkpoint_te_metric.value_namespace = name_space;
        checkpoint_te_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-te-metric-mode")
    {
        checkpoint_te_metric_mode = value;
        checkpoint_te_metric_mode.value_namespace = name_space;
        checkpoint_te_metric_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-te-bandwidth")
    {
        checkpoint_te_bandwidth = value;
        checkpoint_te_bandwidth.value_namespace = name_space;
        checkpoint_te_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "checkpoint-te-object-id")
    {
        checkpoint_te_object_id = value;
        checkpoint_te_object_id.value_namespace = name_space;
        checkpoint_te_object_id.value_namespace_prefix = name_space_prefix;
    }
}

void Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "checkpoint-te-level")
    {
        checkpoint_te_level.yfilter = yfilter;
    }
    if(value_path == "checkpoint-te-system-id")
    {
        checkpoint_te_system_id.yfilter = yfilter;
    }
    if(value_path == "checkpoint-te-interface")
    {
        checkpoint_te_interface.yfilter = yfilter;
    }
    if(value_path == "checkpoint-te-flags")
    {
        checkpoint_te_flags.yfilter = yfilter;
    }
    if(value_path == "checkpoint-te-nexthop")
    {
        checkpoint_te_nexthop.yfilter = yfilter;
    }
    if(value_path == "checkpoint-te-metric")
    {
        checkpoint_te_metric.yfilter = yfilter;
    }
    if(value_path == "checkpoint-te-metric-mode")
    {
        checkpoint_te_metric_mode.yfilter = yfilter;
    }
    if(value_path == "checkpoint-te-bandwidth")
    {
        checkpoint_te_bandwidth.yfilter = yfilter;
    }
    if(value_path == "checkpoint-te-object-id")
    {
        checkpoint_te_object_id.yfilter = yfilter;
    }
}

bool Isis::Instances::Instance::CheckpointTeTunnels::CheckpointTeTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "interface-name" || name == "checkpoint-te-level" || name == "checkpoint-te-system-id" || name == "checkpoint-te-interface" || name == "checkpoint-te-flags" || name == "checkpoint-te-nexthop" || name == "checkpoint-te-metric" || name == "checkpoint-te-metric-mode" || name == "checkpoint-te-bandwidth" || name == "checkpoint-te-object-id")
        return true;
    return false;
}


}
}

