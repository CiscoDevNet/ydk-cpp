
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_mpls_ldp_oper_2.hpp"
#include "Cisco_IOS_XR_mpls_ldp_oper_5.hpp"
#include "Cisco_IOS_XR_mpls_ldp_oper_3.hpp"
#include "Cisco_IOS_XR_mpls_ldp_oper_4.hpp"

namespace ydk {
namespace Cisco_IOS_XR_mpls_ldp_oper {

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Routing::Routing()
    :
    flags{YType::uint32, "flags"},
    is_local_vrf_leaked{YType::boolean, "is-local-vrf-leaked"},
    metric{YType::uint32, "metric"},
    priority{YType::uint8, "priority"},
    routing_update_age{YType::uint64, "routing-update-age"},
    routing_update_count{YType::uint32, "routing-update-count"},
    routing_update_timestamp{YType::uint64, "routing-update-timestamp"},
    source{YType::uint16, "source"},
    sr_local_label{YType::uint32, "sr-local-label"},
    type{YType::uint16, "type"},
    version{YType::uint32, "version"}
{
    yang_name = "routing"; yang_parent_name = "route";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Routing::~Routing()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Routing::has_data() const
{
    return flags.is_set
	|| is_local_vrf_leaked.is_set
	|| metric.is_set
	|| priority.is_set
	|| routing_update_age.is_set
	|| routing_update_count.is_set
	|| routing_update_timestamp.is_set
	|| source.is_set
	|| sr_local_label.is_set
	|| type.is_set
	|| version.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Routing::has_operation() const
{
    return is_set(operation)
	|| is_set(flags.operation)
	|| is_set(is_local_vrf_leaked.operation)
	|| is_set(metric.operation)
	|| is_set(priority.operation)
	|| is_set(routing_update_age.operation)
	|| is_set(routing_update_count.operation)
	|| is_set(routing_update_timestamp.operation)
	|| is_set(source.operation)
	|| is_set(sr_local_label.operation)
	|| is_set(type.operation)
	|| is_set(version.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Routing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routing";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Routing::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Routing' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (is_local_vrf_leaked.is_set || is_set(is_local_vrf_leaked.operation)) leaf_name_data.push_back(is_local_vrf_leaked.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (routing_update_age.is_set || is_set(routing_update_age.operation)) leaf_name_data.push_back(routing_update_age.get_name_leafdata());
    if (routing_update_count.is_set || is_set(routing_update_count.operation)) leaf_name_data.push_back(routing_update_count.get_name_leafdata());
    if (routing_update_timestamp.is_set || is_set(routing_update_timestamp.operation)) leaf_name_data.push_back(routing_update_timestamp.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());
    if (sr_local_label.is_set || is_set(sr_local_label.operation)) leaf_name_data.push_back(sr_local_label.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Routing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Routing::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Routing::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "is-local-vrf-leaked")
    {
        is_local_vrf_leaked = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "routing-update-age")
    {
        routing_update_age = value;
    }
    if(value_path == "routing-update-count")
    {
        routing_update_count = value;
    }
    if(value_path == "routing-update-timestamp")
    {
        routing_update_timestamp = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
    if(value_path == "sr-local-label")
    {
        sr_local_label = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Mpls::Mpls()
    :
    forwarding_update_age{YType::uint64, "forwarding-update-age"},
    forwarding_update_count{YType::uint32, "forwarding-update-count"},
    forwarding_update_timestamp{YType::uint64, "forwarding-update-timestamp"},
    local_label{YType::uint32, "local-label"}
{
    yang_name = "mpls"; yang_parent_name = "route";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Mpls::~Mpls()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Mpls::has_data() const
{
    return forwarding_update_age.is_set
	|| forwarding_update_count.is_set
	|| forwarding_update_timestamp.is_set
	|| local_label.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Mpls::has_operation() const
{
    return is_set(operation)
	|| is_set(forwarding_update_age.operation)
	|| is_set(forwarding_update_count.operation)
	|| is_set(forwarding_update_timestamp.operation)
	|| is_set(local_label.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Mpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mpls' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding_update_age.is_set || is_set(forwarding_update_age.operation)) leaf_name_data.push_back(forwarding_update_age.get_name_leafdata());
    if (forwarding_update_count.is_set || is_set(forwarding_update_count.operation)) leaf_name_data.push_back(forwarding_update_count.get_name_leafdata());
    if (forwarding_update_timestamp.is_set || is_set(forwarding_update_timestamp.operation)) leaf_name_data.push_back(forwarding_update_timestamp.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.operation)) leaf_name_data.push_back(local_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Mpls::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Route::Mpls::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "forwarding-update-age")
    {
        forwarding_update_age = value;
    }
    if(value_path == "forwarding-update-count")
    {
        forwarding_update_count = value;
    }
    if(value_path == "forwarding-update-timestamp")
    {
        forwarding_update_timestamp = value;
    }
    if(value_path == "local-label")
    {
        local_label = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Paths()
    :
    mpls(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls>())
	,routing(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing>())
{
    mpls->parent = this;
    children["mpls"] = mpls;

    routing->parent = this;
    children["routing"] = routing;

    yang_name = "paths"; yang_parent_name = "forwarding";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::~Paths()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::has_data() const
{
    return (mpls !=  nullptr && mpls->has_data())
	|| (routing !=  nullptr && routing->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::has_operation() const
{
    return is_set(operation)
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (routing !=  nullptr && routing->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "paths";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Paths' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mpls")
    {
        if(mpls != nullptr)
        {
            children["mpls"] = mpls;
        }
        else
        {
            mpls = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls>();
            mpls->parent = this;
            children["mpls"] = mpls;
        }
        return children.at("mpls");
    }

    if(child_yang_name == "routing")
    {
        if(routing != nullptr)
        {
            children["routing"] = routing;
        }
        else
        {
            routing = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing>();
            routing->parent = this;
            children["routing"] = routing;
        }
        return children.at("routing");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::get_children()
{
    if(children.find("mpls") == children.end())
    {
        if(mpls != nullptr)
        {
            children["mpls"] = mpls;
        }
    }

    if(children.find("routing") == children.end())
    {
        if(routing != nullptr)
        {
            children["routing"] = routing;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::Routing()
    :
    bkup_path_id{YType::uint8, "bkup-path-id"},
    flags{YType::uint32, "flags"},
    interface{YType::str, "interface"},
    interface_name{YType::str, "interface-name"},
    load_metric{YType::uint32, "load-metric"},
    next_hop_table_id{YType::uint32, "next-hop-table-id"},
    nexthop_id{YType::uint32, "nexthop-id"},
    nh_is_overriden{YType::boolean, "nh-is-overriden"},
    path_flags{YType::enumeration, "path-flags"},
    path_id{YType::uint8, "path-id"}
    	,
    next_hop(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop>())
	,remote_lfa(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa>())
{
    next_hop->parent = this;
    children["next-hop"] = next_hop;

    remote_lfa->parent = this;
    children["remote-lfa"] = remote_lfa;

    yang_name = "routing"; yang_parent_name = "paths";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::~Routing()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::has_data() const
{
    return bkup_path_id.is_set
	|| flags.is_set
	|| interface.is_set
	|| interface_name.is_set
	|| load_metric.is_set
	|| next_hop_table_id.is_set
	|| nexthop_id.is_set
	|| nh_is_overriden.is_set
	|| path_flags.is_set
	|| path_id.is_set
	|| (next_hop !=  nullptr && next_hop->has_data())
	|| (remote_lfa !=  nullptr && remote_lfa->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::has_operation() const
{
    return is_set(operation)
	|| is_set(bkup_path_id.operation)
	|| is_set(flags.operation)
	|| is_set(interface.operation)
	|| is_set(interface_name.operation)
	|| is_set(load_metric.operation)
	|| is_set(next_hop_table_id.operation)
	|| is_set(nexthop_id.operation)
	|| is_set(nh_is_overriden.operation)
	|| is_set(path_flags.operation)
	|| is_set(path_id.operation)
	|| (next_hop !=  nullptr && next_hop->has_operation())
	|| (remote_lfa !=  nullptr && remote_lfa->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routing";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Routing' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bkup_path_id.is_set || is_set(bkup_path_id.operation)) leaf_name_data.push_back(bkup_path_id.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (load_metric.is_set || is_set(load_metric.operation)) leaf_name_data.push_back(load_metric.get_name_leafdata());
    if (next_hop_table_id.is_set || is_set(next_hop_table_id.operation)) leaf_name_data.push_back(next_hop_table_id.get_name_leafdata());
    if (nexthop_id.is_set || is_set(nexthop_id.operation)) leaf_name_data.push_back(nexthop_id.get_name_leafdata());
    if (nh_is_overriden.is_set || is_set(nh_is_overriden.operation)) leaf_name_data.push_back(nh_is_overriden.get_name_leafdata());
    if (path_flags.is_set || is_set(path_flags.operation)) leaf_name_data.push_back(path_flags.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.operation)) leaf_name_data.push_back(path_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop != nullptr)
        {
            children["next-hop"] = next_hop;
        }
        else
        {
            next_hop = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop>();
            next_hop->parent = this;
            children["next-hop"] = next_hop;
        }
        return children.at("next-hop");
    }

    if(child_yang_name == "remote-lfa")
    {
        if(remote_lfa != nullptr)
        {
            children["remote-lfa"] = remote_lfa;
        }
        else
        {
            remote_lfa = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa>();
            remote_lfa->parent = this;
            children["remote-lfa"] = remote_lfa;
        }
        return children.at("remote-lfa");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::get_children()
{
    if(children.find("next-hop") == children.end())
    {
        if(next_hop != nullptr)
        {
            children["next-hop"] = next_hop;
        }
    }

    if(children.find("remote-lfa") == children.end())
    {
        if(remote_lfa != nullptr)
        {
            children["remote-lfa"] = remote_lfa;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bkup-path-id")
    {
        bkup_path_id = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "load-metric")
    {
        load_metric = value;
    }
    if(value_path == "next-hop-table-id")
    {
        next_hop_table_id = value;
    }
    if(value_path == "nexthop-id")
    {
        nexthop_id = value;
    }
    if(value_path == "nh-is-overriden")
    {
        nh_is_overriden = value;
    }
    if(value_path == "path-flags")
    {
        path_flags = value;
    }
    if(value_path == "path-id")
    {
        path_id = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop::NextHop()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "next-hop"; yang_parent_name = "routing";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop::~NextHop()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NextHop' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::NextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteLfa()
    :
    has_q_node{YType::boolean, "has-q-node"},
    has_remote_lfa_bkup{YType::boolean, "has-remote-lfa-bkup"},
    needs_tldp{YType::boolean, "needs-tldp"}
    	,
    remote_p_node_id(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId>())
	,remote_q_node_id(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId>())
{
    remote_p_node_id->parent = this;
    children["remote-p-node-id"] = remote_p_node_id;

    remote_q_node_id->parent = this;
    children["remote-q-node-id"] = remote_q_node_id;

    yang_name = "remote-lfa"; yang_parent_name = "routing";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::~RemoteLfa()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::has_data() const
{
    return has_q_node.is_set
	|| has_remote_lfa_bkup.is_set
	|| needs_tldp.is_set
	|| (remote_p_node_id !=  nullptr && remote_p_node_id->has_data())
	|| (remote_q_node_id !=  nullptr && remote_q_node_id->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::has_operation() const
{
    return is_set(operation)
	|| is_set(has_q_node.operation)
	|| is_set(has_remote_lfa_bkup.operation)
	|| is_set(needs_tldp.operation)
	|| (remote_p_node_id !=  nullptr && remote_p_node_id->has_operation())
	|| (remote_q_node_id !=  nullptr && remote_q_node_id->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-lfa";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteLfa' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (has_q_node.is_set || is_set(has_q_node.operation)) leaf_name_data.push_back(has_q_node.get_name_leafdata());
    if (has_remote_lfa_bkup.is_set || is_set(has_remote_lfa_bkup.operation)) leaf_name_data.push_back(has_remote_lfa_bkup.get_name_leafdata());
    if (needs_tldp.is_set || is_set(needs_tldp.operation)) leaf_name_data.push_back(needs_tldp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "remote-p-node-id")
    {
        if(remote_p_node_id != nullptr)
        {
            children["remote-p-node-id"] = remote_p_node_id;
        }
        else
        {
            remote_p_node_id = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId>();
            remote_p_node_id->parent = this;
            children["remote-p-node-id"] = remote_p_node_id;
        }
        return children.at("remote-p-node-id");
    }

    if(child_yang_name == "remote-q-node-id")
    {
        if(remote_q_node_id != nullptr)
        {
            children["remote-q-node-id"] = remote_q_node_id;
        }
        else
        {
            remote_q_node_id = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId>();
            remote_q_node_id->parent = this;
            children["remote-q-node-id"] = remote_q_node_id;
        }
        return children.at("remote-q-node-id");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::get_children()
{
    if(children.find("remote-p-node-id") == children.end())
    {
        if(remote_p_node_id != nullptr)
        {
            children["remote-p-node-id"] = remote_p_node_id;
        }
    }

    if(children.find("remote-q-node-id") == children.end())
    {
        if(remote_q_node_id != nullptr)
        {
            children["remote-q-node-id"] = remote_q_node_id;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "has-q-node")
    {
        has_q_node = value;
    }
    if(value_path == "has-remote-lfa-bkup")
    {
        has_remote_lfa_bkup = value;
    }
    if(value_path == "needs-tldp")
    {
        needs_tldp = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId::RemotePNodeId()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "remote-p-node-id"; yang_parent_name = "remote-lfa";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId::~RemotePNodeId()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-p-node-id";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemotePNodeId' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemotePNodeId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId::RemoteQNodeId()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "remote-q-node-id"; yang_parent_name = "remote-lfa";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId::~RemoteQNodeId()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-q-node-id";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteQNodeId' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Routing::RemoteLfa::RemoteQNodeId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::Mpls()
    :
    mpls_outgoing_info(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo>())
	,remote_lfa(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa>())
{
    mpls_outgoing_info->parent = this;
    children["mpls-outgoing-info"] = mpls_outgoing_info;

    remote_lfa->parent = this;
    children["remote-lfa"] = remote_lfa;

    yang_name = "mpls"; yang_parent_name = "paths";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::~Mpls()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::has_data() const
{
    return (mpls_outgoing_info !=  nullptr && mpls_outgoing_info->has_data())
	|| (remote_lfa !=  nullptr && remote_lfa->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::has_operation() const
{
    return is_set(operation)
	|| (mpls_outgoing_info !=  nullptr && mpls_outgoing_info->has_operation())
	|| (remote_lfa !=  nullptr && remote_lfa->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mpls' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mpls-outgoing-info")
    {
        if(mpls_outgoing_info != nullptr)
        {
            children["mpls-outgoing-info"] = mpls_outgoing_info;
        }
        else
        {
            mpls_outgoing_info = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo>();
            mpls_outgoing_info->parent = this;
            children["mpls-outgoing-info"] = mpls_outgoing_info;
        }
        return children.at("mpls-outgoing-info");
    }

    if(child_yang_name == "remote-lfa")
    {
        if(remote_lfa != nullptr)
        {
            children["remote-lfa"] = remote_lfa;
        }
        else
        {
            remote_lfa = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa>();
            remote_lfa->parent = this;
            children["remote-lfa"] = remote_lfa;
        }
        return children.at("remote-lfa");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::get_children()
{
    if(children.find("mpls-outgoing-info") == children.end())
    {
        if(mpls_outgoing_info != nullptr)
        {
            children["mpls-outgoing-info"] = mpls_outgoing_info;
        }
    }

    if(children.find("remote-lfa") == children.end())
    {
        if(remote_lfa != nullptr)
        {
            children["remote-lfa"] = remote_lfa;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::MplsOutgoingInfo()
    :
    is_from_graceful_restartable_neighbor{YType::boolean, "is-from-graceful-restartable-neighbor"},
    is_stale{YType::boolean, "is-stale"},
    out_label{YType::uint32, "out-label"},
    out_label_owner{YType::enumeration, "out-label-owner"},
    out_label_rsn{YType::enumeration, "out-label-rsn"},
    out_label_type{YType::enumeration, "out-label-type"}
    	,
    nexthop_peer_ldp_ident(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent>())
{
    nexthop_peer_ldp_ident->parent = this;
    children["nexthop-peer-ldp-ident"] = nexthop_peer_ldp_ident;

    yang_name = "mpls-outgoing-info"; yang_parent_name = "mpls";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::~MplsOutgoingInfo()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::has_data() const
{
    return is_from_graceful_restartable_neighbor.is_set
	|| is_stale.is_set
	|| out_label.is_set
	|| out_label_owner.is_set
	|| out_label_rsn.is_set
	|| out_label_type.is_set
	|| (nexthop_peer_ldp_ident !=  nullptr && nexthop_peer_ldp_ident->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(is_from_graceful_restartable_neighbor.operation)
	|| is_set(is_stale.operation)
	|| is_set(out_label.operation)
	|| is_set(out_label_owner.operation)
	|| is_set(out_label_rsn.operation)
	|| is_set(out_label_type.operation)
	|| (nexthop_peer_ldp_ident !=  nullptr && nexthop_peer_ldp_ident->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-outgoing-info";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsOutgoingInfo' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_from_graceful_restartable_neighbor.is_set || is_set(is_from_graceful_restartable_neighbor.operation)) leaf_name_data.push_back(is_from_graceful_restartable_neighbor.get_name_leafdata());
    if (is_stale.is_set || is_set(is_stale.operation)) leaf_name_data.push_back(is_stale.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.operation)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (out_label_owner.is_set || is_set(out_label_owner.operation)) leaf_name_data.push_back(out_label_owner.get_name_leafdata());
    if (out_label_rsn.is_set || is_set(out_label_rsn.operation)) leaf_name_data.push_back(out_label_rsn.get_name_leafdata());
    if (out_label_type.is_set || is_set(out_label_type.operation)) leaf_name_data.push_back(out_label_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nexthop-peer-ldp-ident")
    {
        if(nexthop_peer_ldp_ident != nullptr)
        {
            children["nexthop-peer-ldp-ident"] = nexthop_peer_ldp_ident;
        }
        else
        {
            nexthop_peer_ldp_ident = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent>();
            nexthop_peer_ldp_ident->parent = this;
            children["nexthop-peer-ldp-ident"] = nexthop_peer_ldp_ident;
        }
        return children.at("nexthop-peer-ldp-ident");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::get_children()
{
    if(children.find("nexthop-peer-ldp-ident") == children.end())
    {
        if(nexthop_peer_ldp_ident != nullptr)
        {
            children["nexthop-peer-ldp-ident"] = nexthop_peer_ldp_ident;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-from-graceful-restartable-neighbor")
    {
        is_from_graceful_restartable_neighbor = value;
    }
    if(value_path == "is-stale")
    {
        is_stale = value;
    }
    if(value_path == "out-label")
    {
        out_label = value;
    }
    if(value_path == "out-label-owner")
    {
        out_label_owner = value;
    }
    if(value_path == "out-label-rsn")
    {
        out_label_rsn = value;
    }
    if(value_path == "out-label-type")
    {
        out_label_type = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::NexthopPeerLdpIdent()
    :
    label_space_id{YType::uint16, "label-space-id"},
    ldp_id{YType::str, "ldp-id"},
    lsr_id{YType::str, "lsr-id"}
{
    yang_name = "nexthop-peer-ldp-ident"; yang_parent_name = "mpls-outgoing-info";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::~NexthopPeerLdpIdent()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::has_data() const
{
    return label_space_id.is_set
	|| ldp_id.is_set
	|| lsr_id.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::has_operation() const
{
    return is_set(operation)
	|| is_set(label_space_id.operation)
	|| is_set(ldp_id.operation)
	|| is_set(lsr_id.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop-peer-ldp-ident";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NexthopPeerLdpIdent' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_space_id.is_set || is_set(label_space_id.operation)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (ldp_id.is_set || is_set(ldp_id.operation)) leaf_name_data.push_back(ldp_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.operation)) leaf_name_data.push_back(lsr_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::MplsOutgoingInfo::NexthopPeerLdpIdent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-space-id")
    {
        label_space_id = value;
    }
    if(value_path == "ldp-id")
    {
        ldp_id = value;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::RemoteLfa()
    :
    has_remote_lfa_bkup{YType::boolean, "has-remote-lfa-bkup"}
    	,
    mpls_outgoing_info(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo>())
{
    mpls_outgoing_info->parent = this;
    children["mpls-outgoing-info"] = mpls_outgoing_info;

    yang_name = "remote-lfa"; yang_parent_name = "mpls";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::~RemoteLfa()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::has_data() const
{
    return has_remote_lfa_bkup.is_set
	|| (mpls_outgoing_info !=  nullptr && mpls_outgoing_info->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::has_operation() const
{
    return is_set(operation)
	|| is_set(has_remote_lfa_bkup.operation)
	|| (mpls_outgoing_info !=  nullptr && mpls_outgoing_info->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-lfa";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteLfa' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (has_remote_lfa_bkup.is_set || is_set(has_remote_lfa_bkup.operation)) leaf_name_data.push_back(has_remote_lfa_bkup.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mpls-outgoing-info")
    {
        if(mpls_outgoing_info != nullptr)
        {
            children["mpls-outgoing-info"] = mpls_outgoing_info;
        }
        else
        {
            mpls_outgoing_info = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo>();
            mpls_outgoing_info->parent = this;
            children["mpls-outgoing-info"] = mpls_outgoing_info;
        }
        return children.at("mpls-outgoing-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::get_children()
{
    if(children.find("mpls-outgoing-info") == children.end())
    {
        if(mpls_outgoing_info != nullptr)
        {
            children["mpls-outgoing-info"] = mpls_outgoing_info;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "has-remote-lfa-bkup")
    {
        has_remote_lfa_bkup = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::MplsOutgoingInfo()
{
    yang_name = "mpls-outgoing-info"; yang_parent_name = "remote-lfa";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::~MplsOutgoingInfo()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::has_data() const
{
    for (std::size_t index=0; index<stack.size(); index++)
    {
        if(stack[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::has_operation() const
{
    for (std::size_t index=0; index<stack.size(); index++)
    {
        if(stack[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-outgoing-info";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsOutgoingInfo' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "stack")
    {
        for(auto const & c : stack)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack>();
        c->parent = this;
        stack.push_back(std::move(c));
        children[segment_path] = stack.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::get_children()
{
    for (auto const & c : stack)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::Stack()
    :
    is_from_graceful_restartable_neighbor{YType::boolean, "is-from-graceful-restartable-neighbor"},
    is_stale{YType::boolean, "is-stale"},
    out_label{YType::uint32, "out-label"},
    out_label_owner{YType::enumeration, "out-label-owner"},
    out_label_rsn{YType::enumeration, "out-label-rsn"},
    out_label_type{YType::enumeration, "out-label-type"}
    	,
    nexthop_peer_ldp_ident(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent>())
{
    nexthop_peer_ldp_ident->parent = this;
    children["nexthop-peer-ldp-ident"] = nexthop_peer_ldp_ident;

    yang_name = "stack"; yang_parent_name = "mpls-outgoing-info";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::~Stack()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::has_data() const
{
    return is_from_graceful_restartable_neighbor.is_set
	|| is_stale.is_set
	|| out_label.is_set
	|| out_label_owner.is_set
	|| out_label_rsn.is_set
	|| out_label_type.is_set
	|| (nexthop_peer_ldp_ident !=  nullptr && nexthop_peer_ldp_ident->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::has_operation() const
{
    return is_set(operation)
	|| is_set(is_from_graceful_restartable_neighbor.operation)
	|| is_set(is_stale.operation)
	|| is_set(out_label.operation)
	|| is_set(out_label_owner.operation)
	|| is_set(out_label_rsn.operation)
	|| is_set(out_label_type.operation)
	|| (nexthop_peer_ldp_ident !=  nullptr && nexthop_peer_ldp_ident->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stack";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Stack' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_from_graceful_restartable_neighbor.is_set || is_set(is_from_graceful_restartable_neighbor.operation)) leaf_name_data.push_back(is_from_graceful_restartable_neighbor.get_name_leafdata());
    if (is_stale.is_set || is_set(is_stale.operation)) leaf_name_data.push_back(is_stale.get_name_leafdata());
    if (out_label.is_set || is_set(out_label.operation)) leaf_name_data.push_back(out_label.get_name_leafdata());
    if (out_label_owner.is_set || is_set(out_label_owner.operation)) leaf_name_data.push_back(out_label_owner.get_name_leafdata());
    if (out_label_rsn.is_set || is_set(out_label_rsn.operation)) leaf_name_data.push_back(out_label_rsn.get_name_leafdata());
    if (out_label_type.is_set || is_set(out_label_type.operation)) leaf_name_data.push_back(out_label_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nexthop-peer-ldp-ident")
    {
        if(nexthop_peer_ldp_ident != nullptr)
        {
            children["nexthop-peer-ldp-ident"] = nexthop_peer_ldp_ident;
        }
        else
        {
            nexthop_peer_ldp_ident = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent>();
            nexthop_peer_ldp_ident->parent = this;
            children["nexthop-peer-ldp-ident"] = nexthop_peer_ldp_ident;
        }
        return children.at("nexthop-peer-ldp-ident");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::get_children()
{
    if(children.find("nexthop-peer-ldp-ident") == children.end())
    {
        if(nexthop_peer_ldp_ident != nullptr)
        {
            children["nexthop-peer-ldp-ident"] = nexthop_peer_ldp_ident;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-from-graceful-restartable-neighbor")
    {
        is_from_graceful_restartable_neighbor = value;
    }
    if(value_path == "is-stale")
    {
        is_stale = value;
    }
    if(value_path == "out-label")
    {
        out_label = value;
    }
    if(value_path == "out-label-owner")
    {
        out_label_owner = value;
    }
    if(value_path == "out-label-rsn")
    {
        out_label_rsn = value;
    }
    if(value_path == "out-label-type")
    {
        out_label_type = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent::NexthopPeerLdpIdent()
    :
    label_space_id{YType::uint16, "label-space-id"},
    ldp_id{YType::str, "ldp-id"},
    lsr_id{YType::str, "lsr-id"}
{
    yang_name = "nexthop-peer-ldp-ident"; yang_parent_name = "stack";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent::~NexthopPeerLdpIdent()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent::has_data() const
{
    return label_space_id.is_set
	|| ldp_id.is_set
	|| lsr_id.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent::has_operation() const
{
    return is_set(operation)
	|| is_set(label_space_id.operation)
	|| is_set(ldp_id.operation)
	|| is_set(lsr_id.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop-peer-ldp-ident";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NexthopPeerLdpIdent' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_space_id.is_set || is_set(label_space_id.operation)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (ldp_id.is_set || is_set(ldp_id.operation)) leaf_name_data.push_back(ldp_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.operation)) leaf_name_data.push_back(lsr_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::Forwardings::Forwarding::Paths::Mpls::RemoteLfa::MplsOutgoingInfo::Stack::NexthopPeerLdpIdent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-space-id")
    {
        label_space_id = value;
    }
    if(value_path == "ldp-id")
    {
        ldp_id = value;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::BindingsAdvertiseSpec()
    :
    allocation_acl(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl>())
{
    allocation_acl->parent = this;
    children["allocation-acl"] = allocation_acl;

    yang_name = "bindings-advertise-spec"; yang_parent_name = "af";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::~BindingsAdvertiseSpec()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::has_data() const
{
    for (std::size_t index=0; index<advt_acl.size(); index++)
    {
        if(advt_acl[index]->has_data())
            return true;
    }
    return (allocation_acl !=  nullptr && allocation_acl->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::has_operation() const
{
    for (std::size_t index=0; index<advt_acl.size(); index++)
    {
        if(advt_acl[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (allocation_acl !=  nullptr && allocation_acl->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bindings-advertise-spec";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BindingsAdvertiseSpec' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "advt-acl")
    {
        for(auto const & c : advt_acl)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl>();
        c->parent = this;
        advt_acl.push_back(std::move(c));
        children[segment_path] = advt_acl.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "allocation-acl")
    {
        if(allocation_acl != nullptr)
        {
            children["allocation-acl"] = allocation_acl;
        }
        else
        {
            allocation_acl = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl>();
            allocation_acl->parent = this;
            children["allocation-acl"] = allocation_acl;
        }
        return children.at("allocation-acl");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::get_children()
{
    for (auto const & c : advt_acl)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("allocation-acl") == children.end())
    {
        if(allocation_acl != nullptr)
        {
            children["allocation-acl"] = allocation_acl;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl::AllocationAcl()
    :
    has_acl{YType::boolean, "has-acl"},
    is_host_route_only{YType::boolean, "is-host-route-only"},
    prefix_acl{YType::str, "prefix-acl"}
{
    yang_name = "allocation-acl"; yang_parent_name = "bindings-advertise-spec";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl::~AllocationAcl()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl::has_data() const
{
    return has_acl.is_set
	|| is_host_route_only.is_set
	|| prefix_acl.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl::has_operation() const
{
    return is_set(operation)
	|| is_set(has_acl.operation)
	|| is_set(is_host_route_only.operation)
	|| is_set(prefix_acl.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocation-acl";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AllocationAcl' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (has_acl.is_set || is_set(has_acl.operation)) leaf_name_data.push_back(has_acl.get_name_leafdata());
    if (is_host_route_only.is_set || is_set(is_host_route_only.operation)) leaf_name_data.push_back(is_host_route_only.get_name_leafdata());
    if (prefix_acl.is_set || is_set(prefix_acl.operation)) leaf_name_data.push_back(prefix_acl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AllocationAcl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "has-acl")
    {
        has_acl = value;
    }
    if(value_path == "is-host-route-only")
    {
        is_host_route_only = value;
    }
    if(value_path == "prefix-acl")
    {
        prefix_acl = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl::AdvtAcl()
    :
    peer_acl{YType::str, "peer-acl"},
    prefix_acl{YType::str, "prefix-acl"}
{
    yang_name = "advt-acl"; yang_parent_name = "bindings-advertise-spec";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl::~AdvtAcl()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl::has_data() const
{
    return peer_acl.is_set
	|| prefix_acl.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_acl.operation)
	|| is_set(prefix_acl.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advt-acl";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdvtAcl' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_acl.is_set || is_set(peer_acl.operation)) leaf_name_data.push_back(peer_acl.get_name_leafdata());
    if (prefix_acl.is_set || is_set(prefix_acl.operation)) leaf_name_data.push_back(prefix_acl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::BindingsAdvertiseSpec::AdvtAcl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-acl")
    {
        peer_acl = value;
    }
    if(value_path == "prefix-acl")
    {
        prefix_acl = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::ForwardingSummary()
    :
    fsht{YType::uint16, "fsht"},
    intfs{YType::uint16, "intfs"},
    is_lsd_bound{YType::boolean, "is-lsd-bound"},
    lbls{YType::uint16, "lbls"}
    	,
    rws(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws>())
	,vrf(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Vrf_>())
{
    rws->parent = this;
    children["rws"] = rws;

    vrf->parent = this;
    children["vrf"] = vrf;

    yang_name = "forwarding-summary"; yang_parent_name = "af";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::~ForwardingSummary()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::has_data() const
{
    return fsht.is_set
	|| intfs.is_set
	|| is_lsd_bound.is_set
	|| lbls.is_set
	|| (rws !=  nullptr && rws->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(fsht.operation)
	|| is_set(intfs.operation)
	|| is_set(is_lsd_bound.operation)
	|| is_set(lbls.operation)
	|| (rws !=  nullptr && rws->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding-summary";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ForwardingSummary' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fsht.is_set || is_set(fsht.operation)) leaf_name_data.push_back(fsht.get_name_leafdata());
    if (intfs.is_set || is_set(intfs.operation)) leaf_name_data.push_back(intfs.get_name_leafdata());
    if (is_lsd_bound.is_set || is_set(is_lsd_bound.operation)) leaf_name_data.push_back(is_lsd_bound.get_name_leafdata());
    if (lbls.is_set || is_set(lbls.operation)) leaf_name_data.push_back(lbls.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rws")
    {
        if(rws != nullptr)
        {
            children["rws"] = rws;
        }
        else
        {
            rws = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws>();
            rws->parent = this;
            children["rws"] = rws;
        }
        return children.at("rws");
    }

    if(child_yang_name == "vrf")
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
        else
        {
            vrf = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Vrf_>();
            vrf->parent = this;
            children["vrf"] = vrf;
        }
        return children.at("vrf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::get_children()
{
    if(children.find("rws") == children.end())
    {
        if(rws != nullptr)
        {
            children["rws"] = rws;
        }
    }

    if(children.find("vrf") == children.end())
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fsht")
    {
        fsht = value;
    }
    if(value_path == "intfs")
    {
        intfs = value;
    }
    if(value_path == "is-lsd-bound")
    {
        is_lsd_bound = value;
    }
    if(value_path == "lbls")
    {
        lbls = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Vrf_::Vrf_()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "forwarding-summary";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Vrf_::~Vrf_()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Vrf_::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Vrf_::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Vrf_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf_' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Vrf_::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Vrf_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Rws()
    :
    nhs(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Nhs>())
	,pfxs(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs>())
{
    nhs->parent = this;
    children["nhs"] = nhs;

    pfxs->parent = this;
    children["pfxs"] = pfxs;

    yang_name = "rws"; yang_parent_name = "forwarding-summary";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::~Rws()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::has_data() const
{
    return (nhs !=  nullptr && nhs->has_data())
	|| (pfxs !=  nullptr && pfxs->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::has_operation() const
{
    return is_set(operation)
	|| (nhs !=  nullptr && nhs->has_operation())
	|| (pfxs !=  nullptr && pfxs->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rws";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rws' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nhs")
    {
        if(nhs != nullptr)
        {
            children["nhs"] = nhs;
        }
        else
        {
            nhs = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Nhs>();
            nhs->parent = this;
            children["nhs"] = nhs;
        }
        return children.at("nhs");
    }

    if(child_yang_name == "pfxs")
    {
        if(pfxs != nullptr)
        {
            children["pfxs"] = pfxs;
        }
        else
        {
            pfxs = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs>();
            pfxs->parent = this;
            children["pfxs"] = pfxs;
        }
        return children.at("pfxs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::get_children()
{
    if(children.find("nhs") == children.end())
    {
        if(nhs != nullptr)
        {
            children["nhs"] = nhs;
        }
    }

    if(children.find("pfxs") == children.end())
    {
        if(pfxs != nullptr)
        {
            children["pfxs"] = pfxs;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::Pfxs()
    :
    ecmp_pfxs{YType::uint16, "ecmp-pfxs"},
    protected_pfxs{YType::uint16, "protected-pfxs"},
    total_pfxs{YType::uint16, "total-pfxs"}
    	,
    labeled_pfxs_aggr(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr>())
	,labeled_pfxs_backup(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup>())
	,labeled_pfxs_primary(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary>())
{
    labeled_pfxs_aggr->parent = this;
    children["labeled-pfxs-aggr"] = labeled_pfxs_aggr;

    labeled_pfxs_backup->parent = this;
    children["labeled-pfxs-backup"] = labeled_pfxs_backup;

    labeled_pfxs_primary->parent = this;
    children["labeled-pfxs-primary"] = labeled_pfxs_primary;

    yang_name = "pfxs"; yang_parent_name = "rws";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::~Pfxs()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::has_data() const
{
    return ecmp_pfxs.is_set
	|| protected_pfxs.is_set
	|| total_pfxs.is_set
	|| (labeled_pfxs_aggr !=  nullptr && labeled_pfxs_aggr->has_data())
	|| (labeled_pfxs_backup !=  nullptr && labeled_pfxs_backup->has_data())
	|| (labeled_pfxs_primary !=  nullptr && labeled_pfxs_primary->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::has_operation() const
{
    return is_set(operation)
	|| is_set(ecmp_pfxs.operation)
	|| is_set(protected_pfxs.operation)
	|| is_set(total_pfxs.operation)
	|| (labeled_pfxs_aggr !=  nullptr && labeled_pfxs_aggr->has_operation())
	|| (labeled_pfxs_backup !=  nullptr && labeled_pfxs_backup->has_operation())
	|| (labeled_pfxs_primary !=  nullptr && labeled_pfxs_primary->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfxs";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pfxs' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ecmp_pfxs.is_set || is_set(ecmp_pfxs.operation)) leaf_name_data.push_back(ecmp_pfxs.get_name_leafdata());
    if (protected_pfxs.is_set || is_set(protected_pfxs.operation)) leaf_name_data.push_back(protected_pfxs.get_name_leafdata());
    if (total_pfxs.is_set || is_set(total_pfxs.operation)) leaf_name_data.push_back(total_pfxs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "labeled-pfxs-aggr")
    {
        if(labeled_pfxs_aggr != nullptr)
        {
            children["labeled-pfxs-aggr"] = labeled_pfxs_aggr;
        }
        else
        {
            labeled_pfxs_aggr = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr>();
            labeled_pfxs_aggr->parent = this;
            children["labeled-pfxs-aggr"] = labeled_pfxs_aggr;
        }
        return children.at("labeled-pfxs-aggr");
    }

    if(child_yang_name == "labeled-pfxs-backup")
    {
        if(labeled_pfxs_backup != nullptr)
        {
            children["labeled-pfxs-backup"] = labeled_pfxs_backup;
        }
        else
        {
            labeled_pfxs_backup = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup>();
            labeled_pfxs_backup->parent = this;
            children["labeled-pfxs-backup"] = labeled_pfxs_backup;
        }
        return children.at("labeled-pfxs-backup");
    }

    if(child_yang_name == "labeled-pfxs-primary")
    {
        if(labeled_pfxs_primary != nullptr)
        {
            children["labeled-pfxs-primary"] = labeled_pfxs_primary;
        }
        else
        {
            labeled_pfxs_primary = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary>();
            labeled_pfxs_primary->parent = this;
            children["labeled-pfxs-primary"] = labeled_pfxs_primary;
        }
        return children.at("labeled-pfxs-primary");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::get_children()
{
    if(children.find("labeled-pfxs-aggr") == children.end())
    {
        if(labeled_pfxs_aggr != nullptr)
        {
            children["labeled-pfxs-aggr"] = labeled_pfxs_aggr;
        }
    }

    if(children.find("labeled-pfxs-backup") == children.end())
    {
        if(labeled_pfxs_backup != nullptr)
        {
            children["labeled-pfxs-backup"] = labeled_pfxs_backup;
        }
    }

    if(children.find("labeled-pfxs-primary") == children.end())
    {
        if(labeled_pfxs_primary != nullptr)
        {
            children["labeled-pfxs-primary"] = labeled_pfxs_primary;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ecmp-pfxs")
    {
        ecmp_pfxs = value;
    }
    if(value_path == "protected-pfxs")
    {
        protected_pfxs = value;
    }
    if(value_path == "total-pfxs")
    {
        total_pfxs = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr::LabeledPfxsAggr()
    :
    labeled_pfxs{YType::uint16, "labeled-pfxs"},
    labeled_pfxs_partial{YType::uint16, "labeled-pfxs-partial"},
    unlabeled_pfxs{YType::uint16, "unlabeled-pfxs"}
{
    yang_name = "labeled-pfxs-aggr"; yang_parent_name = "pfxs";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr::~LabeledPfxsAggr()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr::has_data() const
{
    return labeled_pfxs.is_set
	|| labeled_pfxs_partial.is_set
	|| unlabeled_pfxs.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr::has_operation() const
{
    return is_set(operation)
	|| is_set(labeled_pfxs.operation)
	|| is_set(labeled_pfxs_partial.operation)
	|| is_set(unlabeled_pfxs.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labeled-pfxs-aggr";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabeledPfxsAggr' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (labeled_pfxs.is_set || is_set(labeled_pfxs.operation)) leaf_name_data.push_back(labeled_pfxs.get_name_leafdata());
    if (labeled_pfxs_partial.is_set || is_set(labeled_pfxs_partial.operation)) leaf_name_data.push_back(labeled_pfxs_partial.get_name_leafdata());
    if (unlabeled_pfxs.is_set || is_set(unlabeled_pfxs.operation)) leaf_name_data.push_back(unlabeled_pfxs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsAggr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "labeled-pfxs")
    {
        labeled_pfxs = value;
    }
    if(value_path == "labeled-pfxs-partial")
    {
        labeled_pfxs_partial = value;
    }
    if(value_path == "unlabeled-pfxs")
    {
        unlabeled_pfxs = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary::LabeledPfxsPrimary()
    :
    labeled_pfxs{YType::uint16, "labeled-pfxs"},
    labeled_pfxs_partial{YType::uint16, "labeled-pfxs-partial"},
    unlabeled_pfxs{YType::uint16, "unlabeled-pfxs"}
{
    yang_name = "labeled-pfxs-primary"; yang_parent_name = "pfxs";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary::~LabeledPfxsPrimary()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary::has_data() const
{
    return labeled_pfxs.is_set
	|| labeled_pfxs_partial.is_set
	|| unlabeled_pfxs.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary::has_operation() const
{
    return is_set(operation)
	|| is_set(labeled_pfxs.operation)
	|| is_set(labeled_pfxs_partial.operation)
	|| is_set(unlabeled_pfxs.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labeled-pfxs-primary";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabeledPfxsPrimary' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (labeled_pfxs.is_set || is_set(labeled_pfxs.operation)) leaf_name_data.push_back(labeled_pfxs.get_name_leafdata());
    if (labeled_pfxs_partial.is_set || is_set(labeled_pfxs_partial.operation)) leaf_name_data.push_back(labeled_pfxs_partial.get_name_leafdata());
    if (unlabeled_pfxs.is_set || is_set(unlabeled_pfxs.operation)) leaf_name_data.push_back(unlabeled_pfxs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsPrimary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "labeled-pfxs")
    {
        labeled_pfxs = value;
    }
    if(value_path == "labeled-pfxs-partial")
    {
        labeled_pfxs_partial = value;
    }
    if(value_path == "unlabeled-pfxs")
    {
        unlabeled_pfxs = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup::LabeledPfxsBackup()
    :
    labeled_pfxs{YType::uint16, "labeled-pfxs"},
    labeled_pfxs_partial{YType::uint16, "labeled-pfxs-partial"},
    unlabeled_pfxs{YType::uint16, "unlabeled-pfxs"}
{
    yang_name = "labeled-pfxs-backup"; yang_parent_name = "pfxs";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup::~LabeledPfxsBackup()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup::has_data() const
{
    return labeled_pfxs.is_set
	|| labeled_pfxs_partial.is_set
	|| unlabeled_pfxs.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup::has_operation() const
{
    return is_set(operation)
	|| is_set(labeled_pfxs.operation)
	|| is_set(labeled_pfxs_partial.operation)
	|| is_set(unlabeled_pfxs.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "labeled-pfxs-backup";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabeledPfxsBackup' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (labeled_pfxs.is_set || is_set(labeled_pfxs.operation)) leaf_name_data.push_back(labeled_pfxs.get_name_leafdata());
    if (labeled_pfxs_partial.is_set || is_set(labeled_pfxs_partial.operation)) leaf_name_data.push_back(labeled_pfxs_partial.get_name_leafdata());
    if (unlabeled_pfxs.is_set || is_set(unlabeled_pfxs.operation)) leaf_name_data.push_back(unlabeled_pfxs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Pfxs::LabeledPfxsBackup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "labeled-pfxs")
    {
        labeled_pfxs = value;
    }
    if(value_path == "labeled-pfxs-partial")
    {
        labeled_pfxs_partial = value;
    }
    if(value_path == "unlabeled-pfxs")
    {
        unlabeled_pfxs = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Nhs::Nhs()
    :
    backup_paths{YType::uint32, "backup-paths"},
    labeled_backup_paths{YType::uint32, "labeled-backup-paths"},
    labeled_paths{YType::uint32, "labeled-paths"},
    protected_paths{YType::uint32, "protected-paths"},
    remote_backup_paths{YType::uint32, "remote-backup-paths"},
    total_paths{YType::uint32, "total-paths"}
{
    yang_name = "nhs"; yang_parent_name = "rws";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Nhs::~Nhs()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Nhs::has_data() const
{
    return backup_paths.is_set
	|| labeled_backup_paths.is_set
	|| labeled_paths.is_set
	|| protected_paths.is_set
	|| remote_backup_paths.is_set
	|| total_paths.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Nhs::has_operation() const
{
    return is_set(operation)
	|| is_set(backup_paths.operation)
	|| is_set(labeled_backup_paths.operation)
	|| is_set(labeled_paths.operation)
	|| is_set(protected_paths.operation)
	|| is_set(remote_backup_paths.operation)
	|| is_set(total_paths.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Nhs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhs";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Nhs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nhs' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup_paths.is_set || is_set(backup_paths.operation)) leaf_name_data.push_back(backup_paths.get_name_leafdata());
    if (labeled_backup_paths.is_set || is_set(labeled_backup_paths.operation)) leaf_name_data.push_back(labeled_backup_paths.get_name_leafdata());
    if (labeled_paths.is_set || is_set(labeled_paths.operation)) leaf_name_data.push_back(labeled_paths.get_name_leafdata());
    if (protected_paths.is_set || is_set(protected_paths.operation)) leaf_name_data.push_back(protected_paths.get_name_leafdata());
    if (remote_backup_paths.is_set || is_set(remote_backup_paths.operation)) leaf_name_data.push_back(remote_backup_paths.get_name_leafdata());
    if (total_paths.is_set || is_set(total_paths.operation)) leaf_name_data.push_back(total_paths.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Nhs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Nhs::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Afs::Af::ForwardingSummary::Rws::Nhs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backup-paths")
    {
        backup_paths = value;
    }
    if(value_path == "labeled-backup-paths")
    {
        labeled_backup_paths = value;
    }
    if(value_path == "labeled-paths")
    {
        labeled_paths = value;
    }
    if(value_path == "protected-paths")
    {
        protected_paths = value;
    }
    if(value_path == "remote-backup-paths")
    {
        remote_backup_paths = value;
    }
    if(value_path == "total-paths")
    {
        total_paths = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBriefs()
{
    yang_name = "neighbor-briefs"; yang_parent_name = "vrf";
}

MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::~NeighborBriefs()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::has_data() const
{
    for (std::size_t index=0; index<neighbor_brief.size(); index++)
    {
        if(neighbor_brief[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::has_operation() const
{
    for (std::size_t index=0; index<neighbor_brief.size(); index++)
    {
        if(neighbor_brief[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-briefs";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborBriefs' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-brief")
    {
        for(auto const & c : neighbor_brief)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief>();
        c->parent = this;
        neighbor_brief.push_back(std::move(c));
        children[segment_path] = neighbor_brief.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::get_children()
{
    for (auto const & c : neighbor_brief)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::NeighborBrief()
    :
    is_graceful_restartable{YType::boolean, "is-graceful-restartable"},
    label_space_id{YType::uint32, "label-space-id"},
    lsr_id{YType::str, "lsr-id"},
    nsr_state{YType::enumeration, "nsr-state"},
    up_time_seconds{YType::uint32, "up-time-seconds"}
    	,
    vrf(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::Vrf_>())
{
    vrf->parent = this;
    children["vrf"] = vrf;

    yang_name = "neighbor-brief"; yang_parent_name = "neighbor-briefs";
}

MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::~NeighborBrief()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::has_data() const
{
    for (std::size_t index=0; index<nbr_br_af_info.size(); index++)
    {
        if(nbr_br_af_info[index]->has_data())
            return true;
    }
    return is_graceful_restartable.is_set
	|| label_space_id.is_set
	|| lsr_id.is_set
	|| nsr_state.is_set
	|| up_time_seconds.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::has_operation() const
{
    for (std::size_t index=0; index<nbr_br_af_info.size(); index++)
    {
        if(nbr_br_af_info[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(is_graceful_restartable.operation)
	|| is_set(label_space_id.operation)
	|| is_set(lsr_id.operation)
	|| is_set(nsr_state.operation)
	|| is_set(up_time_seconds.operation)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-brief";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborBrief' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_graceful_restartable.is_set || is_set(is_graceful_restartable.operation)) leaf_name_data.push_back(is_graceful_restartable.get_name_leafdata());
    if (label_space_id.is_set || is_set(label_space_id.operation)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.operation)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (nsr_state.is_set || is_set(nsr_state.operation)) leaf_name_data.push_back(nsr_state.get_name_leafdata());
    if (up_time_seconds.is_set || is_set(up_time_seconds.operation)) leaf_name_data.push_back(up_time_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nbr-br-af-info")
    {
        for(auto const & c : nbr_br_af_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo>();
        c->parent = this;
        nbr_br_af_info.push_back(std::move(c));
        children[segment_path] = nbr_br_af_info.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
        else
        {
            vrf = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::Vrf_>();
            vrf->parent = this;
            children["vrf"] = vrf;
        }
        return children.at("vrf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::get_children()
{
    for (auto const & c : nbr_br_af_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("vrf") == children.end())
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-graceful-restartable")
    {
        is_graceful_restartable = value;
    }
    if(value_path == "label-space-id")
    {
        label_space_id = value;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
    }
    if(value_path == "nsr-state")
    {
        nsr_state = value;
    }
    if(value_path == "up-time-seconds")
    {
        up_time_seconds = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::Vrf_::Vrf_()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "neighbor-brief";
}

MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::Vrf_::~Vrf_()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::Vrf_::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::Vrf_::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::Vrf_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf_' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::Vrf_::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::Vrf_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo::NbrBrAfInfo()
    :
    address_family{YType::enumeration, "address-family"},
    num_of_nbr_addresses{YType::uint32, "num-of-nbr-addresses"},
    num_of_nbr_discovery{YType::uint32, "num-of-nbr-discovery"},
    num_of_nbr_lbl{YType::uint32, "num-of-nbr-lbl"}
{
    yang_name = "nbr-br-af-info"; yang_parent_name = "neighbor-brief";
}

MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo::~NbrBrAfInfo()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo::has_data() const
{
    return address_family.is_set
	|| num_of_nbr_addresses.is_set
	|| num_of_nbr_discovery.is_set
	|| num_of_nbr_lbl.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(address_family.operation)
	|| is_set(num_of_nbr_addresses.operation)
	|| is_set(num_of_nbr_discovery.operation)
	|| is_set(num_of_nbr_lbl.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nbr-br-af-info";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NbrBrAfInfo' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (num_of_nbr_addresses.is_set || is_set(num_of_nbr_addresses.operation)) leaf_name_data.push_back(num_of_nbr_addresses.get_name_leafdata());
    if (num_of_nbr_discovery.is_set || is_set(num_of_nbr_discovery.operation)) leaf_name_data.push_back(num_of_nbr_discovery.get_name_leafdata());
    if (num_of_nbr_lbl.is_set || is_set(num_of_nbr_lbl.operation)) leaf_name_data.push_back(num_of_nbr_lbl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::NeighborBriefs::NeighborBrief::NbrBrAfInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family")
    {
        address_family = value;
    }
    if(value_path == "num-of-nbr-addresses")
    {
        num_of_nbr_addresses = value;
    }
    if(value_path == "num-of-nbr-discovery")
    {
        num_of_nbr_discovery = value;
    }
    if(value_path == "num-of-nbr-lbl")
    {
        num_of_nbr_lbl = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::BackoffParameters::BackoffParameters()
    :
    initial_seconds{YType::uint32, "initial-seconds"},
    maximum_seconds{YType::uint32, "maximum-seconds"}
{
    yang_name = "backoff-parameters"; yang_parent_name = "vrf";
}

MplsLdp::Global::Standby::Vrfs::Vrf::BackoffParameters::~BackoffParameters()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::BackoffParameters::has_data() const
{
    return initial_seconds.is_set
	|| maximum_seconds.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::BackoffParameters::has_operation() const
{
    return is_set(operation)
	|| is_set(initial_seconds.operation)
	|| is_set(maximum_seconds.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::BackoffParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backoff-parameters";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::BackoffParameters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackoffParameters' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initial_seconds.is_set || is_set(initial_seconds.operation)) leaf_name_data.push_back(initial_seconds.get_name_leafdata());
    if (maximum_seconds.is_set || is_set(maximum_seconds.operation)) leaf_name_data.push_back(maximum_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::BackoffParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::BackoffParameters::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::BackoffParameters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "initial-seconds")
    {
        initial_seconds = value;
    }
    if(value_path == "maximum-seconds")
    {
        maximum_seconds = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Backoffs::Backoffs()
{
    yang_name = "backoffs"; yang_parent_name = "vrf";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Backoffs::~Backoffs()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Backoffs::has_data() const
{
    for (std::size_t index=0; index<backoff.size(); index++)
    {
        if(backoff[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Backoffs::has_operation() const
{
    for (std::size_t index=0; index<backoff.size(); index++)
    {
        if(backoff[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Backoffs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backoffs";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Backoffs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Backoffs' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Backoffs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backoff")
    {
        for(auto const & c : backoff)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Backoffs::Backoff>();
        c->parent = this;
        backoff.push_back(std::move(c));
        children[segment_path] = backoff.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Backoffs::get_children()
{
    for (auto const & c : backoff)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Backoffs::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::Vrfs::Vrf::Backoffs::Backoff::Backoff()
    :
    backoff_seconds{YType::uint32, "backoff-seconds"},
    label_space_id{YType::uint32, "label-space-id"},
    lsr_id{YType::str, "lsr-id"},
    waiting_seconds{YType::uint32, "waiting-seconds"}
{
    yang_name = "backoff"; yang_parent_name = "backoffs";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Backoffs::Backoff::~Backoff()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Backoffs::Backoff::has_data() const
{
    return backoff_seconds.is_set
	|| label_space_id.is_set
	|| lsr_id.is_set
	|| waiting_seconds.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Backoffs::Backoff::has_operation() const
{
    return is_set(operation)
	|| is_set(backoff_seconds.operation)
	|| is_set(label_space_id.operation)
	|| is_set(lsr_id.operation)
	|| is_set(waiting_seconds.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Backoffs::Backoff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backoff";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Backoffs::Backoff::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Backoff' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backoff_seconds.is_set || is_set(backoff_seconds.operation)) leaf_name_data.push_back(backoff_seconds.get_name_leafdata());
    if (label_space_id.is_set || is_set(label_space_id.operation)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.operation)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (waiting_seconds.is_set || is_set(waiting_seconds.operation)) leaf_name_data.push_back(waiting_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Backoffs::Backoff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Backoffs::Backoff::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Backoffs::Backoff::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backoff-seconds")
    {
        backoff_seconds = value;
    }
    if(value_path == "label-space-id")
    {
        label_space_id = value;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
    }
    if(value_path == "waiting-seconds")
    {
        waiting_seconds = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::Nsr()
    :
    ha_statistics(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics>())
	,ha_summary(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary>())
	,nsr_pending(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending>())
{
    ha_statistics->parent = this;
    children["ha-statistics"] = ha_statistics;

    ha_summary->parent = this;
    children["ha-summary"] = ha_summary;

    nsr_pending->parent = this;
    children["nsr-pending"] = nsr_pending;

    yang_name = "nsr"; yang_parent_name = "vrf";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::~Nsr()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::has_data() const
{
    return (ha_statistics !=  nullptr && ha_statistics->has_data())
	|| (ha_summary !=  nullptr && ha_summary->has_data())
	|| (nsr_pending !=  nullptr && nsr_pending->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::has_operation() const
{
    return is_set(operation)
	|| (ha_statistics !=  nullptr && ha_statistics->has_operation())
	|| (ha_summary !=  nullptr && ha_summary->has_operation())
	|| (nsr_pending !=  nullptr && nsr_pending->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nsr' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ha-statistics")
    {
        if(ha_statistics != nullptr)
        {
            children["ha-statistics"] = ha_statistics;
        }
        else
        {
            ha_statistics = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics>();
            ha_statistics->parent = this;
            children["ha-statistics"] = ha_statistics;
        }
        return children.at("ha-statistics");
    }

    if(child_yang_name == "ha-summary")
    {
        if(ha_summary != nullptr)
        {
            children["ha-summary"] = ha_summary;
        }
        else
        {
            ha_summary = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary>();
            ha_summary->parent = this;
            children["ha-summary"] = ha_summary;
        }
        return children.at("ha-summary");
    }

    if(child_yang_name == "nsr-pending")
    {
        if(nsr_pending != nullptr)
        {
            children["nsr-pending"] = nsr_pending;
        }
        else
        {
            nsr_pending = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending>();
            nsr_pending->parent = this;
            children["nsr-pending"] = nsr_pending;
        }
        return children.at("nsr-pending");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::get_children()
{
    if(children.find("ha-statistics") == children.end())
    {
        if(ha_statistics != nullptr)
        {
            children["ha-statistics"] = ha_statistics;
        }
    }

    if(children.find("ha-summary") == children.end())
    {
        if(ha_summary != nullptr)
        {
            children["ha-summary"] = ha_summary;
        }
    }

    if(children.find("nsr-pending") == children.end())
    {
        if(nsr_pending != nullptr)
        {
            children["nsr-pending"] = nsr_pending;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::NsrPending()
    :
    ha_neighbors(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors>())
{
    ha_neighbors->parent = this;
    children["ha-neighbors"] = ha_neighbors;

    yang_name = "nsr-pending"; yang_parent_name = "nsr";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::~NsrPending()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::has_data() const
{
    return (ha_neighbors !=  nullptr && ha_neighbors->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::has_operation() const
{
    return is_set(operation)
	|| (ha_neighbors !=  nullptr && ha_neighbors->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-pending";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NsrPending' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ha-neighbors")
    {
        if(ha_neighbors != nullptr)
        {
            children["ha-neighbors"] = ha_neighbors;
        }
        else
        {
            ha_neighbors = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors>();
            ha_neighbors->parent = this;
            children["ha-neighbors"] = ha_neighbors;
        }
        return children.at("ha-neighbors");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::get_children()
{
    if(children.find("ha-neighbors") == children.end())
    {
        if(ha_neighbors != nullptr)
        {
            children["ha-neighbors"] = ha_neighbors;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbors()
{
    yang_name = "ha-neighbors"; yang_parent_name = "nsr-pending";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::~HaNeighbors()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::has_data() const
{
    for (std::size_t index=0; index<ha_neighbor.size(); index++)
    {
        if(ha_neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::has_operation() const
{
    for (std::size_t index=0; index<ha_neighbor.size(); index++)
    {
        if(ha_neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-neighbors";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HaNeighbors' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ha-neighbor")
    {
        for(auto const & c : ha_neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor>();
        c->parent = this;
        ha_neighbor.push_back(std::move(c));
        children[segment_path] = ha_neighbor.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::get_children()
{
    for (auto const & c : ha_neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::HaNeighbor()
    :
    label_space_id{YType::uint32, "label-space-id"},
    lbl_spc_id{YType::uint16, "lbl-spc-id"},
    lsr_id{YType::str, "lsr-id"},
    lsr_id_xr{YType::uint32, "lsr-id-xr"},
    nsr_sync_state{YType::int32, "nsr-sync-state"},
    num_msg{YType::uint32, "num-msg"}
    	,
    init_sync_info(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo>())
	,steady_state_sync_info(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo>())
{
    init_sync_info->parent = this;
    children["init-sync-info"] = init_sync_info;

    steady_state_sync_info->parent = this;
    children["steady-state-sync-info"] = steady_state_sync_info;

    yang_name = "ha-neighbor"; yang_parent_name = "ha-neighbors";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::~HaNeighbor()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::has_data() const
{
    return label_space_id.is_set
	|| lbl_spc_id.is_set
	|| lsr_id.is_set
	|| lsr_id_xr.is_set
	|| nsr_sync_state.is_set
	|| num_msg.is_set
	|| (init_sync_info !=  nullptr && init_sync_info->has_data())
	|| (steady_state_sync_info !=  nullptr && steady_state_sync_info->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(label_space_id.operation)
	|| is_set(lbl_spc_id.operation)
	|| is_set(lsr_id.operation)
	|| is_set(lsr_id_xr.operation)
	|| is_set(nsr_sync_state.operation)
	|| is_set(num_msg.operation)
	|| (init_sync_info !=  nullptr && init_sync_info->has_operation())
	|| (steady_state_sync_info !=  nullptr && steady_state_sync_info->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-neighbor";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HaNeighbor' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_space_id.is_set || is_set(label_space_id.operation)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (lbl_spc_id.is_set || is_set(lbl_spc_id.operation)) leaf_name_data.push_back(lbl_spc_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.operation)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (lsr_id_xr.is_set || is_set(lsr_id_xr.operation)) leaf_name_data.push_back(lsr_id_xr.get_name_leafdata());
    if (nsr_sync_state.is_set || is_set(nsr_sync_state.operation)) leaf_name_data.push_back(nsr_sync_state.get_name_leafdata());
    if (num_msg.is_set || is_set(num_msg.operation)) leaf_name_data.push_back(num_msg.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "init-sync-info")
    {
        if(init_sync_info != nullptr)
        {
            children["init-sync-info"] = init_sync_info;
        }
        else
        {
            init_sync_info = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo>();
            init_sync_info->parent = this;
            children["init-sync-info"] = init_sync_info;
        }
        return children.at("init-sync-info");
    }

    if(child_yang_name == "steady-state-sync-info")
    {
        if(steady_state_sync_info != nullptr)
        {
            children["steady-state-sync-info"] = steady_state_sync_info;
        }
        else
        {
            steady_state_sync_info = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo>();
            steady_state_sync_info->parent = this;
            children["steady-state-sync-info"] = steady_state_sync_info;
        }
        return children.at("steady-state-sync-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::get_children()
{
    if(children.find("init-sync-info") == children.end())
    {
        if(init_sync_info != nullptr)
        {
            children["init-sync-info"] = init_sync_info;
        }
    }

    if(children.find("steady-state-sync-info") == children.end())
    {
        if(steady_state_sync_info != nullptr)
        {
            children["steady-state-sync-info"] = steady_state_sync_info;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-space-id")
    {
        label_space_id = value;
    }
    if(value_path == "lbl-spc-id")
    {
        lbl_spc_id = value;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
    }
    if(value_path == "lsr-id-xr")
    {
        lsr_id_xr = value;
    }
    if(value_path == "nsr-sync-state")
    {
        nsr_sync_state = value;
    }
    if(value_path == "num-msg")
    {
        num_msg = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo::InitSyncInfo()
    :
    init_sync_end{YType::uint32, "init-sync-end"},
    init_sync_start{YType::uint32, "init-sync-start"},
    num_addr{YType::uint32, "num-addr"},
    num_app_bytes{YType::uint32, "num-app-bytes"},
    num_cap_rcvd{YType::uint32, "num-cap-rcvd"},
    num_cap_sent{YType::uint32, "num-cap-sent"},
    num_duplicate_addr{YType::uint32, "num-duplicate-addr"},
    num_lbl{YType::uint32, "num-lbl"},
    num_rx_bytes{YType::uint32, "num-rx-bytes"}
{
    yang_name = "init-sync-info"; yang_parent_name = "ha-neighbor";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo::~InitSyncInfo()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo::has_data() const
{
    return init_sync_end.is_set
	|| init_sync_start.is_set
	|| num_addr.is_set
	|| num_app_bytes.is_set
	|| num_cap_rcvd.is_set
	|| num_cap_sent.is_set
	|| num_duplicate_addr.is_set
	|| num_lbl.is_set
	|| num_rx_bytes.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(init_sync_end.operation)
	|| is_set(init_sync_start.operation)
	|| is_set(num_addr.operation)
	|| is_set(num_app_bytes.operation)
	|| is_set(num_cap_rcvd.operation)
	|| is_set(num_cap_sent.operation)
	|| is_set(num_duplicate_addr.operation)
	|| is_set(num_lbl.operation)
	|| is_set(num_rx_bytes.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "init-sync-info";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InitSyncInfo' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (init_sync_end.is_set || is_set(init_sync_end.operation)) leaf_name_data.push_back(init_sync_end.get_name_leafdata());
    if (init_sync_start.is_set || is_set(init_sync_start.operation)) leaf_name_data.push_back(init_sync_start.get_name_leafdata());
    if (num_addr.is_set || is_set(num_addr.operation)) leaf_name_data.push_back(num_addr.get_name_leafdata());
    if (num_app_bytes.is_set || is_set(num_app_bytes.operation)) leaf_name_data.push_back(num_app_bytes.get_name_leafdata());
    if (num_cap_rcvd.is_set || is_set(num_cap_rcvd.operation)) leaf_name_data.push_back(num_cap_rcvd.get_name_leafdata());
    if (num_cap_sent.is_set || is_set(num_cap_sent.operation)) leaf_name_data.push_back(num_cap_sent.get_name_leafdata());
    if (num_duplicate_addr.is_set || is_set(num_duplicate_addr.operation)) leaf_name_data.push_back(num_duplicate_addr.get_name_leafdata());
    if (num_lbl.is_set || is_set(num_lbl.operation)) leaf_name_data.push_back(num_lbl.get_name_leafdata());
    if (num_rx_bytes.is_set || is_set(num_rx_bytes.operation)) leaf_name_data.push_back(num_rx_bytes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::InitSyncInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "init-sync-end")
    {
        init_sync_end = value;
    }
    if(value_path == "init-sync-start")
    {
        init_sync_start = value;
    }
    if(value_path == "num-addr")
    {
        num_addr = value;
    }
    if(value_path == "num-app-bytes")
    {
        num_app_bytes = value;
    }
    if(value_path == "num-cap-rcvd")
    {
        num_cap_rcvd = value;
    }
    if(value_path == "num-cap-sent")
    {
        num_cap_sent = value;
    }
    if(value_path == "num-duplicate-addr")
    {
        num_duplicate_addr = value;
    }
    if(value_path == "num-lbl")
    {
        num_lbl = value;
    }
    if(value_path == "num-rx-bytes")
    {
        num_rx_bytes = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::SteadyStateSyncInfo()
    :
    num_cap_rcvd{YType::uint32, "num-cap-rcvd"},
    num_cap_sent{YType::uint32, "num-cap-sent"},
    num_stdby_adj_join{YType::uint32, "num-stdby-adj-join"},
    num_stdby_adj_leave{YType::uint32, "num-stdby-adj-leave"},
    rem_lbl_rq{YType::uint32, "rem-lbl-rq"},
    rem_lbl_wd{YType::uint32, "rem-lbl-wd"}
{
    yang_name = "steady-state-sync-info"; yang_parent_name = "ha-neighbor";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::~SteadyStateSyncInfo()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::has_data() const
{
    return num_cap_rcvd.is_set
	|| num_cap_sent.is_set
	|| num_stdby_adj_join.is_set
	|| num_stdby_adj_leave.is_set
	|| rem_lbl_rq.is_set
	|| rem_lbl_wd.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(num_cap_rcvd.operation)
	|| is_set(num_cap_sent.operation)
	|| is_set(num_stdby_adj_join.operation)
	|| is_set(num_stdby_adj_leave.operation)
	|| is_set(rem_lbl_rq.operation)
	|| is_set(rem_lbl_wd.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "steady-state-sync-info";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SteadyStateSyncInfo' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_cap_rcvd.is_set || is_set(num_cap_rcvd.operation)) leaf_name_data.push_back(num_cap_rcvd.get_name_leafdata());
    if (num_cap_sent.is_set || is_set(num_cap_sent.operation)) leaf_name_data.push_back(num_cap_sent.get_name_leafdata());
    if (num_stdby_adj_join.is_set || is_set(num_stdby_adj_join.operation)) leaf_name_data.push_back(num_stdby_adj_join.get_name_leafdata());
    if (num_stdby_adj_leave.is_set || is_set(num_stdby_adj_leave.operation)) leaf_name_data.push_back(num_stdby_adj_leave.get_name_leafdata());
    if (rem_lbl_rq.is_set || is_set(rem_lbl_rq.operation)) leaf_name_data.push_back(rem_lbl_rq.get_name_leafdata());
    if (rem_lbl_wd.is_set || is_set(rem_lbl_wd.operation)) leaf_name_data.push_back(rem_lbl_wd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::NsrPending::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-cap-rcvd")
    {
        num_cap_rcvd = value;
    }
    if(value_path == "num-cap-sent")
    {
        num_cap_sent = value;
    }
    if(value_path == "num-stdby-adj-join")
    {
        num_stdby_adj_join = value;
    }
    if(value_path == "num-stdby-adj-leave")
    {
        num_stdby_adj_leave = value;
    }
    if(value_path == "rem-lbl-rq")
    {
        rem_lbl_rq = value;
    }
    if(value_path == "rem-lbl-wd")
    {
        rem_lbl_wd = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::HaSummary()
    :
    sessions(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Sessions>())
	,vrf(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Vrf_>())
{
    sessions->parent = this;
    children["sessions"] = sessions;

    vrf->parent = this;
    children["vrf"] = vrf;

    yang_name = "ha-summary"; yang_parent_name = "nsr";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::~HaSummary()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::has_data() const
{
    return (sessions !=  nullptr && sessions->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::has_operation() const
{
    return is_set(operation)
	|| (sessions !=  nullptr && sessions->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-summary";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HaSummary' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sessions")
    {
        if(sessions != nullptr)
        {
            children["sessions"] = sessions;
        }
        else
        {
            sessions = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Sessions>();
            sessions->parent = this;
            children["sessions"] = sessions;
        }
        return children.at("sessions");
    }

    if(child_yang_name == "vrf")
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
        else
        {
            vrf = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Vrf_>();
            vrf->parent = this;
            children["vrf"] = vrf;
        }
        return children.at("vrf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::get_children()
{
    if(children.find("sessions") == children.end())
    {
        if(sessions != nullptr)
        {
            children["sessions"] = sessions;
        }
    }

    if(children.find("vrf") == children.end())
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Vrf_::Vrf_()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "ha-summary";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Vrf_::~Vrf_()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Vrf_::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Vrf_::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Vrf_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf_' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Vrf_::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Vrf_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Sessions::Sessions()
    :
    nsr_eligible{YType::uint32, "nsr-eligible"},
    nsr_state_app_wait{YType::uint32, "nsr-state-app-wait"},
    nsr_state_none{YType::uint32, "nsr-state-none"},
    nsr_state_operational{YType::uint32, "nsr-state-operational"},
    nsr_state_prepare{YType::uint32, "nsr-state-prepare"},
    nsr_state_ready{YType::uint32, "nsr-state-ready"},
    nsr_state_tcp_phase1{YType::uint32, "nsr-state-tcp-phase1"},
    nsr_state_tcp_phase2{YType::uint32, "nsr-state-tcp-phase2"},
    nsr_state_wait{YType::uint32, "nsr-state-wait"},
    total{YType::uint32, "total"}
{
    yang_name = "sessions"; yang_parent_name = "ha-summary";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Sessions::~Sessions()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Sessions::has_data() const
{
    return nsr_eligible.is_set
	|| nsr_state_app_wait.is_set
	|| nsr_state_none.is_set
	|| nsr_state_operational.is_set
	|| nsr_state_prepare.is_set
	|| nsr_state_ready.is_set
	|| nsr_state_tcp_phase1.is_set
	|| nsr_state_tcp_phase2.is_set
	|| nsr_state_wait.is_set
	|| total.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Sessions::has_operation() const
{
    return is_set(operation)
	|| is_set(nsr_eligible.operation)
	|| is_set(nsr_state_app_wait.operation)
	|| is_set(nsr_state_none.operation)
	|| is_set(nsr_state_operational.operation)
	|| is_set(nsr_state_prepare.operation)
	|| is_set(nsr_state_ready.operation)
	|| is_set(nsr_state_tcp_phase1.operation)
	|| is_set(nsr_state_tcp_phase2.operation)
	|| is_set(nsr_state_wait.operation)
	|| is_set(total.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Sessions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sessions' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_eligible.is_set || is_set(nsr_eligible.operation)) leaf_name_data.push_back(nsr_eligible.get_name_leafdata());
    if (nsr_state_app_wait.is_set || is_set(nsr_state_app_wait.operation)) leaf_name_data.push_back(nsr_state_app_wait.get_name_leafdata());
    if (nsr_state_none.is_set || is_set(nsr_state_none.operation)) leaf_name_data.push_back(nsr_state_none.get_name_leafdata());
    if (nsr_state_operational.is_set || is_set(nsr_state_operational.operation)) leaf_name_data.push_back(nsr_state_operational.get_name_leafdata());
    if (nsr_state_prepare.is_set || is_set(nsr_state_prepare.operation)) leaf_name_data.push_back(nsr_state_prepare.get_name_leafdata());
    if (nsr_state_ready.is_set || is_set(nsr_state_ready.operation)) leaf_name_data.push_back(nsr_state_ready.get_name_leafdata());
    if (nsr_state_tcp_phase1.is_set || is_set(nsr_state_tcp_phase1.operation)) leaf_name_data.push_back(nsr_state_tcp_phase1.get_name_leafdata());
    if (nsr_state_tcp_phase2.is_set || is_set(nsr_state_tcp_phase2.operation)) leaf_name_data.push_back(nsr_state_tcp_phase2.get_name_leafdata());
    if (nsr_state_wait.is_set || is_set(nsr_state_wait.operation)) leaf_name_data.push_back(nsr_state_wait.get_name_leafdata());
    if (total.is_set || is_set(total.operation)) leaf_name_data.push_back(total.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Sessions::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaSummary::Sessions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nsr-eligible")
    {
        nsr_eligible = value;
    }
    if(value_path == "nsr-state-app-wait")
    {
        nsr_state_app_wait = value;
    }
    if(value_path == "nsr-state-none")
    {
        nsr_state_none = value;
    }
    if(value_path == "nsr-state-operational")
    {
        nsr_state_operational = value;
    }
    if(value_path == "nsr-state-prepare")
    {
        nsr_state_prepare = value;
    }
    if(value_path == "nsr-state-ready")
    {
        nsr_state_ready = value;
    }
    if(value_path == "nsr-state-tcp-phase1")
    {
        nsr_state_tcp_phase1 = value;
    }
    if(value_path == "nsr-state-tcp-phase2")
    {
        nsr_state_tcp_phase2 = value;
    }
    if(value_path == "nsr-state-wait")
    {
        nsr_state_wait = value;
    }
    if(value_path == "total")
    {
        total = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaStatistics()
    :
    ha_global(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal>())
	,ha_neighbors(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors>())
{
    ha_global->parent = this;
    children["ha-global"] = ha_global;

    ha_neighbors->parent = this;
    children["ha-neighbors"] = ha_neighbors;

    yang_name = "ha-statistics"; yang_parent_name = "nsr";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::~HaStatistics()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::has_data() const
{
    return (ha_global !=  nullptr && ha_global->has_data())
	|| (ha_neighbors !=  nullptr && ha_neighbors->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::has_operation() const
{
    return is_set(operation)
	|| (ha_global !=  nullptr && ha_global->has_operation())
	|| (ha_neighbors !=  nullptr && ha_neighbors->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-statistics";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HaStatistics' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ha-global")
    {
        if(ha_global != nullptr)
        {
            children["ha-global"] = ha_global;
        }
        else
        {
            ha_global = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal>();
            ha_global->parent = this;
            children["ha-global"] = ha_global;
        }
        return children.at("ha-global");
    }

    if(child_yang_name == "ha-neighbors")
    {
        if(ha_neighbors != nullptr)
        {
            children["ha-neighbors"] = ha_neighbors;
        }
        else
        {
            ha_neighbors = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors>();
            ha_neighbors->parent = this;
            children["ha-neighbors"] = ha_neighbors;
        }
        return children.at("ha-neighbors");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::get_children()
{
    if(children.find("ha-global") == children.end())
    {
        if(ha_global != nullptr)
        {
            children["ha-global"] = ha_global;
        }
    }

    if(children.find("ha-neighbors") == children.end())
    {
        if(ha_neighbors != nullptr)
        {
            children["ha-neighbors"] = ha_neighbors;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::HaGlobal()
    :
    init_sync(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync>())
{
    init_sync->parent = this;
    children["init-sync"] = init_sync;

    yang_name = "ha-global"; yang_parent_name = "ha-statistics";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::~HaGlobal()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::has_data() const
{
    return (init_sync !=  nullptr && init_sync->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::has_operation() const
{
    return is_set(operation)
	|| (init_sync !=  nullptr && init_sync->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-global";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HaGlobal' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "init-sync")
    {
        if(init_sync != nullptr)
        {
            children["init-sync"] = init_sync;
        }
        else
        {
            init_sync = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync>();
            init_sync->parent = this;
            children["init-sync"] = init_sync;
        }
        return children.at("init-sync");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::get_children()
{
    if(children.find("init-sync") == children.end())
    {
        if(init_sync != nullptr)
        {
            children["init-sync"] = init_sync;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync::InitSync()
    :
    init_sync_end{YType::uint32, "init-sync-end"},
    init_sync_start{YType::uint32, "init-sync-start"},
    ipc_default_mtu{YType::uint32, "ipc-default-mtu"},
    ipc_exceeded_mtu_msg_cnt{YType::uint32, "ipc-exceeded-mtu-msg-cnt"},
    ipc_max_rx_batch_bytes{YType::uint32, "ipc-max-rx-batch-bytes"},
    ipc_max_tx_batch_bytes{YType::uint32, "ipc-max-tx-batch-bytes"},
    ipc_msg_rx_bytes{YType::uint32, "ipc-msg-rx-bytes"},
    ipc_msg_rx_cnt{YType::uint32, "ipc-msg-rx-cnt"},
    ipc_msg_tx_bytes{YType::uint32, "ipc-msg-tx-bytes"},
    ipc_msg_tx_cnt{YType::uint32, "ipc-msg-tx-cnt"},
    ipc_restart_cnt{YType::uint32, "ipc-restart-cnt"},
    ipc_tx_fail_cnt{YType::uint32, "ipc-tx-fail-cnt"},
    nsr_cfged{YType::boolean, "nsr-cfged"},
    nsr_synced{YType::boolean, "nsr-synced"},
    num_cap_rcvd{YType::uint32, "num-cap-rcvd"},
    num_cap_sent{YType::uint32, "num-cap-sent"},
    num_lbl{YType::uint32, "num-lbl"},
    num_lbl_adv{YType::uint32, "num-lbl-adv"},
    num_lcl_addr_wd{YType::uint32, "num-lcl-addr-wd"},
    num_peers{YType::uint32, "num-peers"},
    num_pfx{YType::uint32, "num-pfx"},
    total_ipc_tx_fail_cnt{YType::uint32, "total-ipc-tx-fail-cnt"}
{
    yang_name = "init-sync"; yang_parent_name = "ha-global";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync::~InitSync()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync::has_data() const
{
    return init_sync_end.is_set
	|| init_sync_start.is_set
	|| ipc_default_mtu.is_set
	|| ipc_exceeded_mtu_msg_cnt.is_set
	|| ipc_max_rx_batch_bytes.is_set
	|| ipc_max_tx_batch_bytes.is_set
	|| ipc_msg_rx_bytes.is_set
	|| ipc_msg_rx_cnt.is_set
	|| ipc_msg_tx_bytes.is_set
	|| ipc_msg_tx_cnt.is_set
	|| ipc_restart_cnt.is_set
	|| ipc_tx_fail_cnt.is_set
	|| nsr_cfged.is_set
	|| nsr_synced.is_set
	|| num_cap_rcvd.is_set
	|| num_cap_sent.is_set
	|| num_lbl.is_set
	|| num_lbl_adv.is_set
	|| num_lcl_addr_wd.is_set
	|| num_peers.is_set
	|| num_pfx.is_set
	|| total_ipc_tx_fail_cnt.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync::has_operation() const
{
    return is_set(operation)
	|| is_set(init_sync_end.operation)
	|| is_set(init_sync_start.operation)
	|| is_set(ipc_default_mtu.operation)
	|| is_set(ipc_exceeded_mtu_msg_cnt.operation)
	|| is_set(ipc_max_rx_batch_bytes.operation)
	|| is_set(ipc_max_tx_batch_bytes.operation)
	|| is_set(ipc_msg_rx_bytes.operation)
	|| is_set(ipc_msg_rx_cnt.operation)
	|| is_set(ipc_msg_tx_bytes.operation)
	|| is_set(ipc_msg_tx_cnt.operation)
	|| is_set(ipc_restart_cnt.operation)
	|| is_set(ipc_tx_fail_cnt.operation)
	|| is_set(nsr_cfged.operation)
	|| is_set(nsr_synced.operation)
	|| is_set(num_cap_rcvd.operation)
	|| is_set(num_cap_sent.operation)
	|| is_set(num_lbl.operation)
	|| is_set(num_lbl_adv.operation)
	|| is_set(num_lcl_addr_wd.operation)
	|| is_set(num_peers.operation)
	|| is_set(num_pfx.operation)
	|| is_set(total_ipc_tx_fail_cnt.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "init-sync";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InitSync' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (init_sync_end.is_set || is_set(init_sync_end.operation)) leaf_name_data.push_back(init_sync_end.get_name_leafdata());
    if (init_sync_start.is_set || is_set(init_sync_start.operation)) leaf_name_data.push_back(init_sync_start.get_name_leafdata());
    if (ipc_default_mtu.is_set || is_set(ipc_default_mtu.operation)) leaf_name_data.push_back(ipc_default_mtu.get_name_leafdata());
    if (ipc_exceeded_mtu_msg_cnt.is_set || is_set(ipc_exceeded_mtu_msg_cnt.operation)) leaf_name_data.push_back(ipc_exceeded_mtu_msg_cnt.get_name_leafdata());
    if (ipc_max_rx_batch_bytes.is_set || is_set(ipc_max_rx_batch_bytes.operation)) leaf_name_data.push_back(ipc_max_rx_batch_bytes.get_name_leafdata());
    if (ipc_max_tx_batch_bytes.is_set || is_set(ipc_max_tx_batch_bytes.operation)) leaf_name_data.push_back(ipc_max_tx_batch_bytes.get_name_leafdata());
    if (ipc_msg_rx_bytes.is_set || is_set(ipc_msg_rx_bytes.operation)) leaf_name_data.push_back(ipc_msg_rx_bytes.get_name_leafdata());
    if (ipc_msg_rx_cnt.is_set || is_set(ipc_msg_rx_cnt.operation)) leaf_name_data.push_back(ipc_msg_rx_cnt.get_name_leafdata());
    if (ipc_msg_tx_bytes.is_set || is_set(ipc_msg_tx_bytes.operation)) leaf_name_data.push_back(ipc_msg_tx_bytes.get_name_leafdata());
    if (ipc_msg_tx_cnt.is_set || is_set(ipc_msg_tx_cnt.operation)) leaf_name_data.push_back(ipc_msg_tx_cnt.get_name_leafdata());
    if (ipc_restart_cnt.is_set || is_set(ipc_restart_cnt.operation)) leaf_name_data.push_back(ipc_restart_cnt.get_name_leafdata());
    if (ipc_tx_fail_cnt.is_set || is_set(ipc_tx_fail_cnt.operation)) leaf_name_data.push_back(ipc_tx_fail_cnt.get_name_leafdata());
    if (nsr_cfged.is_set || is_set(nsr_cfged.operation)) leaf_name_data.push_back(nsr_cfged.get_name_leafdata());
    if (nsr_synced.is_set || is_set(nsr_synced.operation)) leaf_name_data.push_back(nsr_synced.get_name_leafdata());
    if (num_cap_rcvd.is_set || is_set(num_cap_rcvd.operation)) leaf_name_data.push_back(num_cap_rcvd.get_name_leafdata());
    if (num_cap_sent.is_set || is_set(num_cap_sent.operation)) leaf_name_data.push_back(num_cap_sent.get_name_leafdata());
    if (num_lbl.is_set || is_set(num_lbl.operation)) leaf_name_data.push_back(num_lbl.get_name_leafdata());
    if (num_lbl_adv.is_set || is_set(num_lbl_adv.operation)) leaf_name_data.push_back(num_lbl_adv.get_name_leafdata());
    if (num_lcl_addr_wd.is_set || is_set(num_lcl_addr_wd.operation)) leaf_name_data.push_back(num_lcl_addr_wd.get_name_leafdata());
    if (num_peers.is_set || is_set(num_peers.operation)) leaf_name_data.push_back(num_peers.get_name_leafdata());
    if (num_pfx.is_set || is_set(num_pfx.operation)) leaf_name_data.push_back(num_pfx.get_name_leafdata());
    if (total_ipc_tx_fail_cnt.is_set || is_set(total_ipc_tx_fail_cnt.operation)) leaf_name_data.push_back(total_ipc_tx_fail_cnt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaGlobal::InitSync::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "init-sync-end")
    {
        init_sync_end = value;
    }
    if(value_path == "init-sync-start")
    {
        init_sync_start = value;
    }
    if(value_path == "ipc-default-mtu")
    {
        ipc_default_mtu = value;
    }
    if(value_path == "ipc-exceeded-mtu-msg-cnt")
    {
        ipc_exceeded_mtu_msg_cnt = value;
    }
    if(value_path == "ipc-max-rx-batch-bytes")
    {
        ipc_max_rx_batch_bytes = value;
    }
    if(value_path == "ipc-max-tx-batch-bytes")
    {
        ipc_max_tx_batch_bytes = value;
    }
    if(value_path == "ipc-msg-rx-bytes")
    {
        ipc_msg_rx_bytes = value;
    }
    if(value_path == "ipc-msg-rx-cnt")
    {
        ipc_msg_rx_cnt = value;
    }
    if(value_path == "ipc-msg-tx-bytes")
    {
        ipc_msg_tx_bytes = value;
    }
    if(value_path == "ipc-msg-tx-cnt")
    {
        ipc_msg_tx_cnt = value;
    }
    if(value_path == "ipc-restart-cnt")
    {
        ipc_restart_cnt = value;
    }
    if(value_path == "ipc-tx-fail-cnt")
    {
        ipc_tx_fail_cnt = value;
    }
    if(value_path == "nsr-cfged")
    {
        nsr_cfged = value;
    }
    if(value_path == "nsr-synced")
    {
        nsr_synced = value;
    }
    if(value_path == "num-cap-rcvd")
    {
        num_cap_rcvd = value;
    }
    if(value_path == "num-cap-sent")
    {
        num_cap_sent = value;
    }
    if(value_path == "num-lbl")
    {
        num_lbl = value;
    }
    if(value_path == "num-lbl-adv")
    {
        num_lbl_adv = value;
    }
    if(value_path == "num-lcl-addr-wd")
    {
        num_lcl_addr_wd = value;
    }
    if(value_path == "num-peers")
    {
        num_peers = value;
    }
    if(value_path == "num-pfx")
    {
        num_pfx = value;
    }
    if(value_path == "total-ipc-tx-fail-cnt")
    {
        total_ipc_tx_fail_cnt = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbors()
{
    yang_name = "ha-neighbors"; yang_parent_name = "ha-statistics";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::~HaNeighbors()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::has_data() const
{
    for (std::size_t index=0; index<ha_neighbor.size(); index++)
    {
        if(ha_neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::has_operation() const
{
    for (std::size_t index=0; index<ha_neighbor.size(); index++)
    {
        if(ha_neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-neighbors";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HaNeighbors' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ha-neighbor")
    {
        for(auto const & c : ha_neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor>();
        c->parent = this;
        ha_neighbor.push_back(std::move(c));
        children[segment_path] = ha_neighbor.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::get_children()
{
    for (auto const & c : ha_neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::HaNeighbor()
    :
    label_space_id{YType::uint32, "label-space-id"},
    lbl_spc_id{YType::uint16, "lbl-spc-id"},
    lsr_id{YType::str, "lsr-id"},
    lsr_id_xr{YType::uint32, "lsr-id-xr"},
    nsr_sync_state{YType::int32, "nsr-sync-state"},
    num_msg{YType::uint32, "num-msg"}
    	,
    init_sync_info(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo>())
	,steady_state_sync_info(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo>())
{
    init_sync_info->parent = this;
    children["init-sync-info"] = init_sync_info;

    steady_state_sync_info->parent = this;
    children["steady-state-sync-info"] = steady_state_sync_info;

    yang_name = "ha-neighbor"; yang_parent_name = "ha-neighbors";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::~HaNeighbor()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::has_data() const
{
    return label_space_id.is_set
	|| lbl_spc_id.is_set
	|| lsr_id.is_set
	|| lsr_id_xr.is_set
	|| nsr_sync_state.is_set
	|| num_msg.is_set
	|| (init_sync_info !=  nullptr && init_sync_info->has_data())
	|| (steady_state_sync_info !=  nullptr && steady_state_sync_info->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(label_space_id.operation)
	|| is_set(lbl_spc_id.operation)
	|| is_set(lsr_id.operation)
	|| is_set(lsr_id_xr.operation)
	|| is_set(nsr_sync_state.operation)
	|| is_set(num_msg.operation)
	|| (init_sync_info !=  nullptr && init_sync_info->has_operation())
	|| (steady_state_sync_info !=  nullptr && steady_state_sync_info->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-neighbor";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HaNeighbor' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_space_id.is_set || is_set(label_space_id.operation)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (lbl_spc_id.is_set || is_set(lbl_spc_id.operation)) leaf_name_data.push_back(lbl_spc_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.operation)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (lsr_id_xr.is_set || is_set(lsr_id_xr.operation)) leaf_name_data.push_back(lsr_id_xr.get_name_leafdata());
    if (nsr_sync_state.is_set || is_set(nsr_sync_state.operation)) leaf_name_data.push_back(nsr_sync_state.get_name_leafdata());
    if (num_msg.is_set || is_set(num_msg.operation)) leaf_name_data.push_back(num_msg.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "init-sync-info")
    {
        if(init_sync_info != nullptr)
        {
            children["init-sync-info"] = init_sync_info;
        }
        else
        {
            init_sync_info = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo>();
            init_sync_info->parent = this;
            children["init-sync-info"] = init_sync_info;
        }
        return children.at("init-sync-info");
    }

    if(child_yang_name == "steady-state-sync-info")
    {
        if(steady_state_sync_info != nullptr)
        {
            children["steady-state-sync-info"] = steady_state_sync_info;
        }
        else
        {
            steady_state_sync_info = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo>();
            steady_state_sync_info->parent = this;
            children["steady-state-sync-info"] = steady_state_sync_info;
        }
        return children.at("steady-state-sync-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::get_children()
{
    if(children.find("init-sync-info") == children.end())
    {
        if(init_sync_info != nullptr)
        {
            children["init-sync-info"] = init_sync_info;
        }
    }

    if(children.find("steady-state-sync-info") == children.end())
    {
        if(steady_state_sync_info != nullptr)
        {
            children["steady-state-sync-info"] = steady_state_sync_info;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-space-id")
    {
        label_space_id = value;
    }
    if(value_path == "lbl-spc-id")
    {
        lbl_spc_id = value;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
    }
    if(value_path == "lsr-id-xr")
    {
        lsr_id_xr = value;
    }
    if(value_path == "nsr-sync-state")
    {
        nsr_sync_state = value;
    }
    if(value_path == "num-msg")
    {
        num_msg = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::InitSyncInfo()
    :
    init_sync_end{YType::uint32, "init-sync-end"},
    init_sync_start{YType::uint32, "init-sync-start"},
    num_addr{YType::uint32, "num-addr"},
    num_app_bytes{YType::uint32, "num-app-bytes"},
    num_cap_rcvd{YType::uint32, "num-cap-rcvd"},
    num_cap_sent{YType::uint32, "num-cap-sent"},
    num_duplicate_addr{YType::uint32, "num-duplicate-addr"},
    num_lbl{YType::uint32, "num-lbl"},
    num_rx_bytes{YType::uint32, "num-rx-bytes"}
{
    yang_name = "init-sync-info"; yang_parent_name = "ha-neighbor";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::~InitSyncInfo()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::has_data() const
{
    return init_sync_end.is_set
	|| init_sync_start.is_set
	|| num_addr.is_set
	|| num_app_bytes.is_set
	|| num_cap_rcvd.is_set
	|| num_cap_sent.is_set
	|| num_duplicate_addr.is_set
	|| num_lbl.is_set
	|| num_rx_bytes.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(init_sync_end.operation)
	|| is_set(init_sync_start.operation)
	|| is_set(num_addr.operation)
	|| is_set(num_app_bytes.operation)
	|| is_set(num_cap_rcvd.operation)
	|| is_set(num_cap_sent.operation)
	|| is_set(num_duplicate_addr.operation)
	|| is_set(num_lbl.operation)
	|| is_set(num_rx_bytes.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "init-sync-info";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InitSyncInfo' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (init_sync_end.is_set || is_set(init_sync_end.operation)) leaf_name_data.push_back(init_sync_end.get_name_leafdata());
    if (init_sync_start.is_set || is_set(init_sync_start.operation)) leaf_name_data.push_back(init_sync_start.get_name_leafdata());
    if (num_addr.is_set || is_set(num_addr.operation)) leaf_name_data.push_back(num_addr.get_name_leafdata());
    if (num_app_bytes.is_set || is_set(num_app_bytes.operation)) leaf_name_data.push_back(num_app_bytes.get_name_leafdata());
    if (num_cap_rcvd.is_set || is_set(num_cap_rcvd.operation)) leaf_name_data.push_back(num_cap_rcvd.get_name_leafdata());
    if (num_cap_sent.is_set || is_set(num_cap_sent.operation)) leaf_name_data.push_back(num_cap_sent.get_name_leafdata());
    if (num_duplicate_addr.is_set || is_set(num_duplicate_addr.operation)) leaf_name_data.push_back(num_duplicate_addr.get_name_leafdata());
    if (num_lbl.is_set || is_set(num_lbl.operation)) leaf_name_data.push_back(num_lbl.get_name_leafdata());
    if (num_rx_bytes.is_set || is_set(num_rx_bytes.operation)) leaf_name_data.push_back(num_rx_bytes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "init-sync-end")
    {
        init_sync_end = value;
    }
    if(value_path == "init-sync-start")
    {
        init_sync_start = value;
    }
    if(value_path == "num-addr")
    {
        num_addr = value;
    }
    if(value_path == "num-app-bytes")
    {
        num_app_bytes = value;
    }
    if(value_path == "num-cap-rcvd")
    {
        num_cap_rcvd = value;
    }
    if(value_path == "num-cap-sent")
    {
        num_cap_sent = value;
    }
    if(value_path == "num-duplicate-addr")
    {
        num_duplicate_addr = value;
    }
    if(value_path == "num-lbl")
    {
        num_lbl = value;
    }
    if(value_path == "num-rx-bytes")
    {
        num_rx_bytes = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::SteadyStateSyncInfo()
    :
    num_cap_rcvd{YType::uint32, "num-cap-rcvd"},
    num_cap_sent{YType::uint32, "num-cap-sent"},
    num_stdby_adj_join{YType::uint32, "num-stdby-adj-join"},
    num_stdby_adj_leave{YType::uint32, "num-stdby-adj-leave"},
    rem_lbl_rq{YType::uint32, "rem-lbl-rq"},
    rem_lbl_wd{YType::uint32, "rem-lbl-wd"}
{
    yang_name = "steady-state-sync-info"; yang_parent_name = "ha-neighbor";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::~SteadyStateSyncInfo()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::has_data() const
{
    return num_cap_rcvd.is_set
	|| num_cap_sent.is_set
	|| num_stdby_adj_join.is_set
	|| num_stdby_adj_leave.is_set
	|| rem_lbl_rq.is_set
	|| rem_lbl_wd.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(num_cap_rcvd.operation)
	|| is_set(num_cap_sent.operation)
	|| is_set(num_stdby_adj_join.operation)
	|| is_set(num_stdby_adj_leave.operation)
	|| is_set(rem_lbl_rq.operation)
	|| is_set(rem_lbl_wd.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "steady-state-sync-info";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SteadyStateSyncInfo' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_cap_rcvd.is_set || is_set(num_cap_rcvd.operation)) leaf_name_data.push_back(num_cap_rcvd.get_name_leafdata());
    if (num_cap_sent.is_set || is_set(num_cap_sent.operation)) leaf_name_data.push_back(num_cap_sent.get_name_leafdata());
    if (num_stdby_adj_join.is_set || is_set(num_stdby_adj_join.operation)) leaf_name_data.push_back(num_stdby_adj_join.get_name_leafdata());
    if (num_stdby_adj_leave.is_set || is_set(num_stdby_adj_leave.operation)) leaf_name_data.push_back(num_stdby_adj_leave.get_name_leafdata());
    if (rem_lbl_rq.is_set || is_set(rem_lbl_rq.operation)) leaf_name_data.push_back(rem_lbl_rq.get_name_leafdata());
    if (rem_lbl_wd.is_set || is_set(rem_lbl_wd.operation)) leaf_name_data.push_back(rem_lbl_wd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Nsr::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-cap-rcvd")
    {
        num_cap_rcvd = value;
    }
    if(value_path == "num-cap-sent")
    {
        num_cap_sent = value;
    }
    if(value_path == "num-stdby-adj-join")
    {
        num_stdby_adj_join = value;
    }
    if(value_path == "num-stdby-adj-leave")
    {
        num_stdby_adj_leave = value;
    }
    if(value_path == "rem-lbl-rq")
    {
        rem_lbl_rq = value;
    }
    if(value_path == "rem-lbl-wd")
    {
        rem_lbl_wd = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::Parameters()
    :
    af_binding_withdraw_delay{YType::uint32, "af-binding-withdraw-delay"},
    discovery_quick_start_disabled_on_interfaces{YType::boolean, "discovery-quick-start-disabled-on-interfaces"},
    global_discovery_quick_start_disabled{YType::boolean, "global-discovery-quick-start-disabled"},
    global_md5_password_enabled{YType::boolean, "global-md5-password-enabled"},
    hello_hold_time{YType::uint32, "hello-hold-time"},
    hello_interval{YType::uint32, "hello-interval"},
    housekeeping_timer_interval{YType::uint32, "housekeeping-timer-interval"},
    igp_sync_delay_time_for_interface{YType::uint32, "igp-sync-delay-time-for-interface"},
    igp_sync_delay_time_on_restart{YType::uint32, "igp-sync-delay-time-on-restart"},
    keepalive_interval{YType::uint32, "keepalive-interval"},
    ldp_out_of_mem_state{YType::uint32, "ldp-out-of-mem-state"},
    ldp_recovery_timeout{YType::uint32, "ldp-recovery-timeout"},
    le_no_route_timeout{YType::uint32, "le-no-route-timeout"},
    max_intf_attached{YType::uint32, "max-intf-attached"},
    max_intf_te{YType::uint32, "max-intf-te"},
    max_peer{YType::uint32, "max-peer"},
    nsr_enabled{YType::boolean, "nsr-enabled"},
    nsr_synced{YType::boolean, "nsr-synced"},
    protocol_version{YType::uint32, "protocol-version"},
    role_is_active{YType::boolean, "role-is-active"},
    router_id{YType::str, "router-id"},
    session_hold_time{YType::uint32, "session-hold-time"},
    targeted_hello_hold_time{YType::uint32, "targeted-hello-hold-time"},
    targeted_hello_interval{YType::uint32, "targeted-hello-interval"}
    	,
    graceful_restart_information(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::GracefulRestartInformation>())
{
    graceful_restart_information->parent = this;
    children["graceful-restart-information"] = graceful_restart_information;

    yang_name = "parameters"; yang_parent_name = "vrf";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::~Parameters()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::has_data() const
{
    for (std::size_t index=0; index<address_family_parameter.size(); index++)
    {
        if(address_family_parameter[index]->has_data())
            return true;
    }
    return af_binding_withdraw_delay.is_set
	|| discovery_quick_start_disabled_on_interfaces.is_set
	|| global_discovery_quick_start_disabled.is_set
	|| global_md5_password_enabled.is_set
	|| hello_hold_time.is_set
	|| hello_interval.is_set
	|| housekeeping_timer_interval.is_set
	|| igp_sync_delay_time_for_interface.is_set
	|| igp_sync_delay_time_on_restart.is_set
	|| keepalive_interval.is_set
	|| ldp_out_of_mem_state.is_set
	|| ldp_recovery_timeout.is_set
	|| le_no_route_timeout.is_set
	|| max_intf_attached.is_set
	|| max_intf_te.is_set
	|| max_peer.is_set
	|| nsr_enabled.is_set
	|| nsr_synced.is_set
	|| protocol_version.is_set
	|| role_is_active.is_set
	|| router_id.is_set
	|| session_hold_time.is_set
	|| targeted_hello_hold_time.is_set
	|| targeted_hello_interval.is_set
	|| (graceful_restart_information !=  nullptr && graceful_restart_information->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::has_operation() const
{
    for (std::size_t index=0; index<address_family_parameter.size(); index++)
    {
        if(address_family_parameter[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(af_binding_withdraw_delay.operation)
	|| is_set(discovery_quick_start_disabled_on_interfaces.operation)
	|| is_set(global_discovery_quick_start_disabled.operation)
	|| is_set(global_md5_password_enabled.operation)
	|| is_set(hello_hold_time.operation)
	|| is_set(hello_interval.operation)
	|| is_set(housekeeping_timer_interval.operation)
	|| is_set(igp_sync_delay_time_for_interface.operation)
	|| is_set(igp_sync_delay_time_on_restart.operation)
	|| is_set(keepalive_interval.operation)
	|| is_set(ldp_out_of_mem_state.operation)
	|| is_set(ldp_recovery_timeout.operation)
	|| is_set(le_no_route_timeout.operation)
	|| is_set(max_intf_attached.operation)
	|| is_set(max_intf_te.operation)
	|| is_set(max_peer.operation)
	|| is_set(nsr_enabled.operation)
	|| is_set(nsr_synced.operation)
	|| is_set(protocol_version.operation)
	|| is_set(role_is_active.operation)
	|| is_set(router_id.operation)
	|| is_set(session_hold_time.operation)
	|| is_set(targeted_hello_hold_time.operation)
	|| is_set(targeted_hello_interval.operation)
	|| (graceful_restart_information !=  nullptr && graceful_restart_information->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parameters";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Parameters' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_binding_withdraw_delay.is_set || is_set(af_binding_withdraw_delay.operation)) leaf_name_data.push_back(af_binding_withdraw_delay.get_name_leafdata());
    if (discovery_quick_start_disabled_on_interfaces.is_set || is_set(discovery_quick_start_disabled_on_interfaces.operation)) leaf_name_data.push_back(discovery_quick_start_disabled_on_interfaces.get_name_leafdata());
    if (global_discovery_quick_start_disabled.is_set || is_set(global_discovery_quick_start_disabled.operation)) leaf_name_data.push_back(global_discovery_quick_start_disabled.get_name_leafdata());
    if (global_md5_password_enabled.is_set || is_set(global_md5_password_enabled.operation)) leaf_name_data.push_back(global_md5_password_enabled.get_name_leafdata());
    if (hello_hold_time.is_set || is_set(hello_hold_time.operation)) leaf_name_data.push_back(hello_hold_time.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (housekeeping_timer_interval.is_set || is_set(housekeeping_timer_interval.operation)) leaf_name_data.push_back(housekeeping_timer_interval.get_name_leafdata());
    if (igp_sync_delay_time_for_interface.is_set || is_set(igp_sync_delay_time_for_interface.operation)) leaf_name_data.push_back(igp_sync_delay_time_for_interface.get_name_leafdata());
    if (igp_sync_delay_time_on_restart.is_set || is_set(igp_sync_delay_time_on_restart.operation)) leaf_name_data.push_back(igp_sync_delay_time_on_restart.get_name_leafdata());
    if (keepalive_interval.is_set || is_set(keepalive_interval.operation)) leaf_name_data.push_back(keepalive_interval.get_name_leafdata());
    if (ldp_out_of_mem_state.is_set || is_set(ldp_out_of_mem_state.operation)) leaf_name_data.push_back(ldp_out_of_mem_state.get_name_leafdata());
    if (ldp_recovery_timeout.is_set || is_set(ldp_recovery_timeout.operation)) leaf_name_data.push_back(ldp_recovery_timeout.get_name_leafdata());
    if (le_no_route_timeout.is_set || is_set(le_no_route_timeout.operation)) leaf_name_data.push_back(le_no_route_timeout.get_name_leafdata());
    if (max_intf_attached.is_set || is_set(max_intf_attached.operation)) leaf_name_data.push_back(max_intf_attached.get_name_leafdata());
    if (max_intf_te.is_set || is_set(max_intf_te.operation)) leaf_name_data.push_back(max_intf_te.get_name_leafdata());
    if (max_peer.is_set || is_set(max_peer.operation)) leaf_name_data.push_back(max_peer.get_name_leafdata());
    if (nsr_enabled.is_set || is_set(nsr_enabled.operation)) leaf_name_data.push_back(nsr_enabled.get_name_leafdata());
    if (nsr_synced.is_set || is_set(nsr_synced.operation)) leaf_name_data.push_back(nsr_synced.get_name_leafdata());
    if (protocol_version.is_set || is_set(protocol_version.operation)) leaf_name_data.push_back(protocol_version.get_name_leafdata());
    if (role_is_active.is_set || is_set(role_is_active.operation)) leaf_name_data.push_back(role_is_active.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (session_hold_time.is_set || is_set(session_hold_time.operation)) leaf_name_data.push_back(session_hold_time.get_name_leafdata());
    if (targeted_hello_hold_time.is_set || is_set(targeted_hello_hold_time.operation)) leaf_name_data.push_back(targeted_hello_hold_time.get_name_leafdata());
    if (targeted_hello_interval.is_set || is_set(targeted_hello_interval.operation)) leaf_name_data.push_back(targeted_hello_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address-family-parameter")
    {
        for(auto const & c : address_family_parameter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter>();
        c->parent = this;
        address_family_parameter.push_back(std::move(c));
        children[segment_path] = address_family_parameter.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "graceful-restart-information")
    {
        if(graceful_restart_information != nullptr)
        {
            children["graceful-restart-information"] = graceful_restart_information;
        }
        else
        {
            graceful_restart_information = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::GracefulRestartInformation>();
            graceful_restart_information->parent = this;
            children["graceful-restart-information"] = graceful_restart_information;
        }
        return children.at("graceful-restart-information");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::get_children()
{
    for (auto const & c : address_family_parameter)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("graceful-restart-information") == children.end())
    {
        if(graceful_restart_information != nullptr)
        {
            children["graceful-restart-information"] = graceful_restart_information;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-binding-withdraw-delay")
    {
        af_binding_withdraw_delay = value;
    }
    if(value_path == "discovery-quick-start-disabled-on-interfaces")
    {
        discovery_quick_start_disabled_on_interfaces = value;
    }
    if(value_path == "global-discovery-quick-start-disabled")
    {
        global_discovery_quick_start_disabled = value;
    }
    if(value_path == "global-md5-password-enabled")
    {
        global_md5_password_enabled = value;
    }
    if(value_path == "hello-hold-time")
    {
        hello_hold_time = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "housekeeping-timer-interval")
    {
        housekeeping_timer_interval = value;
    }
    if(value_path == "igp-sync-delay-time-for-interface")
    {
        igp_sync_delay_time_for_interface = value;
    }
    if(value_path == "igp-sync-delay-time-on-restart")
    {
        igp_sync_delay_time_on_restart = value;
    }
    if(value_path == "keepalive-interval")
    {
        keepalive_interval = value;
    }
    if(value_path == "ldp-out-of-mem-state")
    {
        ldp_out_of_mem_state = value;
    }
    if(value_path == "ldp-recovery-timeout")
    {
        ldp_recovery_timeout = value;
    }
    if(value_path == "le-no-route-timeout")
    {
        le_no_route_timeout = value;
    }
    if(value_path == "max-intf-attached")
    {
        max_intf_attached = value;
    }
    if(value_path == "max-intf-te")
    {
        max_intf_te = value;
    }
    if(value_path == "max-peer")
    {
        max_peer = value;
    }
    if(value_path == "nsr-enabled")
    {
        nsr_enabled = value;
    }
    if(value_path == "nsr-synced")
    {
        nsr_synced = value;
    }
    if(value_path == "protocol-version")
    {
        protocol_version = value;
    }
    if(value_path == "role-is-active")
    {
        role_is_active = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
    if(value_path == "session-hold-time")
    {
        session_hold_time = value;
    }
    if(value_path == "targeted-hello-hold-time")
    {
        targeted_hello_hold_time = value;
    }
    if(value_path == "targeted-hello-interval")
    {
        targeted_hello_interval = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::GracefulRestartInformation::GracefulRestartInformation()
    :
    graceful_restart_forwarding_state_hold_time{YType::uint32, "graceful-restart-forwarding-state-hold-time"},
    graceful_restart_reconnect_timeout{YType::uint32, "graceful-restart-reconnect-timeout"},
    is_graceful_restart_configured{YType::boolean, "is-graceful-restart-configured"}
{
    yang_name = "graceful-restart-information"; yang_parent_name = "parameters";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::GracefulRestartInformation::~GracefulRestartInformation()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::GracefulRestartInformation::has_data() const
{
    return graceful_restart_forwarding_state_hold_time.is_set
	|| graceful_restart_reconnect_timeout.is_set
	|| is_graceful_restart_configured.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::GracefulRestartInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(graceful_restart_forwarding_state_hold_time.operation)
	|| is_set(graceful_restart_reconnect_timeout.operation)
	|| is_set(is_graceful_restart_configured.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::GracefulRestartInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart-information";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::GracefulRestartInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GracefulRestartInformation' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (graceful_restart_forwarding_state_hold_time.is_set || is_set(graceful_restart_forwarding_state_hold_time.operation)) leaf_name_data.push_back(graceful_restart_forwarding_state_hold_time.get_name_leafdata());
    if (graceful_restart_reconnect_timeout.is_set || is_set(graceful_restart_reconnect_timeout.operation)) leaf_name_data.push_back(graceful_restart_reconnect_timeout.get_name_leafdata());
    if (is_graceful_restart_configured.is_set || is_set(is_graceful_restart_configured.operation)) leaf_name_data.push_back(is_graceful_restart_configured.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::GracefulRestartInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::GracefulRestartInformation::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::GracefulRestartInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "graceful-restart-forwarding-state-hold-time")
    {
        graceful_restart_forwarding_state_hold_time = value;
    }
    if(value_path == "graceful-restart-reconnect-timeout")
    {
        graceful_restart_reconnect_timeout = value;
    }
    if(value_path == "is-graceful-restart-configured")
    {
        is_graceful_restart_configured = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter::AddressFamilyParameter()
    :
    address_family{YType::enumeration, "address-family"},
    is_accepting_targeted_hellos{YType::boolean, "is-accepting-targeted-hellos"},
    label_imp_null_override_acl{YType::str, "label-imp-null-override-acl"},
    null_label{YType::str, "null-label"},
    targeted_hello_acl{YType::str, "targeted-hello-acl"}
    	,
    discovery_transport_address(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress>())
{
    discovery_transport_address->parent = this;
    children["discovery-transport-address"] = discovery_transport_address;

    yang_name = "address-family-parameter"; yang_parent_name = "parameters";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter::~AddressFamilyParameter()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter::has_data() const
{
    return address_family.is_set
	|| is_accepting_targeted_hellos.is_set
	|| label_imp_null_override_acl.is_set
	|| null_label.is_set
	|| targeted_hello_acl.is_set
	|| (discovery_transport_address !=  nullptr && discovery_transport_address->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter::has_operation() const
{
    return is_set(operation)
	|| is_set(address_family.operation)
	|| is_set(is_accepting_targeted_hellos.operation)
	|| is_set(label_imp_null_override_acl.operation)
	|| is_set(null_label.operation)
	|| is_set(targeted_hello_acl.operation)
	|| (discovery_transport_address !=  nullptr && discovery_transport_address->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-parameter";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AddressFamilyParameter' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (is_accepting_targeted_hellos.is_set || is_set(is_accepting_targeted_hellos.operation)) leaf_name_data.push_back(is_accepting_targeted_hellos.get_name_leafdata());
    if (label_imp_null_override_acl.is_set || is_set(label_imp_null_override_acl.operation)) leaf_name_data.push_back(label_imp_null_override_acl.get_name_leafdata());
    if (null_label.is_set || is_set(null_label.operation)) leaf_name_data.push_back(null_label.get_name_leafdata());
    if (targeted_hello_acl.is_set || is_set(targeted_hello_acl.operation)) leaf_name_data.push_back(targeted_hello_acl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "discovery-transport-address")
    {
        if(discovery_transport_address != nullptr)
        {
            children["discovery-transport-address"] = discovery_transport_address;
        }
        else
        {
            discovery_transport_address = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress>();
            discovery_transport_address->parent = this;
            children["discovery-transport-address"] = discovery_transport_address;
        }
        return children.at("discovery-transport-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter::get_children()
{
    if(children.find("discovery-transport-address") == children.end())
    {
        if(discovery_transport_address != nullptr)
        {
            children["discovery-transport-address"] = discovery_transport_address;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family")
    {
        address_family = value;
    }
    if(value_path == "is-accepting-targeted-hellos")
    {
        is_accepting_targeted_hellos = value;
    }
    if(value_path == "label-imp-null-override-acl")
    {
        label_imp_null_override_acl = value;
    }
    if(value_path == "null-label")
    {
        null_label = value;
    }
    if(value_path == "targeted-hello-acl")
    {
        targeted_hello_acl = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress::DiscoveryTransportAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "discovery-transport-address"; yang_parent_name = "address-family-parameter";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress::~DiscoveryTransportAddress()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery-transport-address";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DiscoveryTransportAddress' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Parameters::AddressFamilyParameter::DiscoveryTransportAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Issu::Issu()
    :
    ha_statistics(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics>())
	,ha_summary(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary>())
{
    ha_statistics->parent = this;
    children["ha-statistics"] = ha_statistics;

    ha_summary->parent = this;
    children["ha-summary"] = ha_summary;

    yang_name = "issu"; yang_parent_name = "vrf";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Issu::~Issu()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::has_data() const
{
    return (ha_statistics !=  nullptr && ha_statistics->has_data())
	|| (ha_summary !=  nullptr && ha_summary->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::has_operation() const
{
    return is_set(operation)
	|| (ha_statistics !=  nullptr && ha_statistics->has_operation())
	|| (ha_summary !=  nullptr && ha_summary->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Issu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Issu::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Issu' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Issu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ha-statistics")
    {
        if(ha_statistics != nullptr)
        {
            children["ha-statistics"] = ha_statistics;
        }
        else
        {
            ha_statistics = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics>();
            ha_statistics->parent = this;
            children["ha-statistics"] = ha_statistics;
        }
        return children.at("ha-statistics");
    }

    if(child_yang_name == "ha-summary")
    {
        if(ha_summary != nullptr)
        {
            children["ha-summary"] = ha_summary;
        }
        else
        {
            ha_summary = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary>();
            ha_summary->parent = this;
            children["ha-summary"] = ha_summary;
        }
        return children.at("ha-summary");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Issu::get_children()
{
    if(children.find("ha-statistics") == children.end())
    {
        if(ha_statistics != nullptr)
        {
            children["ha-statistics"] = ha_statistics;
        }
    }

    if(children.find("ha-summary") == children.end())
    {
        if(ha_summary != nullptr)
        {
            children["ha-summary"] = ha_summary;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Issu::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::HaSummary()
    :
    sessions(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::Sessions>())
	,vrf(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::Vrf_>())
{
    sessions->parent = this;
    children["sessions"] = sessions;

    vrf->parent = this;
    children["vrf"] = vrf;

    yang_name = "ha-summary"; yang_parent_name = "issu";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::~HaSummary()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::has_data() const
{
    return (sessions !=  nullptr && sessions->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::has_operation() const
{
    return is_set(operation)
	|| (sessions !=  nullptr && sessions->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-summary";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HaSummary' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sessions")
    {
        if(sessions != nullptr)
        {
            children["sessions"] = sessions;
        }
        else
        {
            sessions = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::Sessions>();
            sessions->parent = this;
            children["sessions"] = sessions;
        }
        return children.at("sessions");
    }

    if(child_yang_name == "vrf")
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
        else
        {
            vrf = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::Vrf_>();
            vrf->parent = this;
            children["vrf"] = vrf;
        }
        return children.at("vrf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::get_children()
{
    if(children.find("sessions") == children.end())
    {
        if(sessions != nullptr)
        {
            children["sessions"] = sessions;
        }
    }

    if(children.find("vrf") == children.end())
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::Vrf_::Vrf_()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "ha-summary";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::Vrf_::~Vrf_()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::Vrf_::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::Vrf_::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::Vrf_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf_' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::Vrf_::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::Vrf_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::Sessions::Sessions()
    :
    nsr_eligible{YType::uint32, "nsr-eligible"},
    nsr_state_app_wait{YType::uint32, "nsr-state-app-wait"},
    nsr_state_none{YType::uint32, "nsr-state-none"},
    nsr_state_operational{YType::uint32, "nsr-state-operational"},
    nsr_state_prepare{YType::uint32, "nsr-state-prepare"},
    nsr_state_ready{YType::uint32, "nsr-state-ready"},
    nsr_state_tcp_phase1{YType::uint32, "nsr-state-tcp-phase1"},
    nsr_state_tcp_phase2{YType::uint32, "nsr-state-tcp-phase2"},
    nsr_state_wait{YType::uint32, "nsr-state-wait"},
    total{YType::uint32, "total"}
{
    yang_name = "sessions"; yang_parent_name = "ha-summary";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::Sessions::~Sessions()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::Sessions::has_data() const
{
    return nsr_eligible.is_set
	|| nsr_state_app_wait.is_set
	|| nsr_state_none.is_set
	|| nsr_state_operational.is_set
	|| nsr_state_prepare.is_set
	|| nsr_state_ready.is_set
	|| nsr_state_tcp_phase1.is_set
	|| nsr_state_tcp_phase2.is_set
	|| nsr_state_wait.is_set
	|| total.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::Sessions::has_operation() const
{
    return is_set(operation)
	|| is_set(nsr_eligible.operation)
	|| is_set(nsr_state_app_wait.operation)
	|| is_set(nsr_state_none.operation)
	|| is_set(nsr_state_operational.operation)
	|| is_set(nsr_state_prepare.operation)
	|| is_set(nsr_state_ready.operation)
	|| is_set(nsr_state_tcp_phase1.operation)
	|| is_set(nsr_state_tcp_phase2.operation)
	|| is_set(nsr_state_wait.operation)
	|| is_set(total.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::Sessions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sessions' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_eligible.is_set || is_set(nsr_eligible.operation)) leaf_name_data.push_back(nsr_eligible.get_name_leafdata());
    if (nsr_state_app_wait.is_set || is_set(nsr_state_app_wait.operation)) leaf_name_data.push_back(nsr_state_app_wait.get_name_leafdata());
    if (nsr_state_none.is_set || is_set(nsr_state_none.operation)) leaf_name_data.push_back(nsr_state_none.get_name_leafdata());
    if (nsr_state_operational.is_set || is_set(nsr_state_operational.operation)) leaf_name_data.push_back(nsr_state_operational.get_name_leafdata());
    if (nsr_state_prepare.is_set || is_set(nsr_state_prepare.operation)) leaf_name_data.push_back(nsr_state_prepare.get_name_leafdata());
    if (nsr_state_ready.is_set || is_set(nsr_state_ready.operation)) leaf_name_data.push_back(nsr_state_ready.get_name_leafdata());
    if (nsr_state_tcp_phase1.is_set || is_set(nsr_state_tcp_phase1.operation)) leaf_name_data.push_back(nsr_state_tcp_phase1.get_name_leafdata());
    if (nsr_state_tcp_phase2.is_set || is_set(nsr_state_tcp_phase2.operation)) leaf_name_data.push_back(nsr_state_tcp_phase2.get_name_leafdata());
    if (nsr_state_wait.is_set || is_set(nsr_state_wait.operation)) leaf_name_data.push_back(nsr_state_wait.get_name_leafdata());
    if (total.is_set || is_set(total.operation)) leaf_name_data.push_back(total.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::Sessions::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaSummary::Sessions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nsr-eligible")
    {
        nsr_eligible = value;
    }
    if(value_path == "nsr-state-app-wait")
    {
        nsr_state_app_wait = value;
    }
    if(value_path == "nsr-state-none")
    {
        nsr_state_none = value;
    }
    if(value_path == "nsr-state-operational")
    {
        nsr_state_operational = value;
    }
    if(value_path == "nsr-state-prepare")
    {
        nsr_state_prepare = value;
    }
    if(value_path == "nsr-state-ready")
    {
        nsr_state_ready = value;
    }
    if(value_path == "nsr-state-tcp-phase1")
    {
        nsr_state_tcp_phase1 = value;
    }
    if(value_path == "nsr-state-tcp-phase2")
    {
        nsr_state_tcp_phase2 = value;
    }
    if(value_path == "nsr-state-wait")
    {
        nsr_state_wait = value;
    }
    if(value_path == "total")
    {
        total = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaStatistics()
    :
    ha_global(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaGlobal>())
	,ha_neighbors(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors>())
{
    ha_global->parent = this;
    children["ha-global"] = ha_global;

    ha_neighbors->parent = this;
    children["ha-neighbors"] = ha_neighbors;

    yang_name = "ha-statistics"; yang_parent_name = "issu";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::~HaStatistics()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::has_data() const
{
    return (ha_global !=  nullptr && ha_global->has_data())
	|| (ha_neighbors !=  nullptr && ha_neighbors->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::has_operation() const
{
    return is_set(operation)
	|| (ha_global !=  nullptr && ha_global->has_operation())
	|| (ha_neighbors !=  nullptr && ha_neighbors->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-statistics";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HaStatistics' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ha-global")
    {
        if(ha_global != nullptr)
        {
            children["ha-global"] = ha_global;
        }
        else
        {
            ha_global = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaGlobal>();
            ha_global->parent = this;
            children["ha-global"] = ha_global;
        }
        return children.at("ha-global");
    }

    if(child_yang_name == "ha-neighbors")
    {
        if(ha_neighbors != nullptr)
        {
            children["ha-neighbors"] = ha_neighbors;
        }
        else
        {
            ha_neighbors = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors>();
            ha_neighbors->parent = this;
            children["ha-neighbors"] = ha_neighbors;
        }
        return children.at("ha-neighbors");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::get_children()
{
    if(children.find("ha-global") == children.end())
    {
        if(ha_global != nullptr)
        {
            children["ha-global"] = ha_global;
        }
    }

    if(children.find("ha-neighbors") == children.end())
    {
        if(ha_neighbors != nullptr)
        {
            children["ha-neighbors"] = ha_neighbors;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::HaGlobal()
    :
    init_sync(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::InitSync>())
{
    init_sync->parent = this;
    children["init-sync"] = init_sync;

    yang_name = "ha-global"; yang_parent_name = "ha-statistics";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::~HaGlobal()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::has_data() const
{
    return (init_sync !=  nullptr && init_sync->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::has_operation() const
{
    return is_set(operation)
	|| (init_sync !=  nullptr && init_sync->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-global";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HaGlobal' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "init-sync")
    {
        if(init_sync != nullptr)
        {
            children["init-sync"] = init_sync;
        }
        else
        {
            init_sync = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::InitSync>();
            init_sync->parent = this;
            children["init-sync"] = init_sync;
        }
        return children.at("init-sync");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::get_children()
{
    if(children.find("init-sync") == children.end())
    {
        if(init_sync != nullptr)
        {
            children["init-sync"] = init_sync;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::InitSync::InitSync()
    :
    init_sync_end{YType::uint32, "init-sync-end"},
    init_sync_start{YType::uint32, "init-sync-start"},
    ipc_default_mtu{YType::uint32, "ipc-default-mtu"},
    ipc_exceeded_mtu_msg_cnt{YType::uint32, "ipc-exceeded-mtu-msg-cnt"},
    ipc_max_rx_batch_bytes{YType::uint32, "ipc-max-rx-batch-bytes"},
    ipc_max_tx_batch_bytes{YType::uint32, "ipc-max-tx-batch-bytes"},
    ipc_msg_rx_bytes{YType::uint32, "ipc-msg-rx-bytes"},
    ipc_msg_rx_cnt{YType::uint32, "ipc-msg-rx-cnt"},
    ipc_msg_tx_bytes{YType::uint32, "ipc-msg-tx-bytes"},
    ipc_msg_tx_cnt{YType::uint32, "ipc-msg-tx-cnt"},
    ipc_restart_cnt{YType::uint32, "ipc-restart-cnt"},
    ipc_tx_fail_cnt{YType::uint32, "ipc-tx-fail-cnt"},
    nsr_cfged{YType::boolean, "nsr-cfged"},
    nsr_synced{YType::boolean, "nsr-synced"},
    num_cap_rcvd{YType::uint32, "num-cap-rcvd"},
    num_cap_sent{YType::uint32, "num-cap-sent"},
    num_lbl{YType::uint32, "num-lbl"},
    num_lbl_adv{YType::uint32, "num-lbl-adv"},
    num_lcl_addr_wd{YType::uint32, "num-lcl-addr-wd"},
    num_peers{YType::uint32, "num-peers"},
    num_pfx{YType::uint32, "num-pfx"},
    total_ipc_tx_fail_cnt{YType::uint32, "total-ipc-tx-fail-cnt"}
{
    yang_name = "init-sync"; yang_parent_name = "ha-global";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::InitSync::~InitSync()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::InitSync::has_data() const
{
    return init_sync_end.is_set
	|| init_sync_start.is_set
	|| ipc_default_mtu.is_set
	|| ipc_exceeded_mtu_msg_cnt.is_set
	|| ipc_max_rx_batch_bytes.is_set
	|| ipc_max_tx_batch_bytes.is_set
	|| ipc_msg_rx_bytes.is_set
	|| ipc_msg_rx_cnt.is_set
	|| ipc_msg_tx_bytes.is_set
	|| ipc_msg_tx_cnt.is_set
	|| ipc_restart_cnt.is_set
	|| ipc_tx_fail_cnt.is_set
	|| nsr_cfged.is_set
	|| nsr_synced.is_set
	|| num_cap_rcvd.is_set
	|| num_cap_sent.is_set
	|| num_lbl.is_set
	|| num_lbl_adv.is_set
	|| num_lcl_addr_wd.is_set
	|| num_peers.is_set
	|| num_pfx.is_set
	|| total_ipc_tx_fail_cnt.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::InitSync::has_operation() const
{
    return is_set(operation)
	|| is_set(init_sync_end.operation)
	|| is_set(init_sync_start.operation)
	|| is_set(ipc_default_mtu.operation)
	|| is_set(ipc_exceeded_mtu_msg_cnt.operation)
	|| is_set(ipc_max_rx_batch_bytes.operation)
	|| is_set(ipc_max_tx_batch_bytes.operation)
	|| is_set(ipc_msg_rx_bytes.operation)
	|| is_set(ipc_msg_rx_cnt.operation)
	|| is_set(ipc_msg_tx_bytes.operation)
	|| is_set(ipc_msg_tx_cnt.operation)
	|| is_set(ipc_restart_cnt.operation)
	|| is_set(ipc_tx_fail_cnt.operation)
	|| is_set(nsr_cfged.operation)
	|| is_set(nsr_synced.operation)
	|| is_set(num_cap_rcvd.operation)
	|| is_set(num_cap_sent.operation)
	|| is_set(num_lbl.operation)
	|| is_set(num_lbl_adv.operation)
	|| is_set(num_lcl_addr_wd.operation)
	|| is_set(num_peers.operation)
	|| is_set(num_pfx.operation)
	|| is_set(total_ipc_tx_fail_cnt.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::InitSync::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "init-sync";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::InitSync::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InitSync' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (init_sync_end.is_set || is_set(init_sync_end.operation)) leaf_name_data.push_back(init_sync_end.get_name_leafdata());
    if (init_sync_start.is_set || is_set(init_sync_start.operation)) leaf_name_data.push_back(init_sync_start.get_name_leafdata());
    if (ipc_default_mtu.is_set || is_set(ipc_default_mtu.operation)) leaf_name_data.push_back(ipc_default_mtu.get_name_leafdata());
    if (ipc_exceeded_mtu_msg_cnt.is_set || is_set(ipc_exceeded_mtu_msg_cnt.operation)) leaf_name_data.push_back(ipc_exceeded_mtu_msg_cnt.get_name_leafdata());
    if (ipc_max_rx_batch_bytes.is_set || is_set(ipc_max_rx_batch_bytes.operation)) leaf_name_data.push_back(ipc_max_rx_batch_bytes.get_name_leafdata());
    if (ipc_max_tx_batch_bytes.is_set || is_set(ipc_max_tx_batch_bytes.operation)) leaf_name_data.push_back(ipc_max_tx_batch_bytes.get_name_leafdata());
    if (ipc_msg_rx_bytes.is_set || is_set(ipc_msg_rx_bytes.operation)) leaf_name_data.push_back(ipc_msg_rx_bytes.get_name_leafdata());
    if (ipc_msg_rx_cnt.is_set || is_set(ipc_msg_rx_cnt.operation)) leaf_name_data.push_back(ipc_msg_rx_cnt.get_name_leafdata());
    if (ipc_msg_tx_bytes.is_set || is_set(ipc_msg_tx_bytes.operation)) leaf_name_data.push_back(ipc_msg_tx_bytes.get_name_leafdata());
    if (ipc_msg_tx_cnt.is_set || is_set(ipc_msg_tx_cnt.operation)) leaf_name_data.push_back(ipc_msg_tx_cnt.get_name_leafdata());
    if (ipc_restart_cnt.is_set || is_set(ipc_restart_cnt.operation)) leaf_name_data.push_back(ipc_restart_cnt.get_name_leafdata());
    if (ipc_tx_fail_cnt.is_set || is_set(ipc_tx_fail_cnt.operation)) leaf_name_data.push_back(ipc_tx_fail_cnt.get_name_leafdata());
    if (nsr_cfged.is_set || is_set(nsr_cfged.operation)) leaf_name_data.push_back(nsr_cfged.get_name_leafdata());
    if (nsr_synced.is_set || is_set(nsr_synced.operation)) leaf_name_data.push_back(nsr_synced.get_name_leafdata());
    if (num_cap_rcvd.is_set || is_set(num_cap_rcvd.operation)) leaf_name_data.push_back(num_cap_rcvd.get_name_leafdata());
    if (num_cap_sent.is_set || is_set(num_cap_sent.operation)) leaf_name_data.push_back(num_cap_sent.get_name_leafdata());
    if (num_lbl.is_set || is_set(num_lbl.operation)) leaf_name_data.push_back(num_lbl.get_name_leafdata());
    if (num_lbl_adv.is_set || is_set(num_lbl_adv.operation)) leaf_name_data.push_back(num_lbl_adv.get_name_leafdata());
    if (num_lcl_addr_wd.is_set || is_set(num_lcl_addr_wd.operation)) leaf_name_data.push_back(num_lcl_addr_wd.get_name_leafdata());
    if (num_peers.is_set || is_set(num_peers.operation)) leaf_name_data.push_back(num_peers.get_name_leafdata());
    if (num_pfx.is_set || is_set(num_pfx.operation)) leaf_name_data.push_back(num_pfx.get_name_leafdata());
    if (total_ipc_tx_fail_cnt.is_set || is_set(total_ipc_tx_fail_cnt.operation)) leaf_name_data.push_back(total_ipc_tx_fail_cnt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::InitSync::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::InitSync::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaGlobal::InitSync::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "init-sync-end")
    {
        init_sync_end = value;
    }
    if(value_path == "init-sync-start")
    {
        init_sync_start = value;
    }
    if(value_path == "ipc-default-mtu")
    {
        ipc_default_mtu = value;
    }
    if(value_path == "ipc-exceeded-mtu-msg-cnt")
    {
        ipc_exceeded_mtu_msg_cnt = value;
    }
    if(value_path == "ipc-max-rx-batch-bytes")
    {
        ipc_max_rx_batch_bytes = value;
    }
    if(value_path == "ipc-max-tx-batch-bytes")
    {
        ipc_max_tx_batch_bytes = value;
    }
    if(value_path == "ipc-msg-rx-bytes")
    {
        ipc_msg_rx_bytes = value;
    }
    if(value_path == "ipc-msg-rx-cnt")
    {
        ipc_msg_rx_cnt = value;
    }
    if(value_path == "ipc-msg-tx-bytes")
    {
        ipc_msg_tx_bytes = value;
    }
    if(value_path == "ipc-msg-tx-cnt")
    {
        ipc_msg_tx_cnt = value;
    }
    if(value_path == "ipc-restart-cnt")
    {
        ipc_restart_cnt = value;
    }
    if(value_path == "ipc-tx-fail-cnt")
    {
        ipc_tx_fail_cnt = value;
    }
    if(value_path == "nsr-cfged")
    {
        nsr_cfged = value;
    }
    if(value_path == "nsr-synced")
    {
        nsr_synced = value;
    }
    if(value_path == "num-cap-rcvd")
    {
        num_cap_rcvd = value;
    }
    if(value_path == "num-cap-sent")
    {
        num_cap_sent = value;
    }
    if(value_path == "num-lbl")
    {
        num_lbl = value;
    }
    if(value_path == "num-lbl-adv")
    {
        num_lbl_adv = value;
    }
    if(value_path == "num-lcl-addr-wd")
    {
        num_lcl_addr_wd = value;
    }
    if(value_path == "num-peers")
    {
        num_peers = value;
    }
    if(value_path == "num-pfx")
    {
        num_pfx = value;
    }
    if(value_path == "total-ipc-tx-fail-cnt")
    {
        total_ipc_tx_fail_cnt = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbors()
{
    yang_name = "ha-neighbors"; yang_parent_name = "ha-statistics";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::~HaNeighbors()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::has_data() const
{
    for (std::size_t index=0; index<ha_neighbor.size(); index++)
    {
        if(ha_neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::has_operation() const
{
    for (std::size_t index=0; index<ha_neighbor.size(); index++)
    {
        if(ha_neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-neighbors";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HaNeighbors' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ha-neighbor")
    {
        for(auto const & c : ha_neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor>();
        c->parent = this;
        ha_neighbor.push_back(std::move(c));
        children[segment_path] = ha_neighbor.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::get_children()
{
    for (auto const & c : ha_neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::HaNeighbor()
    :
    label_space_id{YType::uint32, "label-space-id"},
    lbl_spc_id{YType::uint16, "lbl-spc-id"},
    lsr_id{YType::str, "lsr-id"},
    lsr_id_xr{YType::uint32, "lsr-id-xr"},
    nsr_sync_state{YType::int32, "nsr-sync-state"},
    num_msg{YType::uint32, "num-msg"}
    	,
    init_sync_info(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo>())
	,steady_state_sync_info(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo>())
{
    init_sync_info->parent = this;
    children["init-sync-info"] = init_sync_info;

    steady_state_sync_info->parent = this;
    children["steady-state-sync-info"] = steady_state_sync_info;

    yang_name = "ha-neighbor"; yang_parent_name = "ha-neighbors";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::~HaNeighbor()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::has_data() const
{
    return label_space_id.is_set
	|| lbl_spc_id.is_set
	|| lsr_id.is_set
	|| lsr_id_xr.is_set
	|| nsr_sync_state.is_set
	|| num_msg.is_set
	|| (init_sync_info !=  nullptr && init_sync_info->has_data())
	|| (steady_state_sync_info !=  nullptr && steady_state_sync_info->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(label_space_id.operation)
	|| is_set(lbl_spc_id.operation)
	|| is_set(lsr_id.operation)
	|| is_set(lsr_id_xr.operation)
	|| is_set(nsr_sync_state.operation)
	|| is_set(num_msg.operation)
	|| (init_sync_info !=  nullptr && init_sync_info->has_operation())
	|| (steady_state_sync_info !=  nullptr && steady_state_sync_info->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ha-neighbor";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'HaNeighbor' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_space_id.is_set || is_set(label_space_id.operation)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (lbl_spc_id.is_set || is_set(lbl_spc_id.operation)) leaf_name_data.push_back(lbl_spc_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.operation)) leaf_name_data.push_back(lsr_id.get_name_leafdata());
    if (lsr_id_xr.is_set || is_set(lsr_id_xr.operation)) leaf_name_data.push_back(lsr_id_xr.get_name_leafdata());
    if (nsr_sync_state.is_set || is_set(nsr_sync_state.operation)) leaf_name_data.push_back(nsr_sync_state.get_name_leafdata());
    if (num_msg.is_set || is_set(num_msg.operation)) leaf_name_data.push_back(num_msg.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "init-sync-info")
    {
        if(init_sync_info != nullptr)
        {
            children["init-sync-info"] = init_sync_info;
        }
        else
        {
            init_sync_info = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo>();
            init_sync_info->parent = this;
            children["init-sync-info"] = init_sync_info;
        }
        return children.at("init-sync-info");
    }

    if(child_yang_name == "steady-state-sync-info")
    {
        if(steady_state_sync_info != nullptr)
        {
            children["steady-state-sync-info"] = steady_state_sync_info;
        }
        else
        {
            steady_state_sync_info = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo>();
            steady_state_sync_info->parent = this;
            children["steady-state-sync-info"] = steady_state_sync_info;
        }
        return children.at("steady-state-sync-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::get_children()
{
    if(children.find("init-sync-info") == children.end())
    {
        if(init_sync_info != nullptr)
        {
            children["init-sync-info"] = init_sync_info;
        }
    }

    if(children.find("steady-state-sync-info") == children.end())
    {
        if(steady_state_sync_info != nullptr)
        {
            children["steady-state-sync-info"] = steady_state_sync_info;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-space-id")
    {
        label_space_id = value;
    }
    if(value_path == "lbl-spc-id")
    {
        lbl_spc_id = value;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
    }
    if(value_path == "lsr-id-xr")
    {
        lsr_id_xr = value;
    }
    if(value_path == "nsr-sync-state")
    {
        nsr_sync_state = value;
    }
    if(value_path == "num-msg")
    {
        num_msg = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::InitSyncInfo()
    :
    init_sync_end{YType::uint32, "init-sync-end"},
    init_sync_start{YType::uint32, "init-sync-start"},
    num_addr{YType::uint32, "num-addr"},
    num_app_bytes{YType::uint32, "num-app-bytes"},
    num_cap_rcvd{YType::uint32, "num-cap-rcvd"},
    num_cap_sent{YType::uint32, "num-cap-sent"},
    num_duplicate_addr{YType::uint32, "num-duplicate-addr"},
    num_lbl{YType::uint32, "num-lbl"},
    num_rx_bytes{YType::uint32, "num-rx-bytes"}
{
    yang_name = "init-sync-info"; yang_parent_name = "ha-neighbor";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::~InitSyncInfo()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::has_data() const
{
    return init_sync_end.is_set
	|| init_sync_start.is_set
	|| num_addr.is_set
	|| num_app_bytes.is_set
	|| num_cap_rcvd.is_set
	|| num_cap_sent.is_set
	|| num_duplicate_addr.is_set
	|| num_lbl.is_set
	|| num_rx_bytes.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(init_sync_end.operation)
	|| is_set(init_sync_start.operation)
	|| is_set(num_addr.operation)
	|| is_set(num_app_bytes.operation)
	|| is_set(num_cap_rcvd.operation)
	|| is_set(num_cap_sent.operation)
	|| is_set(num_duplicate_addr.operation)
	|| is_set(num_lbl.operation)
	|| is_set(num_rx_bytes.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "init-sync-info";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InitSyncInfo' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (init_sync_end.is_set || is_set(init_sync_end.operation)) leaf_name_data.push_back(init_sync_end.get_name_leafdata());
    if (init_sync_start.is_set || is_set(init_sync_start.operation)) leaf_name_data.push_back(init_sync_start.get_name_leafdata());
    if (num_addr.is_set || is_set(num_addr.operation)) leaf_name_data.push_back(num_addr.get_name_leafdata());
    if (num_app_bytes.is_set || is_set(num_app_bytes.operation)) leaf_name_data.push_back(num_app_bytes.get_name_leafdata());
    if (num_cap_rcvd.is_set || is_set(num_cap_rcvd.operation)) leaf_name_data.push_back(num_cap_rcvd.get_name_leafdata());
    if (num_cap_sent.is_set || is_set(num_cap_sent.operation)) leaf_name_data.push_back(num_cap_sent.get_name_leafdata());
    if (num_duplicate_addr.is_set || is_set(num_duplicate_addr.operation)) leaf_name_data.push_back(num_duplicate_addr.get_name_leafdata());
    if (num_lbl.is_set || is_set(num_lbl.operation)) leaf_name_data.push_back(num_lbl.get_name_leafdata());
    if (num_rx_bytes.is_set || is_set(num_rx_bytes.operation)) leaf_name_data.push_back(num_rx_bytes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::InitSyncInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "init-sync-end")
    {
        init_sync_end = value;
    }
    if(value_path == "init-sync-start")
    {
        init_sync_start = value;
    }
    if(value_path == "num-addr")
    {
        num_addr = value;
    }
    if(value_path == "num-app-bytes")
    {
        num_app_bytes = value;
    }
    if(value_path == "num-cap-rcvd")
    {
        num_cap_rcvd = value;
    }
    if(value_path == "num-cap-sent")
    {
        num_cap_sent = value;
    }
    if(value_path == "num-duplicate-addr")
    {
        num_duplicate_addr = value;
    }
    if(value_path == "num-lbl")
    {
        num_lbl = value;
    }
    if(value_path == "num-rx-bytes")
    {
        num_rx_bytes = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::SteadyStateSyncInfo()
    :
    num_cap_rcvd{YType::uint32, "num-cap-rcvd"},
    num_cap_sent{YType::uint32, "num-cap-sent"},
    num_stdby_adj_join{YType::uint32, "num-stdby-adj-join"},
    num_stdby_adj_leave{YType::uint32, "num-stdby-adj-leave"},
    rem_lbl_rq{YType::uint32, "rem-lbl-rq"},
    rem_lbl_wd{YType::uint32, "rem-lbl-wd"}
{
    yang_name = "steady-state-sync-info"; yang_parent_name = "ha-neighbor";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::~SteadyStateSyncInfo()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::has_data() const
{
    return num_cap_rcvd.is_set
	|| num_cap_sent.is_set
	|| num_stdby_adj_join.is_set
	|| num_stdby_adj_leave.is_set
	|| rem_lbl_rq.is_set
	|| rem_lbl_wd.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(num_cap_rcvd.operation)
	|| is_set(num_cap_sent.operation)
	|| is_set(num_stdby_adj_join.operation)
	|| is_set(num_stdby_adj_leave.operation)
	|| is_set(rem_lbl_rq.operation)
	|| is_set(rem_lbl_wd.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "steady-state-sync-info";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SteadyStateSyncInfo' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (num_cap_rcvd.is_set || is_set(num_cap_rcvd.operation)) leaf_name_data.push_back(num_cap_rcvd.get_name_leafdata());
    if (num_cap_sent.is_set || is_set(num_cap_sent.operation)) leaf_name_data.push_back(num_cap_sent.get_name_leafdata());
    if (num_stdby_adj_join.is_set || is_set(num_stdby_adj_join.operation)) leaf_name_data.push_back(num_stdby_adj_join.get_name_leafdata());
    if (num_stdby_adj_leave.is_set || is_set(num_stdby_adj_leave.operation)) leaf_name_data.push_back(num_stdby_adj_leave.get_name_leafdata());
    if (rem_lbl_rq.is_set || is_set(rem_lbl_rq.operation)) leaf_name_data.push_back(rem_lbl_rq.get_name_leafdata());
    if (rem_lbl_wd.is_set || is_set(rem_lbl_wd.operation)) leaf_name_data.push_back(rem_lbl_wd.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Issu::HaStatistics::HaNeighbors::HaNeighbor::SteadyStateSyncInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "num-cap-rcvd")
    {
        num_cap_rcvd = value;
    }
    if(value_path == "num-cap-sent")
    {
        num_cap_sent = value;
    }
    if(value_path == "num-stdby-adj-join")
    {
        num_stdby_adj_join = value;
    }
    if(value_path == "num-stdby-adj-leave")
    {
        num_stdby_adj_leave = value;
    }
    if(value_path == "rem-lbl-rq")
    {
        rem_lbl_rq = value;
    }
    if(value_path == "rem-lbl-wd")
    {
        rem_lbl_wd = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapabilities()
{
    yang_name = "neighbor-capabilities"; yang_parent_name = "vrf";
}

MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::~NeighborCapabilities()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::has_data() const
{
    for (std::size_t index=0; index<neighbor_capability.size(); index++)
    {
        if(neighbor_capability[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::has_operation() const
{
    for (std::size_t index=0; index<neighbor_capability.size(); index++)
    {
        if(neighbor_capability[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-capabilities";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborCapabilities' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-capability")
    {
        for(auto const & c : neighbor_capability)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability>();
        c->parent = this;
        neighbor_capability.push_back(std::move(c));
        children[segment_path] = neighbor_capability.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::get_children()
{
    for (auto const & c : neighbor_capability)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::NeighborCapability()
    :
    label_space_id{YType::uint32, "label-space-id"},
    lsr_id{YType::str, "lsr-id"}
{
    yang_name = "neighbor-capability"; yang_parent_name = "neighbor-capabilities";
}

MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::~NeighborCapability()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::has_data() const
{
    for (std::size_t index=0; index<received.size(); index++)
    {
        if(received[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sent.size(); index++)
    {
        if(sent[index]->has_data())
            return true;
    }
    return label_space_id.is_set
	|| lsr_id.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::has_operation() const
{
    for (std::size_t index=0; index<received.size(); index++)
    {
        if(received[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sent.size(); index++)
    {
        if(sent[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(label_space_id.operation)
	|| is_set(lsr_id.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-capability";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborCapability' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_space_id.is_set || is_set(label_space_id.operation)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.operation)) leaf_name_data.push_back(lsr_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "received")
    {
        for(auto const & c : received)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Received>();
        c->parent = this;
        received.push_back(std::move(c));
        children[segment_path] = received.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "sent")
    {
        for(auto const & c : sent)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Sent>();
        c->parent = this;
        sent.push_back(std::move(c));
        children[segment_path] = sent.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::get_children()
{
    for (auto const & c : received)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : sent)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-space-id")
    {
        label_space_id = value;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Sent::Sent()
    :
    capability_data{YType::str, "capability-data"},
    capability_data_length{YType::uint16, "capability-data-length"},
    description{YType::str, "description"},
    type{YType::uint16, "type"}
{
    yang_name = "sent"; yang_parent_name = "neighbor-capability";
}

MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Sent::~Sent()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Sent::has_data() const
{
    return capability_data.is_set
	|| capability_data_length.is_set
	|| description.is_set
	|| type.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Sent::has_operation() const
{
    return is_set(operation)
	|| is_set(capability_data.operation)
	|| is_set(capability_data_length.operation)
	|| is_set(description.operation)
	|| is_set(type.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Sent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sent";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Sent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sent' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capability_data.is_set || is_set(capability_data.operation)) leaf_name_data.push_back(capability_data.get_name_leafdata());
    if (capability_data_length.is_set || is_set(capability_data_length.operation)) leaf_name_data.push_back(capability_data_length.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Sent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Sent::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Sent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "capability-data")
    {
        capability_data = value;
    }
    if(value_path == "capability-data-length")
    {
        capability_data_length = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Received::Received()
    :
    capability_data{YType::str, "capability-data"},
    capability_data_length{YType::uint16, "capability-data-length"},
    description{YType::str, "description"},
    type{YType::uint16, "type"}
{
    yang_name = "received"; yang_parent_name = "neighbor-capability";
}

MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Received::~Received()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Received::has_data() const
{
    return capability_data.is_set
	|| capability_data_length.is_set
	|| description.is_set
	|| type.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Received::has_operation() const
{
    return is_set(operation)
	|| is_set(capability_data.operation)
	|| is_set(capability_data_length.operation)
	|| is_set(description.operation)
	|| is_set(type.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Received::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Received::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Received' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capability_data.is_set || is_set(capability_data.operation)) leaf_name_data.push_back(capability_data.get_name_leafdata());
    if (capability_data_length.is_set || is_set(capability_data_length.operation)) leaf_name_data.push_back(capability_data_length.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Received::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Received::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::NeighborCapabilities::NeighborCapability::Received::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "capability-data")
    {
        capability_data = value;
    }
    if(value_path == "capability-data-length")
    {
        capability_data_length = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbors()
{
    yang_name = "neighbors"; yang_parent_name = "vrf";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::~Neighbors()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbors' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(std::move(c));
        children[segment_path] = neighbor.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::get_children()
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

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::Neighbor()
    :
    label_space_id{YType::uint32, "label-space-id"},
    lsr_id{YType::str, "lsr-id"}
    	,
    detailed_information(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation>())
	,protocol_information(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation>())
	,tcp_information(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation>())
{
    detailed_information->parent = this;
    children["detailed-information"] = detailed_information;

    protocol_information->parent = this;
    children["protocol-information"] = protocol_information;

    tcp_information->parent = this;
    children["tcp-information"] = tcp_information;

    yang_name = "neighbor"; yang_parent_name = "neighbors";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::~Neighbor()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::has_data() const
{
    for (std::size_t index=0; index<ldp_nbr_bound_ipv4_address_info.size(); index++)
    {
        if(ldp_nbr_bound_ipv4_address_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ldp_nbr_bound_ipv6_address_info.size(); index++)
    {
        if(ldp_nbr_bound_ipv6_address_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ldp_nbr_ipv4_adj_info.size(); index++)
    {
        if(ldp_nbr_ipv4_adj_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ldp_nbr_ipv6_adj_info.size(); index++)
    {
        if(ldp_nbr_ipv6_adj_info[index]->has_data())
            return true;
    }
    return label_space_id.is_set
	|| lsr_id.is_set
	|| (detailed_information !=  nullptr && detailed_information->has_data())
	|| (protocol_information !=  nullptr && protocol_information->has_data())
	|| (tcp_information !=  nullptr && tcp_information->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::has_operation() const
{
    for (std::size_t index=0; index<ldp_nbr_bound_ipv4_address_info.size(); index++)
    {
        if(ldp_nbr_bound_ipv4_address_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ldp_nbr_bound_ipv6_address_info.size(); index++)
    {
        if(ldp_nbr_bound_ipv6_address_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ldp_nbr_ipv4_adj_info.size(); index++)
    {
        if(ldp_nbr_ipv4_adj_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ldp_nbr_ipv6_adj_info.size(); index++)
    {
        if(ldp_nbr_ipv6_adj_info[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(label_space_id.operation)
	|| is_set(lsr_id.operation)
	|| (detailed_information !=  nullptr && detailed_information->has_operation())
	|| (protocol_information !=  nullptr && protocol_information->has_operation())
	|| (tcp_information !=  nullptr && tcp_information->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_space_id.is_set || is_set(label_space_id.operation)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.operation)) leaf_name_data.push_back(lsr_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "detailed-information")
    {
        if(detailed_information != nullptr)
        {
            children["detailed-information"] = detailed_information;
        }
        else
        {
            detailed_information = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation>();
            detailed_information->parent = this;
            children["detailed-information"] = detailed_information;
        }
        return children.at("detailed-information");
    }

    if(child_yang_name == "ldp-nbr-bound-ipv4-address-info")
    {
        for(auto const & c : ldp_nbr_bound_ipv4_address_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo>();
        c->parent = this;
        ldp_nbr_bound_ipv4_address_info.push_back(std::move(c));
        children[segment_path] = ldp_nbr_bound_ipv4_address_info.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "ldp-nbr-bound-ipv6-address-info")
    {
        for(auto const & c : ldp_nbr_bound_ipv6_address_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo>();
        c->parent = this;
        ldp_nbr_bound_ipv6_address_info.push_back(std::move(c));
        children[segment_path] = ldp_nbr_bound_ipv6_address_info.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "ldp-nbr-ipv4-adj-info")
    {
        for(auto const & c : ldp_nbr_ipv4_adj_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo>();
        c->parent = this;
        ldp_nbr_ipv4_adj_info.push_back(std::move(c));
        children[segment_path] = ldp_nbr_ipv4_adj_info.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "ldp-nbr-ipv6-adj-info")
    {
        for(auto const & c : ldp_nbr_ipv6_adj_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo>();
        c->parent = this;
        ldp_nbr_ipv6_adj_info.push_back(std::move(c));
        children[segment_path] = ldp_nbr_ipv6_adj_info.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "protocol-information")
    {
        if(protocol_information != nullptr)
        {
            children["protocol-information"] = protocol_information;
        }
        else
        {
            protocol_information = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation>();
            protocol_information->parent = this;
            children["protocol-information"] = protocol_information;
        }
        return children.at("protocol-information");
    }

    if(child_yang_name == "tcp-information")
    {
        if(tcp_information != nullptr)
        {
            children["tcp-information"] = tcp_information;
        }
        else
        {
            tcp_information = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation>();
            tcp_information->parent = this;
            children["tcp-information"] = tcp_information;
        }
        return children.at("tcp-information");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::get_children()
{
    if(children.find("detailed-information") == children.end())
    {
        if(detailed_information != nullptr)
        {
            children["detailed-information"] = detailed_information;
        }
    }

    for (auto const & c : ldp_nbr_bound_ipv4_address_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : ldp_nbr_bound_ipv6_address_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : ldp_nbr_ipv4_adj_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : ldp_nbr_ipv6_adj_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("protocol-information") == children.end())
    {
        if(protocol_information != nullptr)
        {
            children["protocol-information"] = protocol_information;
        }
    }

    if(children.find("tcp-information") == children.end())
    {
        if(tcp_information != nullptr)
        {
            children["tcp-information"] = tcp_information;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-space-id")
    {
        label_space_id = value;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::ProtocolInformation()
    :
    downstream_on_demand{YType::boolean, "downstream-on-demand"},
    ta_holdtime{YType::uint32, "ta-holdtime"},
    ta_pies_rcvd{YType::uint32, "ta-pies-rcvd"},
    ta_pies_sent{YType::uint32, "ta-pies-sent"},
    ta_state{YType::str, "ta-state"},
    ta_up_time_seconds{YType::uint32, "ta-up-time-seconds"}
    	,
    ta_graceful_restart_adjacency(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency>())
{
    ta_graceful_restart_adjacency->parent = this;
    children["ta-graceful-restart-adjacency"] = ta_graceful_restart_adjacency;

    yang_name = "protocol-information"; yang_parent_name = "neighbor";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::~ProtocolInformation()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::has_data() const
{
    return downstream_on_demand.is_set
	|| ta_holdtime.is_set
	|| ta_pies_rcvd.is_set
	|| ta_pies_sent.is_set
	|| ta_state.is_set
	|| ta_up_time_seconds.is_set
	|| (ta_graceful_restart_adjacency !=  nullptr && ta_graceful_restart_adjacency->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(downstream_on_demand.operation)
	|| is_set(ta_holdtime.operation)
	|| is_set(ta_pies_rcvd.operation)
	|| is_set(ta_pies_sent.operation)
	|| is_set(ta_state.operation)
	|| is_set(ta_up_time_seconds.operation)
	|| (ta_graceful_restart_adjacency !=  nullptr && ta_graceful_restart_adjacency->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-information";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolInformation' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (downstream_on_demand.is_set || is_set(downstream_on_demand.operation)) leaf_name_data.push_back(downstream_on_demand.get_name_leafdata());
    if (ta_holdtime.is_set || is_set(ta_holdtime.operation)) leaf_name_data.push_back(ta_holdtime.get_name_leafdata());
    if (ta_pies_rcvd.is_set || is_set(ta_pies_rcvd.operation)) leaf_name_data.push_back(ta_pies_rcvd.get_name_leafdata());
    if (ta_pies_sent.is_set || is_set(ta_pies_sent.operation)) leaf_name_data.push_back(ta_pies_sent.get_name_leafdata());
    if (ta_state.is_set || is_set(ta_state.operation)) leaf_name_data.push_back(ta_state.get_name_leafdata());
    if (ta_up_time_seconds.is_set || is_set(ta_up_time_seconds.operation)) leaf_name_data.push_back(ta_up_time_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ta-graceful-restart-adjacency")
    {
        if(ta_graceful_restart_adjacency != nullptr)
        {
            children["ta-graceful-restart-adjacency"] = ta_graceful_restart_adjacency;
        }
        else
        {
            ta_graceful_restart_adjacency = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency>();
            ta_graceful_restart_adjacency->parent = this;
            children["ta-graceful-restart-adjacency"] = ta_graceful_restart_adjacency;
        }
        return children.at("ta-graceful-restart-adjacency");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::get_children()
{
    if(children.find("ta-graceful-restart-adjacency") == children.end())
    {
        if(ta_graceful_restart_adjacency != nullptr)
        {
            children["ta-graceful-restart-adjacency"] = ta_graceful_restart_adjacency;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "downstream-on-demand")
    {
        downstream_on_demand = value;
    }
    if(value_path == "ta-holdtime")
    {
        ta_holdtime = value;
    }
    if(value_path == "ta-pies-rcvd")
    {
        ta_pies_rcvd = value;
    }
    if(value_path == "ta-pies-sent")
    {
        ta_pies_sent = value;
    }
    if(value_path == "ta-state")
    {
        ta_state = value;
    }
    if(value_path == "ta-up-time-seconds")
    {
        ta_up_time_seconds = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency::TaGracefulRestartAdjacency()
    :
    is_graceful_restartable{YType::boolean, "is-graceful-restartable"},
    reconnect_timeout{YType::uint32, "reconnect-timeout"},
    recovery_time{YType::uint32, "recovery-time"}
{
    yang_name = "ta-graceful-restart-adjacency"; yang_parent_name = "protocol-information";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency::~TaGracefulRestartAdjacency()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency::has_data() const
{
    return is_graceful_restartable.is_set
	|| reconnect_timeout.is_set
	|| recovery_time.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency::has_operation() const
{
    return is_set(operation)
	|| is_set(is_graceful_restartable.operation)
	|| is_set(reconnect_timeout.operation)
	|| is_set(recovery_time.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ta-graceful-restart-adjacency";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TaGracefulRestartAdjacency' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_graceful_restartable.is_set || is_set(is_graceful_restartable.operation)) leaf_name_data.push_back(is_graceful_restartable.get_name_leafdata());
    if (reconnect_timeout.is_set || is_set(reconnect_timeout.operation)) leaf_name_data.push_back(reconnect_timeout.get_name_leafdata());
    if (recovery_time.is_set || is_set(recovery_time.operation)) leaf_name_data.push_back(recovery_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::ProtocolInformation::TaGracefulRestartAdjacency::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-graceful-restartable")
    {
        is_graceful_restartable = value;
    }
    if(value_path == "reconnect-timeout")
    {
        reconnect_timeout = value;
    }
    if(value_path == "recovery-time")
    {
        recovery_time = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::TcpInformation()
    :
    foreign_port{YType::uint16, "foreign-port"},
    is_md5_on{YType::boolean, "is-md5-on"},
    local_port{YType::uint16, "local-port"}
    	,
    foreign_host(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::ForeignHost>())
	,local_host(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::LocalHost>())
{
    foreign_host->parent = this;
    children["foreign-host"] = foreign_host;

    local_host->parent = this;
    children["local-host"] = local_host;

    yang_name = "tcp-information"; yang_parent_name = "neighbor";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::~TcpInformation()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::has_data() const
{
    return foreign_port.is_set
	|| is_md5_on.is_set
	|| local_port.is_set
	|| (foreign_host !=  nullptr && foreign_host->has_data())
	|| (local_host !=  nullptr && local_host->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(foreign_port.operation)
	|| is_set(is_md5_on.operation)
	|| is_set(local_port.operation)
	|| (foreign_host !=  nullptr && foreign_host->has_operation())
	|| (local_host !=  nullptr && local_host->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp-information";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TcpInformation' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (foreign_port.is_set || is_set(foreign_port.operation)) leaf_name_data.push_back(foreign_port.get_name_leafdata());
    if (is_md5_on.is_set || is_set(is_md5_on.operation)) leaf_name_data.push_back(is_md5_on.get_name_leafdata());
    if (local_port.is_set || is_set(local_port.operation)) leaf_name_data.push_back(local_port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "foreign-host")
    {
        if(foreign_host != nullptr)
        {
            children["foreign-host"] = foreign_host;
        }
        else
        {
            foreign_host = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::ForeignHost>();
            foreign_host->parent = this;
            children["foreign-host"] = foreign_host;
        }
        return children.at("foreign-host");
    }

    if(child_yang_name == "local-host")
    {
        if(local_host != nullptr)
        {
            children["local-host"] = local_host;
        }
        else
        {
            local_host = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::LocalHost>();
            local_host->parent = this;
            children["local-host"] = local_host;
        }
        return children.at("local-host");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::get_children()
{
    if(children.find("foreign-host") == children.end())
    {
        if(foreign_host != nullptr)
        {
            children["foreign-host"] = foreign_host;
        }
    }

    if(children.find("local-host") == children.end())
    {
        if(local_host != nullptr)
        {
            children["local-host"] = local_host;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "foreign-port")
    {
        foreign_port = value;
    }
    if(value_path == "is-md5-on")
    {
        is_md5_on = value;
    }
    if(value_path == "local-port")
    {
        local_port = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::ForeignHost::ForeignHost()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "foreign-host"; yang_parent_name = "tcp-information";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::ForeignHost::~ForeignHost()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::ForeignHost::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::ForeignHost::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::ForeignHost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "foreign-host";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::ForeignHost::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ForeignHost' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::ForeignHost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::ForeignHost::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::ForeignHost::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::LocalHost::LocalHost()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "local-host"; yang_parent_name = "tcp-information";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::LocalHost::~LocalHost()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::LocalHost::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::LocalHost::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::LocalHost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-host";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::LocalHost::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalHost' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::LocalHost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::LocalHost::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::TcpInformation::LocalHost::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::DetailedInformation()
    :
    advertise_bgp_prefixes{YType::boolean, "advertise-bgp-prefixes"},
    bgp_advertisement_state{YType::enumeration, "bgp-advertisement-state"},
    has_ipv4_inbound{YType::boolean, "has-ipv4-inbound"},
    has_ipv4_outbound{YType::boolean, "has-ipv4-outbound"},
    has_ipv6_inbound{YType::boolean, "has-ipv6-inbound"},
    has_ipv6_outbound{YType::boolean, "has-ipv6-outbound"},
    has_sp{YType::boolean, "has-sp"},
    inbound_ipv4acl{YType::str, "inbound-ipv4acl"},
    inbound_ipv6acl{YType::str, "inbound-ipv6acl"},
    keep_alive_interval{YType::uint32, "keep-alive-interval"},
    nsr_last_sync_error{YType::enumeration, "nsr-last-sync-error"},
    nsr_last_sync_nack_reason{YType::enumeration, "nsr-last-sync-nack-reason"},
    nsr_sync_state{YType::enumeration, "nsr-sync-state"},
    outbound_ipv4acl{YType::str, "outbound-ipv4acl"},
    outbound_ipv6acl{YType::str, "outbound-ipv6acl"},
    peer_holdtime{YType::uint32, "peer-holdtime"},
    peer_state{YType::str, "peer-state"},
    sp_duration{YType::uint32, "sp-duration"},
    sp_has_acl{YType::boolean, "sp-has-acl"},
    sp_has_duration{YType::boolean, "sp-has-duration"},
    sp_state{YType::str, "sp-state"},
    spacl{YType::str, "spacl"},
    spht_remaining{YType::uint32, "spht-remaining"},
    spht_running{YType::boolean, "spht-running"}
    	,
    capabilities(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities>())
{
    capabilities->parent = this;
    children["capabilities"] = capabilities;

    yang_name = "detailed-information"; yang_parent_name = "neighbor";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::~DetailedInformation()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::has_data() const
{
    for (std::size_t index=0; index<client.size(); index++)
    {
        if(client[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4_duplicate_address.size(); index++)
    {
        if(ipv4_duplicate_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6_duplicate_address.size(); index++)
    {
        if(ipv6_duplicate_address[index]->has_data())
            return true;
    }
    return advertise_bgp_prefixes.is_set
	|| bgp_advertisement_state.is_set
	|| has_ipv4_inbound.is_set
	|| has_ipv4_outbound.is_set
	|| has_ipv6_inbound.is_set
	|| has_ipv6_outbound.is_set
	|| has_sp.is_set
	|| inbound_ipv4acl.is_set
	|| inbound_ipv6acl.is_set
	|| keep_alive_interval.is_set
	|| nsr_last_sync_error.is_set
	|| nsr_last_sync_nack_reason.is_set
	|| nsr_sync_state.is_set
	|| outbound_ipv4acl.is_set
	|| outbound_ipv6acl.is_set
	|| peer_holdtime.is_set
	|| peer_state.is_set
	|| sp_duration.is_set
	|| sp_has_acl.is_set
	|| sp_has_duration.is_set
	|| sp_state.is_set
	|| spacl.is_set
	|| spht_remaining.is_set
	|| spht_running.is_set
	|| (capabilities !=  nullptr && capabilities->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::has_operation() const
{
    for (std::size_t index=0; index<client.size(); index++)
    {
        if(client[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4_duplicate_address.size(); index++)
    {
        if(ipv4_duplicate_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6_duplicate_address.size(); index++)
    {
        if(ipv6_duplicate_address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(advertise_bgp_prefixes.operation)
	|| is_set(bgp_advertisement_state.operation)
	|| is_set(has_ipv4_inbound.operation)
	|| is_set(has_ipv4_outbound.operation)
	|| is_set(has_ipv6_inbound.operation)
	|| is_set(has_ipv6_outbound.operation)
	|| is_set(has_sp.operation)
	|| is_set(inbound_ipv4acl.operation)
	|| is_set(inbound_ipv6acl.operation)
	|| is_set(keep_alive_interval.operation)
	|| is_set(nsr_last_sync_error.operation)
	|| is_set(nsr_last_sync_nack_reason.operation)
	|| is_set(nsr_sync_state.operation)
	|| is_set(outbound_ipv4acl.operation)
	|| is_set(outbound_ipv6acl.operation)
	|| is_set(peer_holdtime.operation)
	|| is_set(peer_state.operation)
	|| is_set(sp_duration.operation)
	|| is_set(sp_has_acl.operation)
	|| is_set(sp_has_duration.operation)
	|| is_set(sp_state.operation)
	|| is_set(spacl.operation)
	|| is_set(spht_remaining.operation)
	|| is_set(spht_running.operation)
	|| (capabilities !=  nullptr && capabilities->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detailed-information";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DetailedInformation' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advertise_bgp_prefixes.is_set || is_set(advertise_bgp_prefixes.operation)) leaf_name_data.push_back(advertise_bgp_prefixes.get_name_leafdata());
    if (bgp_advertisement_state.is_set || is_set(bgp_advertisement_state.operation)) leaf_name_data.push_back(bgp_advertisement_state.get_name_leafdata());
    if (has_ipv4_inbound.is_set || is_set(has_ipv4_inbound.operation)) leaf_name_data.push_back(has_ipv4_inbound.get_name_leafdata());
    if (has_ipv4_outbound.is_set || is_set(has_ipv4_outbound.operation)) leaf_name_data.push_back(has_ipv4_outbound.get_name_leafdata());
    if (has_ipv6_inbound.is_set || is_set(has_ipv6_inbound.operation)) leaf_name_data.push_back(has_ipv6_inbound.get_name_leafdata());
    if (has_ipv6_outbound.is_set || is_set(has_ipv6_outbound.operation)) leaf_name_data.push_back(has_ipv6_outbound.get_name_leafdata());
    if (has_sp.is_set || is_set(has_sp.operation)) leaf_name_data.push_back(has_sp.get_name_leafdata());
    if (inbound_ipv4acl.is_set || is_set(inbound_ipv4acl.operation)) leaf_name_data.push_back(inbound_ipv4acl.get_name_leafdata());
    if (inbound_ipv6acl.is_set || is_set(inbound_ipv6acl.operation)) leaf_name_data.push_back(inbound_ipv6acl.get_name_leafdata());
    if (keep_alive_interval.is_set || is_set(keep_alive_interval.operation)) leaf_name_data.push_back(keep_alive_interval.get_name_leafdata());
    if (nsr_last_sync_error.is_set || is_set(nsr_last_sync_error.operation)) leaf_name_data.push_back(nsr_last_sync_error.get_name_leafdata());
    if (nsr_last_sync_nack_reason.is_set || is_set(nsr_last_sync_nack_reason.operation)) leaf_name_data.push_back(nsr_last_sync_nack_reason.get_name_leafdata());
    if (nsr_sync_state.is_set || is_set(nsr_sync_state.operation)) leaf_name_data.push_back(nsr_sync_state.get_name_leafdata());
    if (outbound_ipv4acl.is_set || is_set(outbound_ipv4acl.operation)) leaf_name_data.push_back(outbound_ipv4acl.get_name_leafdata());
    if (outbound_ipv6acl.is_set || is_set(outbound_ipv6acl.operation)) leaf_name_data.push_back(outbound_ipv6acl.get_name_leafdata());
    if (peer_holdtime.is_set || is_set(peer_holdtime.operation)) leaf_name_data.push_back(peer_holdtime.get_name_leafdata());
    if (peer_state.is_set || is_set(peer_state.operation)) leaf_name_data.push_back(peer_state.get_name_leafdata());
    if (sp_duration.is_set || is_set(sp_duration.operation)) leaf_name_data.push_back(sp_duration.get_name_leafdata());
    if (sp_has_acl.is_set || is_set(sp_has_acl.operation)) leaf_name_data.push_back(sp_has_acl.get_name_leafdata());
    if (sp_has_duration.is_set || is_set(sp_has_duration.operation)) leaf_name_data.push_back(sp_has_duration.get_name_leafdata());
    if (sp_state.is_set || is_set(sp_state.operation)) leaf_name_data.push_back(sp_state.get_name_leafdata());
    if (spacl.is_set || is_set(spacl.operation)) leaf_name_data.push_back(spacl.get_name_leafdata());
    if (spht_remaining.is_set || is_set(spht_remaining.operation)) leaf_name_data.push_back(spht_remaining.get_name_leafdata());
    if (spht_running.is_set || is_set(spht_running.operation)) leaf_name_data.push_back(spht_running.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "capabilities")
    {
        if(capabilities != nullptr)
        {
            children["capabilities"] = capabilities;
        }
        else
        {
            capabilities = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities>();
            capabilities->parent = this;
            children["capabilities"] = capabilities;
        }
        return children.at("capabilities");
    }

    if(child_yang_name == "client")
    {
        for(auto const & c : client)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Client>();
        c->parent = this;
        client.push_back(std::move(c));
        children[segment_path] = client.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-duplicate-address")
    {
        for(auto const & c : ipv4_duplicate_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress>();
        c->parent = this;
        ipv4_duplicate_address.push_back(std::move(c));
        children[segment_path] = ipv4_duplicate_address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv6-duplicate-address")
    {
        for(auto const & c : ipv6_duplicate_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress>();
        c->parent = this;
        ipv6_duplicate_address.push_back(std::move(c));
        children[segment_path] = ipv6_duplicate_address.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::get_children()
{
    if(children.find("capabilities") == children.end())
    {
        if(capabilities != nullptr)
        {
            children["capabilities"] = capabilities;
        }
    }

    for (auto const & c : client)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : ipv4_duplicate_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : ipv6_duplicate_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advertise-bgp-prefixes")
    {
        advertise_bgp_prefixes = value;
    }
    if(value_path == "bgp-advertisement-state")
    {
        bgp_advertisement_state = value;
    }
    if(value_path == "has-ipv4-inbound")
    {
        has_ipv4_inbound = value;
    }
    if(value_path == "has-ipv4-outbound")
    {
        has_ipv4_outbound = value;
    }
    if(value_path == "has-ipv6-inbound")
    {
        has_ipv6_inbound = value;
    }
    if(value_path == "has-ipv6-outbound")
    {
        has_ipv6_outbound = value;
    }
    if(value_path == "has-sp")
    {
        has_sp = value;
    }
    if(value_path == "inbound-ipv4acl")
    {
        inbound_ipv4acl = value;
    }
    if(value_path == "inbound-ipv6acl")
    {
        inbound_ipv6acl = value;
    }
    if(value_path == "keep-alive-interval")
    {
        keep_alive_interval = value;
    }
    if(value_path == "nsr-last-sync-error")
    {
        nsr_last_sync_error = value;
    }
    if(value_path == "nsr-last-sync-nack-reason")
    {
        nsr_last_sync_nack_reason = value;
    }
    if(value_path == "nsr-sync-state")
    {
        nsr_sync_state = value;
    }
    if(value_path == "outbound-ipv4acl")
    {
        outbound_ipv4acl = value;
    }
    if(value_path == "outbound-ipv6acl")
    {
        outbound_ipv6acl = value;
    }
    if(value_path == "peer-holdtime")
    {
        peer_holdtime = value;
    }
    if(value_path == "peer-state")
    {
        peer_state = value;
    }
    if(value_path == "sp-duration")
    {
        sp_duration = value;
    }
    if(value_path == "sp-has-acl")
    {
        sp_has_acl = value;
    }
    if(value_path == "sp-has-duration")
    {
        sp_has_duration = value;
    }
    if(value_path == "sp-state")
    {
        sp_state = value;
    }
    if(value_path == "spacl")
    {
        spacl = value;
    }
    if(value_path == "spht-remaining")
    {
        spht_remaining = value;
    }
    if(value_path == "spht-running")
    {
        spht_running = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Capabilities()
{
    yang_name = "capabilities"; yang_parent_name = "detailed-information";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::~Capabilities()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::has_data() const
{
    for (std::size_t index=0; index<received.size(); index++)
    {
        if(received[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sent.size(); index++)
    {
        if(sent[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::has_operation() const
{
    for (std::size_t index=0; index<received.size(); index++)
    {
        if(received[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sent.size(); index++)
    {
        if(sent[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capabilities";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Capabilities' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "received")
    {
        for(auto const & c : received)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received>();
        c->parent = this;
        received.push_back(std::move(c));
        children[segment_path] = received.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "sent")
    {
        for(auto const & c : sent)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent>();
        c->parent = this;
        sent.push_back(std::move(c));
        children[segment_path] = sent.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::get_children()
{
    for (auto const & c : received)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : sent)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent::Sent()
    :
    capability_data{YType::str, "capability-data"},
    capability_data_length{YType::uint16, "capability-data-length"},
    description{YType::str, "description"},
    type{YType::uint16, "type"}
{
    yang_name = "sent"; yang_parent_name = "capabilities";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent::~Sent()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent::has_data() const
{
    return capability_data.is_set
	|| capability_data_length.is_set
	|| description.is_set
	|| type.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent::has_operation() const
{
    return is_set(operation)
	|| is_set(capability_data.operation)
	|| is_set(capability_data_length.operation)
	|| is_set(description.operation)
	|| is_set(type.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sent";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sent' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capability_data.is_set || is_set(capability_data.operation)) leaf_name_data.push_back(capability_data.get_name_leafdata());
    if (capability_data_length.is_set || is_set(capability_data_length.operation)) leaf_name_data.push_back(capability_data_length.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Sent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "capability-data")
    {
        capability_data = value;
    }
    if(value_path == "capability-data-length")
    {
        capability_data_length = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received::Received()
    :
    capability_data{YType::str, "capability-data"},
    capability_data_length{YType::uint16, "capability-data-length"},
    description{YType::str, "description"},
    type{YType::uint16, "type"}
{
    yang_name = "received"; yang_parent_name = "capabilities";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received::~Received()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received::has_data() const
{
    return capability_data.is_set
	|| capability_data_length.is_set
	|| description.is_set
	|| type.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received::has_operation() const
{
    return is_set(operation)
	|| is_set(capability_data.operation)
	|| is_set(capability_data_length.operation)
	|| is_set(description.operation)
	|| is_set(type.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Received' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capability_data.is_set || is_set(capability_data.operation)) leaf_name_data.push_back(capability_data.get_name_leafdata());
    if (capability_data_length.is_set || is_set(capability_data_length.operation)) leaf_name_data.push_back(capability_data_length.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Capabilities::Received::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "capability-data")
    {
        capability_data = value;
    }
    if(value_path == "capability-data-length")
    {
        capability_data_length = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Client::Client()
    :
    name{YType::str, "name"}
{
    yang_name = "client"; yang_parent_name = "detailed-information";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Client::~Client()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Client::has_data() const
{
    return name.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Client::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Client::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Client' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Client::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Client::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Ipv4DuplicateAddress()
    :
    address(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address>())
{
    address->parent = this;
    children["address"] = address;

    yang_name = "ipv4-duplicate-address"; yang_parent_name = "detailed-information";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::~Ipv4DuplicateAddress()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::has_operation() const
{
    return is_set(operation)
	|| (address !=  nullptr && address->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-duplicate-address";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4DuplicateAddress' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address")
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
        else
        {
            address = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address>();
            address->parent = this;
            children["address"] = address;
        }
        return children.at("address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::get_children()
{
    if(children.find("address") == children.end())
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address::Address()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "address"; yang_parent_name = "ipv4-duplicate-address";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address::~Address()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv4DuplicateAddress::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Ipv6DuplicateAddress()
    :
    address(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address>())
{
    address->parent = this;
    children["address"] = address;

    yang_name = "ipv6-duplicate-address"; yang_parent_name = "detailed-information";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::~Ipv6DuplicateAddress()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::has_operation() const
{
    return is_set(operation)
	|| (address !=  nullptr && address->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-duplicate-address";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6DuplicateAddress' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address")
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
        else
        {
            address = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address>();
            address->parent = this;
            children["address"] = address;
        }
        return children.at("address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::get_children()
{
    if(children.find("address") == children.end())
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address::Address()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "address"; yang_parent_name = "ipv6-duplicate-address";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address::~Address()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::DetailedInformation::Ipv6DuplicateAddress::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::LdpNbrBoundIpv4AddressInfo()
    :
    address(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address>())
{
    address->parent = this;
    children["address"] = address;

    yang_name = "ldp-nbr-bound-ipv4-address-info"; yang_parent_name = "neighbor";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::~LdpNbrBoundIpv4AddressInfo()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::has_operation() const
{
    return is_set(operation)
	|| (address !=  nullptr && address->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-nbr-bound-ipv4-address-info";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LdpNbrBoundIpv4AddressInfo' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address")
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
        else
        {
            address = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address>();
            address->parent = this;
            children["address"] = address;
        }
        return children.at("address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::get_children()
{
    if(children.find("address") == children.end())
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address::Address()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "address"; yang_parent_name = "ldp-nbr-bound-ipv4-address-info";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address::~Address()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv4AddressInfo::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::LdpNbrBoundIpv6AddressInfo()
    :
    address(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address>())
{
    address->parent = this;
    children["address"] = address;

    yang_name = "ldp-nbr-bound-ipv6-address-info"; yang_parent_name = "neighbor";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::~LdpNbrBoundIpv6AddressInfo()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::has_data() const
{
    return (address !=  nullptr && address->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::has_operation() const
{
    return is_set(operation)
	|| (address !=  nullptr && address->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-nbr-bound-ipv6-address-info";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LdpNbrBoundIpv6AddressInfo' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address")
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
        else
        {
            address = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address>();
            address->parent = this;
            children["address"] = address;
        }
        return children.at("address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::get_children()
{
    if(children.find("address") == children.end())
    {
        if(address != nullptr)
        {
            children["address"] = address;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address::Address()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "address"; yang_parent_name = "ldp-nbr-bound-ipv6-address-info";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address::~Address()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrBoundIpv6AddressInfo::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::LdpNbrIpv4AdjInfo()
    :
    adjacency_group(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup>())
{
    adjacency_group->parent = this;
    children["adjacency-group"] = adjacency_group;

    yang_name = "ldp-nbr-ipv4-adj-info"; yang_parent_name = "neighbor";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::~LdpNbrIpv4AdjInfo()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::has_data() const
{
    return (adjacency_group !=  nullptr && adjacency_group->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::has_operation() const
{
    return is_set(operation)
	|| (adjacency_group !=  nullptr && adjacency_group->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-nbr-ipv4-adj-info";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LdpNbrIpv4AdjInfo' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "adjacency-group")
    {
        if(adjacency_group != nullptr)
        {
            children["adjacency-group"] = adjacency_group;
        }
        else
        {
            adjacency_group = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup>();
            adjacency_group->parent = this;
            children["adjacency-group"] = adjacency_group;
        }
        return children.at("adjacency-group");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::get_children()
{
    if(children.find("adjacency-group") == children.end())
    {
        if(adjacency_group != nullptr)
        {
            children["adjacency-group"] = adjacency_group;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::AdjacencyGroup()
    :
    hello_type{YType::enumeration, "hello-type"}
    	,
    link_hello_data(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData>())
	,target_hello_data(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData>())
{
    link_hello_data->parent = this;
    children["link-hello-data"] = link_hello_data;

    target_hello_data->parent = this;
    children["target-hello-data"] = target_hello_data;

    yang_name = "adjacency-group"; yang_parent_name = "ldp-nbr-ipv4-adj-info";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::~AdjacencyGroup()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::has_data() const
{
    return hello_type.is_set
	|| (link_hello_data !=  nullptr && link_hello_data->has_data())
	|| (target_hello_data !=  nullptr && target_hello_data->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(hello_type.operation)
	|| (link_hello_data !=  nullptr && link_hello_data->has_operation())
	|| (target_hello_data !=  nullptr && target_hello_data->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-group";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjacencyGroup' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hello_type.is_set || is_set(hello_type.operation)) leaf_name_data.push_back(hello_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "link-hello-data")
    {
        if(link_hello_data != nullptr)
        {
            children["link-hello-data"] = link_hello_data;
        }
        else
        {
            link_hello_data = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData>();
            link_hello_data->parent = this;
            children["link-hello-data"] = link_hello_data;
        }
        return children.at("link-hello-data");
    }

    if(child_yang_name == "target-hello-data")
    {
        if(target_hello_data != nullptr)
        {
            children["target-hello-data"] = target_hello_data;
        }
        else
        {
            target_hello_data = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData>();
            target_hello_data->parent = this;
            children["target-hello-data"] = target_hello_data;
        }
        return children.at("target-hello-data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::get_children()
{
    if(children.find("link-hello-data") == children.end())
    {
        if(link_hello_data != nullptr)
        {
            children["link-hello-data"] = link_hello_data;
        }
    }

    if(children.find("target-hello-data") == children.end())
    {
        if(target_hello_data != nullptr)
        {
            children["target-hello-data"] = target_hello_data;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hello-type")
    {
        hello_type = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData::LinkHelloData()
    :
    interface{YType::str, "interface"},
    interface_name{YType::str, "interface-name"}
{
    yang_name = "link-hello-data"; yang_parent_name = "adjacency-group";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData::~LinkHelloData()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData::has_data() const
{
    return interface.is_set
	|| interface_name.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation)
	|| is_set(interface_name.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-hello-data";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkHelloData' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::LinkHelloData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetHelloData()
    :
    state{YType::enumeration, "state"}
    	,
    local_address(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress>())
	,target_address(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress>())
{
    local_address->parent = this;
    children["local-address"] = local_address;

    target_address->parent = this;
    children["target-address"] = target_address;

    yang_name = "target-hello-data"; yang_parent_name = "adjacency-group";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::~TargetHelloData()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::has_data() const
{
    return state.is_set
	|| (local_address !=  nullptr && local_address->has_data())
	|| (target_address !=  nullptr && target_address->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::has_operation() const
{
    return is_set(operation)
	|| is_set(state.operation)
	|| (local_address !=  nullptr && local_address->has_operation())
	|| (target_address !=  nullptr && target_address->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target-hello-data";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TargetHelloData' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "local-address")
    {
        if(local_address != nullptr)
        {
            children["local-address"] = local_address;
        }
        else
        {
            local_address = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress>();
            local_address->parent = this;
            children["local-address"] = local_address;
        }
        return children.at("local-address");
    }

    if(child_yang_name == "target-address")
    {
        if(target_address != nullptr)
        {
            children["target-address"] = target_address;
        }
        else
        {
            target_address = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress>();
            target_address->parent = this;
            children["target-address"] = target_address;
        }
        return children.at("target-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::get_children()
{
    if(children.find("local-address") == children.end())
    {
        if(local_address != nullptr)
        {
            children["local-address"] = local_address;
        }
    }

    if(children.find("target-address") == children.end())
    {
        if(target_address != nullptr)
        {
            children["target-address"] = target_address;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "state")
    {
        state = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::LocalAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "local-address"; yang_parent_name = "target-hello-data";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::~LocalAddress()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-address";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalAddress' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::TargetAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "target-address"; yang_parent_name = "target-hello-data";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::~TargetAddress()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target-address";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TargetAddress' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv4AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::LdpNbrIpv6AdjInfo()
    :
    adjacency_group(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup>())
{
    adjacency_group->parent = this;
    children["adjacency-group"] = adjacency_group;

    yang_name = "ldp-nbr-ipv6-adj-info"; yang_parent_name = "neighbor";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::~LdpNbrIpv6AdjInfo()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::has_data() const
{
    return (adjacency_group !=  nullptr && adjacency_group->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::has_operation() const
{
    return is_set(operation)
	|| (adjacency_group !=  nullptr && adjacency_group->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-nbr-ipv6-adj-info";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LdpNbrIpv6AdjInfo' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "adjacency-group")
    {
        if(adjacency_group != nullptr)
        {
            children["adjacency-group"] = adjacency_group;
        }
        else
        {
            adjacency_group = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup>();
            adjacency_group->parent = this;
            children["adjacency-group"] = adjacency_group;
        }
        return children.at("adjacency-group");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::get_children()
{
    if(children.find("adjacency-group") == children.end())
    {
        if(adjacency_group != nullptr)
        {
            children["adjacency-group"] = adjacency_group;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::AdjacencyGroup()
    :
    hello_type{YType::enumeration, "hello-type"}
    	,
    link_hello_data(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData>())
	,target_hello_data(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData>())
{
    link_hello_data->parent = this;
    children["link-hello-data"] = link_hello_data;

    target_hello_data->parent = this;
    children["target-hello-data"] = target_hello_data;

    yang_name = "adjacency-group"; yang_parent_name = "ldp-nbr-ipv6-adj-info";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::~AdjacencyGroup()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::has_data() const
{
    return hello_type.is_set
	|| (link_hello_data !=  nullptr && link_hello_data->has_data())
	|| (target_hello_data !=  nullptr && target_hello_data->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(hello_type.operation)
	|| (link_hello_data !=  nullptr && link_hello_data->has_operation())
	|| (target_hello_data !=  nullptr && target_hello_data->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-group";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjacencyGroup' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hello_type.is_set || is_set(hello_type.operation)) leaf_name_data.push_back(hello_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "link-hello-data")
    {
        if(link_hello_data != nullptr)
        {
            children["link-hello-data"] = link_hello_data;
        }
        else
        {
            link_hello_data = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData>();
            link_hello_data->parent = this;
            children["link-hello-data"] = link_hello_data;
        }
        return children.at("link-hello-data");
    }

    if(child_yang_name == "target-hello-data")
    {
        if(target_hello_data != nullptr)
        {
            children["target-hello-data"] = target_hello_data;
        }
        else
        {
            target_hello_data = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData>();
            target_hello_data->parent = this;
            children["target-hello-data"] = target_hello_data;
        }
        return children.at("target-hello-data");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::get_children()
{
    if(children.find("link-hello-data") == children.end())
    {
        if(link_hello_data != nullptr)
        {
            children["link-hello-data"] = link_hello_data;
        }
    }

    if(children.find("target-hello-data") == children.end())
    {
        if(target_hello_data != nullptr)
        {
            children["target-hello-data"] = target_hello_data;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hello-type")
    {
        hello_type = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData::LinkHelloData()
    :
    interface{YType::str, "interface"},
    interface_name{YType::str, "interface-name"}
{
    yang_name = "link-hello-data"; yang_parent_name = "adjacency-group";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData::~LinkHelloData()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData::has_data() const
{
    return interface.is_set
	|| interface_name.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation)
	|| is_set(interface_name.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-hello-data";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkHelloData' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::LinkHelloData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetHelloData()
    :
    state{YType::enumeration, "state"}
    	,
    local_address(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress>())
	,target_address(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress>())
{
    local_address->parent = this;
    children["local-address"] = local_address;

    target_address->parent = this;
    children["target-address"] = target_address;

    yang_name = "target-hello-data"; yang_parent_name = "adjacency-group";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::~TargetHelloData()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::has_data() const
{
    return state.is_set
	|| (local_address !=  nullptr && local_address->has_data())
	|| (target_address !=  nullptr && target_address->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::has_operation() const
{
    return is_set(operation)
	|| is_set(state.operation)
	|| (local_address !=  nullptr && local_address->has_operation())
	|| (target_address !=  nullptr && target_address->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target-hello-data";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TargetHelloData' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "local-address")
    {
        if(local_address != nullptr)
        {
            children["local-address"] = local_address;
        }
        else
        {
            local_address = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress>();
            local_address->parent = this;
            children["local-address"] = local_address;
        }
        return children.at("local-address");
    }

    if(child_yang_name == "target-address")
    {
        if(target_address != nullptr)
        {
            children["target-address"] = target_address;
        }
        else
        {
            target_address = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress>();
            target_address->parent = this;
            children["target-address"] = target_address;
        }
        return children.at("target-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::get_children()
{
    if(children.find("local-address") == children.end())
    {
        if(local_address != nullptr)
        {
            children["local-address"] = local_address;
        }
    }

    if(children.find("target-address") == children.end())
    {
        if(target_address != nullptr)
        {
            children["target-address"] = target_address;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "state")
    {
        state = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::LocalAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "local-address"; yang_parent_name = "target-hello-data";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::~LocalAddress()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-address";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalAddress' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::LocalAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::TargetAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "target-address"; yang_parent_name = "target-hello-data";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::~TargetAddress()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "target-address";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TargetAddress' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Neighbors::Neighbor::LdpNbrIpv6AdjInfo::AdjacencyGroup::TargetHelloData::TargetAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::LdpId::LdpId()
    :
    label_space_id{YType::uint16, "label-space-id"},
    ldp_id{YType::str, "ldp-id"},
    lsr_id{YType::str, "lsr-id"}
{
    yang_name = "ldp-id"; yang_parent_name = "vrf";
}

MplsLdp::Global::Standby::Vrfs::Vrf::LdpId::~LdpId()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::LdpId::has_data() const
{
    return label_space_id.is_set
	|| ldp_id.is_set
	|| lsr_id.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::LdpId::has_operation() const
{
    return is_set(operation)
	|| is_set(label_space_id.operation)
	|| is_set(ldp_id.operation)
	|| is_set(lsr_id.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::LdpId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-id";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::LdpId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LdpId' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_space_id.is_set || is_set(label_space_id.operation)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (ldp_id.is_set || is_set(ldp_id.operation)) leaf_name_data.push_back(ldp_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.operation)) leaf_name_data.push_back(lsr_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::LdpId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::LdpId::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::LdpId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-space-id")
    {
        label_space_id = value;
    }
    if(value_path == "ldp-id")
    {
        ldp_id = value;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistics()
{
    yang_name = "statistics"; yang_parent_name = "vrf";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::~Statistics()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::has_data() const
{
    for (std::size_t index=0; index<statistic.size(); index++)
    {
        if(statistic[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::has_operation() const
{
    for (std::size_t index=0; index<statistic.size(); index++)
    {
        if(statistic[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "statistic")
    {
        for(auto const & c : statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic>();
        c->parent = this;
        statistic.push_back(std::move(c));
        children[segment_path] = statistic.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::get_children()
{
    for (auto const & c : statistic)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::Statistic()
    :
    iccp_enabled{YType::boolean, "iccp-enabled"},
    label_space_id{YType::uint32, "label-space-id"},
    lsr_id{YType::str, "lsr-id"}
    	,
    message_in(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageIn>())
	,message_out(std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageOut>())
{
    message_in->parent = this;
    children["message-in"] = message_in;

    message_out->parent = this;
    children["message-out"] = message_out;

    yang_name = "statistic"; yang_parent_name = "statistics";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::~Statistic()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::has_data() const
{
    return iccp_enabled.is_set
	|| label_space_id.is_set
	|| lsr_id.is_set
	|| (message_in !=  nullptr && message_in->has_data())
	|| (message_out !=  nullptr && message_out->has_data());
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::has_operation() const
{
    return is_set(operation)
	|| is_set(iccp_enabled.operation)
	|| is_set(label_space_id.operation)
	|| is_set(lsr_id.operation)
	|| (message_in !=  nullptr && message_in->has_operation())
	|| (message_out !=  nullptr && message_out->has_operation());
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistic";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistic' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iccp_enabled.is_set || is_set(iccp_enabled.operation)) leaf_name_data.push_back(iccp_enabled.get_name_leafdata());
    if (label_space_id.is_set || is_set(label_space_id.operation)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.operation)) leaf_name_data.push_back(lsr_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "message-in")
    {
        if(message_in != nullptr)
        {
            children["message-in"] = message_in;
        }
        else
        {
            message_in = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageIn>();
            message_in->parent = this;
            children["message-in"] = message_in;
        }
        return children.at("message-in");
    }

    if(child_yang_name == "message-out")
    {
        if(message_out != nullptr)
        {
            children["message-out"] = message_out;
        }
        else
        {
            message_out = std::make_shared<MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageOut>();
            message_out->parent = this;
            children["message-out"] = message_out;
        }
        return children.at("message-out");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::get_children()
{
    if(children.find("message-in") == children.end())
    {
        if(message_in != nullptr)
        {
            children["message-in"] = message_in;
        }
    }

    if(children.find("message-out") == children.end())
    {
        if(message_out != nullptr)
        {
            children["message-out"] = message_out;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "iccp-enabled")
    {
        iccp_enabled = value;
    }
    if(value_path == "label-space-id")
    {
        label_space_id = value;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageOut::MessageOut()
    :
    address_count{YType::uint32, "address-count"},
    address_withdraw_count{YType::uint32, "address-withdraw-count"},
    iccp_rg_app_data_count{YType::uint32, "iccp-rg-app-data-count"},
    iccp_rg_conn_count{YType::uint32, "iccp-rg-conn-count"},
    iccp_rg_disconn_count{YType::uint32, "iccp-rg-disconn-count"},
    iccp_rg_notif_count{YType::uint32, "iccp-rg-notif-count"},
    init_count{YType::uint32, "init-count"},
    keep_alive_count{YType::uint32, "keep-alive-count"},
    label_abort_request_count{YType::uint32, "label-abort-request-count"},
    label_map_count{YType::uint32, "label-map-count"},
    label_release_count{YType::uint32, "label-release-count"},
    label_request_count{YType::uint32, "label-request-count"},
    label_withdraw_count{YType::uint32, "label-withdraw-count"},
    notification_count{YType::uint32, "notification-count"},
    total_count{YType::uint32, "total-count"}
{
    yang_name = "message-out"; yang_parent_name = "statistic";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageOut::~MessageOut()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageOut::has_data() const
{
    return address_count.is_set
	|| address_withdraw_count.is_set
	|| iccp_rg_app_data_count.is_set
	|| iccp_rg_conn_count.is_set
	|| iccp_rg_disconn_count.is_set
	|| iccp_rg_notif_count.is_set
	|| init_count.is_set
	|| keep_alive_count.is_set
	|| label_abort_request_count.is_set
	|| label_map_count.is_set
	|| label_release_count.is_set
	|| label_request_count.is_set
	|| label_withdraw_count.is_set
	|| notification_count.is_set
	|| total_count.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageOut::has_operation() const
{
    return is_set(operation)
	|| is_set(address_count.operation)
	|| is_set(address_withdraw_count.operation)
	|| is_set(iccp_rg_app_data_count.operation)
	|| is_set(iccp_rg_conn_count.operation)
	|| is_set(iccp_rg_disconn_count.operation)
	|| is_set(iccp_rg_notif_count.operation)
	|| is_set(init_count.operation)
	|| is_set(keep_alive_count.operation)
	|| is_set(label_abort_request_count.operation)
	|| is_set(label_map_count.operation)
	|| is_set(label_release_count.operation)
	|| is_set(label_request_count.operation)
	|| is_set(label_withdraw_count.operation)
	|| is_set(notification_count.operation)
	|| is_set(total_count.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-out";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageOut::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MessageOut' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_count.is_set || is_set(address_count.operation)) leaf_name_data.push_back(address_count.get_name_leafdata());
    if (address_withdraw_count.is_set || is_set(address_withdraw_count.operation)) leaf_name_data.push_back(address_withdraw_count.get_name_leafdata());
    if (iccp_rg_app_data_count.is_set || is_set(iccp_rg_app_data_count.operation)) leaf_name_data.push_back(iccp_rg_app_data_count.get_name_leafdata());
    if (iccp_rg_conn_count.is_set || is_set(iccp_rg_conn_count.operation)) leaf_name_data.push_back(iccp_rg_conn_count.get_name_leafdata());
    if (iccp_rg_disconn_count.is_set || is_set(iccp_rg_disconn_count.operation)) leaf_name_data.push_back(iccp_rg_disconn_count.get_name_leafdata());
    if (iccp_rg_notif_count.is_set || is_set(iccp_rg_notif_count.operation)) leaf_name_data.push_back(iccp_rg_notif_count.get_name_leafdata());
    if (init_count.is_set || is_set(init_count.operation)) leaf_name_data.push_back(init_count.get_name_leafdata());
    if (keep_alive_count.is_set || is_set(keep_alive_count.operation)) leaf_name_data.push_back(keep_alive_count.get_name_leafdata());
    if (label_abort_request_count.is_set || is_set(label_abort_request_count.operation)) leaf_name_data.push_back(label_abort_request_count.get_name_leafdata());
    if (label_map_count.is_set || is_set(label_map_count.operation)) leaf_name_data.push_back(label_map_count.get_name_leafdata());
    if (label_release_count.is_set || is_set(label_release_count.operation)) leaf_name_data.push_back(label_release_count.get_name_leafdata());
    if (label_request_count.is_set || is_set(label_request_count.operation)) leaf_name_data.push_back(label_request_count.get_name_leafdata());
    if (label_withdraw_count.is_set || is_set(label_withdraw_count.operation)) leaf_name_data.push_back(label_withdraw_count.get_name_leafdata());
    if (notification_count.is_set || is_set(notification_count.operation)) leaf_name_data.push_back(notification_count.get_name_leafdata());
    if (total_count.is_set || is_set(total_count.operation)) leaf_name_data.push_back(total_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageOut::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageOut::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-count")
    {
        address_count = value;
    }
    if(value_path == "address-withdraw-count")
    {
        address_withdraw_count = value;
    }
    if(value_path == "iccp-rg-app-data-count")
    {
        iccp_rg_app_data_count = value;
    }
    if(value_path == "iccp-rg-conn-count")
    {
        iccp_rg_conn_count = value;
    }
    if(value_path == "iccp-rg-disconn-count")
    {
        iccp_rg_disconn_count = value;
    }
    if(value_path == "iccp-rg-notif-count")
    {
        iccp_rg_notif_count = value;
    }
    if(value_path == "init-count")
    {
        init_count = value;
    }
    if(value_path == "keep-alive-count")
    {
        keep_alive_count = value;
    }
    if(value_path == "label-abort-request-count")
    {
        label_abort_request_count = value;
    }
    if(value_path == "label-map-count")
    {
        label_map_count = value;
    }
    if(value_path == "label-release-count")
    {
        label_release_count = value;
    }
    if(value_path == "label-request-count")
    {
        label_request_count = value;
    }
    if(value_path == "label-withdraw-count")
    {
        label_withdraw_count = value;
    }
    if(value_path == "notification-count")
    {
        notification_count = value;
    }
    if(value_path == "total-count")
    {
        total_count = value;
    }
}

MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageIn::MessageIn()
    :
    address_count{YType::uint32, "address-count"},
    address_withdraw_count{YType::uint32, "address-withdraw-count"},
    iccp_rg_app_data_count{YType::uint32, "iccp-rg-app-data-count"},
    iccp_rg_conn_count{YType::uint32, "iccp-rg-conn-count"},
    iccp_rg_disconn_count{YType::uint32, "iccp-rg-disconn-count"},
    iccp_rg_notif_count{YType::uint32, "iccp-rg-notif-count"},
    init_count{YType::uint32, "init-count"},
    keep_alive_count{YType::uint32, "keep-alive-count"},
    label_abort_request_count{YType::uint32, "label-abort-request-count"},
    label_map_count{YType::uint32, "label-map-count"},
    label_release_count{YType::uint32, "label-release-count"},
    label_request_count{YType::uint32, "label-request-count"},
    label_withdraw_count{YType::uint32, "label-withdraw-count"},
    notification_count{YType::uint32, "notification-count"},
    total_count{YType::uint32, "total-count"}
{
    yang_name = "message-in"; yang_parent_name = "statistic";
}

MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageIn::~MessageIn()
{
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageIn::has_data() const
{
    return address_count.is_set
	|| address_withdraw_count.is_set
	|| iccp_rg_app_data_count.is_set
	|| iccp_rg_conn_count.is_set
	|| iccp_rg_disconn_count.is_set
	|| iccp_rg_notif_count.is_set
	|| init_count.is_set
	|| keep_alive_count.is_set
	|| label_abort_request_count.is_set
	|| label_map_count.is_set
	|| label_release_count.is_set
	|| label_request_count.is_set
	|| label_withdraw_count.is_set
	|| notification_count.is_set
	|| total_count.is_set;
}

bool MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageIn::has_operation() const
{
    return is_set(operation)
	|| is_set(address_count.operation)
	|| is_set(address_withdraw_count.operation)
	|| is_set(iccp_rg_app_data_count.operation)
	|| is_set(iccp_rg_conn_count.operation)
	|| is_set(iccp_rg_disconn_count.operation)
	|| is_set(iccp_rg_notif_count.operation)
	|| is_set(init_count.operation)
	|| is_set(keep_alive_count.operation)
	|| is_set(label_abort_request_count.operation)
	|| is_set(label_map_count.operation)
	|| is_set(label_release_count.operation)
	|| is_set(label_request_count.operation)
	|| is_set(label_withdraw_count.operation)
	|| is_set(notification_count.operation)
	|| is_set(total_count.operation);
}

std::string MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-in";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageIn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MessageIn' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_count.is_set || is_set(address_count.operation)) leaf_name_data.push_back(address_count.get_name_leafdata());
    if (address_withdraw_count.is_set || is_set(address_withdraw_count.operation)) leaf_name_data.push_back(address_withdraw_count.get_name_leafdata());
    if (iccp_rg_app_data_count.is_set || is_set(iccp_rg_app_data_count.operation)) leaf_name_data.push_back(iccp_rg_app_data_count.get_name_leafdata());
    if (iccp_rg_conn_count.is_set || is_set(iccp_rg_conn_count.operation)) leaf_name_data.push_back(iccp_rg_conn_count.get_name_leafdata());
    if (iccp_rg_disconn_count.is_set || is_set(iccp_rg_disconn_count.operation)) leaf_name_data.push_back(iccp_rg_disconn_count.get_name_leafdata());
    if (iccp_rg_notif_count.is_set || is_set(iccp_rg_notif_count.operation)) leaf_name_data.push_back(iccp_rg_notif_count.get_name_leafdata());
    if (init_count.is_set || is_set(init_count.operation)) leaf_name_data.push_back(init_count.get_name_leafdata());
    if (keep_alive_count.is_set || is_set(keep_alive_count.operation)) leaf_name_data.push_back(keep_alive_count.get_name_leafdata());
    if (label_abort_request_count.is_set || is_set(label_abort_request_count.operation)) leaf_name_data.push_back(label_abort_request_count.get_name_leafdata());
    if (label_map_count.is_set || is_set(label_map_count.operation)) leaf_name_data.push_back(label_map_count.get_name_leafdata());
    if (label_release_count.is_set || is_set(label_release_count.operation)) leaf_name_data.push_back(label_release_count.get_name_leafdata());
    if (label_request_count.is_set || is_set(label_request_count.operation)) leaf_name_data.push_back(label_request_count.get_name_leafdata());
    if (label_withdraw_count.is_set || is_set(label_withdraw_count.operation)) leaf_name_data.push_back(label_withdraw_count.get_name_leafdata());
    if (notification_count.is_set || is_set(notification_count.operation)) leaf_name_data.push_back(notification_count.get_name_leafdata());
    if (total_count.is_set || is_set(total_count.operation)) leaf_name_data.push_back(total_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageIn::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::Vrfs::Vrf::Statistics::Statistic::MessageIn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-count")
    {
        address_count = value;
    }
    if(value_path == "address-withdraw-count")
    {
        address_withdraw_count = value;
    }
    if(value_path == "iccp-rg-app-data-count")
    {
        iccp_rg_app_data_count = value;
    }
    if(value_path == "iccp-rg-conn-count")
    {
        iccp_rg_conn_count = value;
    }
    if(value_path == "iccp-rg-disconn-count")
    {
        iccp_rg_disconn_count = value;
    }
    if(value_path == "iccp-rg-notif-count")
    {
        iccp_rg_notif_count = value;
    }
    if(value_path == "init-count")
    {
        init_count = value;
    }
    if(value_path == "keep-alive-count")
    {
        keep_alive_count = value;
    }
    if(value_path == "label-abort-request-count")
    {
        label_abort_request_count = value;
    }
    if(value_path == "label-map-count")
    {
        label_map_count = value;
    }
    if(value_path == "label-release-count")
    {
        label_release_count = value;
    }
    if(value_path == "label-request-count")
    {
        label_request_count = value;
    }
    if(value_path == "label-withdraw-count")
    {
        label_withdraw_count = value;
    }
    if(value_path == "notification-count")
    {
        notification_count = value;
    }
    if(value_path == "total-count")
    {
        total_count = value;
    }
}

MplsLdp::Global::Standby::DiscoverySummaryAll::DiscoverySummaryAll()
    :
    local_ldp_id{YType::str, "local-ldp-id"},
    num_of_active_ldp_interfaces{YType::uint32, "num-of-active-ldp-interfaces"},
    num_of_disc_with_bad_addr_recv{YType::uint32, "num-of-disc-with-bad-addr-recv"},
    num_of_disc_with_bad_hello_pdu{YType::uint32, "num-of-disc-with-bad-hello-pdu"},
    num_of_disc_with_bad_xport_addr{YType::uint32, "num-of-disc-with-bad-xport-addr"},
    num_of_disc_with_same_router_id{YType::uint32, "num-of-disc-with-same-router-id"},
    num_of_disc_with_wrong_router_id{YType::uint32, "num-of-disc-with-wrong-router-id"},
    num_of_ldp_interfaces{YType::uint32, "num-of-ldp-interfaces"},
    num_of_lnk_disc_recv{YType::uint32, "num-of-lnk-disc-recv"},
    num_of_lnk_disc_xmit{YType::uint32, "num-of-lnk-disc-xmit"},
    num_of_tgt_disc_recv{YType::uint32, "num-of-tgt-disc-recv"},
    num_of_tgt_disc_xmit{YType::uint32, "num-of-tgt-disc-xmit"}
    	,
    vrf(std::make_shared<MplsLdp::Global::Standby::DiscoverySummaryAll::Vrf>())
{
    vrf->parent = this;
    children["vrf"] = vrf;

    yang_name = "discovery-summary-all"; yang_parent_name = "standby";
}

MplsLdp::Global::Standby::DiscoverySummaryAll::~DiscoverySummaryAll()
{
}

bool MplsLdp::Global::Standby::DiscoverySummaryAll::has_data() const
{
    return local_ldp_id.is_set
	|| num_of_active_ldp_interfaces.is_set
	|| num_of_disc_with_bad_addr_recv.is_set
	|| num_of_disc_with_bad_hello_pdu.is_set
	|| num_of_disc_with_bad_xport_addr.is_set
	|| num_of_disc_with_same_router_id.is_set
	|| num_of_disc_with_wrong_router_id.is_set
	|| num_of_ldp_interfaces.is_set
	|| num_of_lnk_disc_recv.is_set
	|| num_of_lnk_disc_xmit.is_set
	|| num_of_tgt_disc_recv.is_set
	|| num_of_tgt_disc_xmit.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Standby::DiscoverySummaryAll::has_operation() const
{
    return is_set(operation)
	|| is_set(local_ldp_id.operation)
	|| is_set(num_of_active_ldp_interfaces.operation)
	|| is_set(num_of_disc_with_bad_addr_recv.operation)
	|| is_set(num_of_disc_with_bad_hello_pdu.operation)
	|| is_set(num_of_disc_with_bad_xport_addr.operation)
	|| is_set(num_of_disc_with_same_router_id.operation)
	|| is_set(num_of_disc_with_wrong_router_id.operation)
	|| is_set(num_of_ldp_interfaces.operation)
	|| is_set(num_of_lnk_disc_recv.operation)
	|| is_set(num_of_lnk_disc_xmit.operation)
	|| is_set(num_of_tgt_disc_recv.operation)
	|| is_set(num_of_tgt_disc_xmit.operation)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Standby::DiscoverySummaryAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery-summary-all";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DiscoverySummaryAll::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_ldp_id.is_set || is_set(local_ldp_id.operation)) leaf_name_data.push_back(local_ldp_id.get_name_leafdata());
    if (num_of_active_ldp_interfaces.is_set || is_set(num_of_active_ldp_interfaces.operation)) leaf_name_data.push_back(num_of_active_ldp_interfaces.get_name_leafdata());
    if (num_of_disc_with_bad_addr_recv.is_set || is_set(num_of_disc_with_bad_addr_recv.operation)) leaf_name_data.push_back(num_of_disc_with_bad_addr_recv.get_name_leafdata());
    if (num_of_disc_with_bad_hello_pdu.is_set || is_set(num_of_disc_with_bad_hello_pdu.operation)) leaf_name_data.push_back(num_of_disc_with_bad_hello_pdu.get_name_leafdata());
    if (num_of_disc_with_bad_xport_addr.is_set || is_set(num_of_disc_with_bad_xport_addr.operation)) leaf_name_data.push_back(num_of_disc_with_bad_xport_addr.get_name_leafdata());
    if (num_of_disc_with_same_router_id.is_set || is_set(num_of_disc_with_same_router_id.operation)) leaf_name_data.push_back(num_of_disc_with_same_router_id.get_name_leafdata());
    if (num_of_disc_with_wrong_router_id.is_set || is_set(num_of_disc_with_wrong_router_id.operation)) leaf_name_data.push_back(num_of_disc_with_wrong_router_id.get_name_leafdata());
    if (num_of_ldp_interfaces.is_set || is_set(num_of_ldp_interfaces.operation)) leaf_name_data.push_back(num_of_ldp_interfaces.get_name_leafdata());
    if (num_of_lnk_disc_recv.is_set || is_set(num_of_lnk_disc_recv.operation)) leaf_name_data.push_back(num_of_lnk_disc_recv.get_name_leafdata());
    if (num_of_lnk_disc_xmit.is_set || is_set(num_of_lnk_disc_xmit.operation)) leaf_name_data.push_back(num_of_lnk_disc_xmit.get_name_leafdata());
    if (num_of_tgt_disc_recv.is_set || is_set(num_of_tgt_disc_recv.operation)) leaf_name_data.push_back(num_of_tgt_disc_recv.get_name_leafdata());
    if (num_of_tgt_disc_xmit.is_set || is_set(num_of_tgt_disc_xmit.operation)) leaf_name_data.push_back(num_of_tgt_disc_xmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DiscoverySummaryAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
        else
        {
            vrf = std::make_shared<MplsLdp::Global::Standby::DiscoverySummaryAll::Vrf>();
            vrf->parent = this;
            children["vrf"] = vrf;
        }
        return children.at("vrf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DiscoverySummaryAll::get_children()
{
    if(children.find("vrf") == children.end())
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
    }

    return children;
}

void MplsLdp::Global::Standby::DiscoverySummaryAll::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-ldp-id")
    {
        local_ldp_id = value;
    }
    if(value_path == "num-of-active-ldp-interfaces")
    {
        num_of_active_ldp_interfaces = value;
    }
    if(value_path == "num-of-disc-with-bad-addr-recv")
    {
        num_of_disc_with_bad_addr_recv = value;
    }
    if(value_path == "num-of-disc-with-bad-hello-pdu")
    {
        num_of_disc_with_bad_hello_pdu = value;
    }
    if(value_path == "num-of-disc-with-bad-xport-addr")
    {
        num_of_disc_with_bad_xport_addr = value;
    }
    if(value_path == "num-of-disc-with-same-router-id")
    {
        num_of_disc_with_same_router_id = value;
    }
    if(value_path == "num-of-disc-with-wrong-router-id")
    {
        num_of_disc_with_wrong_router_id = value;
    }
    if(value_path == "num-of-ldp-interfaces")
    {
        num_of_ldp_interfaces = value;
    }
    if(value_path == "num-of-lnk-disc-recv")
    {
        num_of_lnk_disc_recv = value;
    }
    if(value_path == "num-of-lnk-disc-xmit")
    {
        num_of_lnk_disc_xmit = value;
    }
    if(value_path == "num-of-tgt-disc-recv")
    {
        num_of_tgt_disc_recv = value;
    }
    if(value_path == "num-of-tgt-disc-xmit")
    {
        num_of_tgt_disc_xmit = value;
    }
}

MplsLdp::Global::Standby::DiscoverySummaryAll::Vrf::Vrf()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "discovery-summary-all";
}

MplsLdp::Global::Standby::DiscoverySummaryAll::Vrf::~Vrf()
{
}

bool MplsLdp::Global::Standby::DiscoverySummaryAll::Vrf::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Standby::DiscoverySummaryAll::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string MplsLdp::Global::Standby::DiscoverySummaryAll::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Standby::DiscoverySummaryAll::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/standby/discovery-summary-all/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Standby::DiscoverySummaryAll::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Standby::DiscoverySummaryAll::Vrf::get_children()
{
    return children;
}

void MplsLdp::Global::Standby::DiscoverySummaryAll::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

MplsLdp::Global::Active::Active()
    :
    ato_mdb_table_entries(std::make_shared<MplsLdp::Global::Active::AtoMdbTableEntries>())
	,bindings_summary_all(std::make_shared<MplsLdp::Global::Active::BindingsSummaryAll>())
	,default_vrf(std::make_shared<MplsLdp::Global::Active::DefaultVrf>())
	,discovery_summary_all(std::make_shared<MplsLdp::Global::Active::DiscoverySummaryAll>())
	,forwarding_summary_all(std::make_shared<MplsLdp::Global::Active::ForwardingSummaryAll>())
	,nsr_summary_all(std::make_shared<MplsLdp::Global::Active::NsrSummaryAll>())
	,summary(std::make_shared<MplsLdp::Global::Active::Summary>())
	,vrfs(std::make_shared<MplsLdp::Global::Active::Vrfs>())
{
    ato_mdb_table_entries->parent = this;
    children["ato-mdb-table-entries"] = ato_mdb_table_entries;

    bindings_summary_all->parent = this;
    children["bindings-summary-all"] = bindings_summary_all;

    default_vrf->parent = this;
    children["default-vrf"] = default_vrf;

    discovery_summary_all->parent = this;
    children["discovery-summary-all"] = discovery_summary_all;

    forwarding_summary_all->parent = this;
    children["forwarding-summary-all"] = forwarding_summary_all;

    nsr_summary_all->parent = this;
    children["nsr-summary-all"] = nsr_summary_all;

    summary->parent = this;
    children["summary"] = summary;

    vrfs->parent = this;
    children["vrfs"] = vrfs;

    yang_name = "active"; yang_parent_name = "global";
}

MplsLdp::Global::Active::~Active()
{
}

bool MplsLdp::Global::Active::has_data() const
{
    return (ato_mdb_table_entries !=  nullptr && ato_mdb_table_entries->has_data())
	|| (bindings_summary_all !=  nullptr && bindings_summary_all->has_data())
	|| (default_vrf !=  nullptr && default_vrf->has_data())
	|| (discovery_summary_all !=  nullptr && discovery_summary_all->has_data())
	|| (forwarding_summary_all !=  nullptr && forwarding_summary_all->has_data())
	|| (nsr_summary_all !=  nullptr && nsr_summary_all->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool MplsLdp::Global::Active::has_operation() const
{
    return is_set(operation)
	|| (ato_mdb_table_entries !=  nullptr && ato_mdb_table_entries->has_operation())
	|| (bindings_summary_all !=  nullptr && bindings_summary_all->has_operation())
	|| (default_vrf !=  nullptr && default_vrf->has_operation())
	|| (discovery_summary_all !=  nullptr && discovery_summary_all->has_operation())
	|| (forwarding_summary_all !=  nullptr && forwarding_summary_all->has_operation())
	|| (nsr_summary_all !=  nullptr && nsr_summary_all->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string MplsLdp::Global::Active::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "active";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Active::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ato-mdb-table-entries")
    {
        if(ato_mdb_table_entries != nullptr)
        {
            children["ato-mdb-table-entries"] = ato_mdb_table_entries;
        }
        else
        {
            ato_mdb_table_entries = std::make_shared<MplsLdp::Global::Active::AtoMdbTableEntries>();
            ato_mdb_table_entries->parent = this;
            children["ato-mdb-table-entries"] = ato_mdb_table_entries;
        }
        return children.at("ato-mdb-table-entries");
    }

    if(child_yang_name == "bindings-summary-all")
    {
        if(bindings_summary_all != nullptr)
        {
            children["bindings-summary-all"] = bindings_summary_all;
        }
        else
        {
            bindings_summary_all = std::make_shared<MplsLdp::Global::Active::BindingsSummaryAll>();
            bindings_summary_all->parent = this;
            children["bindings-summary-all"] = bindings_summary_all;
        }
        return children.at("bindings-summary-all");
    }

    if(child_yang_name == "default-vrf")
    {
        if(default_vrf != nullptr)
        {
            children["default-vrf"] = default_vrf;
        }
        else
        {
            default_vrf = std::make_shared<MplsLdp::Global::Active::DefaultVrf>();
            default_vrf->parent = this;
            children["default-vrf"] = default_vrf;
        }
        return children.at("default-vrf");
    }

    if(child_yang_name == "discovery-summary-all")
    {
        if(discovery_summary_all != nullptr)
        {
            children["discovery-summary-all"] = discovery_summary_all;
        }
        else
        {
            discovery_summary_all = std::make_shared<MplsLdp::Global::Active::DiscoverySummaryAll>();
            discovery_summary_all->parent = this;
            children["discovery-summary-all"] = discovery_summary_all;
        }
        return children.at("discovery-summary-all");
    }

    if(child_yang_name == "forwarding-summary-all")
    {
        if(forwarding_summary_all != nullptr)
        {
            children["forwarding-summary-all"] = forwarding_summary_all;
        }
        else
        {
            forwarding_summary_all = std::make_shared<MplsLdp::Global::Active::ForwardingSummaryAll>();
            forwarding_summary_all->parent = this;
            children["forwarding-summary-all"] = forwarding_summary_all;
        }
        return children.at("forwarding-summary-all");
    }

    if(child_yang_name == "nsr-summary-all")
    {
        if(nsr_summary_all != nullptr)
        {
            children["nsr-summary-all"] = nsr_summary_all;
        }
        else
        {
            nsr_summary_all = std::make_shared<MplsLdp::Global::Active::NsrSummaryAll>();
            nsr_summary_all->parent = this;
            children["nsr-summary-all"] = nsr_summary_all;
        }
        return children.at("nsr-summary-all");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
        else
        {
            summary = std::make_shared<MplsLdp::Global::Active::Summary>();
            summary->parent = this;
            children["summary"] = summary;
        }
        return children.at("summary");
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs;
        }
        else
        {
            vrfs = std::make_shared<MplsLdp::Global::Active::Vrfs>();
            vrfs->parent = this;
            children["vrfs"] = vrfs;
        }
        return children.at("vrfs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Active::get_children()
{
    if(children.find("ato-mdb-table-entries") == children.end())
    {
        if(ato_mdb_table_entries != nullptr)
        {
            children["ato-mdb-table-entries"] = ato_mdb_table_entries;
        }
    }

    if(children.find("bindings-summary-all") == children.end())
    {
        if(bindings_summary_all != nullptr)
        {
            children["bindings-summary-all"] = bindings_summary_all;
        }
    }

    if(children.find("default-vrf") == children.end())
    {
        if(default_vrf != nullptr)
        {
            children["default-vrf"] = default_vrf;
        }
    }

    if(children.find("discovery-summary-all") == children.end())
    {
        if(discovery_summary_all != nullptr)
        {
            children["discovery-summary-all"] = discovery_summary_all;
        }
    }

    if(children.find("forwarding-summary-all") == children.end())
    {
        if(forwarding_summary_all != nullptr)
        {
            children["forwarding-summary-all"] = forwarding_summary_all;
        }
    }

    if(children.find("nsr-summary-all") == children.end())
    {
        if(nsr_summary_all != nullptr)
        {
            children["nsr-summary-all"] = nsr_summary_all;
        }
    }

    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
    }

    if(children.find("vrfs") == children.end())
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs;
        }
    }

    return children;
}

void MplsLdp::Global::Active::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Active::DefaultVrf::DefaultVrf()
    :
    afs(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs>())
	,backoff_parameters(std::make_shared<MplsLdp::Global::Active::DefaultVrf::BackoffParameters>())
	,backoffs(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Backoffs>())
	,capabilities(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Capabilities>())
	,graceful_restart(std::make_shared<MplsLdp::Global::Active::DefaultVrf::GracefulRestart>())
	,issu(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Issu>())
	,ldp_id(std::make_shared<MplsLdp::Global::Active::DefaultVrf::LdpId>())
	,neighbor_briefs(std::make_shared<MplsLdp::Global::Active::DefaultVrf::NeighborBriefs>())
	,neighbor_capabilities(std::make_shared<MplsLdp::Global::Active::DefaultVrf::NeighborCapabilities>())
	,neighbors(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Neighbors>())
	,nsr(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Nsr>())
	,parameters(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Parameters>())
	,statistics(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Statistics>())
	,summary(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Summary>())
{
    afs->parent = this;
    children["afs"] = afs;

    backoff_parameters->parent = this;
    children["backoff-parameters"] = backoff_parameters;

    backoffs->parent = this;
    children["backoffs"] = backoffs;

    capabilities->parent = this;
    children["capabilities"] = capabilities;

    graceful_restart->parent = this;
    children["graceful-restart"] = graceful_restart;

    issu->parent = this;
    children["issu"] = issu;

    ldp_id->parent = this;
    children["ldp-id"] = ldp_id;

    neighbor_briefs->parent = this;
    children["neighbor-briefs"] = neighbor_briefs;

    neighbor_capabilities->parent = this;
    children["neighbor-capabilities"] = neighbor_capabilities;

    neighbors->parent = this;
    children["neighbors"] = neighbors;

    nsr->parent = this;
    children["nsr"] = nsr;

    parameters->parent = this;
    children["parameters"] = parameters;

    statistics->parent = this;
    children["statistics"] = statistics;

    summary->parent = this;
    children["summary"] = summary;

    yang_name = "default-vrf"; yang_parent_name = "active";
}

MplsLdp::Global::Active::DefaultVrf::~DefaultVrf()
{
}

bool MplsLdp::Global::Active::DefaultVrf::has_data() const
{
    return (afs !=  nullptr && afs->has_data())
	|| (backoff_parameters !=  nullptr && backoff_parameters->has_data())
	|| (backoffs !=  nullptr && backoffs->has_data())
	|| (capabilities !=  nullptr && capabilities->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (issu !=  nullptr && issu->has_data())
	|| (ldp_id !=  nullptr && ldp_id->has_data())
	|| (neighbor_briefs !=  nullptr && neighbor_briefs->has_data())
	|| (neighbor_capabilities !=  nullptr && neighbor_capabilities->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (nsr !=  nullptr && nsr->has_data())
	|| (parameters !=  nullptr && parameters->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool MplsLdp::Global::Active::DefaultVrf::has_operation() const
{
    return is_set(operation)
	|| (afs !=  nullptr && afs->has_operation())
	|| (backoff_parameters !=  nullptr && backoff_parameters->has_operation())
	|| (backoffs !=  nullptr && backoffs->has_operation())
	|| (capabilities !=  nullptr && capabilities->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (issu !=  nullptr && issu->has_operation())
	|| (ldp_id !=  nullptr && ldp_id->has_operation())
	|| (neighbor_briefs !=  nullptr && neighbor_briefs->has_operation())
	|| (neighbor_capabilities !=  nullptr && neighbor_capabilities->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (nsr !=  nullptr && nsr->has_operation())
	|| (parameters !=  nullptr && parameters->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string MplsLdp::Global::Active::DefaultVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-vrf";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Active::DefaultVrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::DefaultVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "afs")
    {
        if(afs != nullptr)
        {
            children["afs"] = afs;
        }
        else
        {
            afs = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs>();
            afs->parent = this;
            children["afs"] = afs;
        }
        return children.at("afs");
    }

    if(child_yang_name == "backoff-parameters")
    {
        if(backoff_parameters != nullptr)
        {
            children["backoff-parameters"] = backoff_parameters;
        }
        else
        {
            backoff_parameters = std::make_shared<MplsLdp::Global::Active::DefaultVrf::BackoffParameters>();
            backoff_parameters->parent = this;
            children["backoff-parameters"] = backoff_parameters;
        }
        return children.at("backoff-parameters");
    }

    if(child_yang_name == "backoffs")
    {
        if(backoffs != nullptr)
        {
            children["backoffs"] = backoffs;
        }
        else
        {
            backoffs = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Backoffs>();
            backoffs->parent = this;
            children["backoffs"] = backoffs;
        }
        return children.at("backoffs");
    }

    if(child_yang_name == "capabilities")
    {
        if(capabilities != nullptr)
        {
            children["capabilities"] = capabilities;
        }
        else
        {
            capabilities = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Capabilities>();
            capabilities->parent = this;
            children["capabilities"] = capabilities;
        }
        return children.at("capabilities");
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart != nullptr)
        {
            children["graceful-restart"] = graceful_restart;
        }
        else
        {
            graceful_restart = std::make_shared<MplsLdp::Global::Active::DefaultVrf::GracefulRestart>();
            graceful_restart->parent = this;
            children["graceful-restart"] = graceful_restart;
        }
        return children.at("graceful-restart");
    }

    if(child_yang_name == "issu")
    {
        if(issu != nullptr)
        {
            children["issu"] = issu;
        }
        else
        {
            issu = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Issu>();
            issu->parent = this;
            children["issu"] = issu;
        }
        return children.at("issu");
    }

    if(child_yang_name == "ldp-id")
    {
        if(ldp_id != nullptr)
        {
            children["ldp-id"] = ldp_id;
        }
        else
        {
            ldp_id = std::make_shared<MplsLdp::Global::Active::DefaultVrf::LdpId>();
            ldp_id->parent = this;
            children["ldp-id"] = ldp_id;
        }
        return children.at("ldp-id");
    }

    if(child_yang_name == "neighbor-briefs")
    {
        if(neighbor_briefs != nullptr)
        {
            children["neighbor-briefs"] = neighbor_briefs;
        }
        else
        {
            neighbor_briefs = std::make_shared<MplsLdp::Global::Active::DefaultVrf::NeighborBriefs>();
            neighbor_briefs->parent = this;
            children["neighbor-briefs"] = neighbor_briefs;
        }
        return children.at("neighbor-briefs");
    }

    if(child_yang_name == "neighbor-capabilities")
    {
        if(neighbor_capabilities != nullptr)
        {
            children["neighbor-capabilities"] = neighbor_capabilities;
        }
        else
        {
            neighbor_capabilities = std::make_shared<MplsLdp::Global::Active::DefaultVrf::NeighborCapabilities>();
            neighbor_capabilities->parent = this;
            children["neighbor-capabilities"] = neighbor_capabilities;
        }
        return children.at("neighbor-capabilities");
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors != nullptr)
        {
            children["neighbors"] = neighbors;
        }
        else
        {
            neighbors = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Neighbors>();
            neighbors->parent = this;
            children["neighbors"] = neighbors;
        }
        return children.at("neighbors");
    }

    if(child_yang_name == "nsr")
    {
        if(nsr != nullptr)
        {
            children["nsr"] = nsr;
        }
        else
        {
            nsr = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Nsr>();
            nsr->parent = this;
            children["nsr"] = nsr;
        }
        return children.at("nsr");
    }

    if(child_yang_name == "parameters")
    {
        if(parameters != nullptr)
        {
            children["parameters"] = parameters;
        }
        else
        {
            parameters = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Parameters>();
            parameters->parent = this;
            children["parameters"] = parameters;
        }
        return children.at("parameters");
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
        else
        {
            statistics = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
        else
        {
            summary = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Summary>();
            summary->parent = this;
            children["summary"] = summary;
        }
        return children.at("summary");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Active::DefaultVrf::get_children()
{
    if(children.find("afs") == children.end())
    {
        if(afs != nullptr)
        {
            children["afs"] = afs;
        }
    }

    if(children.find("backoff-parameters") == children.end())
    {
        if(backoff_parameters != nullptr)
        {
            children["backoff-parameters"] = backoff_parameters;
        }
    }

    if(children.find("backoffs") == children.end())
    {
        if(backoffs != nullptr)
        {
            children["backoffs"] = backoffs;
        }
    }

    if(children.find("capabilities") == children.end())
    {
        if(capabilities != nullptr)
        {
            children["capabilities"] = capabilities;
        }
    }

    if(children.find("graceful-restart") == children.end())
    {
        if(graceful_restart != nullptr)
        {
            children["graceful-restart"] = graceful_restart;
        }
    }

    if(children.find("issu") == children.end())
    {
        if(issu != nullptr)
        {
            children["issu"] = issu;
        }
    }

    if(children.find("ldp-id") == children.end())
    {
        if(ldp_id != nullptr)
        {
            children["ldp-id"] = ldp_id;
        }
    }

    if(children.find("neighbor-briefs") == children.end())
    {
        if(neighbor_briefs != nullptr)
        {
            children["neighbor-briefs"] = neighbor_briefs;
        }
    }

    if(children.find("neighbor-capabilities") == children.end())
    {
        if(neighbor_capabilities != nullptr)
        {
            children["neighbor-capabilities"] = neighbor_capabilities;
        }
    }

    if(children.find("neighbors") == children.end())
    {
        if(neighbors != nullptr)
        {
            children["neighbors"] = neighbors;
        }
    }

    if(children.find("nsr") == children.end())
    {
        if(nsr != nullptr)
        {
            children["nsr"] = nsr;
        }
    }

    if(children.find("parameters") == children.end())
    {
        if(parameters != nullptr)
        {
            children["parameters"] = parameters;
        }
    }

    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
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

void MplsLdp::Global::Active::DefaultVrf::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestart()
    :
    forwarding_state_hold_timer_remaining_seconds{YType::uint32, "forwarding-state-hold-timer-remaining-seconds"},
    is_forwarding_state_hold_timer_running{YType::boolean, "is-forwarding-state-hold-timer-running"}
    	,
    vrf(std::make_shared<MplsLdp::Global::Active::DefaultVrf::GracefulRestart::Vrf>())
{
    vrf->parent = this;
    children["vrf"] = vrf;

    yang_name = "graceful-restart"; yang_parent_name = "default-vrf";
}

MplsLdp::Global::Active::DefaultVrf::GracefulRestart::~GracefulRestart()
{
}

bool MplsLdp::Global::Active::DefaultVrf::GracefulRestart::has_data() const
{
    for (std::size_t index=0; index<graceful_restartable_neighbor.size(); index++)
    {
        if(graceful_restartable_neighbor[index]->has_data())
            return true;
    }
    return forwarding_state_hold_timer_remaining_seconds.is_set
	|| is_forwarding_state_hold_timer_running.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Active::DefaultVrf::GracefulRestart::has_operation() const
{
    for (std::size_t index=0; index<graceful_restartable_neighbor.size(); index++)
    {
        if(graceful_restartable_neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(forwarding_state_hold_timer_remaining_seconds.operation)
	|| is_set(is_forwarding_state_hold_timer_running.operation)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Active::DefaultVrf::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Active::DefaultVrf::GracefulRestart::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/default-vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (forwarding_state_hold_timer_remaining_seconds.is_set || is_set(forwarding_state_hold_timer_remaining_seconds.operation)) leaf_name_data.push_back(forwarding_state_hold_timer_remaining_seconds.get_name_leafdata());
    if (is_forwarding_state_hold_timer_running.is_set || is_set(is_forwarding_state_hold_timer_running.operation)) leaf_name_data.push_back(is_forwarding_state_hold_timer_running.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::DefaultVrf::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "graceful-restartable-neighbor")
    {
        for(auto const & c : graceful_restartable_neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor>();
        c->parent = this;
        graceful_restartable_neighbor.push_back(std::move(c));
        children[segment_path] = graceful_restartable_neighbor.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
        else
        {
            vrf = std::make_shared<MplsLdp::Global::Active::DefaultVrf::GracefulRestart::Vrf>();
            vrf->parent = this;
            children["vrf"] = vrf;
        }
        return children.at("vrf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Active::DefaultVrf::GracefulRestart::get_children()
{
    for (auto const & c : graceful_restartable_neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("vrf") == children.end())
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
    }

    return children;
}

void MplsLdp::Global::Active::DefaultVrf::GracefulRestart::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "forwarding-state-hold-timer-remaining-seconds")
    {
        forwarding_state_hold_timer_remaining_seconds = value;
    }
    if(value_path == "is-forwarding-state-hold-timer-running")
    {
        is_forwarding_state_hold_timer_running = value;
    }
}

MplsLdp::Global::Active::DefaultVrf::GracefulRestart::Vrf::Vrf()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "graceful-restart";
}

MplsLdp::Global::Active::DefaultVrf::GracefulRestart::Vrf::~Vrf()
{
}

bool MplsLdp::Global::Active::DefaultVrf::GracefulRestart::Vrf::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Active::DefaultVrf::GracefulRestart::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string MplsLdp::Global::Active::DefaultVrf::GracefulRestart::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Active::DefaultVrf::GracefulRestart::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/default-vrf/graceful-restart/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::DefaultVrf::GracefulRestart::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Active::DefaultVrf::GracefulRestart::Vrf::get_children()
{
    return children;
}

void MplsLdp::Global::Active::DefaultVrf::GracefulRestart::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GracefulRestartableNeighbor()
    :
    connect_count{YType::uint32, "connect-count"},
    down_nbr_down_reason{YType::uint32, "down-nbr-down-reason"},
    down_nbr_flags{YType::uint32, "down-nbr-flags"},
    down_nbr_flap_count{YType::uint8, "down-nbr-flap-count"},
    is_liveness_timer_running{YType::boolean, "is-liveness-timer-running"},
    is_neighbor_up{YType::boolean, "is-neighbor-up"},
    is_recovery_timer_running{YType::boolean, "is-recovery-timer-running"},
    liveness_timer_remaining_seconds{YType::uint32, "liveness-timer-remaining-seconds"},
    recovery_timer_remaining_seconds{YType::uint32, "recovery-timer-remaining-seconds"}
    	,
    gr_peer(std::make_shared<MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer>())
{
    gr_peer->parent = this;
    children["gr-peer"] = gr_peer;

    yang_name = "graceful-restartable-neighbor"; yang_parent_name = "graceful-restart";
}

MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::~GracefulRestartableNeighbor()
{
}

bool MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::has_data() const
{
    for (std::size_t index=0; index<down_nbr_address.size(); index++)
    {
        if(down_nbr_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<down_nbr_interface.size(); index++)
    {
        if(down_nbr_interface[index]->has_data())
            return true;
    }
    return connect_count.is_set
	|| down_nbr_down_reason.is_set
	|| down_nbr_flags.is_set
	|| down_nbr_flap_count.is_set
	|| is_liveness_timer_running.is_set
	|| is_neighbor_up.is_set
	|| is_recovery_timer_running.is_set
	|| liveness_timer_remaining_seconds.is_set
	|| recovery_timer_remaining_seconds.is_set
	|| (gr_peer !=  nullptr && gr_peer->has_data());
}

bool MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::has_operation() const
{
    for (std::size_t index=0; index<down_nbr_address.size(); index++)
    {
        if(down_nbr_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<down_nbr_interface.size(); index++)
    {
        if(down_nbr_interface[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(connect_count.operation)
	|| is_set(down_nbr_down_reason.operation)
	|| is_set(down_nbr_flags.operation)
	|| is_set(down_nbr_flap_count.operation)
	|| is_set(is_liveness_timer_running.operation)
	|| is_set(is_neighbor_up.operation)
	|| is_set(is_recovery_timer_running.operation)
	|| is_set(liveness_timer_remaining_seconds.operation)
	|| is_set(recovery_timer_remaining_seconds.operation)
	|| (gr_peer !=  nullptr && gr_peer->has_operation());
}

std::string MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restartable-neighbor";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/default-vrf/graceful-restart/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (connect_count.is_set || is_set(connect_count.operation)) leaf_name_data.push_back(connect_count.get_name_leafdata());
    if (down_nbr_down_reason.is_set || is_set(down_nbr_down_reason.operation)) leaf_name_data.push_back(down_nbr_down_reason.get_name_leafdata());
    if (down_nbr_flags.is_set || is_set(down_nbr_flags.operation)) leaf_name_data.push_back(down_nbr_flags.get_name_leafdata());
    if (down_nbr_flap_count.is_set || is_set(down_nbr_flap_count.operation)) leaf_name_data.push_back(down_nbr_flap_count.get_name_leafdata());
    if (is_liveness_timer_running.is_set || is_set(is_liveness_timer_running.operation)) leaf_name_data.push_back(is_liveness_timer_running.get_name_leafdata());
    if (is_neighbor_up.is_set || is_set(is_neighbor_up.operation)) leaf_name_data.push_back(is_neighbor_up.get_name_leafdata());
    if (is_recovery_timer_running.is_set || is_set(is_recovery_timer_running.operation)) leaf_name_data.push_back(is_recovery_timer_running.get_name_leafdata());
    if (liveness_timer_remaining_seconds.is_set || is_set(liveness_timer_remaining_seconds.operation)) leaf_name_data.push_back(liveness_timer_remaining_seconds.get_name_leafdata());
    if (recovery_timer_remaining_seconds.is_set || is_set(recovery_timer_remaining_seconds.operation)) leaf_name_data.push_back(recovery_timer_remaining_seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "down-nbr-address")
    {
        for(auto const & c : down_nbr_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress>();
        c->parent = this;
        down_nbr_address.push_back(std::move(c));
        children[segment_path] = down_nbr_address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "down-nbr-interface")
    {
        for(auto const & c : down_nbr_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface>();
        c->parent = this;
        down_nbr_interface.push_back(std::move(c));
        children[segment_path] = down_nbr_interface.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "gr-peer")
    {
        if(gr_peer != nullptr)
        {
            children["gr-peer"] = gr_peer;
        }
        else
        {
            gr_peer = std::make_shared<MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer>();
            gr_peer->parent = this;
            children["gr-peer"] = gr_peer;
        }
        return children.at("gr-peer");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::get_children()
{
    for (auto const & c : down_nbr_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : down_nbr_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("gr-peer") == children.end())
    {
        if(gr_peer != nullptr)
        {
            children["gr-peer"] = gr_peer;
        }
    }

    return children;
}

void MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "connect-count")
    {
        connect_count = value;
    }
    if(value_path == "down-nbr-down-reason")
    {
        down_nbr_down_reason = value;
    }
    if(value_path == "down-nbr-flags")
    {
        down_nbr_flags = value;
    }
    if(value_path == "down-nbr-flap-count")
    {
        down_nbr_flap_count = value;
    }
    if(value_path == "is-liveness-timer-running")
    {
        is_liveness_timer_running = value;
    }
    if(value_path == "is-neighbor-up")
    {
        is_neighbor_up = value;
    }
    if(value_path == "is-recovery-timer-running")
    {
        is_recovery_timer_running = value;
    }
    if(value_path == "liveness-timer-remaining-seconds")
    {
        liveness_timer_remaining_seconds = value;
    }
    if(value_path == "recovery-timer-remaining-seconds")
    {
        recovery_timer_remaining_seconds = value;
    }
}

MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer::GrPeer()
    :
    label_space_id{YType::uint16, "label-space-id"},
    ldp_id{YType::str, "ldp-id"},
    lsr_id{YType::str, "lsr-id"}
{
    yang_name = "gr-peer"; yang_parent_name = "graceful-restartable-neighbor";
}

MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer::~GrPeer()
{
}

bool MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer::has_data() const
{
    return label_space_id.is_set
	|| ldp_id.is_set
	|| lsr_id.is_set;
}

bool MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer::has_operation() const
{
    return is_set(operation)
	|| is_set(label_space_id.operation)
	|| is_set(ldp_id.operation)
	|| is_set(lsr_id.operation);
}

std::string MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gr-peer";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/default-vrf/graceful-restart/graceful-restartable-neighbor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_space_id.is_set || is_set(label_space_id.operation)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (ldp_id.is_set || is_set(ldp_id.operation)) leaf_name_data.push_back(ldp_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.operation)) leaf_name_data.push_back(lsr_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer::get_children()
{
    return children;
}

void MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::GrPeer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-space-id")
    {
        label_space_id = value;
    }
    if(value_path == "ldp-id")
    {
        ldp_id = value;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
    }
}

MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface::DownNbrInterface()
    :
    address_family{YType::enumeration, "address-family"},
    interface_handle{YType::str, "interface-handle"}
{
    yang_name = "down-nbr-interface"; yang_parent_name = "graceful-restartable-neighbor";
}

MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface::~DownNbrInterface()
{
}

bool MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface::has_data() const
{
    return address_family.is_set
	|| interface_handle.is_set;
}

bool MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(address_family.operation)
	|| is_set(interface_handle.operation);
}

std::string MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "down-nbr-interface";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/default-vrf/graceful-restart/graceful-restartable-neighbor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (interface_handle.is_set || is_set(interface_handle.operation)) leaf_name_data.push_back(interface_handle.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface::get_children()
{
    return children;
}

void MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family")
    {
        address_family = value;
    }
    if(value_path == "interface-handle")
    {
        interface_handle = value;
    }
}

MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress::DownNbrAddress()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "down-nbr-address"; yang_parent_name = "graceful-restartable-neighbor";
}

MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress::~DownNbrAddress()
{
}

bool MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "down-nbr-address";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/default-vrf/graceful-restart/graceful-restartable-neighbor/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress::get_children()
{
    return children;
}

void MplsLdp::Global::Active::DefaultVrf::GracefulRestart::GracefulRestartableNeighbor::DownNbrAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

MplsLdp::Global::Active::DefaultVrf::Capabilities::Capabilities()
{
    yang_name = "capabilities"; yang_parent_name = "default-vrf";
}

MplsLdp::Global::Active::DefaultVrf::Capabilities::~Capabilities()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Capabilities::has_data() const
{
    for (std::size_t index=0; index<capability.size(); index++)
    {
        if(capability[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Active::DefaultVrf::Capabilities::has_operation() const
{
    for (std::size_t index=0; index<capability.size(); index++)
    {
        if(capability[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Active::DefaultVrf::Capabilities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capabilities";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Active::DefaultVrf::Capabilities::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/default-vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::DefaultVrf::Capabilities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "capability")
    {
        for(auto const & c : capability)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Capabilities::Capability>();
        c->parent = this;
        capability.push_back(std::move(c));
        children[segment_path] = capability.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Active::DefaultVrf::Capabilities::get_children()
{
    for (auto const & c : capability)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLdp::Global::Active::DefaultVrf::Capabilities::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Active::DefaultVrf::Capabilities::Capability::Capability()
    :
    capability_type{YType::int32, "capability-type"},
    capability_owner{YType::str, "capability-owner"}
    	,
    capability(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Capabilities::Capability::Capability_>())
{
    capability->parent = this;
    children["capability"] = capability;

    yang_name = "capability"; yang_parent_name = "capabilities";
}

MplsLdp::Global::Active::DefaultVrf::Capabilities::Capability::~Capability()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Capabilities::Capability::has_data() const
{
    return capability_type.is_set
	|| capability_owner.is_set
	|| (capability !=  nullptr && capability->has_data());
}

bool MplsLdp::Global::Active::DefaultVrf::Capabilities::Capability::has_operation() const
{
    return is_set(operation)
	|| is_set(capability_type.operation)
	|| is_set(capability_owner.operation)
	|| (capability !=  nullptr && capability->has_operation());
}

std::string MplsLdp::Global::Active::DefaultVrf::Capabilities::Capability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capability" <<"[capability-type='" <<capability_type <<"']";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Active::DefaultVrf::Capabilities::Capability::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/default-vrf/capabilities/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capability_type.is_set || is_set(capability_type.operation)) leaf_name_data.push_back(capability_type.get_name_leafdata());
    if (capability_owner.is_set || is_set(capability_owner.operation)) leaf_name_data.push_back(capability_owner.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::DefaultVrf::Capabilities::Capability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "capability")
    {
        if(capability != nullptr)
        {
            children["capability"] = capability;
        }
        else
        {
            capability = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Capabilities::Capability::Capability_>();
            capability->parent = this;
            children["capability"] = capability;
        }
        return children.at("capability");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Active::DefaultVrf::Capabilities::Capability::get_children()
{
    if(children.find("capability") == children.end())
    {
        if(capability != nullptr)
        {
            children["capability"] = capability;
        }
    }

    return children;
}

void MplsLdp::Global::Active::DefaultVrf::Capabilities::Capability::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "capability-type")
    {
        capability_type = value;
    }
    if(value_path == "capability-owner")
    {
        capability_owner = value;
    }
}

MplsLdp::Global::Active::DefaultVrf::Capabilities::Capability::Capability_::Capability_()
    :
    capability_data{YType::str, "capability-data"},
    capability_data_length{YType::uint16, "capability-data-length"},
    description{YType::str, "description"},
    type{YType::uint16, "type"}
{
    yang_name = "capability"; yang_parent_name = "capability";
}

MplsLdp::Global::Active::DefaultVrf::Capabilities::Capability::Capability_::~Capability_()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Capabilities::Capability::Capability_::has_data() const
{
    return capability_data.is_set
	|| capability_data_length.is_set
	|| description.is_set
	|| type.is_set;
}

bool MplsLdp::Global::Active::DefaultVrf::Capabilities::Capability::Capability_::has_operation() const
{
    return is_set(operation)
	|| is_set(capability_data.operation)
	|| is_set(capability_data_length.operation)
	|| is_set(description.operation)
	|| is_set(type.operation);
}

std::string MplsLdp::Global::Active::DefaultVrf::Capabilities::Capability::Capability_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capability";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Active::DefaultVrf::Capabilities::Capability::Capability_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Capability_' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capability_data.is_set || is_set(capability_data.operation)) leaf_name_data.push_back(capability_data.get_name_leafdata());
    if (capability_data_length.is_set || is_set(capability_data_length.operation)) leaf_name_data.push_back(capability_data_length.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::DefaultVrf::Capabilities::Capability::Capability_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Active::DefaultVrf::Capabilities::Capability::Capability_::get_children()
{
    return children;
}

void MplsLdp::Global::Active::DefaultVrf::Capabilities::Capability::Capability_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "capability-data")
    {
        capability_data = value;
    }
    if(value_path == "capability-data-length")
    {
        capability_data_length = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

MplsLdp::Global::Active::DefaultVrf::Summary::Summary()
    :
    common(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Summary::Common>())
	,vrf(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Summary::Vrf>())
{
    common->parent = this;
    children["common"] = common;

    vrf->parent = this;
    children["vrf"] = vrf;

    yang_name = "summary"; yang_parent_name = "default-vrf";
}

MplsLdp::Global::Active::DefaultVrf::Summary::~Summary()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Summary::has_data() const
{
    return (common !=  nullptr && common->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Active::DefaultVrf::Summary::has_operation() const
{
    return is_set(operation)
	|| (common !=  nullptr && common->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Active::DefaultVrf::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Active::DefaultVrf::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/default-vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::DefaultVrf::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "common")
    {
        if(common != nullptr)
        {
            children["common"] = common;
        }
        else
        {
            common = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Summary::Common>();
            common->parent = this;
            children["common"] = common;
        }
        return children.at("common");
    }

    if(child_yang_name == "vrf")
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
        else
        {
            vrf = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Summary::Vrf>();
            vrf->parent = this;
            children["vrf"] = vrf;
        }
        return children.at("vrf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Active::DefaultVrf::Summary::get_children()
{
    if(children.find("common") == children.end())
    {
        if(common != nullptr)
        {
            children["common"] = common;
        }
    }

    if(children.find("vrf") == children.end())
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
    }

    return children;
}

void MplsLdp::Global::Active::DefaultVrf::Summary::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Active::DefaultVrf::Summary::Vrf::Vrf()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "summary";
}

MplsLdp::Global::Active::DefaultVrf::Summary::Vrf::~Vrf()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Summary::Vrf::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Active::DefaultVrf::Summary::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string MplsLdp::Global::Active::DefaultVrf::Summary::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Active::DefaultVrf::Summary::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/default-vrf/summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::DefaultVrf::Summary::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Active::DefaultVrf::Summary::Vrf::get_children()
{
    return children;
}

void MplsLdp::Global::Active::DefaultVrf::Summary::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

MplsLdp::Global::Active::DefaultVrf::Summary::Common::Common()
    :
    address_families{YType::enumeration, "address-families"},
    number_of_bindings_ipv4{YType::uint32, "number-of-bindings-ipv4"},
    number_of_bindings_ipv6{YType::uint32, "number-of-bindings-ipv6"},
    number_of_downstream_on_demand_neighbors{YType::uint32, "number-of-downstream-on-demand-neighbors"},
    number_of_graceful_restart_neighbors{YType::uint32, "number-of-graceful-restart-neighbors"},
    number_of_ipv4_hello_adj{YType::uint32, "number-of-ipv4-hello-adj"},
    number_of_ipv4_local_addresses{YType::uint32, "number-of-ipv4-local-addresses"},
    number_of_ipv4_routes{YType::uint32, "number-of-ipv4-routes"},
    number_of_ipv4af{YType::uint32, "number-of-ipv4af"},
    number_of_ipv4ldp_interfaces{YType::uint32, "number-of-ipv4ldp-interfaces"},
    number_of_ipv6_hello_adj{YType::uint32, "number-of-ipv6-hello-adj"},
    number_of_ipv6_local_addresses{YType::uint32, "number-of-ipv6-local-addresses"},
    number_of_ipv6_routes{YType::uint32, "number-of-ipv6-routes"},
    number_of_ipv6af{YType::uint32, "number-of-ipv6af"},
    number_of_ipv6ldp_interfaces{YType::uint32, "number-of-ipv6ldp-interfaces"},
    number_of_ldp_interfaces{YType::uint32, "number-of-ldp-interfaces"},
    number_of_local_bindings_ipv4{YType::uint32, "number-of-local-bindings-ipv4"},
    number_of_local_bindings_ipv6{YType::uint32, "number-of-local-bindings-ipv6"},
    number_of_neighbors{YType::uint32, "number-of-neighbors"},
    number_of_nsr_synced_neighbors{YType::uint32, "number-of-nsr-synced-neighbors"},
    number_of_remote_bindings_ipv4{YType::uint32, "number-of-remote-bindings-ipv4"},
    number_of_remote_bindings_ipv6{YType::uint32, "number-of-remote-bindings-ipv6"}
{
    yang_name = "common"; yang_parent_name = "summary";
}

MplsLdp::Global::Active::DefaultVrf::Summary::Common::~Common()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Summary::Common::has_data() const
{
    return address_families.is_set
	|| number_of_bindings_ipv4.is_set
	|| number_of_bindings_ipv6.is_set
	|| number_of_downstream_on_demand_neighbors.is_set
	|| number_of_graceful_restart_neighbors.is_set
	|| number_of_ipv4_hello_adj.is_set
	|| number_of_ipv4_local_addresses.is_set
	|| number_of_ipv4_routes.is_set
	|| number_of_ipv4af.is_set
	|| number_of_ipv4ldp_interfaces.is_set
	|| number_of_ipv6_hello_adj.is_set
	|| number_of_ipv6_local_addresses.is_set
	|| number_of_ipv6_routes.is_set
	|| number_of_ipv6af.is_set
	|| number_of_ipv6ldp_interfaces.is_set
	|| number_of_ldp_interfaces.is_set
	|| number_of_local_bindings_ipv4.is_set
	|| number_of_local_bindings_ipv6.is_set
	|| number_of_neighbors.is_set
	|| number_of_nsr_synced_neighbors.is_set
	|| number_of_remote_bindings_ipv4.is_set
	|| number_of_remote_bindings_ipv6.is_set;
}

bool MplsLdp::Global::Active::DefaultVrf::Summary::Common::has_operation() const
{
    return is_set(operation)
	|| is_set(address_families.operation)
	|| is_set(number_of_bindings_ipv4.operation)
	|| is_set(number_of_bindings_ipv6.operation)
	|| is_set(number_of_downstream_on_demand_neighbors.operation)
	|| is_set(number_of_graceful_restart_neighbors.operation)
	|| is_set(number_of_ipv4_hello_adj.operation)
	|| is_set(number_of_ipv4_local_addresses.operation)
	|| is_set(number_of_ipv4_routes.operation)
	|| is_set(number_of_ipv4af.operation)
	|| is_set(number_of_ipv4ldp_interfaces.operation)
	|| is_set(number_of_ipv6_hello_adj.operation)
	|| is_set(number_of_ipv6_local_addresses.operation)
	|| is_set(number_of_ipv6_routes.operation)
	|| is_set(number_of_ipv6af.operation)
	|| is_set(number_of_ipv6ldp_interfaces.operation)
	|| is_set(number_of_ldp_interfaces.operation)
	|| is_set(number_of_local_bindings_ipv4.operation)
	|| is_set(number_of_local_bindings_ipv6.operation)
	|| is_set(number_of_neighbors.operation)
	|| is_set(number_of_nsr_synced_neighbors.operation)
	|| is_set(number_of_remote_bindings_ipv4.operation)
	|| is_set(number_of_remote_bindings_ipv6.operation);
}

std::string MplsLdp::Global::Active::DefaultVrf::Summary::Common::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Active::DefaultVrf::Summary::Common::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/default-vrf/summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_families.is_set || is_set(address_families.operation)) leaf_name_data.push_back(address_families.get_name_leafdata());
    if (number_of_bindings_ipv4.is_set || is_set(number_of_bindings_ipv4.operation)) leaf_name_data.push_back(number_of_bindings_ipv4.get_name_leafdata());
    if (number_of_bindings_ipv6.is_set || is_set(number_of_bindings_ipv6.operation)) leaf_name_data.push_back(number_of_bindings_ipv6.get_name_leafdata());
    if (number_of_downstream_on_demand_neighbors.is_set || is_set(number_of_downstream_on_demand_neighbors.operation)) leaf_name_data.push_back(number_of_downstream_on_demand_neighbors.get_name_leafdata());
    if (number_of_graceful_restart_neighbors.is_set || is_set(number_of_graceful_restart_neighbors.operation)) leaf_name_data.push_back(number_of_graceful_restart_neighbors.get_name_leafdata());
    if (number_of_ipv4_hello_adj.is_set || is_set(number_of_ipv4_hello_adj.operation)) leaf_name_data.push_back(number_of_ipv4_hello_adj.get_name_leafdata());
    if (number_of_ipv4_local_addresses.is_set || is_set(number_of_ipv4_local_addresses.operation)) leaf_name_data.push_back(number_of_ipv4_local_addresses.get_name_leafdata());
    if (number_of_ipv4_routes.is_set || is_set(number_of_ipv4_routes.operation)) leaf_name_data.push_back(number_of_ipv4_routes.get_name_leafdata());
    if (number_of_ipv4af.is_set || is_set(number_of_ipv4af.operation)) leaf_name_data.push_back(number_of_ipv4af.get_name_leafdata());
    if (number_of_ipv4ldp_interfaces.is_set || is_set(number_of_ipv4ldp_interfaces.operation)) leaf_name_data.push_back(number_of_ipv4ldp_interfaces.get_name_leafdata());
    if (number_of_ipv6_hello_adj.is_set || is_set(number_of_ipv6_hello_adj.operation)) leaf_name_data.push_back(number_of_ipv6_hello_adj.get_name_leafdata());
    if (number_of_ipv6_local_addresses.is_set || is_set(number_of_ipv6_local_addresses.operation)) leaf_name_data.push_back(number_of_ipv6_local_addresses.get_name_leafdata());
    if (number_of_ipv6_routes.is_set || is_set(number_of_ipv6_routes.operation)) leaf_name_data.push_back(number_of_ipv6_routes.get_name_leafdata());
    if (number_of_ipv6af.is_set || is_set(number_of_ipv6af.operation)) leaf_name_data.push_back(number_of_ipv6af.get_name_leafdata());
    if (number_of_ipv6ldp_interfaces.is_set || is_set(number_of_ipv6ldp_interfaces.operation)) leaf_name_data.push_back(number_of_ipv6ldp_interfaces.get_name_leafdata());
    if (number_of_ldp_interfaces.is_set || is_set(number_of_ldp_interfaces.operation)) leaf_name_data.push_back(number_of_ldp_interfaces.get_name_leafdata());
    if (number_of_local_bindings_ipv4.is_set || is_set(number_of_local_bindings_ipv4.operation)) leaf_name_data.push_back(number_of_local_bindings_ipv4.get_name_leafdata());
    if (number_of_local_bindings_ipv6.is_set || is_set(number_of_local_bindings_ipv6.operation)) leaf_name_data.push_back(number_of_local_bindings_ipv6.get_name_leafdata());
    if (number_of_neighbors.is_set || is_set(number_of_neighbors.operation)) leaf_name_data.push_back(number_of_neighbors.get_name_leafdata());
    if (number_of_nsr_synced_neighbors.is_set || is_set(number_of_nsr_synced_neighbors.operation)) leaf_name_data.push_back(number_of_nsr_synced_neighbors.get_name_leafdata());
    if (number_of_remote_bindings_ipv4.is_set || is_set(number_of_remote_bindings_ipv4.operation)) leaf_name_data.push_back(number_of_remote_bindings_ipv4.get_name_leafdata());
    if (number_of_remote_bindings_ipv6.is_set || is_set(number_of_remote_bindings_ipv6.operation)) leaf_name_data.push_back(number_of_remote_bindings_ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::DefaultVrf::Summary::Common::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Active::DefaultVrf::Summary::Common::get_children()
{
    return children;
}

void MplsLdp::Global::Active::DefaultVrf::Summary::Common::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-families")
    {
        address_families = value;
    }
    if(value_path == "number-of-bindings-ipv4")
    {
        number_of_bindings_ipv4 = value;
    }
    if(value_path == "number-of-bindings-ipv6")
    {
        number_of_bindings_ipv6 = value;
    }
    if(value_path == "number-of-downstream-on-demand-neighbors")
    {
        number_of_downstream_on_demand_neighbors = value;
    }
    if(value_path == "number-of-graceful-restart-neighbors")
    {
        number_of_graceful_restart_neighbors = value;
    }
    if(value_path == "number-of-ipv4-hello-adj")
    {
        number_of_ipv4_hello_adj = value;
    }
    if(value_path == "number-of-ipv4-local-addresses")
    {
        number_of_ipv4_local_addresses = value;
    }
    if(value_path == "number-of-ipv4-routes")
    {
        number_of_ipv4_routes = value;
    }
    if(value_path == "number-of-ipv4af")
    {
        number_of_ipv4af = value;
    }
    if(value_path == "number-of-ipv4ldp-interfaces")
    {
        number_of_ipv4ldp_interfaces = value;
    }
    if(value_path == "number-of-ipv6-hello-adj")
    {
        number_of_ipv6_hello_adj = value;
    }
    if(value_path == "number-of-ipv6-local-addresses")
    {
        number_of_ipv6_local_addresses = value;
    }
    if(value_path == "number-of-ipv6-routes")
    {
        number_of_ipv6_routes = value;
    }
    if(value_path == "number-of-ipv6af")
    {
        number_of_ipv6af = value;
    }
    if(value_path == "number-of-ipv6ldp-interfaces")
    {
        number_of_ipv6ldp_interfaces = value;
    }
    if(value_path == "number-of-ldp-interfaces")
    {
        number_of_ldp_interfaces = value;
    }
    if(value_path == "number-of-local-bindings-ipv4")
    {
        number_of_local_bindings_ipv4 = value;
    }
    if(value_path == "number-of-local-bindings-ipv6")
    {
        number_of_local_bindings_ipv6 = value;
    }
    if(value_path == "number-of-neighbors")
    {
        number_of_neighbors = value;
    }
    if(value_path == "number-of-nsr-synced-neighbors")
    {
        number_of_nsr_synced_neighbors = value;
    }
    if(value_path == "number-of-remote-bindings-ipv4")
    {
        number_of_remote_bindings_ipv4 = value;
    }
    if(value_path == "number-of-remote-bindings-ipv6")
    {
        number_of_remote_bindings_ipv6 = value;
    }
}

MplsLdp::Global::Active::DefaultVrf::Afs::Afs()
{
    yang_name = "afs"; yang_parent_name = "default-vrf";
}

MplsLdp::Global::Active::DefaultVrf::Afs::~Afs()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::has_data() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::has_operation() const
{
    for (std::size_t index=0; index<af.size(); index++)
    {
        if(af[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "afs";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Active::DefaultVrf::Afs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/default-vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::DefaultVrf::Afs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "af")
    {
        for(auto const & c : af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af>();
        c->parent = this;
        af.push_back(std::move(c));
        children[segment_path] = af.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Active::DefaultVrf::Afs::get_children()
{
    for (auto const & c : af)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Af()
    :
    af_name{YType::enumeration, "af-name"}
    	,
    bindings(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings>())
	,bindings_advertise_spec(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsAdvertiseSpec>())
	,bindings_summary(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary>())
	,bindings_summary_all(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummaryAll>())
	,discovery(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery>())
	,forwarding_summary(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::ForwardingSummary>())
	,forwardings(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings>())
	,igp(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp>())
	,interface_summary(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::InterfaceSummary>())
	,interfaces(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces>())
{
    bindings->parent = this;
    children["bindings"] = bindings;

    bindings_advertise_spec->parent = this;
    children["bindings-advertise-spec"] = bindings_advertise_spec;

    bindings_summary->parent = this;
    children["bindings-summary"] = bindings_summary;

    bindings_summary_all->parent = this;
    children["bindings-summary-all"] = bindings_summary_all;

    discovery->parent = this;
    children["discovery"] = discovery;

    forwarding_summary->parent = this;
    children["forwarding-summary"] = forwarding_summary;

    forwardings->parent = this;
    children["forwardings"] = forwardings;

    igp->parent = this;
    children["igp"] = igp;

    interface_summary->parent = this;
    children["interface-summary"] = interface_summary;

    interfaces->parent = this;
    children["interfaces"] = interfaces;

    yang_name = "af"; yang_parent_name = "afs";
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::~Af()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::has_data() const
{
    return af_name.is_set
	|| (bindings !=  nullptr && bindings->has_data())
	|| (bindings_advertise_spec !=  nullptr && bindings_advertise_spec->has_data())
	|| (bindings_summary !=  nullptr && bindings_summary->has_data())
	|| (bindings_summary_all !=  nullptr && bindings_summary_all->has_data())
	|| (discovery !=  nullptr && discovery->has_data())
	|| (forwarding_summary !=  nullptr && forwarding_summary->has_data())
	|| (forwardings !=  nullptr && forwardings->has_data())
	|| (igp !=  nullptr && igp->has_data())
	|| (interface_summary !=  nullptr && interface_summary->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| (bindings !=  nullptr && bindings->has_operation())
	|| (bindings_advertise_spec !=  nullptr && bindings_advertise_spec->has_operation())
	|| (bindings_summary !=  nullptr && bindings_summary->has_operation())
	|| (bindings_summary_all !=  nullptr && bindings_summary_all->has_operation())
	|| (discovery !=  nullptr && discovery->has_operation())
	|| (forwarding_summary !=  nullptr && forwarding_summary->has_operation())
	|| (forwardings !=  nullptr && forwardings->has_operation())
	|| (igp !=  nullptr && igp->has_operation())
	|| (interface_summary !=  nullptr && interface_summary->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "af" <<"[af-name='" <<af_name <<"']";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Active::DefaultVrf::Afs::Af::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-mpls-ldp-oper:mpls-ldp/global/active/default-vrf/afs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bindings")
    {
        if(bindings != nullptr)
        {
            children["bindings"] = bindings;
        }
        else
        {
            bindings = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings>();
            bindings->parent = this;
            children["bindings"] = bindings;
        }
        return children.at("bindings");
    }

    if(child_yang_name == "bindings-advertise-spec")
    {
        if(bindings_advertise_spec != nullptr)
        {
            children["bindings-advertise-spec"] = bindings_advertise_spec;
        }
        else
        {
            bindings_advertise_spec = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsAdvertiseSpec>();
            bindings_advertise_spec->parent = this;
            children["bindings-advertise-spec"] = bindings_advertise_spec;
        }
        return children.at("bindings-advertise-spec");
    }

    if(child_yang_name == "bindings-summary")
    {
        if(bindings_summary != nullptr)
        {
            children["bindings-summary"] = bindings_summary;
        }
        else
        {
            bindings_summary = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary>();
            bindings_summary->parent = this;
            children["bindings-summary"] = bindings_summary;
        }
        return children.at("bindings-summary");
    }

    if(child_yang_name == "bindings-summary-all")
    {
        if(bindings_summary_all != nullptr)
        {
            children["bindings-summary-all"] = bindings_summary_all;
        }
        else
        {
            bindings_summary_all = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummaryAll>();
            bindings_summary_all->parent = this;
            children["bindings-summary-all"] = bindings_summary_all;
        }
        return children.at("bindings-summary-all");
    }

    if(child_yang_name == "discovery")
    {
        if(discovery != nullptr)
        {
            children["discovery"] = discovery;
        }
        else
        {
            discovery = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery>();
            discovery->parent = this;
            children["discovery"] = discovery;
        }
        return children.at("discovery");
    }

    if(child_yang_name == "forwarding-summary")
    {
        if(forwarding_summary != nullptr)
        {
            children["forwarding-summary"] = forwarding_summary;
        }
        else
        {
            forwarding_summary = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::ForwardingSummary>();
            forwarding_summary->parent = this;
            children["forwarding-summary"] = forwarding_summary;
        }
        return children.at("forwarding-summary");
    }

    if(child_yang_name == "forwardings")
    {
        if(forwardings != nullptr)
        {
            children["forwardings"] = forwardings;
        }
        else
        {
            forwardings = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Forwardings>();
            forwardings->parent = this;
            children["forwardings"] = forwardings;
        }
        return children.at("forwardings");
    }

    if(child_yang_name == "igp")
    {
        if(igp != nullptr)
        {
            children["igp"] = igp;
        }
        else
        {
            igp = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp>();
            igp->parent = this;
            children["igp"] = igp;
        }
        return children.at("igp");
    }

    if(child_yang_name == "interface-summary")
    {
        if(interface_summary != nullptr)
        {
            children["interface-summary"] = interface_summary;
        }
        else
        {
            interface_summary = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::InterfaceSummary>();
            interface_summary->parent = this;
            children["interface-summary"] = interface_summary;
        }
        return children.at("interface-summary");
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
        else
        {
            interfaces = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces;
        }
        return children.at("interfaces");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Active::DefaultVrf::Afs::Af::get_children()
{
    if(children.find("bindings") == children.end())
    {
        if(bindings != nullptr)
        {
            children["bindings"] = bindings;
        }
    }

    if(children.find("bindings-advertise-spec") == children.end())
    {
        if(bindings_advertise_spec != nullptr)
        {
            children["bindings-advertise-spec"] = bindings_advertise_spec;
        }
    }

    if(children.find("bindings-summary") == children.end())
    {
        if(bindings_summary != nullptr)
        {
            children["bindings-summary"] = bindings_summary;
        }
    }

    if(children.find("bindings-summary-all") == children.end())
    {
        if(bindings_summary_all != nullptr)
        {
            children["bindings-summary-all"] = bindings_summary_all;
        }
    }

    if(children.find("discovery") == children.end())
    {
        if(discovery != nullptr)
        {
            children["discovery"] = discovery;
        }
    }

    if(children.find("forwarding-summary") == children.end())
    {
        if(forwarding_summary != nullptr)
        {
            children["forwarding-summary"] = forwarding_summary;
        }
    }

    if(children.find("forwardings") == children.end())
    {
        if(forwardings != nullptr)
        {
            children["forwardings"] = forwardings;
        }
    }

    if(children.find("igp") == children.end())
    {
        if(igp != nullptr)
        {
            children["igp"] = igp;
        }
    }

    if(children.find("interface-summary") == children.end())
    {
        if(interface_summary != nullptr)
        {
            children["interface-summary"] = interface_summary;
        }
    }

    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
    }

    return children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
    }
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::InterfaceSummary::InterfaceSummary()
    :
    auto_config{YType::uint32, "auto-config"},
    auto_config_disabled{YType::uint32, "auto-config-disabled"},
    auto_config_forward_reference_interfaces{YType::uint32, "auto-config-forward-reference-interfaces"},
    forward_references{YType::uint32, "forward-references"},
    known_ip_interface_count{YType::uint32, "known-ip-interface-count"},
    known_ip_interface_ldp_enabled{YType::uint32, "known-ip-interface-ldp-enabled"},
    ldp_configured_attached_interface{YType::uint32, "ldp-configured-attached-interface"},
    ldp_configured_te_interface{YType::uint32, "ldp-configured-te-interface"}
{
    yang_name = "interface-summary"; yang_parent_name = "af";
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::InterfaceSummary::~InterfaceSummary()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::InterfaceSummary::has_data() const
{
    return auto_config.is_set
	|| auto_config_disabled.is_set
	|| auto_config_forward_reference_interfaces.is_set
	|| forward_references.is_set
	|| known_ip_interface_count.is_set
	|| known_ip_interface_ldp_enabled.is_set
	|| ldp_configured_attached_interface.is_set
	|| ldp_configured_te_interface.is_set;
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::InterfaceSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(auto_config.operation)
	|| is_set(auto_config_disabled.operation)
	|| is_set(auto_config_forward_reference_interfaces.operation)
	|| is_set(forward_references.operation)
	|| is_set(known_ip_interface_count.operation)
	|| is_set(known_ip_interface_ldp_enabled.operation)
	|| is_set(ldp_configured_attached_interface.operation)
	|| is_set(ldp_configured_te_interface.operation);
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::InterfaceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-summary";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Active::DefaultVrf::Afs::Af::InterfaceSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceSummary' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_config.is_set || is_set(auto_config.operation)) leaf_name_data.push_back(auto_config.get_name_leafdata());
    if (auto_config_disabled.is_set || is_set(auto_config_disabled.operation)) leaf_name_data.push_back(auto_config_disabled.get_name_leafdata());
    if (auto_config_forward_reference_interfaces.is_set || is_set(auto_config_forward_reference_interfaces.operation)) leaf_name_data.push_back(auto_config_forward_reference_interfaces.get_name_leafdata());
    if (forward_references.is_set || is_set(forward_references.operation)) leaf_name_data.push_back(forward_references.get_name_leafdata());
    if (known_ip_interface_count.is_set || is_set(known_ip_interface_count.operation)) leaf_name_data.push_back(known_ip_interface_count.get_name_leafdata());
    if (known_ip_interface_ldp_enabled.is_set || is_set(known_ip_interface_ldp_enabled.operation)) leaf_name_data.push_back(known_ip_interface_ldp_enabled.get_name_leafdata());
    if (ldp_configured_attached_interface.is_set || is_set(ldp_configured_attached_interface.operation)) leaf_name_data.push_back(ldp_configured_attached_interface.get_name_leafdata());
    if (ldp_configured_te_interface.is_set || is_set(ldp_configured_te_interface.operation)) leaf_name_data.push_back(ldp_configured_te_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::InterfaceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Active::DefaultVrf::Afs::Af::InterfaceSummary::get_children()
{
    return children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::InterfaceSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto-config")
    {
        auto_config = value;
    }
    if(value_path == "auto-config-disabled")
    {
        auto_config_disabled = value;
    }
    if(value_path == "auto-config-forward-reference-interfaces")
    {
        auto_config_forward_reference_interfaces = value;
    }
    if(value_path == "forward-references")
    {
        forward_references = value;
    }
    if(value_path == "known-ip-interface-count")
    {
        known_ip_interface_count = value;
    }
    if(value_path == "known-ip-interface-ldp-enabled")
    {
        known_ip_interface_ldp_enabled = value;
    }
    if(value_path == "ldp-configured-attached-interface")
    {
        ldp_configured_attached_interface = value;
    }
    if(value_path == "ldp-configured-te-interface")
    {
        ldp_configured_te_interface = value;
    }
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Bindings()
{
    yang_name = "bindings"; yang_parent_name = "af";
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::~Bindings()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::has_data() const
{
    for (std::size_t index=0; index<binding.size(); index++)
    {
        if(binding[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::has_operation() const
{
    for (std::size_t index=0; index<binding.size(); index++)
    {
        if(binding[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bindings";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bindings' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "binding")
    {
        for(auto const & c : binding)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding>();
        c->parent = this;
        binding.push_back(std::move(c));
        children[segment_path] = binding.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::get_children()
{
    for (auto const & c : binding)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::Binding()
    :
    prefix{YType::str, "prefix"},
    advertise_prefix_acl{YType::str, "advertise-prefix-acl"},
    advertise_tsr_acl{YType::str, "advertise-tsr-acl"},
    config_enforced_local_label_value{YType::boolean, "config-enforced-local-label-value"},
    is_elc{YType::boolean, "is-elc"},
    is_no_route{YType::boolean, "is-no-route"},
    label_oor{YType::boolean, "label-oor"},
    le_local_binding_revision{YType::uint32, "le-local-binding-revision"},
    le_local_label_state{YType::enumeration, "le-local-label-state"},
    local_label{YType::uint32, "local-label"},
    prefix_length{YType::uint8, "prefix-length"}
    	,
    prefix_xr(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr>())
	,vrf(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::Vrf>())
{
    prefix_xr->parent = this;
    children["prefix-xr"] = prefix_xr;

    vrf->parent = this;
    children["vrf"] = vrf;

    yang_name = "binding"; yang_parent_name = "bindings";
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::~Binding()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::has_data() const
{
    for (std::size_t index=0; index<peers_acked.size(); index++)
    {
        if(peers_acked[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<peers_advertised_to.size(); index++)
    {
        if(peers_advertised_to[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<remote_binding.size(); index++)
    {
        if(remote_binding[index]->has_data())
            return true;
    }
    return prefix.is_set
	|| advertise_prefix_acl.is_set
	|| advertise_tsr_acl.is_set
	|| config_enforced_local_label_value.is_set
	|| is_elc.is_set
	|| is_no_route.is_set
	|| label_oor.is_set
	|| le_local_binding_revision.is_set
	|| le_local_label_state.is_set
	|| local_label.is_set
	|| prefix_length.is_set
	|| (prefix_xr !=  nullptr && prefix_xr->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::has_operation() const
{
    for (std::size_t index=0; index<peers_acked.size(); index++)
    {
        if(peers_acked[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<peers_advertised_to.size(); index++)
    {
        if(peers_advertised_to[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<remote_binding.size(); index++)
    {
        if(remote_binding[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(advertise_prefix_acl.operation)
	|| is_set(advertise_tsr_acl.operation)
	|| is_set(config_enforced_local_label_value.operation)
	|| is_set(is_elc.operation)
	|| is_set(is_no_route.operation)
	|| is_set(label_oor.operation)
	|| is_set(le_local_binding_revision.operation)
	|| is_set(le_local_label_state.operation)
	|| is_set(local_label.operation)
	|| is_set(prefix_length.operation)
	|| (prefix_xr !=  nullptr && prefix_xr->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "binding" <<"[prefix='" <<prefix <<"']";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Binding' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (advertise_prefix_acl.is_set || is_set(advertise_prefix_acl.operation)) leaf_name_data.push_back(advertise_prefix_acl.get_name_leafdata());
    if (advertise_tsr_acl.is_set || is_set(advertise_tsr_acl.operation)) leaf_name_data.push_back(advertise_tsr_acl.get_name_leafdata());
    if (config_enforced_local_label_value.is_set || is_set(config_enforced_local_label_value.operation)) leaf_name_data.push_back(config_enforced_local_label_value.get_name_leafdata());
    if (is_elc.is_set || is_set(is_elc.operation)) leaf_name_data.push_back(is_elc.get_name_leafdata());
    if (is_no_route.is_set || is_set(is_no_route.operation)) leaf_name_data.push_back(is_no_route.get_name_leafdata());
    if (label_oor.is_set || is_set(label_oor.operation)) leaf_name_data.push_back(label_oor.get_name_leafdata());
    if (le_local_binding_revision.is_set || is_set(le_local_binding_revision.operation)) leaf_name_data.push_back(le_local_binding_revision.get_name_leafdata());
    if (le_local_label_state.is_set || is_set(le_local_label_state.operation)) leaf_name_data.push_back(le_local_label_state.get_name_leafdata());
    if (local_label.is_set || is_set(local_label.operation)) leaf_name_data.push_back(local_label.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peers-acked")
    {
        for(auto const & c : peers_acked)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PeersAcked>();
        c->parent = this;
        peers_acked.push_back(std::move(c));
        children[segment_path] = peers_acked.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "peers-advertised-to")
    {
        for(auto const & c : peers_advertised_to)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo>();
        c->parent = this;
        peers_advertised_to.push_back(std::move(c));
        children[segment_path] = peers_advertised_to.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "prefix-xr")
    {
        if(prefix_xr != nullptr)
        {
            children["prefix-xr"] = prefix_xr;
        }
        else
        {
            prefix_xr = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr>();
            prefix_xr->parent = this;
            children["prefix-xr"] = prefix_xr;
        }
        return children.at("prefix-xr");
    }

    if(child_yang_name == "remote-binding")
    {
        for(auto const & c : remote_binding)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding>();
        c->parent = this;
        remote_binding.push_back(std::move(c));
        children[segment_path] = remote_binding.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
        else
        {
            vrf = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::Vrf>();
            vrf->parent = this;
            children["vrf"] = vrf;
        }
        return children.at("vrf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::get_children()
{
    for (auto const & c : peers_acked)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : peers_advertised_to)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("prefix-xr") == children.end())
    {
        if(prefix_xr != nullptr)
        {
            children["prefix-xr"] = prefix_xr;
        }
    }

    for (auto const & c : remote_binding)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("vrf") == children.end())
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
    }

    return children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "advertise-prefix-acl")
    {
        advertise_prefix_acl = value;
    }
    if(value_path == "advertise-tsr-acl")
    {
        advertise_tsr_acl = value;
    }
    if(value_path == "config-enforced-local-label-value")
    {
        config_enforced_local_label_value = value;
    }
    if(value_path == "is-elc")
    {
        is_elc = value;
    }
    if(value_path == "is-no-route")
    {
        is_no_route = value;
    }
    if(value_path == "label-oor")
    {
        label_oor = value;
    }
    if(value_path == "le-local-binding-revision")
    {
        le_local_binding_revision = value;
    }
    if(value_path == "le-local-label-state")
    {
        le_local_label_state = value;
    }
    if(value_path == "local-label")
    {
        local_label = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::Vrf::Vrf()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "binding";
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::Vrf::~Vrf()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::Vrf::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::Vrf::get_children()
{
    return children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr::PrefixXr()
    :
    afi{YType::enumeration, "afi"},
    dummy{YType::uint8, "dummy"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "prefix-xr"; yang_parent_name = "binding";
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr::~PrefixXr()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr::has_data() const
{
    return afi.is_set
	|| dummy.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(dummy.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-xr";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixXr' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (dummy.is_set || is_set(dummy.operation)) leaf_name_data.push_back(dummy.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr::get_children()
{
    return children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PrefixXr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "dummy")
    {
        dummy = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::RemoteBinding()
    :
    is_elc{YType::boolean, "is-elc"},
    is_stale{YType::boolean, "is-stale"},
    remote_label{YType::uint32, "remote-label"}
    	,
    assigning_peer_ldp_ident(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent>())
{
    assigning_peer_ldp_ident->parent = this;
    children["assigning-peer-ldp-ident"] = assigning_peer_ldp_ident;

    yang_name = "remote-binding"; yang_parent_name = "binding";
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::~RemoteBinding()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::has_data() const
{
    return is_elc.is_set
	|| is_stale.is_set
	|| remote_label.is_set
	|| (assigning_peer_ldp_ident !=  nullptr && assigning_peer_ldp_ident->has_data());
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::has_operation() const
{
    return is_set(operation)
	|| is_set(is_elc.operation)
	|| is_set(is_stale.operation)
	|| is_set(remote_label.operation)
	|| (assigning_peer_ldp_ident !=  nullptr && assigning_peer_ldp_ident->has_operation());
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-binding";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteBinding' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_elc.is_set || is_set(is_elc.operation)) leaf_name_data.push_back(is_elc.get_name_leafdata());
    if (is_stale.is_set || is_set(is_stale.operation)) leaf_name_data.push_back(is_stale.get_name_leafdata());
    if (remote_label.is_set || is_set(remote_label.operation)) leaf_name_data.push_back(remote_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "assigning-peer-ldp-ident")
    {
        if(assigning_peer_ldp_ident != nullptr)
        {
            children["assigning-peer-ldp-ident"] = assigning_peer_ldp_ident;
        }
        else
        {
            assigning_peer_ldp_ident = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent>();
            assigning_peer_ldp_ident->parent = this;
            children["assigning-peer-ldp-ident"] = assigning_peer_ldp_ident;
        }
        return children.at("assigning-peer-ldp-ident");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::get_children()
{
    if(children.find("assigning-peer-ldp-ident") == children.end())
    {
        if(assigning_peer_ldp_ident != nullptr)
        {
            children["assigning-peer-ldp-ident"] = assigning_peer_ldp_ident;
        }
    }

    return children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-elc")
    {
        is_elc = value;
    }
    if(value_path == "is-stale")
    {
        is_stale = value;
    }
    if(value_path == "remote-label")
    {
        remote_label = value;
    }
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::AssigningPeerLdpIdent()
    :
    label_space_id{YType::uint16, "label-space-id"},
    ldp_id{YType::str, "ldp-id"},
    lsr_id{YType::str, "lsr-id"}
{
    yang_name = "assigning-peer-ldp-ident"; yang_parent_name = "remote-binding";
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::~AssigningPeerLdpIdent()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::has_data() const
{
    return label_space_id.is_set
	|| ldp_id.is_set
	|| lsr_id.is_set;
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::has_operation() const
{
    return is_set(operation)
	|| is_set(label_space_id.operation)
	|| is_set(ldp_id.operation)
	|| is_set(lsr_id.operation);
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "assigning-peer-ldp-ident";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AssigningPeerLdpIdent' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_space_id.is_set || is_set(label_space_id.operation)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (ldp_id.is_set || is_set(ldp_id.operation)) leaf_name_data.push_back(ldp_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.operation)) leaf_name_data.push_back(lsr_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::get_children()
{
    return children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::RemoteBinding::AssigningPeerLdpIdent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-space-id")
    {
        label_space_id = value;
    }
    if(value_path == "ldp-id")
    {
        ldp_id = value;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
    }
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo::PeersAdvertisedTo()
    :
    label_space_id{YType::uint16, "label-space-id"},
    ldp_id{YType::str, "ldp-id"},
    lsr_id{YType::str, "lsr-id"}
{
    yang_name = "peers-advertised-to"; yang_parent_name = "binding";
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo::~PeersAdvertisedTo()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo::has_data() const
{
    return label_space_id.is_set
	|| ldp_id.is_set
	|| lsr_id.is_set;
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo::has_operation() const
{
    return is_set(operation)
	|| is_set(label_space_id.operation)
	|| is_set(ldp_id.operation)
	|| is_set(lsr_id.operation);
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers-advertised-to";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeersAdvertisedTo' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_space_id.is_set || is_set(label_space_id.operation)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (ldp_id.is_set || is_set(ldp_id.operation)) leaf_name_data.push_back(ldp_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.operation)) leaf_name_data.push_back(lsr_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo::get_children()
{
    return children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PeersAdvertisedTo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-space-id")
    {
        label_space_id = value;
    }
    if(value_path == "ldp-id")
    {
        ldp_id = value;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
    }
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PeersAcked::PeersAcked()
    :
    label_space_id{YType::uint16, "label-space-id"},
    ldp_id{YType::str, "ldp-id"},
    lsr_id{YType::str, "lsr-id"}
{
    yang_name = "peers-acked"; yang_parent_name = "binding";
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PeersAcked::~PeersAcked()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PeersAcked::has_data() const
{
    return label_space_id.is_set
	|| ldp_id.is_set
	|| lsr_id.is_set;
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PeersAcked::has_operation() const
{
    return is_set(operation)
	|| is_set(label_space_id.operation)
	|| is_set(ldp_id.operation)
	|| is_set(lsr_id.operation);
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PeersAcked::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers-acked";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PeersAcked::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeersAcked' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_space_id.is_set || is_set(label_space_id.operation)) leaf_name_data.push_back(label_space_id.get_name_leafdata());
    if (ldp_id.is_set || is_set(ldp_id.operation)) leaf_name_data.push_back(ldp_id.get_name_leafdata());
    if (lsr_id.is_set || is_set(lsr_id.operation)) leaf_name_data.push_back(lsr_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PeersAcked::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PeersAcked::get_children()
{
    return children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Bindings::Binding::PeersAcked::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label-space-id")
    {
        label_space_id = value;
    }
    if(value_path == "ldp-id")
    {
        ldp_id = value;
    }
    if(value_path == "lsr-id")
    {
        lsr_id = value;
    }
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Igp()
    :
    sync_delay_restart(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::SyncDelayRestart>())
	,syncs(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs>())
{
    sync_delay_restart->parent = this;
    children["sync-delay-restart"] = sync_delay_restart;

    syncs->parent = this;
    children["syncs"] = syncs;

    yang_name = "igp"; yang_parent_name = "af";
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::~Igp()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::has_data() const
{
    return (sync_delay_restart !=  nullptr && sync_delay_restart->has_data())
	|| (syncs !=  nullptr && syncs->has_data());
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::has_operation() const
{
    return is_set(operation)
	|| (sync_delay_restart !=  nullptr && sync_delay_restart->has_operation())
	|| (syncs !=  nullptr && syncs->has_operation());
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Igp' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sync-delay-restart")
    {
        if(sync_delay_restart != nullptr)
        {
            children["sync-delay-restart"] = sync_delay_restart;
        }
        else
        {
            sync_delay_restart = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::SyncDelayRestart>();
            sync_delay_restart->parent = this;
            children["sync-delay-restart"] = sync_delay_restart;
        }
        return children.at("sync-delay-restart");
    }

    if(child_yang_name == "syncs")
    {
        if(syncs != nullptr)
        {
            children["syncs"] = syncs;
        }
        else
        {
            syncs = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs>();
            syncs->parent = this;
            children["syncs"] = syncs;
        }
        return children.at("syncs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::get_children()
{
    if(children.find("sync-delay-restart") == children.end())
    {
        if(sync_delay_restart != nullptr)
        {
            children["sync-delay-restart"] = sync_delay_restart;
        }
    }

    if(children.find("syncs") == children.end())
    {
        if(syncs != nullptr)
        {
            children["syncs"] = syncs;
        }
    }

    return children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Syncs()
{
    yang_name = "syncs"; yang_parent_name = "igp";
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::~Syncs()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::has_data() const
{
    for (std::size_t index=0; index<sync.size(); index++)
    {
        if(sync[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::has_operation() const
{
    for (std::size_t index=0; index<sync.size(); index++)
    {
        if(sync[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "syncs";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Syncs' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sync")
    {
        for(auto const & c : sync)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync>();
        c->parent = this;
        sync.push_back(std::move(c));
        children[segment_path] = sync.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::get_children()
{
    for (auto const & c : sync)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Sync()
    :
    interface_name{YType::str, "interface-name"},
    delay_timer_remaining{YType::uint32, "delay-timer-remaining"},
    igp_sync_delay{YType::uint32, "igp-sync-delay"},
    igp_sync_down_reason{YType::enumeration, "igp-sync-down-reason"},
    igp_sync_state{YType::enumeration, "igp-sync-state"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_delay_timer_running{YType::boolean, "is-delay-timer-running"}
    	,
    vrf(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf>())
{
    vrf->parent = this;
    children["vrf"] = vrf;

    yang_name = "sync"; yang_parent_name = "syncs";
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::~Sync()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::has_data() const
{
    for (std::size_t index=0; index<gr_only_peer.size(); index++)
    {
        if(gr_only_peer[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<peers.size(); index++)
    {
        if(peers[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| delay_timer_remaining.is_set
	|| igp_sync_delay.is_set
	|| igp_sync_down_reason.is_set
	|| igp_sync_state.is_set
	|| interface_name_xr.is_set
	|| is_delay_timer_running.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::has_operation() const
{
    for (std::size_t index=0; index<gr_only_peer.size(); index++)
    {
        if(gr_only_peer[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<peers.size(); index++)
    {
        if(peers[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(delay_timer_remaining.operation)
	|| is_set(igp_sync_delay.operation)
	|| is_set(igp_sync_down_reason.operation)
	|| is_set(igp_sync_state.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_delay_timer_running.operation)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sync' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (delay_timer_remaining.is_set || is_set(delay_timer_remaining.operation)) leaf_name_data.push_back(delay_timer_remaining.get_name_leafdata());
    if (igp_sync_delay.is_set || is_set(igp_sync_delay.operation)) leaf_name_data.push_back(igp_sync_delay.get_name_leafdata());
    if (igp_sync_down_reason.is_set || is_set(igp_sync_down_reason.operation)) leaf_name_data.push_back(igp_sync_down_reason.get_name_leafdata());
    if (igp_sync_state.is_set || is_set(igp_sync_state.operation)) leaf_name_data.push_back(igp_sync_state.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_delay_timer_running.is_set || is_set(is_delay_timer_running.operation)) leaf_name_data.push_back(is_delay_timer_running.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "gr-only-peer")
    {
        for(auto const & c : gr_only_peer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer>();
        c->parent = this;
        gr_only_peer.push_back(std::move(c));
        children[segment_path] = gr_only_peer.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "peers")
    {
        for(auto const & c : peers)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Peers>();
        c->parent = this;
        peers.push_back(std::move(c));
        children[segment_path] = peers.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
        else
        {
            vrf = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf>();
            vrf->parent = this;
            children["vrf"] = vrf;
        }
        return children.at("vrf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::get_children()
{
    for (auto const & c : gr_only_peer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : peers)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("vrf") == children.end())
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
    }

    return children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "delay-timer-remaining")
    {
        delay_timer_remaining = value;
    }
    if(value_path == "igp-sync-delay")
    {
        igp_sync_delay = value;
    }
    if(value_path == "igp-sync-down-reason")
    {
        igp_sync_down_reason = value;
    }
    if(value_path == "igp-sync-state")
    {
        igp_sync_state = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-delay-timer-running")
    {
        is_delay_timer_running = value;
    }
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf::Vrf()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "sync";
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf::~Vrf()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf::get_children()
{
    return children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Peers::Peers()
    :
    is_gr_enabled{YType::boolean, "is-gr-enabled"},
    peer_id{YType::str, "peer-id"}
{
    yang_name = "peers"; yang_parent_name = "sync";
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Peers::~Peers()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Peers::has_data() const
{
    return is_gr_enabled.is_set
	|| peer_id.is_set;
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Peers::has_operation() const
{
    return is_set(operation)
	|| is_set(is_gr_enabled.operation)
	|| is_set(peer_id.operation);
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Peers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peers";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Peers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Peers' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_gr_enabled.is_set || is_set(is_gr_enabled.operation)) leaf_name_data.push_back(is_gr_enabled.get_name_leafdata());
    if (peer_id.is_set || is_set(peer_id.operation)) leaf_name_data.push_back(peer_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Peers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Peers::get_children()
{
    return children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::Peers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-gr-enabled")
    {
        is_gr_enabled = value;
    }
    if(value_path == "peer-id")
    {
        peer_id = value;
    }
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer::GrOnlyPeer()
    :
    is_chkpt_created{YType::boolean, "is-chkpt-created"},
    peer_id{YType::str, "peer-id"}
{
    yang_name = "gr-only-peer"; yang_parent_name = "sync";
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer::~GrOnlyPeer()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer::has_data() const
{
    return is_chkpt_created.is_set
	|| peer_id.is_set;
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer::has_operation() const
{
    return is_set(operation)
	|| is_set(is_chkpt_created.operation)
	|| is_set(peer_id.operation);
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "gr-only-peer";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GrOnlyPeer' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_chkpt_created.is_set || is_set(is_chkpt_created.operation)) leaf_name_data.push_back(is_chkpt_created.get_name_leafdata());
    if (peer_id.is_set || is_set(peer_id.operation)) leaf_name_data.push_back(peer_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer::get_children()
{
    return children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::Syncs::Sync::GrOnlyPeer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-chkpt-created")
    {
        is_chkpt_created = value;
    }
    if(value_path == "peer-id")
    {
        peer_id = value;
    }
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::SyncDelayRestart::SyncDelayRestart()
    :
    configured{YType::boolean, "configured"},
    delay_secs{YType::uint32, "delay-secs"},
    remaining_secs{YType::uint32, "remaining-secs"},
    timer_running{YType::boolean, "timer-running"}
{
    yang_name = "sync-delay-restart"; yang_parent_name = "igp";
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::SyncDelayRestart::~SyncDelayRestart()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::SyncDelayRestart::has_data() const
{
    return configured.is_set
	|| delay_secs.is_set
	|| remaining_secs.is_set
	|| timer_running.is_set;
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::SyncDelayRestart::has_operation() const
{
    return is_set(operation)
	|| is_set(configured.operation)
	|| is_set(delay_secs.operation)
	|| is_set(remaining_secs.operation)
	|| is_set(timer_running.operation);
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::SyncDelayRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sync-delay-restart";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::SyncDelayRestart::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SyncDelayRestart' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured.is_set || is_set(configured.operation)) leaf_name_data.push_back(configured.get_name_leafdata());
    if (delay_secs.is_set || is_set(delay_secs.operation)) leaf_name_data.push_back(delay_secs.get_name_leafdata());
    if (remaining_secs.is_set || is_set(remaining_secs.operation)) leaf_name_data.push_back(remaining_secs.get_name_leafdata());
    if (timer_running.is_set || is_set(timer_running.operation)) leaf_name_data.push_back(timer_running.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::SyncDelayRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::SyncDelayRestart::get_children()
{
    return children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Igp::SyncDelayRestart::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "configured")
    {
        configured = value;
    }
    if(value_path == "delay-secs")
    {
        delay_secs = value;
    }
    if(value_path == "remaining-secs")
    {
        remaining_secs = value;
    }
    if(value_path == "timer-running")
    {
        timer_running = value;
    }
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::BindingsSummary()
    :
    address_family{YType::enumeration, "address-family"},
    binding_local_explicit_null{YType::uint32, "binding-local-explicit-null"},
    binding_local_implicit_null{YType::uint32, "binding-local-implicit-null"},
    binding_local_no_route{YType::uint32, "binding-local-no-route"},
    binding_local_non_null{YType::uint32, "binding-local-non-null"},
    binding_local_null{YType::uint32, "binding-local-null"},
    binding_local_oor{YType::uint32, "binding-local-oor"},
    binding_no_route{YType::uint32, "binding-no-route"},
    highest_allocated_label{YType::uint32, "highest-allocated-label"},
    lowest_allocated_label{YType::uint32, "lowest-allocated-label"}
    	,
    vrf(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::Vrf>())
{
    vrf->parent = this;
    children["vrf"] = vrf;

    yang_name = "bindings-summary"; yang_parent_name = "af";
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::~BindingsSummary()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::has_data() const
{
    for (std::size_t index=0; index<bind_af.size(); index++)
    {
        if(bind_af[index]->has_data())
            return true;
    }
    return address_family.is_set
	|| binding_local_explicit_null.is_set
	|| binding_local_implicit_null.is_set
	|| binding_local_no_route.is_set
	|| binding_local_non_null.is_set
	|| binding_local_null.is_set
	|| binding_local_oor.is_set
	|| binding_no_route.is_set
	|| highest_allocated_label.is_set
	|| lowest_allocated_label.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::has_operation() const
{
    for (std::size_t index=0; index<bind_af.size(); index++)
    {
        if(bind_af[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(address_family.operation)
	|| is_set(binding_local_explicit_null.operation)
	|| is_set(binding_local_implicit_null.operation)
	|| is_set(binding_local_no_route.operation)
	|| is_set(binding_local_non_null.operation)
	|| is_set(binding_local_null.operation)
	|| is_set(binding_local_oor.operation)
	|| is_set(binding_no_route.operation)
	|| is_set(highest_allocated_label.operation)
	|| is_set(lowest_allocated_label.operation)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bindings-summary";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BindingsSummary' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (binding_local_explicit_null.is_set || is_set(binding_local_explicit_null.operation)) leaf_name_data.push_back(binding_local_explicit_null.get_name_leafdata());
    if (binding_local_implicit_null.is_set || is_set(binding_local_implicit_null.operation)) leaf_name_data.push_back(binding_local_implicit_null.get_name_leafdata());
    if (binding_local_no_route.is_set || is_set(binding_local_no_route.operation)) leaf_name_data.push_back(binding_local_no_route.get_name_leafdata());
    if (binding_local_non_null.is_set || is_set(binding_local_non_null.operation)) leaf_name_data.push_back(binding_local_non_null.get_name_leafdata());
    if (binding_local_null.is_set || is_set(binding_local_null.operation)) leaf_name_data.push_back(binding_local_null.get_name_leafdata());
    if (binding_local_oor.is_set || is_set(binding_local_oor.operation)) leaf_name_data.push_back(binding_local_oor.get_name_leafdata());
    if (binding_no_route.is_set || is_set(binding_no_route.operation)) leaf_name_data.push_back(binding_no_route.get_name_leafdata());
    if (highest_allocated_label.is_set || is_set(highest_allocated_label.operation)) leaf_name_data.push_back(highest_allocated_label.get_name_leafdata());
    if (lowest_allocated_label.is_set || is_set(lowest_allocated_label.operation)) leaf_name_data.push_back(lowest_allocated_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bind-af")
    {
        for(auto const & c : bind_af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::BindAf>();
        c->parent = this;
        bind_af.push_back(std::move(c));
        children[segment_path] = bind_af.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
        else
        {
            vrf = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::Vrf>();
            vrf->parent = this;
            children["vrf"] = vrf;
        }
        return children.at("vrf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::get_children()
{
    for (auto const & c : bind_af)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("vrf") == children.end())
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
    }

    return children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family")
    {
        address_family = value;
    }
    if(value_path == "binding-local-explicit-null")
    {
        binding_local_explicit_null = value;
    }
    if(value_path == "binding-local-implicit-null")
    {
        binding_local_implicit_null = value;
    }
    if(value_path == "binding-local-no-route")
    {
        binding_local_no_route = value;
    }
    if(value_path == "binding-local-non-null")
    {
        binding_local_non_null = value;
    }
    if(value_path == "binding-local-null")
    {
        binding_local_null = value;
    }
    if(value_path == "binding-local-oor")
    {
        binding_local_oor = value;
    }
    if(value_path == "binding-no-route")
    {
        binding_no_route = value;
    }
    if(value_path == "highest-allocated-label")
    {
        highest_allocated_label = value;
    }
    if(value_path == "lowest-allocated-label")
    {
        lowest_allocated_label = value;
    }
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::Vrf::Vrf()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "bindings-summary";
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::Vrf::~Vrf()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::Vrf::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::Vrf::get_children()
{
    return children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::BindAf::BindAf()
    :
    address_family{YType::enumeration, "address-family"},
    binding_local{YType::uint32, "binding-local"},
    binding_remote{YType::uint32, "binding-remote"},
    binding_total{YType::uint32, "binding-total"},
    last_lib_update{YType::uint32, "last-lib-update"},
    lib_minimum_revision_sent_all{YType::uint32, "lib-minimum-revision-sent-all"}
{
    yang_name = "bind-af"; yang_parent_name = "bindings-summary";
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::BindAf::~BindAf()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::BindAf::has_data() const
{
    return address_family.is_set
	|| binding_local.is_set
	|| binding_remote.is_set
	|| binding_total.is_set
	|| last_lib_update.is_set
	|| lib_minimum_revision_sent_all.is_set;
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::BindAf::has_operation() const
{
    return is_set(operation)
	|| is_set(address_family.operation)
	|| is_set(binding_local.operation)
	|| is_set(binding_remote.operation)
	|| is_set(binding_total.operation)
	|| is_set(last_lib_update.operation)
	|| is_set(lib_minimum_revision_sent_all.operation);
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::BindAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bind-af";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::BindAf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BindAf' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (binding_local.is_set || is_set(binding_local.operation)) leaf_name_data.push_back(binding_local.get_name_leafdata());
    if (binding_remote.is_set || is_set(binding_remote.operation)) leaf_name_data.push_back(binding_remote.get_name_leafdata());
    if (binding_total.is_set || is_set(binding_total.operation)) leaf_name_data.push_back(binding_total.get_name_leafdata());
    if (last_lib_update.is_set || is_set(last_lib_update.operation)) leaf_name_data.push_back(last_lib_update.get_name_leafdata());
    if (lib_minimum_revision_sent_all.is_set || is_set(lib_minimum_revision_sent_all.operation)) leaf_name_data.push_back(lib_minimum_revision_sent_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::BindAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::BindAf::get_children()
{
    return children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::BindingsSummary::BindAf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-family")
    {
        address_family = value;
    }
    if(value_path == "binding-local")
    {
        binding_local = value;
    }
    if(value_path == "binding-remote")
    {
        binding_remote = value;
    }
    if(value_path == "binding-total")
    {
        binding_total = value;
    }
    if(value_path == "last-lib-update")
    {
        last_lib_update = value;
    }
    if(value_path == "lib-minimum-revision-sent-all")
    {
        lib_minimum_revision_sent_all = value;
    }
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "af";
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::~Interfaces()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interfaces' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    interface{YType::str, "interface"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_im_stale{YType::boolean, "is-im-stale"},
    ldp_autoconfig_disable{YType::boolean, "ldp-autoconfig-disable"},
    ldp_config_mode{YType::boolean, "ldp-config-mode"},
    ldp_enabled{YType::boolean, "ldp-enabled"}
    	,
    vrf(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf>())
{
    vrf->parent = this;
    children["vrf"] = vrf;

    yang_name = "interface"; yang_parent_name = "interfaces";
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::~Interface()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::has_data() const
{
    for (std::size_t index=0; index<auto_config.size(); index++)
    {
        if(auto_config[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<te_mesh_grp.size(); index++)
    {
        if(te_mesh_grp[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| interface.is_set
	|| interface_name_xr.is_set
	|| is_im_stale.is_set
	|| ldp_autoconfig_disable.is_set
	|| ldp_config_mode.is_set
	|| ldp_enabled.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<auto_config.size(); index++)
    {
        if(auto_config[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<te_mesh_grp.size(); index++)
    {
        if(te_mesh_grp[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(interface.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_im_stale.operation)
	|| is_set(ldp_autoconfig_disable.operation)
	|| is_set(ldp_config_mode.operation)
	|| is_set(ldp_enabled.operation)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_im_stale.is_set || is_set(is_im_stale.operation)) leaf_name_data.push_back(is_im_stale.get_name_leafdata());
    if (ldp_autoconfig_disable.is_set || is_set(ldp_autoconfig_disable.operation)) leaf_name_data.push_back(ldp_autoconfig_disable.get_name_leafdata());
    if (ldp_config_mode.is_set || is_set(ldp_config_mode.operation)) leaf_name_data.push_back(ldp_config_mode.get_name_leafdata());
    if (ldp_enabled.is_set || is_set(ldp_enabled.operation)) leaf_name_data.push_back(ldp_enabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "auto-config")
    {
        for(auto const & c : auto_config)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::AutoConfig>();
        c->parent = this;
        auto_config.push_back(std::move(c));
        children[segment_path] = auto_config.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "te-mesh-grp")
    {
        for(auto const & c : te_mesh_grp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::TeMeshGrp>();
        c->parent = this;
        te_mesh_grp.push_back(std::move(c));
        children[segment_path] = te_mesh_grp.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
        else
        {
            vrf = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf>();
            vrf->parent = this;
            children["vrf"] = vrf;
        }
        return children.at("vrf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::get_children()
{
    for (auto const & c : auto_config)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : te_mesh_grp)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("vrf") == children.end())
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
    }

    return children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-im-stale")
    {
        is_im_stale = value;
    }
    if(value_path == "ldp-autoconfig-disable")
    {
        ldp_autoconfig_disable = value;
    }
    if(value_path == "ldp-config-mode")
    {
        ldp_config_mode = value;
    }
    if(value_path == "ldp-enabled")
    {
        ldp_enabled = value;
    }
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf::Vrf()
    :
    id{YType::uint32, "id"},
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "interface";
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf::~Vrf()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf::has_data() const
{
    return id.is_set
	|| name.is_set;
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(name.operation);
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf::get_children()
{
    return children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::TeMeshGrp::TeMeshGrp()
    :
    ldp_mesh_group_enabled{YType::boolean, "ldp-mesh-group-enabled"},
    ldp_te_mesh_group_all_cfgd{YType::boolean, "ldp-te-mesh-group-all-cfgd"},
    te_mesh_group_id{YType::uint32, "te-mesh-group-id"}
{
    yang_name = "te-mesh-grp"; yang_parent_name = "interface";
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::TeMeshGrp::~TeMeshGrp()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::TeMeshGrp::has_data() const
{
    return ldp_mesh_group_enabled.is_set
	|| ldp_te_mesh_group_all_cfgd.is_set
	|| te_mesh_group_id.is_set;
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::TeMeshGrp::has_operation() const
{
    return is_set(operation)
	|| is_set(ldp_mesh_group_enabled.operation)
	|| is_set(ldp_te_mesh_group_all_cfgd.operation)
	|| is_set(te_mesh_group_id.operation);
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::TeMeshGrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "te-mesh-grp";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::TeMeshGrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TeMeshGrp' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ldp_mesh_group_enabled.is_set || is_set(ldp_mesh_group_enabled.operation)) leaf_name_data.push_back(ldp_mesh_group_enabled.get_name_leafdata());
    if (ldp_te_mesh_group_all_cfgd.is_set || is_set(ldp_te_mesh_group_all_cfgd.operation)) leaf_name_data.push_back(ldp_te_mesh_group_all_cfgd.get_name_leafdata());
    if (te_mesh_group_id.is_set || is_set(te_mesh_group_id.operation)) leaf_name_data.push_back(te_mesh_group_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::TeMeshGrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::TeMeshGrp::get_children()
{
    return children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::TeMeshGrp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ldp-mesh-group-enabled")
    {
        ldp_mesh_group_enabled = value;
    }
    if(value_path == "ldp-te-mesh-group-all-cfgd")
    {
        ldp_te_mesh_group_all_cfgd = value;
    }
    if(value_path == "te-mesh-group-id")
    {
        te_mesh_group_id = value;
    }
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::AutoConfig::AutoConfig()
    :
    tuple{YType::str, "tuple"}
{
    yang_name = "auto-config"; yang_parent_name = "interface";
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::AutoConfig::~AutoConfig()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::AutoConfig::has_data() const
{
    return tuple.is_set;
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::AutoConfig::has_operation() const
{
    return is_set(operation)
	|| is_set(tuple.operation);
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::AutoConfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-config";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::AutoConfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AutoConfig' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tuple.is_set || is_set(tuple.operation)) leaf_name_data.push_back(tuple.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::AutoConfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::AutoConfig::get_children()
{
    return children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Interfaces::Interface::AutoConfig::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tuple")
    {
        tuple = value;
    }
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Discovery()
    :
    brief(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Brief>())
	,link_hellos(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos>())
	,stats(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Stats>())
	,summary(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Summary>())
	,targeted_hellos(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::TargetedHellos>())
{
    brief->parent = this;
    children["brief"] = brief;

    link_hellos->parent = this;
    children["link-hellos"] = link_hellos;

    stats->parent = this;
    children["stats"] = stats;

    summary->parent = this;
    children["summary"] = summary;

    targeted_hellos->parent = this;
    children["targeted-hellos"] = targeted_hellos;

    yang_name = "discovery"; yang_parent_name = "af";
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::~Discovery()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::has_data() const
{
    return (brief !=  nullptr && brief->has_data())
	|| (link_hellos !=  nullptr && link_hellos->has_data())
	|| (stats !=  nullptr && stats->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (targeted_hellos !=  nullptr && targeted_hellos->has_data());
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::has_operation() const
{
    return is_set(operation)
	|| (brief !=  nullptr && brief->has_operation())
	|| (link_hellos !=  nullptr && link_hellos->has_operation())
	|| (stats !=  nullptr && stats->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (targeted_hellos !=  nullptr && targeted_hellos->has_operation());
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Discovery' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "brief")
    {
        if(brief != nullptr)
        {
            children["brief"] = brief;
        }
        else
        {
            brief = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Brief>();
            brief->parent = this;
            children["brief"] = brief;
        }
        return children.at("brief");
    }

    if(child_yang_name == "link-hellos")
    {
        if(link_hellos != nullptr)
        {
            children["link-hellos"] = link_hellos;
        }
        else
        {
            link_hellos = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos>();
            link_hellos->parent = this;
            children["link-hellos"] = link_hellos;
        }
        return children.at("link-hellos");
    }

    if(child_yang_name == "stats")
    {
        if(stats != nullptr)
        {
            children["stats"] = stats;
        }
        else
        {
            stats = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Stats>();
            stats->parent = this;
            children["stats"] = stats;
        }
        return children.at("stats");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
        else
        {
            summary = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::Summary>();
            summary->parent = this;
            children["summary"] = summary;
        }
        return children.at("summary");
    }

    if(child_yang_name == "targeted-hellos")
    {
        if(targeted_hellos != nullptr)
        {
            children["targeted-hellos"] = targeted_hellos;
        }
        else
        {
            targeted_hellos = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::TargetedHellos>();
            targeted_hellos->parent = this;
            children["targeted-hellos"] = targeted_hellos;
        }
        return children.at("targeted-hellos");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::get_children()
{
    if(children.find("brief") == children.end())
    {
        if(brief != nullptr)
        {
            children["brief"] = brief;
        }
    }

    if(children.find("link-hellos") == children.end())
    {
        if(link_hellos != nullptr)
        {
            children["link-hellos"] = link_hellos;
        }
    }

    if(children.find("stats") == children.end())
    {
        if(stats != nullptr)
        {
            children["stats"] = stats;
        }
    }

    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
    }

    if(children.find("targeted-hellos") == children.end())
    {
        if(targeted_hellos != nullptr)
        {
            children["targeted-hellos"] = targeted_hellos;
        }
    }

    return children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHellos()
{
    yang_name = "link-hellos"; yang_parent_name = "discovery";
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::~LinkHellos()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::has_data() const
{
    for (std::size_t index=0; index<link_hello.size(); index++)
    {
        if(link_hello[index]->has_data())
            return true;
    }
    return false;
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::has_operation() const
{
    for (std::size_t index=0; index<link_hello.size(); index++)
    {
        if(link_hello[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-hellos";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkHellos' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "link-hello")
    {
        for(auto const & c : link_hello)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello>();
        c->parent = this;
        link_hello.push_back(std::move(c));
        children[segment_path] = link_hello.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::get_children()
{
    for (auto const & c : link_hello)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::set_value(const std::string & value_path, std::string value)
{
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::LinkHello()
    :
    interface_name{YType::str, "interface-name"},
    interface{YType::str, "interface"},
    interface_name_xr{YType::str, "interface-name-xr"},
    next_hello{YType::uint32, "next-hello"},
    quick_start_disabled{YType::boolean, "quick-start-disabled"}
    	,
    vrf(std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf>())
{
    vrf->parent = this;
    children["vrf"] = vrf;

    yang_name = "link-hello"; yang_parent_name = "link-hellos";
}

MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::~LinkHello()
{
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::has_data() const
{
    for (std::size_t index=0; index<discovery_link_af.size(); index++)
    {
        if(discovery_link_af[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<hello_information.size(); index++)
    {
        if(hello_information[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| interface.is_set
	|| interface_name_xr.is_set
	|| next_hello.is_set
	|| quick_start_disabled.is_set
	|| (vrf !=  nullptr && vrf->has_data());
}

bool MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::has_operation() const
{
    for (std::size_t index=0; index<discovery_link_af.size(); index++)
    {
        if(discovery_link_af[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<hello_information.size(); index++)
    {
        if(hello_information[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(interface.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(next_hello.operation)
	|| is_set(quick_start_disabled.operation)
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-hello" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkHello' in Cisco_IOS_XR_mpls_ldp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (next_hello.is_set || is_set(next_hello.operation)) leaf_name_data.push_back(next_hello.get_name_leafdata());
    if (quick_start_disabled.is_set || is_set(quick_start_disabled.operation)) leaf_name_data.push_back(quick_start_disabled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "discovery-link-af")
    {
        for(auto const & c : discovery_link_af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::DiscoveryLinkAf>();
        c->parent = this;
        discovery_link_af.push_back(std::move(c));
        children[segment_path] = discovery_link_af.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "hello-information")
    {
        for(auto const & c : hello_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::HelloInformation>();
        c->parent = this;
        hello_information.push_back(std::move(c));
        children[segment_path] = hello_information.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "vrf")
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
        else
        {
            vrf = std::make_shared<MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::Vrf>();
            vrf->parent = this;
            children["vrf"] = vrf;
        }
        return children.at("vrf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::get_children()
{
    for (auto const & c : discovery_link_af)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : hello_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("vrf") == children.end())
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
    }

    return children;
}

void MplsLdp::Global::Active::DefaultVrf::Afs::Af::Discovery::LinkHellos::LinkHello::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "next-hello")
    {
        next_hello = value;
    }
    if(value_path == "quick-start-disabled")
    {
        quick_start_disabled = value;
    }
}


}
}

