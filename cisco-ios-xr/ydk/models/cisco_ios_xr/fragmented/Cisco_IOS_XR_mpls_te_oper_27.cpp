
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_27.hpp"
#include "Cisco_IOS_XR_mpls_te_oper_28.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_te_oper {

MplsLcacStandby::PreemptionEvents::PreemptionEvents()
{
    yang_name = "preemption-events"; yang_parent_name = "mpls-lcac-standby";
}

MplsLcacStandby::PreemptionEvents::~PreemptionEvents()
{
}

bool MplsLcacStandby::PreemptionEvents::has_data() const
{
    for (std::size_t index=0; index<preemption_event.size(); index++)
    {
        if(preemption_event[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcacStandby::PreemptionEvents::has_operation() const
{
    for (std::size_t index=0; index<preemption_event.size(); index++)
    {
        if(preemption_event[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLcacStandby::PreemptionEvents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preemption-events";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::PreemptionEvents::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::PreemptionEvents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "preemption-event")
    {
        for(auto const & c : preemption_event)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcacStandby::PreemptionEvents::PreemptionEvent>();
        c->parent = this;
        preemption_event.push_back(std::move(c));
        children[segment_path] = preemption_event.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::PreemptionEvents::get_children()
{
    for (auto const & c : preemption_event)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLcacStandby::PreemptionEvents::set_value(const std::string & value_path, std::string value)
{
}

MplsLcacStandby::PreemptionEvents::PreemptionEvent::PreemptionEvent()
    :
    event_index{YType::uint32, "event-index"},
    bandwidth_overshoot0{YType::uint64, "bandwidth-overshoot0"},
    bandwidth_overshoot1{YType::uint64, "bandwidth-overshoot1"},
    bandwidth_type{YType::uint8, "bandwidth-type"},
    destination_address{YType::str, "destination-address"},
    event_time{YType::uint32, "event-time"},
    hard_preempted_bandwidth_bc0{YType::uint64, "hard-preempted-bandwidth-bc0"},
    hard_preempted_bandwidth_bc1{YType::uint64, "hard-preempted-bandwidth-bc1"},
    hard_preempted_ls_ps{YType::uint16, "hard-preempted-ls-ps"},
    hard_preempted_tunnels{YType::uint16, "hard-preempted-tunnels"},
    hold_priority{YType::uint8, "hold-priority"},
    interface_name{YType::str, "interface-name"},
    ls_ps{YType::uint16, "ls-ps"},
    lsp_id{YType::uint16, "lsp-id"},
    new_bandwidth_bc0{YType::uint64, "new-bandwidth-bc0"},
    new_bandwidth_bc1{YType::uint64, "new-bandwidth-bc1"},
    old_bandwidth_bc0{YType::uint64, "old-bandwidth-bc0"},
    old_bandwidth_bc1{YType::uint64, "old-bandwidth-bc1"},
    requested_bandwidth{YType::uint64, "requested-bandwidth"},
    setup_priority{YType::uint8, "setup-priority"},
    soft_preempted_fr_rrewrite_bandwidth_bc0{YType::uint64, "soft-preempted-fr-rrewrite-bandwidth-bc0"},
    soft_preempted_fr_rrewrite_bandwidth_bc1{YType::uint64, "soft-preempted-fr-rrewrite-bandwidth-bc1"},
    soft_preempted_ls_ps{YType::uint16, "soft-preempted-ls-ps"},
    soft_preempted_ls_ps_fr_rrewrite{YType::uint16, "soft-preempted-ls-ps-fr-rrewrite"},
    soft_preempted_tunnels{YType::uint16, "soft-preempted-tunnels"},
    soft_preempted_tunnels_fr_rrewrite{YType::uint16, "soft-preempted-tunnels-fr-rrewrite"},
    softly_preempted_bandwidth_bc0{YType::uint64, "softly-preempted-bandwidth-bc0"},
    softly_preempted_bandwidth_bc1{YType::uint64, "softly-preempted-bandwidth-bc1"},
    source_address{YType::str, "source-address"},
    total_preempted_bandwidth_bc0{YType::uint64, "total-preempted-bandwidth-bc0"},
    total_preempted_bandwidth_bc1{YType::uint64, "total-preempted-bandwidth-bc1"},
    tunnel_id{YType::uint16, "tunnel-id"},
    tunnels{YType::uint16, "tunnels"}
{
    yang_name = "preemption-event"; yang_parent_name = "preemption-events";
}

MplsLcacStandby::PreemptionEvents::PreemptionEvent::~PreemptionEvent()
{
}

bool MplsLcacStandby::PreemptionEvents::PreemptionEvent::has_data() const
{
    for (std::size_t index=0; index<lsp.size(); index++)
    {
        if(lsp[index]->has_data())
            return true;
    }
    return event_index.is_set
	|| bandwidth_overshoot0.is_set
	|| bandwidth_overshoot1.is_set
	|| bandwidth_type.is_set
	|| destination_address.is_set
	|| event_time.is_set
	|| hard_preempted_bandwidth_bc0.is_set
	|| hard_preempted_bandwidth_bc1.is_set
	|| hard_preempted_ls_ps.is_set
	|| hard_preempted_tunnels.is_set
	|| hold_priority.is_set
	|| interface_name.is_set
	|| ls_ps.is_set
	|| lsp_id.is_set
	|| new_bandwidth_bc0.is_set
	|| new_bandwidth_bc1.is_set
	|| old_bandwidth_bc0.is_set
	|| old_bandwidth_bc1.is_set
	|| requested_bandwidth.is_set
	|| setup_priority.is_set
	|| soft_preempted_fr_rrewrite_bandwidth_bc0.is_set
	|| soft_preempted_fr_rrewrite_bandwidth_bc1.is_set
	|| soft_preempted_ls_ps.is_set
	|| soft_preempted_ls_ps_fr_rrewrite.is_set
	|| soft_preempted_tunnels.is_set
	|| soft_preempted_tunnels_fr_rrewrite.is_set
	|| softly_preempted_bandwidth_bc0.is_set
	|| softly_preempted_bandwidth_bc1.is_set
	|| source_address.is_set
	|| total_preempted_bandwidth_bc0.is_set
	|| total_preempted_bandwidth_bc1.is_set
	|| tunnel_id.is_set
	|| tunnels.is_set;
}

bool MplsLcacStandby::PreemptionEvents::PreemptionEvent::has_operation() const
{
    for (std::size_t index=0; index<lsp.size(); index++)
    {
        if(lsp[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(event_index.operation)
	|| is_set(bandwidth_overshoot0.operation)
	|| is_set(bandwidth_overshoot1.operation)
	|| is_set(bandwidth_type.operation)
	|| is_set(destination_address.operation)
	|| is_set(event_time.operation)
	|| is_set(hard_preempted_bandwidth_bc0.operation)
	|| is_set(hard_preempted_bandwidth_bc1.operation)
	|| is_set(hard_preempted_ls_ps.operation)
	|| is_set(hard_preempted_tunnels.operation)
	|| is_set(hold_priority.operation)
	|| is_set(interface_name.operation)
	|| is_set(ls_ps.operation)
	|| is_set(lsp_id.operation)
	|| is_set(new_bandwidth_bc0.operation)
	|| is_set(new_bandwidth_bc1.operation)
	|| is_set(old_bandwidth_bc0.operation)
	|| is_set(old_bandwidth_bc1.operation)
	|| is_set(requested_bandwidth.operation)
	|| is_set(setup_priority.operation)
	|| is_set(soft_preempted_fr_rrewrite_bandwidth_bc0.operation)
	|| is_set(soft_preempted_fr_rrewrite_bandwidth_bc1.operation)
	|| is_set(soft_preempted_ls_ps.operation)
	|| is_set(soft_preempted_ls_ps_fr_rrewrite.operation)
	|| is_set(soft_preempted_tunnels.operation)
	|| is_set(soft_preempted_tunnels_fr_rrewrite.operation)
	|| is_set(softly_preempted_bandwidth_bc0.operation)
	|| is_set(softly_preempted_bandwidth_bc1.operation)
	|| is_set(source_address.operation)
	|| is_set(total_preempted_bandwidth_bc0.operation)
	|| is_set(total_preempted_bandwidth_bc1.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(tunnels.operation);
}

std::string MplsLcacStandby::PreemptionEvents::PreemptionEvent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preemption-event" <<"[event-index='" <<event_index <<"']";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::PreemptionEvents::PreemptionEvent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/preemption-events/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_index.is_set || is_set(event_index.operation)) leaf_name_data.push_back(event_index.get_name_leafdata());
    if (bandwidth_overshoot0.is_set || is_set(bandwidth_overshoot0.operation)) leaf_name_data.push_back(bandwidth_overshoot0.get_name_leafdata());
    if (bandwidth_overshoot1.is_set || is_set(bandwidth_overshoot1.operation)) leaf_name_data.push_back(bandwidth_overshoot1.get_name_leafdata());
    if (bandwidth_type.is_set || is_set(bandwidth_type.operation)) leaf_name_data.push_back(bandwidth_type.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (event_time.is_set || is_set(event_time.operation)) leaf_name_data.push_back(event_time.get_name_leafdata());
    if (hard_preempted_bandwidth_bc0.is_set || is_set(hard_preempted_bandwidth_bc0.operation)) leaf_name_data.push_back(hard_preempted_bandwidth_bc0.get_name_leafdata());
    if (hard_preempted_bandwidth_bc1.is_set || is_set(hard_preempted_bandwidth_bc1.operation)) leaf_name_data.push_back(hard_preempted_bandwidth_bc1.get_name_leafdata());
    if (hard_preempted_ls_ps.is_set || is_set(hard_preempted_ls_ps.operation)) leaf_name_data.push_back(hard_preempted_ls_ps.get_name_leafdata());
    if (hard_preempted_tunnels.is_set || is_set(hard_preempted_tunnels.operation)) leaf_name_data.push_back(hard_preempted_tunnels.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.operation)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (ls_ps.is_set || is_set(ls_ps.operation)) leaf_name_data.push_back(ls_ps.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (new_bandwidth_bc0.is_set || is_set(new_bandwidth_bc0.operation)) leaf_name_data.push_back(new_bandwidth_bc0.get_name_leafdata());
    if (new_bandwidth_bc1.is_set || is_set(new_bandwidth_bc1.operation)) leaf_name_data.push_back(new_bandwidth_bc1.get_name_leafdata());
    if (old_bandwidth_bc0.is_set || is_set(old_bandwidth_bc0.operation)) leaf_name_data.push_back(old_bandwidth_bc0.get_name_leafdata());
    if (old_bandwidth_bc1.is_set || is_set(old_bandwidth_bc1.operation)) leaf_name_data.push_back(old_bandwidth_bc1.get_name_leafdata());
    if (requested_bandwidth.is_set || is_set(requested_bandwidth.operation)) leaf_name_data.push_back(requested_bandwidth.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.operation)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (soft_preempted_fr_rrewrite_bandwidth_bc0.is_set || is_set(soft_preempted_fr_rrewrite_bandwidth_bc0.operation)) leaf_name_data.push_back(soft_preempted_fr_rrewrite_bandwidth_bc0.get_name_leafdata());
    if (soft_preempted_fr_rrewrite_bandwidth_bc1.is_set || is_set(soft_preempted_fr_rrewrite_bandwidth_bc1.operation)) leaf_name_data.push_back(soft_preempted_fr_rrewrite_bandwidth_bc1.get_name_leafdata());
    if (soft_preempted_ls_ps.is_set || is_set(soft_preempted_ls_ps.operation)) leaf_name_data.push_back(soft_preempted_ls_ps.get_name_leafdata());
    if (soft_preempted_ls_ps_fr_rrewrite.is_set || is_set(soft_preempted_ls_ps_fr_rrewrite.operation)) leaf_name_data.push_back(soft_preempted_ls_ps_fr_rrewrite.get_name_leafdata());
    if (soft_preempted_tunnels.is_set || is_set(soft_preempted_tunnels.operation)) leaf_name_data.push_back(soft_preempted_tunnels.get_name_leafdata());
    if (soft_preempted_tunnels_fr_rrewrite.is_set || is_set(soft_preempted_tunnels_fr_rrewrite.operation)) leaf_name_data.push_back(soft_preempted_tunnels_fr_rrewrite.get_name_leafdata());
    if (softly_preempted_bandwidth_bc0.is_set || is_set(softly_preempted_bandwidth_bc0.operation)) leaf_name_data.push_back(softly_preempted_bandwidth_bc0.get_name_leafdata());
    if (softly_preempted_bandwidth_bc1.is_set || is_set(softly_preempted_bandwidth_bc1.operation)) leaf_name_data.push_back(softly_preempted_bandwidth_bc1.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (total_preempted_bandwidth_bc0.is_set || is_set(total_preempted_bandwidth_bc0.operation)) leaf_name_data.push_back(total_preempted_bandwidth_bc0.get_name_leafdata());
    if (total_preempted_bandwidth_bc1.is_set || is_set(total_preempted_bandwidth_bc1.operation)) leaf_name_data.push_back(total_preempted_bandwidth_bc1.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnels.is_set || is_set(tunnels.operation)) leaf_name_data.push_back(tunnels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::PreemptionEvents::PreemptionEvent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsp")
    {
        for(auto const & c : lsp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcacStandby::PreemptionEvents::PreemptionEvent::Lsp>();
        c->parent = this;
        lsp.push_back(std::move(c));
        children[segment_path] = lsp.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::PreemptionEvents::PreemptionEvent::get_children()
{
    for (auto const & c : lsp)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLcacStandby::PreemptionEvents::PreemptionEvent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "event-index")
    {
        event_index = value;
    }
    if(value_path == "bandwidth-overshoot0")
    {
        bandwidth_overshoot0 = value;
    }
    if(value_path == "bandwidth-overshoot1")
    {
        bandwidth_overshoot1 = value;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "event-time")
    {
        event_time = value;
    }
    if(value_path == "hard-preempted-bandwidth-bc0")
    {
        hard_preempted_bandwidth_bc0 = value;
    }
    if(value_path == "hard-preempted-bandwidth-bc1")
    {
        hard_preempted_bandwidth_bc1 = value;
    }
    if(value_path == "hard-preempted-ls-ps")
    {
        hard_preempted_ls_ps = value;
    }
    if(value_path == "hard-preempted-tunnels")
    {
        hard_preempted_tunnels = value;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "ls-ps")
    {
        ls_ps = value;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
    }
    if(value_path == "new-bandwidth-bc0")
    {
        new_bandwidth_bc0 = value;
    }
    if(value_path == "new-bandwidth-bc1")
    {
        new_bandwidth_bc1 = value;
    }
    if(value_path == "old-bandwidth-bc0")
    {
        old_bandwidth_bc0 = value;
    }
    if(value_path == "old-bandwidth-bc1")
    {
        old_bandwidth_bc1 = value;
    }
    if(value_path == "requested-bandwidth")
    {
        requested_bandwidth = value;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
    }
    if(value_path == "soft-preempted-fr-rrewrite-bandwidth-bc0")
    {
        soft_preempted_fr_rrewrite_bandwidth_bc0 = value;
    }
    if(value_path == "soft-preempted-fr-rrewrite-bandwidth-bc1")
    {
        soft_preempted_fr_rrewrite_bandwidth_bc1 = value;
    }
    if(value_path == "soft-preempted-ls-ps")
    {
        soft_preempted_ls_ps = value;
    }
    if(value_path == "soft-preempted-ls-ps-fr-rrewrite")
    {
        soft_preempted_ls_ps_fr_rrewrite = value;
    }
    if(value_path == "soft-preempted-tunnels")
    {
        soft_preempted_tunnels = value;
    }
    if(value_path == "soft-preempted-tunnels-fr-rrewrite")
    {
        soft_preempted_tunnels_fr_rrewrite = value;
    }
    if(value_path == "softly-preempted-bandwidth-bc0")
    {
        softly_preempted_bandwidth_bc0 = value;
    }
    if(value_path == "softly-preempted-bandwidth-bc1")
    {
        softly_preempted_bandwidth_bc1 = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "total-preempted-bandwidth-bc0")
    {
        total_preempted_bandwidth_bc0 = value;
    }
    if(value_path == "total-preempted-bandwidth-bc1")
    {
        total_preempted_bandwidth_bc1 = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "tunnels")
    {
        tunnels = value;
    }
}

MplsLcacStandby::PreemptionEvents::PreemptionEvent::Lsp::Lsp()
    :
    bandwidth_preempted{YType::boolean, "bandwidth-preempted"},
    bandwidth_type{YType::uint8, "bandwidth-type"},
    destination_address{YType::str, "destination-address"},
    hold_priority{YType::uint8, "hold-priority"},
    lsp_id{YType::uint16, "lsp-id"},
    requested_bandwidth{YType::uint64, "requested-bandwidth"},
    setup_priority{YType::uint8, "setup-priority"},
    soft_preempted{YType::boolean, "soft-preempted"},
    soft_preempted_fr_rrewrite{YType::boolean, "soft-preempted-fr-rrewrite"},
    soft_preemption_timeout{YType::uint16, "soft-preemption-timeout"},
    source_address{YType::str, "source-address"},
    tunnel_id{YType::uint16, "tunnel-id"}
{
    yang_name = "lsp"; yang_parent_name = "preemption-event";
}

MplsLcacStandby::PreemptionEvents::PreemptionEvent::Lsp::~Lsp()
{
}

bool MplsLcacStandby::PreemptionEvents::PreemptionEvent::Lsp::has_data() const
{
    return bandwidth_preempted.is_set
	|| bandwidth_type.is_set
	|| destination_address.is_set
	|| hold_priority.is_set
	|| lsp_id.is_set
	|| requested_bandwidth.is_set
	|| setup_priority.is_set
	|| soft_preempted.is_set
	|| soft_preempted_fr_rrewrite.is_set
	|| soft_preemption_timeout.is_set
	|| source_address.is_set
	|| tunnel_id.is_set;
}

bool MplsLcacStandby::PreemptionEvents::PreemptionEvent::Lsp::has_operation() const
{
    return is_set(operation)
	|| is_set(bandwidth_preempted.operation)
	|| is_set(bandwidth_type.operation)
	|| is_set(destination_address.operation)
	|| is_set(hold_priority.operation)
	|| is_set(lsp_id.operation)
	|| is_set(requested_bandwidth.operation)
	|| is_set(setup_priority.operation)
	|| is_set(soft_preempted.operation)
	|| is_set(soft_preempted_fr_rrewrite.operation)
	|| is_set(soft_preemption_timeout.operation)
	|| is_set(source_address.operation)
	|| is_set(tunnel_id.operation);
}

std::string MplsLcacStandby::PreemptionEvents::PreemptionEvent::Lsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::PreemptionEvents::PreemptionEvent::Lsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lsp' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_preempted.is_set || is_set(bandwidth_preempted.operation)) leaf_name_data.push_back(bandwidth_preempted.get_name_leafdata());
    if (bandwidth_type.is_set || is_set(bandwidth_type.operation)) leaf_name_data.push_back(bandwidth_type.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.operation)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (requested_bandwidth.is_set || is_set(requested_bandwidth.operation)) leaf_name_data.push_back(requested_bandwidth.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.operation)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (soft_preempted.is_set || is_set(soft_preempted.operation)) leaf_name_data.push_back(soft_preempted.get_name_leafdata());
    if (soft_preempted_fr_rrewrite.is_set || is_set(soft_preempted_fr_rrewrite.operation)) leaf_name_data.push_back(soft_preempted_fr_rrewrite.get_name_leafdata());
    if (soft_preemption_timeout.is_set || is_set(soft_preemption_timeout.operation)) leaf_name_data.push_back(soft_preemption_timeout.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::PreemptionEvents::PreemptionEvent::Lsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::PreemptionEvents::PreemptionEvent::Lsp::get_children()
{
    return children;
}

void MplsLcacStandby::PreemptionEvents::PreemptionEvent::Lsp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth-preempted")
    {
        bandwidth_preempted = value;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
    }
    if(value_path == "requested-bandwidth")
    {
        requested_bandwidth = value;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
    }
    if(value_path == "soft-preempted")
    {
        soft_preempted = value;
    }
    if(value_path == "soft-preempted-fr-rrewrite")
    {
        soft_preempted_fr_rrewrite = value;
    }
    if(value_path == "soft-preemption-timeout")
    {
        soft_preemption_timeout = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

MplsLcacStandby::Advertisements::Advertisements()
    :
    ds_te_mode{YType::enumeration, "ds-te-mode"},
    flooding_status_message{YType::str, "flooding-status-message"},
    last_flooding_time{YType::uint32, "last-flooding-time"},
    last_flooding_trigger{YType::enumeration, "last-flooding-trigger"},
    next_flooding_time{YType::uint32, "next-flooding-time"}
{
    yang_name = "advertisements"; yang_parent_name = "mpls-lcac-standby";
}

MplsLcacStandby::Advertisements::~Advertisements()
{
}

bool MplsLcacStandby::Advertisements::has_data() const
{
    for (std::size_t index=0; index<advertized_areas.size(); index++)
    {
        if(advertized_areas[index]->has_data())
            return true;
    }
    return ds_te_mode.is_set
	|| flooding_status_message.is_set
	|| last_flooding_time.is_set
	|| last_flooding_trigger.is_set
	|| next_flooding_time.is_set;
}

bool MplsLcacStandby::Advertisements::has_operation() const
{
    for (std::size_t index=0; index<advertized_areas.size(); index++)
    {
        if(advertized_areas[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(ds_te_mode.operation)
	|| is_set(flooding_status_message.operation)
	|| is_set(last_flooding_time.operation)
	|| is_set(last_flooding_trigger.operation)
	|| is_set(next_flooding_time.operation);
}

std::string MplsLcacStandby::Advertisements::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertisements";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::Advertisements::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ds_te_mode.is_set || is_set(ds_te_mode.operation)) leaf_name_data.push_back(ds_te_mode.get_name_leafdata());
    if (flooding_status_message.is_set || is_set(flooding_status_message.operation)) leaf_name_data.push_back(flooding_status_message.get_name_leafdata());
    if (last_flooding_time.is_set || is_set(last_flooding_time.operation)) leaf_name_data.push_back(last_flooding_time.get_name_leafdata());
    if (last_flooding_trigger.is_set || is_set(last_flooding_trigger.operation)) leaf_name_data.push_back(last_flooding_trigger.get_name_leafdata());
    if (next_flooding_time.is_set || is_set(next_flooding_time.operation)) leaf_name_data.push_back(next_flooding_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::Advertisements::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "advertized-areas")
    {
        for(auto const & c : advertized_areas)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcacStandby::Advertisements::AdvertizedAreas>();
        c->parent = this;
        advertized_areas.push_back(std::move(c));
        children[segment_path] = advertized_areas.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::Advertisements::get_children()
{
    for (auto const & c : advertized_areas)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLcacStandby::Advertisements::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ds-te-mode")
    {
        ds_te_mode = value;
    }
    if(value_path == "flooding-status-message")
    {
        flooding_status_message = value;
    }
    if(value_path == "last-flooding-time")
    {
        last_flooding_time = value;
    }
    if(value_path == "last-flooding-trigger")
    {
        last_flooding_trigger = value;
    }
    if(value_path == "next-flooding-time")
    {
        next_flooding_time = value;
    }
}

MplsLcacStandby::Advertisements::AdvertizedAreas::AdvertizedAreas()
    :
    igp_area_id{YType::str, "igp-area-id"},
    protocol{YType::enumeration, "protocol"},
    router_id{YType::str, "router-id"},
    system_id{YType::str, "system-id"}
{
    yang_name = "advertized-areas"; yang_parent_name = "advertisements";
}

MplsLcacStandby::Advertisements::AdvertizedAreas::~AdvertizedAreas()
{
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::has_data() const
{
    for (std::size_t index=0; index<flooded_link.size(); index++)
    {
        if(flooded_link[index]->has_data())
            return true;
    }
    return igp_area_id.is_set
	|| protocol.is_set
	|| router_id.is_set
	|| system_id.is_set;
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::has_operation() const
{
    for (std::size_t index=0; index<flooded_link.size(); index++)
    {
        if(flooded_link[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(igp_area_id.operation)
	|| is_set(protocol.operation)
	|| is_set(router_id.operation)
	|| is_set(system_id.operation);
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertized-areas";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::Advertisements::AdvertizedAreas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/advertisements/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_area_id.is_set || is_set(igp_area_id.operation)) leaf_name_data.push_back(igp_area_id.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (system_id.is_set || is_set(system_id.operation)) leaf_name_data.push_back(system_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::Advertisements::AdvertizedAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flooded-link")
    {
        for(auto const & c : flooded_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink>();
        c->parent = this;
        flooded_link.push_back(std::move(c));
        children[segment_path] = flooded_link.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::Advertisements::AdvertizedAreas::get_children()
{
    for (auto const & c : flooded_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "igp-area-id")
    {
        igp_area_id = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
    if(value_path == "system-id")
    {
        system_id = value;
    }
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::FloodedLink()
    :
    affinity_attribute_flags{YType::uint32, "affinity-attribute-flags"},
    bandwidth_units{YType::enumeration, "bandwidth-units"},
    bcm_id{YType::uint16, "bcm-id"},
    designated_router_igp_id{YType::str, "designated-router-igp-id"},
    extended_affinity_attribute_flag{YType::uint32, "extended-affinity-attribute-flag"},
    igp_metric{YType::uint32, "igp-metric"},
    igp_neighbor_address{YType::str, "igp-neighbor-address"},
    incoming_interface_id{YType::uint32, "incoming-interface-id"},
    interface_name{YType::str, "interface-name"},
    is_designated_router{YType::boolean, "is-designated-router"},
    is_receiving_reservable_bandwidth_enabled{YType::boolean, "is-receiving-reservable-bandwidth-enabled"},
    is_transmitting_reservable_bandwidth_enabled{YType::boolean, "is-transmitting-reservable-bandwidth-enabled"},
    link_address{YType::str, "link-address"},
    link_id{YType::uint16, "link-id"},
    link_maximum_reservable_bandwidth{YType::uint32, "link-maximum-reservable-bandwidth"},
    neighbor_igp_id{YType::str, "neighbor-igp-id"},
    outgoing_interface_id{YType::uint32, "outgoing-interface-id"},
    physical_bandwidth{YType::uint32, "physical-bandwidth"},
    receiving_direction{YType::enumeration, "receiving-direction"},
    reservable_pool0_bandwidth{YType::uint32, "reservable-pool0-bandwidth"},
    reservable_pool1_bandwidth{YType::uint32, "reservable-pool1-bandwidth"},
    subnet_type{YType::enumeration, "subnet-type"},
    te_metric{YType::uint32, "te-metric"},
    transmitting_direction{YType::enumeration, "transmitting-direction"},
    uni_link_delay{YType::uint32, "uni-link-delay"}
    	,
    odu_link_capabilities(std::make_shared<MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities>())
{
    odu_link_capabilities->parent = this;
    children["odu-link-capabilities"] = odu_link_capabilities;

    yang_name = "flooded-link"; yang_parent_name = "advertized-areas";
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::~FloodedLink()
{
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::has_data() const
{
    for (std::size_t index=0; index<receiving_reservable_bandwidth.size(); index++)
    {
        if(receiving_reservable_bandwidth[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<transmitting_reservable_bandwidth.size(); index++)
    {
        if(transmitting_reservable_bandwidth[index]->has_data())
            return true;
    }
    for (auto const & leaf : extended_affinity_attribute_flag.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return affinity_attribute_flags.is_set
	|| bandwidth_units.is_set
	|| bcm_id.is_set
	|| designated_router_igp_id.is_set
	|| igp_metric.is_set
	|| igp_neighbor_address.is_set
	|| incoming_interface_id.is_set
	|| interface_name.is_set
	|| is_designated_router.is_set
	|| is_receiving_reservable_bandwidth_enabled.is_set
	|| is_transmitting_reservable_bandwidth_enabled.is_set
	|| link_address.is_set
	|| link_id.is_set
	|| link_maximum_reservable_bandwidth.is_set
	|| neighbor_igp_id.is_set
	|| outgoing_interface_id.is_set
	|| physical_bandwidth.is_set
	|| receiving_direction.is_set
	|| reservable_pool0_bandwidth.is_set
	|| reservable_pool1_bandwidth.is_set
	|| subnet_type.is_set
	|| te_metric.is_set
	|| transmitting_direction.is_set
	|| uni_link_delay.is_set
	|| (odu_link_capabilities !=  nullptr && odu_link_capabilities->has_data());
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::has_operation() const
{
    for (std::size_t index=0; index<receiving_reservable_bandwidth.size(); index++)
    {
        if(receiving_reservable_bandwidth[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<transmitting_reservable_bandwidth.size(); index++)
    {
        if(transmitting_reservable_bandwidth[index]->has_operation())
            return true;
    }
    for (auto const & leaf : extended_affinity_attribute_flag.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(affinity_attribute_flags.operation)
	|| is_set(bandwidth_units.operation)
	|| is_set(bcm_id.operation)
	|| is_set(designated_router_igp_id.operation)
	|| is_set(extended_affinity_attribute_flag.operation)
	|| is_set(igp_metric.operation)
	|| is_set(igp_neighbor_address.operation)
	|| is_set(incoming_interface_id.operation)
	|| is_set(interface_name.operation)
	|| is_set(is_designated_router.operation)
	|| is_set(is_receiving_reservable_bandwidth_enabled.operation)
	|| is_set(is_transmitting_reservable_bandwidth_enabled.operation)
	|| is_set(link_address.operation)
	|| is_set(link_id.operation)
	|| is_set(link_maximum_reservable_bandwidth.operation)
	|| is_set(neighbor_igp_id.operation)
	|| is_set(outgoing_interface_id.operation)
	|| is_set(physical_bandwidth.operation)
	|| is_set(receiving_direction.operation)
	|| is_set(reservable_pool0_bandwidth.operation)
	|| is_set(reservable_pool1_bandwidth.operation)
	|| is_set(subnet_type.operation)
	|| is_set(te_metric.operation)
	|| is_set(transmitting_direction.operation)
	|| is_set(uni_link_delay.operation)
	|| (odu_link_capabilities !=  nullptr && odu_link_capabilities->has_operation());
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooded-link";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/advertisements/advertized-areas/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_attribute_flags.is_set || is_set(affinity_attribute_flags.operation)) leaf_name_data.push_back(affinity_attribute_flags.get_name_leafdata());
    if (bandwidth_units.is_set || is_set(bandwidth_units.operation)) leaf_name_data.push_back(bandwidth_units.get_name_leafdata());
    if (bcm_id.is_set || is_set(bcm_id.operation)) leaf_name_data.push_back(bcm_id.get_name_leafdata());
    if (designated_router_igp_id.is_set || is_set(designated_router_igp_id.operation)) leaf_name_data.push_back(designated_router_igp_id.get_name_leafdata());
    if (igp_metric.is_set || is_set(igp_metric.operation)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (igp_neighbor_address.is_set || is_set(igp_neighbor_address.operation)) leaf_name_data.push_back(igp_neighbor_address.get_name_leafdata());
    if (incoming_interface_id.is_set || is_set(incoming_interface_id.operation)) leaf_name_data.push_back(incoming_interface_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_designated_router.is_set || is_set(is_designated_router.operation)) leaf_name_data.push_back(is_designated_router.get_name_leafdata());
    if (is_receiving_reservable_bandwidth_enabled.is_set || is_set(is_receiving_reservable_bandwidth_enabled.operation)) leaf_name_data.push_back(is_receiving_reservable_bandwidth_enabled.get_name_leafdata());
    if (is_transmitting_reservable_bandwidth_enabled.is_set || is_set(is_transmitting_reservable_bandwidth_enabled.operation)) leaf_name_data.push_back(is_transmitting_reservable_bandwidth_enabled.get_name_leafdata());
    if (link_address.is_set || is_set(link_address.operation)) leaf_name_data.push_back(link_address.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.operation)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (link_maximum_reservable_bandwidth.is_set || is_set(link_maximum_reservable_bandwidth.operation)) leaf_name_data.push_back(link_maximum_reservable_bandwidth.get_name_leafdata());
    if (neighbor_igp_id.is_set || is_set(neighbor_igp_id.operation)) leaf_name_data.push_back(neighbor_igp_id.get_name_leafdata());
    if (outgoing_interface_id.is_set || is_set(outgoing_interface_id.operation)) leaf_name_data.push_back(outgoing_interface_id.get_name_leafdata());
    if (physical_bandwidth.is_set || is_set(physical_bandwidth.operation)) leaf_name_data.push_back(physical_bandwidth.get_name_leafdata());
    if (receiving_direction.is_set || is_set(receiving_direction.operation)) leaf_name_data.push_back(receiving_direction.get_name_leafdata());
    if (reservable_pool0_bandwidth.is_set || is_set(reservable_pool0_bandwidth.operation)) leaf_name_data.push_back(reservable_pool0_bandwidth.get_name_leafdata());
    if (reservable_pool1_bandwidth.is_set || is_set(reservable_pool1_bandwidth.operation)) leaf_name_data.push_back(reservable_pool1_bandwidth.get_name_leafdata());
    if (subnet_type.is_set || is_set(subnet_type.operation)) leaf_name_data.push_back(subnet_type.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.operation)) leaf_name_data.push_back(te_metric.get_name_leafdata());
    if (transmitting_direction.is_set || is_set(transmitting_direction.operation)) leaf_name_data.push_back(transmitting_direction.get_name_leafdata());
    if (uni_link_delay.is_set || is_set(uni_link_delay.operation)) leaf_name_data.push_back(uni_link_delay.get_name_leafdata());

    auto extended_affinity_attribute_flag_name_datas = extended_affinity_attribute_flag.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extended_affinity_attribute_flag_name_datas.begin(), extended_affinity_attribute_flag_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "odu-link-capabilities")
    {
        if(odu_link_capabilities != nullptr)
        {
            children["odu-link-capabilities"] = odu_link_capabilities;
        }
        else
        {
            odu_link_capabilities = std::make_shared<MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities>();
            odu_link_capabilities->parent = this;
            children["odu-link-capabilities"] = odu_link_capabilities;
        }
        return children.at("odu-link-capabilities");
    }

    if(child_yang_name == "receiving-reservable-bandwidth")
    {
        for(auto const & c : receiving_reservable_bandwidth)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth>();
        c->parent = this;
        receiving_reservable_bandwidth.push_back(std::move(c));
        children[segment_path] = receiving_reservable_bandwidth.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "shared-risk-link-group")
    {
        for(auto const & c : shared_risk_link_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup>();
        c->parent = this;
        shared_risk_link_group.push_back(std::move(c));
        children[segment_path] = shared_risk_link_group.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "transmitting-reservable-bandwidth")
    {
        for(auto const & c : transmitting_reservable_bandwidth)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth>();
        c->parent = this;
        transmitting_reservable_bandwidth.push_back(std::move(c));
        children[segment_path] = transmitting_reservable_bandwidth.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::get_children()
{
    if(children.find("odu-link-capabilities") == children.end())
    {
        if(odu_link_capabilities != nullptr)
        {
            children["odu-link-capabilities"] = odu_link_capabilities;
        }
    }

    for (auto const & c : receiving_reservable_bandwidth)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : shared_risk_link_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : transmitting_reservable_bandwidth)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity-attribute-flags")
    {
        affinity_attribute_flags = value;
    }
    if(value_path == "bandwidth-units")
    {
        bandwidth_units = value;
    }
    if(value_path == "bcm-id")
    {
        bcm_id = value;
    }
    if(value_path == "designated-router-igp-id")
    {
        designated_router_igp_id = value;
    }
    if(value_path == "extended-affinity-attribute-flag")
    {
        extended_affinity_attribute_flag.append(value);
    }
    if(value_path == "igp-metric")
    {
        igp_metric = value;
    }
    if(value_path == "igp-neighbor-address")
    {
        igp_neighbor_address = value;
    }
    if(value_path == "incoming-interface-id")
    {
        incoming_interface_id = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "is-designated-router")
    {
        is_designated_router = value;
    }
    if(value_path == "is-receiving-reservable-bandwidth-enabled")
    {
        is_receiving_reservable_bandwidth_enabled = value;
    }
    if(value_path == "is-transmitting-reservable-bandwidth-enabled")
    {
        is_transmitting_reservable_bandwidth_enabled = value;
    }
    if(value_path == "link-address")
    {
        link_address = value;
    }
    if(value_path == "link-id")
    {
        link_id = value;
    }
    if(value_path == "link-maximum-reservable-bandwidth")
    {
        link_maximum_reservable_bandwidth = value;
    }
    if(value_path == "neighbor-igp-id")
    {
        neighbor_igp_id = value;
    }
    if(value_path == "outgoing-interface-id")
    {
        outgoing_interface_id = value;
    }
    if(value_path == "physical-bandwidth")
    {
        physical_bandwidth = value;
    }
    if(value_path == "receiving-direction")
    {
        receiving_direction = value;
    }
    if(value_path == "reservable-pool0-bandwidth")
    {
        reservable_pool0_bandwidth = value;
    }
    if(value_path == "reservable-pool1-bandwidth")
    {
        reservable_pool1_bandwidth = value;
    }
    if(value_path == "subnet-type")
    {
        subnet_type = value;
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
    }
    if(value_path == "transmitting-direction")
    {
        transmitting_direction = value;
    }
    if(value_path == "uni-link-delay")
    {
        uni_link_delay = value;
    }
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduLinkCapabilities()
    :
    max_lsp_bandwidth{YType::uint32, "max-lsp-bandwidth"}
{
    yang_name = "odu-link-capabilities"; yang_parent_name = "flooded-link";
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::~OduLinkCapabilities()
{
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::has_data() const
{
    for (std::size_t index=0; index<odu_capability.size(); index++)
    {
        if(odu_capability[index]->has_data())
            return true;
    }
    for (auto const & leaf : max_lsp_bandwidth.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::has_operation() const
{
    for (std::size_t index=0; index<odu_capability.size(); index++)
    {
        if(odu_capability[index]->has_operation())
            return true;
    }
    for (auto const & leaf : max_lsp_bandwidth.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(max_lsp_bandwidth.operation);
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-link-capabilities";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/advertisements/advertized-areas/flooded-link/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto max_lsp_bandwidth_name_datas = max_lsp_bandwidth.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), max_lsp_bandwidth_name_datas.begin(), max_lsp_bandwidth_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "odu-capability")
    {
        for(auto const & c : odu_capability)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability>();
        c->parent = this;
        odu_capability.push_back(std::move(c));
        children[segment_path] = odu_capability.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::get_children()
{
    for (auto const & c : odu_capability)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-lsp-bandwidth")
    {
        max_lsp_bandwidth.append(value);
    }
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::OduCapability()
    :
    lcas_capable{YType::boolean, "lcas-capable"},
    signal_type{YType::enumeration, "signal-type"},
    stage1{YType::enumeration, "stage1"},
    stage2{YType::enumeration, "stage2"},
    stage3{YType::enumeration, "stage3"},
    stage4{YType::enumeration, "stage4"},
    switchable{YType::boolean, "switchable"},
    terminable{YType::boolean, "terminable"},
    tsg1p25{YType::boolean, "tsg1p25"},
    tsg2p5{YType::boolean, "tsg2p5"},
    vcat_capable{YType::boolean, "vcat-capable"}
    	,
    bandwidth_info(std::make_shared<MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo>())
{
    bandwidth_info->parent = this;
    children["bandwidth-info"] = bandwidth_info;

    yang_name = "odu-capability"; yang_parent_name = "odu-link-capabilities";
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::~OduCapability()
{
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::has_data() const
{
    return lcas_capable.is_set
	|| signal_type.is_set
	|| stage1.is_set
	|| stage2.is_set
	|| stage3.is_set
	|| stage4.is_set
	|| switchable.is_set
	|| terminable.is_set
	|| tsg1p25.is_set
	|| tsg2p5.is_set
	|| vcat_capable.is_set
	|| (bandwidth_info !=  nullptr && bandwidth_info->has_data());
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::has_operation() const
{
    return is_set(operation)
	|| is_set(lcas_capable.operation)
	|| is_set(signal_type.operation)
	|| is_set(stage1.operation)
	|| is_set(stage2.operation)
	|| is_set(stage3.operation)
	|| is_set(stage4.operation)
	|| is_set(switchable.operation)
	|| is_set(terminable.operation)
	|| is_set(tsg1p25.operation)
	|| is_set(tsg2p5.operation)
	|| is_set(vcat_capable.operation)
	|| (bandwidth_info !=  nullptr && bandwidth_info->has_operation());
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-capability";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/advertisements/advertized-areas/flooded-link/odu-link-capabilities/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lcas_capable.is_set || is_set(lcas_capable.operation)) leaf_name_data.push_back(lcas_capable.get_name_leafdata());
    if (signal_type.is_set || is_set(signal_type.operation)) leaf_name_data.push_back(signal_type.get_name_leafdata());
    if (stage1.is_set || is_set(stage1.operation)) leaf_name_data.push_back(stage1.get_name_leafdata());
    if (stage2.is_set || is_set(stage2.operation)) leaf_name_data.push_back(stage2.get_name_leafdata());
    if (stage3.is_set || is_set(stage3.operation)) leaf_name_data.push_back(stage3.get_name_leafdata());
    if (stage4.is_set || is_set(stage4.operation)) leaf_name_data.push_back(stage4.get_name_leafdata());
    if (switchable.is_set || is_set(switchable.operation)) leaf_name_data.push_back(switchable.get_name_leafdata());
    if (terminable.is_set || is_set(terminable.operation)) leaf_name_data.push_back(terminable.get_name_leafdata());
    if (tsg1p25.is_set || is_set(tsg1p25.operation)) leaf_name_data.push_back(tsg1p25.get_name_leafdata());
    if (tsg2p5.is_set || is_set(tsg2p5.operation)) leaf_name_data.push_back(tsg2p5.get_name_leafdata());
    if (vcat_capable.is_set || is_set(vcat_capable.operation)) leaf_name_data.push_back(vcat_capable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bandwidth-info")
    {
        if(bandwidth_info != nullptr)
        {
            children["bandwidth-info"] = bandwidth_info;
        }
        else
        {
            bandwidth_info = std::make_shared<MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo>();
            bandwidth_info->parent = this;
            children["bandwidth-info"] = bandwidth_info;
        }
        return children.at("bandwidth-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::get_children()
{
    if(children.find("bandwidth-info") == children.end())
    {
        if(bandwidth_info != nullptr)
        {
            children["bandwidth-info"] = bandwidth_info;
        }
    }

    return children;
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lcas-capable")
    {
        lcas_capable = value;
    }
    if(value_path == "signal-type")
    {
        signal_type = value;
    }
    if(value_path == "stage1")
    {
        stage1 = value;
    }
    if(value_path == "stage2")
    {
        stage2 = value;
    }
    if(value_path == "stage3")
    {
        stage3 = value;
    }
    if(value_path == "stage4")
    {
        stage4 = value;
    }
    if(value_path == "switchable")
    {
        switchable = value;
    }
    if(value_path == "terminable")
    {
        terminable = value;
    }
    if(value_path == "tsg1p25")
    {
        tsg1p25 = value;
    }
    if(value_path == "tsg2p5")
    {
        tsg2p5 = value;
    }
    if(value_path == "vcat-capable")
    {
        vcat_capable = value;
    }
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::BandwidthInfo()
    :
    type{YType::enumeration, "type"}
    	,
    fixed(std::make_shared<MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed>())
	,flex(std::make_shared<MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex>())
{
    fixed->parent = this;
    children["fixed"] = fixed;

    flex->parent = this;
    children["flex"] = flex;

    yang_name = "bandwidth-info"; yang_parent_name = "odu-capability";
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::~BandwidthInfo()
{
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::has_data() const
{
    return type.is_set
	|| (fixed !=  nullptr && fixed->has_data())
	|| (flex !=  nullptr && flex->has_data());
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (fixed !=  nullptr && fixed->has_operation())
	|| (flex !=  nullptr && flex->has_operation());
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-info";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/advertisements/advertized-areas/flooded-link/odu-link-capabilities/odu-capability/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fixed")
    {
        if(fixed != nullptr)
        {
            children["fixed"] = fixed;
        }
        else
        {
            fixed = std::make_shared<MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed>();
            fixed->parent = this;
            children["fixed"] = fixed;
        }
        return children.at("fixed");
    }

    if(child_yang_name == "flex")
    {
        if(flex != nullptr)
        {
            children["flex"] = flex;
        }
        else
        {
            flex = std::make_shared<MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex>();
            flex->parent = this;
            children["flex"] = flex;
        }
        return children.at("flex");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::get_children()
{
    if(children.find("fixed") == children.end())
    {
        if(fixed != nullptr)
        {
            children["fixed"] = fixed;
        }
    }

    if(children.find("flex") == children.end())
    {
        if(flex != nullptr)
        {
            children["flex"] = flex;
        }
    }

    return children;
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::Fixed()
    :
    maximum_od_us{YType::uint8, "maximum-od-us"},
    unreserved_od_us{YType::uint8, "unreserved-od-us"}
{
    yang_name = "fixed"; yang_parent_name = "bandwidth-info";
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::~Fixed()
{
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::has_data() const
{
    return maximum_od_us.is_set
	|| unreserved_od_us.is_set;
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_od_us.operation)
	|| is_set(unreserved_od_us.operation);
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fixed";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/advertisements/advertized-areas/flooded-link/odu-link-capabilities/odu-capability/bandwidth-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_od_us.is_set || is_set(maximum_od_us.operation)) leaf_name_data.push_back(maximum_od_us.get_name_leafdata());
    if (unreserved_od_us.is_set || is_set(unreserved_od_us.operation)) leaf_name_data.push_back(unreserved_od_us.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::get_children()
{
    return children;
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-od-us")
    {
        maximum_od_us = value;
    }
    if(value_path == "unreserved-od-us")
    {
        unreserved_od_us = value;
    }
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::Flex()
    :
    max_bandwidth{YType::uint32, "max-bandwidth"},
    max_lsp_bandwidth{YType::uint32, "max-lsp-bandwidth"},
    unreserved_bandwidth{YType::uint32, "unreserved-bandwidth"}
{
    yang_name = "flex"; yang_parent_name = "bandwidth-info";
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::~Flex()
{
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::has_data() const
{
    return max_bandwidth.is_set
	|| max_lsp_bandwidth.is_set
	|| unreserved_bandwidth.is_set;
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::has_operation() const
{
    return is_set(operation)
	|| is_set(max_bandwidth.operation)
	|| is_set(max_lsp_bandwidth.operation)
	|| is_set(unreserved_bandwidth.operation);
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/advertisements/advertized-areas/flooded-link/odu-link-capabilities/odu-capability/bandwidth-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_bandwidth.is_set || is_set(max_bandwidth.operation)) leaf_name_data.push_back(max_bandwidth.get_name_leafdata());
    if (max_lsp_bandwidth.is_set || is_set(max_lsp_bandwidth.operation)) leaf_name_data.push_back(max_lsp_bandwidth.get_name_leafdata());
    if (unreserved_bandwidth.is_set || is_set(unreserved_bandwidth.operation)) leaf_name_data.push_back(unreserved_bandwidth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::get_children()
{
    return children;
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-bandwidth")
    {
        max_bandwidth = value;
    }
    if(value_path == "max-lsp-bandwidth")
    {
        max_lsp_bandwidth = value;
    }
    if(value_path == "unreserved-bandwidth")
    {
        unreserved_bandwidth = value;
    }
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::SharedRiskLinkGroup()
    :
    shared_risk_group{YType::uint32, "shared-risk-group"},
    srlg_name{YType::str, "srlg-name"}
{
    yang_name = "shared-risk-link-group"; yang_parent_name = "flooded-link";
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::~SharedRiskLinkGroup()
{
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::has_data() const
{
    return shared_risk_group.is_set
	|| srlg_name.is_set;
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(shared_risk_group.operation)
	|| is_set(srlg_name.operation);
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-risk-link-group";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/advertisements/advertized-areas/flooded-link/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shared_risk_group.is_set || is_set(shared_risk_group.operation)) leaf_name_data.push_back(shared_risk_group.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.operation)) leaf_name_data.push_back(srlg_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::get_children()
{
    return children;
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "shared-risk-group")
    {
        shared_risk_group = value;
    }
    if(value_path == "srlg-name")
    {
        srlg_name = value;
    }
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::ReceivingReservableBandwidth()
    :
    pool0_bandwidth{YType::uint32, "pool0-bandwidth"},
    pool1_bandwidth{YType::uint32, "pool1-bandwidth"},
    priority{YType::uint8, "priority"}
{
    yang_name = "receiving-reservable-bandwidth"; yang_parent_name = "flooded-link";
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::~ReceivingReservableBandwidth()
{
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::has_data() const
{
    return pool0_bandwidth.is_set
	|| pool1_bandwidth.is_set
	|| priority.is_set;
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(pool0_bandwidth.operation)
	|| is_set(pool1_bandwidth.operation)
	|| is_set(priority.operation);
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receiving-reservable-bandwidth";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/advertisements/advertized-areas/flooded-link/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pool0_bandwidth.is_set || is_set(pool0_bandwidth.operation)) leaf_name_data.push_back(pool0_bandwidth.get_name_leafdata());
    if (pool1_bandwidth.is_set || is_set(pool1_bandwidth.operation)) leaf_name_data.push_back(pool1_bandwidth.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::get_children()
{
    return children;
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pool0-bandwidth")
    {
        pool0_bandwidth = value;
    }
    if(value_path == "pool1-bandwidth")
    {
        pool1_bandwidth = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::TransmittingReservableBandwidth()
    :
    pool0_bandwidth{YType::uint32, "pool0-bandwidth"},
    pool1_bandwidth{YType::uint32, "pool1-bandwidth"},
    priority{YType::uint8, "priority"}
{
    yang_name = "transmitting-reservable-bandwidth"; yang_parent_name = "flooded-link";
}

MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::~TransmittingReservableBandwidth()
{
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::has_data() const
{
    return pool0_bandwidth.is_set
	|| pool1_bandwidth.is_set
	|| priority.is_set;
}

bool MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(pool0_bandwidth.operation)
	|| is_set(pool1_bandwidth.operation)
	|| is_set(priority.operation);
}

std::string MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmitting-reservable-bandwidth";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/advertisements/advertized-areas/flooded-link/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pool0_bandwidth.is_set || is_set(pool0_bandwidth.operation)) leaf_name_data.push_back(pool0_bandwidth.get_name_leafdata());
    if (pool1_bandwidth.is_set || is_set(pool1_bandwidth.operation)) leaf_name_data.push_back(pool1_bandwidth.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::get_children()
{
    return children;
}

void MplsLcacStandby::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pool0-bandwidth")
    {
        pool0_bandwidth = value;
    }
    if(value_path == "pool1-bandwidth")
    {
        pool1_bandwidth = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
}

MplsLcacStandby::Statistics::Statistics()
    :
    statstics_links(std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks>())
	,summary(std::make_shared<MplsLcacStandby::Statistics::Summary>())
{
    statstics_links->parent = this;
    children["statstics-links"] = statstics_links;

    summary->parent = this;
    children["summary"] = summary;

    yang_name = "statistics"; yang_parent_name = "mpls-lcac-standby";
}

MplsLcacStandby::Statistics::~Statistics()
{
}

bool MplsLcacStandby::Statistics::has_data() const
{
    return (statstics_links !=  nullptr && statstics_links->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool MplsLcacStandby::Statistics::has_operation() const
{
    return is_set(operation)
	|| (statstics_links !=  nullptr && statstics_links->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string MplsLcacStandby::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "statstics-links")
    {
        if(statstics_links != nullptr)
        {
            children["statstics-links"] = statstics_links;
        }
        else
        {
            statstics_links = std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks>();
            statstics_links->parent = this;
            children["statstics-links"] = statstics_links;
        }
        return children.at("statstics-links");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
        else
        {
            summary = std::make_shared<MplsLcacStandby::Statistics::Summary>();
            summary->parent = this;
            children["summary"] = summary;
        }
        return children.at("summary");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::Statistics::get_children()
{
    if(children.find("statstics-links") == children.end())
    {
        if(statstics_links != nullptr)
        {
            children["statstics-links"] = statstics_links;
        }
    }

    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
    }

    return children;
}

void MplsLcacStandby::Statistics::set_value(const std::string & value_path, std::string value)
{
}

MplsLcacStandby::Statistics::Summary::Summary()
    :
    is_role_standby{YType::boolean, "is-role-standby"}
    	,
    path_statistics(std::make_shared<MplsLcacStandby::Statistics::Summary::PathStatistics>())
	,path_statistics32_bit(std::make_shared<MplsLcacStandby::Statistics::Summary::PathStatistics32Bit>())
	,reservation_statistics(std::make_shared<MplsLcacStandby::Statistics::Summary::ReservationStatistics>())
	,reservation_statistics32_bit(std::make_shared<MplsLcacStandby::Statistics::Summary::ReservationStatistics32Bit>())
{
    path_statistics->parent = this;
    children["path-statistics"] = path_statistics;

    path_statistics32_bit->parent = this;
    children["path-statistics32-bit"] = path_statistics32_bit;

    reservation_statistics->parent = this;
    children["reservation-statistics"] = reservation_statistics;

    reservation_statistics32_bit->parent = this;
    children["reservation-statistics32-bit"] = reservation_statistics32_bit;

    yang_name = "summary"; yang_parent_name = "statistics";
}

MplsLcacStandby::Statistics::Summary::~Summary()
{
}

bool MplsLcacStandby::Statistics::Summary::has_data() const
{
    return is_role_standby.is_set
	|| (path_statistics !=  nullptr && path_statistics->has_data())
	|| (path_statistics32_bit !=  nullptr && path_statistics32_bit->has_data())
	|| (reservation_statistics !=  nullptr && reservation_statistics->has_data())
	|| (reservation_statistics32_bit !=  nullptr && reservation_statistics32_bit->has_data());
}

bool MplsLcacStandby::Statistics::Summary::has_operation() const
{
    return is_set(operation)
	|| is_set(is_role_standby.operation)
	|| (path_statistics !=  nullptr && path_statistics->has_operation())
	|| (path_statistics32_bit !=  nullptr && path_statistics32_bit->has_operation())
	|| (reservation_statistics !=  nullptr && reservation_statistics->has_operation())
	|| (reservation_statistics32_bit !=  nullptr && reservation_statistics32_bit->has_operation());
}

std::string MplsLcacStandby::Statistics::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::Statistics::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_role_standby.is_set || is_set(is_role_standby.operation)) leaf_name_data.push_back(is_role_standby.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::Statistics::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "path-statistics")
    {
        if(path_statistics != nullptr)
        {
            children["path-statistics"] = path_statistics;
        }
        else
        {
            path_statistics = std::make_shared<MplsLcacStandby::Statistics::Summary::PathStatistics>();
            path_statistics->parent = this;
            children["path-statistics"] = path_statistics;
        }
        return children.at("path-statistics");
    }

    if(child_yang_name == "path-statistics32-bit")
    {
        if(path_statistics32_bit != nullptr)
        {
            children["path-statistics32-bit"] = path_statistics32_bit;
        }
        else
        {
            path_statistics32_bit = std::make_shared<MplsLcacStandby::Statistics::Summary::PathStatistics32Bit>();
            path_statistics32_bit->parent = this;
            children["path-statistics32-bit"] = path_statistics32_bit;
        }
        return children.at("path-statistics32-bit");
    }

    if(child_yang_name == "reservation-statistics")
    {
        if(reservation_statistics != nullptr)
        {
            children["reservation-statistics"] = reservation_statistics;
        }
        else
        {
            reservation_statistics = std::make_shared<MplsLcacStandby::Statistics::Summary::ReservationStatistics>();
            reservation_statistics->parent = this;
            children["reservation-statistics"] = reservation_statistics;
        }
        return children.at("reservation-statistics");
    }

    if(child_yang_name == "reservation-statistics32-bit")
    {
        if(reservation_statistics32_bit != nullptr)
        {
            children["reservation-statistics32-bit"] = reservation_statistics32_bit;
        }
        else
        {
            reservation_statistics32_bit = std::make_shared<MplsLcacStandby::Statistics::Summary::ReservationStatistics32Bit>();
            reservation_statistics32_bit->parent = this;
            children["reservation-statistics32-bit"] = reservation_statistics32_bit;
        }
        return children.at("reservation-statistics32-bit");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::Statistics::Summary::get_children()
{
    if(children.find("path-statistics") == children.end())
    {
        if(path_statistics != nullptr)
        {
            children["path-statistics"] = path_statistics;
        }
    }

    if(children.find("path-statistics32-bit") == children.end())
    {
        if(path_statistics32_bit != nullptr)
        {
            children["path-statistics32-bit"] = path_statistics32_bit;
        }
    }

    if(children.find("reservation-statistics") == children.end())
    {
        if(reservation_statistics != nullptr)
        {
            children["reservation-statistics"] = reservation_statistics;
        }
    }

    if(children.find("reservation-statistics32-bit") == children.end())
    {
        if(reservation_statistics32_bit != nullptr)
        {
            children["reservation-statistics32-bit"] = reservation_statistics32_bit;
        }
    }

    return children;
}

void MplsLcacStandby::Statistics::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-role-standby")
    {
        is_role_standby = value;
    }
}

MplsLcacStandby::Statistics::Summary::PathStatistics::PathStatistics()
    :
    setup_admits{YType::uint16, "setup-admits"},
    setup_errors{YType::uint16, "setup-errors"},
    setup_rejects{YType::uint16, "setup-rejects"},
    setup_requests{YType::uint16, "setup-requests"},
    tear_errors{YType::uint16, "tear-errors"},
    tear_preempts{YType::uint16, "tear-preempts"},
    tear_requests{YType::uint16, "tear-requests"}
{
    yang_name = "path-statistics"; yang_parent_name = "summary";
}

MplsLcacStandby::Statistics::Summary::PathStatistics::~PathStatistics()
{
}

bool MplsLcacStandby::Statistics::Summary::PathStatistics::has_data() const
{
    return setup_admits.is_set
	|| setup_errors.is_set
	|| setup_rejects.is_set
	|| setup_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set
	|| tear_requests.is_set;
}

bool MplsLcacStandby::Statistics::Summary::PathStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(setup_admits.operation)
	|| is_set(setup_errors.operation)
	|| is_set(setup_rejects.operation)
	|| is_set(setup_requests.operation)
	|| is_set(tear_errors.operation)
	|| is_set(tear_preempts.operation)
	|| is_set(tear_requests.operation);
}

std::string MplsLcacStandby::Statistics::Summary::PathStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-statistics";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::Statistics::Summary::PathStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/statistics/summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_admits.is_set || is_set(setup_admits.operation)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.operation)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.operation)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (setup_requests.is_set || is_set(setup_requests.operation)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.operation)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.operation)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.operation)) leaf_name_data.push_back(tear_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::Statistics::Summary::PathStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::Statistics::Summary::PathStatistics::get_children()
{
    return children;
}

void MplsLcacStandby::Statistics::Summary::PathStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "setup-admits")
    {
        setup_admits = value;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
    }
    if(value_path == "setup-requests")
    {
        setup_requests = value;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
    }
}

MplsLcacStandby::Statistics::Summary::ReservationStatistics::ReservationStatistics()
    :
    setup_admits{YType::uint16, "setup-admits"},
    setup_errors{YType::uint16, "setup-errors"},
    setup_rejects{YType::uint16, "setup-rejects"},
    setup_requests{YType::uint16, "setup-requests"},
    tear_errors{YType::uint16, "tear-errors"},
    tear_preempts{YType::uint16, "tear-preempts"},
    tear_requests{YType::uint16, "tear-requests"}
{
    yang_name = "reservation-statistics"; yang_parent_name = "summary";
}

MplsLcacStandby::Statistics::Summary::ReservationStatistics::~ReservationStatistics()
{
}

bool MplsLcacStandby::Statistics::Summary::ReservationStatistics::has_data() const
{
    return setup_admits.is_set
	|| setup_errors.is_set
	|| setup_rejects.is_set
	|| setup_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set
	|| tear_requests.is_set;
}

bool MplsLcacStandby::Statistics::Summary::ReservationStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(setup_admits.operation)
	|| is_set(setup_errors.operation)
	|| is_set(setup_rejects.operation)
	|| is_set(setup_requests.operation)
	|| is_set(tear_errors.operation)
	|| is_set(tear_preempts.operation)
	|| is_set(tear_requests.operation);
}

std::string MplsLcacStandby::Statistics::Summary::ReservationStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reservation-statistics";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::Statistics::Summary::ReservationStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/statistics/summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_admits.is_set || is_set(setup_admits.operation)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.operation)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.operation)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (setup_requests.is_set || is_set(setup_requests.operation)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.operation)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.operation)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.operation)) leaf_name_data.push_back(tear_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::Statistics::Summary::ReservationStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::Statistics::Summary::ReservationStatistics::get_children()
{
    return children;
}

void MplsLcacStandby::Statistics::Summary::ReservationStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "setup-admits")
    {
        setup_admits = value;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
    }
    if(value_path == "setup-requests")
    {
        setup_requests = value;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
    }
}

MplsLcacStandby::Statistics::Summary::PathStatistics32Bit::PathStatistics32Bit()
    :
    setup_admits{YType::uint32, "setup-admits"},
    setup_errors{YType::uint32, "setup-errors"},
    setup_rejects{YType::uint32, "setup-rejects"},
    setup_requests{YType::uint32, "setup-requests"},
    tear_errors{YType::uint32, "tear-errors"},
    tear_preempts{YType::uint32, "tear-preempts"},
    tear_requests{YType::uint32, "tear-requests"}
{
    yang_name = "path-statistics32-bit"; yang_parent_name = "summary";
}

MplsLcacStandby::Statistics::Summary::PathStatistics32Bit::~PathStatistics32Bit()
{
}

bool MplsLcacStandby::Statistics::Summary::PathStatistics32Bit::has_data() const
{
    return setup_admits.is_set
	|| setup_errors.is_set
	|| setup_rejects.is_set
	|| setup_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set
	|| tear_requests.is_set;
}

bool MplsLcacStandby::Statistics::Summary::PathStatistics32Bit::has_operation() const
{
    return is_set(operation)
	|| is_set(setup_admits.operation)
	|| is_set(setup_errors.operation)
	|| is_set(setup_rejects.operation)
	|| is_set(setup_requests.operation)
	|| is_set(tear_errors.operation)
	|| is_set(tear_preempts.operation)
	|| is_set(tear_requests.operation);
}

std::string MplsLcacStandby::Statistics::Summary::PathStatistics32Bit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-statistics32-bit";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::Statistics::Summary::PathStatistics32Bit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/statistics/summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_admits.is_set || is_set(setup_admits.operation)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.operation)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.operation)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (setup_requests.is_set || is_set(setup_requests.operation)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.operation)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.operation)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.operation)) leaf_name_data.push_back(tear_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::Statistics::Summary::PathStatistics32Bit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::Statistics::Summary::PathStatistics32Bit::get_children()
{
    return children;
}

void MplsLcacStandby::Statistics::Summary::PathStatistics32Bit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "setup-admits")
    {
        setup_admits = value;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
    }
    if(value_path == "setup-requests")
    {
        setup_requests = value;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
    }
}

MplsLcacStandby::Statistics::Summary::ReservationStatistics32Bit::ReservationStatistics32Bit()
    :
    setup_admits{YType::uint32, "setup-admits"},
    setup_errors{YType::uint32, "setup-errors"},
    setup_rejects{YType::uint32, "setup-rejects"},
    setup_requests{YType::uint32, "setup-requests"},
    tear_errors{YType::uint32, "tear-errors"},
    tear_preempts{YType::uint32, "tear-preempts"},
    tear_requests{YType::uint32, "tear-requests"}
{
    yang_name = "reservation-statistics32-bit"; yang_parent_name = "summary";
}

MplsLcacStandby::Statistics::Summary::ReservationStatistics32Bit::~ReservationStatistics32Bit()
{
}

bool MplsLcacStandby::Statistics::Summary::ReservationStatistics32Bit::has_data() const
{
    return setup_admits.is_set
	|| setup_errors.is_set
	|| setup_rejects.is_set
	|| setup_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set
	|| tear_requests.is_set;
}

bool MplsLcacStandby::Statistics::Summary::ReservationStatistics32Bit::has_operation() const
{
    return is_set(operation)
	|| is_set(setup_admits.operation)
	|| is_set(setup_errors.operation)
	|| is_set(setup_rejects.operation)
	|| is_set(setup_requests.operation)
	|| is_set(tear_errors.operation)
	|| is_set(tear_preempts.operation)
	|| is_set(tear_requests.operation);
}

std::string MplsLcacStandby::Statistics::Summary::ReservationStatistics32Bit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reservation-statistics32-bit";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::Statistics::Summary::ReservationStatistics32Bit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/statistics/summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_admits.is_set || is_set(setup_admits.operation)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.operation)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.operation)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (setup_requests.is_set || is_set(setup_requests.operation)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.operation)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.operation)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.operation)) leaf_name_data.push_back(tear_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::Statistics::Summary::ReservationStatistics32Bit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::Statistics::Summary::ReservationStatistics32Bit::get_children()
{
    return children;
}

void MplsLcacStandby::Statistics::Summary::ReservationStatistics32Bit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "setup-admits")
    {
        setup_admits = value;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
    }
    if(value_path == "setup-requests")
    {
        setup_requests = value;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
    }
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLinks()
{
    yang_name = "statstics-links"; yang_parent_name = "statistics";
}

MplsLcacStandby::Statistics::StatsticsLinks::~StatsticsLinks()
{
}

bool MplsLcacStandby::Statistics::StatsticsLinks::has_data() const
{
    for (std::size_t index=0; index<statstics_link.size(); index++)
    {
        if(statstics_link[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcacStandby::Statistics::StatsticsLinks::has_operation() const
{
    for (std::size_t index=0; index<statstics_link.size(); index++)
    {
        if(statstics_link[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLcacStandby::Statistics::StatsticsLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statstics-links";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::Statistics::StatsticsLinks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::Statistics::StatsticsLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "statstics-link")
    {
        for(auto const & c : statstics_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink>();
        c->parent = this;
        statstics_link.push_back(std::move(c));
        children[segment_path] = statstics_link.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::Statistics::StatsticsLinks::get_children()
{
    for (auto const & c : statstics_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLcacStandby::Statistics::StatsticsLinks::set_value(const std::string & value_path, std::string value)
{
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::StatsticsLink()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    link_address{YType::str, "link-address"}
    	,
    incoming_path_statistics(std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics>())
	,incoming_path_statistics32_bit(std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit>())
	,incoming_reservation_statistics(std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics>())
	,incoming_reservation_statistics32_bit(std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit>())
	,outgoing_path_statistics(std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics>())
	,outgoing_path_statistics32_bit(std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit>())
	,outgoing_reservation_statistics(std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics>())
	,outgoing_reservation_statistics32_bit(std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit>())
{
    incoming_path_statistics->parent = this;
    children["incoming-path-statistics"] = incoming_path_statistics;

    incoming_path_statistics32_bit->parent = this;
    children["incoming-path-statistics32-bit"] = incoming_path_statistics32_bit;

    incoming_reservation_statistics->parent = this;
    children["incoming-reservation-statistics"] = incoming_reservation_statistics;

    incoming_reservation_statistics32_bit->parent = this;
    children["incoming-reservation-statistics32-bit"] = incoming_reservation_statistics32_bit;

    outgoing_path_statistics->parent = this;
    children["outgoing-path-statistics"] = outgoing_path_statistics;

    outgoing_path_statistics32_bit->parent = this;
    children["outgoing-path-statistics32-bit"] = outgoing_path_statistics32_bit;

    outgoing_reservation_statistics->parent = this;
    children["outgoing-reservation-statistics"] = outgoing_reservation_statistics;

    outgoing_reservation_statistics32_bit->parent = this;
    children["outgoing-reservation-statistics32-bit"] = outgoing_reservation_statistics32_bit;

    yang_name = "statstics-link"; yang_parent_name = "statstics-links";
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::~StatsticsLink()
{
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::has_data() const
{
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| link_address.is_set
	|| (incoming_path_statistics !=  nullptr && incoming_path_statistics->has_data())
	|| (incoming_path_statistics32_bit !=  nullptr && incoming_path_statistics32_bit->has_data())
	|| (incoming_reservation_statistics !=  nullptr && incoming_reservation_statistics->has_data())
	|| (incoming_reservation_statistics32_bit !=  nullptr && incoming_reservation_statistics32_bit->has_data())
	|| (outgoing_path_statistics !=  nullptr && outgoing_path_statistics->has_data())
	|| (outgoing_path_statistics32_bit !=  nullptr && outgoing_path_statistics32_bit->has_data())
	|| (outgoing_reservation_statistics !=  nullptr && outgoing_reservation_statistics->has_data())
	|| (outgoing_reservation_statistics32_bit !=  nullptr && outgoing_reservation_statistics32_bit->has_data());
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(link_address.operation)
	|| (incoming_path_statistics !=  nullptr && incoming_path_statistics->has_operation())
	|| (incoming_path_statistics32_bit !=  nullptr && incoming_path_statistics32_bit->has_operation())
	|| (incoming_reservation_statistics !=  nullptr && incoming_reservation_statistics->has_operation())
	|| (incoming_reservation_statistics32_bit !=  nullptr && incoming_reservation_statistics32_bit->has_operation())
	|| (outgoing_path_statistics !=  nullptr && outgoing_path_statistics->has_operation())
	|| (outgoing_path_statistics32_bit !=  nullptr && outgoing_path_statistics32_bit->has_operation())
	|| (outgoing_reservation_statistics !=  nullptr && outgoing_reservation_statistics->has_operation())
	|| (outgoing_reservation_statistics32_bit !=  nullptr && outgoing_reservation_statistics32_bit->has_operation());
}

std::string MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statstics-link" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/statistics/statstics-links/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (link_address.is_set || is_set(link_address.operation)) leaf_name_data.push_back(link_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "incoming-path-statistics")
    {
        if(incoming_path_statistics != nullptr)
        {
            children["incoming-path-statistics"] = incoming_path_statistics;
        }
        else
        {
            incoming_path_statistics = std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics>();
            incoming_path_statistics->parent = this;
            children["incoming-path-statistics"] = incoming_path_statistics;
        }
        return children.at("incoming-path-statistics");
    }

    if(child_yang_name == "incoming-path-statistics32-bit")
    {
        if(incoming_path_statistics32_bit != nullptr)
        {
            children["incoming-path-statistics32-bit"] = incoming_path_statistics32_bit;
        }
        else
        {
            incoming_path_statistics32_bit = std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit>();
            incoming_path_statistics32_bit->parent = this;
            children["incoming-path-statistics32-bit"] = incoming_path_statistics32_bit;
        }
        return children.at("incoming-path-statistics32-bit");
    }

    if(child_yang_name == "incoming-reservation-statistics")
    {
        if(incoming_reservation_statistics != nullptr)
        {
            children["incoming-reservation-statistics"] = incoming_reservation_statistics;
        }
        else
        {
            incoming_reservation_statistics = std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics>();
            incoming_reservation_statistics->parent = this;
            children["incoming-reservation-statistics"] = incoming_reservation_statistics;
        }
        return children.at("incoming-reservation-statistics");
    }

    if(child_yang_name == "incoming-reservation-statistics32-bit")
    {
        if(incoming_reservation_statistics32_bit != nullptr)
        {
            children["incoming-reservation-statistics32-bit"] = incoming_reservation_statistics32_bit;
        }
        else
        {
            incoming_reservation_statistics32_bit = std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit>();
            incoming_reservation_statistics32_bit->parent = this;
            children["incoming-reservation-statistics32-bit"] = incoming_reservation_statistics32_bit;
        }
        return children.at("incoming-reservation-statistics32-bit");
    }

    if(child_yang_name == "outgoing-path-statistics")
    {
        if(outgoing_path_statistics != nullptr)
        {
            children["outgoing-path-statistics"] = outgoing_path_statistics;
        }
        else
        {
            outgoing_path_statistics = std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics>();
            outgoing_path_statistics->parent = this;
            children["outgoing-path-statistics"] = outgoing_path_statistics;
        }
        return children.at("outgoing-path-statistics");
    }

    if(child_yang_name == "outgoing-path-statistics32-bit")
    {
        if(outgoing_path_statistics32_bit != nullptr)
        {
            children["outgoing-path-statistics32-bit"] = outgoing_path_statistics32_bit;
        }
        else
        {
            outgoing_path_statistics32_bit = std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit>();
            outgoing_path_statistics32_bit->parent = this;
            children["outgoing-path-statistics32-bit"] = outgoing_path_statistics32_bit;
        }
        return children.at("outgoing-path-statistics32-bit");
    }

    if(child_yang_name == "outgoing-reservation-statistics")
    {
        if(outgoing_reservation_statistics != nullptr)
        {
            children["outgoing-reservation-statistics"] = outgoing_reservation_statistics;
        }
        else
        {
            outgoing_reservation_statistics = std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics>();
            outgoing_reservation_statistics->parent = this;
            children["outgoing-reservation-statistics"] = outgoing_reservation_statistics;
        }
        return children.at("outgoing-reservation-statistics");
    }

    if(child_yang_name == "outgoing-reservation-statistics32-bit")
    {
        if(outgoing_reservation_statistics32_bit != nullptr)
        {
            children["outgoing-reservation-statistics32-bit"] = outgoing_reservation_statistics32_bit;
        }
        else
        {
            outgoing_reservation_statistics32_bit = std::make_shared<MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit>();
            outgoing_reservation_statistics32_bit->parent = this;
            children["outgoing-reservation-statistics32-bit"] = outgoing_reservation_statistics32_bit;
        }
        return children.at("outgoing-reservation-statistics32-bit");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::get_children()
{
    if(children.find("incoming-path-statistics") == children.end())
    {
        if(incoming_path_statistics != nullptr)
        {
            children["incoming-path-statistics"] = incoming_path_statistics;
        }
    }

    if(children.find("incoming-path-statistics32-bit") == children.end())
    {
        if(incoming_path_statistics32_bit != nullptr)
        {
            children["incoming-path-statistics32-bit"] = incoming_path_statistics32_bit;
        }
    }

    if(children.find("incoming-reservation-statistics") == children.end())
    {
        if(incoming_reservation_statistics != nullptr)
        {
            children["incoming-reservation-statistics"] = incoming_reservation_statistics;
        }
    }

    if(children.find("incoming-reservation-statistics32-bit") == children.end())
    {
        if(incoming_reservation_statistics32_bit != nullptr)
        {
            children["incoming-reservation-statistics32-bit"] = incoming_reservation_statistics32_bit;
        }
    }

    if(children.find("outgoing-path-statistics") == children.end())
    {
        if(outgoing_path_statistics != nullptr)
        {
            children["outgoing-path-statistics"] = outgoing_path_statistics;
        }
    }

    if(children.find("outgoing-path-statistics32-bit") == children.end())
    {
        if(outgoing_path_statistics32_bit != nullptr)
        {
            children["outgoing-path-statistics32-bit"] = outgoing_path_statistics32_bit;
        }
    }

    if(children.find("outgoing-reservation-statistics") == children.end())
    {
        if(outgoing_reservation_statistics != nullptr)
        {
            children["outgoing-reservation-statistics"] = outgoing_reservation_statistics;
        }
    }

    if(children.find("outgoing-reservation-statistics32-bit") == children.end())
    {
        if(outgoing_reservation_statistics32_bit != nullptr)
        {
            children["outgoing-reservation-statistics32-bit"] = outgoing_reservation_statistics32_bit;
        }
    }

    return children;
}

void MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "link-address")
    {
        link_address = value;
    }
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::IncomingPathStatistics()
    :
    setup_admits{YType::uint16, "setup-admits"},
    setup_errors{YType::uint16, "setup-errors"},
    setup_rejects{YType::uint16, "setup-rejects"},
    setup_requests{YType::uint16, "setup-requests"},
    tear_errors{YType::uint16, "tear-errors"},
    tear_preempts{YType::uint16, "tear-preempts"},
    tear_requests{YType::uint16, "tear-requests"}
{
    yang_name = "incoming-path-statistics"; yang_parent_name = "statstics-link";
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::~IncomingPathStatistics()
{
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::has_data() const
{
    return setup_admits.is_set
	|| setup_errors.is_set
	|| setup_rejects.is_set
	|| setup_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set
	|| tear_requests.is_set;
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(setup_admits.operation)
	|| is_set(setup_errors.operation)
	|| is_set(setup_rejects.operation)
	|| is_set(setup_requests.operation)
	|| is_set(tear_errors.operation)
	|| is_set(tear_preempts.operation)
	|| is_set(tear_requests.operation);
}

std::string MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "incoming-path-statistics";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IncomingPathStatistics' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_admits.is_set || is_set(setup_admits.operation)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.operation)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.operation)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (setup_requests.is_set || is_set(setup_requests.operation)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.operation)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.operation)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.operation)) leaf_name_data.push_back(tear_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::get_children()
{
    return children;
}

void MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "setup-admits")
    {
        setup_admits = value;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
    }
    if(value_path == "setup-requests")
    {
        setup_requests = value;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
    }
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::IncomingReservationStatistics()
    :
    setup_admits{YType::uint16, "setup-admits"},
    setup_errors{YType::uint16, "setup-errors"},
    setup_rejects{YType::uint16, "setup-rejects"},
    setup_requests{YType::uint16, "setup-requests"},
    tear_errors{YType::uint16, "tear-errors"},
    tear_preempts{YType::uint16, "tear-preempts"},
    tear_requests{YType::uint16, "tear-requests"}
{
    yang_name = "incoming-reservation-statistics"; yang_parent_name = "statstics-link";
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::~IncomingReservationStatistics()
{
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::has_data() const
{
    return setup_admits.is_set
	|| setup_errors.is_set
	|| setup_rejects.is_set
	|| setup_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set
	|| tear_requests.is_set;
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(setup_admits.operation)
	|| is_set(setup_errors.operation)
	|| is_set(setup_rejects.operation)
	|| is_set(setup_requests.operation)
	|| is_set(tear_errors.operation)
	|| is_set(tear_preempts.operation)
	|| is_set(tear_requests.operation);
}

std::string MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "incoming-reservation-statistics";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IncomingReservationStatistics' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_admits.is_set || is_set(setup_admits.operation)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.operation)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.operation)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (setup_requests.is_set || is_set(setup_requests.operation)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.operation)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.operation)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.operation)) leaf_name_data.push_back(tear_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::get_children()
{
    return children;
}

void MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "setup-admits")
    {
        setup_admits = value;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
    }
    if(value_path == "setup-requests")
    {
        setup_requests = value;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
    }
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::OutgoingPathStatistics()
    :
    setup_admits{YType::uint16, "setup-admits"},
    setup_errors{YType::uint16, "setup-errors"},
    setup_rejects{YType::uint16, "setup-rejects"},
    setup_requests{YType::uint16, "setup-requests"},
    tear_errors{YType::uint16, "tear-errors"},
    tear_preempts{YType::uint16, "tear-preempts"},
    tear_requests{YType::uint16, "tear-requests"}
{
    yang_name = "outgoing-path-statistics"; yang_parent_name = "statstics-link";
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::~OutgoingPathStatistics()
{
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::has_data() const
{
    return setup_admits.is_set
	|| setup_errors.is_set
	|| setup_rejects.is_set
	|| setup_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set
	|| tear_requests.is_set;
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(setup_admits.operation)
	|| is_set(setup_errors.operation)
	|| is_set(setup_rejects.operation)
	|| is_set(setup_requests.operation)
	|| is_set(tear_errors.operation)
	|| is_set(tear_preempts.operation)
	|| is_set(tear_requests.operation);
}

std::string MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-path-statistics";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutgoingPathStatistics' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_admits.is_set || is_set(setup_admits.operation)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.operation)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.operation)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (setup_requests.is_set || is_set(setup_requests.operation)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.operation)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.operation)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.operation)) leaf_name_data.push_back(tear_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::get_children()
{
    return children;
}

void MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "setup-admits")
    {
        setup_admits = value;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
    }
    if(value_path == "setup-requests")
    {
        setup_requests = value;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
    }
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::OutgoingReservationStatistics()
    :
    setup_admits{YType::uint16, "setup-admits"},
    setup_errors{YType::uint16, "setup-errors"},
    setup_rejects{YType::uint16, "setup-rejects"},
    setup_requests{YType::uint16, "setup-requests"},
    tear_errors{YType::uint16, "tear-errors"},
    tear_preempts{YType::uint16, "tear-preempts"},
    tear_requests{YType::uint16, "tear-requests"}
{
    yang_name = "outgoing-reservation-statistics"; yang_parent_name = "statstics-link";
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::~OutgoingReservationStatistics()
{
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::has_data() const
{
    return setup_admits.is_set
	|| setup_errors.is_set
	|| setup_rejects.is_set
	|| setup_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set
	|| tear_requests.is_set;
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(setup_admits.operation)
	|| is_set(setup_errors.operation)
	|| is_set(setup_rejects.operation)
	|| is_set(setup_requests.operation)
	|| is_set(tear_errors.operation)
	|| is_set(tear_preempts.operation)
	|| is_set(tear_requests.operation);
}

std::string MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-reservation-statistics";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutgoingReservationStatistics' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_admits.is_set || is_set(setup_admits.operation)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.operation)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.operation)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (setup_requests.is_set || is_set(setup_requests.operation)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.operation)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.operation)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.operation)) leaf_name_data.push_back(tear_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::get_children()
{
    return children;
}

void MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "setup-admits")
    {
        setup_admits = value;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
    }
    if(value_path == "setup-requests")
    {
        setup_requests = value;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
    }
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::IncomingPathStatistics32Bit()
    :
    setup_admits{YType::uint32, "setup-admits"},
    setup_errors{YType::uint32, "setup-errors"},
    setup_rejects{YType::uint32, "setup-rejects"},
    setup_requests{YType::uint32, "setup-requests"},
    tear_errors{YType::uint32, "tear-errors"},
    tear_preempts{YType::uint32, "tear-preempts"},
    tear_requests{YType::uint32, "tear-requests"}
{
    yang_name = "incoming-path-statistics32-bit"; yang_parent_name = "statstics-link";
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::~IncomingPathStatistics32Bit()
{
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::has_data() const
{
    return setup_admits.is_set
	|| setup_errors.is_set
	|| setup_rejects.is_set
	|| setup_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set
	|| tear_requests.is_set;
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::has_operation() const
{
    return is_set(operation)
	|| is_set(setup_admits.operation)
	|| is_set(setup_errors.operation)
	|| is_set(setup_rejects.operation)
	|| is_set(setup_requests.operation)
	|| is_set(tear_errors.operation)
	|| is_set(tear_preempts.operation)
	|| is_set(tear_requests.operation);
}

std::string MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "incoming-path-statistics32-bit";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IncomingPathStatistics32Bit' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_admits.is_set || is_set(setup_admits.operation)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.operation)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.operation)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (setup_requests.is_set || is_set(setup_requests.operation)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.operation)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.operation)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.operation)) leaf_name_data.push_back(tear_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::get_children()
{
    return children;
}

void MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "setup-admits")
    {
        setup_admits = value;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
    }
    if(value_path == "setup-requests")
    {
        setup_requests = value;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
    }
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::IncomingReservationStatistics32Bit()
    :
    setup_admits{YType::uint32, "setup-admits"},
    setup_errors{YType::uint32, "setup-errors"},
    setup_rejects{YType::uint32, "setup-rejects"},
    setup_requests{YType::uint32, "setup-requests"},
    tear_errors{YType::uint32, "tear-errors"},
    tear_preempts{YType::uint32, "tear-preempts"},
    tear_requests{YType::uint32, "tear-requests"}
{
    yang_name = "incoming-reservation-statistics32-bit"; yang_parent_name = "statstics-link";
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::~IncomingReservationStatistics32Bit()
{
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::has_data() const
{
    return setup_admits.is_set
	|| setup_errors.is_set
	|| setup_rejects.is_set
	|| setup_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set
	|| tear_requests.is_set;
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::has_operation() const
{
    return is_set(operation)
	|| is_set(setup_admits.operation)
	|| is_set(setup_errors.operation)
	|| is_set(setup_rejects.operation)
	|| is_set(setup_requests.operation)
	|| is_set(tear_errors.operation)
	|| is_set(tear_preempts.operation)
	|| is_set(tear_requests.operation);
}

std::string MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "incoming-reservation-statistics32-bit";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IncomingReservationStatistics32Bit' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_admits.is_set || is_set(setup_admits.operation)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.operation)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.operation)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (setup_requests.is_set || is_set(setup_requests.operation)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.operation)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.operation)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.operation)) leaf_name_data.push_back(tear_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::get_children()
{
    return children;
}

void MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "setup-admits")
    {
        setup_admits = value;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
    }
    if(value_path == "setup-requests")
    {
        setup_requests = value;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
    }
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::OutgoingPathStatistics32Bit()
    :
    setup_admits{YType::uint32, "setup-admits"},
    setup_errors{YType::uint32, "setup-errors"},
    setup_rejects{YType::uint32, "setup-rejects"},
    setup_requests{YType::uint32, "setup-requests"},
    tear_errors{YType::uint32, "tear-errors"},
    tear_preempts{YType::uint32, "tear-preempts"},
    tear_requests{YType::uint32, "tear-requests"}
{
    yang_name = "outgoing-path-statistics32-bit"; yang_parent_name = "statstics-link";
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::~OutgoingPathStatistics32Bit()
{
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::has_data() const
{
    return setup_admits.is_set
	|| setup_errors.is_set
	|| setup_rejects.is_set
	|| setup_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set
	|| tear_requests.is_set;
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::has_operation() const
{
    return is_set(operation)
	|| is_set(setup_admits.operation)
	|| is_set(setup_errors.operation)
	|| is_set(setup_rejects.operation)
	|| is_set(setup_requests.operation)
	|| is_set(tear_errors.operation)
	|| is_set(tear_preempts.operation)
	|| is_set(tear_requests.operation);
}

std::string MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-path-statistics32-bit";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutgoingPathStatistics32Bit' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_admits.is_set || is_set(setup_admits.operation)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.operation)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.operation)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (setup_requests.is_set || is_set(setup_requests.operation)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.operation)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.operation)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.operation)) leaf_name_data.push_back(tear_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::get_children()
{
    return children;
}

void MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "setup-admits")
    {
        setup_admits = value;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
    }
    if(value_path == "setup-requests")
    {
        setup_requests = value;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
    }
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::OutgoingReservationStatistics32Bit()
    :
    setup_admits{YType::uint32, "setup-admits"},
    setup_errors{YType::uint32, "setup-errors"},
    setup_rejects{YType::uint32, "setup-rejects"},
    setup_requests{YType::uint32, "setup-requests"},
    tear_errors{YType::uint32, "tear-errors"},
    tear_preempts{YType::uint32, "tear-preempts"},
    tear_requests{YType::uint32, "tear-requests"}
{
    yang_name = "outgoing-reservation-statistics32-bit"; yang_parent_name = "statstics-link";
}

MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::~OutgoingReservationStatistics32Bit()
{
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::has_data() const
{
    return setup_admits.is_set
	|| setup_errors.is_set
	|| setup_rejects.is_set
	|| setup_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set
	|| tear_requests.is_set;
}

bool MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::has_operation() const
{
    return is_set(operation)
	|| is_set(setup_admits.operation)
	|| is_set(setup_errors.operation)
	|| is_set(setup_rejects.operation)
	|| is_set(setup_requests.operation)
	|| is_set(tear_errors.operation)
	|| is_set(tear_preempts.operation)
	|| is_set(tear_requests.operation);
}

std::string MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-reservation-statistics32-bit";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutgoingReservationStatistics32Bit' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_admits.is_set || is_set(setup_admits.operation)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.operation)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.operation)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (setup_requests.is_set || is_set(setup_requests.operation)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.operation)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.operation)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.operation)) leaf_name_data.push_back(tear_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::get_children()
{
    return children;
}

void MplsLcacStandby::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "setup-admits")
    {
        setup_admits = value;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
    }
    if(value_path == "setup-requests")
    {
        setup_requests = value;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
    }
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocation()
    :
    bandwidth_allocation_links(std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks>())
	,global(std::make_shared<MplsLcacStandby::BandwidthAllocation::Global>())
{
    bandwidth_allocation_links->parent = this;
    children["bandwidth-allocation-links"] = bandwidth_allocation_links;

    global->parent = this;
    children["global"] = global;

    yang_name = "bandwidth-allocation"; yang_parent_name = "mpls-lcac-standby";
}

MplsLcacStandby::BandwidthAllocation::~BandwidthAllocation()
{
}

bool MplsLcacStandby::BandwidthAllocation::has_data() const
{
    return (bandwidth_allocation_links !=  nullptr && bandwidth_allocation_links->has_data())
	|| (global !=  nullptr && global->has_data());
}

bool MplsLcacStandby::BandwidthAllocation::has_operation() const
{
    return is_set(operation)
	|| (bandwidth_allocation_links !=  nullptr && bandwidth_allocation_links->has_operation())
	|| (global !=  nullptr && global->has_operation());
}

std::string MplsLcacStandby::BandwidthAllocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-allocation";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::BandwidthAllocation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAllocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bandwidth-allocation-links")
    {
        if(bandwidth_allocation_links != nullptr)
        {
            children["bandwidth-allocation-links"] = bandwidth_allocation_links;
        }
        else
        {
            bandwidth_allocation_links = std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks>();
            bandwidth_allocation_links->parent = this;
            children["bandwidth-allocation-links"] = bandwidth_allocation_links;
        }
        return children.at("bandwidth-allocation-links");
    }

    if(child_yang_name == "global")
    {
        if(global != nullptr)
        {
            children["global"] = global;
        }
        else
        {
            global = std::make_shared<MplsLcacStandby::BandwidthAllocation::Global>();
            global->parent = this;
            children["global"] = global;
        }
        return children.at("global");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::BandwidthAllocation::get_children()
{
    if(children.find("bandwidth-allocation-links") == children.end())
    {
        if(bandwidth_allocation_links != nullptr)
        {
            children["bandwidth-allocation-links"] = bandwidth_allocation_links;
        }
    }

    if(children.find("global") == children.end())
    {
        if(global != nullptr)
        {
            children["global"] = global;
        }
    }

    return children;
}

void MplsLcacStandby::BandwidthAllocation::set_value(const std::string & value_path, std::string value)
{
}

MplsLcacStandby::BandwidthAllocation::Global::Global()
    :
    bandwidth_hold_time{YType::uint16, "bandwidth-hold-time"},
    is_role_standby{YType::boolean, "is-role-standby"},
    links{YType::uint16, "links"}
{
    yang_name = "global"; yang_parent_name = "bandwidth-allocation";
}

MplsLcacStandby::BandwidthAllocation::Global::~Global()
{
}

bool MplsLcacStandby::BandwidthAllocation::Global::has_data() const
{
    return bandwidth_hold_time.is_set
	|| is_role_standby.is_set
	|| links.is_set;
}

bool MplsLcacStandby::BandwidthAllocation::Global::has_operation() const
{
    return is_set(operation)
	|| is_set(bandwidth_hold_time.operation)
	|| is_set(is_role_standby.operation)
	|| is_set(links.operation);
}

std::string MplsLcacStandby::BandwidthAllocation::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::BandwidthAllocation::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/bandwidth-allocation/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_hold_time.is_set || is_set(bandwidth_hold_time.operation)) leaf_name_data.push_back(bandwidth_hold_time.get_name_leafdata());
    if (is_role_standby.is_set || is_set(is_role_standby.operation)) leaf_name_data.push_back(is_role_standby.get_name_leafdata());
    if (links.is_set || is_set(links.operation)) leaf_name_data.push_back(links.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAllocation::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::BandwidthAllocation::Global::get_children()
{
    return children;
}

void MplsLcacStandby::BandwidthAllocation::Global::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth-hold-time")
    {
        bandwidth_hold_time = value;
    }
    if(value_path == "is-role-standby")
    {
        is_role_standby = value;
    }
    if(value_path == "links")
    {
        links = value;
    }
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLinks()
{
    yang_name = "bandwidth-allocation-links"; yang_parent_name = "bandwidth-allocation";
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::~BandwidthAllocationLinks()
{
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::has_data() const
{
    for (std::size_t index=0; index<bandwidth_allocation_link.size(); index++)
    {
        if(bandwidth_allocation_link[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::has_operation() const
{
    for (std::size_t index=0; index<bandwidth_allocation_link.size(); index++)
    {
        if(bandwidth_allocation_link[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-allocation-links";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/bandwidth-allocation/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bandwidth-allocation-link")
    {
        for(auto const & c : bandwidth_allocation_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink>();
        c->parent = this;
        bandwidth_allocation_link.push_back(std::move(c));
        children[segment_path] = bandwidth_allocation_link.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::get_children()
{
    for (auto const & c : bandwidth_allocation_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::set_value(const std::string & value_path, std::string value)
{
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::BandwidthAllocationLink()
    :
    interface_name{YType::str, "interface-name"},
    bandwidth_descriptors{YType::uint16, "bandwidth-descriptors"},
    bandwidth_pool{YType::enumeration, "bandwidth-pool"},
    flooding_down_threshold{YType::uint8, "flooding-down-threshold"},
    flooding_down_thresholds_are_default{YType::boolean, "flooding-down-thresholds-are-default"},
    flooding_down_thresholds_are_global{YType::boolean, "flooding-down-thresholds-are-global"},
    flooding_up_threshold{YType::uint8, "flooding-up-threshold"},
    flooding_up_thresholds_are_default{YType::boolean, "flooding-up-thresholds-are-default"},
    flooding_up_thresholds_are_global{YType::boolean, "flooding-up-thresholds-are-global"},
    total_bandwidth_descriptors{YType::uint16, "total-bandwidth-descriptors"}
    	,
    downstream_bandwidth(std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth>())
	,link_common(std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon>())
	,upstream_bandwidth(std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth>())
{
    downstream_bandwidth->parent = this;
    children["downstream-bandwidth"] = downstream_bandwidth;

    link_common->parent = this;
    children["link-common"] = link_common;

    upstream_bandwidth->parent = this;
    children["upstream-bandwidth"] = upstream_bandwidth;

    yang_name = "bandwidth-allocation-link"; yang_parent_name = "bandwidth-allocation-links";
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::~BandwidthAllocationLink()
{
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::has_data() const
{
    for (auto const & leaf : flooding_down_threshold.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : flooding_up_threshold.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return interface_name.is_set
	|| bandwidth_descriptors.is_set
	|| bandwidth_pool.is_set
	|| flooding_down_thresholds_are_default.is_set
	|| flooding_down_thresholds_are_global.is_set
	|| flooding_up_thresholds_are_default.is_set
	|| flooding_up_thresholds_are_global.is_set
	|| total_bandwidth_descriptors.is_set
	|| (downstream_bandwidth !=  nullptr && downstream_bandwidth->has_data())
	|| (link_common !=  nullptr && link_common->has_data())
	|| (upstream_bandwidth !=  nullptr && upstream_bandwidth->has_data());
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::has_operation() const
{
    for (auto const & leaf : flooding_down_threshold.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : flooding_up_threshold.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(bandwidth_descriptors.operation)
	|| is_set(bandwidth_pool.operation)
	|| is_set(flooding_down_threshold.operation)
	|| is_set(flooding_down_thresholds_are_default.operation)
	|| is_set(flooding_down_thresholds_are_global.operation)
	|| is_set(flooding_up_threshold.operation)
	|| is_set(flooding_up_thresholds_are_default.operation)
	|| is_set(flooding_up_thresholds_are_global.operation)
	|| is_set(total_bandwidth_descriptors.operation)
	|| (downstream_bandwidth !=  nullptr && downstream_bandwidth->has_operation())
	|| (link_common !=  nullptr && link_common->has_operation())
	|| (upstream_bandwidth !=  nullptr && upstream_bandwidth->has_operation());
}

std::string MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-allocation-link" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/bandwidth-allocation/bandwidth-allocation-links/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bandwidth_descriptors.is_set || is_set(bandwidth_descriptors.operation)) leaf_name_data.push_back(bandwidth_descriptors.get_name_leafdata());
    if (bandwidth_pool.is_set || is_set(bandwidth_pool.operation)) leaf_name_data.push_back(bandwidth_pool.get_name_leafdata());
    if (flooding_down_thresholds_are_default.is_set || is_set(flooding_down_thresholds_are_default.operation)) leaf_name_data.push_back(flooding_down_thresholds_are_default.get_name_leafdata());
    if (flooding_down_thresholds_are_global.is_set || is_set(flooding_down_thresholds_are_global.operation)) leaf_name_data.push_back(flooding_down_thresholds_are_global.get_name_leafdata());
    if (flooding_up_thresholds_are_default.is_set || is_set(flooding_up_thresholds_are_default.operation)) leaf_name_data.push_back(flooding_up_thresholds_are_default.get_name_leafdata());
    if (flooding_up_thresholds_are_global.is_set || is_set(flooding_up_thresholds_are_global.operation)) leaf_name_data.push_back(flooding_up_thresholds_are_global.get_name_leafdata());
    if (total_bandwidth_descriptors.is_set || is_set(total_bandwidth_descriptors.operation)) leaf_name_data.push_back(total_bandwidth_descriptors.get_name_leafdata());

    auto flooding_down_threshold_name_datas = flooding_down_threshold.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flooding_down_threshold_name_datas.begin(), flooding_down_threshold_name_datas.end());
    auto flooding_up_threshold_name_datas = flooding_up_threshold.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flooding_up_threshold_name_datas.begin(), flooding_up_threshold_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "downstream-bandwidth")
    {
        if(downstream_bandwidth != nullptr)
        {
            children["downstream-bandwidth"] = downstream_bandwidth;
        }
        else
        {
            downstream_bandwidth = std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth>();
            downstream_bandwidth->parent = this;
            children["downstream-bandwidth"] = downstream_bandwidth;
        }
        return children.at("downstream-bandwidth");
    }

    if(child_yang_name == "link-common")
    {
        if(link_common != nullptr)
        {
            children["link-common"] = link_common;
        }
        else
        {
            link_common = std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon>();
            link_common->parent = this;
            children["link-common"] = link_common;
        }
        return children.at("link-common");
    }

    if(child_yang_name == "upstream-bandwidth")
    {
        if(upstream_bandwidth != nullptr)
        {
            children["upstream-bandwidth"] = upstream_bandwidth;
        }
        else
        {
            upstream_bandwidth = std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth>();
            upstream_bandwidth->parent = this;
            children["upstream-bandwidth"] = upstream_bandwidth;
        }
        return children.at("upstream-bandwidth");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::get_children()
{
    if(children.find("downstream-bandwidth") == children.end())
    {
        if(downstream_bandwidth != nullptr)
        {
            children["downstream-bandwidth"] = downstream_bandwidth;
        }
    }

    if(children.find("link-common") == children.end())
    {
        if(link_common != nullptr)
        {
            children["link-common"] = link_common;
        }
    }

    if(children.find("upstream-bandwidth") == children.end())
    {
        if(upstream_bandwidth != nullptr)
        {
            children["upstream-bandwidth"] = upstream_bandwidth;
        }
    }

    return children;
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "bandwidth-descriptors")
    {
        bandwidth_descriptors = value;
    }
    if(value_path == "bandwidth-pool")
    {
        bandwidth_pool = value;
    }
    if(value_path == "flooding-down-threshold")
    {
        flooding_down_threshold.append(value);
    }
    if(value_path == "flooding-down-thresholds-are-default")
    {
        flooding_down_thresholds_are_default = value;
    }
    if(value_path == "flooding-down-thresholds-are-global")
    {
        flooding_down_thresholds_are_global = value;
    }
    if(value_path == "flooding-up-threshold")
    {
        flooding_up_threshold.append(value);
    }
    if(value_path == "flooding-up-thresholds-are-default")
    {
        flooding_up_thresholds_are_default = value;
    }
    if(value_path == "flooding-up-thresholds-are-global")
    {
        flooding_up_thresholds_are_global = value;
    }
    if(value_path == "total-bandwidth-descriptors")
    {
        total_bandwidth_descriptors = value;
    }
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkCommon()
    :
    bandwidth_units{YType::enumeration, "bandwidth-units"},
    bcm_id{YType::uint16, "bcm-id"},
    capability{YType::uint32, "capability"},
    has_protection{YType::boolean, "has-protection"},
    igp_neighbors{YType::uint16, "igp-neighbors"},
    inbound_admission_method{YType::enumeration, "inbound-admission-method"},
    incoming_reservable_bandwidth_percentage{YType::uint8, "incoming-reservable-bandwidth-percentage"},
    incoming_reservable_pool0_bandwidth_percentage{YType::uint8, "incoming-reservable-pool0-bandwidth-percentage"},
    incoming_reservable_pool1_bandwidth_percentage{YType::uint8, "incoming-reservable-pool1-bandwidth-percentage"},
    is_resource_provider_installed{YType::boolean, "is-resource-provider-installed"},
    is_unnumbered{YType::boolean, "is-unnumbered"},
    last_flooded_effective_maximum_reservable_bandwidth{YType::uint64, "last-flooded-effective-maximum-reservable-bandwidth"},
    link_address{YType::str, "link-address"},
    link_id{YType::str, "link-id"},
    maximum_reservable_bandwidth{YType::uint64, "maximum-reservable-bandwidth"},
    maximum_reservable_pool0_bandwidth{YType::uint64, "maximum-reservable-pool0-bandwidth"},
    maximum_reservable_pool1_bandwidth{YType::uint64, "maximum-reservable-pool1-bandwidth"},
    outbound_admission_method{YType::enumeration, "outbound-admission-method"},
    outgoing_reservable_bandwidth_percentage{YType::uint8, "outgoing-reservable-bandwidth-percentage"},
    outgoing_reservable_pool0_bandwidth_percentage{YType::uint8, "outgoing-reservable-pool0-bandwidth-percentage"},
    outgoing_reservable_pool1_bandwidth_percentage{YType::uint8, "outgoing-reservable-pool1-bandwidth-percentage"},
    physical_bandwidth{YType::uint64, "physical-bandwidth"},
    resource_provider{YType::enumeration, "resource-provider"},
    working_priority{YType::uint32, "working-priority"}
    	,
    link_flags(std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags>())
{
    link_flags->parent = this;
    children["link-flags"] = link_flags;

    yang_name = "link-common"; yang_parent_name = "bandwidth-allocation-link";
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::~LinkCommon()
{
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::has_data() const
{
    for (std::size_t index=0; index<flooded_areas.size(); index++)
    {
        if(flooded_areas[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<interface_switching_capability_descriptor.size(); index++)
    {
        if(interface_switching_capability_descriptor[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_data())
            return true;
    }
    return bandwidth_units.is_set
	|| bcm_id.is_set
	|| capability.is_set
	|| has_protection.is_set
	|| igp_neighbors.is_set
	|| inbound_admission_method.is_set
	|| incoming_reservable_bandwidth_percentage.is_set
	|| incoming_reservable_pool0_bandwidth_percentage.is_set
	|| incoming_reservable_pool1_bandwidth_percentage.is_set
	|| is_resource_provider_installed.is_set
	|| is_unnumbered.is_set
	|| last_flooded_effective_maximum_reservable_bandwidth.is_set
	|| link_address.is_set
	|| link_id.is_set
	|| maximum_reservable_bandwidth.is_set
	|| maximum_reservable_pool0_bandwidth.is_set
	|| maximum_reservable_pool1_bandwidth.is_set
	|| outbound_admission_method.is_set
	|| outgoing_reservable_bandwidth_percentage.is_set
	|| outgoing_reservable_pool0_bandwidth_percentage.is_set
	|| outgoing_reservable_pool1_bandwidth_percentage.is_set
	|| physical_bandwidth.is_set
	|| resource_provider.is_set
	|| working_priority.is_set
	|| (link_flags !=  nullptr && link_flags->has_data());
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::has_operation() const
{
    for (std::size_t index=0; index<flooded_areas.size(); index++)
    {
        if(flooded_areas[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<interface_switching_capability_descriptor.size(); index++)
    {
        if(interface_switching_capability_descriptor[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(bandwidth_units.operation)
	|| is_set(bcm_id.operation)
	|| is_set(capability.operation)
	|| is_set(has_protection.operation)
	|| is_set(igp_neighbors.operation)
	|| is_set(inbound_admission_method.operation)
	|| is_set(incoming_reservable_bandwidth_percentage.operation)
	|| is_set(incoming_reservable_pool0_bandwidth_percentage.operation)
	|| is_set(incoming_reservable_pool1_bandwidth_percentage.operation)
	|| is_set(is_resource_provider_installed.operation)
	|| is_set(is_unnumbered.operation)
	|| is_set(last_flooded_effective_maximum_reservable_bandwidth.operation)
	|| is_set(link_address.operation)
	|| is_set(link_id.operation)
	|| is_set(maximum_reservable_bandwidth.operation)
	|| is_set(maximum_reservable_pool0_bandwidth.operation)
	|| is_set(maximum_reservable_pool1_bandwidth.operation)
	|| is_set(outbound_admission_method.operation)
	|| is_set(outgoing_reservable_bandwidth_percentage.operation)
	|| is_set(outgoing_reservable_pool0_bandwidth_percentage.operation)
	|| is_set(outgoing_reservable_pool1_bandwidth_percentage.operation)
	|| is_set(physical_bandwidth.operation)
	|| is_set(resource_provider.operation)
	|| is_set(working_priority.operation)
	|| (link_flags !=  nullptr && link_flags->has_operation());
}

std::string MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-common";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkCommon' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_units.is_set || is_set(bandwidth_units.operation)) leaf_name_data.push_back(bandwidth_units.get_name_leafdata());
    if (bcm_id.is_set || is_set(bcm_id.operation)) leaf_name_data.push_back(bcm_id.get_name_leafdata());
    if (capability.is_set || is_set(capability.operation)) leaf_name_data.push_back(capability.get_name_leafdata());
    if (has_protection.is_set || is_set(has_protection.operation)) leaf_name_data.push_back(has_protection.get_name_leafdata());
    if (igp_neighbors.is_set || is_set(igp_neighbors.operation)) leaf_name_data.push_back(igp_neighbors.get_name_leafdata());
    if (inbound_admission_method.is_set || is_set(inbound_admission_method.operation)) leaf_name_data.push_back(inbound_admission_method.get_name_leafdata());
    if (incoming_reservable_bandwidth_percentage.is_set || is_set(incoming_reservable_bandwidth_percentage.operation)) leaf_name_data.push_back(incoming_reservable_bandwidth_percentage.get_name_leafdata());
    if (incoming_reservable_pool0_bandwidth_percentage.is_set || is_set(incoming_reservable_pool0_bandwidth_percentage.operation)) leaf_name_data.push_back(incoming_reservable_pool0_bandwidth_percentage.get_name_leafdata());
    if (incoming_reservable_pool1_bandwidth_percentage.is_set || is_set(incoming_reservable_pool1_bandwidth_percentage.operation)) leaf_name_data.push_back(incoming_reservable_pool1_bandwidth_percentage.get_name_leafdata());
    if (is_resource_provider_installed.is_set || is_set(is_resource_provider_installed.operation)) leaf_name_data.push_back(is_resource_provider_installed.get_name_leafdata());
    if (is_unnumbered.is_set || is_set(is_unnumbered.operation)) leaf_name_data.push_back(is_unnumbered.get_name_leafdata());
    if (last_flooded_effective_maximum_reservable_bandwidth.is_set || is_set(last_flooded_effective_maximum_reservable_bandwidth.operation)) leaf_name_data.push_back(last_flooded_effective_maximum_reservable_bandwidth.get_name_leafdata());
    if (link_address.is_set || is_set(link_address.operation)) leaf_name_data.push_back(link_address.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.operation)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (maximum_reservable_bandwidth.is_set || is_set(maximum_reservable_bandwidth.operation)) leaf_name_data.push_back(maximum_reservable_bandwidth.get_name_leafdata());
    if (maximum_reservable_pool0_bandwidth.is_set || is_set(maximum_reservable_pool0_bandwidth.operation)) leaf_name_data.push_back(maximum_reservable_pool0_bandwidth.get_name_leafdata());
    if (maximum_reservable_pool1_bandwidth.is_set || is_set(maximum_reservable_pool1_bandwidth.operation)) leaf_name_data.push_back(maximum_reservable_pool1_bandwidth.get_name_leafdata());
    if (outbound_admission_method.is_set || is_set(outbound_admission_method.operation)) leaf_name_data.push_back(outbound_admission_method.get_name_leafdata());
    if (outgoing_reservable_bandwidth_percentage.is_set || is_set(outgoing_reservable_bandwidth_percentage.operation)) leaf_name_data.push_back(outgoing_reservable_bandwidth_percentage.get_name_leafdata());
    if (outgoing_reservable_pool0_bandwidth_percentage.is_set || is_set(outgoing_reservable_pool0_bandwidth_percentage.operation)) leaf_name_data.push_back(outgoing_reservable_pool0_bandwidth_percentage.get_name_leafdata());
    if (outgoing_reservable_pool1_bandwidth_percentage.is_set || is_set(outgoing_reservable_pool1_bandwidth_percentage.operation)) leaf_name_data.push_back(outgoing_reservable_pool1_bandwidth_percentage.get_name_leafdata());
    if (physical_bandwidth.is_set || is_set(physical_bandwidth.operation)) leaf_name_data.push_back(physical_bandwidth.get_name_leafdata());
    if (resource_provider.is_set || is_set(resource_provider.operation)) leaf_name_data.push_back(resource_provider.get_name_leafdata());
    if (working_priority.is_set || is_set(working_priority.operation)) leaf_name_data.push_back(working_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flooded-areas")
    {
        for(auto const & c : flooded_areas)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas>();
        c->parent = this;
        flooded_areas.push_back(std::move(c));
        children[segment_path] = flooded_areas.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-switching-capability-descriptor")
    {
        for(auto const & c : interface_switching_capability_descriptor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor>();
        c->parent = this;
        interface_switching_capability_descriptor.push_back(std::move(c));
        children[segment_path] = interface_switching_capability_descriptor.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "link-flags")
    {
        if(link_flags != nullptr)
        {
            children["link-flags"] = link_flags;
        }
        else
        {
            link_flags = std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags>();
            link_flags->parent = this;
            children["link-flags"] = link_flags;
        }
        return children.at("link-flags");
    }

    if(child_yang_name == "shared-risk-link-group")
    {
        for(auto const & c : shared_risk_link_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup>();
        c->parent = this;
        shared_risk_link_group.push_back(std::move(c));
        children[segment_path] = shared_risk_link_group.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::get_children()
{
    for (auto const & c : flooded_areas)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : interface_switching_capability_descriptor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("link-flags") == children.end())
    {
        if(link_flags != nullptr)
        {
            children["link-flags"] = link_flags;
        }
    }

    for (auto const & c : shared_risk_link_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth-units")
    {
        bandwidth_units = value;
    }
    if(value_path == "bcm-id")
    {
        bcm_id = value;
    }
    if(value_path == "capability")
    {
        capability = value;
    }
    if(value_path == "has-protection")
    {
        has_protection = value;
    }
    if(value_path == "igp-neighbors")
    {
        igp_neighbors = value;
    }
    if(value_path == "inbound-admission-method")
    {
        inbound_admission_method = value;
    }
    if(value_path == "incoming-reservable-bandwidth-percentage")
    {
        incoming_reservable_bandwidth_percentage = value;
    }
    if(value_path == "incoming-reservable-pool0-bandwidth-percentage")
    {
        incoming_reservable_pool0_bandwidth_percentage = value;
    }
    if(value_path == "incoming-reservable-pool1-bandwidth-percentage")
    {
        incoming_reservable_pool1_bandwidth_percentage = value;
    }
    if(value_path == "is-resource-provider-installed")
    {
        is_resource_provider_installed = value;
    }
    if(value_path == "is-unnumbered")
    {
        is_unnumbered = value;
    }
    if(value_path == "last-flooded-effective-maximum-reservable-bandwidth")
    {
        last_flooded_effective_maximum_reservable_bandwidth = value;
    }
    if(value_path == "link-address")
    {
        link_address = value;
    }
    if(value_path == "link-id")
    {
        link_id = value;
    }
    if(value_path == "maximum-reservable-bandwidth")
    {
        maximum_reservable_bandwidth = value;
    }
    if(value_path == "maximum-reservable-pool0-bandwidth")
    {
        maximum_reservable_pool0_bandwidth = value;
    }
    if(value_path == "maximum-reservable-pool1-bandwidth")
    {
        maximum_reservable_pool1_bandwidth = value;
    }
    if(value_path == "outbound-admission-method")
    {
        outbound_admission_method = value;
    }
    if(value_path == "outgoing-reservable-bandwidth-percentage")
    {
        outgoing_reservable_bandwidth_percentage = value;
    }
    if(value_path == "outgoing-reservable-pool0-bandwidth-percentage")
    {
        outgoing_reservable_pool0_bandwidth_percentage = value;
    }
    if(value_path == "outgoing-reservable-pool1-bandwidth-percentage")
    {
        outgoing_reservable_pool1_bandwidth_percentage = value;
    }
    if(value_path == "physical-bandwidth")
    {
        physical_bandwidth = value;
    }
    if(value_path == "resource-provider")
    {
        resource_provider = value;
    }
    if(value_path == "working-priority")
    {
        working_priority = value;
    }
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::LinkFlags()
    :
    is_admin_up{YType::boolean, "is-admin-up"},
    is_mpls_te_on{YType::boolean, "is-mpls-te-on"},
    signaling_agent{YType::enumeration, "signaling-agent"}
{
    yang_name = "link-flags"; yang_parent_name = "link-common";
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::~LinkFlags()
{
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::has_data() const
{
    return is_admin_up.is_set
	|| is_mpls_te_on.is_set
	|| signaling_agent.is_set;
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::has_operation() const
{
    return is_set(operation)
	|| is_set(is_admin_up.operation)
	|| is_set(is_mpls_te_on.operation)
	|| is_set(signaling_agent.operation);
}

std::string MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-flags";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkFlags' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_admin_up.is_set || is_set(is_admin_up.operation)) leaf_name_data.push_back(is_admin_up.get_name_leafdata());
    if (is_mpls_te_on.is_set || is_set(is_mpls_te_on.operation)) leaf_name_data.push_back(is_mpls_te_on.get_name_leafdata());
    if (signaling_agent.is_set || is_set(signaling_agent.operation)) leaf_name_data.push_back(signaling_agent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::get_children()
{
    return children;
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-admin-up")
    {
        is_admin_up = value;
    }
    if(value_path == "is-mpls-te-on")
    {
        is_mpls_te_on = value;
    }
    if(value_path == "signaling-agent")
    {
        signaling_agent = value;
    }
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::SharedRiskLinkGroup()
    :
    shared_risk_group{YType::uint32, "shared-risk-group"},
    srlg_name{YType::str, "srlg-name"}
{
    yang_name = "shared-risk-link-group"; yang_parent_name = "link-common";
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::~SharedRiskLinkGroup()
{
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::has_data() const
{
    return shared_risk_group.is_set
	|| srlg_name.is_set;
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(shared_risk_group.operation)
	|| is_set(srlg_name.operation);
}

std::string MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-risk-link-group";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SharedRiskLinkGroup' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shared_risk_group.is_set || is_set(shared_risk_group.operation)) leaf_name_data.push_back(shared_risk_group.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.operation)) leaf_name_data.push_back(srlg_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::get_children()
{
    return children;
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "shared-risk-group")
    {
        shared_risk_group = value;
    }
    if(value_path == "srlg-name")
    {
        srlg_name = value;
    }
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::InterfaceSwitchingCapabilityDescriptor()
    :
    encoding{YType::uint8, "encoding"},
    key{YType::uint8, "key"},
    switching_capability{YType::uint8, "switching-capability"}
{
    yang_name = "interface-switching-capability-descriptor"; yang_parent_name = "link-common";
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::~InterfaceSwitchingCapabilityDescriptor()
{
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::has_data() const
{
    return encoding.is_set
	|| key.is_set
	|| switching_capability.is_set;
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::has_operation() const
{
    return is_set(operation)
	|| is_set(encoding.operation)
	|| is_set(key.operation)
	|| is_set(switching_capability.operation);
}

std::string MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-switching-capability-descriptor";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceSwitchingCapabilityDescriptor' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encoding.is_set || is_set(encoding.operation)) leaf_name_data.push_back(encoding.get_name_leafdata());
    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());
    if (switching_capability.is_set || is_set(switching_capability.operation)) leaf_name_data.push_back(switching_capability.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::get_children()
{
    return children;
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encoding")
    {
        encoding = value;
    }
    if(value_path == "key")
    {
        key = value;
    }
    if(value_path == "switching-capability")
    {
        switching_capability = value;
    }
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::FloodedAreas()
    :
    flooded_area{YType::str, "flooded-area"}
{
    yang_name = "flooded-areas"; yang_parent_name = "link-common";
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::~FloodedAreas()
{
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::has_data() const
{
    return flooded_area.is_set;
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::has_operation() const
{
    return is_set(operation)
	|| is_set(flooded_area.operation);
}

std::string MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooded-areas";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FloodedAreas' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flooded_area.is_set || is_set(flooded_area.operation)) leaf_name_data.push_back(flooded_area.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::get_children()
{
    return children;
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flooded-area")
    {
        flooded_area = value;
    }
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::UpstreamBandwidth()
    :
    bandwidth_direction{YType::enumeration, "bandwidth-direction"},
    bandwidth_units{YType::enumeration, "bandwidth-units"},
    is_admission_method_allocated_bandwidth{YType::boolean, "is-admission-method-allocated-bandwidth"}
{
    yang_name = "upstream-bandwidth"; yang_parent_name = "bandwidth-allocation-link";
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::~UpstreamBandwidth()
{
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::has_data() const
{
    for (std::size_t index=0; index<bandwidth_pool0.size(); index++)
    {
        if(bandwidth_pool0[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<bandwidth_pool1.size(); index++)
    {
        if(bandwidth_pool1[index]->has_data())
            return true;
    }
    return bandwidth_direction.is_set
	|| bandwidth_units.is_set
	|| is_admission_method_allocated_bandwidth.is_set;
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::has_operation() const
{
    for (std::size_t index=0; index<bandwidth_pool0.size(); index++)
    {
        if(bandwidth_pool0[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<bandwidth_pool1.size(); index++)
    {
        if(bandwidth_pool1[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(bandwidth_direction.operation)
	|| is_set(bandwidth_units.operation)
	|| is_set(is_admission_method_allocated_bandwidth.operation);
}

std::string MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "upstream-bandwidth";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpstreamBandwidth' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_direction.is_set || is_set(bandwidth_direction.operation)) leaf_name_data.push_back(bandwidth_direction.get_name_leafdata());
    if (bandwidth_units.is_set || is_set(bandwidth_units.operation)) leaf_name_data.push_back(bandwidth_units.get_name_leafdata());
    if (is_admission_method_allocated_bandwidth.is_set || is_set(is_admission_method_allocated_bandwidth.operation)) leaf_name_data.push_back(is_admission_method_allocated_bandwidth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bandwidth-pool0")
    {
        for(auto const & c : bandwidth_pool0)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0>();
        c->parent = this;
        bandwidth_pool0.push_back(std::move(c));
        children[segment_path] = bandwidth_pool0.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "bandwidth-pool1")
    {
        for(auto const & c : bandwidth_pool1)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1>();
        c->parent = this;
        bandwidth_pool1.push_back(std::move(c));
        children[segment_path] = bandwidth_pool1.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::get_children()
{
    for (auto const & c : bandwidth_pool0)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : bandwidth_pool1)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth-direction")
    {
        bandwidth_direction = value;
    }
    if(value_path == "bandwidth-units")
    {
        bandwidth_units = value;
    }
    if(value_path == "is-admission-method-allocated-bandwidth")
    {
        is_admission_method_allocated_bandwidth = value;
    }
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::BandwidthPool0()
    :
    held_amount{YType::uint32, "held-amount"},
    hold_priority{YType::uint8, "hold-priority"},
    locked_amount{YType::uint32, "locked-amount"},
    total_held_amount{YType::uint32, "total-held-amount"},
    total_locked_amount{YType::uint32, "total-locked-amount"}
{
    yang_name = "bandwidth-pool0"; yang_parent_name = "upstream-bandwidth";
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::~BandwidthPool0()
{
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::has_data() const
{
    return held_amount.is_set
	|| hold_priority.is_set
	|| locked_amount.is_set
	|| total_held_amount.is_set
	|| total_locked_amount.is_set;
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::has_operation() const
{
    return is_set(operation)
	|| is_set(held_amount.operation)
	|| is_set(hold_priority.operation)
	|| is_set(locked_amount.operation)
	|| is_set(total_held_amount.operation)
	|| is_set(total_locked_amount.operation);
}

std::string MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-pool0";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BandwidthPool0' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (held_amount.is_set || is_set(held_amount.operation)) leaf_name_data.push_back(held_amount.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.operation)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (locked_amount.is_set || is_set(locked_amount.operation)) leaf_name_data.push_back(locked_amount.get_name_leafdata());
    if (total_held_amount.is_set || is_set(total_held_amount.operation)) leaf_name_data.push_back(total_held_amount.get_name_leafdata());
    if (total_locked_amount.is_set || is_set(total_locked_amount.operation)) leaf_name_data.push_back(total_locked_amount.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::get_children()
{
    return children;
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "held-amount")
    {
        held_amount = value;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
    }
    if(value_path == "locked-amount")
    {
        locked_amount = value;
    }
    if(value_path == "total-held-amount")
    {
        total_held_amount = value;
    }
    if(value_path == "total-locked-amount")
    {
        total_locked_amount = value;
    }
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::BandwidthPool1()
    :
    held_amount{YType::uint32, "held-amount"},
    hold_priority{YType::uint8, "hold-priority"},
    locked_amount{YType::uint32, "locked-amount"},
    total_held_amount{YType::uint32, "total-held-amount"},
    total_locked_amount{YType::uint32, "total-locked-amount"}
{
    yang_name = "bandwidth-pool1"; yang_parent_name = "upstream-bandwidth";
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::~BandwidthPool1()
{
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::has_data() const
{
    return held_amount.is_set
	|| hold_priority.is_set
	|| locked_amount.is_set
	|| total_held_amount.is_set
	|| total_locked_amount.is_set;
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::has_operation() const
{
    return is_set(operation)
	|| is_set(held_amount.operation)
	|| is_set(hold_priority.operation)
	|| is_set(locked_amount.operation)
	|| is_set(total_held_amount.operation)
	|| is_set(total_locked_amount.operation);
}

std::string MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-pool1";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BandwidthPool1' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (held_amount.is_set || is_set(held_amount.operation)) leaf_name_data.push_back(held_amount.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.operation)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (locked_amount.is_set || is_set(locked_amount.operation)) leaf_name_data.push_back(locked_amount.get_name_leafdata());
    if (total_held_amount.is_set || is_set(total_held_amount.operation)) leaf_name_data.push_back(total_held_amount.get_name_leafdata());
    if (total_locked_amount.is_set || is_set(total_locked_amount.operation)) leaf_name_data.push_back(total_locked_amount.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::get_children()
{
    return children;
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "held-amount")
    {
        held_amount = value;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
    }
    if(value_path == "locked-amount")
    {
        locked_amount = value;
    }
    if(value_path == "total-held-amount")
    {
        total_held_amount = value;
    }
    if(value_path == "total-locked-amount")
    {
        total_locked_amount = value;
    }
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::DownstreamBandwidth()
    :
    bandwidth_direction{YType::enumeration, "bandwidth-direction"},
    bandwidth_units{YType::enumeration, "bandwidth-units"},
    is_admission_method_allocated_bandwidth{YType::boolean, "is-admission-method-allocated-bandwidth"}
{
    yang_name = "downstream-bandwidth"; yang_parent_name = "bandwidth-allocation-link";
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::~DownstreamBandwidth()
{
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::has_data() const
{
    for (std::size_t index=0; index<bandwidth_pool0.size(); index++)
    {
        if(bandwidth_pool0[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<bandwidth_pool1.size(); index++)
    {
        if(bandwidth_pool1[index]->has_data())
            return true;
    }
    return bandwidth_direction.is_set
	|| bandwidth_units.is_set
	|| is_admission_method_allocated_bandwidth.is_set;
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::has_operation() const
{
    for (std::size_t index=0; index<bandwidth_pool0.size(); index++)
    {
        if(bandwidth_pool0[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<bandwidth_pool1.size(); index++)
    {
        if(bandwidth_pool1[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(bandwidth_direction.operation)
	|| is_set(bandwidth_units.operation)
	|| is_set(is_admission_method_allocated_bandwidth.operation);
}

std::string MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "downstream-bandwidth";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DownstreamBandwidth' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_direction.is_set || is_set(bandwidth_direction.operation)) leaf_name_data.push_back(bandwidth_direction.get_name_leafdata());
    if (bandwidth_units.is_set || is_set(bandwidth_units.operation)) leaf_name_data.push_back(bandwidth_units.get_name_leafdata());
    if (is_admission_method_allocated_bandwidth.is_set || is_set(is_admission_method_allocated_bandwidth.operation)) leaf_name_data.push_back(is_admission_method_allocated_bandwidth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bandwidth-pool0")
    {
        for(auto const & c : bandwidth_pool0)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0>();
        c->parent = this;
        bandwidth_pool0.push_back(std::move(c));
        children[segment_path] = bandwidth_pool0.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "bandwidth-pool1")
    {
        for(auto const & c : bandwidth_pool1)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1>();
        c->parent = this;
        bandwidth_pool1.push_back(std::move(c));
        children[segment_path] = bandwidth_pool1.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::get_children()
{
    for (auto const & c : bandwidth_pool0)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : bandwidth_pool1)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth-direction")
    {
        bandwidth_direction = value;
    }
    if(value_path == "bandwidth-units")
    {
        bandwidth_units = value;
    }
    if(value_path == "is-admission-method-allocated-bandwidth")
    {
        is_admission_method_allocated_bandwidth = value;
    }
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::BandwidthPool0()
    :
    held_amount{YType::uint32, "held-amount"},
    hold_priority{YType::uint8, "hold-priority"},
    locked_amount{YType::uint32, "locked-amount"},
    total_held_amount{YType::uint32, "total-held-amount"},
    total_locked_amount{YType::uint32, "total-locked-amount"}
{
    yang_name = "bandwidth-pool0"; yang_parent_name = "downstream-bandwidth";
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::~BandwidthPool0()
{
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::has_data() const
{
    return held_amount.is_set
	|| hold_priority.is_set
	|| locked_amount.is_set
	|| total_held_amount.is_set
	|| total_locked_amount.is_set;
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::has_operation() const
{
    return is_set(operation)
	|| is_set(held_amount.operation)
	|| is_set(hold_priority.operation)
	|| is_set(locked_amount.operation)
	|| is_set(total_held_amount.operation)
	|| is_set(total_locked_amount.operation);
}

std::string MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-pool0";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BandwidthPool0' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (held_amount.is_set || is_set(held_amount.operation)) leaf_name_data.push_back(held_amount.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.operation)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (locked_amount.is_set || is_set(locked_amount.operation)) leaf_name_data.push_back(locked_amount.get_name_leafdata());
    if (total_held_amount.is_set || is_set(total_held_amount.operation)) leaf_name_data.push_back(total_held_amount.get_name_leafdata());
    if (total_locked_amount.is_set || is_set(total_locked_amount.operation)) leaf_name_data.push_back(total_locked_amount.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::get_children()
{
    return children;
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "held-amount")
    {
        held_amount = value;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
    }
    if(value_path == "locked-amount")
    {
        locked_amount = value;
    }
    if(value_path == "total-held-amount")
    {
        total_held_amount = value;
    }
    if(value_path == "total-locked-amount")
    {
        total_locked_amount = value;
    }
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::BandwidthPool1()
    :
    held_amount{YType::uint32, "held-amount"},
    hold_priority{YType::uint8, "hold-priority"},
    locked_amount{YType::uint32, "locked-amount"},
    total_held_amount{YType::uint32, "total-held-amount"},
    total_locked_amount{YType::uint32, "total-locked-amount"}
{
    yang_name = "bandwidth-pool1"; yang_parent_name = "downstream-bandwidth";
}

MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::~BandwidthPool1()
{
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::has_data() const
{
    return held_amount.is_set
	|| hold_priority.is_set
	|| locked_amount.is_set
	|| total_held_amount.is_set
	|| total_locked_amount.is_set;
}

bool MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::has_operation() const
{
    return is_set(operation)
	|| is_set(held_amount.operation)
	|| is_set(hold_priority.operation)
	|| is_set(locked_amount.operation)
	|| is_set(total_held_amount.operation)
	|| is_set(total_locked_amount.operation);
}

std::string MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-pool1";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BandwidthPool1' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (held_amount.is_set || is_set(held_amount.operation)) leaf_name_data.push_back(held_amount.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.operation)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (locked_amount.is_set || is_set(locked_amount.operation)) leaf_name_data.push_back(locked_amount.get_name_leafdata());
    if (total_held_amount.is_set || is_set(total_held_amount.operation)) leaf_name_data.push_back(total_held_amount.get_name_leafdata());
    if (total_locked_amount.is_set || is_set(total_locked_amount.operation)) leaf_name_data.push_back(total_locked_amount.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::get_children()
{
    return children;
}

void MplsLcacStandby::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "held-amount")
    {
        held_amount = value;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
    }
    if(value_path == "locked-amount")
    {
        locked_amount = value;
    }
    if(value_path == "total-held-amount")
    {
        total_held_amount = value;
    }
    if(value_path == "total-locked-amount")
    {
        total_locked_amount = value;
    }
}

MplsLcacStandby::Gmpls::Gmpls()
    :
    nni(std::make_shared<MplsLcacStandby::Gmpls::Nni>())
	,uni(std::make_shared<MplsLcacStandby::Gmpls::Uni>())
{
    nni->parent = this;
    children["nni"] = nni;

    uni->parent = this;
    children["uni"] = uni;

    yang_name = "gmpls"; yang_parent_name = "mpls-lcac-standby";
}

MplsLcacStandby::Gmpls::~Gmpls()
{
}

bool MplsLcacStandby::Gmpls::has_data() const
{
    return (nni !=  nullptr && nni->has_data())
	|| (uni !=  nullptr && uni->has_data());
}

bool MplsLcacStandby::Gmpls::has_operation() const
{
    return is_set(operation)
	|| (nni !=  nullptr && nni->has_operation())
	|| (uni !=  nullptr && uni->has_operation());
}

std::string MplsLcacStandby::Gmpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmpls";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::Gmpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::Gmpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nni")
    {
        if(nni != nullptr)
        {
            children["nni"] = nni;
        }
        else
        {
            nni = std::make_shared<MplsLcacStandby::Gmpls::Nni>();
            nni->parent = this;
            children["nni"] = nni;
        }
        return children.at("nni");
    }

    if(child_yang_name == "uni")
    {
        if(uni != nullptr)
        {
            children["uni"] = uni;
        }
        else
        {
            uni = std::make_shared<MplsLcacStandby::Gmpls::Uni>();
            uni->parent = this;
            children["uni"] = uni;
        }
        return children.at("uni");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::Gmpls::get_children()
{
    if(children.find("nni") == children.end())
    {
        if(nni != nullptr)
        {
            children["nni"] = nni;
        }
    }

    if(children.find("uni") == children.end())
    {
        if(uni != nullptr)
        {
            children["uni"] = uni;
        }
    }

    return children;
}

void MplsLcacStandby::Gmpls::set_value(const std::string & value_path, std::string value)
{
}

MplsLcacStandby::Gmpls::Nni::Nni()
{
    yang_name = "nni"; yang_parent_name = "gmpls";
}

MplsLcacStandby::Gmpls::Nni::~Nni()
{
}

bool MplsLcacStandby::Gmpls::Nni::has_data() const
{
    return false;
}

bool MplsLcacStandby::Gmpls::Nni::has_operation() const
{
    return is_set(operation);
}

std::string MplsLcacStandby::Gmpls::Nni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nni";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::Gmpls::Nni::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/gmpls/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::Gmpls::Nni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::Gmpls::Nni::get_children()
{
    return children;
}

void MplsLcacStandby::Gmpls::Nni::set_value(const std::string & value_path, std::string value)
{
}

MplsLcacStandby::Gmpls::Uni::Uni()
{
    yang_name = "uni"; yang_parent_name = "gmpls";
}

MplsLcacStandby::Gmpls::Uni::~Uni()
{
}

bool MplsLcacStandby::Gmpls::Uni::has_data() const
{
    return false;
}

bool MplsLcacStandby::Gmpls::Uni::has_operation() const
{
    return is_set(operation);
}

std::string MplsLcacStandby::Gmpls::Uni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uni";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::Gmpls::Uni::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/gmpls/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::Gmpls::Uni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::Gmpls::Uni::get_children()
{
    return children;
}

void MplsLcacStandby::Gmpls::Uni::set_value(const std::string & value_path, std::string value)
{
}

MplsLcacStandby::BfdNeighbors::BfdNeighbors()
{
    yang_name = "bfd-neighbors"; yang_parent_name = "mpls-lcac-standby";
}

MplsLcacStandby::BfdNeighbors::~BfdNeighbors()
{
}

bool MplsLcacStandby::BfdNeighbors::has_data() const
{
    for (std::size_t index=0; index<bfd_neighbor.size(); index++)
    {
        if(bfd_neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcacStandby::BfdNeighbors::has_operation() const
{
    for (std::size_t index=0; index<bfd_neighbor.size(); index++)
    {
        if(bfd_neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLcacStandby::BfdNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-neighbors";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::BfdNeighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::BfdNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bfd-neighbor")
    {
        for(auto const & c : bfd_neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcacStandby::BfdNeighbors::BfdNeighbor>();
        c->parent = this;
        bfd_neighbor.push_back(std::move(c));
        children[segment_path] = bfd_neighbor.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::BfdNeighbors::get_children()
{
    for (auto const & c : bfd_neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLcacStandby::BfdNeighbors::set_value(const std::string & value_path, std::string value)
{
}

MplsLcacStandby::BfdNeighbors::BfdNeighbor::BfdNeighbor()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "bfd-neighbor"; yang_parent_name = "bfd-neighbors";
}

MplsLcacStandby::BfdNeighbors::BfdNeighbor::~BfdNeighbor()
{
}

bool MplsLcacStandby::BfdNeighbors::BfdNeighbor::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return interface_name.is_set;
}

bool MplsLcacStandby::BfdNeighbors::BfdNeighbor::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string MplsLcacStandby::BfdNeighbors::BfdNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-neighbor" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::BfdNeighbors::BfdNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/bfd-neighbors/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::BfdNeighbors::BfdNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcacStandby::BfdNeighbors::BfdNeighbor::Neighbor>();
        c->parent = this;
        neighbor.push_back(std::move(c));
        children[segment_path] = neighbor.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::BfdNeighbors::BfdNeighbor::get_children()
{
    for (auto const & c : neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLcacStandby::BfdNeighbors::BfdNeighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

MplsLcacStandby::BfdNeighbors::BfdNeighbor::Neighbor::Neighbor()
    :
    is_bfd_up{YType::boolean, "is-bfd-up"},
    neighbor_address{YType::str, "neighbor-address"}
{
    yang_name = "neighbor"; yang_parent_name = "bfd-neighbor";
}

MplsLcacStandby::BfdNeighbors::BfdNeighbor::Neighbor::~Neighbor()
{
}

bool MplsLcacStandby::BfdNeighbors::BfdNeighbor::Neighbor::has_data() const
{
    return is_bfd_up.is_set
	|| neighbor_address.is_set;
}

bool MplsLcacStandby::BfdNeighbors::BfdNeighbor::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(is_bfd_up.operation)
	|| is_set(neighbor_address.operation);
}

std::string MplsLcacStandby::BfdNeighbors::BfdNeighbor::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::BfdNeighbors::BfdNeighbor::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_bfd_up.is_set || is_set(is_bfd_up.operation)) leaf_name_data.push_back(is_bfd_up.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::BfdNeighbors::BfdNeighbor::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::BfdNeighbors::BfdNeighbor::Neighbor::get_children()
{
    return children;
}

void MplsLcacStandby::BfdNeighbors::BfdNeighbor::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-bfd-up")
    {
        is_bfd_up = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
}

MplsLcacStandby::BandwidthAccount::BandwidthAccount()
    :
    bandwidth_account_links(std::make_shared<MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks>())
{
    bandwidth_account_links->parent = this;
    children["bandwidth-account-links"] = bandwidth_account_links;

    yang_name = "bandwidth-account"; yang_parent_name = "mpls-lcac-standby";
}

MplsLcacStandby::BandwidthAccount::~BandwidthAccount()
{
}

bool MplsLcacStandby::BandwidthAccount::has_data() const
{
    return (bandwidth_account_links !=  nullptr && bandwidth_account_links->has_data());
}

bool MplsLcacStandby::BandwidthAccount::has_operation() const
{
    return is_set(operation)
	|| (bandwidth_account_links !=  nullptr && bandwidth_account_links->has_operation());
}

std::string MplsLcacStandby::BandwidthAccount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-account";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::BandwidthAccount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAccount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bandwidth-account-links")
    {
        if(bandwidth_account_links != nullptr)
        {
            children["bandwidth-account-links"] = bandwidth_account_links;
        }
        else
        {
            bandwidth_account_links = std::make_shared<MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks>();
            bandwidth_account_links->parent = this;
            children["bandwidth-account-links"] = bandwidth_account_links;
        }
        return children.at("bandwidth-account-links");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::BandwidthAccount::get_children()
{
    if(children.find("bandwidth-account-links") == children.end())
    {
        if(bandwidth_account_links != nullptr)
        {
            children["bandwidth-account-links"] = bandwidth_account_links;
        }
    }

    return children;
}

void MplsLcacStandby::BandwidthAccount::set_value(const std::string & value_path, std::string value)
{
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLinks()
{
    yang_name = "bandwidth-account-links"; yang_parent_name = "bandwidth-account";
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::~BandwidthAccountLinks()
{
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::has_data() const
{
    for (std::size_t index=0; index<bandwidth_account_link.size(); index++)
    {
        if(bandwidth_account_link[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::has_operation() const
{
    for (std::size_t index=0; index<bandwidth_account_link.size(); index++)
    {
        if(bandwidth_account_link[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-account-links";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/bandwidth-account/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bandwidth-account-link")
    {
        for(auto const & c : bandwidth_account_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink>();
        c->parent = this;
        bandwidth_account_link.push_back(std::move(c));
        children[segment_path] = bandwidth_account_link.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::get_children()
{
    for (auto const & c : bandwidth_account_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::set_value(const std::string & value_path, std::string value)
{
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::BandwidthAccountLink()
    :
    interface_name{YType::str, "interface-name"},
    link_id{YType::str, "link-id"}
    	,
    common_info(std::make_shared<MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo>())
	,sample_history(std::make_shared<MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory>())
{
    common_info->parent = this;
    children["common-info"] = common_info;

    sample_history->parent = this;
    children["sample-history"] = sample_history;

    yang_name = "bandwidth-account-link"; yang_parent_name = "bandwidth-account-links";
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::~BandwidthAccountLink()
{
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::has_data() const
{
    return interface_name.is_set
	|| link_id.is_set
	|| (common_info !=  nullptr && common_info->has_data())
	|| (sample_history !=  nullptr && sample_history->has_data());
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(link_id.operation)
	|| (common_info !=  nullptr && common_info->has_operation())
	|| (sample_history !=  nullptr && sample_history->has_operation());
}

std::string MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-account-link" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/bandwidth-account/bandwidth-account-links/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.operation)) leaf_name_data.push_back(link_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "common-info")
    {
        if(common_info != nullptr)
        {
            children["common-info"] = common_info;
        }
        else
        {
            common_info = std::make_shared<MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo>();
            common_info->parent = this;
            children["common-info"] = common_info;
        }
        return children.at("common-info");
    }

    if(child_yang_name == "sample-history")
    {
        if(sample_history != nullptr)
        {
            children["sample-history"] = sample_history;
        }
        else
        {
            sample_history = std::make_shared<MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory>();
            sample_history->parent = this;
            children["sample-history"] = sample_history;
        }
        return children.at("sample-history");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::get_children()
{
    if(children.find("common-info") == children.end())
    {
        if(common_info != nullptr)
        {
            children["common-info"] = common_info;
        }
    }

    if(children.find("sample-history") == children.end())
    {
        if(sample_history != nullptr)
        {
            children["sample-history"] = sample_history;
        }
    }

    return children;
}

void MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "link-id")
    {
        link_id = value;
    }
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::CommonInfo()
    :
    application_enabled{YType::boolean, "application-enabled"},
    application_time_remaining_nano_sec{YType::uint64, "application-time-remaining-nano-sec"},
    collection_type{YType::enumeration, "collection-type"},
    effective_maximum_reservable_bandwidth{YType::uint64, "effective-maximum-reservable-bandwidth"},
    last_application_timestamp_nano_sec{YType::uint64, "last-application-timestamp-nano-sec"},
    last_sample_collection_timestamp_nano_sec{YType::uint64, "last-sample-collection-timestamp-nano-sec"},
    next_application_timestamp_nano_sec{YType::uint64, "next-application-timestamp-nano-sec"},
    next_sample_collection_nano_sec{YType::uint64, "next-sample-collection-nano-sec"},
    sample_time_remaining_timestamp_nano_sec{YType::uint64, "sample-time-remaining-timestamp-nano-sec"}
    	,
    bandwidth_utilization(std::make_shared<MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::BandwidthUtilization>())
{
    bandwidth_utilization->parent = this;
    children["bandwidth-utilization"] = bandwidth_utilization;

    yang_name = "common-info"; yang_parent_name = "bandwidth-account-link";
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::~CommonInfo()
{
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::has_data() const
{
    return application_enabled.is_set
	|| application_time_remaining_nano_sec.is_set
	|| collection_type.is_set
	|| effective_maximum_reservable_bandwidth.is_set
	|| last_application_timestamp_nano_sec.is_set
	|| last_sample_collection_timestamp_nano_sec.is_set
	|| next_application_timestamp_nano_sec.is_set
	|| next_sample_collection_nano_sec.is_set
	|| sample_time_remaining_timestamp_nano_sec.is_set
	|| (bandwidth_utilization !=  nullptr && bandwidth_utilization->has_data());
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(application_enabled.operation)
	|| is_set(application_time_remaining_nano_sec.operation)
	|| is_set(collection_type.operation)
	|| is_set(effective_maximum_reservable_bandwidth.operation)
	|| is_set(last_application_timestamp_nano_sec.operation)
	|| is_set(last_sample_collection_timestamp_nano_sec.operation)
	|| is_set(next_application_timestamp_nano_sec.operation)
	|| is_set(next_sample_collection_nano_sec.operation)
	|| is_set(sample_time_remaining_timestamp_nano_sec.operation)
	|| (bandwidth_utilization !=  nullptr && bandwidth_utilization->has_operation());
}

std::string MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-info";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CommonInfo' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_enabled.is_set || is_set(application_enabled.operation)) leaf_name_data.push_back(application_enabled.get_name_leafdata());
    if (application_time_remaining_nano_sec.is_set || is_set(application_time_remaining_nano_sec.operation)) leaf_name_data.push_back(application_time_remaining_nano_sec.get_name_leafdata());
    if (collection_type.is_set || is_set(collection_type.operation)) leaf_name_data.push_back(collection_type.get_name_leafdata());
    if (effective_maximum_reservable_bandwidth.is_set || is_set(effective_maximum_reservable_bandwidth.operation)) leaf_name_data.push_back(effective_maximum_reservable_bandwidth.get_name_leafdata());
    if (last_application_timestamp_nano_sec.is_set || is_set(last_application_timestamp_nano_sec.operation)) leaf_name_data.push_back(last_application_timestamp_nano_sec.get_name_leafdata());
    if (last_sample_collection_timestamp_nano_sec.is_set || is_set(last_sample_collection_timestamp_nano_sec.operation)) leaf_name_data.push_back(last_sample_collection_timestamp_nano_sec.get_name_leafdata());
    if (next_application_timestamp_nano_sec.is_set || is_set(next_application_timestamp_nano_sec.operation)) leaf_name_data.push_back(next_application_timestamp_nano_sec.get_name_leafdata());
    if (next_sample_collection_nano_sec.is_set || is_set(next_sample_collection_nano_sec.operation)) leaf_name_data.push_back(next_sample_collection_nano_sec.get_name_leafdata());
    if (sample_time_remaining_timestamp_nano_sec.is_set || is_set(sample_time_remaining_timestamp_nano_sec.operation)) leaf_name_data.push_back(sample_time_remaining_timestamp_nano_sec.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bandwidth-utilization")
    {
        if(bandwidth_utilization != nullptr)
        {
            children["bandwidth-utilization"] = bandwidth_utilization;
        }
        else
        {
            bandwidth_utilization = std::make_shared<MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::BandwidthUtilization>();
            bandwidth_utilization->parent = this;
            children["bandwidth-utilization"] = bandwidth_utilization;
        }
        return children.at("bandwidth-utilization");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::get_children()
{
    if(children.find("bandwidth-utilization") == children.end())
    {
        if(bandwidth_utilization != nullptr)
        {
            children["bandwidth-utilization"] = bandwidth_utilization;
        }
    }

    return children;
}

void MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "application-enabled")
    {
        application_enabled = value;
    }
    if(value_path == "application-time-remaining-nano-sec")
    {
        application_time_remaining_nano_sec = value;
    }
    if(value_path == "collection-type")
    {
        collection_type = value;
    }
    if(value_path == "effective-maximum-reservable-bandwidth")
    {
        effective_maximum_reservable_bandwidth = value;
    }
    if(value_path == "last-application-timestamp-nano-sec")
    {
        last_application_timestamp_nano_sec = value;
    }
    if(value_path == "last-sample-collection-timestamp-nano-sec")
    {
        last_sample_collection_timestamp_nano_sec = value;
    }
    if(value_path == "next-application-timestamp-nano-sec")
    {
        next_application_timestamp_nano_sec = value;
    }
    if(value_path == "next-sample-collection-nano-sec")
    {
        next_sample_collection_nano_sec = value;
    }
    if(value_path == "sample-time-remaining-timestamp-nano-sec")
    {
        sample_time_remaining_timestamp_nano_sec = value;
    }
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::BandwidthUtilization::BandwidthUtilization()
    :
    applied_non_rsvp_te_bandwidth_utilization{YType::uint64, "applied-non-rsvp-te-bandwidth-utilization"},
    non_rsvp_te_bandwidth_utilization{YType::uint64, "non-rsvp-te-bandwidth-utilization"},
    rsvp_te_bandwidth_utilization{YType::uint64, "rsvp-te-bandwidth-utilization"},
    total_link_bandwidth_utilization{YType::uint64, "total-link-bandwidth-utilization"}
{
    yang_name = "bandwidth-utilization"; yang_parent_name = "common-info";
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::BandwidthUtilization::~BandwidthUtilization()
{
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::BandwidthUtilization::has_data() const
{
    return applied_non_rsvp_te_bandwidth_utilization.is_set
	|| non_rsvp_te_bandwidth_utilization.is_set
	|| rsvp_te_bandwidth_utilization.is_set
	|| total_link_bandwidth_utilization.is_set;
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::BandwidthUtilization::has_operation() const
{
    return is_set(operation)
	|| is_set(applied_non_rsvp_te_bandwidth_utilization.operation)
	|| is_set(non_rsvp_te_bandwidth_utilization.operation)
	|| is_set(rsvp_te_bandwidth_utilization.operation)
	|| is_set(total_link_bandwidth_utilization.operation);
}

std::string MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::BandwidthUtilization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-utilization";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::BandwidthUtilization::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BandwidthUtilization' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (applied_non_rsvp_te_bandwidth_utilization.is_set || is_set(applied_non_rsvp_te_bandwidth_utilization.operation)) leaf_name_data.push_back(applied_non_rsvp_te_bandwidth_utilization.get_name_leafdata());
    if (non_rsvp_te_bandwidth_utilization.is_set || is_set(non_rsvp_te_bandwidth_utilization.operation)) leaf_name_data.push_back(non_rsvp_te_bandwidth_utilization.get_name_leafdata());
    if (rsvp_te_bandwidth_utilization.is_set || is_set(rsvp_te_bandwidth_utilization.operation)) leaf_name_data.push_back(rsvp_te_bandwidth_utilization.get_name_leafdata());
    if (total_link_bandwidth_utilization.is_set || is_set(total_link_bandwidth_utilization.operation)) leaf_name_data.push_back(total_link_bandwidth_utilization.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::BandwidthUtilization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::BandwidthUtilization::get_children()
{
    return children;
}

void MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo::BandwidthUtilization::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "applied-non-rsvp-te-bandwidth-utilization")
    {
        applied_non_rsvp_te_bandwidth_utilization = value;
    }
    if(value_path == "non-rsvp-te-bandwidth-utilization")
    {
        non_rsvp_te_bandwidth_utilization = value;
    }
    if(value_path == "rsvp-te-bandwidth-utilization")
    {
        rsvp_te_bandwidth_utilization = value;
    }
    if(value_path == "total-link-bandwidth-utilization")
    {
        total_link_bandwidth_utilization = value;
    }
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::SampleHistory()
    :
    total_applications{YType::uint32, "total-applications"},
    total_samples{YType::uint32, "total-samples"}
{
    yang_name = "sample-history"; yang_parent_name = "bandwidth-account-link";
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::~SampleHistory()
{
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::has_data() const
{
    for (std::size_t index=0; index<active_interval_sample.size(); index++)
    {
        if(active_interval_sample[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<previous_interval_sample.size(); index++)
    {
        if(previous_interval_sample[index]->has_data())
            return true;
    }
    return total_applications.is_set
	|| total_samples.is_set;
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::has_operation() const
{
    for (std::size_t index=0; index<active_interval_sample.size(); index++)
    {
        if(active_interval_sample[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<previous_interval_sample.size(); index++)
    {
        if(previous_interval_sample[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(total_applications.operation)
	|| is_set(total_samples.operation);
}

std::string MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sample-history";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SampleHistory' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_applications.is_set || is_set(total_applications.operation)) leaf_name_data.push_back(total_applications.get_name_leafdata());
    if (total_samples.is_set || is_set(total_samples.operation)) leaf_name_data.push_back(total_samples.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "active-interval-sample")
    {
        for(auto const & c : active_interval_sample)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::ActiveIntervalSample>();
        c->parent = this;
        active_interval_sample.push_back(std::move(c));
        children[segment_path] = active_interval_sample.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "previous-interval-sample")
    {
        for(auto const & c : previous_interval_sample)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::PreviousIntervalSample>();
        c->parent = this;
        previous_interval_sample.push_back(std::move(c));
        children[segment_path] = previous_interval_sample.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::get_children()
{
    for (auto const & c : active_interval_sample)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : previous_interval_sample)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "total-applications")
    {
        total_applications = value;
    }
    if(value_path == "total-samples")
    {
        total_samples = value;
    }
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::ActiveIntervalSample::ActiveIntervalSample()
    :
    non_rsvp_te_packet_rate{YType::uint64, "non-rsvp-te-packet-rate"},
    non_rsvp_te_rate{YType::uint64, "non-rsvp-te-rate"},
    rsvp_te_packet_rate{YType::uint64, "rsvp-te-packet-rate"},
    rsvp_te_rate{YType::uint64, "rsvp-te-rate"},
    timestamp_nano_sec{YType::uint64, "timestamp-nano-sec"},
    total_packet_rate{YType::uint64, "total-packet-rate"},
    total_rate{YType::uint64, "total-rate"}
{
    yang_name = "active-interval-sample"; yang_parent_name = "sample-history";
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::ActiveIntervalSample::~ActiveIntervalSample()
{
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::ActiveIntervalSample::has_data() const
{
    return non_rsvp_te_packet_rate.is_set
	|| non_rsvp_te_rate.is_set
	|| rsvp_te_packet_rate.is_set
	|| rsvp_te_rate.is_set
	|| timestamp_nano_sec.is_set
	|| total_packet_rate.is_set
	|| total_rate.is_set;
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::ActiveIntervalSample::has_operation() const
{
    return is_set(operation)
	|| is_set(non_rsvp_te_packet_rate.operation)
	|| is_set(non_rsvp_te_rate.operation)
	|| is_set(rsvp_te_packet_rate.operation)
	|| is_set(rsvp_te_rate.operation)
	|| is_set(timestamp_nano_sec.operation)
	|| is_set(total_packet_rate.operation)
	|| is_set(total_rate.operation);
}

std::string MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::ActiveIntervalSample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-interval-sample";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::ActiveIntervalSample::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActiveIntervalSample' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_rsvp_te_packet_rate.is_set || is_set(non_rsvp_te_packet_rate.operation)) leaf_name_data.push_back(non_rsvp_te_packet_rate.get_name_leafdata());
    if (non_rsvp_te_rate.is_set || is_set(non_rsvp_te_rate.operation)) leaf_name_data.push_back(non_rsvp_te_rate.get_name_leafdata());
    if (rsvp_te_packet_rate.is_set || is_set(rsvp_te_packet_rate.operation)) leaf_name_data.push_back(rsvp_te_packet_rate.get_name_leafdata());
    if (rsvp_te_rate.is_set || is_set(rsvp_te_rate.operation)) leaf_name_data.push_back(rsvp_te_rate.get_name_leafdata());
    if (timestamp_nano_sec.is_set || is_set(timestamp_nano_sec.operation)) leaf_name_data.push_back(timestamp_nano_sec.get_name_leafdata());
    if (total_packet_rate.is_set || is_set(total_packet_rate.operation)) leaf_name_data.push_back(total_packet_rate.get_name_leafdata());
    if (total_rate.is_set || is_set(total_rate.operation)) leaf_name_data.push_back(total_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::ActiveIntervalSample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::ActiveIntervalSample::get_children()
{
    return children;
}

void MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::ActiveIntervalSample::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "non-rsvp-te-packet-rate")
    {
        non_rsvp_te_packet_rate = value;
    }
    if(value_path == "non-rsvp-te-rate")
    {
        non_rsvp_te_rate = value;
    }
    if(value_path == "rsvp-te-packet-rate")
    {
        rsvp_te_packet_rate = value;
    }
    if(value_path == "rsvp-te-rate")
    {
        rsvp_te_rate = value;
    }
    if(value_path == "timestamp-nano-sec")
    {
        timestamp_nano_sec = value;
    }
    if(value_path == "total-packet-rate")
    {
        total_packet_rate = value;
    }
    if(value_path == "total-rate")
    {
        total_rate = value;
    }
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::PreviousIntervalSample::PreviousIntervalSample()
    :
    non_rsvp_te_packet_rate{YType::uint64, "non-rsvp-te-packet-rate"},
    non_rsvp_te_rate{YType::uint64, "non-rsvp-te-rate"},
    rsvp_te_packet_rate{YType::uint64, "rsvp-te-packet-rate"},
    rsvp_te_rate{YType::uint64, "rsvp-te-rate"},
    timestamp_nano_sec{YType::uint64, "timestamp-nano-sec"},
    total_packet_rate{YType::uint64, "total-packet-rate"},
    total_rate{YType::uint64, "total-rate"}
{
    yang_name = "previous-interval-sample"; yang_parent_name = "sample-history";
}

MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::PreviousIntervalSample::~PreviousIntervalSample()
{
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::PreviousIntervalSample::has_data() const
{
    return non_rsvp_te_packet_rate.is_set
	|| non_rsvp_te_rate.is_set
	|| rsvp_te_packet_rate.is_set
	|| rsvp_te_rate.is_set
	|| timestamp_nano_sec.is_set
	|| total_packet_rate.is_set
	|| total_rate.is_set;
}

bool MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::PreviousIntervalSample::has_operation() const
{
    return is_set(operation)
	|| is_set(non_rsvp_te_packet_rate.operation)
	|| is_set(non_rsvp_te_rate.operation)
	|| is_set(rsvp_te_packet_rate.operation)
	|| is_set(rsvp_te_rate.operation)
	|| is_set(timestamp_nano_sec.operation)
	|| is_set(total_packet_rate.operation)
	|| is_set(total_rate.operation);
}

std::string MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::PreviousIntervalSample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-interval-sample";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::PreviousIntervalSample::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PreviousIntervalSample' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_rsvp_te_packet_rate.is_set || is_set(non_rsvp_te_packet_rate.operation)) leaf_name_data.push_back(non_rsvp_te_packet_rate.get_name_leafdata());
    if (non_rsvp_te_rate.is_set || is_set(non_rsvp_te_rate.operation)) leaf_name_data.push_back(non_rsvp_te_rate.get_name_leafdata());
    if (rsvp_te_packet_rate.is_set || is_set(rsvp_te_packet_rate.operation)) leaf_name_data.push_back(rsvp_te_packet_rate.get_name_leafdata());
    if (rsvp_te_rate.is_set || is_set(rsvp_te_rate.operation)) leaf_name_data.push_back(rsvp_te_rate.get_name_leafdata());
    if (timestamp_nano_sec.is_set || is_set(timestamp_nano_sec.operation)) leaf_name_data.push_back(timestamp_nano_sec.get_name_leafdata());
    if (total_packet_rate.is_set || is_set(total_packet_rate.operation)) leaf_name_data.push_back(total_packet_rate.get_name_leafdata());
    if (total_rate.is_set || is_set(total_rate.operation)) leaf_name_data.push_back(total_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::PreviousIntervalSample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::PreviousIntervalSample::get_children()
{
    return children;
}

void MplsLcacStandby::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory::PreviousIntervalSample::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "non-rsvp-te-packet-rate")
    {
        non_rsvp_te_packet_rate = value;
    }
    if(value_path == "non-rsvp-te-rate")
    {
        non_rsvp_te_rate = value;
    }
    if(value_path == "rsvp-te-packet-rate")
    {
        rsvp_te_packet_rate = value;
    }
    if(value_path == "rsvp-te-rate")
    {
        rsvp_te_rate = value;
    }
    if(value_path == "timestamp-nano-sec")
    {
        timestamp_nano_sec = value;
    }
    if(value_path == "total-packet-rate")
    {
        total_packet_rate = value;
    }
    if(value_path == "total-rate")
    {
        total_rate = value;
    }
}

MplsLcacStandby::LinkSummary::LinkSummary()
    :
    is_flooding_enabled{YType::boolean, "is-flooding-enabled"},
    is_role_standby{YType::boolean, "is-role-standby"},
    links{YType::uint16, "links"},
    maximum_links{YType::uint16, "maximum-links"}
    	,
    bandwidth_account_summary(std::make_shared<MplsLcacStandby::LinkSummary::BandwidthAccountSummary>())
{
    bandwidth_account_summary->parent = this;
    children["bandwidth-account-summary"] = bandwidth_account_summary;

    yang_name = "link-summary"; yang_parent_name = "mpls-lcac-standby";
}

MplsLcacStandby::LinkSummary::~LinkSummary()
{
}

bool MplsLcacStandby::LinkSummary::has_data() const
{
    for (std::size_t index=0; index<areas_summary.size(); index++)
    {
        if(areas_summary[index]->has_data())
            return true;
    }
    return is_flooding_enabled.is_set
	|| is_role_standby.is_set
	|| links.is_set
	|| maximum_links.is_set
	|| (bandwidth_account_summary !=  nullptr && bandwidth_account_summary->has_data());
}

bool MplsLcacStandby::LinkSummary::has_operation() const
{
    for (std::size_t index=0; index<areas_summary.size(); index++)
    {
        if(areas_summary[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(is_flooding_enabled.operation)
	|| is_set(is_role_standby.operation)
	|| is_set(links.operation)
	|| is_set(maximum_links.operation)
	|| (bandwidth_account_summary !=  nullptr && bandwidth_account_summary->has_operation());
}

std::string MplsLcacStandby::LinkSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-summary";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::LinkSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_flooding_enabled.is_set || is_set(is_flooding_enabled.operation)) leaf_name_data.push_back(is_flooding_enabled.get_name_leafdata());
    if (is_role_standby.is_set || is_set(is_role_standby.operation)) leaf_name_data.push_back(is_role_standby.get_name_leafdata());
    if (links.is_set || is_set(links.operation)) leaf_name_data.push_back(links.get_name_leafdata());
    if (maximum_links.is_set || is_set(maximum_links.operation)) leaf_name_data.push_back(maximum_links.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "areas-summary")
    {
        for(auto const & c : areas_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcacStandby::LinkSummary::AreasSummary>();
        c->parent = this;
        areas_summary.push_back(std::move(c));
        children[segment_path] = areas_summary.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "bandwidth-account-summary")
    {
        if(bandwidth_account_summary != nullptr)
        {
            children["bandwidth-account-summary"] = bandwidth_account_summary;
        }
        else
        {
            bandwidth_account_summary = std::make_shared<MplsLcacStandby::LinkSummary::BandwidthAccountSummary>();
            bandwidth_account_summary->parent = this;
            children["bandwidth-account-summary"] = bandwidth_account_summary;
        }
        return children.at("bandwidth-account-summary");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::LinkSummary::get_children()
{
    for (auto const & c : areas_summary)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("bandwidth-account-summary") == children.end())
    {
        if(bandwidth_account_summary != nullptr)
        {
            children["bandwidth-account-summary"] = bandwidth_account_summary;
        }
    }

    return children;
}

void MplsLcacStandby::LinkSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-flooding-enabled")
    {
        is_flooding_enabled = value;
    }
    if(value_path == "is-role-standby")
    {
        is_role_standby = value;
    }
    if(value_path == "links")
    {
        links = value;
    }
    if(value_path == "maximum-links")
    {
        maximum_links = value;
    }
}

MplsLcacStandby::LinkSummary::BandwidthAccountSummary::BandwidthAccountSummary()
    :
    application_interval{YType::uint32, "application-interval"},
    application_time_remaining{YType::uint32, "application-time-remaining"},
    is_bandwidth_account_enabled{YType::boolean, "is-bandwidth-account-enabled"},
    sample_interval{YType::uint32, "sample-interval"},
    sample_time_remaining{YType::uint32, "sample-time-remaining"}
{
    yang_name = "bandwidth-account-summary"; yang_parent_name = "link-summary";
}

MplsLcacStandby::LinkSummary::BandwidthAccountSummary::~BandwidthAccountSummary()
{
}

bool MplsLcacStandby::LinkSummary::BandwidthAccountSummary::has_data() const
{
    return application_interval.is_set
	|| application_time_remaining.is_set
	|| is_bandwidth_account_enabled.is_set
	|| sample_interval.is_set
	|| sample_time_remaining.is_set;
}

bool MplsLcacStandby::LinkSummary::BandwidthAccountSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(application_interval.operation)
	|| is_set(application_time_remaining.operation)
	|| is_set(is_bandwidth_account_enabled.operation)
	|| is_set(sample_interval.operation)
	|| is_set(sample_time_remaining.operation);
}

std::string MplsLcacStandby::LinkSummary::BandwidthAccountSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-account-summary";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::LinkSummary::BandwidthAccountSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/link-summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (application_interval.is_set || is_set(application_interval.operation)) leaf_name_data.push_back(application_interval.get_name_leafdata());
    if (application_time_remaining.is_set || is_set(application_time_remaining.operation)) leaf_name_data.push_back(application_time_remaining.get_name_leafdata());
    if (is_bandwidth_account_enabled.is_set || is_set(is_bandwidth_account_enabled.operation)) leaf_name_data.push_back(is_bandwidth_account_enabled.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.operation)) leaf_name_data.push_back(sample_interval.get_name_leafdata());
    if (sample_time_remaining.is_set || is_set(sample_time_remaining.operation)) leaf_name_data.push_back(sample_time_remaining.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkSummary::BandwidthAccountSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::LinkSummary::BandwidthAccountSummary::get_children()
{
    return children;
}

void MplsLcacStandby::LinkSummary::BandwidthAccountSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "application-interval")
    {
        application_interval = value;
    }
    if(value_path == "application-time-remaining")
    {
        application_time_remaining = value;
    }
    if(value_path == "is-bandwidth-account-enabled")
    {
        is_bandwidth_account_enabled = value;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
    }
    if(value_path == "sample-time-remaining")
    {
        sample_time_remaining = value;
    }
}

MplsLcacStandby::LinkSummary::AreasSummary::AreasSummary()
    :
    area_id{YType::str, "area-id"},
    igp_neighbors{YType::uint16, "igp-neighbors"},
    is_flooded{YType::boolean, "is-flooded"},
    is_periodic_flooding_on{YType::boolean, "is-periodic-flooding-on"},
    links_flooded{YType::uint16, "links-flooded"},
    local_node_router_id{YType::str, "local-node-router-id"},
    periodic_flooding_interval{YType::uint16, "periodic-flooding-interval"},
    protocol{YType::enumeration, "protocol"},
    system_id{YType::str, "system-id"}
{
    yang_name = "areas-summary"; yang_parent_name = "link-summary";
}

MplsLcacStandby::LinkSummary::AreasSummary::~AreasSummary()
{
}

bool MplsLcacStandby::LinkSummary::AreasSummary::has_data() const
{
    return area_id.is_set
	|| igp_neighbors.is_set
	|| is_flooded.is_set
	|| is_periodic_flooding_on.is_set
	|| links_flooded.is_set
	|| local_node_router_id.is_set
	|| periodic_flooding_interval.is_set
	|| protocol.is_set
	|| system_id.is_set;
}

bool MplsLcacStandby::LinkSummary::AreasSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(area_id.operation)
	|| is_set(igp_neighbors.operation)
	|| is_set(is_flooded.operation)
	|| is_set(is_periodic_flooding_on.operation)
	|| is_set(links_flooded.operation)
	|| is_set(local_node_router_id.operation)
	|| is_set(periodic_flooding_interval.operation)
	|| is_set(protocol.operation)
	|| is_set(system_id.operation);
}

std::string MplsLcacStandby::LinkSummary::AreasSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "areas-summary";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::LinkSummary::AreasSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/link-summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (igp_neighbors.is_set || is_set(igp_neighbors.operation)) leaf_name_data.push_back(igp_neighbors.get_name_leafdata());
    if (is_flooded.is_set || is_set(is_flooded.operation)) leaf_name_data.push_back(is_flooded.get_name_leafdata());
    if (is_periodic_flooding_on.is_set || is_set(is_periodic_flooding_on.operation)) leaf_name_data.push_back(is_periodic_flooding_on.get_name_leafdata());
    if (links_flooded.is_set || is_set(links_flooded.operation)) leaf_name_data.push_back(links_flooded.get_name_leafdata());
    if (local_node_router_id.is_set || is_set(local_node_router_id.operation)) leaf_name_data.push_back(local_node_router_id.get_name_leafdata());
    if (periodic_flooding_interval.is_set || is_set(periodic_flooding_interval.operation)) leaf_name_data.push_back(periodic_flooding_interval.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (system_id.is_set || is_set(system_id.operation)) leaf_name_data.push_back(system_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkSummary::AreasSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::LinkSummary::AreasSummary::get_children()
{
    return children;
}

void MplsLcacStandby::LinkSummary::AreasSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "igp-neighbors")
    {
        igp_neighbors = value;
    }
    if(value_path == "is-flooded")
    {
        is_flooded = value;
    }
    if(value_path == "is-periodic-flooding-on")
    {
        is_periodic_flooding_on = value;
    }
    if(value_path == "links-flooded")
    {
        links_flooded = value;
    }
    if(value_path == "local-node-router-id")
    {
        local_node_router_id = value;
    }
    if(value_path == "periodic-flooding-interval")
    {
        periodic_flooding_interval = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "system-id")
    {
        system_id = value;
    }
}

MplsLcacStandby::LinkInformation::LinkInformation()
    :
    global(std::make_shared<MplsLcacStandby::LinkInformation::Global>())
	,links(std::make_shared<MplsLcacStandby::LinkInformation::Links>())
{
    global->parent = this;
    children["global"] = global;

    links->parent = this;
    children["links"] = links;

    yang_name = "link-information"; yang_parent_name = "mpls-lcac-standby";
}

MplsLcacStandby::LinkInformation::~LinkInformation()
{
}

bool MplsLcacStandby::LinkInformation::has_data() const
{
    return (global !=  nullptr && global->has_data())
	|| (links !=  nullptr && links->has_data());
}

bool MplsLcacStandby::LinkInformation::has_operation() const
{
    return is_set(operation)
	|| (global !=  nullptr && global->has_operation())
	|| (links !=  nullptr && links->has_operation());
}

std::string MplsLcacStandby::LinkInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-information";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::LinkInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "global")
    {
        if(global != nullptr)
        {
            children["global"] = global;
        }
        else
        {
            global = std::make_shared<MplsLcacStandby::LinkInformation::Global>();
            global->parent = this;
            children["global"] = global;
        }
        return children.at("global");
    }

    if(child_yang_name == "links")
    {
        if(links != nullptr)
        {
            children["links"] = links;
        }
        else
        {
            links = std::make_shared<MplsLcacStandby::LinkInformation::Links>();
            links->parent = this;
            children["links"] = links;
        }
        return children.at("links");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::LinkInformation::get_children()
{
    if(children.find("global") == children.end())
    {
        if(global != nullptr)
        {
            children["global"] = global;
        }
    }

    if(children.find("links") == children.end())
    {
        if(links != nullptr)
        {
            children["links"] = links;
        }
    }

    return children;
}

void MplsLcacStandby::LinkInformation::set_value(const std::string & value_path, std::string value)
{
}

MplsLcacStandby::LinkInformation::Global::Global()
    :
    is_role_standby{YType::boolean, "is-role-standby"},
    links{YType::uint16, "links"},
    maximum_links{YType::uint16, "maximum-links"}
{
    yang_name = "global"; yang_parent_name = "link-information";
}

MplsLcacStandby::LinkInformation::Global::~Global()
{
}

bool MplsLcacStandby::LinkInformation::Global::has_data() const
{
    return is_role_standby.is_set
	|| links.is_set
	|| maximum_links.is_set;
}

bool MplsLcacStandby::LinkInformation::Global::has_operation() const
{
    return is_set(operation)
	|| is_set(is_role_standby.operation)
	|| is_set(links.operation)
	|| is_set(maximum_links.operation);
}

std::string MplsLcacStandby::LinkInformation::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::LinkInformation::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/link-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_role_standby.is_set || is_set(is_role_standby.operation)) leaf_name_data.push_back(is_role_standby.get_name_leafdata());
    if (links.is_set || is_set(links.operation)) leaf_name_data.push_back(links.get_name_leafdata());
    if (maximum_links.is_set || is_set(maximum_links.operation)) leaf_name_data.push_back(maximum_links.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::LinkInformation::Global::get_children()
{
    return children;
}

void MplsLcacStandby::LinkInformation::Global::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-role-standby")
    {
        is_role_standby = value;
    }
    if(value_path == "links")
    {
        links = value;
    }
    if(value_path == "maximum-links")
    {
        maximum_links = value;
    }
}

MplsLcacStandby::LinkInformation::Links::Links()
{
    yang_name = "links"; yang_parent_name = "link-information";
}

MplsLcacStandby::LinkInformation::Links::~Links()
{
}

bool MplsLcacStandby::LinkInformation::Links::has_data() const
{
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcacStandby::LinkInformation::Links::has_operation() const
{
    for (std::size_t index=0; index<link.size(); index++)
    {
        if(link[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLcacStandby::LinkInformation::Links::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "links";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::LinkInformation::Links::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/link-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "link")
    {
        for(auto const & c : link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link>();
        c->parent = this;
        link.push_back(std::move(c));
        children[segment_path] = link.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::LinkInformation::Links::get_children()
{
    for (auto const & c : link)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLcacStandby::LinkInformation::Links::set_value(const std::string & value_path, std::string value)
{
}

MplsLcacStandby::LinkInformation::Links::Link::Link()
    :
    interface_name{YType::str, "interface-name"},
    is_attribute_incomplete{YType::boolean, "is-attribute-incomplete"},
    is_name_based_attribute{YType::boolean, "is-name-based-attribute"},
    is_te_metric_valid{YType::boolean, "is-te-metric-valid"},
    link_attributes{YType::uint32, "link-attributes"},
    link_extended_attribute{YType::uint32, "link-extended-attribute"},
    link_forwad_ref_value{YType::uint32, "link-forwad-ref-value"},
    maximum_reservation_bandwidth_mam{YType::uint64, "maximum-reservation-bandwidth-mam"},
    maximum_reservation_bandwidth_rdm{YType::uint64, "maximum-reservation-bandwidth-rdm"},
    reason_not_flooded{YType::str, "reason-not-flooded"},
    reservable_pool0_bandwidth_mam{YType::uint64, "reservable-pool0-bandwidth-mam"},
    reservable_pool0_bandwidth_rdm{YType::uint64, "reservable-pool0-bandwidth-rdm"},
    reservable_pool1_bandwidth_mam{YType::uint64, "reservable-pool1-bandwidth-mam"},
    reservable_pool1_bandwidth_rdm{YType::uint64, "reservable-pool1-bandwidth-rdm"},
    te_metric{YType::uint32, "te-metric"}
    	,
    bandwidth_account(std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount>())
	,hw_oor(std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::HwOor>())
	,link_common(std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::LinkCommon>())
{
    bandwidth_account->parent = this;
    children["bandwidth-account"] = bandwidth_account;

    hw_oor->parent = this;
    children["hw-oor"] = hw_oor;

    link_common->parent = this;
    children["link-common"] = link_common;

    yang_name = "link"; yang_parent_name = "links";
}

MplsLcacStandby::LinkInformation::Links::Link::~Link()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::has_data() const
{
    for (std::size_t index=0; index<affinity_map.size(); index++)
    {
        if(affinity_map[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<areas.size(); index++)
    {
        if(areas[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<lockout.size(); index++)
    {
        if(lockout[index]->has_data())
            return true;
    }
    for (auto const & leaf : link_extended_attribute.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : link_forwad_ref_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return interface_name.is_set
	|| is_attribute_incomplete.is_set
	|| is_name_based_attribute.is_set
	|| is_te_metric_valid.is_set
	|| link_attributes.is_set
	|| maximum_reservation_bandwidth_mam.is_set
	|| maximum_reservation_bandwidth_rdm.is_set
	|| reason_not_flooded.is_set
	|| reservable_pool0_bandwidth_mam.is_set
	|| reservable_pool0_bandwidth_rdm.is_set
	|| reservable_pool1_bandwidth_mam.is_set
	|| reservable_pool1_bandwidth_rdm.is_set
	|| te_metric.is_set
	|| (bandwidth_account !=  nullptr && bandwidth_account->has_data())
	|| (hw_oor !=  nullptr && hw_oor->has_data())
	|| (link_common !=  nullptr && link_common->has_data());
}

bool MplsLcacStandby::LinkInformation::Links::Link::has_operation() const
{
    for (std::size_t index=0; index<affinity_map.size(); index++)
    {
        if(affinity_map[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<areas.size(); index++)
    {
        if(areas[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<lockout.size(); index++)
    {
        if(lockout[index]->has_operation())
            return true;
    }
    for (auto const & leaf : link_extended_attribute.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : link_forwad_ref_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(is_attribute_incomplete.operation)
	|| is_set(is_name_based_attribute.operation)
	|| is_set(is_te_metric_valid.operation)
	|| is_set(link_attributes.operation)
	|| is_set(link_extended_attribute.operation)
	|| is_set(link_forwad_ref_value.operation)
	|| is_set(maximum_reservation_bandwidth_mam.operation)
	|| is_set(maximum_reservation_bandwidth_rdm.operation)
	|| is_set(reason_not_flooded.operation)
	|| is_set(reservable_pool0_bandwidth_mam.operation)
	|| is_set(reservable_pool0_bandwidth_rdm.operation)
	|| is_set(reservable_pool1_bandwidth_mam.operation)
	|| is_set(reservable_pool1_bandwidth_rdm.operation)
	|| is_set(te_metric.operation)
	|| (bandwidth_account !=  nullptr && bandwidth_account->has_operation())
	|| (hw_oor !=  nullptr && hw_oor->has_operation())
	|| (link_common !=  nullptr && link_common->has_operation());
}

std::string MplsLcacStandby::LinkInformation::Links::Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::LinkInformation::Links::Link::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/link-information/links/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_attribute_incomplete.is_set || is_set(is_attribute_incomplete.operation)) leaf_name_data.push_back(is_attribute_incomplete.get_name_leafdata());
    if (is_name_based_attribute.is_set || is_set(is_name_based_attribute.operation)) leaf_name_data.push_back(is_name_based_attribute.get_name_leafdata());
    if (is_te_metric_valid.is_set || is_set(is_te_metric_valid.operation)) leaf_name_data.push_back(is_te_metric_valid.get_name_leafdata());
    if (link_attributes.is_set || is_set(link_attributes.operation)) leaf_name_data.push_back(link_attributes.get_name_leafdata());
    if (maximum_reservation_bandwidth_mam.is_set || is_set(maximum_reservation_bandwidth_mam.operation)) leaf_name_data.push_back(maximum_reservation_bandwidth_mam.get_name_leafdata());
    if (maximum_reservation_bandwidth_rdm.is_set || is_set(maximum_reservation_bandwidth_rdm.operation)) leaf_name_data.push_back(maximum_reservation_bandwidth_rdm.get_name_leafdata());
    if (reason_not_flooded.is_set || is_set(reason_not_flooded.operation)) leaf_name_data.push_back(reason_not_flooded.get_name_leafdata());
    if (reservable_pool0_bandwidth_mam.is_set || is_set(reservable_pool0_bandwidth_mam.operation)) leaf_name_data.push_back(reservable_pool0_bandwidth_mam.get_name_leafdata());
    if (reservable_pool0_bandwidth_rdm.is_set || is_set(reservable_pool0_bandwidth_rdm.operation)) leaf_name_data.push_back(reservable_pool0_bandwidth_rdm.get_name_leafdata());
    if (reservable_pool1_bandwidth_mam.is_set || is_set(reservable_pool1_bandwidth_mam.operation)) leaf_name_data.push_back(reservable_pool1_bandwidth_mam.get_name_leafdata());
    if (reservable_pool1_bandwidth_rdm.is_set || is_set(reservable_pool1_bandwidth_rdm.operation)) leaf_name_data.push_back(reservable_pool1_bandwidth_rdm.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.operation)) leaf_name_data.push_back(te_metric.get_name_leafdata());

    auto link_extended_attribute_name_datas = link_extended_attribute.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), link_extended_attribute_name_datas.begin(), link_extended_attribute_name_datas.end());
    auto link_forwad_ref_value_name_datas = link_forwad_ref_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), link_forwad_ref_value_name_datas.begin(), link_forwad_ref_value_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "affinity-map")
    {
        for(auto const & c : affinity_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::AffinityMap>();
        c->parent = this;
        affinity_map.push_back(std::move(c));
        children[segment_path] = affinity_map.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "areas")
    {
        for(auto const & c : areas)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::Areas>();
        c->parent = this;
        areas.push_back(std::move(c));
        children[segment_path] = areas.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "bandwidth-account")
    {
        if(bandwidth_account != nullptr)
        {
            children["bandwidth-account"] = bandwidth_account;
        }
        else
        {
            bandwidth_account = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount>();
            bandwidth_account->parent = this;
            children["bandwidth-account"] = bandwidth_account;
        }
        return children.at("bandwidth-account");
    }

    if(child_yang_name == "hw-oor")
    {
        if(hw_oor != nullptr)
        {
            children["hw-oor"] = hw_oor;
        }
        else
        {
            hw_oor = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::HwOor>();
            hw_oor->parent = this;
            children["hw-oor"] = hw_oor;
        }
        return children.at("hw-oor");
    }

    if(child_yang_name == "link-common")
    {
        if(link_common != nullptr)
        {
            children["link-common"] = link_common;
        }
        else
        {
            link_common = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::LinkCommon>();
            link_common->parent = this;
            children["link-common"] = link_common;
        }
        return children.at("link-common");
    }

    if(child_yang_name == "lockout")
    {
        for(auto const & c : lockout)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::Lockout>();
        c->parent = this;
        lockout.push_back(std::move(c));
        children[segment_path] = lockout.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::LinkInformation::Links::Link::get_children()
{
    for (auto const & c : affinity_map)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : areas)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("bandwidth-account") == children.end())
    {
        if(bandwidth_account != nullptr)
        {
            children["bandwidth-account"] = bandwidth_account;
        }
    }

    if(children.find("hw-oor") == children.end())
    {
        if(hw_oor != nullptr)
        {
            children["hw-oor"] = hw_oor;
        }
    }

    if(children.find("link-common") == children.end())
    {
        if(link_common != nullptr)
        {
            children["link-common"] = link_common;
        }
    }

    for (auto const & c : lockout)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "is-attribute-incomplete")
    {
        is_attribute_incomplete = value;
    }
    if(value_path == "is-name-based-attribute")
    {
        is_name_based_attribute = value;
    }
    if(value_path == "is-te-metric-valid")
    {
        is_te_metric_valid = value;
    }
    if(value_path == "link-attributes")
    {
        link_attributes = value;
    }
    if(value_path == "link-extended-attribute")
    {
        link_extended_attribute.append(value);
    }
    if(value_path == "link-forwad-ref-value")
    {
        link_forwad_ref_value.append(value);
    }
    if(value_path == "maximum-reservation-bandwidth-mam")
    {
        maximum_reservation_bandwidth_mam = value;
    }
    if(value_path == "maximum-reservation-bandwidth-rdm")
    {
        maximum_reservation_bandwidth_rdm = value;
    }
    if(value_path == "reason-not-flooded")
    {
        reason_not_flooded = value;
    }
    if(value_path == "reservable-pool0-bandwidth-mam")
    {
        reservable_pool0_bandwidth_mam = value;
    }
    if(value_path == "reservable-pool0-bandwidth-rdm")
    {
        reservable_pool0_bandwidth_rdm = value;
    }
    if(value_path == "reservable-pool1-bandwidth-mam")
    {
        reservable_pool1_bandwidth_mam = value;
    }
    if(value_path == "reservable-pool1-bandwidth-rdm")
    {
        reservable_pool1_bandwidth_rdm = value;
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
    }
}

MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::LinkCommon()
    :
    bandwidth_units{YType::enumeration, "bandwidth-units"},
    bcm_id{YType::uint16, "bcm-id"},
    capability{YType::uint32, "capability"},
    has_protection{YType::boolean, "has-protection"},
    igp_neighbors{YType::uint16, "igp-neighbors"},
    inbound_admission_method{YType::enumeration, "inbound-admission-method"},
    incoming_reservable_bandwidth_percentage{YType::uint8, "incoming-reservable-bandwidth-percentage"},
    incoming_reservable_pool0_bandwidth_percentage{YType::uint8, "incoming-reservable-pool0-bandwidth-percentage"},
    incoming_reservable_pool1_bandwidth_percentage{YType::uint8, "incoming-reservable-pool1-bandwidth-percentage"},
    is_resource_provider_installed{YType::boolean, "is-resource-provider-installed"},
    is_unnumbered{YType::boolean, "is-unnumbered"},
    last_flooded_effective_maximum_reservable_bandwidth{YType::uint64, "last-flooded-effective-maximum-reservable-bandwidth"},
    link_address{YType::str, "link-address"},
    link_id{YType::str, "link-id"},
    maximum_reservable_bandwidth{YType::uint64, "maximum-reservable-bandwidth"},
    maximum_reservable_pool0_bandwidth{YType::uint64, "maximum-reservable-pool0-bandwidth"},
    maximum_reservable_pool1_bandwidth{YType::uint64, "maximum-reservable-pool1-bandwidth"},
    outbound_admission_method{YType::enumeration, "outbound-admission-method"},
    outgoing_reservable_bandwidth_percentage{YType::uint8, "outgoing-reservable-bandwidth-percentage"},
    outgoing_reservable_pool0_bandwidth_percentage{YType::uint8, "outgoing-reservable-pool0-bandwidth-percentage"},
    outgoing_reservable_pool1_bandwidth_percentage{YType::uint8, "outgoing-reservable-pool1-bandwidth-percentage"},
    physical_bandwidth{YType::uint64, "physical-bandwidth"},
    resource_provider{YType::enumeration, "resource-provider"},
    working_priority{YType::uint32, "working-priority"}
    	,
    link_flags(std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::LinkFlags>())
{
    link_flags->parent = this;
    children["link-flags"] = link_flags;

    yang_name = "link-common"; yang_parent_name = "link";
}

MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::~LinkCommon()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::has_data() const
{
    for (std::size_t index=0; index<flooded_areas.size(); index++)
    {
        if(flooded_areas[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<interface_switching_capability_descriptor.size(); index++)
    {
        if(interface_switching_capability_descriptor[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_data())
            return true;
    }
    return bandwidth_units.is_set
	|| bcm_id.is_set
	|| capability.is_set
	|| has_protection.is_set
	|| igp_neighbors.is_set
	|| inbound_admission_method.is_set
	|| incoming_reservable_bandwidth_percentage.is_set
	|| incoming_reservable_pool0_bandwidth_percentage.is_set
	|| incoming_reservable_pool1_bandwidth_percentage.is_set
	|| is_resource_provider_installed.is_set
	|| is_unnumbered.is_set
	|| last_flooded_effective_maximum_reservable_bandwidth.is_set
	|| link_address.is_set
	|| link_id.is_set
	|| maximum_reservable_bandwidth.is_set
	|| maximum_reservable_pool0_bandwidth.is_set
	|| maximum_reservable_pool1_bandwidth.is_set
	|| outbound_admission_method.is_set
	|| outgoing_reservable_bandwidth_percentage.is_set
	|| outgoing_reservable_pool0_bandwidth_percentage.is_set
	|| outgoing_reservable_pool1_bandwidth_percentage.is_set
	|| physical_bandwidth.is_set
	|| resource_provider.is_set
	|| working_priority.is_set
	|| (link_flags !=  nullptr && link_flags->has_data());
}

bool MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::has_operation() const
{
    for (std::size_t index=0; index<flooded_areas.size(); index++)
    {
        if(flooded_areas[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<interface_switching_capability_descriptor.size(); index++)
    {
        if(interface_switching_capability_descriptor[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(bandwidth_units.operation)
	|| is_set(bcm_id.operation)
	|| is_set(capability.operation)
	|| is_set(has_protection.operation)
	|| is_set(igp_neighbors.operation)
	|| is_set(inbound_admission_method.operation)
	|| is_set(incoming_reservable_bandwidth_percentage.operation)
	|| is_set(incoming_reservable_pool0_bandwidth_percentage.operation)
	|| is_set(incoming_reservable_pool1_bandwidth_percentage.operation)
	|| is_set(is_resource_provider_installed.operation)
	|| is_set(is_unnumbered.operation)
	|| is_set(last_flooded_effective_maximum_reservable_bandwidth.operation)
	|| is_set(link_address.operation)
	|| is_set(link_id.operation)
	|| is_set(maximum_reservable_bandwidth.operation)
	|| is_set(maximum_reservable_pool0_bandwidth.operation)
	|| is_set(maximum_reservable_pool1_bandwidth.operation)
	|| is_set(outbound_admission_method.operation)
	|| is_set(outgoing_reservable_bandwidth_percentage.operation)
	|| is_set(outgoing_reservable_pool0_bandwidth_percentage.operation)
	|| is_set(outgoing_reservable_pool1_bandwidth_percentage.operation)
	|| is_set(physical_bandwidth.operation)
	|| is_set(resource_provider.operation)
	|| is_set(working_priority.operation)
	|| (link_flags !=  nullptr && link_flags->has_operation());
}

std::string MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-common";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkCommon' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_units.is_set || is_set(bandwidth_units.operation)) leaf_name_data.push_back(bandwidth_units.get_name_leafdata());
    if (bcm_id.is_set || is_set(bcm_id.operation)) leaf_name_data.push_back(bcm_id.get_name_leafdata());
    if (capability.is_set || is_set(capability.operation)) leaf_name_data.push_back(capability.get_name_leafdata());
    if (has_protection.is_set || is_set(has_protection.operation)) leaf_name_data.push_back(has_protection.get_name_leafdata());
    if (igp_neighbors.is_set || is_set(igp_neighbors.operation)) leaf_name_data.push_back(igp_neighbors.get_name_leafdata());
    if (inbound_admission_method.is_set || is_set(inbound_admission_method.operation)) leaf_name_data.push_back(inbound_admission_method.get_name_leafdata());
    if (incoming_reservable_bandwidth_percentage.is_set || is_set(incoming_reservable_bandwidth_percentage.operation)) leaf_name_data.push_back(incoming_reservable_bandwidth_percentage.get_name_leafdata());
    if (incoming_reservable_pool0_bandwidth_percentage.is_set || is_set(incoming_reservable_pool0_bandwidth_percentage.operation)) leaf_name_data.push_back(incoming_reservable_pool0_bandwidth_percentage.get_name_leafdata());
    if (incoming_reservable_pool1_bandwidth_percentage.is_set || is_set(incoming_reservable_pool1_bandwidth_percentage.operation)) leaf_name_data.push_back(incoming_reservable_pool1_bandwidth_percentage.get_name_leafdata());
    if (is_resource_provider_installed.is_set || is_set(is_resource_provider_installed.operation)) leaf_name_data.push_back(is_resource_provider_installed.get_name_leafdata());
    if (is_unnumbered.is_set || is_set(is_unnumbered.operation)) leaf_name_data.push_back(is_unnumbered.get_name_leafdata());
    if (last_flooded_effective_maximum_reservable_bandwidth.is_set || is_set(last_flooded_effective_maximum_reservable_bandwidth.operation)) leaf_name_data.push_back(last_flooded_effective_maximum_reservable_bandwidth.get_name_leafdata());
    if (link_address.is_set || is_set(link_address.operation)) leaf_name_data.push_back(link_address.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.operation)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (maximum_reservable_bandwidth.is_set || is_set(maximum_reservable_bandwidth.operation)) leaf_name_data.push_back(maximum_reservable_bandwidth.get_name_leafdata());
    if (maximum_reservable_pool0_bandwidth.is_set || is_set(maximum_reservable_pool0_bandwidth.operation)) leaf_name_data.push_back(maximum_reservable_pool0_bandwidth.get_name_leafdata());
    if (maximum_reservable_pool1_bandwidth.is_set || is_set(maximum_reservable_pool1_bandwidth.operation)) leaf_name_data.push_back(maximum_reservable_pool1_bandwidth.get_name_leafdata());
    if (outbound_admission_method.is_set || is_set(outbound_admission_method.operation)) leaf_name_data.push_back(outbound_admission_method.get_name_leafdata());
    if (outgoing_reservable_bandwidth_percentage.is_set || is_set(outgoing_reservable_bandwidth_percentage.operation)) leaf_name_data.push_back(outgoing_reservable_bandwidth_percentage.get_name_leafdata());
    if (outgoing_reservable_pool0_bandwidth_percentage.is_set || is_set(outgoing_reservable_pool0_bandwidth_percentage.operation)) leaf_name_data.push_back(outgoing_reservable_pool0_bandwidth_percentage.get_name_leafdata());
    if (outgoing_reservable_pool1_bandwidth_percentage.is_set || is_set(outgoing_reservable_pool1_bandwidth_percentage.operation)) leaf_name_data.push_back(outgoing_reservable_pool1_bandwidth_percentage.get_name_leafdata());
    if (physical_bandwidth.is_set || is_set(physical_bandwidth.operation)) leaf_name_data.push_back(physical_bandwidth.get_name_leafdata());
    if (resource_provider.is_set || is_set(resource_provider.operation)) leaf_name_data.push_back(resource_provider.get_name_leafdata());
    if (working_priority.is_set || is_set(working_priority.operation)) leaf_name_data.push_back(working_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flooded-areas")
    {
        for(auto const & c : flooded_areas)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::FloodedAreas>();
        c->parent = this;
        flooded_areas.push_back(std::move(c));
        children[segment_path] = flooded_areas.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-switching-capability-descriptor")
    {
        for(auto const & c : interface_switching_capability_descriptor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor>();
        c->parent = this;
        interface_switching_capability_descriptor.push_back(std::move(c));
        children[segment_path] = interface_switching_capability_descriptor.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "link-flags")
    {
        if(link_flags != nullptr)
        {
            children["link-flags"] = link_flags;
        }
        else
        {
            link_flags = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::LinkFlags>();
            link_flags->parent = this;
            children["link-flags"] = link_flags;
        }
        return children.at("link-flags");
    }

    if(child_yang_name == "shared-risk-link-group")
    {
        for(auto const & c : shared_risk_link_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup>();
        c->parent = this;
        shared_risk_link_group.push_back(std::move(c));
        children[segment_path] = shared_risk_link_group.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::get_children()
{
    for (auto const & c : flooded_areas)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : interface_switching_capability_descriptor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("link-flags") == children.end())
    {
        if(link_flags != nullptr)
        {
            children["link-flags"] = link_flags;
        }
    }

    for (auto const & c : shared_risk_link_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth-units")
    {
        bandwidth_units = value;
    }
    if(value_path == "bcm-id")
    {
        bcm_id = value;
    }
    if(value_path == "capability")
    {
        capability = value;
    }
    if(value_path == "has-protection")
    {
        has_protection = value;
    }
    if(value_path == "igp-neighbors")
    {
        igp_neighbors = value;
    }
    if(value_path == "inbound-admission-method")
    {
        inbound_admission_method = value;
    }
    if(value_path == "incoming-reservable-bandwidth-percentage")
    {
        incoming_reservable_bandwidth_percentage = value;
    }
    if(value_path == "incoming-reservable-pool0-bandwidth-percentage")
    {
        incoming_reservable_pool0_bandwidth_percentage = value;
    }
    if(value_path == "incoming-reservable-pool1-bandwidth-percentage")
    {
        incoming_reservable_pool1_bandwidth_percentage = value;
    }
    if(value_path == "is-resource-provider-installed")
    {
        is_resource_provider_installed = value;
    }
    if(value_path == "is-unnumbered")
    {
        is_unnumbered = value;
    }
    if(value_path == "last-flooded-effective-maximum-reservable-bandwidth")
    {
        last_flooded_effective_maximum_reservable_bandwidth = value;
    }
    if(value_path == "link-address")
    {
        link_address = value;
    }
    if(value_path == "link-id")
    {
        link_id = value;
    }
    if(value_path == "maximum-reservable-bandwidth")
    {
        maximum_reservable_bandwidth = value;
    }
    if(value_path == "maximum-reservable-pool0-bandwidth")
    {
        maximum_reservable_pool0_bandwidth = value;
    }
    if(value_path == "maximum-reservable-pool1-bandwidth")
    {
        maximum_reservable_pool1_bandwidth = value;
    }
    if(value_path == "outbound-admission-method")
    {
        outbound_admission_method = value;
    }
    if(value_path == "outgoing-reservable-bandwidth-percentage")
    {
        outgoing_reservable_bandwidth_percentage = value;
    }
    if(value_path == "outgoing-reservable-pool0-bandwidth-percentage")
    {
        outgoing_reservable_pool0_bandwidth_percentage = value;
    }
    if(value_path == "outgoing-reservable-pool1-bandwidth-percentage")
    {
        outgoing_reservable_pool1_bandwidth_percentage = value;
    }
    if(value_path == "physical-bandwidth")
    {
        physical_bandwidth = value;
    }
    if(value_path == "resource-provider")
    {
        resource_provider = value;
    }
    if(value_path == "working-priority")
    {
        working_priority = value;
    }
}

MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::LinkFlags::LinkFlags()
    :
    is_admin_up{YType::boolean, "is-admin-up"},
    is_mpls_te_on{YType::boolean, "is-mpls-te-on"},
    signaling_agent{YType::enumeration, "signaling-agent"}
{
    yang_name = "link-flags"; yang_parent_name = "link-common";
}

MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::LinkFlags::~LinkFlags()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::LinkFlags::has_data() const
{
    return is_admin_up.is_set
	|| is_mpls_te_on.is_set
	|| signaling_agent.is_set;
}

bool MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::LinkFlags::has_operation() const
{
    return is_set(operation)
	|| is_set(is_admin_up.operation)
	|| is_set(is_mpls_te_on.operation)
	|| is_set(signaling_agent.operation);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::LinkFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-flags";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::LinkFlags::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkFlags' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_admin_up.is_set || is_set(is_admin_up.operation)) leaf_name_data.push_back(is_admin_up.get_name_leafdata());
    if (is_mpls_te_on.is_set || is_set(is_mpls_te_on.operation)) leaf_name_data.push_back(is_mpls_te_on.get_name_leafdata());
    if (signaling_agent.is_set || is_set(signaling_agent.operation)) leaf_name_data.push_back(signaling_agent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::LinkFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::LinkFlags::get_children()
{
    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::LinkFlags::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-admin-up")
    {
        is_admin_up = value;
    }
    if(value_path == "is-mpls-te-on")
    {
        is_mpls_te_on = value;
    }
    if(value_path == "signaling-agent")
    {
        signaling_agent = value;
    }
}

MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::SharedRiskLinkGroup()
    :
    shared_risk_group{YType::uint32, "shared-risk-group"},
    srlg_name{YType::str, "srlg-name"}
{
    yang_name = "shared-risk-link-group"; yang_parent_name = "link-common";
}

MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::~SharedRiskLinkGroup()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::has_data() const
{
    return shared_risk_group.is_set
	|| srlg_name.is_set;
}

bool MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(shared_risk_group.operation)
	|| is_set(srlg_name.operation);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-risk-link-group";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SharedRiskLinkGroup' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shared_risk_group.is_set || is_set(shared_risk_group.operation)) leaf_name_data.push_back(shared_risk_group.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.operation)) leaf_name_data.push_back(srlg_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::get_children()
{
    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::SharedRiskLinkGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "shared-risk-group")
    {
        shared_risk_group = value;
    }
    if(value_path == "srlg-name")
    {
        srlg_name = value;
    }
}

MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::InterfaceSwitchingCapabilityDescriptor()
    :
    encoding{YType::uint8, "encoding"},
    key{YType::uint8, "key"},
    switching_capability{YType::uint8, "switching-capability"}
{
    yang_name = "interface-switching-capability-descriptor"; yang_parent_name = "link-common";
}

MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::~InterfaceSwitchingCapabilityDescriptor()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::has_data() const
{
    return encoding.is_set
	|| key.is_set
	|| switching_capability.is_set;
}

bool MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::has_operation() const
{
    return is_set(operation)
	|| is_set(encoding.operation)
	|| is_set(key.operation)
	|| is_set(switching_capability.operation);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-switching-capability-descriptor";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceSwitchingCapabilityDescriptor' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encoding.is_set || is_set(encoding.operation)) leaf_name_data.push_back(encoding.get_name_leafdata());
    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());
    if (switching_capability.is_set || is_set(switching_capability.operation)) leaf_name_data.push_back(switching_capability.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::get_children()
{
    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::InterfaceSwitchingCapabilityDescriptor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encoding")
    {
        encoding = value;
    }
    if(value_path == "key")
    {
        key = value;
    }
    if(value_path == "switching-capability")
    {
        switching_capability = value;
    }
}

MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::FloodedAreas::FloodedAreas()
    :
    flooded_area{YType::str, "flooded-area"}
{
    yang_name = "flooded-areas"; yang_parent_name = "link-common";
}

MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::FloodedAreas::~FloodedAreas()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::FloodedAreas::has_data() const
{
    return flooded_area.is_set;
}

bool MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::FloodedAreas::has_operation() const
{
    return is_set(operation)
	|| is_set(flooded_area.operation);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::FloodedAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooded-areas";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::FloodedAreas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FloodedAreas' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flooded_area.is_set || is_set(flooded_area.operation)) leaf_name_data.push_back(flooded_area.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::FloodedAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::FloodedAreas::get_children()
{
    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::LinkCommon::FloodedAreas::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flooded-area")
    {
        flooded_area = value;
    }
}

MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccount()
    :
    bandwidth_account_common_info(std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo>())
	,bandwidth_sample_history(std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory>())
{
    bandwidth_account_common_info->parent = this;
    children["bandwidth-account-common-info"] = bandwidth_account_common_info;

    bandwidth_sample_history->parent = this;
    children["bandwidth-sample-history"] = bandwidth_sample_history;

    yang_name = "bandwidth-account"; yang_parent_name = "link";
}

MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::~BandwidthAccount()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::has_data() const
{
    return (bandwidth_account_common_info !=  nullptr && bandwidth_account_common_info->has_data())
	|| (bandwidth_sample_history !=  nullptr && bandwidth_sample_history->has_data());
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::has_operation() const
{
    return is_set(operation)
	|| (bandwidth_account_common_info !=  nullptr && bandwidth_account_common_info->has_operation())
	|| (bandwidth_sample_history !=  nullptr && bandwidth_sample_history->has_operation());
}

std::string MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-account";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BandwidthAccount' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bandwidth-account-common-info")
    {
        if(bandwidth_account_common_info != nullptr)
        {
            children["bandwidth-account-common-info"] = bandwidth_account_common_info;
        }
        else
        {
            bandwidth_account_common_info = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo>();
            bandwidth_account_common_info->parent = this;
            children["bandwidth-account-common-info"] = bandwidth_account_common_info;
        }
        return children.at("bandwidth-account-common-info");
    }

    if(child_yang_name == "bandwidth-sample-history")
    {
        if(bandwidth_sample_history != nullptr)
        {
            children["bandwidth-sample-history"] = bandwidth_sample_history;
        }
        else
        {
            bandwidth_sample_history = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory>();
            bandwidth_sample_history->parent = this;
            children["bandwidth-sample-history"] = bandwidth_sample_history;
        }
        return children.at("bandwidth-sample-history");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::get_children()
{
    if(children.find("bandwidth-account-common-info") == children.end())
    {
        if(bandwidth_account_common_info != nullptr)
        {
            children["bandwidth-account-common-info"] = bandwidth_account_common_info;
        }
    }

    if(children.find("bandwidth-sample-history") == children.end())
    {
        if(bandwidth_sample_history != nullptr)
        {
            children["bandwidth-sample-history"] = bandwidth_sample_history;
        }
    }

    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::set_value(const std::string & value_path, std::string value)
{
}

MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::BandwidthAccountCommonInfo()
    :
    adjustment_factor{YType::uint32, "adjustment-factor"},
    application_enabled{YType::boolean, "application-enabled"},
    application_interval{YType::uint32, "application-interval"},
    application_time_remaining{YType::uint32, "application-time-remaining"},
    collection_type{YType::enumeration, "collection-type"},
    down_threshold_max_reservable_bandwidth{YType::uint8, "down-threshold-max-reservable-bandwidth"},
    is_bandwidth_account_enabled{YType::boolean, "is-bandwidth-account-enabled"},
    last_application_timestamp{YType::uint32, "last-application-timestamp"},
    last_sample_collection_timestamp{YType::uint32, "last-sample-collection-timestamp"},
    max_reservable_bandwidth_threshold_are_default{YType::boolean, "max-reservable-bandwidth-threshold-are-default"},
    next_application{YType::uint32, "next-application"},
    next_sample_collection{YType::uint32, "next-sample-collection"},
    sample_interval{YType::uint32, "sample-interval"},
    sample_time_remaining{YType::uint32, "sample-time-remaining"},
    up_threshold_max_reservable_bandwidth{YType::uint8, "up-threshold-max-reservable-bandwidth"}
    	,
    bandwidth_utilization(std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::BandwidthUtilization>())
{
    bandwidth_utilization->parent = this;
    children["bandwidth-utilization"] = bandwidth_utilization;

    yang_name = "bandwidth-account-common-info"; yang_parent_name = "bandwidth-account";
}

MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::~BandwidthAccountCommonInfo()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::has_data() const
{
    return adjustment_factor.is_set
	|| application_enabled.is_set
	|| application_interval.is_set
	|| application_time_remaining.is_set
	|| collection_type.is_set
	|| down_threshold_max_reservable_bandwidth.is_set
	|| is_bandwidth_account_enabled.is_set
	|| last_application_timestamp.is_set
	|| last_sample_collection_timestamp.is_set
	|| max_reservable_bandwidth_threshold_are_default.is_set
	|| next_application.is_set
	|| next_sample_collection.is_set
	|| sample_interval.is_set
	|| sample_time_remaining.is_set
	|| up_threshold_max_reservable_bandwidth.is_set
	|| (bandwidth_utilization !=  nullptr && bandwidth_utilization->has_data());
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(adjustment_factor.operation)
	|| is_set(application_enabled.operation)
	|| is_set(application_interval.operation)
	|| is_set(application_time_remaining.operation)
	|| is_set(collection_type.operation)
	|| is_set(down_threshold_max_reservable_bandwidth.operation)
	|| is_set(is_bandwidth_account_enabled.operation)
	|| is_set(last_application_timestamp.operation)
	|| is_set(last_sample_collection_timestamp.operation)
	|| is_set(max_reservable_bandwidth_threshold_are_default.operation)
	|| is_set(next_application.operation)
	|| is_set(next_sample_collection.operation)
	|| is_set(sample_interval.operation)
	|| is_set(sample_time_remaining.operation)
	|| is_set(up_threshold_max_reservable_bandwidth.operation)
	|| (bandwidth_utilization !=  nullptr && bandwidth_utilization->has_operation());
}

std::string MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-account-common-info";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BandwidthAccountCommonInfo' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjustment_factor.is_set || is_set(adjustment_factor.operation)) leaf_name_data.push_back(adjustment_factor.get_name_leafdata());
    if (application_enabled.is_set || is_set(application_enabled.operation)) leaf_name_data.push_back(application_enabled.get_name_leafdata());
    if (application_interval.is_set || is_set(application_interval.operation)) leaf_name_data.push_back(application_interval.get_name_leafdata());
    if (application_time_remaining.is_set || is_set(application_time_remaining.operation)) leaf_name_data.push_back(application_time_remaining.get_name_leafdata());
    if (collection_type.is_set || is_set(collection_type.operation)) leaf_name_data.push_back(collection_type.get_name_leafdata());
    if (down_threshold_max_reservable_bandwidth.is_set || is_set(down_threshold_max_reservable_bandwidth.operation)) leaf_name_data.push_back(down_threshold_max_reservable_bandwidth.get_name_leafdata());
    if (is_bandwidth_account_enabled.is_set || is_set(is_bandwidth_account_enabled.operation)) leaf_name_data.push_back(is_bandwidth_account_enabled.get_name_leafdata());
    if (last_application_timestamp.is_set || is_set(last_application_timestamp.operation)) leaf_name_data.push_back(last_application_timestamp.get_name_leafdata());
    if (last_sample_collection_timestamp.is_set || is_set(last_sample_collection_timestamp.operation)) leaf_name_data.push_back(last_sample_collection_timestamp.get_name_leafdata());
    if (max_reservable_bandwidth_threshold_are_default.is_set || is_set(max_reservable_bandwidth_threshold_are_default.operation)) leaf_name_data.push_back(max_reservable_bandwidth_threshold_are_default.get_name_leafdata());
    if (next_application.is_set || is_set(next_application.operation)) leaf_name_data.push_back(next_application.get_name_leafdata());
    if (next_sample_collection.is_set || is_set(next_sample_collection.operation)) leaf_name_data.push_back(next_sample_collection.get_name_leafdata());
    if (sample_interval.is_set || is_set(sample_interval.operation)) leaf_name_data.push_back(sample_interval.get_name_leafdata());
    if (sample_time_remaining.is_set || is_set(sample_time_remaining.operation)) leaf_name_data.push_back(sample_time_remaining.get_name_leafdata());
    if (up_threshold_max_reservable_bandwidth.is_set || is_set(up_threshold_max_reservable_bandwidth.operation)) leaf_name_data.push_back(up_threshold_max_reservable_bandwidth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bandwidth-utilization")
    {
        if(bandwidth_utilization != nullptr)
        {
            children["bandwidth-utilization"] = bandwidth_utilization;
        }
        else
        {
            bandwidth_utilization = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::BandwidthUtilization>();
            bandwidth_utilization->parent = this;
            children["bandwidth-utilization"] = bandwidth_utilization;
        }
        return children.at("bandwidth-utilization");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::get_children()
{
    if(children.find("bandwidth-utilization") == children.end())
    {
        if(bandwidth_utilization != nullptr)
        {
            children["bandwidth-utilization"] = bandwidth_utilization;
        }
    }

    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjustment-factor")
    {
        adjustment_factor = value;
    }
    if(value_path == "application-enabled")
    {
        application_enabled = value;
    }
    if(value_path == "application-interval")
    {
        application_interval = value;
    }
    if(value_path == "application-time-remaining")
    {
        application_time_remaining = value;
    }
    if(value_path == "collection-type")
    {
        collection_type = value;
    }
    if(value_path == "down-threshold-max-reservable-bandwidth")
    {
        down_threshold_max_reservable_bandwidth = value;
    }
    if(value_path == "is-bandwidth-account-enabled")
    {
        is_bandwidth_account_enabled = value;
    }
    if(value_path == "last-application-timestamp")
    {
        last_application_timestamp = value;
    }
    if(value_path == "last-sample-collection-timestamp")
    {
        last_sample_collection_timestamp = value;
    }
    if(value_path == "max-reservable-bandwidth-threshold-are-default")
    {
        max_reservable_bandwidth_threshold_are_default = value;
    }
    if(value_path == "next-application")
    {
        next_application = value;
    }
    if(value_path == "next-sample-collection")
    {
        next_sample_collection = value;
    }
    if(value_path == "sample-interval")
    {
        sample_interval = value;
    }
    if(value_path == "sample-time-remaining")
    {
        sample_time_remaining = value;
    }
    if(value_path == "up-threshold-max-reservable-bandwidth")
    {
        up_threshold_max_reservable_bandwidth = value;
    }
}

MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::BandwidthUtilization::BandwidthUtilization()
    :
    applied_non_rsvp_te_bandwidth_utilization{YType::uint64, "applied-non-rsvp-te-bandwidth-utilization"},
    non_rsvp_te_bandwidth_utilization{YType::uint64, "non-rsvp-te-bandwidth-utilization"},
    rsvp_te_bandwidth_utilization{YType::uint64, "rsvp-te-bandwidth-utilization"},
    total_link_bandwidth_utilization{YType::uint64, "total-link-bandwidth-utilization"}
{
    yang_name = "bandwidth-utilization"; yang_parent_name = "bandwidth-account-common-info";
}

MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::BandwidthUtilization::~BandwidthUtilization()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::BandwidthUtilization::has_data() const
{
    return applied_non_rsvp_te_bandwidth_utilization.is_set
	|| non_rsvp_te_bandwidth_utilization.is_set
	|| rsvp_te_bandwidth_utilization.is_set
	|| total_link_bandwidth_utilization.is_set;
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::BandwidthUtilization::has_operation() const
{
    return is_set(operation)
	|| is_set(applied_non_rsvp_te_bandwidth_utilization.operation)
	|| is_set(non_rsvp_te_bandwidth_utilization.operation)
	|| is_set(rsvp_te_bandwidth_utilization.operation)
	|| is_set(total_link_bandwidth_utilization.operation);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::BandwidthUtilization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-utilization";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::BandwidthUtilization::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BandwidthUtilization' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (applied_non_rsvp_te_bandwidth_utilization.is_set || is_set(applied_non_rsvp_te_bandwidth_utilization.operation)) leaf_name_data.push_back(applied_non_rsvp_te_bandwidth_utilization.get_name_leafdata());
    if (non_rsvp_te_bandwidth_utilization.is_set || is_set(non_rsvp_te_bandwidth_utilization.operation)) leaf_name_data.push_back(non_rsvp_te_bandwidth_utilization.get_name_leafdata());
    if (rsvp_te_bandwidth_utilization.is_set || is_set(rsvp_te_bandwidth_utilization.operation)) leaf_name_data.push_back(rsvp_te_bandwidth_utilization.get_name_leafdata());
    if (total_link_bandwidth_utilization.is_set || is_set(total_link_bandwidth_utilization.operation)) leaf_name_data.push_back(total_link_bandwidth_utilization.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::BandwidthUtilization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::BandwidthUtilization::get_children()
{
    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthAccountCommonInfo::BandwidthUtilization::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "applied-non-rsvp-te-bandwidth-utilization")
    {
        applied_non_rsvp_te_bandwidth_utilization = value;
    }
    if(value_path == "non-rsvp-te-bandwidth-utilization")
    {
        non_rsvp_te_bandwidth_utilization = value;
    }
    if(value_path == "rsvp-te-bandwidth-utilization")
    {
        rsvp_te_bandwidth_utilization = value;
    }
    if(value_path == "total-link-bandwidth-utilization")
    {
        total_link_bandwidth_utilization = value;
    }
}

MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::BandwidthSampleHistory()
    :
    total_applications{YType::uint32, "total-applications"},
    total_samples{YType::uint32, "total-samples"}
{
    yang_name = "bandwidth-sample-history"; yang_parent_name = "bandwidth-account";
}

MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::~BandwidthSampleHistory()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::has_data() const
{
    for (std::size_t index=0; index<active_interval_sample.size(); index++)
    {
        if(active_interval_sample[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<previous_interval_sample.size(); index++)
    {
        if(previous_interval_sample[index]->has_data())
            return true;
    }
    return total_applications.is_set
	|| total_samples.is_set;
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::has_operation() const
{
    for (std::size_t index=0; index<active_interval_sample.size(); index++)
    {
        if(active_interval_sample[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<previous_interval_sample.size(); index++)
    {
        if(previous_interval_sample[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(total_applications.operation)
	|| is_set(total_samples.operation);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-sample-history";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BandwidthSampleHistory' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_applications.is_set || is_set(total_applications.operation)) leaf_name_data.push_back(total_applications.get_name_leafdata());
    if (total_samples.is_set || is_set(total_samples.operation)) leaf_name_data.push_back(total_samples.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "active-interval-sample")
    {
        for(auto const & c : active_interval_sample)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::ActiveIntervalSample>();
        c->parent = this;
        active_interval_sample.push_back(std::move(c));
        children[segment_path] = active_interval_sample.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "previous-interval-sample")
    {
        for(auto const & c : previous_interval_sample)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::PreviousIntervalSample>();
        c->parent = this;
        previous_interval_sample.push_back(std::move(c));
        children[segment_path] = previous_interval_sample.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::get_children()
{
    for (auto const & c : active_interval_sample)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : previous_interval_sample)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "total-applications")
    {
        total_applications = value;
    }
    if(value_path == "total-samples")
    {
        total_samples = value;
    }
}

MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::ActiveIntervalSample::ActiveIntervalSample()
    :
    non_rsvp_te_rate{YType::uint64, "non-rsvp-te-rate"},
    rsvp_te_rate{YType::uint64, "rsvp-te-rate"},
    timestamp{YType::uint32, "timestamp"},
    total_rate{YType::uint64, "total-rate"}
{
    yang_name = "active-interval-sample"; yang_parent_name = "bandwidth-sample-history";
}

MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::ActiveIntervalSample::~ActiveIntervalSample()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::ActiveIntervalSample::has_data() const
{
    return non_rsvp_te_rate.is_set
	|| rsvp_te_rate.is_set
	|| timestamp.is_set
	|| total_rate.is_set;
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::ActiveIntervalSample::has_operation() const
{
    return is_set(operation)
	|| is_set(non_rsvp_te_rate.operation)
	|| is_set(rsvp_te_rate.operation)
	|| is_set(timestamp.operation)
	|| is_set(total_rate.operation);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::ActiveIntervalSample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active-interval-sample";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::ActiveIntervalSample::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActiveIntervalSample' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_rsvp_te_rate.is_set || is_set(non_rsvp_te_rate.operation)) leaf_name_data.push_back(non_rsvp_te_rate.get_name_leafdata());
    if (rsvp_te_rate.is_set || is_set(rsvp_te_rate.operation)) leaf_name_data.push_back(rsvp_te_rate.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (total_rate.is_set || is_set(total_rate.operation)) leaf_name_data.push_back(total_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::ActiveIntervalSample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::ActiveIntervalSample::get_children()
{
    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::ActiveIntervalSample::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "non-rsvp-te-rate")
    {
        non_rsvp_te_rate = value;
    }
    if(value_path == "rsvp-te-rate")
    {
        rsvp_te_rate = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
    if(value_path == "total-rate")
    {
        total_rate = value;
    }
}

MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::PreviousIntervalSample::PreviousIntervalSample()
    :
    non_rsvp_te_rate{YType::uint64, "non-rsvp-te-rate"},
    rsvp_te_rate{YType::uint64, "rsvp-te-rate"},
    timestamp{YType::uint32, "timestamp"},
    total_rate{YType::uint64, "total-rate"}
{
    yang_name = "previous-interval-sample"; yang_parent_name = "bandwidth-sample-history";
}

MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::PreviousIntervalSample::~PreviousIntervalSample()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::PreviousIntervalSample::has_data() const
{
    return non_rsvp_te_rate.is_set
	|| rsvp_te_rate.is_set
	|| timestamp.is_set
	|| total_rate.is_set;
}

bool MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::PreviousIntervalSample::has_operation() const
{
    return is_set(operation)
	|| is_set(non_rsvp_te_rate.operation)
	|| is_set(rsvp_te_rate.operation)
	|| is_set(timestamp.operation)
	|| is_set(total_rate.operation);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::PreviousIntervalSample::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previous-interval-sample";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::PreviousIntervalSample::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PreviousIntervalSample' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_rsvp_te_rate.is_set || is_set(non_rsvp_te_rate.operation)) leaf_name_data.push_back(non_rsvp_te_rate.get_name_leafdata());
    if (rsvp_te_rate.is_set || is_set(rsvp_te_rate.operation)) leaf_name_data.push_back(rsvp_te_rate.get_name_leafdata());
    if (timestamp.is_set || is_set(timestamp.operation)) leaf_name_data.push_back(timestamp.get_name_leafdata());
    if (total_rate.is_set || is_set(total_rate.operation)) leaf_name_data.push_back(total_rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::PreviousIntervalSample::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::PreviousIntervalSample::get_children()
{
    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::BandwidthAccount::BandwidthSampleHistory::PreviousIntervalSample::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "non-rsvp-te-rate")
    {
        non_rsvp_te_rate = value;
    }
    if(value_path == "rsvp-te-rate")
    {
        rsvp_te_rate = value;
    }
    if(value_path == "timestamp")
    {
        timestamp = value;
    }
    if(value_path == "total-rate")
    {
        total_rate = value;
    }
}

MplsLcacStandby::LinkInformation::Links::Link::HwOor::HwOor()
    :
    hw_o_or_green_recovery_time{YType::uint32, "hw-o-or-green-recovery-time"},
    hw_oor_state{YType::enumeration, "hw-oor-state"},
    hw_oor_timestamp{YType::uint32, "hw-oor-timestamp"}
{
    yang_name = "hw-oor"; yang_parent_name = "link";
}

MplsLcacStandby::LinkInformation::Links::Link::HwOor::~HwOor()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::HwOor::has_data() const
{
    for (std::size_t index=0; index<hw_o_or_link_statistic.size(); index++)
    {
        if(hw_o_or_link_statistic[index]->has_data())
            return true;
    }
    return hw_o_or_green_recovery_time.is_set
	|| hw_oor_state.is_set
	|| hw_oor_timestamp.is_set;
}

bool MplsLcacStandby::LinkInformation::Links::Link::HwOor::has_operation() const
{
    for (std::size_t index=0; index<hw_o_or_link_statistic.size(); index++)
    {
        if(hw_o_or_link_statistic[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(hw_o_or_green_recovery_time.operation)
	|| is_set(hw_oor_state.operation)
	|| is_set(hw_oor_timestamp.operation);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::HwOor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-oor";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::LinkInformation::Links::Link::HwOor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HwOor' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hw_o_or_green_recovery_time.is_set || is_set(hw_o_or_green_recovery_time.operation)) leaf_name_data.push_back(hw_o_or_green_recovery_time.get_name_leafdata());
    if (hw_oor_state.is_set || is_set(hw_oor_state.operation)) leaf_name_data.push_back(hw_oor_state.get_name_leafdata());
    if (hw_oor_timestamp.is_set || is_set(hw_oor_timestamp.operation)) leaf_name_data.push_back(hw_oor_timestamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::HwOor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hw-o-or-link-statistic")
    {
        for(auto const & c : hw_o_or_link_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcacStandby::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic>();
        c->parent = this;
        hw_o_or_link_statistic.push_back(std::move(c));
        children[segment_path] = hw_o_or_link_statistic.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::LinkInformation::Links::Link::HwOor::get_children()
{
    for (auto const & c : hw_o_or_link_statistic)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::HwOor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hw-o-or-green-recovery-time")
    {
        hw_o_or_green_recovery_time = value;
    }
    if(value_path == "hw-oor-state")
    {
        hw_oor_state = value;
    }
    if(value_path == "hw-oor-timestamp")
    {
        hw_oor_timestamp = value;
    }
}

MplsLcacStandby::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::HwOOrLinkStatistic()
    :
    accepted_ls_ps_number{YType::uint32, "accepted-ls-ps-number"},
    accepted_reopt_ls_ps_number{YType::uint32, "accepted-reopt-ls-ps-number"},
    hw_oor_state{YType::enumeration, "hw-oor-state"},
    node_protection_disable_number{YType::uint32, "node-protection-disable-number"},
    rejected_ls_ps_number{YType::uint32, "rejected-ls-ps-number"},
    rejected_reopt_ls_ps_number{YType::uint32, "rejected-reopt-ls-ps-number"},
    transitions{YType::uint32, "transitions"}
{
    yang_name = "hw-o-or-link-statistic"; yang_parent_name = "hw-oor";
}

MplsLcacStandby::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::~HwOOrLinkStatistic()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::has_data() const
{
    return accepted_ls_ps_number.is_set
	|| accepted_reopt_ls_ps_number.is_set
	|| hw_oor_state.is_set
	|| node_protection_disable_number.is_set
	|| rejected_ls_ps_number.is_set
	|| rejected_reopt_ls_ps_number.is_set
	|| transitions.is_set;
}

bool MplsLcacStandby::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::has_operation() const
{
    return is_set(operation)
	|| is_set(accepted_ls_ps_number.operation)
	|| is_set(accepted_reopt_ls_ps_number.operation)
	|| is_set(hw_oor_state.operation)
	|| is_set(node_protection_disable_number.operation)
	|| is_set(rejected_ls_ps_number.operation)
	|| is_set(rejected_reopt_ls_ps_number.operation)
	|| is_set(transitions.operation);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hw-o-or-link-statistic";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HwOOrLinkStatistic' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accepted_ls_ps_number.is_set || is_set(accepted_ls_ps_number.operation)) leaf_name_data.push_back(accepted_ls_ps_number.get_name_leafdata());
    if (accepted_reopt_ls_ps_number.is_set || is_set(accepted_reopt_ls_ps_number.operation)) leaf_name_data.push_back(accepted_reopt_ls_ps_number.get_name_leafdata());
    if (hw_oor_state.is_set || is_set(hw_oor_state.operation)) leaf_name_data.push_back(hw_oor_state.get_name_leafdata());
    if (node_protection_disable_number.is_set || is_set(node_protection_disable_number.operation)) leaf_name_data.push_back(node_protection_disable_number.get_name_leafdata());
    if (rejected_ls_ps_number.is_set || is_set(rejected_ls_ps_number.operation)) leaf_name_data.push_back(rejected_ls_ps_number.get_name_leafdata());
    if (rejected_reopt_ls_ps_number.is_set || is_set(rejected_reopt_ls_ps_number.operation)) leaf_name_data.push_back(rejected_reopt_ls_ps_number.get_name_leafdata());
    if (transitions.is_set || is_set(transitions.operation)) leaf_name_data.push_back(transitions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::get_children()
{
    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::HwOor::HwOOrLinkStatistic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accepted-ls-ps-number")
    {
        accepted_ls_ps_number = value;
    }
    if(value_path == "accepted-reopt-ls-ps-number")
    {
        accepted_reopt_ls_ps_number = value;
    }
    if(value_path == "hw-oor-state")
    {
        hw_oor_state = value;
    }
    if(value_path == "node-protection-disable-number")
    {
        node_protection_disable_number = value;
    }
    if(value_path == "rejected-ls-ps-number")
    {
        rejected_ls_ps_number = value;
    }
    if(value_path == "rejected-reopt-ls-ps-number")
    {
        rejected_reopt_ls_ps_number = value;
    }
    if(value_path == "transitions")
    {
        transitions = value;
    }
}

MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::AffinityMap()
    :
    affinity_bit_position{YType::uint8, "affinity-bit-position"},
    affinity_extended_value{YType::uint32, "affinity-extended-value"},
    affinity_name{YType::str, "affinity-name"},
    affinity_table_id{YType::enumeration, "affinity-table-id"},
    affinity_value{YType::uint32, "affinity-value"}
{
    yang_name = "affinity-map"; yang_parent_name = "link";
}

MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::~AffinityMap()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::has_data() const
{
    for (auto const & leaf : affinity_extended_value.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return affinity_bit_position.is_set
	|| affinity_name.is_set
	|| affinity_table_id.is_set
	|| affinity_value.is_set;
}

bool MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::has_operation() const
{
    for (auto const & leaf : affinity_extended_value.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(affinity_bit_position.operation)
	|| is_set(affinity_extended_value.operation)
	|| is_set(affinity_name.operation)
	|| is_set(affinity_table_id.operation)
	|| is_set(affinity_value.operation);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "affinity-map";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AffinityMap' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_bit_position.is_set || is_set(affinity_bit_position.operation)) leaf_name_data.push_back(affinity_bit_position.get_name_leafdata());
    if (affinity_name.is_set || is_set(affinity_name.operation)) leaf_name_data.push_back(affinity_name.get_name_leafdata());
    if (affinity_table_id.is_set || is_set(affinity_table_id.operation)) leaf_name_data.push_back(affinity_table_id.get_name_leafdata());
    if (affinity_value.is_set || is_set(affinity_value.operation)) leaf_name_data.push_back(affinity_value.get_name_leafdata());

    auto affinity_extended_value_name_datas = affinity_extended_value.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), affinity_extended_value_name_datas.begin(), affinity_extended_value_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::get_children()
{
    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::AffinityMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity-bit-position")
    {
        affinity_bit_position = value;
    }
    if(value_path == "affinity-extended-value")
    {
        affinity_extended_value.append(value);
    }
    if(value_path == "affinity-name")
    {
        affinity_name = value;
    }
    if(value_path == "affinity-table-id")
    {
        affinity_table_id = value;
    }
    if(value_path == "affinity-value")
    {
        affinity_value = value;
    }
}

MplsLcacStandby::LinkInformation::Links::Link::Areas::Areas()
    :
    area_id{YType::str, "area-id"},
    igp_metric{YType::uint32, "igp-metric"},
    is_neighbor_up{YType::boolean, "is-neighbor-up"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"}
{
    yang_name = "areas"; yang_parent_name = "link";
}

MplsLcacStandby::LinkInformation::Links::Link::Areas::~Areas()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::Areas::has_data() const
{
    return area_id.is_set
	|| igp_metric.is_set
	|| is_neighbor_up.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set;
}

bool MplsLcacStandby::LinkInformation::Links::Link::Areas::has_operation() const
{
    return is_set(operation)
	|| is_set(area_id.operation)
	|| is_set(igp_metric.operation)
	|| is_set(is_neighbor_up.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_id.operation);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::Areas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "areas";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::LinkInformation::Links::Link::Areas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Areas' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (igp_metric.is_set || is_set(igp_metric.operation)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (is_neighbor_up.is_set || is_set(is_neighbor_up.operation)) leaf_name_data.push_back(is_neighbor_up.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::Areas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::LinkInformation::Links::Link::Areas::get_children()
{
    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::Areas::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "igp-metric")
    {
        igp_metric = value;
    }
    if(value_path == "is-neighbor-up")
    {
        is_neighbor_up = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
}

MplsLcacStandby::LinkInformation::Links::Link::Lockout::Lockout()
    :
    is_lockout{YType::boolean, "is-lockout"},
    lockout_off_timestamp{YType::uint32, "lockout-off-timestamp"},
    lockout_on_timestamp{YType::uint32, "lockout-on-timestamp"}
{
    yang_name = "lockout"; yang_parent_name = "link";
}

MplsLcacStandby::LinkInformation::Links::Link::Lockout::~Lockout()
{
}

bool MplsLcacStandby::LinkInformation::Links::Link::Lockout::has_data() const
{
    return is_lockout.is_set
	|| lockout_off_timestamp.is_set
	|| lockout_on_timestamp.is_set;
}

bool MplsLcacStandby::LinkInformation::Links::Link::Lockout::has_operation() const
{
    return is_set(operation)
	|| is_set(is_lockout.operation)
	|| is_set(lockout_off_timestamp.operation)
	|| is_set(lockout_on_timestamp.operation);
}

std::string MplsLcacStandby::LinkInformation::Links::Link::Lockout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lockout";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::LinkInformation::Links::Link::Lockout::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lockout' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_lockout.is_set || is_set(is_lockout.operation)) leaf_name_data.push_back(is_lockout.get_name_leafdata());
    if (lockout_off_timestamp.is_set || is_set(lockout_off_timestamp.operation)) leaf_name_data.push_back(lockout_off_timestamp.get_name_leafdata());
    if (lockout_on_timestamp.is_set || is_set(lockout_on_timestamp.operation)) leaf_name_data.push_back(lockout_on_timestamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::LinkInformation::Links::Link::Lockout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::LinkInformation::Links::Link::Lockout::get_children()
{
    return children;
}

void MplsLcacStandby::LinkInformation::Links::Link::Lockout::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-lockout")
    {
        is_lockout = value;
    }
    if(value_path == "lockout-off-timestamp")
    {
        lockout_off_timestamp = value;
    }
    if(value_path == "lockout-on-timestamp")
    {
        lockout_on_timestamp = value;
    }
}

MplsLcacStandby::AdmissionControl::AdmissionControl()
    :
    admitted_tunnels(std::make_shared<MplsLcacStandby::AdmissionControl::AdmittedTunnels>())
	,global(std::make_shared<MplsLcacStandby::AdmissionControl::Global>())
	,link_interfaces(std::make_shared<MplsLcacStandby::AdmissionControl::LinkInterfaces>())
{
    admitted_tunnels->parent = this;
    children["admitted-tunnels"] = admitted_tunnels;

    global->parent = this;
    children["global"] = global;

    link_interfaces->parent = this;
    children["link-interfaces"] = link_interfaces;

    yang_name = "admission-control"; yang_parent_name = "mpls-lcac-standby";
}

MplsLcacStandby::AdmissionControl::~AdmissionControl()
{
}

bool MplsLcacStandby::AdmissionControl::has_data() const
{
    return (admitted_tunnels !=  nullptr && admitted_tunnels->has_data())
	|| (global !=  nullptr && global->has_data())
	|| (link_interfaces !=  nullptr && link_interfaces->has_data());
}

bool MplsLcacStandby::AdmissionControl::has_operation() const
{
    return is_set(operation)
	|| (admitted_tunnels !=  nullptr && admitted_tunnels->has_operation())
	|| (global !=  nullptr && global->has_operation())
	|| (link_interfaces !=  nullptr && link_interfaces->has_operation());
}

std::string MplsLcacStandby::AdmissionControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admission-control";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::AdmissionControl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::AdmissionControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "admitted-tunnels")
    {
        if(admitted_tunnels != nullptr)
        {
            children["admitted-tunnels"] = admitted_tunnels;
        }
        else
        {
            admitted_tunnels = std::make_shared<MplsLcacStandby::AdmissionControl::AdmittedTunnels>();
            admitted_tunnels->parent = this;
            children["admitted-tunnels"] = admitted_tunnels;
        }
        return children.at("admitted-tunnels");
    }

    if(child_yang_name == "global")
    {
        if(global != nullptr)
        {
            children["global"] = global;
        }
        else
        {
            global = std::make_shared<MplsLcacStandby::AdmissionControl::Global>();
            global->parent = this;
            children["global"] = global;
        }
        return children.at("global");
    }

    if(child_yang_name == "link-interfaces")
    {
        if(link_interfaces != nullptr)
        {
            children["link-interfaces"] = link_interfaces;
        }
        else
        {
            link_interfaces = std::make_shared<MplsLcacStandby::AdmissionControl::LinkInterfaces>();
            link_interfaces->parent = this;
            children["link-interfaces"] = link_interfaces;
        }
        return children.at("link-interfaces");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::AdmissionControl::get_children()
{
    if(children.find("admitted-tunnels") == children.end())
    {
        if(admitted_tunnels != nullptr)
        {
            children["admitted-tunnels"] = admitted_tunnels;
        }
    }

    if(children.find("global") == children.end())
    {
        if(global != nullptr)
        {
            children["global"] = global;
        }
    }

    if(children.find("link-interfaces") == children.end())
    {
        if(link_interfaces != nullptr)
        {
            children["link-interfaces"] = link_interfaces;
        }
    }

    return children;
}

void MplsLcacStandby::AdmissionControl::set_value(const std::string & value_path, std::string value)
{
}

MplsLcacStandby::AdmissionControl::Global::Global()
    :
    bandwidth_units{YType::enumeration, "bandwidth-units"},
    is_role_standby{YType::boolean, "is-role-standby"},
    selected_tunnels{YType::uint32, "selected-tunnels"},
    total_p2mp_tunnels{YType::uint32, "total-p2mp-tunnels"},
    total_tunnels{YType::uint32, "total-tunnels"}
{
    yang_name = "global"; yang_parent_name = "admission-control";
}

MplsLcacStandby::AdmissionControl::Global::~Global()
{
}

bool MplsLcacStandby::AdmissionControl::Global::has_data() const
{
    return bandwidth_units.is_set
	|| is_role_standby.is_set
	|| selected_tunnels.is_set
	|| total_p2mp_tunnels.is_set
	|| total_tunnels.is_set;
}

bool MplsLcacStandby::AdmissionControl::Global::has_operation() const
{
    return is_set(operation)
	|| is_set(bandwidth_units.operation)
	|| is_set(is_role_standby.operation)
	|| is_set(selected_tunnels.operation)
	|| is_set(total_p2mp_tunnels.operation)
	|| is_set(total_tunnels.operation);
}

std::string MplsLcacStandby::AdmissionControl::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::AdmissionControl::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/admission-control/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_units.is_set || is_set(bandwidth_units.operation)) leaf_name_data.push_back(bandwidth_units.get_name_leafdata());
    if (is_role_standby.is_set || is_set(is_role_standby.operation)) leaf_name_data.push_back(is_role_standby.get_name_leafdata());
    if (selected_tunnels.is_set || is_set(selected_tunnels.operation)) leaf_name_data.push_back(selected_tunnels.get_name_leafdata());
    if (total_p2mp_tunnels.is_set || is_set(total_p2mp_tunnels.operation)) leaf_name_data.push_back(total_p2mp_tunnels.get_name_leafdata());
    if (total_tunnels.is_set || is_set(total_tunnels.operation)) leaf_name_data.push_back(total_tunnels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::AdmissionControl::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::AdmissionControl::Global::get_children()
{
    return children;
}

void MplsLcacStandby::AdmissionControl::Global::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth-units")
    {
        bandwidth_units = value;
    }
    if(value_path == "is-role-standby")
    {
        is_role_standby = value;
    }
    if(value_path == "selected-tunnels")
    {
        selected_tunnels = value;
    }
    if(value_path == "total-p2mp-tunnels")
    {
        total_p2mp_tunnels = value;
    }
    if(value_path == "total-tunnels")
    {
        total_tunnels = value;
    }
}

MplsLcacStandby::AdmissionControl::AdmittedTunnels::AdmittedTunnels()
{
    yang_name = "admitted-tunnels"; yang_parent_name = "admission-control";
}

MplsLcacStandby::AdmissionControl::AdmittedTunnels::~AdmittedTunnels()
{
}

bool MplsLcacStandby::AdmissionControl::AdmittedTunnels::has_data() const
{
    for (std::size_t index=0; index<admitted_tunnel.size(); index++)
    {
        if(admitted_tunnel[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcacStandby::AdmissionControl::AdmittedTunnels::has_operation() const
{
    for (std::size_t index=0; index<admitted_tunnel.size(); index++)
    {
        if(admitted_tunnel[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLcacStandby::AdmissionControl::AdmittedTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admitted-tunnels";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::AdmissionControl::AdmittedTunnels::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/admission-control/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::AdmissionControl::AdmittedTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "admitted-tunnel")
    {
        for(auto const & c : admitted_tunnel)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcacStandby::AdmissionControl::AdmittedTunnels::AdmittedTunnel>();
        c->parent = this;
        admitted_tunnel.push_back(std::move(c));
        children[segment_path] = admitted_tunnel.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::AdmissionControl::AdmittedTunnels::get_children()
{
    for (auto const & c : admitted_tunnel)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLcacStandby::AdmissionControl::AdmittedTunnels::set_value(const std::string & value_path, std::string value)
{
}

MplsLcacStandby::AdmissionControl::AdmittedTunnels::AdmittedTunnel::AdmittedTunnel()
    :
    ctype{YType::enumeration, "ctype"},
    destination_address{YType::str, "destination-address"},
    destination_port{YType::int32, "destination-port"},
    extended_tunnel_id{YType::str, "extended-tunnel-id"},
    next_hop_address{YType::str, "next-hop-address"},
    p2mp_id{YType::int32, "p2mp-id"},
    source_address{YType::str, "source-address"},
    source_port{YType::int32, "source-port"},
    backup_interface{YType::str, "backup-interface"},
    bandwidth{YType::uint64, "bandwidth"},
    bandwidth_pool{YType::enumeration, "bandwidth-pool"},
    bandwidth_state{YType::enumeration, "bandwidth-state"},
    down_link_name{YType::str, "down-link-name"},
    hold_priority{YType::uint8, "hold-priority"},
    is_rerouted{YType::boolean, "is-rerouted"},
    local_label{YType::uint32, "local-label"},
    outgoing_label{YType::uint32, "outgoing-label"},
    setup_priority{YType::uint8, "setup-priority"},
    tunnel_name{YType::str, "tunnel-name"},
    tunnel_state{YType::enumeration, "tunnel-state"},
    up_link_name{YType::str, "up-link-name"}
{
    yang_name = "admitted-tunnel"; yang_parent_name = "admitted-tunnels";
}

MplsLcacStandby::AdmissionControl::AdmittedTunnels::AdmittedTunnel::~AdmittedTunnel()
{
}

bool MplsLcacStandby::AdmissionControl::AdmittedTunnels::AdmittedTunnel::has_data() const
{
    return ctype.is_set
	|| destination_address.is_set
	|| destination_port.is_set
	|| extended_tunnel_id.is_set
	|| next_hop_address.is_set
	|| p2mp_id.is_set
	|| source_address.is_set
	|| source_port.is_set
	|| backup_interface.is_set
	|| bandwidth.is_set
	|| bandwidth_pool.is_set
	|| bandwidth_state.is_set
	|| down_link_name.is_set
	|| hold_priority.is_set
	|| is_rerouted.is_set
	|| local_label.is_set
	|| outgoing_label.is_set
	|| setup_priority.is_set
	|| tunnel_name.is_set
	|| tunnel_state.is_set
	|| up_link_name.is_set;
}

bool MplsLcacStandby::AdmissionControl::AdmittedTunnels::AdmittedTunnel::has_operation() const
{
    return is_set(operation)
	|| is_set(ctype.operation)
	|| is_set(destination_address.operation)
	|| is_set(destination_port.operation)
	|| is_set(extended_tunnel_id.operation)
	|| is_set(next_hop_address.operation)
	|| is_set(p2mp_id.operation)
	|| is_set(source_address.operation)
	|| is_set(source_port.operation)
	|| is_set(backup_interface.operation)
	|| is_set(bandwidth.operation)
	|| is_set(bandwidth_pool.operation)
	|| is_set(bandwidth_state.operation)
	|| is_set(down_link_name.operation)
	|| is_set(hold_priority.operation)
	|| is_set(is_rerouted.operation)
	|| is_set(local_label.operation)
	|| is_set(outgoing_label.operation)
	|| is_set(setup_priority.operation)
	|| is_set(tunnel_name.operation)
	|| is_set(tunnel_state.operation)
	|| is_set(up_link_name.operation);
}

std::string MplsLcacStandby::AdmissionControl::AdmittedTunnels::AdmittedTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "admitted-tunnel" <<"[ctype='" <<ctype <<"']" <<"[destination-address='" <<destination_address <<"']" <<"[destination-port='" <<destination_port <<"']" <<"[extended-tunnel-id='" <<extended_tunnel_id <<"']" <<"[next-hop-address='" <<next_hop_address <<"']" <<"[p2mp-id='" <<p2mp_id <<"']" <<"[source-address='" <<source_address <<"']" <<"[source-port='" <<source_port <<"']";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::AdmissionControl::AdmittedTunnels::AdmittedTunnel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/admission-control/admitted-tunnels/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ctype.is_set || is_set(ctype.operation)) leaf_name_data.push_back(ctype.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_port.is_set || is_set(destination_port.operation)) leaf_name_data.push_back(destination_port.get_name_leafdata());
    if (extended_tunnel_id.is_set || is_set(extended_tunnel_id.operation)) leaf_name_data.push_back(extended_tunnel_id.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.operation)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (p2mp_id.is_set || is_set(p2mp_id.operation)) leaf_name_data.push_back(p2mp_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (source_port.is_set || is_set(source_port.operation)) leaf_name_data.push_back(source_port.get_name_leafdata());
    if (backup_interface.is_set || is_set(backup_interface.operation)) leaf_name_data.push_back(backup_interface.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.operation)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (bandwidth_pool.is_set || is_set(bandwidth_pool.operation)) leaf_name_data.push_back(bandwidth_pool.get_name_leafdata());
    if (bandwidth_state.is_set || is_set(bandwidth_state.operation)) leaf_name_data.push_back(bandwidth_state.get_name_leafdata());
    if (down_link_name.is_set || is_set(down_link_name.operation)) leaf_name_data.push_back(down_link_name.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.operation)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (is_rerouted.is_set || is_set(is_rerouted.operation)) leaf_name_data.push_back(is_rerouted.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.operation)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (outgoing_label.is_set || is_set(outgoing_label.operation)) leaf_name_data.push_back(outgoing_label.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.operation)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (tunnel_state.is_set || is_set(tunnel_state.operation)) leaf_name_data.push_back(tunnel_state.get_name_leafdata());
    if (up_link_name.is_set || is_set(up_link_name.operation)) leaf_name_data.push_back(up_link_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::AdmissionControl::AdmittedTunnels::AdmittedTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::AdmissionControl::AdmittedTunnels::AdmittedTunnel::get_children()
{
    return children;
}

void MplsLcacStandby::AdmissionControl::AdmittedTunnels::AdmittedTunnel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ctype")
    {
        ctype = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "destination-port")
    {
        destination_port = value;
    }
    if(value_path == "extended-tunnel-id")
    {
        extended_tunnel_id = value;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
    }
    if(value_path == "p2mp-id")
    {
        p2mp_id = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "source-port")
    {
        source_port = value;
    }
    if(value_path == "backup-interface")
    {
        backup_interface = value;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
    }
    if(value_path == "bandwidth-pool")
    {
        bandwidth_pool = value;
    }
    if(value_path == "bandwidth-state")
    {
        bandwidth_state = value;
    }
    if(value_path == "down-link-name")
    {
        down_link_name = value;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
    }
    if(value_path == "is-rerouted")
    {
        is_rerouted = value;
    }
    if(value_path == "local-label")
    {
        local_label = value;
    }
    if(value_path == "outgoing-label")
    {
        outgoing_label = value;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
    if(value_path == "tunnel-state")
    {
        tunnel_state = value;
    }
    if(value_path == "up-link-name")
    {
        up_link_name = value;
    }
}

MplsLcacStandby::AdmissionControl::LinkInterfaces::LinkInterfaces()
{
    yang_name = "link-interfaces"; yang_parent_name = "admission-control";
}

MplsLcacStandby::AdmissionControl::LinkInterfaces::~LinkInterfaces()
{
}

bool MplsLcacStandby::AdmissionControl::LinkInterfaces::has_data() const
{
    for (std::size_t index=0; index<link_interface.size(); index++)
    {
        if(link_interface[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcacStandby::AdmissionControl::LinkInterfaces::has_operation() const
{
    for (std::size_t index=0; index<link_interface.size(); index++)
    {
        if(link_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLcacStandby::AdmissionControl::LinkInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-interfaces";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::AdmissionControl::LinkInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/admission-control/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::AdmissionControl::LinkInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "link-interface")
    {
        for(auto const & c : link_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcacStandby::AdmissionControl::LinkInterfaces::LinkInterface>();
        c->parent = this;
        link_interface.push_back(std::move(c));
        children[segment_path] = link_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::AdmissionControl::LinkInterfaces::get_children()
{
    for (auto const & c : link_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLcacStandby::AdmissionControl::LinkInterfaces::set_value(const std::string & value_path, std::string value)
{
}

MplsLcacStandby::AdmissionControl::LinkInterfaces::LinkInterface::LinkInterface()
    :
    interface_name{YType::str, "interface-name"},
    bandwidth_units{YType::enumeration, "bandwidth-units"},
    is_role_standby{YType::boolean, "is-role-standby"},
    selected_tunnels{YType::uint32, "selected-tunnels"},
    total_p2mp_tunnels{YType::uint32, "total-p2mp-tunnels"},
    total_tunnels{YType::uint32, "total-tunnels"}
{
    yang_name = "link-interface"; yang_parent_name = "link-interfaces";
}

MplsLcacStandby::AdmissionControl::LinkInterfaces::LinkInterface::~LinkInterface()
{
}

bool MplsLcacStandby::AdmissionControl::LinkInterfaces::LinkInterface::has_data() const
{
    return interface_name.is_set
	|| bandwidth_units.is_set
	|| is_role_standby.is_set
	|| selected_tunnels.is_set
	|| total_p2mp_tunnels.is_set
	|| total_tunnels.is_set;
}

bool MplsLcacStandby::AdmissionControl::LinkInterfaces::LinkInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(bandwidth_units.operation)
	|| is_set(is_role_standby.operation)
	|| is_set(selected_tunnels.operation)
	|| is_set(total_p2mp_tunnels.operation)
	|| is_set(total_tunnels.operation);
}

std::string MplsLcacStandby::AdmissionControl::LinkInterfaces::LinkInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::AdmissionControl::LinkInterfaces::LinkInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/admission-control/link-interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bandwidth_units.is_set || is_set(bandwidth_units.operation)) leaf_name_data.push_back(bandwidth_units.get_name_leafdata());
    if (is_role_standby.is_set || is_set(is_role_standby.operation)) leaf_name_data.push_back(is_role_standby.get_name_leafdata());
    if (selected_tunnels.is_set || is_set(selected_tunnels.operation)) leaf_name_data.push_back(selected_tunnels.get_name_leafdata());
    if (total_p2mp_tunnels.is_set || is_set(total_p2mp_tunnels.operation)) leaf_name_data.push_back(total_p2mp_tunnels.get_name_leafdata());
    if (total_tunnels.is_set || is_set(total_tunnels.operation)) leaf_name_data.push_back(total_tunnels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::AdmissionControl::LinkInterfaces::LinkInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::AdmissionControl::LinkInterfaces::LinkInterface::get_children()
{
    return children;
}

void MplsLcacStandby::AdmissionControl::LinkInterfaces::LinkInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "bandwidth-units")
    {
        bandwidth_units = value;
    }
    if(value_path == "is-role-standby")
    {
        is_role_standby = value;
    }
    if(value_path == "selected-tunnels")
    {
        selected_tunnels = value;
    }
    if(value_path == "total-p2mp-tunnels")
    {
        total_p2mp_tunnels = value;
    }
    if(value_path == "total-tunnels")
    {
        total_tunnels = value;
    }
}

MplsLcacStandby::SoftPreemptionGlobalInfo::SoftPreemptionGlobalInfo()
    :
    is_configured{YType::boolean, "is-configured"},
    is_timeout_interval_configured{YType::boolean, "is-timeout-interval-configured"},
    timeout_interval{YType::uint32, "timeout-interval"}
{
    yang_name = "soft-preemption-global-info"; yang_parent_name = "mpls-lcac-standby";
}

MplsLcacStandby::SoftPreemptionGlobalInfo::~SoftPreemptionGlobalInfo()
{
}

bool MplsLcacStandby::SoftPreemptionGlobalInfo::has_data() const
{
    return is_configured.is_set
	|| is_timeout_interval_configured.is_set
	|| timeout_interval.is_set;
}

bool MplsLcacStandby::SoftPreemptionGlobalInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(is_configured.operation)
	|| is_set(is_timeout_interval_configured.operation)
	|| is_set(timeout_interval.operation);
}

std::string MplsLcacStandby::SoftPreemptionGlobalInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-preemption-global-info";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::SoftPreemptionGlobalInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_configured.is_set || is_set(is_configured.operation)) leaf_name_data.push_back(is_configured.get_name_leafdata());
    if (is_timeout_interval_configured.is_set || is_set(is_timeout_interval_configured.operation)) leaf_name_data.push_back(is_timeout_interval_configured.get_name_leafdata());
    if (timeout_interval.is_set || is_set(timeout_interval.operation)) leaf_name_data.push_back(timeout_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::SoftPreemptionGlobalInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::SoftPreemptionGlobalInfo::get_children()
{
    return children;
}

void MplsLcacStandby::SoftPreemptionGlobalInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-configured")
    {
        is_configured = value;
    }
    if(value_path == "is-timeout-interval-configured")
    {
        is_timeout_interval_configured = value;
    }
    if(value_path == "timeout-interval")
    {
        timeout_interval = value;
    }
}

MplsLcacStandby::SoftPreemptions::SoftPreemptions()
{
    yang_name = "soft-preemptions"; yang_parent_name = "mpls-lcac-standby";
}

MplsLcacStandby::SoftPreemptions::~SoftPreemptions()
{
}

bool MplsLcacStandby::SoftPreemptions::has_data() const
{
    for (std::size_t index=0; index<soft_preemption.size(); index++)
    {
        if(soft_preemption[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcacStandby::SoftPreemptions::has_operation() const
{
    for (std::size_t index=0; index<soft_preemption.size(); index++)
    {
        if(soft_preemption[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLcacStandby::SoftPreemptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-preemptions";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::SoftPreemptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::SoftPreemptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "soft-preemption")
    {
        for(auto const & c : soft_preemption)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcacStandby::SoftPreemptions::SoftPreemption>();
        c->parent = this;
        soft_preemption.push_back(std::move(c));
        children[segment_path] = soft_preemption.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::SoftPreemptions::get_children()
{
    for (auto const & c : soft_preemption)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLcacStandby::SoftPreemptions::set_value(const std::string & value_path, std::string value)
{
}

MplsLcacStandby::SoftPreemptions::SoftPreemption::SoftPreemption()
    :
    interface_name{YType::str, "interface-name"},
    current_over_subscribed_bandwidth_bc0{YType::uint64, "current-over-subscribed-bandwidth-bc0"},
    current_over_subscribed_bandwidth_bc1{YType::uint64, "current-over-subscribed-bandwidth-bc1"},
    current_soft_preempted_bandwidth_bc0{YType::uint64, "current-soft-preempted-bandwidth-bc0"},
    current_soft_preempted_bandwidth_bc1{YType::uint64, "current-soft-preempted-bandwidth-bc1"},
    link_address{YType::str, "link-address"},
    release_soft_preempted_bandwidth_bc0{YType::uint64, "release-soft-preempted-bandwidth-bc0"},
    release_soft_preempted_bandwidth_bc1{YType::uint64, "release-soft-preempted-bandwidth-bc1"},
    total_soft_preempted_bandwidth_bc0{YType::uint64, "total-soft-preempted-bandwidth-bc0"},
    total_soft_preempted_bandwidth_bc1{YType::uint64, "total-soft-preempted-bandwidth-bc1"}
{
    yang_name = "soft-preemption"; yang_parent_name = "soft-preemptions";
}

MplsLcacStandby::SoftPreemptions::SoftPreemption::~SoftPreemption()
{
}

bool MplsLcacStandby::SoftPreemptions::SoftPreemption::has_data() const
{
    for (std::size_t index=0; index<current_soft_preemption_lsp.size(); index++)
    {
        if(current_soft_preemption_lsp[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| current_over_subscribed_bandwidth_bc0.is_set
	|| current_over_subscribed_bandwidth_bc1.is_set
	|| current_soft_preempted_bandwidth_bc0.is_set
	|| current_soft_preempted_bandwidth_bc1.is_set
	|| link_address.is_set
	|| release_soft_preempted_bandwidth_bc0.is_set
	|| release_soft_preempted_bandwidth_bc1.is_set
	|| total_soft_preempted_bandwidth_bc0.is_set
	|| total_soft_preempted_bandwidth_bc1.is_set;
}

bool MplsLcacStandby::SoftPreemptions::SoftPreemption::has_operation() const
{
    for (std::size_t index=0; index<current_soft_preemption_lsp.size(); index++)
    {
        if(current_soft_preemption_lsp[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(current_over_subscribed_bandwidth_bc0.operation)
	|| is_set(current_over_subscribed_bandwidth_bc1.operation)
	|| is_set(current_soft_preempted_bandwidth_bc0.operation)
	|| is_set(current_soft_preempted_bandwidth_bc1.operation)
	|| is_set(link_address.operation)
	|| is_set(release_soft_preempted_bandwidth_bc0.operation)
	|| is_set(release_soft_preempted_bandwidth_bc1.operation)
	|| is_set(total_soft_preempted_bandwidth_bc0.operation)
	|| is_set(total_soft_preempted_bandwidth_bc1.operation);
}

std::string MplsLcacStandby::SoftPreemptions::SoftPreemption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "soft-preemption" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::SoftPreemptions::SoftPreemption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac-standby/soft-preemptions/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (current_over_subscribed_bandwidth_bc0.is_set || is_set(current_over_subscribed_bandwidth_bc0.operation)) leaf_name_data.push_back(current_over_subscribed_bandwidth_bc0.get_name_leafdata());
    if (current_over_subscribed_bandwidth_bc1.is_set || is_set(current_over_subscribed_bandwidth_bc1.operation)) leaf_name_data.push_back(current_over_subscribed_bandwidth_bc1.get_name_leafdata());
    if (current_soft_preempted_bandwidth_bc0.is_set || is_set(current_soft_preempted_bandwidth_bc0.operation)) leaf_name_data.push_back(current_soft_preempted_bandwidth_bc0.get_name_leafdata());
    if (current_soft_preempted_bandwidth_bc1.is_set || is_set(current_soft_preempted_bandwidth_bc1.operation)) leaf_name_data.push_back(current_soft_preempted_bandwidth_bc1.get_name_leafdata());
    if (link_address.is_set || is_set(link_address.operation)) leaf_name_data.push_back(link_address.get_name_leafdata());
    if (release_soft_preempted_bandwidth_bc0.is_set || is_set(release_soft_preempted_bandwidth_bc0.operation)) leaf_name_data.push_back(release_soft_preempted_bandwidth_bc0.get_name_leafdata());
    if (release_soft_preempted_bandwidth_bc1.is_set || is_set(release_soft_preempted_bandwidth_bc1.operation)) leaf_name_data.push_back(release_soft_preempted_bandwidth_bc1.get_name_leafdata());
    if (total_soft_preempted_bandwidth_bc0.is_set || is_set(total_soft_preempted_bandwidth_bc0.operation)) leaf_name_data.push_back(total_soft_preempted_bandwidth_bc0.get_name_leafdata());
    if (total_soft_preempted_bandwidth_bc1.is_set || is_set(total_soft_preempted_bandwidth_bc1.operation)) leaf_name_data.push_back(total_soft_preempted_bandwidth_bc1.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::SoftPreemptions::SoftPreemption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "current-soft-preemption-lsp")
    {
        for(auto const & c : current_soft_preemption_lsp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcacStandby::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp>();
        c->parent = this;
        current_soft_preemption_lsp.push_back(std::move(c));
        children[segment_path] = current_soft_preemption_lsp.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::SoftPreemptions::SoftPreemption::get_children()
{
    for (auto const & c : current_soft_preemption_lsp)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLcacStandby::SoftPreemptions::SoftPreemption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "current-over-subscribed-bandwidth-bc0")
    {
        current_over_subscribed_bandwidth_bc0 = value;
    }
    if(value_path == "current-over-subscribed-bandwidth-bc1")
    {
        current_over_subscribed_bandwidth_bc1 = value;
    }
    if(value_path == "current-soft-preempted-bandwidth-bc0")
    {
        current_soft_preempted_bandwidth_bc0 = value;
    }
    if(value_path == "current-soft-preempted-bandwidth-bc1")
    {
        current_soft_preempted_bandwidth_bc1 = value;
    }
    if(value_path == "link-address")
    {
        link_address = value;
    }
    if(value_path == "release-soft-preempted-bandwidth-bc0")
    {
        release_soft_preempted_bandwidth_bc0 = value;
    }
    if(value_path == "release-soft-preempted-bandwidth-bc1")
    {
        release_soft_preempted_bandwidth_bc1 = value;
    }
    if(value_path == "total-soft-preempted-bandwidth-bc0")
    {
        total_soft_preempted_bandwidth_bc0 = value;
    }
    if(value_path == "total-soft-preempted-bandwidth-bc1")
    {
        total_soft_preempted_bandwidth_bc1 = value;
    }
}

MplsLcacStandby::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::CurrentSoftPreemptionLsp()
    :
    bandwidth_preempted{YType::boolean, "bandwidth-preempted"},
    bandwidth_type{YType::uint8, "bandwidth-type"},
    destination_address{YType::str, "destination-address"},
    hold_priority{YType::uint8, "hold-priority"},
    lsp_id{YType::uint16, "lsp-id"},
    requested_bandwidth{YType::uint64, "requested-bandwidth"},
    setup_priority{YType::uint8, "setup-priority"},
    soft_preempted{YType::boolean, "soft-preempted"},
    soft_preempted_fr_rrewrite{YType::boolean, "soft-preempted-fr-rrewrite"},
    soft_preemption_timeout{YType::uint16, "soft-preemption-timeout"},
    source_address{YType::str, "source-address"},
    tunnel_id{YType::uint16, "tunnel-id"}
{
    yang_name = "current-soft-preemption-lsp"; yang_parent_name = "soft-preemption";
}

MplsLcacStandby::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::~CurrentSoftPreemptionLsp()
{
}

bool MplsLcacStandby::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::has_data() const
{
    return bandwidth_preempted.is_set
	|| bandwidth_type.is_set
	|| destination_address.is_set
	|| hold_priority.is_set
	|| lsp_id.is_set
	|| requested_bandwidth.is_set
	|| setup_priority.is_set
	|| soft_preempted.is_set
	|| soft_preempted_fr_rrewrite.is_set
	|| soft_preemption_timeout.is_set
	|| source_address.is_set
	|| tunnel_id.is_set;
}

bool MplsLcacStandby::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::has_operation() const
{
    return is_set(operation)
	|| is_set(bandwidth_preempted.operation)
	|| is_set(bandwidth_type.operation)
	|| is_set(destination_address.operation)
	|| is_set(hold_priority.operation)
	|| is_set(lsp_id.operation)
	|| is_set(requested_bandwidth.operation)
	|| is_set(setup_priority.operation)
	|| is_set(soft_preempted.operation)
	|| is_set(soft_preempted_fr_rrewrite.operation)
	|| is_set(soft_preemption_timeout.operation)
	|| is_set(source_address.operation)
	|| is_set(tunnel_id.operation);
}

std::string MplsLcacStandby::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "current-soft-preemption-lsp";

    return path_buffer.str();

}

EntityPath MplsLcacStandby::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CurrentSoftPreemptionLsp' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_preempted.is_set || is_set(bandwidth_preempted.operation)) leaf_name_data.push_back(bandwidth_preempted.get_name_leafdata());
    if (bandwidth_type.is_set || is_set(bandwidth_type.operation)) leaf_name_data.push_back(bandwidth_type.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.operation)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (requested_bandwidth.is_set || is_set(requested_bandwidth.operation)) leaf_name_data.push_back(requested_bandwidth.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.operation)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (soft_preempted.is_set || is_set(soft_preempted.operation)) leaf_name_data.push_back(soft_preempted.get_name_leafdata());
    if (soft_preempted_fr_rrewrite.is_set || is_set(soft_preempted_fr_rrewrite.operation)) leaf_name_data.push_back(soft_preempted_fr_rrewrite.get_name_leafdata());
    if (soft_preemption_timeout.is_set || is_set(soft_preemption_timeout.operation)) leaf_name_data.push_back(soft_preemption_timeout.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcacStandby::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcacStandby::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::get_children()
{
    return children;
}

void MplsLcacStandby::SoftPreemptions::SoftPreemption::CurrentSoftPreemptionLsp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth-preempted")
    {
        bandwidth_preempted = value;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
    }
    if(value_path == "requested-bandwidth")
    {
        requested_bandwidth = value;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
    }
    if(value_path == "soft-preempted")
    {
        soft_preempted = value;
    }
    if(value_path == "soft-preempted-fr-rrewrite")
    {
        soft_preempted_fr_rrewrite = value;
    }
    if(value_path == "soft-preemption-timeout")
    {
        soft_preemption_timeout = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

MplsLcac::MplsLcac()
    :
    admission_control(std::make_shared<MplsLcac::AdmissionControl>())
	,advertisements(std::make_shared<MplsLcac::Advertisements>())
	,bandwidth_account(std::make_shared<MplsLcac::BandwidthAccount>())
	,bandwidth_allocation(std::make_shared<MplsLcac::BandwidthAllocation>())
	,bfd_neighbors(std::make_shared<MplsLcac::BfdNeighbors>())
	,gmpls(std::make_shared<MplsLcac::Gmpls>())
	,link_information(std::make_shared<MplsLcac::LinkInformation>())
	,link_summary(std::make_shared<MplsLcac::LinkSummary>())
	,neighbors(std::make_shared<MplsLcac::Neighbors>())
	,preemption_events(std::make_shared<MplsLcac::PreemptionEvents>())
	,soft_preemption_global_info(std::make_shared<MplsLcac::SoftPreemptionGlobalInfo>())
	,soft_preemptions(std::make_shared<MplsLcac::SoftPreemptions>())
	,statistics(std::make_shared<MplsLcac::Statistics>())
{
    admission_control->parent = this;
    children["admission-control"] = admission_control;

    advertisements->parent = this;
    children["advertisements"] = advertisements;

    bandwidth_account->parent = this;
    children["bandwidth-account"] = bandwidth_account;

    bandwidth_allocation->parent = this;
    children["bandwidth-allocation"] = bandwidth_allocation;

    bfd_neighbors->parent = this;
    children["bfd-neighbors"] = bfd_neighbors;

    gmpls->parent = this;
    children["gmpls"] = gmpls;

    link_information->parent = this;
    children["link-information"] = link_information;

    link_summary->parent = this;
    children["link-summary"] = link_summary;

    neighbors->parent = this;
    children["neighbors"] = neighbors;

    preemption_events->parent = this;
    children["preemption-events"] = preemption_events;

    soft_preemption_global_info->parent = this;
    children["soft-preemption-global-info"] = soft_preemption_global_info;

    soft_preemptions->parent = this;
    children["soft-preemptions"] = soft_preemptions;

    statistics->parent = this;
    children["statistics"] = statistics;

    yang_name = "mpls-lcac"; yang_parent_name = "Cisco-IOS-XR-mpls-te-oper";
}

MplsLcac::~MplsLcac()
{
}

bool MplsLcac::has_data() const
{
    return (admission_control !=  nullptr && admission_control->has_data())
	|| (advertisements !=  nullptr && advertisements->has_data())
	|| (bandwidth_account !=  nullptr && bandwidth_account->has_data())
	|| (bandwidth_allocation !=  nullptr && bandwidth_allocation->has_data())
	|| (bfd_neighbors !=  nullptr && bfd_neighbors->has_data())
	|| (gmpls !=  nullptr && gmpls->has_data())
	|| (link_information !=  nullptr && link_information->has_data())
	|| (link_summary !=  nullptr && link_summary->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (preemption_events !=  nullptr && preemption_events->has_data())
	|| (soft_preemption_global_info !=  nullptr && soft_preemption_global_info->has_data())
	|| (soft_preemptions !=  nullptr && soft_preemptions->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool MplsLcac::has_operation() const
{
    return is_set(operation)
	|| (admission_control !=  nullptr && admission_control->has_operation())
	|| (advertisements !=  nullptr && advertisements->has_operation())
	|| (bandwidth_account !=  nullptr && bandwidth_account->has_operation())
	|| (bandwidth_allocation !=  nullptr && bandwidth_allocation->has_operation())
	|| (bfd_neighbors !=  nullptr && bfd_neighbors->has_operation())
	|| (gmpls !=  nullptr && gmpls->has_operation())
	|| (link_information !=  nullptr && link_information->has_operation())
	|| (link_summary !=  nullptr && link_summary->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (preemption_events !=  nullptr && preemption_events->has_operation())
	|| (soft_preemption_global_info !=  nullptr && soft_preemption_global_info->has_operation())
	|| (soft_preemptions !=  nullptr && soft_preemptions->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string MplsLcac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac";

    return path_buffer.str();

}

EntityPath MplsLcac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "admission-control")
    {
        if(admission_control != nullptr)
        {
            children["admission-control"] = admission_control;
        }
        else
        {
            admission_control = std::make_shared<MplsLcac::AdmissionControl>();
            admission_control->parent = this;
            children["admission-control"] = admission_control;
        }
        return children.at("admission-control");
    }

    if(child_yang_name == "advertisements")
    {
        if(advertisements != nullptr)
        {
            children["advertisements"] = advertisements;
        }
        else
        {
            advertisements = std::make_shared<MplsLcac::Advertisements>();
            advertisements->parent = this;
            children["advertisements"] = advertisements;
        }
        return children.at("advertisements");
    }

    if(child_yang_name == "bandwidth-account")
    {
        if(bandwidth_account != nullptr)
        {
            children["bandwidth-account"] = bandwidth_account;
        }
        else
        {
            bandwidth_account = std::make_shared<MplsLcac::BandwidthAccount>();
            bandwidth_account->parent = this;
            children["bandwidth-account"] = bandwidth_account;
        }
        return children.at("bandwidth-account");
    }

    if(child_yang_name == "bandwidth-allocation")
    {
        if(bandwidth_allocation != nullptr)
        {
            children["bandwidth-allocation"] = bandwidth_allocation;
        }
        else
        {
            bandwidth_allocation = std::make_shared<MplsLcac::BandwidthAllocation>();
            bandwidth_allocation->parent = this;
            children["bandwidth-allocation"] = bandwidth_allocation;
        }
        return children.at("bandwidth-allocation");
    }

    if(child_yang_name == "bfd-neighbors")
    {
        if(bfd_neighbors != nullptr)
        {
            children["bfd-neighbors"] = bfd_neighbors;
        }
        else
        {
            bfd_neighbors = std::make_shared<MplsLcac::BfdNeighbors>();
            bfd_neighbors->parent = this;
            children["bfd-neighbors"] = bfd_neighbors;
        }
        return children.at("bfd-neighbors");
    }

    if(child_yang_name == "gmpls")
    {
        if(gmpls != nullptr)
        {
            children["gmpls"] = gmpls;
        }
        else
        {
            gmpls = std::make_shared<MplsLcac::Gmpls>();
            gmpls->parent = this;
            children["gmpls"] = gmpls;
        }
        return children.at("gmpls");
    }

    if(child_yang_name == "link-information")
    {
        if(link_information != nullptr)
        {
            children["link-information"] = link_information;
        }
        else
        {
            link_information = std::make_shared<MplsLcac::LinkInformation>();
            link_information->parent = this;
            children["link-information"] = link_information;
        }
        return children.at("link-information");
    }

    if(child_yang_name == "link-summary")
    {
        if(link_summary != nullptr)
        {
            children["link-summary"] = link_summary;
        }
        else
        {
            link_summary = std::make_shared<MplsLcac::LinkSummary>();
            link_summary->parent = this;
            children["link-summary"] = link_summary;
        }
        return children.at("link-summary");
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors != nullptr)
        {
            children["neighbors"] = neighbors;
        }
        else
        {
            neighbors = std::make_shared<MplsLcac::Neighbors>();
            neighbors->parent = this;
            children["neighbors"] = neighbors;
        }
        return children.at("neighbors");
    }

    if(child_yang_name == "preemption-events")
    {
        if(preemption_events != nullptr)
        {
            children["preemption-events"] = preemption_events;
        }
        else
        {
            preemption_events = std::make_shared<MplsLcac::PreemptionEvents>();
            preemption_events->parent = this;
            children["preemption-events"] = preemption_events;
        }
        return children.at("preemption-events");
    }

    if(child_yang_name == "soft-preemption-global-info")
    {
        if(soft_preemption_global_info != nullptr)
        {
            children["soft-preemption-global-info"] = soft_preemption_global_info;
        }
        else
        {
            soft_preemption_global_info = std::make_shared<MplsLcac::SoftPreemptionGlobalInfo>();
            soft_preemption_global_info->parent = this;
            children["soft-preemption-global-info"] = soft_preemption_global_info;
        }
        return children.at("soft-preemption-global-info");
    }

    if(child_yang_name == "soft-preemptions")
    {
        if(soft_preemptions != nullptr)
        {
            children["soft-preemptions"] = soft_preemptions;
        }
        else
        {
            soft_preemptions = std::make_shared<MplsLcac::SoftPreemptions>();
            soft_preemptions->parent = this;
            children["soft-preemptions"] = soft_preemptions;
        }
        return children.at("soft-preemptions");
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
        else
        {
            statistics = std::make_shared<MplsLcac::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::get_children()
{
    if(children.find("admission-control") == children.end())
    {
        if(admission_control != nullptr)
        {
            children["admission-control"] = admission_control;
        }
    }

    if(children.find("advertisements") == children.end())
    {
        if(advertisements != nullptr)
        {
            children["advertisements"] = advertisements;
        }
    }

    if(children.find("bandwidth-account") == children.end())
    {
        if(bandwidth_account != nullptr)
        {
            children["bandwidth-account"] = bandwidth_account;
        }
    }

    if(children.find("bandwidth-allocation") == children.end())
    {
        if(bandwidth_allocation != nullptr)
        {
            children["bandwidth-allocation"] = bandwidth_allocation;
        }
    }

    if(children.find("bfd-neighbors") == children.end())
    {
        if(bfd_neighbors != nullptr)
        {
            children["bfd-neighbors"] = bfd_neighbors;
        }
    }

    if(children.find("gmpls") == children.end())
    {
        if(gmpls != nullptr)
        {
            children["gmpls"] = gmpls;
        }
    }

    if(children.find("link-information") == children.end())
    {
        if(link_information != nullptr)
        {
            children["link-information"] = link_information;
        }
    }

    if(children.find("link-summary") == children.end())
    {
        if(link_summary != nullptr)
        {
            children["link-summary"] = link_summary;
        }
    }

    if(children.find("neighbors") == children.end())
    {
        if(neighbors != nullptr)
        {
            children["neighbors"] = neighbors;
        }
    }

    if(children.find("preemption-events") == children.end())
    {
        if(preemption_events != nullptr)
        {
            children["preemption-events"] = preemption_events;
        }
    }

    if(children.find("soft-preemption-global-info") == children.end())
    {
        if(soft_preemption_global_info != nullptr)
        {
            children["soft-preemption-global-info"] = soft_preemption_global_info;
        }
    }

    if(children.find("soft-preemptions") == children.end())
    {
        if(soft_preemptions != nullptr)
        {
            children["soft-preemptions"] = soft_preemptions;
        }
    }

    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
    }

    return children;
}

void MplsLcac::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> MplsLcac::clone_ptr() const
{
    return std::make_shared<MplsLcac>();
}

std::string MplsLcac::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string MplsLcac::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function MplsLcac::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

MplsLcac::Neighbors::Neighbors()
{
    yang_name = "neighbors"; yang_parent_name = "mpls-lcac";
}

MplsLcac::Neighbors::~Neighbors()
{
}

bool MplsLcac::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcac::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLcac::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";

    return path_buffer.str();

}

EntityPath MplsLcac::Neighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcac::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(std::move(c));
        children[segment_path] = neighbor.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::Neighbors::get_children()
{
    for (auto const & c : neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLcac::Neighbors::set_value(const std::string & value_path, std::string value)
{
}

MplsLcac::Neighbors::Neighbor::Neighbor()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "neighbor"; yang_parent_name = "neighbors";
}

MplsLcac::Neighbors::Neighbor::~Neighbor()
{
}

bool MplsLcac::Neighbors::Neighbor::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return interface_name.is_set;
}

bool MplsLcac::Neighbors::Neighbor::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string MplsLcac::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath MplsLcac::Neighbors::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/neighbors/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcac::Neighbors::Neighbor::Neighbor_>();
        c->parent = this;
        neighbor.push_back(std::move(c));
        children[segment_path] = neighbor.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::Neighbors::Neighbor::get_children()
{
    for (auto const & c : neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLcac::Neighbors::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

MplsLcac::Neighbors::Neighbor::Neighbor_::Neighbor_()
    :
    area_id{YType::str, "area-id"},
    interface_name{YType::str, "interface-name"},
    neighbor_address{YType::str, "neighbor-address"},
    neighbor_id{YType::str, "neighbor-id"}
{
    yang_name = "neighbor"; yang_parent_name = "neighbor";
}

MplsLcac::Neighbors::Neighbor::Neighbor_::~Neighbor_()
{
}

bool MplsLcac::Neighbors::Neighbor::Neighbor_::has_data() const
{
    return area_id.is_set
	|| interface_name.is_set
	|| neighbor_address.is_set
	|| neighbor_id.is_set;
}

bool MplsLcac::Neighbors::Neighbor::Neighbor_::has_operation() const
{
    return is_set(operation)
	|| is_set(area_id.operation)
	|| is_set(interface_name.operation)
	|| is_set(neighbor_address.operation)
	|| is_set(neighbor_id.operation);
}

std::string MplsLcac::Neighbors::Neighbor::Neighbor_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";

    return path_buffer.str();

}

EntityPath MplsLcac::Neighbors::Neighbor::Neighbor_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor_' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::Neighbors::Neighbor::Neighbor_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::Neighbors::Neighbor::Neighbor_::get_children()
{
    return children;
}

void MplsLcac::Neighbors::Neighbor::Neighbor_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
}

MplsLcac::PreemptionEvents::PreemptionEvents()
{
    yang_name = "preemption-events"; yang_parent_name = "mpls-lcac";
}

MplsLcac::PreemptionEvents::~PreemptionEvents()
{
}

bool MplsLcac::PreemptionEvents::has_data() const
{
    for (std::size_t index=0; index<preemption_event.size(); index++)
    {
        if(preemption_event[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcac::PreemptionEvents::has_operation() const
{
    for (std::size_t index=0; index<preemption_event.size(); index++)
    {
        if(preemption_event[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLcac::PreemptionEvents::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preemption-events";

    return path_buffer.str();

}

EntityPath MplsLcac::PreemptionEvents::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::PreemptionEvents::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "preemption-event")
    {
        for(auto const & c : preemption_event)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcac::PreemptionEvents::PreemptionEvent>();
        c->parent = this;
        preemption_event.push_back(std::move(c));
        children[segment_path] = preemption_event.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::PreemptionEvents::get_children()
{
    for (auto const & c : preemption_event)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLcac::PreemptionEvents::set_value(const std::string & value_path, std::string value)
{
}

MplsLcac::PreemptionEvents::PreemptionEvent::PreemptionEvent()
    :
    event_index{YType::uint32, "event-index"},
    bandwidth_overshoot0{YType::uint64, "bandwidth-overshoot0"},
    bandwidth_overshoot1{YType::uint64, "bandwidth-overshoot1"},
    bandwidth_type{YType::uint8, "bandwidth-type"},
    destination_address{YType::str, "destination-address"},
    event_time{YType::uint32, "event-time"},
    hard_preempted_bandwidth_bc0{YType::uint64, "hard-preempted-bandwidth-bc0"},
    hard_preempted_bandwidth_bc1{YType::uint64, "hard-preempted-bandwidth-bc1"},
    hard_preempted_ls_ps{YType::uint16, "hard-preempted-ls-ps"},
    hard_preempted_tunnels{YType::uint16, "hard-preempted-tunnels"},
    hold_priority{YType::uint8, "hold-priority"},
    interface_name{YType::str, "interface-name"},
    ls_ps{YType::uint16, "ls-ps"},
    lsp_id{YType::uint16, "lsp-id"},
    new_bandwidth_bc0{YType::uint64, "new-bandwidth-bc0"},
    new_bandwidth_bc1{YType::uint64, "new-bandwidth-bc1"},
    old_bandwidth_bc0{YType::uint64, "old-bandwidth-bc0"},
    old_bandwidth_bc1{YType::uint64, "old-bandwidth-bc1"},
    requested_bandwidth{YType::uint64, "requested-bandwidth"},
    setup_priority{YType::uint8, "setup-priority"},
    soft_preempted_fr_rrewrite_bandwidth_bc0{YType::uint64, "soft-preempted-fr-rrewrite-bandwidth-bc0"},
    soft_preempted_fr_rrewrite_bandwidth_bc1{YType::uint64, "soft-preempted-fr-rrewrite-bandwidth-bc1"},
    soft_preempted_ls_ps{YType::uint16, "soft-preempted-ls-ps"},
    soft_preempted_ls_ps_fr_rrewrite{YType::uint16, "soft-preempted-ls-ps-fr-rrewrite"},
    soft_preempted_tunnels{YType::uint16, "soft-preempted-tunnels"},
    soft_preempted_tunnels_fr_rrewrite{YType::uint16, "soft-preempted-tunnels-fr-rrewrite"},
    softly_preempted_bandwidth_bc0{YType::uint64, "softly-preempted-bandwidth-bc0"},
    softly_preempted_bandwidth_bc1{YType::uint64, "softly-preempted-bandwidth-bc1"},
    source_address{YType::str, "source-address"},
    total_preempted_bandwidth_bc0{YType::uint64, "total-preempted-bandwidth-bc0"},
    total_preempted_bandwidth_bc1{YType::uint64, "total-preempted-bandwidth-bc1"},
    tunnel_id{YType::uint16, "tunnel-id"},
    tunnels{YType::uint16, "tunnels"}
{
    yang_name = "preemption-event"; yang_parent_name = "preemption-events";
}

MplsLcac::PreemptionEvents::PreemptionEvent::~PreemptionEvent()
{
}

bool MplsLcac::PreemptionEvents::PreemptionEvent::has_data() const
{
    for (std::size_t index=0; index<lsp.size(); index++)
    {
        if(lsp[index]->has_data())
            return true;
    }
    return event_index.is_set
	|| bandwidth_overshoot0.is_set
	|| bandwidth_overshoot1.is_set
	|| bandwidth_type.is_set
	|| destination_address.is_set
	|| event_time.is_set
	|| hard_preempted_bandwidth_bc0.is_set
	|| hard_preempted_bandwidth_bc1.is_set
	|| hard_preempted_ls_ps.is_set
	|| hard_preempted_tunnels.is_set
	|| hold_priority.is_set
	|| interface_name.is_set
	|| ls_ps.is_set
	|| lsp_id.is_set
	|| new_bandwidth_bc0.is_set
	|| new_bandwidth_bc1.is_set
	|| old_bandwidth_bc0.is_set
	|| old_bandwidth_bc1.is_set
	|| requested_bandwidth.is_set
	|| setup_priority.is_set
	|| soft_preempted_fr_rrewrite_bandwidth_bc0.is_set
	|| soft_preempted_fr_rrewrite_bandwidth_bc1.is_set
	|| soft_preempted_ls_ps.is_set
	|| soft_preempted_ls_ps_fr_rrewrite.is_set
	|| soft_preempted_tunnels.is_set
	|| soft_preempted_tunnels_fr_rrewrite.is_set
	|| softly_preempted_bandwidth_bc0.is_set
	|| softly_preempted_bandwidth_bc1.is_set
	|| source_address.is_set
	|| total_preempted_bandwidth_bc0.is_set
	|| total_preempted_bandwidth_bc1.is_set
	|| tunnel_id.is_set
	|| tunnels.is_set;
}

bool MplsLcac::PreemptionEvents::PreemptionEvent::has_operation() const
{
    for (std::size_t index=0; index<lsp.size(); index++)
    {
        if(lsp[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(event_index.operation)
	|| is_set(bandwidth_overshoot0.operation)
	|| is_set(bandwidth_overshoot1.operation)
	|| is_set(bandwidth_type.operation)
	|| is_set(destination_address.operation)
	|| is_set(event_time.operation)
	|| is_set(hard_preempted_bandwidth_bc0.operation)
	|| is_set(hard_preempted_bandwidth_bc1.operation)
	|| is_set(hard_preempted_ls_ps.operation)
	|| is_set(hard_preempted_tunnels.operation)
	|| is_set(hold_priority.operation)
	|| is_set(interface_name.operation)
	|| is_set(ls_ps.operation)
	|| is_set(lsp_id.operation)
	|| is_set(new_bandwidth_bc0.operation)
	|| is_set(new_bandwidth_bc1.operation)
	|| is_set(old_bandwidth_bc0.operation)
	|| is_set(old_bandwidth_bc1.operation)
	|| is_set(requested_bandwidth.operation)
	|| is_set(setup_priority.operation)
	|| is_set(soft_preempted_fr_rrewrite_bandwidth_bc0.operation)
	|| is_set(soft_preempted_fr_rrewrite_bandwidth_bc1.operation)
	|| is_set(soft_preempted_ls_ps.operation)
	|| is_set(soft_preempted_ls_ps_fr_rrewrite.operation)
	|| is_set(soft_preempted_tunnels.operation)
	|| is_set(soft_preempted_tunnels_fr_rrewrite.operation)
	|| is_set(softly_preempted_bandwidth_bc0.operation)
	|| is_set(softly_preempted_bandwidth_bc1.operation)
	|| is_set(source_address.operation)
	|| is_set(total_preempted_bandwidth_bc0.operation)
	|| is_set(total_preempted_bandwidth_bc1.operation)
	|| is_set(tunnel_id.operation)
	|| is_set(tunnels.operation);
}

std::string MplsLcac::PreemptionEvents::PreemptionEvent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preemption-event" <<"[event-index='" <<event_index <<"']";

    return path_buffer.str();

}

EntityPath MplsLcac::PreemptionEvents::PreemptionEvent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/preemption-events/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_index.is_set || is_set(event_index.operation)) leaf_name_data.push_back(event_index.get_name_leafdata());
    if (bandwidth_overshoot0.is_set || is_set(bandwidth_overshoot0.operation)) leaf_name_data.push_back(bandwidth_overshoot0.get_name_leafdata());
    if (bandwidth_overshoot1.is_set || is_set(bandwidth_overshoot1.operation)) leaf_name_data.push_back(bandwidth_overshoot1.get_name_leafdata());
    if (bandwidth_type.is_set || is_set(bandwidth_type.operation)) leaf_name_data.push_back(bandwidth_type.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (event_time.is_set || is_set(event_time.operation)) leaf_name_data.push_back(event_time.get_name_leafdata());
    if (hard_preempted_bandwidth_bc0.is_set || is_set(hard_preempted_bandwidth_bc0.operation)) leaf_name_data.push_back(hard_preempted_bandwidth_bc0.get_name_leafdata());
    if (hard_preempted_bandwidth_bc1.is_set || is_set(hard_preempted_bandwidth_bc1.operation)) leaf_name_data.push_back(hard_preempted_bandwidth_bc1.get_name_leafdata());
    if (hard_preempted_ls_ps.is_set || is_set(hard_preempted_ls_ps.operation)) leaf_name_data.push_back(hard_preempted_ls_ps.get_name_leafdata());
    if (hard_preempted_tunnels.is_set || is_set(hard_preempted_tunnels.operation)) leaf_name_data.push_back(hard_preempted_tunnels.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.operation)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (ls_ps.is_set || is_set(ls_ps.operation)) leaf_name_data.push_back(ls_ps.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (new_bandwidth_bc0.is_set || is_set(new_bandwidth_bc0.operation)) leaf_name_data.push_back(new_bandwidth_bc0.get_name_leafdata());
    if (new_bandwidth_bc1.is_set || is_set(new_bandwidth_bc1.operation)) leaf_name_data.push_back(new_bandwidth_bc1.get_name_leafdata());
    if (old_bandwidth_bc0.is_set || is_set(old_bandwidth_bc0.operation)) leaf_name_data.push_back(old_bandwidth_bc0.get_name_leafdata());
    if (old_bandwidth_bc1.is_set || is_set(old_bandwidth_bc1.operation)) leaf_name_data.push_back(old_bandwidth_bc1.get_name_leafdata());
    if (requested_bandwidth.is_set || is_set(requested_bandwidth.operation)) leaf_name_data.push_back(requested_bandwidth.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.operation)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (soft_preempted_fr_rrewrite_bandwidth_bc0.is_set || is_set(soft_preempted_fr_rrewrite_bandwidth_bc0.operation)) leaf_name_data.push_back(soft_preempted_fr_rrewrite_bandwidth_bc0.get_name_leafdata());
    if (soft_preempted_fr_rrewrite_bandwidth_bc1.is_set || is_set(soft_preempted_fr_rrewrite_bandwidth_bc1.operation)) leaf_name_data.push_back(soft_preempted_fr_rrewrite_bandwidth_bc1.get_name_leafdata());
    if (soft_preempted_ls_ps.is_set || is_set(soft_preempted_ls_ps.operation)) leaf_name_data.push_back(soft_preempted_ls_ps.get_name_leafdata());
    if (soft_preempted_ls_ps_fr_rrewrite.is_set || is_set(soft_preempted_ls_ps_fr_rrewrite.operation)) leaf_name_data.push_back(soft_preempted_ls_ps_fr_rrewrite.get_name_leafdata());
    if (soft_preempted_tunnels.is_set || is_set(soft_preempted_tunnels.operation)) leaf_name_data.push_back(soft_preempted_tunnels.get_name_leafdata());
    if (soft_preempted_tunnels_fr_rrewrite.is_set || is_set(soft_preempted_tunnels_fr_rrewrite.operation)) leaf_name_data.push_back(soft_preempted_tunnels_fr_rrewrite.get_name_leafdata());
    if (softly_preempted_bandwidth_bc0.is_set || is_set(softly_preempted_bandwidth_bc0.operation)) leaf_name_data.push_back(softly_preempted_bandwidth_bc0.get_name_leafdata());
    if (softly_preempted_bandwidth_bc1.is_set || is_set(softly_preempted_bandwidth_bc1.operation)) leaf_name_data.push_back(softly_preempted_bandwidth_bc1.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (total_preempted_bandwidth_bc0.is_set || is_set(total_preempted_bandwidth_bc0.operation)) leaf_name_data.push_back(total_preempted_bandwidth_bc0.get_name_leafdata());
    if (total_preempted_bandwidth_bc1.is_set || is_set(total_preempted_bandwidth_bc1.operation)) leaf_name_data.push_back(total_preempted_bandwidth_bc1.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());
    if (tunnels.is_set || is_set(tunnels.operation)) leaf_name_data.push_back(tunnels.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::PreemptionEvents::PreemptionEvent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsp")
    {
        for(auto const & c : lsp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcac::PreemptionEvents::PreemptionEvent::Lsp>();
        c->parent = this;
        lsp.push_back(std::move(c));
        children[segment_path] = lsp.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::PreemptionEvents::PreemptionEvent::get_children()
{
    for (auto const & c : lsp)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLcac::PreemptionEvents::PreemptionEvent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "event-index")
    {
        event_index = value;
    }
    if(value_path == "bandwidth-overshoot0")
    {
        bandwidth_overshoot0 = value;
    }
    if(value_path == "bandwidth-overshoot1")
    {
        bandwidth_overshoot1 = value;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "event-time")
    {
        event_time = value;
    }
    if(value_path == "hard-preempted-bandwidth-bc0")
    {
        hard_preempted_bandwidth_bc0 = value;
    }
    if(value_path == "hard-preempted-bandwidth-bc1")
    {
        hard_preempted_bandwidth_bc1 = value;
    }
    if(value_path == "hard-preempted-ls-ps")
    {
        hard_preempted_ls_ps = value;
    }
    if(value_path == "hard-preempted-tunnels")
    {
        hard_preempted_tunnels = value;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "ls-ps")
    {
        ls_ps = value;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
    }
    if(value_path == "new-bandwidth-bc0")
    {
        new_bandwidth_bc0 = value;
    }
    if(value_path == "new-bandwidth-bc1")
    {
        new_bandwidth_bc1 = value;
    }
    if(value_path == "old-bandwidth-bc0")
    {
        old_bandwidth_bc0 = value;
    }
    if(value_path == "old-bandwidth-bc1")
    {
        old_bandwidth_bc1 = value;
    }
    if(value_path == "requested-bandwidth")
    {
        requested_bandwidth = value;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
    }
    if(value_path == "soft-preempted-fr-rrewrite-bandwidth-bc0")
    {
        soft_preempted_fr_rrewrite_bandwidth_bc0 = value;
    }
    if(value_path == "soft-preempted-fr-rrewrite-bandwidth-bc1")
    {
        soft_preempted_fr_rrewrite_bandwidth_bc1 = value;
    }
    if(value_path == "soft-preempted-ls-ps")
    {
        soft_preempted_ls_ps = value;
    }
    if(value_path == "soft-preempted-ls-ps-fr-rrewrite")
    {
        soft_preempted_ls_ps_fr_rrewrite = value;
    }
    if(value_path == "soft-preempted-tunnels")
    {
        soft_preempted_tunnels = value;
    }
    if(value_path == "soft-preempted-tunnels-fr-rrewrite")
    {
        soft_preempted_tunnels_fr_rrewrite = value;
    }
    if(value_path == "softly-preempted-bandwidth-bc0")
    {
        softly_preempted_bandwidth_bc0 = value;
    }
    if(value_path == "softly-preempted-bandwidth-bc1")
    {
        softly_preempted_bandwidth_bc1 = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "total-preempted-bandwidth-bc0")
    {
        total_preempted_bandwidth_bc0 = value;
    }
    if(value_path == "total-preempted-bandwidth-bc1")
    {
        total_preempted_bandwidth_bc1 = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
    if(value_path == "tunnels")
    {
        tunnels = value;
    }
}

MplsLcac::PreemptionEvents::PreemptionEvent::Lsp::Lsp()
    :
    bandwidth_preempted{YType::boolean, "bandwidth-preempted"},
    bandwidth_type{YType::uint8, "bandwidth-type"},
    destination_address{YType::str, "destination-address"},
    hold_priority{YType::uint8, "hold-priority"},
    lsp_id{YType::uint16, "lsp-id"},
    requested_bandwidth{YType::uint64, "requested-bandwidth"},
    setup_priority{YType::uint8, "setup-priority"},
    soft_preempted{YType::boolean, "soft-preempted"},
    soft_preempted_fr_rrewrite{YType::boolean, "soft-preempted-fr-rrewrite"},
    soft_preemption_timeout{YType::uint16, "soft-preemption-timeout"},
    source_address{YType::str, "source-address"},
    tunnel_id{YType::uint16, "tunnel-id"}
{
    yang_name = "lsp"; yang_parent_name = "preemption-event";
}

MplsLcac::PreemptionEvents::PreemptionEvent::Lsp::~Lsp()
{
}

bool MplsLcac::PreemptionEvents::PreemptionEvent::Lsp::has_data() const
{
    return bandwidth_preempted.is_set
	|| bandwidth_type.is_set
	|| destination_address.is_set
	|| hold_priority.is_set
	|| lsp_id.is_set
	|| requested_bandwidth.is_set
	|| setup_priority.is_set
	|| soft_preempted.is_set
	|| soft_preempted_fr_rrewrite.is_set
	|| soft_preemption_timeout.is_set
	|| source_address.is_set
	|| tunnel_id.is_set;
}

bool MplsLcac::PreemptionEvents::PreemptionEvent::Lsp::has_operation() const
{
    return is_set(operation)
	|| is_set(bandwidth_preempted.operation)
	|| is_set(bandwidth_type.operation)
	|| is_set(destination_address.operation)
	|| is_set(hold_priority.operation)
	|| is_set(lsp_id.operation)
	|| is_set(requested_bandwidth.operation)
	|| is_set(setup_priority.operation)
	|| is_set(soft_preempted.operation)
	|| is_set(soft_preempted_fr_rrewrite.operation)
	|| is_set(soft_preemption_timeout.operation)
	|| is_set(source_address.operation)
	|| is_set(tunnel_id.operation);
}

std::string MplsLcac::PreemptionEvents::PreemptionEvent::Lsp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp";

    return path_buffer.str();

}

EntityPath MplsLcac::PreemptionEvents::PreemptionEvent::Lsp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lsp' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_preempted.is_set || is_set(bandwidth_preempted.operation)) leaf_name_data.push_back(bandwidth_preempted.get_name_leafdata());
    if (bandwidth_type.is_set || is_set(bandwidth_type.operation)) leaf_name_data.push_back(bandwidth_type.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.operation)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (lsp_id.is_set || is_set(lsp_id.operation)) leaf_name_data.push_back(lsp_id.get_name_leafdata());
    if (requested_bandwidth.is_set || is_set(requested_bandwidth.operation)) leaf_name_data.push_back(requested_bandwidth.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.operation)) leaf_name_data.push_back(setup_priority.get_name_leafdata());
    if (soft_preempted.is_set || is_set(soft_preempted.operation)) leaf_name_data.push_back(soft_preempted.get_name_leafdata());
    if (soft_preempted_fr_rrewrite.is_set || is_set(soft_preempted_fr_rrewrite.operation)) leaf_name_data.push_back(soft_preempted_fr_rrewrite.get_name_leafdata());
    if (soft_preemption_timeout.is_set || is_set(soft_preemption_timeout.operation)) leaf_name_data.push_back(soft_preemption_timeout.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::PreemptionEvents::PreemptionEvent::Lsp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::PreemptionEvents::PreemptionEvent::Lsp::get_children()
{
    return children;
}

void MplsLcac::PreemptionEvents::PreemptionEvent::Lsp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth-preempted")
    {
        bandwidth_preempted = value;
    }
    if(value_path == "bandwidth-type")
    {
        bandwidth_type = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
    }
    if(value_path == "lsp-id")
    {
        lsp_id = value;
    }
    if(value_path == "requested-bandwidth")
    {
        requested_bandwidth = value;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
    }
    if(value_path == "soft-preempted")
    {
        soft_preempted = value;
    }
    if(value_path == "soft-preempted-fr-rrewrite")
    {
        soft_preempted_fr_rrewrite = value;
    }
    if(value_path == "soft-preemption-timeout")
    {
        soft_preemption_timeout = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "tunnel-id")
    {
        tunnel_id = value;
    }
}

MplsLcac::Advertisements::Advertisements()
    :
    ds_te_mode{YType::enumeration, "ds-te-mode"},
    flooding_status_message{YType::str, "flooding-status-message"},
    last_flooding_time{YType::uint32, "last-flooding-time"},
    last_flooding_trigger{YType::enumeration, "last-flooding-trigger"},
    next_flooding_time{YType::uint32, "next-flooding-time"}
{
    yang_name = "advertisements"; yang_parent_name = "mpls-lcac";
}

MplsLcac::Advertisements::~Advertisements()
{
}

bool MplsLcac::Advertisements::has_data() const
{
    for (std::size_t index=0; index<advertized_areas.size(); index++)
    {
        if(advertized_areas[index]->has_data())
            return true;
    }
    return ds_te_mode.is_set
	|| flooding_status_message.is_set
	|| last_flooding_time.is_set
	|| last_flooding_trigger.is_set
	|| next_flooding_time.is_set;
}

bool MplsLcac::Advertisements::has_operation() const
{
    for (std::size_t index=0; index<advertized_areas.size(); index++)
    {
        if(advertized_areas[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(ds_te_mode.operation)
	|| is_set(flooding_status_message.operation)
	|| is_set(last_flooding_time.operation)
	|| is_set(last_flooding_trigger.operation)
	|| is_set(next_flooding_time.operation);
}

std::string MplsLcac::Advertisements::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertisements";

    return path_buffer.str();

}

EntityPath MplsLcac::Advertisements::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ds_te_mode.is_set || is_set(ds_te_mode.operation)) leaf_name_data.push_back(ds_te_mode.get_name_leafdata());
    if (flooding_status_message.is_set || is_set(flooding_status_message.operation)) leaf_name_data.push_back(flooding_status_message.get_name_leafdata());
    if (last_flooding_time.is_set || is_set(last_flooding_time.operation)) leaf_name_data.push_back(last_flooding_time.get_name_leafdata());
    if (last_flooding_trigger.is_set || is_set(last_flooding_trigger.operation)) leaf_name_data.push_back(last_flooding_trigger.get_name_leafdata());
    if (next_flooding_time.is_set || is_set(next_flooding_time.operation)) leaf_name_data.push_back(next_flooding_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::Advertisements::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "advertized-areas")
    {
        for(auto const & c : advertized_areas)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcac::Advertisements::AdvertizedAreas>();
        c->parent = this;
        advertized_areas.push_back(std::move(c));
        children[segment_path] = advertized_areas.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::Advertisements::get_children()
{
    for (auto const & c : advertized_areas)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLcac::Advertisements::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ds-te-mode")
    {
        ds_te_mode = value;
    }
    if(value_path == "flooding-status-message")
    {
        flooding_status_message = value;
    }
    if(value_path == "last-flooding-time")
    {
        last_flooding_time = value;
    }
    if(value_path == "last-flooding-trigger")
    {
        last_flooding_trigger = value;
    }
    if(value_path == "next-flooding-time")
    {
        next_flooding_time = value;
    }
}

MplsLcac::Advertisements::AdvertizedAreas::AdvertizedAreas()
    :
    igp_area_id{YType::str, "igp-area-id"},
    protocol{YType::enumeration, "protocol"},
    router_id{YType::str, "router-id"},
    system_id{YType::str, "system-id"}
{
    yang_name = "advertized-areas"; yang_parent_name = "advertisements";
}

MplsLcac::Advertisements::AdvertizedAreas::~AdvertizedAreas()
{
}

bool MplsLcac::Advertisements::AdvertizedAreas::has_data() const
{
    for (std::size_t index=0; index<flooded_link.size(); index++)
    {
        if(flooded_link[index]->has_data())
            return true;
    }
    return igp_area_id.is_set
	|| protocol.is_set
	|| router_id.is_set
	|| system_id.is_set;
}

bool MplsLcac::Advertisements::AdvertizedAreas::has_operation() const
{
    for (std::size_t index=0; index<flooded_link.size(); index++)
    {
        if(flooded_link[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(igp_area_id.operation)
	|| is_set(protocol.operation)
	|| is_set(router_id.operation)
	|| is_set(system_id.operation);
}

std::string MplsLcac::Advertisements::AdvertizedAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertized-areas";

    return path_buffer.str();

}

EntityPath MplsLcac::Advertisements::AdvertizedAreas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/advertisements/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_area_id.is_set || is_set(igp_area_id.operation)) leaf_name_data.push_back(igp_area_id.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (system_id.is_set || is_set(system_id.operation)) leaf_name_data.push_back(system_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::Advertisements::AdvertizedAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flooded-link")
    {
        for(auto const & c : flooded_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcac::Advertisements::AdvertizedAreas::FloodedLink>();
        c->parent = this;
        flooded_link.push_back(std::move(c));
        children[segment_path] = flooded_link.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::Advertisements::AdvertizedAreas::get_children()
{
    for (auto const & c : flooded_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLcac::Advertisements::AdvertizedAreas::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "igp-area-id")
    {
        igp_area_id = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
    if(value_path == "system-id")
    {
        system_id = value;
    }
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::FloodedLink()
    :
    affinity_attribute_flags{YType::uint32, "affinity-attribute-flags"},
    bandwidth_units{YType::enumeration, "bandwidth-units"},
    bcm_id{YType::uint16, "bcm-id"},
    designated_router_igp_id{YType::str, "designated-router-igp-id"},
    extended_affinity_attribute_flag{YType::uint32, "extended-affinity-attribute-flag"},
    igp_metric{YType::uint32, "igp-metric"},
    igp_neighbor_address{YType::str, "igp-neighbor-address"},
    incoming_interface_id{YType::uint32, "incoming-interface-id"},
    interface_name{YType::str, "interface-name"},
    is_designated_router{YType::boolean, "is-designated-router"},
    is_receiving_reservable_bandwidth_enabled{YType::boolean, "is-receiving-reservable-bandwidth-enabled"},
    is_transmitting_reservable_bandwidth_enabled{YType::boolean, "is-transmitting-reservable-bandwidth-enabled"},
    link_address{YType::str, "link-address"},
    link_id{YType::uint16, "link-id"},
    link_maximum_reservable_bandwidth{YType::uint32, "link-maximum-reservable-bandwidth"},
    neighbor_igp_id{YType::str, "neighbor-igp-id"},
    outgoing_interface_id{YType::uint32, "outgoing-interface-id"},
    physical_bandwidth{YType::uint32, "physical-bandwidth"},
    receiving_direction{YType::enumeration, "receiving-direction"},
    reservable_pool0_bandwidth{YType::uint32, "reservable-pool0-bandwidth"},
    reservable_pool1_bandwidth{YType::uint32, "reservable-pool1-bandwidth"},
    subnet_type{YType::enumeration, "subnet-type"},
    te_metric{YType::uint32, "te-metric"},
    transmitting_direction{YType::enumeration, "transmitting-direction"},
    uni_link_delay{YType::uint32, "uni-link-delay"}
    	,
    odu_link_capabilities(std::make_shared<MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities>())
{
    odu_link_capabilities->parent = this;
    children["odu-link-capabilities"] = odu_link_capabilities;

    yang_name = "flooded-link"; yang_parent_name = "advertized-areas";
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::~FloodedLink()
{
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::has_data() const
{
    for (std::size_t index=0; index<receiving_reservable_bandwidth.size(); index++)
    {
        if(receiving_reservable_bandwidth[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<transmitting_reservable_bandwidth.size(); index++)
    {
        if(transmitting_reservable_bandwidth[index]->has_data())
            return true;
    }
    for (auto const & leaf : extended_affinity_attribute_flag.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return affinity_attribute_flags.is_set
	|| bandwidth_units.is_set
	|| bcm_id.is_set
	|| designated_router_igp_id.is_set
	|| igp_metric.is_set
	|| igp_neighbor_address.is_set
	|| incoming_interface_id.is_set
	|| interface_name.is_set
	|| is_designated_router.is_set
	|| is_receiving_reservable_bandwidth_enabled.is_set
	|| is_transmitting_reservable_bandwidth_enabled.is_set
	|| link_address.is_set
	|| link_id.is_set
	|| link_maximum_reservable_bandwidth.is_set
	|| neighbor_igp_id.is_set
	|| outgoing_interface_id.is_set
	|| physical_bandwidth.is_set
	|| receiving_direction.is_set
	|| reservable_pool0_bandwidth.is_set
	|| reservable_pool1_bandwidth.is_set
	|| subnet_type.is_set
	|| te_metric.is_set
	|| transmitting_direction.is_set
	|| uni_link_delay.is_set
	|| (odu_link_capabilities !=  nullptr && odu_link_capabilities->has_data());
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::has_operation() const
{
    for (std::size_t index=0; index<receiving_reservable_bandwidth.size(); index++)
    {
        if(receiving_reservable_bandwidth[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<transmitting_reservable_bandwidth.size(); index++)
    {
        if(transmitting_reservable_bandwidth[index]->has_operation())
            return true;
    }
    for (auto const & leaf : extended_affinity_attribute_flag.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(affinity_attribute_flags.operation)
	|| is_set(bandwidth_units.operation)
	|| is_set(bcm_id.operation)
	|| is_set(designated_router_igp_id.operation)
	|| is_set(extended_affinity_attribute_flag.operation)
	|| is_set(igp_metric.operation)
	|| is_set(igp_neighbor_address.operation)
	|| is_set(incoming_interface_id.operation)
	|| is_set(interface_name.operation)
	|| is_set(is_designated_router.operation)
	|| is_set(is_receiving_reservable_bandwidth_enabled.operation)
	|| is_set(is_transmitting_reservable_bandwidth_enabled.operation)
	|| is_set(link_address.operation)
	|| is_set(link_id.operation)
	|| is_set(link_maximum_reservable_bandwidth.operation)
	|| is_set(neighbor_igp_id.operation)
	|| is_set(outgoing_interface_id.operation)
	|| is_set(physical_bandwidth.operation)
	|| is_set(receiving_direction.operation)
	|| is_set(reservable_pool0_bandwidth.operation)
	|| is_set(reservable_pool1_bandwidth.operation)
	|| is_set(subnet_type.operation)
	|| is_set(te_metric.operation)
	|| is_set(transmitting_direction.operation)
	|| is_set(uni_link_delay.operation)
	|| (odu_link_capabilities !=  nullptr && odu_link_capabilities->has_operation());
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooded-link";

    return path_buffer.str();

}

EntityPath MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/advertisements/advertized-areas/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_attribute_flags.is_set || is_set(affinity_attribute_flags.operation)) leaf_name_data.push_back(affinity_attribute_flags.get_name_leafdata());
    if (bandwidth_units.is_set || is_set(bandwidth_units.operation)) leaf_name_data.push_back(bandwidth_units.get_name_leafdata());
    if (bcm_id.is_set || is_set(bcm_id.operation)) leaf_name_data.push_back(bcm_id.get_name_leafdata());
    if (designated_router_igp_id.is_set || is_set(designated_router_igp_id.operation)) leaf_name_data.push_back(designated_router_igp_id.get_name_leafdata());
    if (igp_metric.is_set || is_set(igp_metric.operation)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (igp_neighbor_address.is_set || is_set(igp_neighbor_address.operation)) leaf_name_data.push_back(igp_neighbor_address.get_name_leafdata());
    if (incoming_interface_id.is_set || is_set(incoming_interface_id.operation)) leaf_name_data.push_back(incoming_interface_id.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_designated_router.is_set || is_set(is_designated_router.operation)) leaf_name_data.push_back(is_designated_router.get_name_leafdata());
    if (is_receiving_reservable_bandwidth_enabled.is_set || is_set(is_receiving_reservable_bandwidth_enabled.operation)) leaf_name_data.push_back(is_receiving_reservable_bandwidth_enabled.get_name_leafdata());
    if (is_transmitting_reservable_bandwidth_enabled.is_set || is_set(is_transmitting_reservable_bandwidth_enabled.operation)) leaf_name_data.push_back(is_transmitting_reservable_bandwidth_enabled.get_name_leafdata());
    if (link_address.is_set || is_set(link_address.operation)) leaf_name_data.push_back(link_address.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.operation)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (link_maximum_reservable_bandwidth.is_set || is_set(link_maximum_reservable_bandwidth.operation)) leaf_name_data.push_back(link_maximum_reservable_bandwidth.get_name_leafdata());
    if (neighbor_igp_id.is_set || is_set(neighbor_igp_id.operation)) leaf_name_data.push_back(neighbor_igp_id.get_name_leafdata());
    if (outgoing_interface_id.is_set || is_set(outgoing_interface_id.operation)) leaf_name_data.push_back(outgoing_interface_id.get_name_leafdata());
    if (physical_bandwidth.is_set || is_set(physical_bandwidth.operation)) leaf_name_data.push_back(physical_bandwidth.get_name_leafdata());
    if (receiving_direction.is_set || is_set(receiving_direction.operation)) leaf_name_data.push_back(receiving_direction.get_name_leafdata());
    if (reservable_pool0_bandwidth.is_set || is_set(reservable_pool0_bandwidth.operation)) leaf_name_data.push_back(reservable_pool0_bandwidth.get_name_leafdata());
    if (reservable_pool1_bandwidth.is_set || is_set(reservable_pool1_bandwidth.operation)) leaf_name_data.push_back(reservable_pool1_bandwidth.get_name_leafdata());
    if (subnet_type.is_set || is_set(subnet_type.operation)) leaf_name_data.push_back(subnet_type.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.operation)) leaf_name_data.push_back(te_metric.get_name_leafdata());
    if (transmitting_direction.is_set || is_set(transmitting_direction.operation)) leaf_name_data.push_back(transmitting_direction.get_name_leafdata());
    if (uni_link_delay.is_set || is_set(uni_link_delay.operation)) leaf_name_data.push_back(uni_link_delay.get_name_leafdata());

    auto extended_affinity_attribute_flag_name_datas = extended_affinity_attribute_flag.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), extended_affinity_attribute_flag_name_datas.begin(), extended_affinity_attribute_flag_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "odu-link-capabilities")
    {
        if(odu_link_capabilities != nullptr)
        {
            children["odu-link-capabilities"] = odu_link_capabilities;
        }
        else
        {
            odu_link_capabilities = std::make_shared<MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities>();
            odu_link_capabilities->parent = this;
            children["odu-link-capabilities"] = odu_link_capabilities;
        }
        return children.at("odu-link-capabilities");
    }

    if(child_yang_name == "receiving-reservable-bandwidth")
    {
        for(auto const & c : receiving_reservable_bandwidth)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth>();
        c->parent = this;
        receiving_reservable_bandwidth.push_back(std::move(c));
        children[segment_path] = receiving_reservable_bandwidth.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "shared-risk-link-group")
    {
        for(auto const & c : shared_risk_link_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup>();
        c->parent = this;
        shared_risk_link_group.push_back(std::move(c));
        children[segment_path] = shared_risk_link_group.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "transmitting-reservable-bandwidth")
    {
        for(auto const & c : transmitting_reservable_bandwidth)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth>();
        c->parent = this;
        transmitting_reservable_bandwidth.push_back(std::move(c));
        children[segment_path] = transmitting_reservable_bandwidth.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::get_children()
{
    if(children.find("odu-link-capabilities") == children.end())
    {
        if(odu_link_capabilities != nullptr)
        {
            children["odu-link-capabilities"] = odu_link_capabilities;
        }
    }

    for (auto const & c : receiving_reservable_bandwidth)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : shared_risk_link_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : transmitting_reservable_bandwidth)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity-attribute-flags")
    {
        affinity_attribute_flags = value;
    }
    if(value_path == "bandwidth-units")
    {
        bandwidth_units = value;
    }
    if(value_path == "bcm-id")
    {
        bcm_id = value;
    }
    if(value_path == "designated-router-igp-id")
    {
        designated_router_igp_id = value;
    }
    if(value_path == "extended-affinity-attribute-flag")
    {
        extended_affinity_attribute_flag.append(value);
    }
    if(value_path == "igp-metric")
    {
        igp_metric = value;
    }
    if(value_path == "igp-neighbor-address")
    {
        igp_neighbor_address = value;
    }
    if(value_path == "incoming-interface-id")
    {
        incoming_interface_id = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "is-designated-router")
    {
        is_designated_router = value;
    }
    if(value_path == "is-receiving-reservable-bandwidth-enabled")
    {
        is_receiving_reservable_bandwidth_enabled = value;
    }
    if(value_path == "is-transmitting-reservable-bandwidth-enabled")
    {
        is_transmitting_reservable_bandwidth_enabled = value;
    }
    if(value_path == "link-address")
    {
        link_address = value;
    }
    if(value_path == "link-id")
    {
        link_id = value;
    }
    if(value_path == "link-maximum-reservable-bandwidth")
    {
        link_maximum_reservable_bandwidth = value;
    }
    if(value_path == "neighbor-igp-id")
    {
        neighbor_igp_id = value;
    }
    if(value_path == "outgoing-interface-id")
    {
        outgoing_interface_id = value;
    }
    if(value_path == "physical-bandwidth")
    {
        physical_bandwidth = value;
    }
    if(value_path == "receiving-direction")
    {
        receiving_direction = value;
    }
    if(value_path == "reservable-pool0-bandwidth")
    {
        reservable_pool0_bandwidth = value;
    }
    if(value_path == "reservable-pool1-bandwidth")
    {
        reservable_pool1_bandwidth = value;
    }
    if(value_path == "subnet-type")
    {
        subnet_type = value;
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
    }
    if(value_path == "transmitting-direction")
    {
        transmitting_direction = value;
    }
    if(value_path == "uni-link-delay")
    {
        uni_link_delay = value;
    }
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduLinkCapabilities()
    :
    max_lsp_bandwidth{YType::uint32, "max-lsp-bandwidth"}
{
    yang_name = "odu-link-capabilities"; yang_parent_name = "flooded-link";
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::~OduLinkCapabilities()
{
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::has_data() const
{
    for (std::size_t index=0; index<odu_capability.size(); index++)
    {
        if(odu_capability[index]->has_data())
            return true;
    }
    for (auto const & leaf : max_lsp_bandwidth.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::has_operation() const
{
    for (std::size_t index=0; index<odu_capability.size(); index++)
    {
        if(odu_capability[index]->has_operation())
            return true;
    }
    for (auto const & leaf : max_lsp_bandwidth.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(max_lsp_bandwidth.operation);
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-link-capabilities";

    return path_buffer.str();

}

EntityPath MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/advertisements/advertized-areas/flooded-link/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto max_lsp_bandwidth_name_datas = max_lsp_bandwidth.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), max_lsp_bandwidth_name_datas.begin(), max_lsp_bandwidth_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "odu-capability")
    {
        for(auto const & c : odu_capability)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability>();
        c->parent = this;
        odu_capability.push_back(std::move(c));
        children[segment_path] = odu_capability.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::get_children()
{
    for (auto const & c : odu_capability)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-lsp-bandwidth")
    {
        max_lsp_bandwidth.append(value);
    }
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::OduCapability()
    :
    lcas_capable{YType::boolean, "lcas-capable"},
    signal_type{YType::enumeration, "signal-type"},
    stage1{YType::enumeration, "stage1"},
    stage2{YType::enumeration, "stage2"},
    stage3{YType::enumeration, "stage3"},
    stage4{YType::enumeration, "stage4"},
    switchable{YType::boolean, "switchable"},
    terminable{YType::boolean, "terminable"},
    tsg1p25{YType::boolean, "tsg1p25"},
    tsg2p5{YType::boolean, "tsg2p5"},
    vcat_capable{YType::boolean, "vcat-capable"}
    	,
    bandwidth_info(std::make_shared<MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo>())
{
    bandwidth_info->parent = this;
    children["bandwidth-info"] = bandwidth_info;

    yang_name = "odu-capability"; yang_parent_name = "odu-link-capabilities";
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::~OduCapability()
{
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::has_data() const
{
    return lcas_capable.is_set
	|| signal_type.is_set
	|| stage1.is_set
	|| stage2.is_set
	|| stage3.is_set
	|| stage4.is_set
	|| switchable.is_set
	|| terminable.is_set
	|| tsg1p25.is_set
	|| tsg2p5.is_set
	|| vcat_capable.is_set
	|| (bandwidth_info !=  nullptr && bandwidth_info->has_data());
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::has_operation() const
{
    return is_set(operation)
	|| is_set(lcas_capable.operation)
	|| is_set(signal_type.operation)
	|| is_set(stage1.operation)
	|| is_set(stage2.operation)
	|| is_set(stage3.operation)
	|| is_set(stage4.operation)
	|| is_set(switchable.operation)
	|| is_set(terminable.operation)
	|| is_set(tsg1p25.operation)
	|| is_set(tsg2p5.operation)
	|| is_set(vcat_capable.operation)
	|| (bandwidth_info !=  nullptr && bandwidth_info->has_operation());
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odu-capability";

    return path_buffer.str();

}

EntityPath MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/advertisements/advertized-areas/flooded-link/odu-link-capabilities/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lcas_capable.is_set || is_set(lcas_capable.operation)) leaf_name_data.push_back(lcas_capable.get_name_leafdata());
    if (signal_type.is_set || is_set(signal_type.operation)) leaf_name_data.push_back(signal_type.get_name_leafdata());
    if (stage1.is_set || is_set(stage1.operation)) leaf_name_data.push_back(stage1.get_name_leafdata());
    if (stage2.is_set || is_set(stage2.operation)) leaf_name_data.push_back(stage2.get_name_leafdata());
    if (stage3.is_set || is_set(stage3.operation)) leaf_name_data.push_back(stage3.get_name_leafdata());
    if (stage4.is_set || is_set(stage4.operation)) leaf_name_data.push_back(stage4.get_name_leafdata());
    if (switchable.is_set || is_set(switchable.operation)) leaf_name_data.push_back(switchable.get_name_leafdata());
    if (terminable.is_set || is_set(terminable.operation)) leaf_name_data.push_back(terminable.get_name_leafdata());
    if (tsg1p25.is_set || is_set(tsg1p25.operation)) leaf_name_data.push_back(tsg1p25.get_name_leafdata());
    if (tsg2p5.is_set || is_set(tsg2p5.operation)) leaf_name_data.push_back(tsg2p5.get_name_leafdata());
    if (vcat_capable.is_set || is_set(vcat_capable.operation)) leaf_name_data.push_back(vcat_capable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bandwidth-info")
    {
        if(bandwidth_info != nullptr)
        {
            children["bandwidth-info"] = bandwidth_info;
        }
        else
        {
            bandwidth_info = std::make_shared<MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo>();
            bandwidth_info->parent = this;
            children["bandwidth-info"] = bandwidth_info;
        }
        return children.at("bandwidth-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::get_children()
{
    if(children.find("bandwidth-info") == children.end())
    {
        if(bandwidth_info != nullptr)
        {
            children["bandwidth-info"] = bandwidth_info;
        }
    }

    return children;
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "lcas-capable")
    {
        lcas_capable = value;
    }
    if(value_path == "signal-type")
    {
        signal_type = value;
    }
    if(value_path == "stage1")
    {
        stage1 = value;
    }
    if(value_path == "stage2")
    {
        stage2 = value;
    }
    if(value_path == "stage3")
    {
        stage3 = value;
    }
    if(value_path == "stage4")
    {
        stage4 = value;
    }
    if(value_path == "switchable")
    {
        switchable = value;
    }
    if(value_path == "terminable")
    {
        terminable = value;
    }
    if(value_path == "tsg1p25")
    {
        tsg1p25 = value;
    }
    if(value_path == "tsg2p5")
    {
        tsg2p5 = value;
    }
    if(value_path == "vcat-capable")
    {
        vcat_capable = value;
    }
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::BandwidthInfo()
    :
    type{YType::enumeration, "type"}
    	,
    fixed(std::make_shared<MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed>())
	,flex(std::make_shared<MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex>())
{
    fixed->parent = this;
    children["fixed"] = fixed;

    flex->parent = this;
    children["flex"] = flex;

    yang_name = "bandwidth-info"; yang_parent_name = "odu-capability";
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::~BandwidthInfo()
{
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::has_data() const
{
    return type.is_set
	|| (fixed !=  nullptr && fixed->has_data())
	|| (flex !=  nullptr && flex->has_data());
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (fixed !=  nullptr && fixed->has_operation())
	|| (flex !=  nullptr && flex->has_operation());
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-info";

    return path_buffer.str();

}

EntityPath MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/advertisements/advertized-areas/flooded-link/odu-link-capabilities/odu-capability/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fixed")
    {
        if(fixed != nullptr)
        {
            children["fixed"] = fixed;
        }
        else
        {
            fixed = std::make_shared<MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed>();
            fixed->parent = this;
            children["fixed"] = fixed;
        }
        return children.at("fixed");
    }

    if(child_yang_name == "flex")
    {
        if(flex != nullptr)
        {
            children["flex"] = flex;
        }
        else
        {
            flex = std::make_shared<MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex>();
            flex->parent = this;
            children["flex"] = flex;
        }
        return children.at("flex");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::get_children()
{
    if(children.find("fixed") == children.end())
    {
        if(fixed != nullptr)
        {
            children["fixed"] = fixed;
        }
    }

    if(children.find("flex") == children.end())
    {
        if(flex != nullptr)
        {
            children["flex"] = flex;
        }
    }

    return children;
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::Fixed()
    :
    maximum_od_us{YType::uint8, "maximum-od-us"},
    unreserved_od_us{YType::uint8, "unreserved-od-us"}
{
    yang_name = "fixed"; yang_parent_name = "bandwidth-info";
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::~Fixed()
{
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::has_data() const
{
    return maximum_od_us.is_set
	|| unreserved_od_us.is_set;
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::has_operation() const
{
    return is_set(operation)
	|| is_set(maximum_od_us.operation)
	|| is_set(unreserved_od_us.operation);
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fixed";

    return path_buffer.str();

}

EntityPath MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/advertisements/advertized-areas/flooded-link/odu-link-capabilities/odu-capability/bandwidth-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maximum_od_us.is_set || is_set(maximum_od_us.operation)) leaf_name_data.push_back(maximum_od_us.get_name_leafdata());
    if (unreserved_od_us.is_set || is_set(unreserved_od_us.operation)) leaf_name_data.push_back(unreserved_od_us.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::get_children()
{
    return children;
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Fixed::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maximum-od-us")
    {
        maximum_od_us = value;
    }
    if(value_path == "unreserved-od-us")
    {
        unreserved_od_us = value;
    }
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::Flex()
    :
    max_bandwidth{YType::uint32, "max-bandwidth"},
    max_lsp_bandwidth{YType::uint32, "max-lsp-bandwidth"},
    unreserved_bandwidth{YType::uint32, "unreserved-bandwidth"}
{
    yang_name = "flex"; yang_parent_name = "bandwidth-info";
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::~Flex()
{
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::has_data() const
{
    return max_bandwidth.is_set
	|| max_lsp_bandwidth.is_set
	|| unreserved_bandwidth.is_set;
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::has_operation() const
{
    return is_set(operation)
	|| is_set(max_bandwidth.operation)
	|| is_set(max_lsp_bandwidth.operation)
	|| is_set(unreserved_bandwidth.operation);
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flex";

    return path_buffer.str();

}

EntityPath MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/advertisements/advertized-areas/flooded-link/odu-link-capabilities/odu-capability/bandwidth-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_bandwidth.is_set || is_set(max_bandwidth.operation)) leaf_name_data.push_back(max_bandwidth.get_name_leafdata());
    if (max_lsp_bandwidth.is_set || is_set(max_lsp_bandwidth.operation)) leaf_name_data.push_back(max_lsp_bandwidth.get_name_leafdata());
    if (unreserved_bandwidth.is_set || is_set(unreserved_bandwidth.operation)) leaf_name_data.push_back(unreserved_bandwidth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::get_children()
{
    return children;
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::OduLinkCapabilities::OduCapability::BandwidthInfo::Flex::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-bandwidth")
    {
        max_bandwidth = value;
    }
    if(value_path == "max-lsp-bandwidth")
    {
        max_lsp_bandwidth = value;
    }
    if(value_path == "unreserved-bandwidth")
    {
        unreserved_bandwidth = value;
    }
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::SharedRiskLinkGroup()
    :
    shared_risk_group{YType::uint32, "shared-risk-group"},
    srlg_name{YType::str, "srlg-name"}
{
    yang_name = "shared-risk-link-group"; yang_parent_name = "flooded-link";
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::~SharedRiskLinkGroup()
{
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::has_data() const
{
    return shared_risk_group.is_set
	|| srlg_name.is_set;
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(shared_risk_group.operation)
	|| is_set(srlg_name.operation);
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-risk-link-group";

    return path_buffer.str();

}

EntityPath MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/advertisements/advertized-areas/flooded-link/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shared_risk_group.is_set || is_set(shared_risk_group.operation)) leaf_name_data.push_back(shared_risk_group.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.operation)) leaf_name_data.push_back(srlg_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::get_children()
{
    return children;
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::SharedRiskLinkGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "shared-risk-group")
    {
        shared_risk_group = value;
    }
    if(value_path == "srlg-name")
    {
        srlg_name = value;
    }
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::ReceivingReservableBandwidth()
    :
    pool0_bandwidth{YType::uint32, "pool0-bandwidth"},
    pool1_bandwidth{YType::uint32, "pool1-bandwidth"},
    priority{YType::uint8, "priority"}
{
    yang_name = "receiving-reservable-bandwidth"; yang_parent_name = "flooded-link";
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::~ReceivingReservableBandwidth()
{
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::has_data() const
{
    return pool0_bandwidth.is_set
	|| pool1_bandwidth.is_set
	|| priority.is_set;
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(pool0_bandwidth.operation)
	|| is_set(pool1_bandwidth.operation)
	|| is_set(priority.operation);
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receiving-reservable-bandwidth";

    return path_buffer.str();

}

EntityPath MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/advertisements/advertized-areas/flooded-link/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pool0_bandwidth.is_set || is_set(pool0_bandwidth.operation)) leaf_name_data.push_back(pool0_bandwidth.get_name_leafdata());
    if (pool1_bandwidth.is_set || is_set(pool1_bandwidth.operation)) leaf_name_data.push_back(pool1_bandwidth.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::get_children()
{
    return children;
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::ReceivingReservableBandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pool0-bandwidth")
    {
        pool0_bandwidth = value;
    }
    if(value_path == "pool1-bandwidth")
    {
        pool1_bandwidth = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::TransmittingReservableBandwidth()
    :
    pool0_bandwidth{YType::uint32, "pool0-bandwidth"},
    pool1_bandwidth{YType::uint32, "pool1-bandwidth"},
    priority{YType::uint8, "priority"}
{
    yang_name = "transmitting-reservable-bandwidth"; yang_parent_name = "flooded-link";
}

MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::~TransmittingReservableBandwidth()
{
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::has_data() const
{
    return pool0_bandwidth.is_set
	|| pool1_bandwidth.is_set
	|| priority.is_set;
}

bool MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(pool0_bandwidth.operation)
	|| is_set(pool1_bandwidth.operation)
	|| is_set(priority.operation);
}

std::string MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transmitting-reservable-bandwidth";

    return path_buffer.str();

}

EntityPath MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/advertisements/advertized-areas/flooded-link/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pool0_bandwidth.is_set || is_set(pool0_bandwidth.operation)) leaf_name_data.push_back(pool0_bandwidth.get_name_leafdata());
    if (pool1_bandwidth.is_set || is_set(pool1_bandwidth.operation)) leaf_name_data.push_back(pool1_bandwidth.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::get_children()
{
    return children;
}

void MplsLcac::Advertisements::AdvertizedAreas::FloodedLink::TransmittingReservableBandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pool0-bandwidth")
    {
        pool0_bandwidth = value;
    }
    if(value_path == "pool1-bandwidth")
    {
        pool1_bandwidth = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
}

MplsLcac::Statistics::Statistics()
    :
    statstics_links(std::make_shared<MplsLcac::Statistics::StatsticsLinks>())
	,summary(std::make_shared<MplsLcac::Statistics::Summary>())
{
    statstics_links->parent = this;
    children["statstics-links"] = statstics_links;

    summary->parent = this;
    children["summary"] = summary;

    yang_name = "statistics"; yang_parent_name = "mpls-lcac";
}

MplsLcac::Statistics::~Statistics()
{
}

bool MplsLcac::Statistics::has_data() const
{
    return (statstics_links !=  nullptr && statstics_links->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool MplsLcac::Statistics::has_operation() const
{
    return is_set(operation)
	|| (statstics_links !=  nullptr && statstics_links->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string MplsLcac::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath MplsLcac::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "statstics-links")
    {
        if(statstics_links != nullptr)
        {
            children["statstics-links"] = statstics_links;
        }
        else
        {
            statstics_links = std::make_shared<MplsLcac::Statistics::StatsticsLinks>();
            statstics_links->parent = this;
            children["statstics-links"] = statstics_links;
        }
        return children.at("statstics-links");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
        else
        {
            summary = std::make_shared<MplsLcac::Statistics::Summary>();
            summary->parent = this;
            children["summary"] = summary;
        }
        return children.at("summary");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::Statistics::get_children()
{
    if(children.find("statstics-links") == children.end())
    {
        if(statstics_links != nullptr)
        {
            children["statstics-links"] = statstics_links;
        }
    }

    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
    }

    return children;
}

void MplsLcac::Statistics::set_value(const std::string & value_path, std::string value)
{
}

MplsLcac::Statistics::Summary::Summary()
    :
    is_role_standby{YType::boolean, "is-role-standby"}
    	,
    path_statistics(std::make_shared<MplsLcac::Statistics::Summary::PathStatistics>())
	,path_statistics32_bit(std::make_shared<MplsLcac::Statistics::Summary::PathStatistics32Bit>())
	,reservation_statistics(std::make_shared<MplsLcac::Statistics::Summary::ReservationStatistics>())
	,reservation_statistics32_bit(std::make_shared<MplsLcac::Statistics::Summary::ReservationStatistics32Bit>())
{
    path_statistics->parent = this;
    children["path-statistics"] = path_statistics;

    path_statistics32_bit->parent = this;
    children["path-statistics32-bit"] = path_statistics32_bit;

    reservation_statistics->parent = this;
    children["reservation-statistics"] = reservation_statistics;

    reservation_statistics32_bit->parent = this;
    children["reservation-statistics32-bit"] = reservation_statistics32_bit;

    yang_name = "summary"; yang_parent_name = "statistics";
}

MplsLcac::Statistics::Summary::~Summary()
{
}

bool MplsLcac::Statistics::Summary::has_data() const
{
    return is_role_standby.is_set
	|| (path_statistics !=  nullptr && path_statistics->has_data())
	|| (path_statistics32_bit !=  nullptr && path_statistics32_bit->has_data())
	|| (reservation_statistics !=  nullptr && reservation_statistics->has_data())
	|| (reservation_statistics32_bit !=  nullptr && reservation_statistics32_bit->has_data());
}

bool MplsLcac::Statistics::Summary::has_operation() const
{
    return is_set(operation)
	|| is_set(is_role_standby.operation)
	|| (path_statistics !=  nullptr && path_statistics->has_operation())
	|| (path_statistics32_bit !=  nullptr && path_statistics32_bit->has_operation())
	|| (reservation_statistics !=  nullptr && reservation_statistics->has_operation())
	|| (reservation_statistics32_bit !=  nullptr && reservation_statistics32_bit->has_operation());
}

std::string MplsLcac::Statistics::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath MplsLcac::Statistics::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_role_standby.is_set || is_set(is_role_standby.operation)) leaf_name_data.push_back(is_role_standby.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::Statistics::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "path-statistics")
    {
        if(path_statistics != nullptr)
        {
            children["path-statistics"] = path_statistics;
        }
        else
        {
            path_statistics = std::make_shared<MplsLcac::Statistics::Summary::PathStatistics>();
            path_statistics->parent = this;
            children["path-statistics"] = path_statistics;
        }
        return children.at("path-statistics");
    }

    if(child_yang_name == "path-statistics32-bit")
    {
        if(path_statistics32_bit != nullptr)
        {
            children["path-statistics32-bit"] = path_statistics32_bit;
        }
        else
        {
            path_statistics32_bit = std::make_shared<MplsLcac::Statistics::Summary::PathStatistics32Bit>();
            path_statistics32_bit->parent = this;
            children["path-statistics32-bit"] = path_statistics32_bit;
        }
        return children.at("path-statistics32-bit");
    }

    if(child_yang_name == "reservation-statistics")
    {
        if(reservation_statistics != nullptr)
        {
            children["reservation-statistics"] = reservation_statistics;
        }
        else
        {
            reservation_statistics = std::make_shared<MplsLcac::Statistics::Summary::ReservationStatistics>();
            reservation_statistics->parent = this;
            children["reservation-statistics"] = reservation_statistics;
        }
        return children.at("reservation-statistics");
    }

    if(child_yang_name == "reservation-statistics32-bit")
    {
        if(reservation_statistics32_bit != nullptr)
        {
            children["reservation-statistics32-bit"] = reservation_statistics32_bit;
        }
        else
        {
            reservation_statistics32_bit = std::make_shared<MplsLcac::Statistics::Summary::ReservationStatistics32Bit>();
            reservation_statistics32_bit->parent = this;
            children["reservation-statistics32-bit"] = reservation_statistics32_bit;
        }
        return children.at("reservation-statistics32-bit");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::Statistics::Summary::get_children()
{
    if(children.find("path-statistics") == children.end())
    {
        if(path_statistics != nullptr)
        {
            children["path-statistics"] = path_statistics;
        }
    }

    if(children.find("path-statistics32-bit") == children.end())
    {
        if(path_statistics32_bit != nullptr)
        {
            children["path-statistics32-bit"] = path_statistics32_bit;
        }
    }

    if(children.find("reservation-statistics") == children.end())
    {
        if(reservation_statistics != nullptr)
        {
            children["reservation-statistics"] = reservation_statistics;
        }
    }

    if(children.find("reservation-statistics32-bit") == children.end())
    {
        if(reservation_statistics32_bit != nullptr)
        {
            children["reservation-statistics32-bit"] = reservation_statistics32_bit;
        }
    }

    return children;
}

void MplsLcac::Statistics::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-role-standby")
    {
        is_role_standby = value;
    }
}

MplsLcac::Statistics::Summary::PathStatistics::PathStatistics()
    :
    setup_admits{YType::uint16, "setup-admits"},
    setup_errors{YType::uint16, "setup-errors"},
    setup_rejects{YType::uint16, "setup-rejects"},
    setup_requests{YType::uint16, "setup-requests"},
    tear_errors{YType::uint16, "tear-errors"},
    tear_preempts{YType::uint16, "tear-preempts"},
    tear_requests{YType::uint16, "tear-requests"}
{
    yang_name = "path-statistics"; yang_parent_name = "summary";
}

MplsLcac::Statistics::Summary::PathStatistics::~PathStatistics()
{
}

bool MplsLcac::Statistics::Summary::PathStatistics::has_data() const
{
    return setup_admits.is_set
	|| setup_errors.is_set
	|| setup_rejects.is_set
	|| setup_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set
	|| tear_requests.is_set;
}

bool MplsLcac::Statistics::Summary::PathStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(setup_admits.operation)
	|| is_set(setup_errors.operation)
	|| is_set(setup_rejects.operation)
	|| is_set(setup_requests.operation)
	|| is_set(tear_errors.operation)
	|| is_set(tear_preempts.operation)
	|| is_set(tear_requests.operation);
}

std::string MplsLcac::Statistics::Summary::PathStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-statistics";

    return path_buffer.str();

}

EntityPath MplsLcac::Statistics::Summary::PathStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/statistics/summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_admits.is_set || is_set(setup_admits.operation)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.operation)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.operation)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (setup_requests.is_set || is_set(setup_requests.operation)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.operation)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.operation)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.operation)) leaf_name_data.push_back(tear_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::Statistics::Summary::PathStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::Statistics::Summary::PathStatistics::get_children()
{
    return children;
}

void MplsLcac::Statistics::Summary::PathStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "setup-admits")
    {
        setup_admits = value;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
    }
    if(value_path == "setup-requests")
    {
        setup_requests = value;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
    }
}

MplsLcac::Statistics::Summary::ReservationStatistics::ReservationStatistics()
    :
    setup_admits{YType::uint16, "setup-admits"},
    setup_errors{YType::uint16, "setup-errors"},
    setup_rejects{YType::uint16, "setup-rejects"},
    setup_requests{YType::uint16, "setup-requests"},
    tear_errors{YType::uint16, "tear-errors"},
    tear_preempts{YType::uint16, "tear-preempts"},
    tear_requests{YType::uint16, "tear-requests"}
{
    yang_name = "reservation-statistics"; yang_parent_name = "summary";
}

MplsLcac::Statistics::Summary::ReservationStatistics::~ReservationStatistics()
{
}

bool MplsLcac::Statistics::Summary::ReservationStatistics::has_data() const
{
    return setup_admits.is_set
	|| setup_errors.is_set
	|| setup_rejects.is_set
	|| setup_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set
	|| tear_requests.is_set;
}

bool MplsLcac::Statistics::Summary::ReservationStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(setup_admits.operation)
	|| is_set(setup_errors.operation)
	|| is_set(setup_rejects.operation)
	|| is_set(setup_requests.operation)
	|| is_set(tear_errors.operation)
	|| is_set(tear_preempts.operation)
	|| is_set(tear_requests.operation);
}

std::string MplsLcac::Statistics::Summary::ReservationStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reservation-statistics";

    return path_buffer.str();

}

EntityPath MplsLcac::Statistics::Summary::ReservationStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/statistics/summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_admits.is_set || is_set(setup_admits.operation)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.operation)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.operation)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (setup_requests.is_set || is_set(setup_requests.operation)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.operation)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.operation)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.operation)) leaf_name_data.push_back(tear_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::Statistics::Summary::ReservationStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::Statistics::Summary::ReservationStatistics::get_children()
{
    return children;
}

void MplsLcac::Statistics::Summary::ReservationStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "setup-admits")
    {
        setup_admits = value;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
    }
    if(value_path == "setup-requests")
    {
        setup_requests = value;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
    }
}

MplsLcac::Statistics::Summary::PathStatistics32Bit::PathStatistics32Bit()
    :
    setup_admits{YType::uint32, "setup-admits"},
    setup_errors{YType::uint32, "setup-errors"},
    setup_rejects{YType::uint32, "setup-rejects"},
    setup_requests{YType::uint32, "setup-requests"},
    tear_errors{YType::uint32, "tear-errors"},
    tear_preempts{YType::uint32, "tear-preempts"},
    tear_requests{YType::uint32, "tear-requests"}
{
    yang_name = "path-statistics32-bit"; yang_parent_name = "summary";
}

MplsLcac::Statistics::Summary::PathStatistics32Bit::~PathStatistics32Bit()
{
}

bool MplsLcac::Statistics::Summary::PathStatistics32Bit::has_data() const
{
    return setup_admits.is_set
	|| setup_errors.is_set
	|| setup_rejects.is_set
	|| setup_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set
	|| tear_requests.is_set;
}

bool MplsLcac::Statistics::Summary::PathStatistics32Bit::has_operation() const
{
    return is_set(operation)
	|| is_set(setup_admits.operation)
	|| is_set(setup_errors.operation)
	|| is_set(setup_rejects.operation)
	|| is_set(setup_requests.operation)
	|| is_set(tear_errors.operation)
	|| is_set(tear_preempts.operation)
	|| is_set(tear_requests.operation);
}

std::string MplsLcac::Statistics::Summary::PathStatistics32Bit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-statistics32-bit";

    return path_buffer.str();

}

EntityPath MplsLcac::Statistics::Summary::PathStatistics32Bit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/statistics/summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_admits.is_set || is_set(setup_admits.operation)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.operation)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.operation)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (setup_requests.is_set || is_set(setup_requests.operation)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.operation)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.operation)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.operation)) leaf_name_data.push_back(tear_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::Statistics::Summary::PathStatistics32Bit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::Statistics::Summary::PathStatistics32Bit::get_children()
{
    return children;
}

void MplsLcac::Statistics::Summary::PathStatistics32Bit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "setup-admits")
    {
        setup_admits = value;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
    }
    if(value_path == "setup-requests")
    {
        setup_requests = value;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
    }
}

MplsLcac::Statistics::Summary::ReservationStatistics32Bit::ReservationStatistics32Bit()
    :
    setup_admits{YType::uint32, "setup-admits"},
    setup_errors{YType::uint32, "setup-errors"},
    setup_rejects{YType::uint32, "setup-rejects"},
    setup_requests{YType::uint32, "setup-requests"},
    tear_errors{YType::uint32, "tear-errors"},
    tear_preempts{YType::uint32, "tear-preempts"},
    tear_requests{YType::uint32, "tear-requests"}
{
    yang_name = "reservation-statistics32-bit"; yang_parent_name = "summary";
}

MplsLcac::Statistics::Summary::ReservationStatistics32Bit::~ReservationStatistics32Bit()
{
}

bool MplsLcac::Statistics::Summary::ReservationStatistics32Bit::has_data() const
{
    return setup_admits.is_set
	|| setup_errors.is_set
	|| setup_rejects.is_set
	|| setup_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set
	|| tear_requests.is_set;
}

bool MplsLcac::Statistics::Summary::ReservationStatistics32Bit::has_operation() const
{
    return is_set(operation)
	|| is_set(setup_admits.operation)
	|| is_set(setup_errors.operation)
	|| is_set(setup_rejects.operation)
	|| is_set(setup_requests.operation)
	|| is_set(tear_errors.operation)
	|| is_set(tear_preempts.operation)
	|| is_set(tear_requests.operation);
}

std::string MplsLcac::Statistics::Summary::ReservationStatistics32Bit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reservation-statistics32-bit";

    return path_buffer.str();

}

EntityPath MplsLcac::Statistics::Summary::ReservationStatistics32Bit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/statistics/summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_admits.is_set || is_set(setup_admits.operation)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.operation)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.operation)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (setup_requests.is_set || is_set(setup_requests.operation)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.operation)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.operation)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.operation)) leaf_name_data.push_back(tear_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::Statistics::Summary::ReservationStatistics32Bit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::Statistics::Summary::ReservationStatistics32Bit::get_children()
{
    return children;
}

void MplsLcac::Statistics::Summary::ReservationStatistics32Bit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "setup-admits")
    {
        setup_admits = value;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
    }
    if(value_path == "setup-requests")
    {
        setup_requests = value;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
    }
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLinks()
{
    yang_name = "statstics-links"; yang_parent_name = "statistics";
}

MplsLcac::Statistics::StatsticsLinks::~StatsticsLinks()
{
}

bool MplsLcac::Statistics::StatsticsLinks::has_data() const
{
    for (std::size_t index=0; index<statstics_link.size(); index++)
    {
        if(statstics_link[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcac::Statistics::StatsticsLinks::has_operation() const
{
    for (std::size_t index=0; index<statstics_link.size(); index++)
    {
        if(statstics_link[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLcac::Statistics::StatsticsLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statstics-links";

    return path_buffer.str();

}

EntityPath MplsLcac::Statistics::StatsticsLinks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/statistics/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::Statistics::StatsticsLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "statstics-link")
    {
        for(auto const & c : statstics_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcac::Statistics::StatsticsLinks::StatsticsLink>();
        c->parent = this;
        statstics_link.push_back(std::move(c));
        children[segment_path] = statstics_link.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::Statistics::StatsticsLinks::get_children()
{
    for (auto const & c : statstics_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLcac::Statistics::StatsticsLinks::set_value(const std::string & value_path, std::string value)
{
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::StatsticsLink()
    :
    interface_name{YType::str, "interface-name"},
    interface_name_xr{YType::str, "interface-name-xr"},
    link_address{YType::str, "link-address"}
    	,
    incoming_path_statistics(std::make_shared<MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics>())
	,incoming_path_statistics32_bit(std::make_shared<MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit>())
	,incoming_reservation_statistics(std::make_shared<MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics>())
	,incoming_reservation_statistics32_bit(std::make_shared<MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit>())
	,outgoing_path_statistics(std::make_shared<MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics>())
	,outgoing_path_statistics32_bit(std::make_shared<MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit>())
	,outgoing_reservation_statistics(std::make_shared<MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics>())
	,outgoing_reservation_statistics32_bit(std::make_shared<MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit>())
{
    incoming_path_statistics->parent = this;
    children["incoming-path-statistics"] = incoming_path_statistics;

    incoming_path_statistics32_bit->parent = this;
    children["incoming-path-statistics32-bit"] = incoming_path_statistics32_bit;

    incoming_reservation_statistics->parent = this;
    children["incoming-reservation-statistics"] = incoming_reservation_statistics;

    incoming_reservation_statistics32_bit->parent = this;
    children["incoming-reservation-statistics32-bit"] = incoming_reservation_statistics32_bit;

    outgoing_path_statistics->parent = this;
    children["outgoing-path-statistics"] = outgoing_path_statistics;

    outgoing_path_statistics32_bit->parent = this;
    children["outgoing-path-statistics32-bit"] = outgoing_path_statistics32_bit;

    outgoing_reservation_statistics->parent = this;
    children["outgoing-reservation-statistics"] = outgoing_reservation_statistics;

    outgoing_reservation_statistics32_bit->parent = this;
    children["outgoing-reservation-statistics32-bit"] = outgoing_reservation_statistics32_bit;

    yang_name = "statstics-link"; yang_parent_name = "statstics-links";
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::~StatsticsLink()
{
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::has_data() const
{
    return interface_name.is_set
	|| interface_name_xr.is_set
	|| link_address.is_set
	|| (incoming_path_statistics !=  nullptr && incoming_path_statistics->has_data())
	|| (incoming_path_statistics32_bit !=  nullptr && incoming_path_statistics32_bit->has_data())
	|| (incoming_reservation_statistics !=  nullptr && incoming_reservation_statistics->has_data())
	|| (incoming_reservation_statistics32_bit !=  nullptr && incoming_reservation_statistics32_bit->has_data())
	|| (outgoing_path_statistics !=  nullptr && outgoing_path_statistics->has_data())
	|| (outgoing_path_statistics32_bit !=  nullptr && outgoing_path_statistics32_bit->has_data())
	|| (outgoing_reservation_statistics !=  nullptr && outgoing_reservation_statistics->has_data())
	|| (outgoing_reservation_statistics32_bit !=  nullptr && outgoing_reservation_statistics32_bit->has_data());
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(link_address.operation)
	|| (incoming_path_statistics !=  nullptr && incoming_path_statistics->has_operation())
	|| (incoming_path_statistics32_bit !=  nullptr && incoming_path_statistics32_bit->has_operation())
	|| (incoming_reservation_statistics !=  nullptr && incoming_reservation_statistics->has_operation())
	|| (incoming_reservation_statistics32_bit !=  nullptr && incoming_reservation_statistics32_bit->has_operation())
	|| (outgoing_path_statistics !=  nullptr && outgoing_path_statistics->has_operation())
	|| (outgoing_path_statistics32_bit !=  nullptr && outgoing_path_statistics32_bit->has_operation())
	|| (outgoing_reservation_statistics !=  nullptr && outgoing_reservation_statistics->has_operation())
	|| (outgoing_reservation_statistics32_bit !=  nullptr && outgoing_reservation_statistics32_bit->has_operation());
}

std::string MplsLcac::Statistics::StatsticsLinks::StatsticsLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statstics-link" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath MplsLcac::Statistics::StatsticsLinks::StatsticsLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/statistics/statstics-links/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (link_address.is_set || is_set(link_address.operation)) leaf_name_data.push_back(link_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::Statistics::StatsticsLinks::StatsticsLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "incoming-path-statistics")
    {
        if(incoming_path_statistics != nullptr)
        {
            children["incoming-path-statistics"] = incoming_path_statistics;
        }
        else
        {
            incoming_path_statistics = std::make_shared<MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics>();
            incoming_path_statistics->parent = this;
            children["incoming-path-statistics"] = incoming_path_statistics;
        }
        return children.at("incoming-path-statistics");
    }

    if(child_yang_name == "incoming-path-statistics32-bit")
    {
        if(incoming_path_statistics32_bit != nullptr)
        {
            children["incoming-path-statistics32-bit"] = incoming_path_statistics32_bit;
        }
        else
        {
            incoming_path_statistics32_bit = std::make_shared<MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit>();
            incoming_path_statistics32_bit->parent = this;
            children["incoming-path-statistics32-bit"] = incoming_path_statistics32_bit;
        }
        return children.at("incoming-path-statistics32-bit");
    }

    if(child_yang_name == "incoming-reservation-statistics")
    {
        if(incoming_reservation_statistics != nullptr)
        {
            children["incoming-reservation-statistics"] = incoming_reservation_statistics;
        }
        else
        {
            incoming_reservation_statistics = std::make_shared<MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics>();
            incoming_reservation_statistics->parent = this;
            children["incoming-reservation-statistics"] = incoming_reservation_statistics;
        }
        return children.at("incoming-reservation-statistics");
    }

    if(child_yang_name == "incoming-reservation-statistics32-bit")
    {
        if(incoming_reservation_statistics32_bit != nullptr)
        {
            children["incoming-reservation-statistics32-bit"] = incoming_reservation_statistics32_bit;
        }
        else
        {
            incoming_reservation_statistics32_bit = std::make_shared<MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit>();
            incoming_reservation_statistics32_bit->parent = this;
            children["incoming-reservation-statistics32-bit"] = incoming_reservation_statistics32_bit;
        }
        return children.at("incoming-reservation-statistics32-bit");
    }

    if(child_yang_name == "outgoing-path-statistics")
    {
        if(outgoing_path_statistics != nullptr)
        {
            children["outgoing-path-statistics"] = outgoing_path_statistics;
        }
        else
        {
            outgoing_path_statistics = std::make_shared<MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics>();
            outgoing_path_statistics->parent = this;
            children["outgoing-path-statistics"] = outgoing_path_statistics;
        }
        return children.at("outgoing-path-statistics");
    }

    if(child_yang_name == "outgoing-path-statistics32-bit")
    {
        if(outgoing_path_statistics32_bit != nullptr)
        {
            children["outgoing-path-statistics32-bit"] = outgoing_path_statistics32_bit;
        }
        else
        {
            outgoing_path_statistics32_bit = std::make_shared<MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit>();
            outgoing_path_statistics32_bit->parent = this;
            children["outgoing-path-statistics32-bit"] = outgoing_path_statistics32_bit;
        }
        return children.at("outgoing-path-statistics32-bit");
    }

    if(child_yang_name == "outgoing-reservation-statistics")
    {
        if(outgoing_reservation_statistics != nullptr)
        {
            children["outgoing-reservation-statistics"] = outgoing_reservation_statistics;
        }
        else
        {
            outgoing_reservation_statistics = std::make_shared<MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics>();
            outgoing_reservation_statistics->parent = this;
            children["outgoing-reservation-statistics"] = outgoing_reservation_statistics;
        }
        return children.at("outgoing-reservation-statistics");
    }

    if(child_yang_name == "outgoing-reservation-statistics32-bit")
    {
        if(outgoing_reservation_statistics32_bit != nullptr)
        {
            children["outgoing-reservation-statistics32-bit"] = outgoing_reservation_statistics32_bit;
        }
        else
        {
            outgoing_reservation_statistics32_bit = std::make_shared<MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit>();
            outgoing_reservation_statistics32_bit->parent = this;
            children["outgoing-reservation-statistics32-bit"] = outgoing_reservation_statistics32_bit;
        }
        return children.at("outgoing-reservation-statistics32-bit");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::Statistics::StatsticsLinks::StatsticsLink::get_children()
{
    if(children.find("incoming-path-statistics") == children.end())
    {
        if(incoming_path_statistics != nullptr)
        {
            children["incoming-path-statistics"] = incoming_path_statistics;
        }
    }

    if(children.find("incoming-path-statistics32-bit") == children.end())
    {
        if(incoming_path_statistics32_bit != nullptr)
        {
            children["incoming-path-statistics32-bit"] = incoming_path_statistics32_bit;
        }
    }

    if(children.find("incoming-reservation-statistics") == children.end())
    {
        if(incoming_reservation_statistics != nullptr)
        {
            children["incoming-reservation-statistics"] = incoming_reservation_statistics;
        }
    }

    if(children.find("incoming-reservation-statistics32-bit") == children.end())
    {
        if(incoming_reservation_statistics32_bit != nullptr)
        {
            children["incoming-reservation-statistics32-bit"] = incoming_reservation_statistics32_bit;
        }
    }

    if(children.find("outgoing-path-statistics") == children.end())
    {
        if(outgoing_path_statistics != nullptr)
        {
            children["outgoing-path-statistics"] = outgoing_path_statistics;
        }
    }

    if(children.find("outgoing-path-statistics32-bit") == children.end())
    {
        if(outgoing_path_statistics32_bit != nullptr)
        {
            children["outgoing-path-statistics32-bit"] = outgoing_path_statistics32_bit;
        }
    }

    if(children.find("outgoing-reservation-statistics") == children.end())
    {
        if(outgoing_reservation_statistics != nullptr)
        {
            children["outgoing-reservation-statistics"] = outgoing_reservation_statistics;
        }
    }

    if(children.find("outgoing-reservation-statistics32-bit") == children.end())
    {
        if(outgoing_reservation_statistics32_bit != nullptr)
        {
            children["outgoing-reservation-statistics32-bit"] = outgoing_reservation_statistics32_bit;
        }
    }

    return children;
}

void MplsLcac::Statistics::StatsticsLinks::StatsticsLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "link-address")
    {
        link_address = value;
    }
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::IncomingPathStatistics()
    :
    setup_admits{YType::uint16, "setup-admits"},
    setup_errors{YType::uint16, "setup-errors"},
    setup_rejects{YType::uint16, "setup-rejects"},
    setup_requests{YType::uint16, "setup-requests"},
    tear_errors{YType::uint16, "tear-errors"},
    tear_preempts{YType::uint16, "tear-preempts"},
    tear_requests{YType::uint16, "tear-requests"}
{
    yang_name = "incoming-path-statistics"; yang_parent_name = "statstics-link";
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::~IncomingPathStatistics()
{
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::has_data() const
{
    return setup_admits.is_set
	|| setup_errors.is_set
	|| setup_rejects.is_set
	|| setup_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set
	|| tear_requests.is_set;
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(setup_admits.operation)
	|| is_set(setup_errors.operation)
	|| is_set(setup_rejects.operation)
	|| is_set(setup_requests.operation)
	|| is_set(tear_errors.operation)
	|| is_set(tear_preempts.operation)
	|| is_set(tear_requests.operation);
}

std::string MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "incoming-path-statistics";

    return path_buffer.str();

}

EntityPath MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IncomingPathStatistics' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_admits.is_set || is_set(setup_admits.operation)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.operation)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.operation)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (setup_requests.is_set || is_set(setup_requests.operation)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.operation)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.operation)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.operation)) leaf_name_data.push_back(tear_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::get_children()
{
    return children;
}

void MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "setup-admits")
    {
        setup_admits = value;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
    }
    if(value_path == "setup-requests")
    {
        setup_requests = value;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
    }
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::IncomingReservationStatistics()
    :
    setup_admits{YType::uint16, "setup-admits"},
    setup_errors{YType::uint16, "setup-errors"},
    setup_rejects{YType::uint16, "setup-rejects"},
    setup_requests{YType::uint16, "setup-requests"},
    tear_errors{YType::uint16, "tear-errors"},
    tear_preempts{YType::uint16, "tear-preempts"},
    tear_requests{YType::uint16, "tear-requests"}
{
    yang_name = "incoming-reservation-statistics"; yang_parent_name = "statstics-link";
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::~IncomingReservationStatistics()
{
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::has_data() const
{
    return setup_admits.is_set
	|| setup_errors.is_set
	|| setup_rejects.is_set
	|| setup_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set
	|| tear_requests.is_set;
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(setup_admits.operation)
	|| is_set(setup_errors.operation)
	|| is_set(setup_rejects.operation)
	|| is_set(setup_requests.operation)
	|| is_set(tear_errors.operation)
	|| is_set(tear_preempts.operation)
	|| is_set(tear_requests.operation);
}

std::string MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "incoming-reservation-statistics";

    return path_buffer.str();

}

EntityPath MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IncomingReservationStatistics' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_admits.is_set || is_set(setup_admits.operation)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.operation)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.operation)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (setup_requests.is_set || is_set(setup_requests.operation)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.operation)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.operation)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.operation)) leaf_name_data.push_back(tear_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::get_children()
{
    return children;
}

void MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "setup-admits")
    {
        setup_admits = value;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
    }
    if(value_path == "setup-requests")
    {
        setup_requests = value;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
    }
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::OutgoingPathStatistics()
    :
    setup_admits{YType::uint16, "setup-admits"},
    setup_errors{YType::uint16, "setup-errors"},
    setup_rejects{YType::uint16, "setup-rejects"},
    setup_requests{YType::uint16, "setup-requests"},
    tear_errors{YType::uint16, "tear-errors"},
    tear_preempts{YType::uint16, "tear-preempts"},
    tear_requests{YType::uint16, "tear-requests"}
{
    yang_name = "outgoing-path-statistics"; yang_parent_name = "statstics-link";
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::~OutgoingPathStatistics()
{
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::has_data() const
{
    return setup_admits.is_set
	|| setup_errors.is_set
	|| setup_rejects.is_set
	|| setup_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set
	|| tear_requests.is_set;
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(setup_admits.operation)
	|| is_set(setup_errors.operation)
	|| is_set(setup_rejects.operation)
	|| is_set(setup_requests.operation)
	|| is_set(tear_errors.operation)
	|| is_set(tear_preempts.operation)
	|| is_set(tear_requests.operation);
}

std::string MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-path-statistics";

    return path_buffer.str();

}

EntityPath MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutgoingPathStatistics' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_admits.is_set || is_set(setup_admits.operation)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.operation)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.operation)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (setup_requests.is_set || is_set(setup_requests.operation)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.operation)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.operation)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.operation)) leaf_name_data.push_back(tear_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::get_children()
{
    return children;
}

void MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "setup-admits")
    {
        setup_admits = value;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
    }
    if(value_path == "setup-requests")
    {
        setup_requests = value;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
    }
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::OutgoingReservationStatistics()
    :
    setup_admits{YType::uint16, "setup-admits"},
    setup_errors{YType::uint16, "setup-errors"},
    setup_rejects{YType::uint16, "setup-rejects"},
    setup_requests{YType::uint16, "setup-requests"},
    tear_errors{YType::uint16, "tear-errors"},
    tear_preempts{YType::uint16, "tear-preempts"},
    tear_requests{YType::uint16, "tear-requests"}
{
    yang_name = "outgoing-reservation-statistics"; yang_parent_name = "statstics-link";
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::~OutgoingReservationStatistics()
{
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::has_data() const
{
    return setup_admits.is_set
	|| setup_errors.is_set
	|| setup_rejects.is_set
	|| setup_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set
	|| tear_requests.is_set;
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(setup_admits.operation)
	|| is_set(setup_errors.operation)
	|| is_set(setup_rejects.operation)
	|| is_set(setup_requests.operation)
	|| is_set(tear_errors.operation)
	|| is_set(tear_preempts.operation)
	|| is_set(tear_requests.operation);
}

std::string MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-reservation-statistics";

    return path_buffer.str();

}

EntityPath MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutgoingReservationStatistics' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_admits.is_set || is_set(setup_admits.operation)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.operation)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.operation)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (setup_requests.is_set || is_set(setup_requests.operation)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.operation)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.operation)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.operation)) leaf_name_data.push_back(tear_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::get_children()
{
    return children;
}

void MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "setup-admits")
    {
        setup_admits = value;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
    }
    if(value_path == "setup-requests")
    {
        setup_requests = value;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
    }
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::IncomingPathStatistics32Bit()
    :
    setup_admits{YType::uint32, "setup-admits"},
    setup_errors{YType::uint32, "setup-errors"},
    setup_rejects{YType::uint32, "setup-rejects"},
    setup_requests{YType::uint32, "setup-requests"},
    tear_errors{YType::uint32, "tear-errors"},
    tear_preempts{YType::uint32, "tear-preempts"},
    tear_requests{YType::uint32, "tear-requests"}
{
    yang_name = "incoming-path-statistics32-bit"; yang_parent_name = "statstics-link";
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::~IncomingPathStatistics32Bit()
{
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::has_data() const
{
    return setup_admits.is_set
	|| setup_errors.is_set
	|| setup_rejects.is_set
	|| setup_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set
	|| tear_requests.is_set;
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::has_operation() const
{
    return is_set(operation)
	|| is_set(setup_admits.operation)
	|| is_set(setup_errors.operation)
	|| is_set(setup_rejects.operation)
	|| is_set(setup_requests.operation)
	|| is_set(tear_errors.operation)
	|| is_set(tear_preempts.operation)
	|| is_set(tear_requests.operation);
}

std::string MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "incoming-path-statistics32-bit";

    return path_buffer.str();

}

EntityPath MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IncomingPathStatistics32Bit' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_admits.is_set || is_set(setup_admits.operation)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.operation)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.operation)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (setup_requests.is_set || is_set(setup_requests.operation)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.operation)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.operation)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.operation)) leaf_name_data.push_back(tear_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::get_children()
{
    return children;
}

void MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingPathStatistics32Bit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "setup-admits")
    {
        setup_admits = value;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
    }
    if(value_path == "setup-requests")
    {
        setup_requests = value;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
    }
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::IncomingReservationStatistics32Bit()
    :
    setup_admits{YType::uint32, "setup-admits"},
    setup_errors{YType::uint32, "setup-errors"},
    setup_rejects{YType::uint32, "setup-rejects"},
    setup_requests{YType::uint32, "setup-requests"},
    tear_errors{YType::uint32, "tear-errors"},
    tear_preempts{YType::uint32, "tear-preempts"},
    tear_requests{YType::uint32, "tear-requests"}
{
    yang_name = "incoming-reservation-statistics32-bit"; yang_parent_name = "statstics-link";
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::~IncomingReservationStatistics32Bit()
{
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::has_data() const
{
    return setup_admits.is_set
	|| setup_errors.is_set
	|| setup_rejects.is_set
	|| setup_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set
	|| tear_requests.is_set;
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::has_operation() const
{
    return is_set(operation)
	|| is_set(setup_admits.operation)
	|| is_set(setup_errors.operation)
	|| is_set(setup_rejects.operation)
	|| is_set(setup_requests.operation)
	|| is_set(tear_errors.operation)
	|| is_set(tear_preempts.operation)
	|| is_set(tear_requests.operation);
}

std::string MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "incoming-reservation-statistics32-bit";

    return path_buffer.str();

}

EntityPath MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IncomingReservationStatistics32Bit' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_admits.is_set || is_set(setup_admits.operation)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.operation)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.operation)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (setup_requests.is_set || is_set(setup_requests.operation)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.operation)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.operation)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.operation)) leaf_name_data.push_back(tear_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::get_children()
{
    return children;
}

void MplsLcac::Statistics::StatsticsLinks::StatsticsLink::IncomingReservationStatistics32Bit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "setup-admits")
    {
        setup_admits = value;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
    }
    if(value_path == "setup-requests")
    {
        setup_requests = value;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
    }
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::OutgoingPathStatistics32Bit()
    :
    setup_admits{YType::uint32, "setup-admits"},
    setup_errors{YType::uint32, "setup-errors"},
    setup_rejects{YType::uint32, "setup-rejects"},
    setup_requests{YType::uint32, "setup-requests"},
    tear_errors{YType::uint32, "tear-errors"},
    tear_preempts{YType::uint32, "tear-preempts"},
    tear_requests{YType::uint32, "tear-requests"}
{
    yang_name = "outgoing-path-statistics32-bit"; yang_parent_name = "statstics-link";
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::~OutgoingPathStatistics32Bit()
{
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::has_data() const
{
    return setup_admits.is_set
	|| setup_errors.is_set
	|| setup_rejects.is_set
	|| setup_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set
	|| tear_requests.is_set;
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::has_operation() const
{
    return is_set(operation)
	|| is_set(setup_admits.operation)
	|| is_set(setup_errors.operation)
	|| is_set(setup_rejects.operation)
	|| is_set(setup_requests.operation)
	|| is_set(tear_errors.operation)
	|| is_set(tear_preempts.operation)
	|| is_set(tear_requests.operation);
}

std::string MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-path-statistics32-bit";

    return path_buffer.str();

}

EntityPath MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutgoingPathStatistics32Bit' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_admits.is_set || is_set(setup_admits.operation)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.operation)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.operation)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (setup_requests.is_set || is_set(setup_requests.operation)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.operation)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.operation)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.operation)) leaf_name_data.push_back(tear_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::get_children()
{
    return children;
}

void MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingPathStatistics32Bit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "setup-admits")
    {
        setup_admits = value;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
    }
    if(value_path == "setup-requests")
    {
        setup_requests = value;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
    }
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::OutgoingReservationStatistics32Bit()
    :
    setup_admits{YType::uint32, "setup-admits"},
    setup_errors{YType::uint32, "setup-errors"},
    setup_rejects{YType::uint32, "setup-rejects"},
    setup_requests{YType::uint32, "setup-requests"},
    tear_errors{YType::uint32, "tear-errors"},
    tear_preempts{YType::uint32, "tear-preempts"},
    tear_requests{YType::uint32, "tear-requests"}
{
    yang_name = "outgoing-reservation-statistics32-bit"; yang_parent_name = "statstics-link";
}

MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::~OutgoingReservationStatistics32Bit()
{
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::has_data() const
{
    return setup_admits.is_set
	|| setup_errors.is_set
	|| setup_rejects.is_set
	|| setup_requests.is_set
	|| tear_errors.is_set
	|| tear_preempts.is_set
	|| tear_requests.is_set;
}

bool MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::has_operation() const
{
    return is_set(operation)
	|| is_set(setup_admits.operation)
	|| is_set(setup_errors.operation)
	|| is_set(setup_rejects.operation)
	|| is_set(setup_requests.operation)
	|| is_set(tear_errors.operation)
	|| is_set(tear_preempts.operation)
	|| is_set(tear_requests.operation);
}

std::string MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outgoing-reservation-statistics32-bit";

    return path_buffer.str();

}

EntityPath MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OutgoingReservationStatistics32Bit' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_admits.is_set || is_set(setup_admits.operation)) leaf_name_data.push_back(setup_admits.get_name_leafdata());
    if (setup_errors.is_set || is_set(setup_errors.operation)) leaf_name_data.push_back(setup_errors.get_name_leafdata());
    if (setup_rejects.is_set || is_set(setup_rejects.operation)) leaf_name_data.push_back(setup_rejects.get_name_leafdata());
    if (setup_requests.is_set || is_set(setup_requests.operation)) leaf_name_data.push_back(setup_requests.get_name_leafdata());
    if (tear_errors.is_set || is_set(tear_errors.operation)) leaf_name_data.push_back(tear_errors.get_name_leafdata());
    if (tear_preempts.is_set || is_set(tear_preempts.operation)) leaf_name_data.push_back(tear_preempts.get_name_leafdata());
    if (tear_requests.is_set || is_set(tear_requests.operation)) leaf_name_data.push_back(tear_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::get_children()
{
    return children;
}

void MplsLcac::Statistics::StatsticsLinks::StatsticsLink::OutgoingReservationStatistics32Bit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "setup-admits")
    {
        setup_admits = value;
    }
    if(value_path == "setup-errors")
    {
        setup_errors = value;
    }
    if(value_path == "setup-rejects")
    {
        setup_rejects = value;
    }
    if(value_path == "setup-requests")
    {
        setup_requests = value;
    }
    if(value_path == "tear-errors")
    {
        tear_errors = value;
    }
    if(value_path == "tear-preempts")
    {
        tear_preempts = value;
    }
    if(value_path == "tear-requests")
    {
        tear_requests = value;
    }
}

MplsLcac::BandwidthAllocation::BandwidthAllocation()
    :
    bandwidth_allocation_links(std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks>())
	,global(std::make_shared<MplsLcac::BandwidthAllocation::Global>())
{
    bandwidth_allocation_links->parent = this;
    children["bandwidth-allocation-links"] = bandwidth_allocation_links;

    global->parent = this;
    children["global"] = global;

    yang_name = "bandwidth-allocation"; yang_parent_name = "mpls-lcac";
}

MplsLcac::BandwidthAllocation::~BandwidthAllocation()
{
}

bool MplsLcac::BandwidthAllocation::has_data() const
{
    return (bandwidth_allocation_links !=  nullptr && bandwidth_allocation_links->has_data())
	|| (global !=  nullptr && global->has_data());
}

bool MplsLcac::BandwidthAllocation::has_operation() const
{
    return is_set(operation)
	|| (bandwidth_allocation_links !=  nullptr && bandwidth_allocation_links->has_operation())
	|| (global !=  nullptr && global->has_operation());
}

std::string MplsLcac::BandwidthAllocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-allocation";

    return path_buffer.str();

}

EntityPath MplsLcac::BandwidthAllocation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAllocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bandwidth-allocation-links")
    {
        if(bandwidth_allocation_links != nullptr)
        {
            children["bandwidth-allocation-links"] = bandwidth_allocation_links;
        }
        else
        {
            bandwidth_allocation_links = std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks>();
            bandwidth_allocation_links->parent = this;
            children["bandwidth-allocation-links"] = bandwidth_allocation_links;
        }
        return children.at("bandwidth-allocation-links");
    }

    if(child_yang_name == "global")
    {
        if(global != nullptr)
        {
            children["global"] = global;
        }
        else
        {
            global = std::make_shared<MplsLcac::BandwidthAllocation::Global>();
            global->parent = this;
            children["global"] = global;
        }
        return children.at("global");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::BandwidthAllocation::get_children()
{
    if(children.find("bandwidth-allocation-links") == children.end())
    {
        if(bandwidth_allocation_links != nullptr)
        {
            children["bandwidth-allocation-links"] = bandwidth_allocation_links;
        }
    }

    if(children.find("global") == children.end())
    {
        if(global != nullptr)
        {
            children["global"] = global;
        }
    }

    return children;
}

void MplsLcac::BandwidthAllocation::set_value(const std::string & value_path, std::string value)
{
}

MplsLcac::BandwidthAllocation::Global::Global()
    :
    bandwidth_hold_time{YType::uint16, "bandwidth-hold-time"},
    is_role_standby{YType::boolean, "is-role-standby"},
    links{YType::uint16, "links"}
{
    yang_name = "global"; yang_parent_name = "bandwidth-allocation";
}

MplsLcac::BandwidthAllocation::Global::~Global()
{
}

bool MplsLcac::BandwidthAllocation::Global::has_data() const
{
    return bandwidth_hold_time.is_set
	|| is_role_standby.is_set
	|| links.is_set;
}

bool MplsLcac::BandwidthAllocation::Global::has_operation() const
{
    return is_set(operation)
	|| is_set(bandwidth_hold_time.operation)
	|| is_set(is_role_standby.operation)
	|| is_set(links.operation);
}

std::string MplsLcac::BandwidthAllocation::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

EntityPath MplsLcac::BandwidthAllocation::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/bandwidth-allocation/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_hold_time.is_set || is_set(bandwidth_hold_time.operation)) leaf_name_data.push_back(bandwidth_hold_time.get_name_leafdata());
    if (is_role_standby.is_set || is_set(is_role_standby.operation)) leaf_name_data.push_back(is_role_standby.get_name_leafdata());
    if (links.is_set || is_set(links.operation)) leaf_name_data.push_back(links.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAllocation::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::BandwidthAllocation::Global::get_children()
{
    return children;
}

void MplsLcac::BandwidthAllocation::Global::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth-hold-time")
    {
        bandwidth_hold_time = value;
    }
    if(value_path == "is-role-standby")
    {
        is_role_standby = value;
    }
    if(value_path == "links")
    {
        links = value;
    }
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLinks()
{
    yang_name = "bandwidth-allocation-links"; yang_parent_name = "bandwidth-allocation";
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::~BandwidthAllocationLinks()
{
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::has_data() const
{
    for (std::size_t index=0; index<bandwidth_allocation_link.size(); index++)
    {
        if(bandwidth_allocation_link[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::has_operation() const
{
    for (std::size_t index=0; index<bandwidth_allocation_link.size(); index++)
    {
        if(bandwidth_allocation_link[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-allocation-links";

    return path_buffer.str();

}

EntityPath MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/bandwidth-allocation/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bandwidth-allocation-link")
    {
        for(auto const & c : bandwidth_allocation_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink>();
        c->parent = this;
        bandwidth_allocation_link.push_back(std::move(c));
        children[segment_path] = bandwidth_allocation_link.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::get_children()
{
    for (auto const & c : bandwidth_allocation_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::set_value(const std::string & value_path, std::string value)
{
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::BandwidthAllocationLink()
    :
    interface_name{YType::str, "interface-name"},
    bandwidth_descriptors{YType::uint16, "bandwidth-descriptors"},
    bandwidth_pool{YType::enumeration, "bandwidth-pool"},
    flooding_down_threshold{YType::uint8, "flooding-down-threshold"},
    flooding_down_thresholds_are_default{YType::boolean, "flooding-down-thresholds-are-default"},
    flooding_down_thresholds_are_global{YType::boolean, "flooding-down-thresholds-are-global"},
    flooding_up_threshold{YType::uint8, "flooding-up-threshold"},
    flooding_up_thresholds_are_default{YType::boolean, "flooding-up-thresholds-are-default"},
    flooding_up_thresholds_are_global{YType::boolean, "flooding-up-thresholds-are-global"},
    total_bandwidth_descriptors{YType::uint16, "total-bandwidth-descriptors"}
    	,
    downstream_bandwidth(std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth>())
	,link_common(std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon>())
	,upstream_bandwidth(std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth>())
{
    downstream_bandwidth->parent = this;
    children["downstream-bandwidth"] = downstream_bandwidth;

    link_common->parent = this;
    children["link-common"] = link_common;

    upstream_bandwidth->parent = this;
    children["upstream-bandwidth"] = upstream_bandwidth;

    yang_name = "bandwidth-allocation-link"; yang_parent_name = "bandwidth-allocation-links";
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::~BandwidthAllocationLink()
{
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::has_data() const
{
    for (auto const & leaf : flooding_down_threshold.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : flooding_up_threshold.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return interface_name.is_set
	|| bandwidth_descriptors.is_set
	|| bandwidth_pool.is_set
	|| flooding_down_thresholds_are_default.is_set
	|| flooding_down_thresholds_are_global.is_set
	|| flooding_up_thresholds_are_default.is_set
	|| flooding_up_thresholds_are_global.is_set
	|| total_bandwidth_descriptors.is_set
	|| (downstream_bandwidth !=  nullptr && downstream_bandwidth->has_data())
	|| (link_common !=  nullptr && link_common->has_data())
	|| (upstream_bandwidth !=  nullptr && upstream_bandwidth->has_data());
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::has_operation() const
{
    for (auto const & leaf : flooding_down_threshold.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : flooding_up_threshold.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(bandwidth_descriptors.operation)
	|| is_set(bandwidth_pool.operation)
	|| is_set(flooding_down_threshold.operation)
	|| is_set(flooding_down_thresholds_are_default.operation)
	|| is_set(flooding_down_thresholds_are_global.operation)
	|| is_set(flooding_up_threshold.operation)
	|| is_set(flooding_up_thresholds_are_default.operation)
	|| is_set(flooding_up_thresholds_are_global.operation)
	|| is_set(total_bandwidth_descriptors.operation)
	|| (downstream_bandwidth !=  nullptr && downstream_bandwidth->has_operation())
	|| (link_common !=  nullptr && link_common->has_operation())
	|| (upstream_bandwidth !=  nullptr && upstream_bandwidth->has_operation());
}

std::string MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-allocation-link" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/bandwidth-allocation/bandwidth-allocation-links/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bandwidth_descriptors.is_set || is_set(bandwidth_descriptors.operation)) leaf_name_data.push_back(bandwidth_descriptors.get_name_leafdata());
    if (bandwidth_pool.is_set || is_set(bandwidth_pool.operation)) leaf_name_data.push_back(bandwidth_pool.get_name_leafdata());
    if (flooding_down_thresholds_are_default.is_set || is_set(flooding_down_thresholds_are_default.operation)) leaf_name_data.push_back(flooding_down_thresholds_are_default.get_name_leafdata());
    if (flooding_down_thresholds_are_global.is_set || is_set(flooding_down_thresholds_are_global.operation)) leaf_name_data.push_back(flooding_down_thresholds_are_global.get_name_leafdata());
    if (flooding_up_thresholds_are_default.is_set || is_set(flooding_up_thresholds_are_default.operation)) leaf_name_data.push_back(flooding_up_thresholds_are_default.get_name_leafdata());
    if (flooding_up_thresholds_are_global.is_set || is_set(flooding_up_thresholds_are_global.operation)) leaf_name_data.push_back(flooding_up_thresholds_are_global.get_name_leafdata());
    if (total_bandwidth_descriptors.is_set || is_set(total_bandwidth_descriptors.operation)) leaf_name_data.push_back(total_bandwidth_descriptors.get_name_leafdata());

    auto flooding_down_threshold_name_datas = flooding_down_threshold.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flooding_down_threshold_name_datas.begin(), flooding_down_threshold_name_datas.end());
    auto flooding_up_threshold_name_datas = flooding_up_threshold.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flooding_up_threshold_name_datas.begin(), flooding_up_threshold_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "downstream-bandwidth")
    {
        if(downstream_bandwidth != nullptr)
        {
            children["downstream-bandwidth"] = downstream_bandwidth;
        }
        else
        {
            downstream_bandwidth = std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth>();
            downstream_bandwidth->parent = this;
            children["downstream-bandwidth"] = downstream_bandwidth;
        }
        return children.at("downstream-bandwidth");
    }

    if(child_yang_name == "link-common")
    {
        if(link_common != nullptr)
        {
            children["link-common"] = link_common;
        }
        else
        {
            link_common = std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon>();
            link_common->parent = this;
            children["link-common"] = link_common;
        }
        return children.at("link-common");
    }

    if(child_yang_name == "upstream-bandwidth")
    {
        if(upstream_bandwidth != nullptr)
        {
            children["upstream-bandwidth"] = upstream_bandwidth;
        }
        else
        {
            upstream_bandwidth = std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth>();
            upstream_bandwidth->parent = this;
            children["upstream-bandwidth"] = upstream_bandwidth;
        }
        return children.at("upstream-bandwidth");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::get_children()
{
    if(children.find("downstream-bandwidth") == children.end())
    {
        if(downstream_bandwidth != nullptr)
        {
            children["downstream-bandwidth"] = downstream_bandwidth;
        }
    }

    if(children.find("link-common") == children.end())
    {
        if(link_common != nullptr)
        {
            children["link-common"] = link_common;
        }
    }

    if(children.find("upstream-bandwidth") == children.end())
    {
        if(upstream_bandwidth != nullptr)
        {
            children["upstream-bandwidth"] = upstream_bandwidth;
        }
    }

    return children;
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "bandwidth-descriptors")
    {
        bandwidth_descriptors = value;
    }
    if(value_path == "bandwidth-pool")
    {
        bandwidth_pool = value;
    }
    if(value_path == "flooding-down-threshold")
    {
        flooding_down_threshold.append(value);
    }
    if(value_path == "flooding-down-thresholds-are-default")
    {
        flooding_down_thresholds_are_default = value;
    }
    if(value_path == "flooding-down-thresholds-are-global")
    {
        flooding_down_thresholds_are_global = value;
    }
    if(value_path == "flooding-up-threshold")
    {
        flooding_up_threshold.append(value);
    }
    if(value_path == "flooding-up-thresholds-are-default")
    {
        flooding_up_thresholds_are_default = value;
    }
    if(value_path == "flooding-up-thresholds-are-global")
    {
        flooding_up_thresholds_are_global = value;
    }
    if(value_path == "total-bandwidth-descriptors")
    {
        total_bandwidth_descriptors = value;
    }
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkCommon()
    :
    bandwidth_units{YType::enumeration, "bandwidth-units"},
    bcm_id{YType::uint16, "bcm-id"},
    capability{YType::uint32, "capability"},
    has_protection{YType::boolean, "has-protection"},
    igp_neighbors{YType::uint16, "igp-neighbors"},
    inbound_admission_method{YType::enumeration, "inbound-admission-method"},
    incoming_reservable_bandwidth_percentage{YType::uint8, "incoming-reservable-bandwidth-percentage"},
    incoming_reservable_pool0_bandwidth_percentage{YType::uint8, "incoming-reservable-pool0-bandwidth-percentage"},
    incoming_reservable_pool1_bandwidth_percentage{YType::uint8, "incoming-reservable-pool1-bandwidth-percentage"},
    is_resource_provider_installed{YType::boolean, "is-resource-provider-installed"},
    is_unnumbered{YType::boolean, "is-unnumbered"},
    last_flooded_effective_maximum_reservable_bandwidth{YType::uint64, "last-flooded-effective-maximum-reservable-bandwidth"},
    link_address{YType::str, "link-address"},
    link_id{YType::str, "link-id"},
    maximum_reservable_bandwidth{YType::uint64, "maximum-reservable-bandwidth"},
    maximum_reservable_pool0_bandwidth{YType::uint64, "maximum-reservable-pool0-bandwidth"},
    maximum_reservable_pool1_bandwidth{YType::uint64, "maximum-reservable-pool1-bandwidth"},
    outbound_admission_method{YType::enumeration, "outbound-admission-method"},
    outgoing_reservable_bandwidth_percentage{YType::uint8, "outgoing-reservable-bandwidth-percentage"},
    outgoing_reservable_pool0_bandwidth_percentage{YType::uint8, "outgoing-reservable-pool0-bandwidth-percentage"},
    outgoing_reservable_pool1_bandwidth_percentage{YType::uint8, "outgoing-reservable-pool1-bandwidth-percentage"},
    physical_bandwidth{YType::uint64, "physical-bandwidth"},
    resource_provider{YType::enumeration, "resource-provider"},
    working_priority{YType::uint32, "working-priority"}
    	,
    link_flags(std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags>())
{
    link_flags->parent = this;
    children["link-flags"] = link_flags;

    yang_name = "link-common"; yang_parent_name = "bandwidth-allocation-link";
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::~LinkCommon()
{
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::has_data() const
{
    for (std::size_t index=0; index<flooded_areas.size(); index++)
    {
        if(flooded_areas[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<interface_switching_capability_descriptor.size(); index++)
    {
        if(interface_switching_capability_descriptor[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_data())
            return true;
    }
    return bandwidth_units.is_set
	|| bcm_id.is_set
	|| capability.is_set
	|| has_protection.is_set
	|| igp_neighbors.is_set
	|| inbound_admission_method.is_set
	|| incoming_reservable_bandwidth_percentage.is_set
	|| incoming_reservable_pool0_bandwidth_percentage.is_set
	|| incoming_reservable_pool1_bandwidth_percentage.is_set
	|| is_resource_provider_installed.is_set
	|| is_unnumbered.is_set
	|| last_flooded_effective_maximum_reservable_bandwidth.is_set
	|| link_address.is_set
	|| link_id.is_set
	|| maximum_reservable_bandwidth.is_set
	|| maximum_reservable_pool0_bandwidth.is_set
	|| maximum_reservable_pool1_bandwidth.is_set
	|| outbound_admission_method.is_set
	|| outgoing_reservable_bandwidth_percentage.is_set
	|| outgoing_reservable_pool0_bandwidth_percentage.is_set
	|| outgoing_reservable_pool1_bandwidth_percentage.is_set
	|| physical_bandwidth.is_set
	|| resource_provider.is_set
	|| working_priority.is_set
	|| (link_flags !=  nullptr && link_flags->has_data());
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::has_operation() const
{
    for (std::size_t index=0; index<flooded_areas.size(); index++)
    {
        if(flooded_areas[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<interface_switching_capability_descriptor.size(); index++)
    {
        if(interface_switching_capability_descriptor[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<shared_risk_link_group.size(); index++)
    {
        if(shared_risk_link_group[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(bandwidth_units.operation)
	|| is_set(bcm_id.operation)
	|| is_set(capability.operation)
	|| is_set(has_protection.operation)
	|| is_set(igp_neighbors.operation)
	|| is_set(inbound_admission_method.operation)
	|| is_set(incoming_reservable_bandwidth_percentage.operation)
	|| is_set(incoming_reservable_pool0_bandwidth_percentage.operation)
	|| is_set(incoming_reservable_pool1_bandwidth_percentage.operation)
	|| is_set(is_resource_provider_installed.operation)
	|| is_set(is_unnumbered.operation)
	|| is_set(last_flooded_effective_maximum_reservable_bandwidth.operation)
	|| is_set(link_address.operation)
	|| is_set(link_id.operation)
	|| is_set(maximum_reservable_bandwidth.operation)
	|| is_set(maximum_reservable_pool0_bandwidth.operation)
	|| is_set(maximum_reservable_pool1_bandwidth.operation)
	|| is_set(outbound_admission_method.operation)
	|| is_set(outgoing_reservable_bandwidth_percentage.operation)
	|| is_set(outgoing_reservable_pool0_bandwidth_percentage.operation)
	|| is_set(outgoing_reservable_pool1_bandwidth_percentage.operation)
	|| is_set(physical_bandwidth.operation)
	|| is_set(resource_provider.operation)
	|| is_set(working_priority.operation)
	|| (link_flags !=  nullptr && link_flags->has_operation());
}

std::string MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-common";

    return path_buffer.str();

}

EntityPath MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkCommon' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_units.is_set || is_set(bandwidth_units.operation)) leaf_name_data.push_back(bandwidth_units.get_name_leafdata());
    if (bcm_id.is_set || is_set(bcm_id.operation)) leaf_name_data.push_back(bcm_id.get_name_leafdata());
    if (capability.is_set || is_set(capability.operation)) leaf_name_data.push_back(capability.get_name_leafdata());
    if (has_protection.is_set || is_set(has_protection.operation)) leaf_name_data.push_back(has_protection.get_name_leafdata());
    if (igp_neighbors.is_set || is_set(igp_neighbors.operation)) leaf_name_data.push_back(igp_neighbors.get_name_leafdata());
    if (inbound_admission_method.is_set || is_set(inbound_admission_method.operation)) leaf_name_data.push_back(inbound_admission_method.get_name_leafdata());
    if (incoming_reservable_bandwidth_percentage.is_set || is_set(incoming_reservable_bandwidth_percentage.operation)) leaf_name_data.push_back(incoming_reservable_bandwidth_percentage.get_name_leafdata());
    if (incoming_reservable_pool0_bandwidth_percentage.is_set || is_set(incoming_reservable_pool0_bandwidth_percentage.operation)) leaf_name_data.push_back(incoming_reservable_pool0_bandwidth_percentage.get_name_leafdata());
    if (incoming_reservable_pool1_bandwidth_percentage.is_set || is_set(incoming_reservable_pool1_bandwidth_percentage.operation)) leaf_name_data.push_back(incoming_reservable_pool1_bandwidth_percentage.get_name_leafdata());
    if (is_resource_provider_installed.is_set || is_set(is_resource_provider_installed.operation)) leaf_name_data.push_back(is_resource_provider_installed.get_name_leafdata());
    if (is_unnumbered.is_set || is_set(is_unnumbered.operation)) leaf_name_data.push_back(is_unnumbered.get_name_leafdata());
    if (last_flooded_effective_maximum_reservable_bandwidth.is_set || is_set(last_flooded_effective_maximum_reservable_bandwidth.operation)) leaf_name_data.push_back(last_flooded_effective_maximum_reservable_bandwidth.get_name_leafdata());
    if (link_address.is_set || is_set(link_address.operation)) leaf_name_data.push_back(link_address.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.operation)) leaf_name_data.push_back(link_id.get_name_leafdata());
    if (maximum_reservable_bandwidth.is_set || is_set(maximum_reservable_bandwidth.operation)) leaf_name_data.push_back(maximum_reservable_bandwidth.get_name_leafdata());
    if (maximum_reservable_pool0_bandwidth.is_set || is_set(maximum_reservable_pool0_bandwidth.operation)) leaf_name_data.push_back(maximum_reservable_pool0_bandwidth.get_name_leafdata());
    if (maximum_reservable_pool1_bandwidth.is_set || is_set(maximum_reservable_pool1_bandwidth.operation)) leaf_name_data.push_back(maximum_reservable_pool1_bandwidth.get_name_leafdata());
    if (outbound_admission_method.is_set || is_set(outbound_admission_method.operation)) leaf_name_data.push_back(outbound_admission_method.get_name_leafdata());
    if (outgoing_reservable_bandwidth_percentage.is_set || is_set(outgoing_reservable_bandwidth_percentage.operation)) leaf_name_data.push_back(outgoing_reservable_bandwidth_percentage.get_name_leafdata());
    if (outgoing_reservable_pool0_bandwidth_percentage.is_set || is_set(outgoing_reservable_pool0_bandwidth_percentage.operation)) leaf_name_data.push_back(outgoing_reservable_pool0_bandwidth_percentage.get_name_leafdata());
    if (outgoing_reservable_pool1_bandwidth_percentage.is_set || is_set(outgoing_reservable_pool1_bandwidth_percentage.operation)) leaf_name_data.push_back(outgoing_reservable_pool1_bandwidth_percentage.get_name_leafdata());
    if (physical_bandwidth.is_set || is_set(physical_bandwidth.operation)) leaf_name_data.push_back(physical_bandwidth.get_name_leafdata());
    if (resource_provider.is_set || is_set(resource_provider.operation)) leaf_name_data.push_back(resource_provider.get_name_leafdata());
    if (working_priority.is_set || is_set(working_priority.operation)) leaf_name_data.push_back(working_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flooded-areas")
    {
        for(auto const & c : flooded_areas)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas>();
        c->parent = this;
        flooded_areas.push_back(std::move(c));
        children[segment_path] = flooded_areas.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-switching-capability-descriptor")
    {
        for(auto const & c : interface_switching_capability_descriptor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor>();
        c->parent = this;
        interface_switching_capability_descriptor.push_back(std::move(c));
        children[segment_path] = interface_switching_capability_descriptor.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "link-flags")
    {
        if(link_flags != nullptr)
        {
            children["link-flags"] = link_flags;
        }
        else
        {
            link_flags = std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags>();
            link_flags->parent = this;
            children["link-flags"] = link_flags;
        }
        return children.at("link-flags");
    }

    if(child_yang_name == "shared-risk-link-group")
    {
        for(auto const & c : shared_risk_link_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup>();
        c->parent = this;
        shared_risk_link_group.push_back(std::move(c));
        children[segment_path] = shared_risk_link_group.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::get_children()
{
    for (auto const & c : flooded_areas)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : interface_switching_capability_descriptor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("link-flags") == children.end())
    {
        if(link_flags != nullptr)
        {
            children["link-flags"] = link_flags;
        }
    }

    for (auto const & c : shared_risk_link_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth-units")
    {
        bandwidth_units = value;
    }
    if(value_path == "bcm-id")
    {
        bcm_id = value;
    }
    if(value_path == "capability")
    {
        capability = value;
    }
    if(value_path == "has-protection")
    {
        has_protection = value;
    }
    if(value_path == "igp-neighbors")
    {
        igp_neighbors = value;
    }
    if(value_path == "inbound-admission-method")
    {
        inbound_admission_method = value;
    }
    if(value_path == "incoming-reservable-bandwidth-percentage")
    {
        incoming_reservable_bandwidth_percentage = value;
    }
    if(value_path == "incoming-reservable-pool0-bandwidth-percentage")
    {
        incoming_reservable_pool0_bandwidth_percentage = value;
    }
    if(value_path == "incoming-reservable-pool1-bandwidth-percentage")
    {
        incoming_reservable_pool1_bandwidth_percentage = value;
    }
    if(value_path == "is-resource-provider-installed")
    {
        is_resource_provider_installed = value;
    }
    if(value_path == "is-unnumbered")
    {
        is_unnumbered = value;
    }
    if(value_path == "last-flooded-effective-maximum-reservable-bandwidth")
    {
        last_flooded_effective_maximum_reservable_bandwidth = value;
    }
    if(value_path == "link-address")
    {
        link_address = value;
    }
    if(value_path == "link-id")
    {
        link_id = value;
    }
    if(value_path == "maximum-reservable-bandwidth")
    {
        maximum_reservable_bandwidth = value;
    }
    if(value_path == "maximum-reservable-pool0-bandwidth")
    {
        maximum_reservable_pool0_bandwidth = value;
    }
    if(value_path == "maximum-reservable-pool1-bandwidth")
    {
        maximum_reservable_pool1_bandwidth = value;
    }
    if(value_path == "outbound-admission-method")
    {
        outbound_admission_method = value;
    }
    if(value_path == "outgoing-reservable-bandwidth-percentage")
    {
        outgoing_reservable_bandwidth_percentage = value;
    }
    if(value_path == "outgoing-reservable-pool0-bandwidth-percentage")
    {
        outgoing_reservable_pool0_bandwidth_percentage = value;
    }
    if(value_path == "outgoing-reservable-pool1-bandwidth-percentage")
    {
        outgoing_reservable_pool1_bandwidth_percentage = value;
    }
    if(value_path == "physical-bandwidth")
    {
        physical_bandwidth = value;
    }
    if(value_path == "resource-provider")
    {
        resource_provider = value;
    }
    if(value_path == "working-priority")
    {
        working_priority = value;
    }
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::LinkFlags()
    :
    is_admin_up{YType::boolean, "is-admin-up"},
    is_mpls_te_on{YType::boolean, "is-mpls-te-on"},
    signaling_agent{YType::enumeration, "signaling-agent"}
{
    yang_name = "link-flags"; yang_parent_name = "link-common";
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::~LinkFlags()
{
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::has_data() const
{
    return is_admin_up.is_set
	|| is_mpls_te_on.is_set
	|| signaling_agent.is_set;
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::has_operation() const
{
    return is_set(operation)
	|| is_set(is_admin_up.operation)
	|| is_set(is_mpls_te_on.operation)
	|| is_set(signaling_agent.operation);
}

std::string MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-flags";

    return path_buffer.str();

}

EntityPath MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkFlags' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_admin_up.is_set || is_set(is_admin_up.operation)) leaf_name_data.push_back(is_admin_up.get_name_leafdata());
    if (is_mpls_te_on.is_set || is_set(is_mpls_te_on.operation)) leaf_name_data.push_back(is_mpls_te_on.get_name_leafdata());
    if (signaling_agent.is_set || is_set(signaling_agent.operation)) leaf_name_data.push_back(signaling_agent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::get_children()
{
    return children;
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::LinkFlags::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-admin-up")
    {
        is_admin_up = value;
    }
    if(value_path == "is-mpls-te-on")
    {
        is_mpls_te_on = value;
    }
    if(value_path == "signaling-agent")
    {
        signaling_agent = value;
    }
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::SharedRiskLinkGroup()
    :
    shared_risk_group{YType::uint32, "shared-risk-group"},
    srlg_name{YType::str, "srlg-name"}
{
    yang_name = "shared-risk-link-group"; yang_parent_name = "link-common";
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::~SharedRiskLinkGroup()
{
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::has_data() const
{
    return shared_risk_group.is_set
	|| srlg_name.is_set;
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(shared_risk_group.operation)
	|| is_set(srlg_name.operation);
}

std::string MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shared-risk-link-group";

    return path_buffer.str();

}

EntityPath MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SharedRiskLinkGroup' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (shared_risk_group.is_set || is_set(shared_risk_group.operation)) leaf_name_data.push_back(shared_risk_group.get_name_leafdata());
    if (srlg_name.is_set || is_set(srlg_name.operation)) leaf_name_data.push_back(srlg_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::get_children()
{
    return children;
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::SharedRiskLinkGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "shared-risk-group")
    {
        shared_risk_group = value;
    }
    if(value_path == "srlg-name")
    {
        srlg_name = value;
    }
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::InterfaceSwitchingCapabilityDescriptor()
    :
    encoding{YType::uint8, "encoding"},
    key{YType::uint8, "key"},
    switching_capability{YType::uint8, "switching-capability"}
{
    yang_name = "interface-switching-capability-descriptor"; yang_parent_name = "link-common";
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::~InterfaceSwitchingCapabilityDescriptor()
{
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::has_data() const
{
    return encoding.is_set
	|| key.is_set
	|| switching_capability.is_set;
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::has_operation() const
{
    return is_set(operation)
	|| is_set(encoding.operation)
	|| is_set(key.operation)
	|| is_set(switching_capability.operation);
}

std::string MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-switching-capability-descriptor";

    return path_buffer.str();

}

EntityPath MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceSwitchingCapabilityDescriptor' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encoding.is_set || is_set(encoding.operation)) leaf_name_data.push_back(encoding.get_name_leafdata());
    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());
    if (switching_capability.is_set || is_set(switching_capability.operation)) leaf_name_data.push_back(switching_capability.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::get_children()
{
    return children;
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::InterfaceSwitchingCapabilityDescriptor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encoding")
    {
        encoding = value;
    }
    if(value_path == "key")
    {
        key = value;
    }
    if(value_path == "switching-capability")
    {
        switching_capability = value;
    }
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::FloodedAreas()
    :
    flooded_area{YType::str, "flooded-area"}
{
    yang_name = "flooded-areas"; yang_parent_name = "link-common";
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::~FloodedAreas()
{
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::has_data() const
{
    return flooded_area.is_set;
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::has_operation() const
{
    return is_set(operation)
	|| is_set(flooded_area.operation);
}

std::string MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flooded-areas";

    return path_buffer.str();

}

EntityPath MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FloodedAreas' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flooded_area.is_set || is_set(flooded_area.operation)) leaf_name_data.push_back(flooded_area.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::get_children()
{
    return children;
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::LinkCommon::FloodedAreas::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flooded-area")
    {
        flooded_area = value;
    }
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::UpstreamBandwidth()
    :
    bandwidth_direction{YType::enumeration, "bandwidth-direction"},
    bandwidth_units{YType::enumeration, "bandwidth-units"},
    is_admission_method_allocated_bandwidth{YType::boolean, "is-admission-method-allocated-bandwidth"}
{
    yang_name = "upstream-bandwidth"; yang_parent_name = "bandwidth-allocation-link";
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::~UpstreamBandwidth()
{
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::has_data() const
{
    for (std::size_t index=0; index<bandwidth_pool0.size(); index++)
    {
        if(bandwidth_pool0[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<bandwidth_pool1.size(); index++)
    {
        if(bandwidth_pool1[index]->has_data())
            return true;
    }
    return bandwidth_direction.is_set
	|| bandwidth_units.is_set
	|| is_admission_method_allocated_bandwidth.is_set;
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::has_operation() const
{
    for (std::size_t index=0; index<bandwidth_pool0.size(); index++)
    {
        if(bandwidth_pool0[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<bandwidth_pool1.size(); index++)
    {
        if(bandwidth_pool1[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(bandwidth_direction.operation)
	|| is_set(bandwidth_units.operation)
	|| is_set(is_admission_method_allocated_bandwidth.operation);
}

std::string MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "upstream-bandwidth";

    return path_buffer.str();

}

EntityPath MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpstreamBandwidth' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_direction.is_set || is_set(bandwidth_direction.operation)) leaf_name_data.push_back(bandwidth_direction.get_name_leafdata());
    if (bandwidth_units.is_set || is_set(bandwidth_units.operation)) leaf_name_data.push_back(bandwidth_units.get_name_leafdata());
    if (is_admission_method_allocated_bandwidth.is_set || is_set(is_admission_method_allocated_bandwidth.operation)) leaf_name_data.push_back(is_admission_method_allocated_bandwidth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bandwidth-pool0")
    {
        for(auto const & c : bandwidth_pool0)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0>();
        c->parent = this;
        bandwidth_pool0.push_back(std::move(c));
        children[segment_path] = bandwidth_pool0.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "bandwidth-pool1")
    {
        for(auto const & c : bandwidth_pool1)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1>();
        c->parent = this;
        bandwidth_pool1.push_back(std::move(c));
        children[segment_path] = bandwidth_pool1.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::get_children()
{
    for (auto const & c : bandwidth_pool0)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : bandwidth_pool1)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth-direction")
    {
        bandwidth_direction = value;
    }
    if(value_path == "bandwidth-units")
    {
        bandwidth_units = value;
    }
    if(value_path == "is-admission-method-allocated-bandwidth")
    {
        is_admission_method_allocated_bandwidth = value;
    }
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::BandwidthPool0()
    :
    held_amount{YType::uint32, "held-amount"},
    hold_priority{YType::uint8, "hold-priority"},
    locked_amount{YType::uint32, "locked-amount"},
    total_held_amount{YType::uint32, "total-held-amount"},
    total_locked_amount{YType::uint32, "total-locked-amount"}
{
    yang_name = "bandwidth-pool0"; yang_parent_name = "upstream-bandwidth";
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::~BandwidthPool0()
{
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::has_data() const
{
    return held_amount.is_set
	|| hold_priority.is_set
	|| locked_amount.is_set
	|| total_held_amount.is_set
	|| total_locked_amount.is_set;
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::has_operation() const
{
    return is_set(operation)
	|| is_set(held_amount.operation)
	|| is_set(hold_priority.operation)
	|| is_set(locked_amount.operation)
	|| is_set(total_held_amount.operation)
	|| is_set(total_locked_amount.operation);
}

std::string MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-pool0";

    return path_buffer.str();

}

EntityPath MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BandwidthPool0' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (held_amount.is_set || is_set(held_amount.operation)) leaf_name_data.push_back(held_amount.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.operation)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (locked_amount.is_set || is_set(locked_amount.operation)) leaf_name_data.push_back(locked_amount.get_name_leafdata());
    if (total_held_amount.is_set || is_set(total_held_amount.operation)) leaf_name_data.push_back(total_held_amount.get_name_leafdata());
    if (total_locked_amount.is_set || is_set(total_locked_amount.operation)) leaf_name_data.push_back(total_locked_amount.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::get_children()
{
    return children;
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool0::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "held-amount")
    {
        held_amount = value;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
    }
    if(value_path == "locked-amount")
    {
        locked_amount = value;
    }
    if(value_path == "total-held-amount")
    {
        total_held_amount = value;
    }
    if(value_path == "total-locked-amount")
    {
        total_locked_amount = value;
    }
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::BandwidthPool1()
    :
    held_amount{YType::uint32, "held-amount"},
    hold_priority{YType::uint8, "hold-priority"},
    locked_amount{YType::uint32, "locked-amount"},
    total_held_amount{YType::uint32, "total-held-amount"},
    total_locked_amount{YType::uint32, "total-locked-amount"}
{
    yang_name = "bandwidth-pool1"; yang_parent_name = "upstream-bandwidth";
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::~BandwidthPool1()
{
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::has_data() const
{
    return held_amount.is_set
	|| hold_priority.is_set
	|| locked_amount.is_set
	|| total_held_amount.is_set
	|| total_locked_amount.is_set;
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::has_operation() const
{
    return is_set(operation)
	|| is_set(held_amount.operation)
	|| is_set(hold_priority.operation)
	|| is_set(locked_amount.operation)
	|| is_set(total_held_amount.operation)
	|| is_set(total_locked_amount.operation);
}

std::string MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-pool1";

    return path_buffer.str();

}

EntityPath MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BandwidthPool1' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (held_amount.is_set || is_set(held_amount.operation)) leaf_name_data.push_back(held_amount.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.operation)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (locked_amount.is_set || is_set(locked_amount.operation)) leaf_name_data.push_back(locked_amount.get_name_leafdata());
    if (total_held_amount.is_set || is_set(total_held_amount.operation)) leaf_name_data.push_back(total_held_amount.get_name_leafdata());
    if (total_locked_amount.is_set || is_set(total_locked_amount.operation)) leaf_name_data.push_back(total_locked_amount.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::get_children()
{
    return children;
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::UpstreamBandwidth::BandwidthPool1::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "held-amount")
    {
        held_amount = value;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
    }
    if(value_path == "locked-amount")
    {
        locked_amount = value;
    }
    if(value_path == "total-held-amount")
    {
        total_held_amount = value;
    }
    if(value_path == "total-locked-amount")
    {
        total_locked_amount = value;
    }
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::DownstreamBandwidth()
    :
    bandwidth_direction{YType::enumeration, "bandwidth-direction"},
    bandwidth_units{YType::enumeration, "bandwidth-units"},
    is_admission_method_allocated_bandwidth{YType::boolean, "is-admission-method-allocated-bandwidth"}
{
    yang_name = "downstream-bandwidth"; yang_parent_name = "bandwidth-allocation-link";
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::~DownstreamBandwidth()
{
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::has_data() const
{
    for (std::size_t index=0; index<bandwidth_pool0.size(); index++)
    {
        if(bandwidth_pool0[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<bandwidth_pool1.size(); index++)
    {
        if(bandwidth_pool1[index]->has_data())
            return true;
    }
    return bandwidth_direction.is_set
	|| bandwidth_units.is_set
	|| is_admission_method_allocated_bandwidth.is_set;
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::has_operation() const
{
    for (std::size_t index=0; index<bandwidth_pool0.size(); index++)
    {
        if(bandwidth_pool0[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<bandwidth_pool1.size(); index++)
    {
        if(bandwidth_pool1[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(bandwidth_direction.operation)
	|| is_set(bandwidth_units.operation)
	|| is_set(is_admission_method_allocated_bandwidth.operation);
}

std::string MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "downstream-bandwidth";

    return path_buffer.str();

}

EntityPath MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DownstreamBandwidth' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bandwidth_direction.is_set || is_set(bandwidth_direction.operation)) leaf_name_data.push_back(bandwidth_direction.get_name_leafdata());
    if (bandwidth_units.is_set || is_set(bandwidth_units.operation)) leaf_name_data.push_back(bandwidth_units.get_name_leafdata());
    if (is_admission_method_allocated_bandwidth.is_set || is_set(is_admission_method_allocated_bandwidth.operation)) leaf_name_data.push_back(is_admission_method_allocated_bandwidth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bandwidth-pool0")
    {
        for(auto const & c : bandwidth_pool0)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0>();
        c->parent = this;
        bandwidth_pool0.push_back(std::move(c));
        children[segment_path] = bandwidth_pool0.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "bandwidth-pool1")
    {
        for(auto const & c : bandwidth_pool1)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1>();
        c->parent = this;
        bandwidth_pool1.push_back(std::move(c));
        children[segment_path] = bandwidth_pool1.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::get_children()
{
    for (auto const & c : bandwidth_pool0)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : bandwidth_pool1)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bandwidth-direction")
    {
        bandwidth_direction = value;
    }
    if(value_path == "bandwidth-units")
    {
        bandwidth_units = value;
    }
    if(value_path == "is-admission-method-allocated-bandwidth")
    {
        is_admission_method_allocated_bandwidth = value;
    }
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::BandwidthPool0()
    :
    held_amount{YType::uint32, "held-amount"},
    hold_priority{YType::uint8, "hold-priority"},
    locked_amount{YType::uint32, "locked-amount"},
    total_held_amount{YType::uint32, "total-held-amount"},
    total_locked_amount{YType::uint32, "total-locked-amount"}
{
    yang_name = "bandwidth-pool0"; yang_parent_name = "downstream-bandwidth";
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::~BandwidthPool0()
{
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::has_data() const
{
    return held_amount.is_set
	|| hold_priority.is_set
	|| locked_amount.is_set
	|| total_held_amount.is_set
	|| total_locked_amount.is_set;
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::has_operation() const
{
    return is_set(operation)
	|| is_set(held_amount.operation)
	|| is_set(hold_priority.operation)
	|| is_set(locked_amount.operation)
	|| is_set(total_held_amount.operation)
	|| is_set(total_locked_amount.operation);
}

std::string MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-pool0";

    return path_buffer.str();

}

EntityPath MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BandwidthPool0' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (held_amount.is_set || is_set(held_amount.operation)) leaf_name_data.push_back(held_amount.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.operation)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (locked_amount.is_set || is_set(locked_amount.operation)) leaf_name_data.push_back(locked_amount.get_name_leafdata());
    if (total_held_amount.is_set || is_set(total_held_amount.operation)) leaf_name_data.push_back(total_held_amount.get_name_leafdata());
    if (total_locked_amount.is_set || is_set(total_locked_amount.operation)) leaf_name_data.push_back(total_locked_amount.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::get_children()
{
    return children;
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool0::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "held-amount")
    {
        held_amount = value;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
    }
    if(value_path == "locked-amount")
    {
        locked_amount = value;
    }
    if(value_path == "total-held-amount")
    {
        total_held_amount = value;
    }
    if(value_path == "total-locked-amount")
    {
        total_locked_amount = value;
    }
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::BandwidthPool1()
    :
    held_amount{YType::uint32, "held-amount"},
    hold_priority{YType::uint8, "hold-priority"},
    locked_amount{YType::uint32, "locked-amount"},
    total_held_amount{YType::uint32, "total-held-amount"},
    total_locked_amount{YType::uint32, "total-locked-amount"}
{
    yang_name = "bandwidth-pool1"; yang_parent_name = "downstream-bandwidth";
}

MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::~BandwidthPool1()
{
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::has_data() const
{
    return held_amount.is_set
	|| hold_priority.is_set
	|| locked_amount.is_set
	|| total_held_amount.is_set
	|| total_locked_amount.is_set;
}

bool MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::has_operation() const
{
    return is_set(operation)
	|| is_set(held_amount.operation)
	|| is_set(hold_priority.operation)
	|| is_set(locked_amount.operation)
	|| is_set(total_held_amount.operation)
	|| is_set(total_locked_amount.operation);
}

std::string MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-pool1";

    return path_buffer.str();

}

EntityPath MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BandwidthPool1' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (held_amount.is_set || is_set(held_amount.operation)) leaf_name_data.push_back(held_amount.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.operation)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (locked_amount.is_set || is_set(locked_amount.operation)) leaf_name_data.push_back(locked_amount.get_name_leafdata());
    if (total_held_amount.is_set || is_set(total_held_amount.operation)) leaf_name_data.push_back(total_held_amount.get_name_leafdata());
    if (total_locked_amount.is_set || is_set(total_locked_amount.operation)) leaf_name_data.push_back(total_locked_amount.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::get_children()
{
    return children;
}

void MplsLcac::BandwidthAllocation::BandwidthAllocationLinks::BandwidthAllocationLink::DownstreamBandwidth::BandwidthPool1::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "held-amount")
    {
        held_amount = value;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
    }
    if(value_path == "locked-amount")
    {
        locked_amount = value;
    }
    if(value_path == "total-held-amount")
    {
        total_held_amount = value;
    }
    if(value_path == "total-locked-amount")
    {
        total_locked_amount = value;
    }
}

MplsLcac::Gmpls::Gmpls()
    :
    nni(std::make_shared<MplsLcac::Gmpls::Nni>())
	,uni(std::make_shared<MplsLcac::Gmpls::Uni>())
{
    nni->parent = this;
    children["nni"] = nni;

    uni->parent = this;
    children["uni"] = uni;

    yang_name = "gmpls"; yang_parent_name = "mpls-lcac";
}

MplsLcac::Gmpls::~Gmpls()
{
}

bool MplsLcac::Gmpls::has_data() const
{
    return (nni !=  nullptr && nni->has_data())
	|| (uni !=  nullptr && uni->has_data());
}

bool MplsLcac::Gmpls::has_operation() const
{
    return is_set(operation)
	|| (nni !=  nullptr && nni->has_operation())
	|| (uni !=  nullptr && uni->has_operation());
}

std::string MplsLcac::Gmpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gmpls";

    return path_buffer.str();

}

EntityPath MplsLcac::Gmpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::Gmpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nni")
    {
        if(nni != nullptr)
        {
            children["nni"] = nni;
        }
        else
        {
            nni = std::make_shared<MplsLcac::Gmpls::Nni>();
            nni->parent = this;
            children["nni"] = nni;
        }
        return children.at("nni");
    }

    if(child_yang_name == "uni")
    {
        if(uni != nullptr)
        {
            children["uni"] = uni;
        }
        else
        {
            uni = std::make_shared<MplsLcac::Gmpls::Uni>();
            uni->parent = this;
            children["uni"] = uni;
        }
        return children.at("uni");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::Gmpls::get_children()
{
    if(children.find("nni") == children.end())
    {
        if(nni != nullptr)
        {
            children["nni"] = nni;
        }
    }

    if(children.find("uni") == children.end())
    {
        if(uni != nullptr)
        {
            children["uni"] = uni;
        }
    }

    return children;
}

void MplsLcac::Gmpls::set_value(const std::string & value_path, std::string value)
{
}

MplsLcac::Gmpls::Nni::Nni()
{
    yang_name = "nni"; yang_parent_name = "gmpls";
}

MplsLcac::Gmpls::Nni::~Nni()
{
}

bool MplsLcac::Gmpls::Nni::has_data() const
{
    return false;
}

bool MplsLcac::Gmpls::Nni::has_operation() const
{
    return is_set(operation);
}

std::string MplsLcac::Gmpls::Nni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nni";

    return path_buffer.str();

}

EntityPath MplsLcac::Gmpls::Nni::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/gmpls/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::Gmpls::Nni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::Gmpls::Nni::get_children()
{
    return children;
}

void MplsLcac::Gmpls::Nni::set_value(const std::string & value_path, std::string value)
{
}

MplsLcac::Gmpls::Uni::Uni()
{
    yang_name = "uni"; yang_parent_name = "gmpls";
}

MplsLcac::Gmpls::Uni::~Uni()
{
}

bool MplsLcac::Gmpls::Uni::has_data() const
{
    return false;
}

bool MplsLcac::Gmpls::Uni::has_operation() const
{
    return is_set(operation);
}

std::string MplsLcac::Gmpls::Uni::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "uni";

    return path_buffer.str();

}

EntityPath MplsLcac::Gmpls::Uni::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/gmpls/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::Gmpls::Uni::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::Gmpls::Uni::get_children()
{
    return children;
}

void MplsLcac::Gmpls::Uni::set_value(const std::string & value_path, std::string value)
{
}

MplsLcac::BfdNeighbors::BfdNeighbors()
{
    yang_name = "bfd-neighbors"; yang_parent_name = "mpls-lcac";
}

MplsLcac::BfdNeighbors::~BfdNeighbors()
{
}

bool MplsLcac::BfdNeighbors::has_data() const
{
    for (std::size_t index=0; index<bfd_neighbor.size(); index++)
    {
        if(bfd_neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcac::BfdNeighbors::has_operation() const
{
    for (std::size_t index=0; index<bfd_neighbor.size(); index++)
    {
        if(bfd_neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLcac::BfdNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-neighbors";

    return path_buffer.str();

}

EntityPath MplsLcac::BfdNeighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::BfdNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bfd-neighbor")
    {
        for(auto const & c : bfd_neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcac::BfdNeighbors::BfdNeighbor>();
        c->parent = this;
        bfd_neighbor.push_back(std::move(c));
        children[segment_path] = bfd_neighbor.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::BfdNeighbors::get_children()
{
    for (auto const & c : bfd_neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLcac::BfdNeighbors::set_value(const std::string & value_path, std::string value)
{
}

MplsLcac::BfdNeighbors::BfdNeighbor::BfdNeighbor()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "bfd-neighbor"; yang_parent_name = "bfd-neighbors";
}

MplsLcac::BfdNeighbors::BfdNeighbor::~BfdNeighbor()
{
}

bool MplsLcac::BfdNeighbors::BfdNeighbor::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return interface_name.is_set;
}

bool MplsLcac::BfdNeighbors::BfdNeighbor::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string MplsLcac::BfdNeighbors::BfdNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-neighbor" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath MplsLcac::BfdNeighbors::BfdNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/bfd-neighbors/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::BfdNeighbors::BfdNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcac::BfdNeighbors::BfdNeighbor::Neighbor>();
        c->parent = this;
        neighbor.push_back(std::move(c));
        children[segment_path] = neighbor.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::BfdNeighbors::BfdNeighbor::get_children()
{
    for (auto const & c : neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLcac::BfdNeighbors::BfdNeighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

MplsLcac::BfdNeighbors::BfdNeighbor::Neighbor::Neighbor()
    :
    is_bfd_up{YType::boolean, "is-bfd-up"},
    neighbor_address{YType::str, "neighbor-address"}
{
    yang_name = "neighbor"; yang_parent_name = "bfd-neighbor";
}

MplsLcac::BfdNeighbors::BfdNeighbor::Neighbor::~Neighbor()
{
}

bool MplsLcac::BfdNeighbors::BfdNeighbor::Neighbor::has_data() const
{
    return is_bfd_up.is_set
	|| neighbor_address.is_set;
}

bool MplsLcac::BfdNeighbors::BfdNeighbor::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(is_bfd_up.operation)
	|| is_set(neighbor_address.operation);
}

std::string MplsLcac::BfdNeighbors::BfdNeighbor::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";

    return path_buffer.str();

}

EntityPath MplsLcac::BfdNeighbors::BfdNeighbor::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in Cisco_IOS_XR_mpls_te_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_bfd_up.is_set || is_set(is_bfd_up.operation)) leaf_name_data.push_back(is_bfd_up.get_name_leafdata());
    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::BfdNeighbors::BfdNeighbor::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::BfdNeighbors::BfdNeighbor::Neighbor::get_children()
{
    return children;
}

void MplsLcac::BfdNeighbors::BfdNeighbor::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-bfd-up")
    {
        is_bfd_up = value;
    }
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
}

MplsLcac::BandwidthAccount::BandwidthAccount()
    :
    bandwidth_account_links(std::make_shared<MplsLcac::BandwidthAccount::BandwidthAccountLinks>())
{
    bandwidth_account_links->parent = this;
    children["bandwidth-account-links"] = bandwidth_account_links;

    yang_name = "bandwidth-account"; yang_parent_name = "mpls-lcac";
}

MplsLcac::BandwidthAccount::~BandwidthAccount()
{
}

bool MplsLcac::BandwidthAccount::has_data() const
{
    return (bandwidth_account_links !=  nullptr && bandwidth_account_links->has_data());
}

bool MplsLcac::BandwidthAccount::has_operation() const
{
    return is_set(operation)
	|| (bandwidth_account_links !=  nullptr && bandwidth_account_links->has_operation());
}

std::string MplsLcac::BandwidthAccount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-account";

    return path_buffer.str();

}

EntityPath MplsLcac::BandwidthAccount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAccount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bandwidth-account-links")
    {
        if(bandwidth_account_links != nullptr)
        {
            children["bandwidth-account-links"] = bandwidth_account_links;
        }
        else
        {
            bandwidth_account_links = std::make_shared<MplsLcac::BandwidthAccount::BandwidthAccountLinks>();
            bandwidth_account_links->parent = this;
            children["bandwidth-account-links"] = bandwidth_account_links;
        }
        return children.at("bandwidth-account-links");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::BandwidthAccount::get_children()
{
    if(children.find("bandwidth-account-links") == children.end())
    {
        if(bandwidth_account_links != nullptr)
        {
            children["bandwidth-account-links"] = bandwidth_account_links;
        }
    }

    return children;
}

void MplsLcac::BandwidthAccount::set_value(const std::string & value_path, std::string value)
{
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLinks()
{
    yang_name = "bandwidth-account-links"; yang_parent_name = "bandwidth-account";
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::~BandwidthAccountLinks()
{
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::has_data() const
{
    for (std::size_t index=0; index<bandwidth_account_link.size(); index++)
    {
        if(bandwidth_account_link[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::has_operation() const
{
    for (std::size_t index=0; index<bandwidth_account_link.size(); index++)
    {
        if(bandwidth_account_link[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLcac::BandwidthAccount::BandwidthAccountLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-account-links";

    return path_buffer.str();

}

EntityPath MplsLcac::BandwidthAccount::BandwidthAccountLinks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/bandwidth-account/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAccount::BandwidthAccountLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bandwidth-account-link")
    {
        for(auto const & c : bandwidth_account_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink>();
        c->parent = this;
        bandwidth_account_link.push_back(std::move(c));
        children[segment_path] = bandwidth_account_link.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::BandwidthAccount::BandwidthAccountLinks::get_children()
{
    for (auto const & c : bandwidth_account_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLcac::BandwidthAccount::BandwidthAccountLinks::set_value(const std::string & value_path, std::string value)
{
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::BandwidthAccountLink()
    :
    interface_name{YType::str, "interface-name"},
    link_id{YType::str, "link-id"}
    	,
    common_info(std::make_shared<MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo>())
	,sample_history(std::make_shared<MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory>())
{
    common_info->parent = this;
    children["common-info"] = common_info;

    sample_history->parent = this;
    children["sample-history"] = sample_history;

    yang_name = "bandwidth-account-link"; yang_parent_name = "bandwidth-account-links";
}

MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::~BandwidthAccountLink()
{
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::has_data() const
{
    return interface_name.is_set
	|| link_id.is_set
	|| (common_info !=  nullptr && common_info->has_data())
	|| (sample_history !=  nullptr && sample_history->has_data());
}

bool MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(link_id.operation)
	|| (common_info !=  nullptr && common_info->has_operation())
	|| (sample_history !=  nullptr && sample_history->has_operation());
}

std::string MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-account-link" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-te-oper:mpls-lcac/bandwidth-account/bandwidth-account-links/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (link_id.is_set || is_set(link_id.operation)) leaf_name_data.push_back(link_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "common-info")
    {
        if(common_info != nullptr)
        {
            children["common-info"] = common_info;
        }
        else
        {
            common_info = std::make_shared<MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::CommonInfo>();
            common_info->parent = this;
            children["common-info"] = common_info;
        }
        return children.at("common-info");
    }

    if(child_yang_name == "sample-history")
    {
        if(sample_history != nullptr)
        {
            children["sample-history"] = sample_history;
        }
        else
        {
            sample_history = std::make_shared<MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::SampleHistory>();
            sample_history->parent = this;
            children["sample-history"] = sample_history;
        }
        return children.at("sample-history");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::get_children()
{
    if(children.find("common-info") == children.end())
    {
        if(common_info != nullptr)
        {
            children["common-info"] = common_info;
        }
    }

    if(children.find("sample-history") == children.end())
    {
        if(sample_history != nullptr)
        {
            children["sample-history"] = sample_history;
        }
    }

    return children;
}

void MplsLcac::BandwidthAccount::BandwidthAccountLinks::BandwidthAccountLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "link-id")
    {
        link_id = value;
    }
}


}
}

