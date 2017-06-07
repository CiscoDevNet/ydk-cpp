
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_trustsec_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XE_trustsec_oper {

TrustsecState::TrustsecState()
    :
    cts_rolebased_policies(std::make_shared<TrustsecState::CtsRolebasedPolicies>())
	,cts_rolebased_sgtmaps(std::make_shared<TrustsecState::CtsRolebasedSgtmaps>())
	,cts_sxp_connections(std::make_shared<TrustsecState::CtsSxpConnections>())
{
    cts_rolebased_policies->parent = this;

    cts_rolebased_sgtmaps->parent = this;

    cts_sxp_connections->parent = this;

    yang_name = "trustsec-state"; yang_parent_name = "Cisco-IOS-XE-trustsec-oper";
}

TrustsecState::~TrustsecState()
{
}

bool TrustsecState::has_data() const
{
    return (cts_rolebased_policies !=  nullptr && cts_rolebased_policies->has_data())
	|| (cts_rolebased_sgtmaps !=  nullptr && cts_rolebased_sgtmaps->has_data())
	|| (cts_sxp_connections !=  nullptr && cts_sxp_connections->has_data());
}

bool TrustsecState::has_operation() const
{
    return is_set(operation)
	|| (cts_rolebased_policies !=  nullptr && cts_rolebased_policies->has_operation())
	|| (cts_rolebased_sgtmaps !=  nullptr && cts_rolebased_sgtmaps->has_operation())
	|| (cts_sxp_connections !=  nullptr && cts_sxp_connections->has_operation());
}

std::string TrustsecState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-trustsec-oper:trustsec-state";

    return path_buffer.str();

}

const EntityPath TrustsecState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TrustsecState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cts-rolebased-policies")
    {
        if(cts_rolebased_policies == nullptr)
        {
            cts_rolebased_policies = std::make_shared<TrustsecState::CtsRolebasedPolicies>();
        }
        return cts_rolebased_policies;
    }

    if(child_yang_name == "cts-rolebased-sgtmaps")
    {
        if(cts_rolebased_sgtmaps == nullptr)
        {
            cts_rolebased_sgtmaps = std::make_shared<TrustsecState::CtsRolebasedSgtmaps>();
        }
        return cts_rolebased_sgtmaps;
    }

    if(child_yang_name == "cts-sxp-connections")
    {
        if(cts_sxp_connections == nullptr)
        {
            cts_sxp_connections = std::make_shared<TrustsecState::CtsSxpConnections>();
        }
        return cts_sxp_connections;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TrustsecState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cts_rolebased_policies != nullptr)
    {
        children["cts-rolebased-policies"] = cts_rolebased_policies;
    }

    if(cts_rolebased_sgtmaps != nullptr)
    {
        children["cts-rolebased-sgtmaps"] = cts_rolebased_sgtmaps;
    }

    if(cts_sxp_connections != nullptr)
    {
        children["cts-sxp-connections"] = cts_sxp_connections;
    }

    return children;
}

void TrustsecState::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> TrustsecState::clone_ptr() const
{
    return std::make_shared<TrustsecState>();
}

std::string TrustsecState::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string TrustsecState::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function TrustsecState::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

TrustsecState::CtsRolebasedSgtmaps::CtsRolebasedSgtmaps()
{
    yang_name = "cts-rolebased-sgtmaps"; yang_parent_name = "trustsec-state";
}

TrustsecState::CtsRolebasedSgtmaps::~CtsRolebasedSgtmaps()
{
}

bool TrustsecState::CtsRolebasedSgtmaps::has_data() const
{
    for (std::size_t index=0; index<cts_rolebased_sgtmap.size(); index++)
    {
        if(cts_rolebased_sgtmap[index]->has_data())
            return true;
    }
    return false;
}

bool TrustsecState::CtsRolebasedSgtmaps::has_operation() const
{
    for (std::size_t index=0; index<cts_rolebased_sgtmap.size(); index++)
    {
        if(cts_rolebased_sgtmap[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TrustsecState::CtsRolebasedSgtmaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cts-rolebased-sgtmaps";

    return path_buffer.str();

}

const EntityPath TrustsecState::CtsRolebasedSgtmaps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-trustsec-oper:trustsec-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TrustsecState::CtsRolebasedSgtmaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cts-rolebased-sgtmap")
    {
        for(auto const & c : cts_rolebased_sgtmap)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TrustsecState::CtsRolebasedSgtmaps::CtsRolebasedSgtmap>();
        c->parent = this;
        cts_rolebased_sgtmap.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TrustsecState::CtsRolebasedSgtmaps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cts_rolebased_sgtmap)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TrustsecState::CtsRolebasedSgtmaps::set_value(const std::string & value_path, std::string value)
{
}

TrustsecState::CtsRolebasedSgtmaps::CtsRolebasedSgtmap::CtsRolebasedSgtmap()
    :
    ip{YType::str, "ip"},
    vrf_name{YType::str, "vrf-name"},
    sgt{YType::int32, "sgt"},
    source{YType::enumeration, "source"}
{
    yang_name = "cts-rolebased-sgtmap"; yang_parent_name = "cts-rolebased-sgtmaps";
}

TrustsecState::CtsRolebasedSgtmaps::CtsRolebasedSgtmap::~CtsRolebasedSgtmap()
{
}

bool TrustsecState::CtsRolebasedSgtmaps::CtsRolebasedSgtmap::has_data() const
{
    return ip.is_set
	|| vrf_name.is_set
	|| sgt.is_set
	|| source.is_set;
}

bool TrustsecState::CtsRolebasedSgtmaps::CtsRolebasedSgtmap::has_operation() const
{
    return is_set(operation)
	|| is_set(ip.operation)
	|| is_set(vrf_name.operation)
	|| is_set(sgt.operation)
	|| is_set(source.operation);
}

std::string TrustsecState::CtsRolebasedSgtmaps::CtsRolebasedSgtmap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cts-rolebased-sgtmap" <<"[ip='" <<ip <<"']" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

const EntityPath TrustsecState::CtsRolebasedSgtmaps::CtsRolebasedSgtmap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-trustsec-oper:trustsec-state/cts-rolebased-sgtmaps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (sgt.is_set || is_set(sgt.operation)) leaf_name_data.push_back(sgt.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TrustsecState::CtsRolebasedSgtmaps::CtsRolebasedSgtmap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TrustsecState::CtsRolebasedSgtmaps::CtsRolebasedSgtmap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TrustsecState::CtsRolebasedSgtmaps::CtsRolebasedSgtmap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "sgt")
    {
        sgt = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
}

TrustsecState::CtsRolebasedPolicies::CtsRolebasedPolicies()
{
    yang_name = "cts-rolebased-policies"; yang_parent_name = "trustsec-state";
}

TrustsecState::CtsRolebasedPolicies::~CtsRolebasedPolicies()
{
}

bool TrustsecState::CtsRolebasedPolicies::has_data() const
{
    for (std::size_t index=0; index<cts_rolebased_policy.size(); index++)
    {
        if(cts_rolebased_policy[index]->has_data())
            return true;
    }
    return false;
}

bool TrustsecState::CtsRolebasedPolicies::has_operation() const
{
    for (std::size_t index=0; index<cts_rolebased_policy.size(); index++)
    {
        if(cts_rolebased_policy[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TrustsecState::CtsRolebasedPolicies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cts-rolebased-policies";

    return path_buffer.str();

}

const EntityPath TrustsecState::CtsRolebasedPolicies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-trustsec-oper:trustsec-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TrustsecState::CtsRolebasedPolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cts-rolebased-policy")
    {
        for(auto const & c : cts_rolebased_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TrustsecState::CtsRolebasedPolicies::CtsRolebasedPolicy>();
        c->parent = this;
        cts_rolebased_policy.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TrustsecState::CtsRolebasedPolicies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cts_rolebased_policy)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TrustsecState::CtsRolebasedPolicies::set_value(const std::string & value_path, std::string value)
{
}

TrustsecState::CtsRolebasedPolicies::CtsRolebasedPolicy::CtsRolebasedPolicy()
    :
    src_sgt{YType::int32, "src-sgt"},
    dst_sgt{YType::int32, "dst-sgt"},
    hardware_deny_count{YType::uint64, "hardware-deny-count"},
    hardware_monitor_count{YType::uint64, "hardware-monitor-count"},
    hardware_permit_count{YType::uint64, "hardware-permit-count"},
    last_updated_time{YType::str, "last-updated-time"},
    monitor_mode{YType::boolean, "monitor-mode"},
    num_of_sgacl{YType::uint32, "num-of-sgacl"},
    policy_life_time{YType::uint64, "policy-life-time"},
    sgacl_name{YType::str, "sgacl-name"},
    software_deny_count{YType::uint64, "software-deny-count"},
    software_monitor_count{YType::uint64, "software-monitor-count"},
    software_permit_count{YType::uint64, "software-permit-count"},
    total_deny_count{YType::uint64, "total-deny-count"},
    total_permit_count{YType::uint64, "total-permit-count"}
{
    yang_name = "cts-rolebased-policy"; yang_parent_name = "cts-rolebased-policies";
}

TrustsecState::CtsRolebasedPolicies::CtsRolebasedPolicy::~CtsRolebasedPolicy()
{
}

bool TrustsecState::CtsRolebasedPolicies::CtsRolebasedPolicy::has_data() const
{
    return src_sgt.is_set
	|| dst_sgt.is_set
	|| hardware_deny_count.is_set
	|| hardware_monitor_count.is_set
	|| hardware_permit_count.is_set
	|| last_updated_time.is_set
	|| monitor_mode.is_set
	|| num_of_sgacl.is_set
	|| policy_life_time.is_set
	|| sgacl_name.is_set
	|| software_deny_count.is_set
	|| software_monitor_count.is_set
	|| software_permit_count.is_set
	|| total_deny_count.is_set
	|| total_permit_count.is_set;
}

bool TrustsecState::CtsRolebasedPolicies::CtsRolebasedPolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(src_sgt.operation)
	|| is_set(dst_sgt.operation)
	|| is_set(hardware_deny_count.operation)
	|| is_set(hardware_monitor_count.operation)
	|| is_set(hardware_permit_count.operation)
	|| is_set(last_updated_time.operation)
	|| is_set(monitor_mode.operation)
	|| is_set(num_of_sgacl.operation)
	|| is_set(policy_life_time.operation)
	|| is_set(sgacl_name.operation)
	|| is_set(software_deny_count.operation)
	|| is_set(software_monitor_count.operation)
	|| is_set(software_permit_count.operation)
	|| is_set(total_deny_count.operation)
	|| is_set(total_permit_count.operation);
}

std::string TrustsecState::CtsRolebasedPolicies::CtsRolebasedPolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cts-rolebased-policy" <<"[src-sgt='" <<src_sgt <<"']" <<"[dst-sgt='" <<dst_sgt <<"']";

    return path_buffer.str();

}

const EntityPath TrustsecState::CtsRolebasedPolicies::CtsRolebasedPolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-trustsec-oper:trustsec-state/cts-rolebased-policies/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (src_sgt.is_set || is_set(src_sgt.operation)) leaf_name_data.push_back(src_sgt.get_name_leafdata());
    if (dst_sgt.is_set || is_set(dst_sgt.operation)) leaf_name_data.push_back(dst_sgt.get_name_leafdata());
    if (hardware_deny_count.is_set || is_set(hardware_deny_count.operation)) leaf_name_data.push_back(hardware_deny_count.get_name_leafdata());
    if (hardware_monitor_count.is_set || is_set(hardware_monitor_count.operation)) leaf_name_data.push_back(hardware_monitor_count.get_name_leafdata());
    if (hardware_permit_count.is_set || is_set(hardware_permit_count.operation)) leaf_name_data.push_back(hardware_permit_count.get_name_leafdata());
    if (last_updated_time.is_set || is_set(last_updated_time.operation)) leaf_name_data.push_back(last_updated_time.get_name_leafdata());
    if (monitor_mode.is_set || is_set(monitor_mode.operation)) leaf_name_data.push_back(monitor_mode.get_name_leafdata());
    if (num_of_sgacl.is_set || is_set(num_of_sgacl.operation)) leaf_name_data.push_back(num_of_sgacl.get_name_leafdata());
    if (policy_life_time.is_set || is_set(policy_life_time.operation)) leaf_name_data.push_back(policy_life_time.get_name_leafdata());
    if (sgacl_name.is_set || is_set(sgacl_name.operation)) leaf_name_data.push_back(sgacl_name.get_name_leafdata());
    if (software_deny_count.is_set || is_set(software_deny_count.operation)) leaf_name_data.push_back(software_deny_count.get_name_leafdata());
    if (software_monitor_count.is_set || is_set(software_monitor_count.operation)) leaf_name_data.push_back(software_monitor_count.get_name_leafdata());
    if (software_permit_count.is_set || is_set(software_permit_count.operation)) leaf_name_data.push_back(software_permit_count.get_name_leafdata());
    if (total_deny_count.is_set || is_set(total_deny_count.operation)) leaf_name_data.push_back(total_deny_count.get_name_leafdata());
    if (total_permit_count.is_set || is_set(total_permit_count.operation)) leaf_name_data.push_back(total_permit_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TrustsecState::CtsRolebasedPolicies::CtsRolebasedPolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TrustsecState::CtsRolebasedPolicies::CtsRolebasedPolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TrustsecState::CtsRolebasedPolicies::CtsRolebasedPolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "src-sgt")
    {
        src_sgt = value;
    }
    if(value_path == "dst-sgt")
    {
        dst_sgt = value;
    }
    if(value_path == "hardware-deny-count")
    {
        hardware_deny_count = value;
    }
    if(value_path == "hardware-monitor-count")
    {
        hardware_monitor_count = value;
    }
    if(value_path == "hardware-permit-count")
    {
        hardware_permit_count = value;
    }
    if(value_path == "last-updated-time")
    {
        last_updated_time = value;
    }
    if(value_path == "monitor-mode")
    {
        monitor_mode = value;
    }
    if(value_path == "num-of-sgacl")
    {
        num_of_sgacl = value;
    }
    if(value_path == "policy-life-time")
    {
        policy_life_time = value;
    }
    if(value_path == "sgacl-name")
    {
        sgacl_name = value;
    }
    if(value_path == "software-deny-count")
    {
        software_deny_count = value;
    }
    if(value_path == "software-monitor-count")
    {
        software_monitor_count = value;
    }
    if(value_path == "software-permit-count")
    {
        software_permit_count = value;
    }
    if(value_path == "total-deny-count")
    {
        total_deny_count = value;
    }
    if(value_path == "total-permit-count")
    {
        total_permit_count = value;
    }
}

TrustsecState::CtsSxpConnections::CtsSxpConnections()
{
    yang_name = "cts-sxp-connections"; yang_parent_name = "trustsec-state";
}

TrustsecState::CtsSxpConnections::~CtsSxpConnections()
{
}

bool TrustsecState::CtsSxpConnections::has_data() const
{
    for (std::size_t index=0; index<cts_sxp_connection.size(); index++)
    {
        if(cts_sxp_connection[index]->has_data())
            return true;
    }
    return false;
}

bool TrustsecState::CtsSxpConnections::has_operation() const
{
    for (std::size_t index=0; index<cts_sxp_connection.size(); index++)
    {
        if(cts_sxp_connection[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string TrustsecState::CtsSxpConnections::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cts-sxp-connections";

    return path_buffer.str();

}

const EntityPath TrustsecState::CtsSxpConnections::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-trustsec-oper:trustsec-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TrustsecState::CtsSxpConnections::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cts-sxp-connection")
    {
        for(auto const & c : cts_sxp_connection)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<TrustsecState::CtsSxpConnections::CtsSxpConnection>();
        c->parent = this;
        cts_sxp_connection.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TrustsecState::CtsSxpConnections::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : cts_sxp_connection)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void TrustsecState::CtsSxpConnections::set_value(const std::string & value_path, std::string value)
{
}

TrustsecState::CtsSxpConnections::CtsSxpConnection::CtsSxpConnection()
    :
    peer_ip{YType::str, "peer-ip"},
    vrf_name{YType::str, "vrf-name"},
    listener_duration{YType::uint64, "listener-duration"},
    listener_state{YType::enumeration, "listener-state"},
    local_mode{YType::enumeration, "local-mode"},
    source_ip{YType::str, "source-ip"},
    speaker_duration{YType::uint64, "speaker-duration"},
    speaker_state{YType::enumeration, "speaker-state"}
{
    yang_name = "cts-sxp-connection"; yang_parent_name = "cts-sxp-connections";
}

TrustsecState::CtsSxpConnections::CtsSxpConnection::~CtsSxpConnection()
{
}

bool TrustsecState::CtsSxpConnections::CtsSxpConnection::has_data() const
{
    return peer_ip.is_set
	|| vrf_name.is_set
	|| listener_duration.is_set
	|| listener_state.is_set
	|| local_mode.is_set
	|| source_ip.is_set
	|| speaker_duration.is_set
	|| speaker_state.is_set;
}

bool TrustsecState::CtsSxpConnections::CtsSxpConnection::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_ip.operation)
	|| is_set(vrf_name.operation)
	|| is_set(listener_duration.operation)
	|| is_set(listener_state.operation)
	|| is_set(local_mode.operation)
	|| is_set(source_ip.operation)
	|| is_set(speaker_duration.operation)
	|| is_set(speaker_state.operation);
}

std::string TrustsecState::CtsSxpConnections::CtsSxpConnection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cts-sxp-connection" <<"[peer-ip='" <<peer_ip <<"']" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

const EntityPath TrustsecState::CtsSxpConnections::CtsSxpConnection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-trustsec-oper:trustsec-state/cts-sxp-connections/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_ip.is_set || is_set(peer_ip.operation)) leaf_name_data.push_back(peer_ip.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (listener_duration.is_set || is_set(listener_duration.operation)) leaf_name_data.push_back(listener_duration.get_name_leafdata());
    if (listener_state.is_set || is_set(listener_state.operation)) leaf_name_data.push_back(listener_state.get_name_leafdata());
    if (local_mode.is_set || is_set(local_mode.operation)) leaf_name_data.push_back(local_mode.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.operation)) leaf_name_data.push_back(source_ip.get_name_leafdata());
    if (speaker_duration.is_set || is_set(speaker_duration.operation)) leaf_name_data.push_back(speaker_duration.get_name_leafdata());
    if (speaker_state.is_set || is_set(speaker_state.operation)) leaf_name_data.push_back(speaker_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> TrustsecState::CtsSxpConnections::CtsSxpConnection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> TrustsecState::CtsSxpConnections::CtsSxpConnection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void TrustsecState::CtsSxpConnections::CtsSxpConnection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-ip")
    {
        peer_ip = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "listener-duration")
    {
        listener_duration = value;
    }
    if(value_path == "listener-state")
    {
        listener_state = value;
    }
    if(value_path == "local-mode")
    {
        local_mode = value;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
    }
    if(value_path == "speaker-duration")
    {
        speaker_duration = value;
    }
    if(value_path == "speaker-state")
    {
        speaker_state = value;
    }
}

const Enum::YLeaf CtsOdmBindingSourceEnum::default_ {0, "default"};
const Enum::YLeaf CtsOdmBindingSourceEnum::from_vlan {1, "from-vlan"};
const Enum::YLeaf CtsOdmBindingSourceEnum::from_cli {2, "from-cli"};
const Enum::YLeaf CtsOdmBindingSourceEnum::from_l3if {3, "from-l3if"};
const Enum::YLeaf CtsOdmBindingSourceEnum::from_cfp {4, "from-cfp"};
const Enum::YLeaf CtsOdmBindingSourceEnum::from_ip_arp {5, "from-ip-arp"};
const Enum::YLeaf CtsOdmBindingSourceEnum::from_local {6, "from-local"};
const Enum::YLeaf CtsOdmBindingSourceEnum::from_sgt_caching {7, "from-sgt-caching"};
const Enum::YLeaf CtsOdmBindingSourceEnum::from_cli_hi {8, "from-cli-hi"};

const Enum::YLeaf SxpConModeEnum::con_mode_invalid {0, "con-mode-invalid"};
const Enum::YLeaf SxpConModeEnum::con_mode_speaker {1, "con-mode-speaker"};
const Enum::YLeaf SxpConModeEnum::con_mode_listener {2, "con-mode-listener"};
const Enum::YLeaf SxpConModeEnum::con_mode_both {3, "con-mode-both"};

const Enum::YLeaf SxpConStateEnum::state_off {0, "state-off"};
const Enum::YLeaf SxpConStateEnum::state_pending_on {1, "state-pending-on"};
const Enum::YLeaf SxpConStateEnum::state_on {2, "state-on"};
const Enum::YLeaf SxpConStateEnum::state_delete_hold_down {3, "state-delete-hold-down"};
const Enum::YLeaf SxpConStateEnum::state_not_applicable {4, "state-not-applicable"};


}
}

