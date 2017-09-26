
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_rcmd_oper_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_infra_rcmd_oper {

Rcmd::Process::Ldp::Process_::Process_()
    :
    process_name{YType::str, "process-name"},
    protocol_id{YType::enumeration, "protocol-id"}
{

    yang_name = "process"; yang_parent_name = "ldp"; is_top_level_class = false; has_list_ancestor = false;
}

Rcmd::Process::Ldp::Process_::~Process_()
{
}

bool Rcmd::Process::Ldp::Process_::has_data() const
{
    for (std::size_t index=0; index<instance_name.size(); index++)
    {
        if(instance_name[index]->has_data())
            return true;
    }
    return process_name.is_set
	|| protocol_id.is_set;
}

bool Rcmd::Process::Ldp::Process_::has_operation() const
{
    for (std::size_t index=0; index<instance_name.size(); index++)
    {
        if(instance_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(process_name.yfilter)
	|| ydk::is_set(protocol_id.yfilter);
}

std::string Rcmd::Process::Ldp::Process_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/process/ldp/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Process::Ldp::Process_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Process::Ldp::Process_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());
    if (protocol_id.is_set || is_set(protocol_id.yfilter)) leaf_name_data.push_back(protocol_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rcmd::Process::Ldp::Process_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance-name")
    {
        for(auto const & c : instance_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Process::Ldp::Process_::InstanceName>();
        c->parent = this;
        instance_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Process::Ldp::Process_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : instance_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Process::Ldp::Process_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-name")
    {
        process_name = value;
        process_name.value_namespace = name_space;
        process_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-id")
    {
        protocol_id = value;
        protocol_id.value_namespace = name_space;
        protocol_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Process::Ldp::Process_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-name")
    {
        process_name.yfilter = yfilter;
    }
    if(value_path == "protocol-id")
    {
        protocol_id.yfilter = yfilter;
    }
}

bool Rcmd::Process::Ldp::Process_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "process-name" || name == "protocol-id")
        return true;
    return false;
}

Rcmd::Process::Ldp::Process_::InstanceName::InstanceName()
    :
    arch_lsp_regeneration{YType::uint32, "arch-lsp-regeneration"},
    arch_spf_event{YType::uint32, "arch-spf-event"},
    last_update_time{YType::str, "last-update-time"},
    lsp_regeneration_count{YType::uint32, "lsp-regeneration-count"},
    lsp_regeneration_serial{YType::uint32, "lsp-regeneration-serial"},
    name{YType::str, "name"},
    no_route_change_spf_nos{YType::uint32, "no-route-change-spf-nos"},
    not_interested_spf_nos{YType::uint32, "not-interested-spf-nos"},
    route_change_spf_nos{YType::uint32, "route-change-spf-nos"},
    total_spf_nos{YType::uint32, "total-spf-nos"}
{

    yang_name = "instance-name"; yang_parent_name = "process"; is_top_level_class = false; has_list_ancestor = false;
}

Rcmd::Process::Ldp::Process_::InstanceName::~InstanceName()
{
}

bool Rcmd::Process::Ldp::Process_::InstanceName::has_data() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return arch_lsp_regeneration.is_set
	|| arch_spf_event.is_set
	|| last_update_time.is_set
	|| lsp_regeneration_count.is_set
	|| lsp_regeneration_serial.is_set
	|| name.is_set
	|| no_route_change_spf_nos.is_set
	|| not_interested_spf_nos.is_set
	|| route_change_spf_nos.is_set
	|| total_spf_nos.is_set;
}

bool Rcmd::Process::Ldp::Process_::InstanceName::has_operation() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(arch_lsp_regeneration.yfilter)
	|| ydk::is_set(arch_spf_event.yfilter)
	|| ydk::is_set(last_update_time.yfilter)
	|| ydk::is_set(lsp_regeneration_count.yfilter)
	|| ydk::is_set(lsp_regeneration_serial.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(no_route_change_spf_nos.yfilter)
	|| ydk::is_set(not_interested_spf_nos.yfilter)
	|| ydk::is_set(route_change_spf_nos.yfilter)
	|| ydk::is_set(total_spf_nos.yfilter);
}

std::string Rcmd::Process::Ldp::Process_::InstanceName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/process/ldp/process/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Process::Ldp::Process_::InstanceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Process::Ldp::Process_::InstanceName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arch_lsp_regeneration.is_set || is_set(arch_lsp_regeneration.yfilter)) leaf_name_data.push_back(arch_lsp_regeneration.get_name_leafdata());
    if (arch_spf_event.is_set || is_set(arch_spf_event.yfilter)) leaf_name_data.push_back(arch_spf_event.get_name_leafdata());
    if (last_update_time.is_set || is_set(last_update_time.yfilter)) leaf_name_data.push_back(last_update_time.get_name_leafdata());
    if (lsp_regeneration_count.is_set || is_set(lsp_regeneration_count.yfilter)) leaf_name_data.push_back(lsp_regeneration_count.get_name_leafdata());
    if (lsp_regeneration_serial.is_set || is_set(lsp_regeneration_serial.yfilter)) leaf_name_data.push_back(lsp_regeneration_serial.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (no_route_change_spf_nos.is_set || is_set(no_route_change_spf_nos.yfilter)) leaf_name_data.push_back(no_route_change_spf_nos.get_name_leafdata());
    if (not_interested_spf_nos.is_set || is_set(not_interested_spf_nos.yfilter)) leaf_name_data.push_back(not_interested_spf_nos.get_name_leafdata());
    if (route_change_spf_nos.is_set || is_set(route_change_spf_nos.yfilter)) leaf_name_data.push_back(route_change_spf_nos.get_name_leafdata());
    if (total_spf_nos.is_set || is_set(total_spf_nos.yfilter)) leaf_name_data.push_back(total_spf_nos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rcmd::Process::Ldp::Process_::InstanceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Rcmd::Process::Ldp::Process_::InstanceName::Instance>();
        c->parent = this;
        instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Process::Ldp::Process_::InstanceName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Process::Ldp::Process_::InstanceName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "arch-lsp-regeneration")
    {
        arch_lsp_regeneration = value;
        arch_lsp_regeneration.value_namespace = name_space;
        arch_lsp_regeneration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arch-spf-event")
    {
        arch_spf_event = value;
        arch_spf_event.value_namespace = name_space;
        arch_spf_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-time")
    {
        last_update_time = value;
        last_update_time.value_namespace = name_space;
        last_update_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-regeneration-count")
    {
        lsp_regeneration_count = value;
        lsp_regeneration_count.value_namespace = name_space;
        lsp_regeneration_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-regeneration-serial")
    {
        lsp_regeneration_serial = value;
        lsp_regeneration_serial.value_namespace = name_space;
        lsp_regeneration_serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-route-change-spf-nos")
    {
        no_route_change_spf_nos = value;
        no_route_change_spf_nos.value_namespace = name_space;
        no_route_change_spf_nos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-interested-spf-nos")
    {
        not_interested_spf_nos = value;
        not_interested_spf_nos.value_namespace = name_space;
        not_interested_spf_nos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-change-spf-nos")
    {
        route_change_spf_nos = value;
        route_change_spf_nos.value_namespace = name_space;
        route_change_spf_nos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-spf-nos")
    {
        total_spf_nos = value;
        total_spf_nos.value_namespace = name_space;
        total_spf_nos.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Process::Ldp::Process_::InstanceName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "arch-lsp-regeneration")
    {
        arch_lsp_regeneration.yfilter = yfilter;
    }
    if(value_path == "arch-spf-event")
    {
        arch_spf_event.yfilter = yfilter;
    }
    if(value_path == "last-update-time")
    {
        last_update_time.yfilter = yfilter;
    }
    if(value_path == "lsp-regeneration-count")
    {
        lsp_regeneration_count.yfilter = yfilter;
    }
    if(value_path == "lsp-regeneration-serial")
    {
        lsp_regeneration_serial.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "no-route-change-spf-nos")
    {
        no_route_change_spf_nos.yfilter = yfilter;
    }
    if(value_path == "not-interested-spf-nos")
    {
        not_interested_spf_nos.yfilter = yfilter;
    }
    if(value_path == "route-change-spf-nos")
    {
        route_change_spf_nos.yfilter = yfilter;
    }
    if(value_path == "total-spf-nos")
    {
        total_spf_nos.yfilter = yfilter;
    }
}

bool Rcmd::Process::Ldp::Process_::InstanceName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "arch-lsp-regeneration" || name == "arch-spf-event" || name == "last-update-time" || name == "lsp-regeneration-count" || name == "lsp-regeneration-serial" || name == "name" || name == "no-route-change-spf-nos" || name == "not-interested-spf-nos" || name == "route-change-spf-nos" || name == "total-spf-nos")
        return true;
    return false;
}

Rcmd::Process::Ldp::Process_::InstanceName::Instance::Instance()
    :
    arch_spf_run{YType::uint32, "arch-spf-run"},
    fwd_referenced{YType::enumeration, "fwd-referenced"},
    instance_deleted{YType::enumeration, "instance-deleted"},
    instance_id{YType::uint32, "instance-id"},
    instance_state{YType::enumeration, "instance-state"},
    last_update_time{YType::str, "last-update-time"},
    no_route_change_spf_nos{YType::uint32, "no-route-change-spf-nos"},
    node_id{YType::uint32, "node-id"},
    not_interested_spf_nos{YType::uint32, "not-interested-spf-nos"},
    route_change_spf_nos{YType::uint32, "route-change-spf-nos"},
    spf_offset{YType::uint32, "spf-offset"},
    total_spf_nos{YType::uint32, "total-spf-nos"},
    total_spt_nos{YType::uint32, "total-spt-nos"}
{

    yang_name = "instance"; yang_parent_name = "instance-name"; is_top_level_class = false; has_list_ancestor = false;
}

Rcmd::Process::Ldp::Process_::InstanceName::Instance::~Instance()
{
}

bool Rcmd::Process::Ldp::Process_::InstanceName::Instance::has_data() const
{
    return arch_spf_run.is_set
	|| fwd_referenced.is_set
	|| instance_deleted.is_set
	|| instance_id.is_set
	|| instance_state.is_set
	|| last_update_time.is_set
	|| no_route_change_spf_nos.is_set
	|| node_id.is_set
	|| not_interested_spf_nos.is_set
	|| route_change_spf_nos.is_set
	|| spf_offset.is_set
	|| total_spf_nos.is_set
	|| total_spt_nos.is_set;
}

bool Rcmd::Process::Ldp::Process_::InstanceName::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(arch_spf_run.yfilter)
	|| ydk::is_set(fwd_referenced.yfilter)
	|| ydk::is_set(instance_deleted.yfilter)
	|| ydk::is_set(instance_id.yfilter)
	|| ydk::is_set(instance_state.yfilter)
	|| ydk::is_set(last_update_time.yfilter)
	|| ydk::is_set(no_route_change_spf_nos.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(not_interested_spf_nos.yfilter)
	|| ydk::is_set(route_change_spf_nos.yfilter)
	|| ydk::is_set(spf_offset.yfilter)
	|| ydk::is_set(total_spf_nos.yfilter)
	|| ydk::is_set(total_spt_nos.yfilter);
}

std::string Rcmd::Process::Ldp::Process_::InstanceName::Instance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/process/ldp/process/instance-name/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Process::Ldp::Process_::InstanceName::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Process::Ldp::Process_::InstanceName::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arch_spf_run.is_set || is_set(arch_spf_run.yfilter)) leaf_name_data.push_back(arch_spf_run.get_name_leafdata());
    if (fwd_referenced.is_set || is_set(fwd_referenced.yfilter)) leaf_name_data.push_back(fwd_referenced.get_name_leafdata());
    if (instance_deleted.is_set || is_set(instance_deleted.yfilter)) leaf_name_data.push_back(instance_deleted.get_name_leafdata());
    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (instance_state.is_set || is_set(instance_state.yfilter)) leaf_name_data.push_back(instance_state.get_name_leafdata());
    if (last_update_time.is_set || is_set(last_update_time.yfilter)) leaf_name_data.push_back(last_update_time.get_name_leafdata());
    if (no_route_change_spf_nos.is_set || is_set(no_route_change_spf_nos.yfilter)) leaf_name_data.push_back(no_route_change_spf_nos.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (not_interested_spf_nos.is_set || is_set(not_interested_spf_nos.yfilter)) leaf_name_data.push_back(not_interested_spf_nos.get_name_leafdata());
    if (route_change_spf_nos.is_set || is_set(route_change_spf_nos.yfilter)) leaf_name_data.push_back(route_change_spf_nos.get_name_leafdata());
    if (spf_offset.is_set || is_set(spf_offset.yfilter)) leaf_name_data.push_back(spf_offset.get_name_leafdata());
    if (total_spf_nos.is_set || is_set(total_spf_nos.yfilter)) leaf_name_data.push_back(total_spf_nos.get_name_leafdata());
    if (total_spt_nos.is_set || is_set(total_spt_nos.yfilter)) leaf_name_data.push_back(total_spt_nos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rcmd::Process::Ldp::Process_::InstanceName::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Process::Ldp::Process_::InstanceName::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Process::Ldp::Process_::InstanceName::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "arch-spf-run")
    {
        arch_spf_run = value;
        arch_spf_run.value_namespace = name_space;
        arch_spf_run.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwd-referenced")
    {
        fwd_referenced = value;
        fwd_referenced.value_namespace = name_space;
        fwd_referenced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-deleted")
    {
        instance_deleted = value;
        instance_deleted.value_namespace = name_space;
        instance_deleted.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "last-update-time")
    {
        last_update_time = value;
        last_update_time.value_namespace = name_space;
        last_update_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-route-change-spf-nos")
    {
        no_route_change_spf_nos = value;
        no_route_change_spf_nos.value_namespace = name_space;
        no_route_change_spf_nos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-interested-spf-nos")
    {
        not_interested_spf_nos = value;
        not_interested_spf_nos.value_namespace = name_space;
        not_interested_spf_nos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-change-spf-nos")
    {
        route_change_spf_nos = value;
        route_change_spf_nos.value_namespace = name_space;
        route_change_spf_nos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-offset")
    {
        spf_offset = value;
        spf_offset.value_namespace = name_space;
        spf_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-spf-nos")
    {
        total_spf_nos = value;
        total_spf_nos.value_namespace = name_space;
        total_spf_nos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-spt-nos")
    {
        total_spt_nos = value;
        total_spt_nos.value_namespace = name_space;
        total_spt_nos.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Process::Ldp::Process_::InstanceName::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "arch-spf-run")
    {
        arch_spf_run.yfilter = yfilter;
    }
    if(value_path == "fwd-referenced")
    {
        fwd_referenced.yfilter = yfilter;
    }
    if(value_path == "instance-deleted")
    {
        instance_deleted.yfilter = yfilter;
    }
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
    if(value_path == "instance-state")
    {
        instance_state.yfilter = yfilter;
    }
    if(value_path == "last-update-time")
    {
        last_update_time.yfilter = yfilter;
    }
    if(value_path == "no-route-change-spf-nos")
    {
        no_route_change_spf_nos.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "not-interested-spf-nos")
    {
        not_interested_spf_nos.yfilter = yfilter;
    }
    if(value_path == "route-change-spf-nos")
    {
        route_change_spf_nos.yfilter = yfilter;
    }
    if(value_path == "spf-offset")
    {
        spf_offset.yfilter = yfilter;
    }
    if(value_path == "total-spf-nos")
    {
        total_spf_nos.yfilter = yfilter;
    }
    if(value_path == "total-spt-nos")
    {
        total_spt_nos.yfilter = yfilter;
    }
}

bool Rcmd::Process::Ldp::Process_::InstanceName::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "arch-spf-run" || name == "fwd-referenced" || name == "instance-deleted" || name == "instance-id" || name == "instance-state" || name == "last-update-time" || name == "no-route-change-spf-nos" || name == "node-id" || name == "not-interested-spf-nos" || name == "route-change-spf-nos" || name == "spf-offset" || name == "total-spf-nos" || name == "total-spt-nos")
        return true;
    return false;
}

Rcmd::Process::Ospf::Ospf()
{

    yang_name = "ospf"; yang_parent_name = "process"; is_top_level_class = false; has_list_ancestor = false;
}

Rcmd::Process::Ospf::~Ospf()
{
}

bool Rcmd::Process::Ospf::has_data() const
{
    for (std::size_t index=0; index<process.size(); index++)
    {
        if(process[index]->has_data())
            return true;
    }
    return false;
}

bool Rcmd::Process::Ospf::has_operation() const
{
    for (std::size_t index=0; index<process.size(); index++)
    {
        if(process[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Rcmd::Process::Ospf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/process/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Process::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Process::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Rcmd::Process::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "process")
    {
        for(auto const & c : process)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Process::Ospf::Process_>();
        c->parent = this;
        process.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Process::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : process)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Process::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Rcmd::Process::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Rcmd::Process::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "process")
        return true;
    return false;
}

Rcmd::Process::Ospf::Process_::Process_()
    :
    process_name{YType::str, "process-name"},
    protocol_id{YType::enumeration, "protocol-id"}
{

    yang_name = "process"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = false;
}

Rcmd::Process::Ospf::Process_::~Process_()
{
}

bool Rcmd::Process::Ospf::Process_::has_data() const
{
    for (std::size_t index=0; index<instance_name.size(); index++)
    {
        if(instance_name[index]->has_data())
            return true;
    }
    return process_name.is_set
	|| protocol_id.is_set;
}

bool Rcmd::Process::Ospf::Process_::has_operation() const
{
    for (std::size_t index=0; index<instance_name.size(); index++)
    {
        if(instance_name[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(process_name.yfilter)
	|| ydk::is_set(protocol_id.yfilter);
}

std::string Rcmd::Process::Ospf::Process_::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/process/ospf/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Process::Ospf::Process_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Process::Ospf::Process_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_name.is_set || is_set(process_name.yfilter)) leaf_name_data.push_back(process_name.get_name_leafdata());
    if (protocol_id.is_set || is_set(protocol_id.yfilter)) leaf_name_data.push_back(protocol_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rcmd::Process::Ospf::Process_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "instance-name")
    {
        for(auto const & c : instance_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Rcmd::Process::Ospf::Process_::InstanceName>();
        c->parent = this;
        instance_name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Process::Ospf::Process_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : instance_name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Process::Ospf::Process_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-name")
    {
        process_name = value;
        process_name.value_namespace = name_space;
        process_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol-id")
    {
        protocol_id = value;
        protocol_id.value_namespace = name_space;
        protocol_id.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Process::Ospf::Process_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-name")
    {
        process_name.yfilter = yfilter;
    }
    if(value_path == "protocol-id")
    {
        protocol_id.yfilter = yfilter;
    }
}

bool Rcmd::Process::Ospf::Process_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance-name" || name == "process-name" || name == "protocol-id")
        return true;
    return false;
}

Rcmd::Process::Ospf::Process_::InstanceName::InstanceName()
    :
    arch_lsp_regeneration{YType::uint32, "arch-lsp-regeneration"},
    arch_spf_event{YType::uint32, "arch-spf-event"},
    last_update_time{YType::str, "last-update-time"},
    lsp_regeneration_count{YType::uint32, "lsp-regeneration-count"},
    lsp_regeneration_serial{YType::uint32, "lsp-regeneration-serial"},
    name{YType::str, "name"},
    no_route_change_spf_nos{YType::uint32, "no-route-change-spf-nos"},
    not_interested_spf_nos{YType::uint32, "not-interested-spf-nos"},
    route_change_spf_nos{YType::uint32, "route-change-spf-nos"},
    total_spf_nos{YType::uint32, "total-spf-nos"}
{

    yang_name = "instance-name"; yang_parent_name = "process"; is_top_level_class = false; has_list_ancestor = false;
}

Rcmd::Process::Ospf::Process_::InstanceName::~InstanceName()
{
}

bool Rcmd::Process::Ospf::Process_::InstanceName::has_data() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_data())
            return true;
    }
    return arch_lsp_regeneration.is_set
	|| arch_spf_event.is_set
	|| last_update_time.is_set
	|| lsp_regeneration_count.is_set
	|| lsp_regeneration_serial.is_set
	|| name.is_set
	|| no_route_change_spf_nos.is_set
	|| not_interested_spf_nos.is_set
	|| route_change_spf_nos.is_set
	|| total_spf_nos.is_set;
}

bool Rcmd::Process::Ospf::Process_::InstanceName::has_operation() const
{
    for (std::size_t index=0; index<instance.size(); index++)
    {
        if(instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(arch_lsp_regeneration.yfilter)
	|| ydk::is_set(arch_spf_event.yfilter)
	|| ydk::is_set(last_update_time.yfilter)
	|| ydk::is_set(lsp_regeneration_count.yfilter)
	|| ydk::is_set(lsp_regeneration_serial.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(no_route_change_spf_nos.yfilter)
	|| ydk::is_set(not_interested_spf_nos.yfilter)
	|| ydk::is_set(route_change_spf_nos.yfilter)
	|| ydk::is_set(total_spf_nos.yfilter);
}

std::string Rcmd::Process::Ospf::Process_::InstanceName::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/process/ospf/process/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Process::Ospf::Process_::InstanceName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance-name";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Process::Ospf::Process_::InstanceName::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arch_lsp_regeneration.is_set || is_set(arch_lsp_regeneration.yfilter)) leaf_name_data.push_back(arch_lsp_regeneration.get_name_leafdata());
    if (arch_spf_event.is_set || is_set(arch_spf_event.yfilter)) leaf_name_data.push_back(arch_spf_event.get_name_leafdata());
    if (last_update_time.is_set || is_set(last_update_time.yfilter)) leaf_name_data.push_back(last_update_time.get_name_leafdata());
    if (lsp_regeneration_count.is_set || is_set(lsp_regeneration_count.yfilter)) leaf_name_data.push_back(lsp_regeneration_count.get_name_leafdata());
    if (lsp_regeneration_serial.is_set || is_set(lsp_regeneration_serial.yfilter)) leaf_name_data.push_back(lsp_regeneration_serial.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (no_route_change_spf_nos.is_set || is_set(no_route_change_spf_nos.yfilter)) leaf_name_data.push_back(no_route_change_spf_nos.get_name_leafdata());
    if (not_interested_spf_nos.is_set || is_set(not_interested_spf_nos.yfilter)) leaf_name_data.push_back(not_interested_spf_nos.get_name_leafdata());
    if (route_change_spf_nos.is_set || is_set(route_change_spf_nos.yfilter)) leaf_name_data.push_back(route_change_spf_nos.get_name_leafdata());
    if (total_spf_nos.is_set || is_set(total_spf_nos.yfilter)) leaf_name_data.push_back(total_spf_nos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rcmd::Process::Ospf::Process_::InstanceName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Rcmd::Process::Ospf::Process_::InstanceName::Instance>();
        c->parent = this;
        instance.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Process::Ospf::Process_::InstanceName::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : instance)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Rcmd::Process::Ospf::Process_::InstanceName::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "arch-lsp-regeneration")
    {
        arch_lsp_regeneration = value;
        arch_lsp_regeneration.value_namespace = name_space;
        arch_lsp_regeneration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arch-spf-event")
    {
        arch_spf_event = value;
        arch_spf_event.value_namespace = name_space;
        arch_spf_event.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-update-time")
    {
        last_update_time = value;
        last_update_time.value_namespace = name_space;
        last_update_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-regeneration-count")
    {
        lsp_regeneration_count = value;
        lsp_regeneration_count.value_namespace = name_space;
        lsp_regeneration_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lsp-regeneration-serial")
    {
        lsp_regeneration_serial = value;
        lsp_regeneration_serial.value_namespace = name_space;
        lsp_regeneration_serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-route-change-spf-nos")
    {
        no_route_change_spf_nos = value;
        no_route_change_spf_nos.value_namespace = name_space;
        no_route_change_spf_nos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-interested-spf-nos")
    {
        not_interested_spf_nos = value;
        not_interested_spf_nos.value_namespace = name_space;
        not_interested_spf_nos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-change-spf-nos")
    {
        route_change_spf_nos = value;
        route_change_spf_nos.value_namespace = name_space;
        route_change_spf_nos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-spf-nos")
    {
        total_spf_nos = value;
        total_spf_nos.value_namespace = name_space;
        total_spf_nos.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Process::Ospf::Process_::InstanceName::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "arch-lsp-regeneration")
    {
        arch_lsp_regeneration.yfilter = yfilter;
    }
    if(value_path == "arch-spf-event")
    {
        arch_spf_event.yfilter = yfilter;
    }
    if(value_path == "last-update-time")
    {
        last_update_time.yfilter = yfilter;
    }
    if(value_path == "lsp-regeneration-count")
    {
        lsp_regeneration_count.yfilter = yfilter;
    }
    if(value_path == "lsp-regeneration-serial")
    {
        lsp_regeneration_serial.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "no-route-change-spf-nos")
    {
        no_route_change_spf_nos.yfilter = yfilter;
    }
    if(value_path == "not-interested-spf-nos")
    {
        not_interested_spf_nos.yfilter = yfilter;
    }
    if(value_path == "route-change-spf-nos")
    {
        route_change_spf_nos.yfilter = yfilter;
    }
    if(value_path == "total-spf-nos")
    {
        total_spf_nos.yfilter = yfilter;
    }
}

bool Rcmd::Process::Ospf::Process_::InstanceName::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "instance" || name == "arch-lsp-regeneration" || name == "arch-spf-event" || name == "last-update-time" || name == "lsp-regeneration-count" || name == "lsp-regeneration-serial" || name == "name" || name == "no-route-change-spf-nos" || name == "not-interested-spf-nos" || name == "route-change-spf-nos" || name == "total-spf-nos")
        return true;
    return false;
}

Rcmd::Process::Ospf::Process_::InstanceName::Instance::Instance()
    :
    arch_spf_run{YType::uint32, "arch-spf-run"},
    fwd_referenced{YType::enumeration, "fwd-referenced"},
    instance_deleted{YType::enumeration, "instance-deleted"},
    instance_id{YType::uint32, "instance-id"},
    instance_state{YType::enumeration, "instance-state"},
    last_update_time{YType::str, "last-update-time"},
    no_route_change_spf_nos{YType::uint32, "no-route-change-spf-nos"},
    node_id{YType::uint32, "node-id"},
    not_interested_spf_nos{YType::uint32, "not-interested-spf-nos"},
    route_change_spf_nos{YType::uint32, "route-change-spf-nos"},
    spf_offset{YType::uint32, "spf-offset"},
    total_spf_nos{YType::uint32, "total-spf-nos"},
    total_spt_nos{YType::uint32, "total-spt-nos"}
{

    yang_name = "instance"; yang_parent_name = "instance-name"; is_top_level_class = false; has_list_ancestor = false;
}

Rcmd::Process::Ospf::Process_::InstanceName::Instance::~Instance()
{
}

bool Rcmd::Process::Ospf::Process_::InstanceName::Instance::has_data() const
{
    return arch_spf_run.is_set
	|| fwd_referenced.is_set
	|| instance_deleted.is_set
	|| instance_id.is_set
	|| instance_state.is_set
	|| last_update_time.is_set
	|| no_route_change_spf_nos.is_set
	|| node_id.is_set
	|| not_interested_spf_nos.is_set
	|| route_change_spf_nos.is_set
	|| spf_offset.is_set
	|| total_spf_nos.is_set
	|| total_spt_nos.is_set;
}

bool Rcmd::Process::Ospf::Process_::InstanceName::Instance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(arch_spf_run.yfilter)
	|| ydk::is_set(fwd_referenced.yfilter)
	|| ydk::is_set(instance_deleted.yfilter)
	|| ydk::is_set(instance_id.yfilter)
	|| ydk::is_set(instance_state.yfilter)
	|| ydk::is_set(last_update_time.yfilter)
	|| ydk::is_set(no_route_change_spf_nos.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(not_interested_spf_nos.yfilter)
	|| ydk::is_set(route_change_spf_nos.yfilter)
	|| ydk::is_set(spf_offset.yfilter)
	|| ydk::is_set(total_spf_nos.yfilter)
	|| ydk::is_set(total_spt_nos.yfilter);
}

std::string Rcmd::Process::Ospf::Process_::InstanceName::Instance::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rcmd-oper:rcmd/process/ospf/process/instance-name/" << get_segment_path();
    return path_buffer.str();
}

std::string Rcmd::Process::Ospf::Process_::InstanceName::Instance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "instance";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Rcmd::Process::Ospf::Process_::InstanceName::Instance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arch_spf_run.is_set || is_set(arch_spf_run.yfilter)) leaf_name_data.push_back(arch_spf_run.get_name_leafdata());
    if (fwd_referenced.is_set || is_set(fwd_referenced.yfilter)) leaf_name_data.push_back(fwd_referenced.get_name_leafdata());
    if (instance_deleted.is_set || is_set(instance_deleted.yfilter)) leaf_name_data.push_back(instance_deleted.get_name_leafdata());
    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (instance_state.is_set || is_set(instance_state.yfilter)) leaf_name_data.push_back(instance_state.get_name_leafdata());
    if (last_update_time.is_set || is_set(last_update_time.yfilter)) leaf_name_data.push_back(last_update_time.get_name_leafdata());
    if (no_route_change_spf_nos.is_set || is_set(no_route_change_spf_nos.yfilter)) leaf_name_data.push_back(no_route_change_spf_nos.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (not_interested_spf_nos.is_set || is_set(not_interested_spf_nos.yfilter)) leaf_name_data.push_back(not_interested_spf_nos.get_name_leafdata());
    if (route_change_spf_nos.is_set || is_set(route_change_spf_nos.yfilter)) leaf_name_data.push_back(route_change_spf_nos.get_name_leafdata());
    if (spf_offset.is_set || is_set(spf_offset.yfilter)) leaf_name_data.push_back(spf_offset.get_name_leafdata());
    if (total_spf_nos.is_set || is_set(total_spf_nos.yfilter)) leaf_name_data.push_back(total_spf_nos.get_name_leafdata());
    if (total_spt_nos.is_set || is_set(total_spt_nos.yfilter)) leaf_name_data.push_back(total_spt_nos.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Rcmd::Process::Ospf::Process_::InstanceName::Instance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Rcmd::Process::Ospf::Process_::InstanceName::Instance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Rcmd::Process::Ospf::Process_::InstanceName::Instance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "arch-spf-run")
    {
        arch_spf_run = value;
        arch_spf_run.value_namespace = name_space;
        arch_spf_run.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fwd-referenced")
    {
        fwd_referenced = value;
        fwd_referenced.value_namespace = name_space;
        fwd_referenced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-deleted")
    {
        instance_deleted = value;
        instance_deleted.value_namespace = name_space;
        instance_deleted.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "last-update-time")
    {
        last_update_time = value;
        last_update_time.value_namespace = name_space;
        last_update_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-route-change-spf-nos")
    {
        no_route_change_spf_nos = value;
        no_route_change_spf_nos.value_namespace = name_space;
        no_route_change_spf_nos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-interested-spf-nos")
    {
        not_interested_spf_nos = value;
        not_interested_spf_nos.value_namespace = name_space;
        not_interested_spf_nos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-change-spf-nos")
    {
        route_change_spf_nos = value;
        route_change_spf_nos.value_namespace = name_space;
        route_change_spf_nos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spf-offset")
    {
        spf_offset = value;
        spf_offset.value_namespace = name_space;
        spf_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-spf-nos")
    {
        total_spf_nos = value;
        total_spf_nos.value_namespace = name_space;
        total_spf_nos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-spt-nos")
    {
        total_spt_nos = value;
        total_spt_nos.value_namespace = name_space;
        total_spt_nos.value_namespace_prefix = name_space_prefix;
    }
}

void Rcmd::Process::Ospf::Process_::InstanceName::Instance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "arch-spf-run")
    {
        arch_spf_run.yfilter = yfilter;
    }
    if(value_path == "fwd-referenced")
    {
        fwd_referenced.yfilter = yfilter;
    }
    if(value_path == "instance-deleted")
    {
        instance_deleted.yfilter = yfilter;
    }
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
    if(value_path == "instance-state")
    {
        instance_state.yfilter = yfilter;
    }
    if(value_path == "last-update-time")
    {
        last_update_time.yfilter = yfilter;
    }
    if(value_path == "no-route-change-spf-nos")
    {
        no_route_change_spf_nos.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "not-interested-spf-nos")
    {
        not_interested_spf_nos.yfilter = yfilter;
    }
    if(value_path == "route-change-spf-nos")
    {
        route_change_spf_nos.yfilter = yfilter;
    }
    if(value_path == "spf-offset")
    {
        spf_offset.yfilter = yfilter;
    }
    if(value_path == "total-spf-nos")
    {
        total_spf_nos.yfilter = yfilter;
    }
    if(value_path == "total-spt-nos")
    {
        total_spt_nos.yfilter = yfilter;
    }
}

bool Rcmd::Process::Ospf::Process_::InstanceName::Instance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "arch-spf-run" || name == "fwd-referenced" || name == "instance-deleted" || name == "instance-id" || name == "instance-state" || name == "last-update-time" || name == "no-route-change-spf-nos" || name == "node-id" || name == "not-interested-spf-nos" || name == "route-change-spf-nos" || name == "spf-offset" || name == "total-spf-nos" || name == "total-spt-nos")
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

    yang_name = "server"; yang_parent_name = "rcmd"; is_top_level_class = false; has_list_ancestor = false;
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

    yang_name = "detail"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false;
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

    return leaf_name_data;

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

    yang_name = "protocol-config"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = false;
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

    yang_name = "priority"; yang_parent_name = "protocol-config"; is_top_level_class = false; has_list_ancestor = false;
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

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (priority_name.is_set || is_set(priority_name.yfilter)) leaf_name_data.push_back(priority_name.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

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

    yang_name = "server-detail"; yang_parent_name = "detail"; is_top_level_class = false; has_list_ancestor = false;
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

    if (memory_suspend.is_set || is_set(memory_suspend.yfilter)) leaf_name_data.push_back(memory_suspend.get_name_leafdata());
    if (overload_suspend.is_set || is_set(overload_suspend.yfilter)) leaf_name_data.push_back(overload_suspend.get_name_leafdata());

    return leaf_name_data;

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

    yang_name = "trace-information"; yang_parent_name = "server-detail"; is_top_level_class = false; has_list_ancestor = false;
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

    if (error_stats.is_set || is_set(error_stats.yfilter)) leaf_name_data.push_back(error_stats.get_name_leafdata());
    if (last_run_stats.is_set || is_set(last_run_stats.yfilter)) leaf_name_data.push_back(last_run_stats.get_name_leafdata());
    if (total_stats.is_set || is_set(total_stats.yfilter)) leaf_name_data.push_back(total_stats.get_name_leafdata());
    if (trace_name.is_set || is_set(trace_name.yfilter)) leaf_name_data.push_back(trace_name.get_name_leafdata());

    return leaf_name_data;

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

    yang_name = "normal"; yang_parent_name = "server"; is_top_level_class = false; has_list_ancestor = false;
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

    return leaf_name_data;

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

    yang_name = "protocol-config"; yang_parent_name = "normal"; is_top_level_class = false; has_list_ancestor = false;
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

    yang_name = "priority"; yang_parent_name = "protocol-config"; is_top_level_class = false; has_list_ancestor = false;
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

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (priority_name.is_set || is_set(priority_name.yfilter)) leaf_name_data.push_back(priority_name.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

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

    yang_name = "server-detail"; yang_parent_name = "normal"; is_top_level_class = false; has_list_ancestor = false;
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

    if (memory_suspend.is_set || is_set(memory_suspend.yfilter)) leaf_name_data.push_back(memory_suspend.get_name_leafdata());
    if (overload_suspend.is_set || is_set(overload_suspend.yfilter)) leaf_name_data.push_back(overload_suspend.get_name_leafdata());

    return leaf_name_data;

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

    yang_name = "trace-information"; yang_parent_name = "server-detail"; is_top_level_class = false; has_list_ancestor = false;
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

    if (error_stats.is_set || is_set(error_stats.yfilter)) leaf_name_data.push_back(error_stats.get_name_leafdata());
    if (last_run_stats.is_set || is_set(last_run_stats.yfilter)) leaf_name_data.push_back(last_run_stats.get_name_leafdata());
    if (total_stats.is_set || is_set(total_stats.yfilter)) leaf_name_data.push_back(total_stats.get_name_leafdata());
    if (trace_name.is_set || is_set(trace_name.yfilter)) leaf_name_data.push_back(trace_name.get_name_leafdata());

    return leaf_name_data;

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


}
}

