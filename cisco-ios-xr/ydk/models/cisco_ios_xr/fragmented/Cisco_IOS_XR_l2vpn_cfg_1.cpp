
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_l2vpn_cfg_1.hpp"

namespace ydk {
namespace Cisco_IOS_XR_l2vpn_cfg {

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance::FlowLabelLoadBalance()
    :
    flow_label{YType::enumeration, "flow-label"},
    static_{YType::empty, "static"}
{
    yang_name = "flow-label-load-balance"; yang_parent_name = "ldp-signaling-protocol";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance::~FlowLabelLoadBalance()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance::has_data() const
{
    return flow_label.is_set
	|| static_.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance::has_operation() const
{
    return is_set(operation)
	|| is_set(flow_label.operation)
	|| is_set(static_.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-label-load-balance";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlowLabelLoadBalance' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_label.is_set || is_set(flow_label.operation)) leaf_name_data.push_back(flow_label.get_name_leafdata());
    if (static_.is_set || is_set(static_.operation)) leaf_name_data.push_back(static_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::LdpSignalingProtocol::FlowLabelLoadBalance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flow-label")
    {
        flow_label = value;
    }
    if(value_path == "static")
    {
        static_ = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy::BgpRoutePolicy()
    :
    export_{YType::str, "export"}
{
    yang_name = "bgp-route-policy"; yang_parent_name = "bgp-auto-discovery";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy::~BgpRoutePolicy()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy::has_data() const
{
    return export_.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(export_.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-route-policy";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BgpRoutePolicy' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (export_.is_set || is_set(export_.operation)) leaf_name_data.push_back(export_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpRoutePolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "export")
    {
        export_ = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher::RouteDistinguisher()
    :
    addr_index{YType::uint32, "addr-index"},
    address{YType::str, "address"},
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"},
    type{YType::enumeration, "type"}
{
    yang_name = "route-distinguisher"; yang_parent_name = "bgp-auto-discovery";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher::~RouteDistinguisher()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher::has_data() const
{
    return addr_index.is_set
	|| address.is_set
	|| as.is_set
	|| as_index.is_set
	|| type.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher::has_operation() const
{
    return is_set(operation)
	|| is_set(addr_index.operation)
	|| is_set(address.operation)
	|| is_set(as.operation)
	|| is_set(as_index.operation)
	|| is_set(type.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-distinguisher";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteDistinguisher' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr_index.is_set || is_set(addr_index.operation)) leaf_name_data.push_back(addr_index.get_name_leafdata());
    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (as.is_set || is_set(as.operation)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.operation)) leaf_name_data.push_back(as_index.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteDistinguisher::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "addr-index")
    {
        addr_index = value;
    }
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "as")
    {
        as = value;
    }
    if(value_path == "as-index")
    {
        as_index = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::BgpSignalingProtocol()
    :
    enable{YType::empty, "enable"},
    ve_range{YType::uint32, "ve-range"},
    veid{YType::uint32, "veid"}
    	,
    flow_label_load_balance(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance>())
{
    flow_label_load_balance->parent = this;
    children["flow-label-load-balance"] = flow_label_load_balance;

    yang_name = "bgp-signaling-protocol"; yang_parent_name = "bgp-auto-discovery";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::~BgpSignalingProtocol()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::has_data() const
{
    return enable.is_set
	|| ve_range.is_set
	|| veid.is_set
	|| (flow_label_load_balance !=  nullptr && flow_label_load_balance->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(ve_range.operation)
	|| is_set(veid.operation)
	|| (flow_label_load_balance !=  nullptr && flow_label_load_balance->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-signaling-protocol";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BgpSignalingProtocol' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (ve_range.is_set || is_set(ve_range.operation)) leaf_name_data.push_back(ve_range.get_name_leafdata());
    if (veid.is_set || is_set(veid.operation)) leaf_name_data.push_back(veid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flow-label-load-balance")
    {
        if(flow_label_load_balance != nullptr)
        {
            children["flow-label-load-balance"] = flow_label_load_balance;
        }
        else
        {
            flow_label_load_balance = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance>();
            flow_label_load_balance->parent = this;
            children["flow-label-load-balance"] = flow_label_load_balance;
        }
        return children.at("flow-label-load-balance");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::get_children()
{
    if(children.find("flow-label-load-balance") == children.end())
    {
        if(flow_label_load_balance != nullptr)
        {
            children["flow-label-load-balance"] = flow_label_load_balance;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "ve-range")
    {
        ve_range = value;
    }
    if(value_path == "veid")
    {
        veid = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance::FlowLabelLoadBalance()
    :
    flow_label{YType::enumeration, "flow-label"},
    static_{YType::empty, "static"}
{
    yang_name = "flow-label-load-balance"; yang_parent_name = "bgp-signaling-protocol";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance::~FlowLabelLoadBalance()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance::has_data() const
{
    return flow_label.is_set
	|| static_.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance::has_operation() const
{
    return is_set(operation)
	|| is_set(flow_label.operation)
	|| is_set(static_.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-label-load-balance";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlowLabelLoadBalance' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_label.is_set || is_set(flow_label.operation)) leaf_name_data.push_back(flow_label.get_name_leafdata());
    if (static_.is_set || is_set(static_.operation)) leaf_name_data.push_back(static_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::BgpSignalingProtocol::FlowLabelLoadBalance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flow-label")
    {
        flow_label = value;
    }
    if(value_path == "static")
    {
        static_ = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTargets()
{
    yang_name = "route-targets"; yang_parent_name = "bgp-auto-discovery";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::~RouteTargets()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::has_data() const
{
    for (std::size_t index=0; index<route_target.size(); index++)
    {
        if(route_target[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::has_operation() const
{
    for (std::size_t index=0; index<route_target.size(); index++)
    {
        if(route_target[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-targets";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteTargets' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "route-target")
    {
        for(auto const & c : route_target)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget>();
        c->parent = this;
        route_target.push_back(std::move(c));
        children[segment_path] = route_target.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::get_children()
{
    for (auto const & c : route_target)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::RouteTarget()
    :
    format{YType::enumeration, "format"},
    role{YType::enumeration, "role"}
{
    yang_name = "route-target"; yang_parent_name = "route-targets";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::~RouteTarget()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::has_data() const
{
    for (std::size_t index=0; index<ipv4_address.size(); index++)
    {
        if(ipv4_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<two_byte_as_or_four_byte_as.size(); index++)
    {
        if(two_byte_as_or_four_byte_as[index]->has_data())
            return true;
    }
    return format.is_set
	|| role.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::has_operation() const
{
    for (std::size_t index=0; index<ipv4_address.size(); index++)
    {
        if(ipv4_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<two_byte_as_or_four_byte_as.size(); index++)
    {
        if(two_byte_as_or_four_byte_as[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(format.operation)
	|| is_set(role.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-target" <<"[format='" <<format <<"']" <<"[role='" <<role <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteTarget' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (format.is_set || is_set(format.operation)) leaf_name_data.push_back(format.get_name_leafdata());
    if (role.is_set || is_set(role.operation)) leaf_name_data.push_back(role.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-address")
    {
        for(auto const & c : ipv4_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address>();
        c->parent = this;
        ipv4_address.push_back(std::move(c));
        children[segment_path] = ipv4_address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "two-byte-as-or-four-byte-as")
    {
        for(auto const & c : two_byte_as_or_four_byte_as)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs>();
        c->parent = this;
        two_byte_as_or_four_byte_as.push_back(std::move(c));
        children[segment_path] = two_byte_as_or_four_byte_as.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::get_children()
{
    for (auto const & c : ipv4_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : two_byte_as_or_four_byte_as)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "format")
    {
        format = value;
    }
    if(value_path == "role")
    {
        role = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs::TwoByteAsOrFourByteAs()
    :
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"}
{
    yang_name = "two-byte-as-or-four-byte-as"; yang_parent_name = "route-target";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs::~TwoByteAsOrFourByteAs()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs::has_data() const
{
    return as.is_set
	|| as_index.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs::has_operation() const
{
    return is_set(operation)
	|| is_set(as.operation)
	|| is_set(as_index.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as-or-four-byte-as" <<"[as='" <<as <<"']" <<"[as-index='" <<as_index <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TwoByteAsOrFourByteAs' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.operation)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.operation)) leaf_name_data.push_back(as_index.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::TwoByteAsOrFourByteAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as")
    {
        as = value;
    }
    if(value_path == "as-index")
    {
        as_index = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address::Ipv4Address()
    :
    addr_index{YType::uint32, "addr-index"},
    address{YType::str, "address"}
{
    yang_name = "ipv4-address"; yang_parent_name = "route-target";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address::~Ipv4Address()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address::has_data() const
{
    return addr_index.is_set
	|| address.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address::has_operation() const
{
    return is_set(operation)
	|| is_set(addr_index.operation)
	|| is_set(address.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address" <<"[addr-index='" <<addr_index <<"']" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4Address' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr_index.is_set || is_set(addr_index.operation)) leaf_name_data.push_back(addr_index.get_name_leafdata());
    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Vfis::Vfi::BgpAutoDiscovery::RouteTargets::RouteTarget::Ipv4Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "addr-index")
    {
        addr_index = value;
    }
    if(value_path == "address")
    {
        address = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuits()
{
    yang_name = "bd-attachment-circuits"; yang_parent_name = "bridge-domain";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::~BdAttachmentCircuits()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::has_data() const
{
    for (std::size_t index=0; index<bd_attachment_circuit.size(); index++)
    {
        if(bd_attachment_circuit[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::has_operation() const
{
    for (std::size_t index=0; index<bd_attachment_circuit.size(); index++)
    {
        if(bd_attachment_circuit[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-attachment-circuits";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BdAttachmentCircuits' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bd-attachment-circuit")
    {
        for(auto const & c : bd_attachment_circuit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit>();
        c->parent = this;
        bd_attachment_circuit.push_back(std::move(c));
        children[segment_path] = bd_attachment_circuit.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::get_children()
{
    for (auto const & c : bd_attachment_circuit)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdAttachmentCircuit()
    :
    name{YType::str, "name"},
    interface_flooding{YType::enumeration, "interface-flooding"},
    interface_flooding_unknown_unicast{YType::enumeration, "interface-flooding-unknown-unicast"},
    interface_igmp_snoop{YType::str, "interface-igmp-snoop"},
    interface_mld_snoop{YType::str, "interface-mld-snoop"}
    	,
    bdac_storm_control_types(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes>())
	,interface_dai(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai>())
	,interface_ip_source_guard(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard>())
	,interface_mac(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac>())
	,interface_profile(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile>())
	,split_horizon(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon>())
	,static_mac_addresses(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses>())
{
    bdac_storm_control_types->parent = this;
    children["bdac-storm-control-types"] = bdac_storm_control_types;

    interface_dai->parent = this;
    children["interface-dai"] = interface_dai;

    interface_ip_source_guard->parent = this;
    children["interface-ip-source-guard"] = interface_ip_source_guard;

    interface_mac->parent = this;
    children["interface-mac"] = interface_mac;

    interface_profile->parent = this;
    children["interface-profile"] = interface_profile;

    split_horizon->parent = this;
    children["split-horizon"] = split_horizon;

    static_mac_addresses->parent = this;
    children["static-mac-addresses"] = static_mac_addresses;

    yang_name = "bd-attachment-circuit"; yang_parent_name = "bd-attachment-circuits";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::~BdAttachmentCircuit()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::has_data() const
{
    return name.is_set
	|| interface_flooding.is_set
	|| interface_flooding_unknown_unicast.is_set
	|| interface_igmp_snoop.is_set
	|| interface_mld_snoop.is_set
	|| (bdac_storm_control_types !=  nullptr && bdac_storm_control_types->has_data())
	|| (interface_dai !=  nullptr && interface_dai->has_data())
	|| (interface_ip_source_guard !=  nullptr && interface_ip_source_guard->has_data())
	|| (interface_mac !=  nullptr && interface_mac->has_data())
	|| (interface_profile !=  nullptr && interface_profile->has_data())
	|| (split_horizon !=  nullptr && split_horizon->has_data())
	|| (static_mac_addresses !=  nullptr && static_mac_addresses->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(interface_flooding.operation)
	|| is_set(interface_flooding_unknown_unicast.operation)
	|| is_set(interface_igmp_snoop.operation)
	|| is_set(interface_mld_snoop.operation)
	|| (bdac_storm_control_types !=  nullptr && bdac_storm_control_types->has_operation())
	|| (interface_dai !=  nullptr && interface_dai->has_operation())
	|| (interface_ip_source_guard !=  nullptr && interface_ip_source_guard->has_operation())
	|| (interface_mac !=  nullptr && interface_mac->has_operation())
	|| (interface_profile !=  nullptr && interface_profile->has_operation())
	|| (split_horizon !=  nullptr && split_horizon->has_operation())
	|| (static_mac_addresses !=  nullptr && static_mac_addresses->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-attachment-circuit" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BdAttachmentCircuit' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (interface_flooding.is_set || is_set(interface_flooding.operation)) leaf_name_data.push_back(interface_flooding.get_name_leafdata());
    if (interface_flooding_unknown_unicast.is_set || is_set(interface_flooding_unknown_unicast.operation)) leaf_name_data.push_back(interface_flooding_unknown_unicast.get_name_leafdata());
    if (interface_igmp_snoop.is_set || is_set(interface_igmp_snoop.operation)) leaf_name_data.push_back(interface_igmp_snoop.get_name_leafdata());
    if (interface_mld_snoop.is_set || is_set(interface_mld_snoop.operation)) leaf_name_data.push_back(interface_mld_snoop.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bdac-storm-control-types")
    {
        if(bdac_storm_control_types != nullptr)
        {
            children["bdac-storm-control-types"] = bdac_storm_control_types;
        }
        else
        {
            bdac_storm_control_types = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes>();
            bdac_storm_control_types->parent = this;
            children["bdac-storm-control-types"] = bdac_storm_control_types;
        }
        return children.at("bdac-storm-control-types");
    }

    if(child_yang_name == "interface-dai")
    {
        if(interface_dai != nullptr)
        {
            children["interface-dai"] = interface_dai;
        }
        else
        {
            interface_dai = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai>();
            interface_dai->parent = this;
            children["interface-dai"] = interface_dai;
        }
        return children.at("interface-dai");
    }

    if(child_yang_name == "interface-ip-source-guard")
    {
        if(interface_ip_source_guard != nullptr)
        {
            children["interface-ip-source-guard"] = interface_ip_source_guard;
        }
        else
        {
            interface_ip_source_guard = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard>();
            interface_ip_source_guard->parent = this;
            children["interface-ip-source-guard"] = interface_ip_source_guard;
        }
        return children.at("interface-ip-source-guard");
    }

    if(child_yang_name == "interface-mac")
    {
        if(interface_mac != nullptr)
        {
            children["interface-mac"] = interface_mac;
        }
        else
        {
            interface_mac = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac>();
            interface_mac->parent = this;
            children["interface-mac"] = interface_mac;
        }
        return children.at("interface-mac");
    }

    if(child_yang_name == "interface-profile")
    {
        if(interface_profile != nullptr)
        {
            children["interface-profile"] = interface_profile;
        }
        else
        {
            interface_profile = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile>();
            interface_profile->parent = this;
            children["interface-profile"] = interface_profile;
        }
        return children.at("interface-profile");
    }

    if(child_yang_name == "split-horizon")
    {
        if(split_horizon != nullptr)
        {
            children["split-horizon"] = split_horizon;
        }
        else
        {
            split_horizon = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon>();
            split_horizon->parent = this;
            children["split-horizon"] = split_horizon;
        }
        return children.at("split-horizon");
    }

    if(child_yang_name == "static-mac-addresses")
    {
        if(static_mac_addresses != nullptr)
        {
            children["static-mac-addresses"] = static_mac_addresses;
        }
        else
        {
            static_mac_addresses = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses>();
            static_mac_addresses->parent = this;
            children["static-mac-addresses"] = static_mac_addresses;
        }
        return children.at("static-mac-addresses");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::get_children()
{
    if(children.find("bdac-storm-control-types") == children.end())
    {
        if(bdac_storm_control_types != nullptr)
        {
            children["bdac-storm-control-types"] = bdac_storm_control_types;
        }
    }

    if(children.find("interface-dai") == children.end())
    {
        if(interface_dai != nullptr)
        {
            children["interface-dai"] = interface_dai;
        }
    }

    if(children.find("interface-ip-source-guard") == children.end())
    {
        if(interface_ip_source_guard != nullptr)
        {
            children["interface-ip-source-guard"] = interface_ip_source_guard;
        }
    }

    if(children.find("interface-mac") == children.end())
    {
        if(interface_mac != nullptr)
        {
            children["interface-mac"] = interface_mac;
        }
    }

    if(children.find("interface-profile") == children.end())
    {
        if(interface_profile != nullptr)
        {
            children["interface-profile"] = interface_profile;
        }
    }

    if(children.find("split-horizon") == children.end())
    {
        if(split_horizon != nullptr)
        {
            children["split-horizon"] = split_horizon;
        }
    }

    if(children.find("static-mac-addresses") == children.end())
    {
        if(static_mac_addresses != nullptr)
        {
            children["static-mac-addresses"] = static_mac_addresses;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "interface-flooding")
    {
        interface_flooding = value;
    }
    if(value_path == "interface-flooding-unknown-unicast")
    {
        interface_flooding_unknown_unicast = value;
    }
    if(value_path == "interface-igmp-snoop")
    {
        interface_igmp_snoop = value;
    }
    if(value_path == "interface-mld-snoop")
    {
        interface_mld_snoop = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard::InterfaceIpSourceGuard()
    :
    disable{YType::empty, "disable"},
    enable{YType::empty, "enable"},
    logging{YType::enumeration, "logging"}
{
    yang_name = "interface-ip-source-guard"; yang_parent_name = "bd-attachment-circuit";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard::~InterfaceIpSourceGuard()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard::has_data() const
{
    return disable.is_set
	|| enable.is_set
	|| logging.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation)
	|| is_set(enable.operation)
	|| is_set(logging.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-ip-source-guard";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceIpSourceGuard' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (logging.is_set || is_set(logging.operation)) leaf_name_data.push_back(logging.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceIpSourceGuard::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "logging")
    {
        logging = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDai()
    :
    disable{YType::empty, "disable"},
    enable{YType::empty, "enable"},
    logging{YType::enumeration, "logging"}
    	,
    interface_dai_address_validation(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation>())
{
    interface_dai_address_validation->parent = this;
    children["interface-dai-address-validation"] = interface_dai_address_validation;

    yang_name = "interface-dai"; yang_parent_name = "bd-attachment-circuit";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::~InterfaceDai()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::has_data() const
{
    return disable.is_set
	|| enable.is_set
	|| logging.is_set
	|| (interface_dai_address_validation !=  nullptr && interface_dai_address_validation->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation)
	|| is_set(enable.operation)
	|| is_set(logging.operation)
	|| (interface_dai_address_validation !=  nullptr && interface_dai_address_validation->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-dai";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceDai' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (logging.is_set || is_set(logging.operation)) leaf_name_data.push_back(logging.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-dai-address-validation")
    {
        if(interface_dai_address_validation != nullptr)
        {
            children["interface-dai-address-validation"] = interface_dai_address_validation;
        }
        else
        {
            interface_dai_address_validation = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation>();
            interface_dai_address_validation->parent = this;
            children["interface-dai-address-validation"] = interface_dai_address_validation;
        }
        return children.at("interface-dai-address-validation");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::get_children()
{
    if(children.find("interface-dai-address-validation") == children.end())
    {
        if(interface_dai_address_validation != nullptr)
        {
            children["interface-dai-address-validation"] = interface_dai_address_validation;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "logging")
    {
        logging = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation::InterfaceDaiAddressValidation()
    :
    destination_mac_verification{YType::enumeration, "destination-mac-verification"},
    enable{YType::empty, "enable"},
    ipv4_verification{YType::enumeration, "ipv4-verification"},
    source_mac_verification{YType::enumeration, "source-mac-verification"}
{
    yang_name = "interface-dai-address-validation"; yang_parent_name = "interface-dai";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation::~InterfaceDaiAddressValidation()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation::has_data() const
{
    return destination_mac_verification.is_set
	|| enable.is_set
	|| ipv4_verification.is_set
	|| source_mac_verification.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_mac_verification.operation)
	|| is_set(enable.operation)
	|| is_set(ipv4_verification.operation)
	|| is_set(source_mac_verification.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-dai-address-validation";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceDaiAddressValidation' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_mac_verification.is_set || is_set(destination_mac_verification.operation)) leaf_name_data.push_back(destination_mac_verification.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (ipv4_verification.is_set || is_set(ipv4_verification.operation)) leaf_name_data.push_back(ipv4_verification.get_name_leafdata());
    if (source_mac_verification.is_set || is_set(source_mac_verification.operation)) leaf_name_data.push_back(source_mac_verification.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceDai::InterfaceDaiAddressValidation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-mac-verification")
    {
        destination_mac_verification = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "ipv4-verification")
    {
        ipv4_verification = value;
    }
    if(value_path == "source-mac-verification")
    {
        source_mac_verification = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile::InterfaceProfile()
    :
    dhcp_snooping_id{YType::str, "dhcp-snooping-id"},
    profile_id{YType::enumeration, "profile-id"}
{
    yang_name = "interface-profile"; yang_parent_name = "bd-attachment-circuit";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile::~InterfaceProfile()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile::has_data() const
{
    return dhcp_snooping_id.is_set
	|| profile_id.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile::has_operation() const
{
    return is_set(operation)
	|| is_set(dhcp_snooping_id.operation)
	|| is_set(profile_id.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-profile";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceProfile' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dhcp_snooping_id.is_set || is_set(dhcp_snooping_id.operation)) leaf_name_data.push_back(dhcp_snooping_id.get_name_leafdata());
    if (profile_id.is_set || is_set(profile_id.operation)) leaf_name_data.push_back(profile_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceProfile::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dhcp-snooping-id")
    {
        dhcp_snooping_id = value;
    }
    if(value_path == "profile-id")
    {
        profile_id = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlTypes()
{
    yang_name = "bdac-storm-control-types"; yang_parent_name = "bd-attachment-circuit";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::~BdacStormControlTypes()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::has_data() const
{
    for (std::size_t index=0; index<bdac_storm_control_type.size(); index++)
    {
        if(bdac_storm_control_type[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::has_operation() const
{
    for (std::size_t index=0; index<bdac_storm_control_type.size(); index++)
    {
        if(bdac_storm_control_type[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bdac-storm-control-types";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BdacStormControlTypes' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bdac-storm-control-type")
    {
        for(auto const & c : bdac_storm_control_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType>();
        c->parent = this;
        bdac_storm_control_type.push_back(std::move(c));
        children[segment_path] = bdac_storm_control_type.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::get_children()
{
    for (auto const & c : bdac_storm_control_type)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::BdacStormControlType()
    :
    sctype{YType::enumeration, "sctype"}
    	,
    storm_control_unit(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit>())
{
    storm_control_unit->parent = this;
    children["storm-control-unit"] = storm_control_unit;

    yang_name = "bdac-storm-control-type"; yang_parent_name = "bdac-storm-control-types";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::~BdacStormControlType()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::has_data() const
{
    return sctype.is_set
	|| (storm_control_unit !=  nullptr && storm_control_unit->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::has_operation() const
{
    return is_set(operation)
	|| is_set(sctype.operation)
	|| (storm_control_unit !=  nullptr && storm_control_unit->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bdac-storm-control-type" <<"[sctype='" <<sctype <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BdacStormControlType' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sctype.is_set || is_set(sctype.operation)) leaf_name_data.push_back(sctype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "storm-control-unit")
    {
        if(storm_control_unit != nullptr)
        {
            children["storm-control-unit"] = storm_control_unit;
        }
        else
        {
            storm_control_unit = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit>();
            storm_control_unit->parent = this;
            children["storm-control-unit"] = storm_control_unit;
        }
        return children.at("storm-control-unit");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::get_children()
{
    if(children.find("storm-control-unit") == children.end())
    {
        if(storm_control_unit != nullptr)
        {
            children["storm-control-unit"] = storm_control_unit;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sctype")
    {
        sctype = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit::StormControlUnit()
    :
    kbits_per_sec{YType::uint32, "kbits-per-sec"},
    pkts_per_sec{YType::uint32, "pkts-per-sec"}
{
    yang_name = "storm-control-unit"; yang_parent_name = "bdac-storm-control-type";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit::~StormControlUnit()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit::has_data() const
{
    return kbits_per_sec.is_set
	|| pkts_per_sec.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit::has_operation() const
{
    return is_set(operation)
	|| is_set(kbits_per_sec.operation)
	|| is_set(pkts_per_sec.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "storm-control-unit";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StormControlUnit' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kbits_per_sec.is_set || is_set(kbits_per_sec.operation)) leaf_name_data.push_back(kbits_per_sec.get_name_leafdata());
    if (pkts_per_sec.is_set || is_set(pkts_per_sec.operation)) leaf_name_data.push_back(pkts_per_sec.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::BdacStormControlTypes::BdacStormControlType::StormControlUnit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "kbits-per-sec")
    {
        kbits_per_sec = value;
    }
    if(value_path == "pkts-per-sec")
    {
        pkts_per_sec = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizon()
    :
    split_horizon_group_id(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId>())
{
    split_horizon_group_id->parent = this;
    children["split-horizon-group-id"] = split_horizon_group_id;

    yang_name = "split-horizon"; yang_parent_name = "bd-attachment-circuit";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::~SplitHorizon()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::has_data() const
{
    return (split_horizon_group_id !=  nullptr && split_horizon_group_id->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::has_operation() const
{
    return is_set(operation)
	|| (split_horizon_group_id !=  nullptr && split_horizon_group_id->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-horizon";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SplitHorizon' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "split-horizon-group-id")
    {
        if(split_horizon_group_id != nullptr)
        {
            children["split-horizon-group-id"] = split_horizon_group_id;
        }
        else
        {
            split_horizon_group_id = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId>();
            split_horizon_group_id->parent = this;
            children["split-horizon-group-id"] = split_horizon_group_id;
        }
        return children.at("split-horizon-group-id");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::get_children()
{
    if(children.find("split-horizon-group-id") == children.end())
    {
        if(split_horizon_group_id != nullptr)
        {
            children["split-horizon-group-id"] = split_horizon_group_id;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId::SplitHorizonGroupId()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "split-horizon-group-id"; yang_parent_name = "split-horizon";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId::~SplitHorizonGroupId()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId::has_data() const
{
    return enable.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-horizon-group-id";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SplitHorizonGroupId' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::SplitHorizon::SplitHorizonGroupId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddresses()
{
    yang_name = "static-mac-addresses"; yang_parent_name = "bd-attachment-circuit";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::~StaticMacAddresses()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::has_data() const
{
    for (std::size_t index=0; index<static_mac_address.size(); index++)
    {
        if(static_mac_address[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::has_operation() const
{
    for (std::size_t index=0; index<static_mac_address.size(); index++)
    {
        if(static_mac_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-mac-addresses";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StaticMacAddresses' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "static-mac-address")
    {
        for(auto const & c : static_mac_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress>();
        c->parent = this;
        static_mac_address.push_back(std::move(c));
        children[segment_path] = static_mac_address.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::get_children()
{
    for (auto const & c : static_mac_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress::StaticMacAddress()
    :
    address{YType::str, "address"}
{
    yang_name = "static-mac-address"; yang_parent_name = "static-mac-addresses";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress::~StaticMacAddress()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress::has_data() const
{
    return address.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-mac-address" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StaticMacAddress' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::StaticMacAddresses::StaticMacAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMac()
    :
    interface_mac_learning{YType::enumeration, "interface-mac-learning"},
    interface_mac_port_down_flush{YType::enumeration, "interface-mac-port-down-flush"}
    	,
    interface_mac_aging(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging>())
	,interface_mac_limit(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit>())
	,interface_mac_secure(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure>())
{
    interface_mac_aging->parent = this;
    children["interface-mac-aging"] = interface_mac_aging;

    interface_mac_limit->parent = this;
    children["interface-mac-limit"] = interface_mac_limit;

    interface_mac_secure->parent = this;
    children["interface-mac-secure"] = interface_mac_secure;

    yang_name = "interface-mac"; yang_parent_name = "bd-attachment-circuit";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::~InterfaceMac()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::has_data() const
{
    return interface_mac_learning.is_set
	|| interface_mac_port_down_flush.is_set
	|| (interface_mac_aging !=  nullptr && interface_mac_aging->has_data())
	|| (interface_mac_limit !=  nullptr && interface_mac_limit->has_data())
	|| (interface_mac_secure !=  nullptr && interface_mac_secure->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_mac_learning.operation)
	|| is_set(interface_mac_port_down_flush.operation)
	|| (interface_mac_aging !=  nullptr && interface_mac_aging->has_operation())
	|| (interface_mac_limit !=  nullptr && interface_mac_limit->has_operation())
	|| (interface_mac_secure !=  nullptr && interface_mac_secure->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-mac";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceMac' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_mac_learning.is_set || is_set(interface_mac_learning.operation)) leaf_name_data.push_back(interface_mac_learning.get_name_leafdata());
    if (interface_mac_port_down_flush.is_set || is_set(interface_mac_port_down_flush.operation)) leaf_name_data.push_back(interface_mac_port_down_flush.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-mac-aging")
    {
        if(interface_mac_aging != nullptr)
        {
            children["interface-mac-aging"] = interface_mac_aging;
        }
        else
        {
            interface_mac_aging = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging>();
            interface_mac_aging->parent = this;
            children["interface-mac-aging"] = interface_mac_aging;
        }
        return children.at("interface-mac-aging");
    }

    if(child_yang_name == "interface-mac-limit")
    {
        if(interface_mac_limit != nullptr)
        {
            children["interface-mac-limit"] = interface_mac_limit;
        }
        else
        {
            interface_mac_limit = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit>();
            interface_mac_limit->parent = this;
            children["interface-mac-limit"] = interface_mac_limit;
        }
        return children.at("interface-mac-limit");
    }

    if(child_yang_name == "interface-mac-secure")
    {
        if(interface_mac_secure != nullptr)
        {
            children["interface-mac-secure"] = interface_mac_secure;
        }
        else
        {
            interface_mac_secure = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure>();
            interface_mac_secure->parent = this;
            children["interface-mac-secure"] = interface_mac_secure;
        }
        return children.at("interface-mac-secure");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::get_children()
{
    if(children.find("interface-mac-aging") == children.end())
    {
        if(interface_mac_aging != nullptr)
        {
            children["interface-mac-aging"] = interface_mac_aging;
        }
    }

    if(children.find("interface-mac-limit") == children.end())
    {
        if(interface_mac_limit != nullptr)
        {
            children["interface-mac-limit"] = interface_mac_limit;
        }
    }

    if(children.find("interface-mac-secure") == children.end())
    {
        if(interface_mac_secure != nullptr)
        {
            children["interface-mac-secure"] = interface_mac_secure;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-mac-learning")
    {
        interface_mac_learning = value;
    }
    if(value_path == "interface-mac-port-down-flush")
    {
        interface_mac_port_down_flush = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging::InterfaceMacAging()
    :
    interface_mac_aging_time{YType::uint32, "interface-mac-aging-time"},
    interface_mac_aging_type{YType::enumeration, "interface-mac-aging-type"}
{
    yang_name = "interface-mac-aging"; yang_parent_name = "interface-mac";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging::~InterfaceMacAging()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging::has_data() const
{
    return interface_mac_aging_time.is_set
	|| interface_mac_aging_type.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_mac_aging_time.operation)
	|| is_set(interface_mac_aging_type.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-mac-aging";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceMacAging' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_mac_aging_time.is_set || is_set(interface_mac_aging_time.operation)) leaf_name_data.push_back(interface_mac_aging_time.get_name_leafdata());
    if (interface_mac_aging_type.is_set || is_set(interface_mac_aging_type.operation)) leaf_name_data.push_back(interface_mac_aging_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacAging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-mac-aging-time")
    {
        interface_mac_aging_time = value;
    }
    if(value_path == "interface-mac-aging-type")
    {
        interface_mac_aging_type = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure::InterfaceMacSecure()
    :
    action{YType::enumeration, "action"},
    disable{YType::empty, "disable"},
    enable{YType::empty, "enable"},
    logging{YType::enumeration, "logging"}
{
    yang_name = "interface-mac-secure"; yang_parent_name = "interface-mac";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure::~InterfaceMacSecure()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure::has_data() const
{
    return action.is_set
	|| disable.is_set
	|| enable.is_set
	|| logging.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure::has_operation() const
{
    return is_set(operation)
	|| is_set(action.operation)
	|| is_set(disable.operation)
	|| is_set(enable.operation)
	|| is_set(logging.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-mac-secure";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceMacSecure' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action.is_set || is_set(action.operation)) leaf_name_data.push_back(action.get_name_leafdata());
    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (logging.is_set || is_set(logging.operation)) leaf_name_data.push_back(logging.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacSecure::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action")
    {
        action = value;
    }
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "logging")
    {
        logging = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit::InterfaceMacLimit()
    :
    interface_mac_limit_action{YType::enumeration, "interface-mac-limit-action"},
    interface_mac_limit_max{YType::uint32, "interface-mac-limit-max"},
    interface_mac_limit_notif{YType::enumeration, "interface-mac-limit-notif"}
{
    yang_name = "interface-mac-limit"; yang_parent_name = "interface-mac";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit::~InterfaceMacLimit()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit::has_data() const
{
    return interface_mac_limit_action.is_set
	|| interface_mac_limit_max.is_set
	|| interface_mac_limit_notif.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_mac_limit_action.operation)
	|| is_set(interface_mac_limit_max.operation)
	|| is_set(interface_mac_limit_notif.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-mac-limit";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceMacLimit' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_mac_limit_action.is_set || is_set(interface_mac_limit_action.operation)) leaf_name_data.push_back(interface_mac_limit_action.get_name_leafdata());
    if (interface_mac_limit_max.is_set || is_set(interface_mac_limit_max.operation)) leaf_name_data.push_back(interface_mac_limit_max.get_name_leafdata());
    if (interface_mac_limit_notif.is_set || is_set(interface_mac_limit_notif.operation)) leaf_name_data.push_back(interface_mac_limit_notif.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdAttachmentCircuits::BdAttachmentCircuit::InterfaceMac::InterfaceMacLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-mac-limit-action")
    {
        interface_mac_limit_action = value;
    }
    if(value_path == "interface-mac-limit-max")
    {
        interface_mac_limit_max = value;
    }
    if(value_path == "interface-mac-limit-notif")
    {
        interface_mac_limit_notif = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpns()
{
    yang_name = "bd-pseudowire-evpns"; yang_parent_name = "bridge-domain";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::~BdPseudowireEvpns()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::has_data() const
{
    for (std::size_t index=0; index<bd_pseudowire_evpn.size(); index++)
    {
        if(bd_pseudowire_evpn[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::has_operation() const
{
    for (std::size_t index=0; index<bd_pseudowire_evpn.size(); index++)
    {
        if(bd_pseudowire_evpn[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-pseudowire-evpns";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BdPseudowireEvpns' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bd-pseudowire-evpn")
    {
        for(auto const & c : bd_pseudowire_evpn)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn>();
        c->parent = this;
        bd_pseudowire_evpn.push_back(std::move(c));
        children[segment_path] = bd_pseudowire_evpn.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::get_children()
{
    for (auto const & c : bd_pseudowire_evpn)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn::BdPseudowireEvpn()
    :
    acid{YType::uint32, "acid"},
    eviid{YType::uint32, "eviid"}
{
    yang_name = "bd-pseudowire-evpn"; yang_parent_name = "bd-pseudowire-evpns";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn::~BdPseudowireEvpn()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn::has_data() const
{
    return acid.is_set
	|| eviid.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn::has_operation() const
{
    return is_set(operation)
	|| is_set(acid.operation)
	|| is_set(eviid.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bd-pseudowire-evpn" <<"[acid='" <<acid <<"']" <<"[eviid='" <<eviid <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BdPseudowireEvpn' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acid.is_set || is_set(acid.operation)) leaf_name_data.push_back(acid.get_name_leafdata());
    if (eviid.is_set || is_set(eviid.operation)) leaf_name_data.push_back(eviid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::BdPseudowireEvpns::BdPseudowireEvpn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acid")
    {
        acid = value;
    }
    if(value_path == "eviid")
    {
        eviid = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::IpSourceGuard::IpSourceGuard()
    :
    enable{YType::empty, "enable"},
    logging{YType::empty, "logging"}
{
    yang_name = "ip-source-guard"; yang_parent_name = "bridge-domain";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::IpSourceGuard::~IpSourceGuard()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::IpSourceGuard::has_data() const
{
    return enable.is_set
	|| logging.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::IpSourceGuard::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(logging.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::IpSourceGuard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-source-guard";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::IpSourceGuard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSourceGuard' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (logging.is_set || is_set(logging.operation)) leaf_name_data.push_back(logging.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::IpSourceGuard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::IpSourceGuard::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::IpSourceGuard::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "logging")
    {
        logging = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::Dai()
    :
    enable{YType::empty, "enable"},
    logging{YType::empty, "logging"}
    	,
    dai_address_validation(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation>())
{
    dai_address_validation->parent = this;
    children["dai-address-validation"] = dai_address_validation;

    yang_name = "dai"; yang_parent_name = "bridge-domain";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::~Dai()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::has_data() const
{
    return enable.is_set
	|| logging.is_set
	|| (dai_address_validation !=  nullptr && dai_address_validation->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(logging.operation)
	|| (dai_address_validation !=  nullptr && dai_address_validation->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dai";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dai' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (logging.is_set || is_set(logging.operation)) leaf_name_data.push_back(logging.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dai-address-validation")
    {
        if(dai_address_validation != nullptr)
        {
            children["dai-address-validation"] = dai_address_validation;
        }
        else
        {
            dai_address_validation = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation>();
            dai_address_validation->parent = this;
            children["dai-address-validation"] = dai_address_validation;
        }
        return children.at("dai-address-validation");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::get_children()
{
    if(children.find("dai-address-validation") == children.end())
    {
        if(dai_address_validation != nullptr)
        {
            children["dai-address-validation"] = dai_address_validation;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "logging")
    {
        logging = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation::DaiAddressValidation()
    :
    destination_mac_verification{YType::empty, "destination-mac-verification"},
    enable{YType::empty, "enable"},
    ipv4_verification{YType::empty, "ipv4-verification"},
    source_mac_verification{YType::empty, "source-mac-verification"}
{
    yang_name = "dai-address-validation"; yang_parent_name = "dai";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation::~DaiAddressValidation()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation::has_data() const
{
    return destination_mac_verification.is_set
	|| enable.is_set
	|| ipv4_verification.is_set
	|| source_mac_verification.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_mac_verification.operation)
	|| is_set(enable.operation)
	|| is_set(ipv4_verification.operation)
	|| is_set(source_mac_verification.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dai-address-validation";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DaiAddressValidation' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_mac_verification.is_set || is_set(destination_mac_verification.operation)) leaf_name_data.push_back(destination_mac_verification.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (ipv4_verification.is_set || is_set(ipv4_verification.operation)) leaf_name_data.push_back(ipv4_verification.get_name_leafdata());
    if (source_mac_verification.is_set || is_set(source_mac_verification.operation)) leaf_name_data.push_back(source_mac_verification.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::Dai::DaiAddressValidation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-mac-verification")
    {
        destination_mac_verification = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "ipv4-verification")
    {
        ipv4_verification = value;
    }
    if(value_path == "source-mac-verification")
    {
        source_mac_verification = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterfaces()
{
    yang_name = "routed-interfaces"; yang_parent_name = "bridge-domain";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::~RoutedInterfaces()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::has_data() const
{
    for (std::size_t index=0; index<routed_interface.size(); index++)
    {
        if(routed_interface[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::has_operation() const
{
    for (std::size_t index=0; index<routed_interface.size(); index++)
    {
        if(routed_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routed-interfaces";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutedInterfaces' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "routed-interface")
    {
        for(auto const & c : routed_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface>();
        c->parent = this;
        routed_interface.push_back(std::move(c));
        children[segment_path] = routed_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::get_children()
{
    for (auto const & c : routed_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterface()
    :
    interface_name{YType::str, "interface-name"}
    	,
    routed_interface_split_horizon_group(std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup>())
{
    routed_interface_split_horizon_group->parent = this;
    children["routed-interface-split-horizon-group"] = routed_interface_split_horizon_group;

    yang_name = "routed-interface"; yang_parent_name = "routed-interfaces";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::~RoutedInterface()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::has_data() const
{
    return interface_name.is_set
	|| (routed_interface_split_horizon_group !=  nullptr && routed_interface_split_horizon_group->has_data());
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| (routed_interface_split_horizon_group !=  nullptr && routed_interface_split_horizon_group->has_operation());
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routed-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutedInterface' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "routed-interface-split-horizon-group")
    {
        if(routed_interface_split_horizon_group != nullptr)
        {
            children["routed-interface-split-horizon-group"] = routed_interface_split_horizon_group;
        }
        else
        {
            routed_interface_split_horizon_group = std::make_shared<L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup>();
            routed_interface_split_horizon_group->parent = this;
            children["routed-interface-split-horizon-group"] = routed_interface_split_horizon_group;
        }
        return children.at("routed-interface-split-horizon-group");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::get_children()
{
    if(children.find("routed-interface-split-horizon-group") == children.end())
    {
        if(routed_interface_split_horizon_group != nullptr)
        {
            children["routed-interface-split-horizon-group"] = routed_interface_split_horizon_group;
        }
    }

    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup::RoutedInterfaceSplitHorizonGroup()
    :
    routed_interface_split_horizon_group_core{YType::empty, "routed-interface-split-horizon-group-core"}
{
    yang_name = "routed-interface-split-horizon-group"; yang_parent_name = "routed-interface";
}

L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup::~RoutedInterfaceSplitHorizonGroup()
{
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup::has_data() const
{
    return routed_interface_split_horizon_group_core.is_set;
}

bool L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(routed_interface_split_horizon_group_core.operation);
}

std::string L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "routed-interface-split-horizon-group";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RoutedInterfaceSplitHorizonGroup' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (routed_interface_split_horizon_group_core.is_set || is_set(routed_interface_split_horizon_group_core.operation)) leaf_name_data.push_back(routed_interface_split_horizon_group_core.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup::get_children()
{
    return children;
}

void L2Vpn::Database::BridgeDomainGroups::BridgeDomainGroup::BridgeDomains::BridgeDomain::RoutedInterfaces::RoutedInterface::RoutedInterfaceSplitHorizonGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "routed-interface-split-horizon-group-core")
    {
        routed_interface_split_horizon_group_core = value;
    }
}

L2Vpn::Database::PseudowireClasses::PseudowireClasses()
{
    yang_name = "pseudowire-classes"; yang_parent_name = "database";
}

L2Vpn::Database::PseudowireClasses::~PseudowireClasses()
{
}

bool L2Vpn::Database::PseudowireClasses::has_data() const
{
    for (std::size_t index=0; index<pseudowire_class.size(); index++)
    {
        if(pseudowire_class[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::PseudowireClasses::has_operation() const
{
    for (std::size_t index=0; index<pseudowire_class.size(); index++)
    {
        if(pseudowire_class[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::PseudowireClasses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-classes";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::PseudowireClasses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/database/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::PseudowireClasses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pseudowire-class")
    {
        for(auto const & c : pseudowire_class)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::PseudowireClasses::PseudowireClass>();
        c->parent = this;
        pseudowire_class.push_back(std::move(c));
        children[segment_path] = pseudowire_class.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::PseudowireClasses::get_children()
{
    for (auto const & c : pseudowire_class)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::PseudowireClasses::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::PseudowireClasses::PseudowireClass::PseudowireClass()
    :
    name{YType::str, "name"},
    enable{YType::empty, "enable"},
    mac_withdraw{YType::empty, "mac-withdraw"}
    	,
    backup_disable_delay(std::make_shared<L2Vpn::Database::PseudowireClasses::PseudowireClass::BackupDisableDelay>())
	,l2tpv3_encapsulation(std::make_shared<L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation>())
	,mpls_encapsulation(std::make_shared<L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation>())
{
    backup_disable_delay->parent = this;
    children["backup-disable-delay"] = backup_disable_delay;

    l2tpv3_encapsulation->parent = this;
    children["l2tpv3-encapsulation"] = l2tpv3_encapsulation;

    mpls_encapsulation->parent = this;
    children["mpls-encapsulation"] = mpls_encapsulation;

    yang_name = "pseudowire-class"; yang_parent_name = "pseudowire-classes";
}

L2Vpn::Database::PseudowireClasses::PseudowireClass::~PseudowireClass()
{
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::has_data() const
{
    return name.is_set
	|| enable.is_set
	|| mac_withdraw.is_set
	|| (backup_disable_delay !=  nullptr && backup_disable_delay->has_data())
	|| (l2tpv3_encapsulation !=  nullptr && l2tpv3_encapsulation->has_data())
	|| (mpls_encapsulation !=  nullptr && mpls_encapsulation->has_data());
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(enable.operation)
	|| is_set(mac_withdraw.operation)
	|| (backup_disable_delay !=  nullptr && backup_disable_delay->has_operation())
	|| (l2tpv3_encapsulation !=  nullptr && l2tpv3_encapsulation->has_operation())
	|| (mpls_encapsulation !=  nullptr && mpls_encapsulation->has_operation());
}

std::string L2Vpn::Database::PseudowireClasses::PseudowireClass::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-class" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::PseudowireClasses::PseudowireClass::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/database/pseudowire-classes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (mac_withdraw.is_set || is_set(mac_withdraw.operation)) leaf_name_data.push_back(mac_withdraw.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::PseudowireClasses::PseudowireClass::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "backup-disable-delay")
    {
        if(backup_disable_delay != nullptr)
        {
            children["backup-disable-delay"] = backup_disable_delay;
        }
        else
        {
            backup_disable_delay = std::make_shared<L2Vpn::Database::PseudowireClasses::PseudowireClass::BackupDisableDelay>();
            backup_disable_delay->parent = this;
            children["backup-disable-delay"] = backup_disable_delay;
        }
        return children.at("backup-disable-delay");
    }

    if(child_yang_name == "l2tpv3-encapsulation")
    {
        if(l2tpv3_encapsulation != nullptr)
        {
            children["l2tpv3-encapsulation"] = l2tpv3_encapsulation;
        }
        else
        {
            l2tpv3_encapsulation = std::make_shared<L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation>();
            l2tpv3_encapsulation->parent = this;
            children["l2tpv3-encapsulation"] = l2tpv3_encapsulation;
        }
        return children.at("l2tpv3-encapsulation");
    }

    if(child_yang_name == "mpls-encapsulation")
    {
        if(mpls_encapsulation != nullptr)
        {
            children["mpls-encapsulation"] = mpls_encapsulation;
        }
        else
        {
            mpls_encapsulation = std::make_shared<L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation>();
            mpls_encapsulation->parent = this;
            children["mpls-encapsulation"] = mpls_encapsulation;
        }
        return children.at("mpls-encapsulation");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::PseudowireClasses::PseudowireClass::get_children()
{
    if(children.find("backup-disable-delay") == children.end())
    {
        if(backup_disable_delay != nullptr)
        {
            children["backup-disable-delay"] = backup_disable_delay;
        }
    }

    if(children.find("l2tpv3-encapsulation") == children.end())
    {
        if(l2tpv3_encapsulation != nullptr)
        {
            children["l2tpv3-encapsulation"] = l2tpv3_encapsulation;
        }
    }

    if(children.find("mpls-encapsulation") == children.end())
    {
        if(mpls_encapsulation != nullptr)
        {
            children["mpls-encapsulation"] = mpls_encapsulation;
        }
    }

    return children;
}

void L2Vpn::Database::PseudowireClasses::PseudowireClass::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "mac-withdraw")
    {
        mac_withdraw = value;
    }
}

L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::L2Tpv3Encapsulation()
    :
    cookie_size{YType::enumeration, "cookie-size"},
    df_bit_set{YType::empty, "df-bit-set"},
    enable{YType::empty, "enable"},
    source_address{YType::str, "source-address"},
    time_to_live{YType::uint32, "time-to-live"},
    transport_mode{YType::enumeration, "transport-mode"}
    	,
    path_mtu(std::make_shared<L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::PathMtu>())
	,sequencing(std::make_shared<L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::Sequencing>())
	,signaling_protocol(std::make_shared<L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::SignalingProtocol>())
	,type_of_service(std::make_shared<L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::TypeOfService>())
{
    path_mtu->parent = this;
    children["path-mtu"] = path_mtu;

    sequencing->parent = this;
    children["sequencing"] = sequencing;

    signaling_protocol->parent = this;
    children["signaling-protocol"] = signaling_protocol;

    type_of_service->parent = this;
    children["type-of-service"] = type_of_service;

    yang_name = "l2tpv3-encapsulation"; yang_parent_name = "pseudowire-class";
}

L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::~L2Tpv3Encapsulation()
{
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::has_data() const
{
    return cookie_size.is_set
	|| df_bit_set.is_set
	|| enable.is_set
	|| source_address.is_set
	|| time_to_live.is_set
	|| transport_mode.is_set
	|| (path_mtu !=  nullptr && path_mtu->has_data())
	|| (sequencing !=  nullptr && sequencing->has_data())
	|| (signaling_protocol !=  nullptr && signaling_protocol->has_data())
	|| (type_of_service !=  nullptr && type_of_service->has_data());
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::has_operation() const
{
    return is_set(operation)
	|| is_set(cookie_size.operation)
	|| is_set(df_bit_set.operation)
	|| is_set(enable.operation)
	|| is_set(source_address.operation)
	|| is_set(time_to_live.operation)
	|| is_set(transport_mode.operation)
	|| (path_mtu !=  nullptr && path_mtu->has_operation())
	|| (sequencing !=  nullptr && sequencing->has_operation())
	|| (signaling_protocol !=  nullptr && signaling_protocol->has_operation())
	|| (type_of_service !=  nullptr && type_of_service->has_operation());
}

std::string L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3-encapsulation";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2Tpv3Encapsulation' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cookie_size.is_set || is_set(cookie_size.operation)) leaf_name_data.push_back(cookie_size.get_name_leafdata());
    if (df_bit_set.is_set || is_set(df_bit_set.operation)) leaf_name_data.push_back(df_bit_set.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (time_to_live.is_set || is_set(time_to_live.operation)) leaf_name_data.push_back(time_to_live.get_name_leafdata());
    if (transport_mode.is_set || is_set(transport_mode.operation)) leaf_name_data.push_back(transport_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "path-mtu")
    {
        if(path_mtu != nullptr)
        {
            children["path-mtu"] = path_mtu;
        }
        else
        {
            path_mtu = std::make_shared<L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::PathMtu>();
            path_mtu->parent = this;
            children["path-mtu"] = path_mtu;
        }
        return children.at("path-mtu");
    }

    if(child_yang_name == "sequencing")
    {
        if(sequencing != nullptr)
        {
            children["sequencing"] = sequencing;
        }
        else
        {
            sequencing = std::make_shared<L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::Sequencing>();
            sequencing->parent = this;
            children["sequencing"] = sequencing;
        }
        return children.at("sequencing");
    }

    if(child_yang_name == "signaling-protocol")
    {
        if(signaling_protocol != nullptr)
        {
            children["signaling-protocol"] = signaling_protocol;
        }
        else
        {
            signaling_protocol = std::make_shared<L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::SignalingProtocol>();
            signaling_protocol->parent = this;
            children["signaling-protocol"] = signaling_protocol;
        }
        return children.at("signaling-protocol");
    }

    if(child_yang_name == "type-of-service")
    {
        if(type_of_service != nullptr)
        {
            children["type-of-service"] = type_of_service;
        }
        else
        {
            type_of_service = std::make_shared<L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::TypeOfService>();
            type_of_service->parent = this;
            children["type-of-service"] = type_of_service;
        }
        return children.at("type-of-service");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::get_children()
{
    if(children.find("path-mtu") == children.end())
    {
        if(path_mtu != nullptr)
        {
            children["path-mtu"] = path_mtu;
        }
    }

    if(children.find("sequencing") == children.end())
    {
        if(sequencing != nullptr)
        {
            children["sequencing"] = sequencing;
        }
    }

    if(children.find("signaling-protocol") == children.end())
    {
        if(signaling_protocol != nullptr)
        {
            children["signaling-protocol"] = signaling_protocol;
        }
    }

    if(children.find("type-of-service") == children.end())
    {
        if(type_of_service != nullptr)
        {
            children["type-of-service"] = type_of_service;
        }
    }

    return children;
}

void L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cookie-size")
    {
        cookie_size = value;
    }
    if(value_path == "df-bit-set")
    {
        df_bit_set = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "time-to-live")
    {
        time_to_live = value;
    }
    if(value_path == "transport-mode")
    {
        transport_mode = value;
    }
}

L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::Sequencing::Sequencing()
    :
    resync_threshold{YType::uint32, "resync-threshold"},
    sequencing{YType::enumeration, "sequencing"}
{
    yang_name = "sequencing"; yang_parent_name = "l2tpv3-encapsulation";
}

L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::Sequencing::~Sequencing()
{
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::Sequencing::has_data() const
{
    return resync_threshold.is_set
	|| sequencing.is_set;
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::Sequencing::has_operation() const
{
    return is_set(operation)
	|| is_set(resync_threshold.operation)
	|| is_set(sequencing.operation);
}

std::string L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::Sequencing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sequencing";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::Sequencing::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sequencing' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (resync_threshold.is_set || is_set(resync_threshold.operation)) leaf_name_data.push_back(resync_threshold.get_name_leafdata());
    if (sequencing.is_set || is_set(sequencing.operation)) leaf_name_data.push_back(sequencing.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::Sequencing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::Sequencing::get_children()
{
    return children;
}

void L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::Sequencing::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "resync-threshold")
    {
        resync_threshold = value;
    }
    if(value_path == "sequencing")
    {
        sequencing = value;
    }
}

L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::TypeOfService::TypeOfService()
    :
    type_of_service_mode{YType::enumeration, "type-of-service-mode"},
    type_of_service_value{YType::uint32, "type-of-service-value"}
{
    yang_name = "type-of-service"; yang_parent_name = "l2tpv3-encapsulation";
}

L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::TypeOfService::~TypeOfService()
{
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::TypeOfService::has_data() const
{
    return type_of_service_mode.is_set
	|| type_of_service_value.is_set;
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::TypeOfService::has_operation() const
{
    return is_set(operation)
	|| is_set(type_of_service_mode.operation)
	|| is_set(type_of_service_value.operation);
}

std::string L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::TypeOfService::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type-of-service";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::TypeOfService::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TypeOfService' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type_of_service_mode.is_set || is_set(type_of_service_mode.operation)) leaf_name_data.push_back(type_of_service_mode.get_name_leafdata());
    if (type_of_service_value.is_set || is_set(type_of_service_value.operation)) leaf_name_data.push_back(type_of_service_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::TypeOfService::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::TypeOfService::get_children()
{
    return children;
}

void L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::TypeOfService::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type-of-service-mode")
    {
        type_of_service_mode = value;
    }
    if(value_path == "type-of-service-value")
    {
        type_of_service_value = value;
    }
}

L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::SignalingProtocol::SignalingProtocol()
    :
    l2tpv3_class_name{YType::str, "l2tpv3-class-name"},
    protocol{YType::enumeration, "protocol"}
{
    yang_name = "signaling-protocol"; yang_parent_name = "l2tpv3-encapsulation";
}

L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::SignalingProtocol::~SignalingProtocol()
{
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::SignalingProtocol::has_data() const
{
    return l2tpv3_class_name.is_set
	|| protocol.is_set;
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::SignalingProtocol::has_operation() const
{
    return is_set(operation)
	|| is_set(l2tpv3_class_name.operation)
	|| is_set(protocol.operation);
}

std::string L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::SignalingProtocol::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signaling-protocol";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::SignalingProtocol::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SignalingProtocol' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2tpv3_class_name.is_set || is_set(l2tpv3_class_name.operation)) leaf_name_data.push_back(l2tpv3_class_name.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.operation)) leaf_name_data.push_back(protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::SignalingProtocol::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::SignalingProtocol::get_children()
{
    return children;
}

void L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::SignalingProtocol::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2tpv3-class-name")
    {
        l2tpv3_class_name = value;
    }
    if(value_path == "protocol")
    {
        protocol = value;
    }
}

L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::PathMtu::PathMtu()
    :
    enable{YType::empty, "enable"},
    max_path_mtu{YType::uint32, "max-path-mtu"}
{
    yang_name = "path-mtu"; yang_parent_name = "l2tpv3-encapsulation";
}

L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::PathMtu::~PathMtu()
{
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::PathMtu::has_data() const
{
    return enable.is_set
	|| max_path_mtu.is_set;
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::PathMtu::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(max_path_mtu.operation);
}

std::string L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::PathMtu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-mtu";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::PathMtu::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PathMtu' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (max_path_mtu.is_set || is_set(max_path_mtu.operation)) leaf_name_data.push_back(max_path_mtu.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::PathMtu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::PathMtu::get_children()
{
    return children;
}

void L2Vpn::Database::PseudowireClasses::PseudowireClass::L2Tpv3Encapsulation::PathMtu::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "max-path-mtu")
    {
        max_path_mtu = value;
    }
}

L2Vpn::Database::PseudowireClasses::PseudowireClass::BackupDisableDelay::BackupDisableDelay()
    :
    disable_backup{YType::uint32, "disable-backup"},
    type{YType::enumeration, "type"}
{
    yang_name = "backup-disable-delay"; yang_parent_name = "pseudowire-class";
}

L2Vpn::Database::PseudowireClasses::PseudowireClass::BackupDisableDelay::~BackupDisableDelay()
{
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::BackupDisableDelay::has_data() const
{
    return disable_backup.is_set
	|| type.is_set;
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::BackupDisableDelay::has_operation() const
{
    return is_set(operation)
	|| is_set(disable_backup.operation)
	|| is_set(type.operation);
}

std::string L2Vpn::Database::PseudowireClasses::PseudowireClass::BackupDisableDelay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup-disable-delay";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::PseudowireClasses::PseudowireClass::BackupDisableDelay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BackupDisableDelay' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable_backup.is_set || is_set(disable_backup.operation)) leaf_name_data.push_back(disable_backup.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::PseudowireClasses::PseudowireClass::BackupDisableDelay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::PseudowireClasses::PseudowireClass::BackupDisableDelay::get_children()
{
    return children;
}

void L2Vpn::Database::PseudowireClasses::PseudowireClass::BackupDisableDelay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable-backup")
    {
        disable_backup = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::MplsEncapsulation()
    :
    control_word{YType::enumeration, "control-word"},
    enable{YType::empty, "enable"},
    pw_switching_tlv{YType::enumeration, "pw-switching-tlv"},
    signaling_protocol{YType::enumeration, "signaling-protocol"},
    source_address{YType::str, "source-address"},
    static_tag_rewrite{YType::uint32, "static-tag-rewrite"},
    transport_mode{YType::enumeration, "transport-mode"},
    vccv_type{YType::enumeration, "vccv-type"}
    	,
    load_balance_group(std::make_shared<L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup>())
	,mpls_redundancy(std::make_shared<L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::MplsRedundancy>())
	,preferred_path(std::make_shared<L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::PreferredPath>())
	,sequencing(std::make_shared<L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::Sequencing>())
{
    load_balance_group->parent = this;
    children["load-balance-group"] = load_balance_group;

    mpls_redundancy->parent = this;
    children["mpls-redundancy"] = mpls_redundancy;

    preferred_path->parent = this;
    children["preferred-path"] = preferred_path;

    sequencing->parent = this;
    children["sequencing"] = sequencing;

    yang_name = "mpls-encapsulation"; yang_parent_name = "pseudowire-class";
}

L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::~MplsEncapsulation()
{
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::has_data() const
{
    return control_word.is_set
	|| enable.is_set
	|| pw_switching_tlv.is_set
	|| signaling_protocol.is_set
	|| source_address.is_set
	|| static_tag_rewrite.is_set
	|| transport_mode.is_set
	|| vccv_type.is_set
	|| (load_balance_group !=  nullptr && load_balance_group->has_data())
	|| (mpls_redundancy !=  nullptr && mpls_redundancy->has_data())
	|| (preferred_path !=  nullptr && preferred_path->has_data())
	|| (sequencing !=  nullptr && sequencing->has_data());
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::has_operation() const
{
    return is_set(operation)
	|| is_set(control_word.operation)
	|| is_set(enable.operation)
	|| is_set(pw_switching_tlv.operation)
	|| is_set(signaling_protocol.operation)
	|| is_set(source_address.operation)
	|| is_set(static_tag_rewrite.operation)
	|| is_set(transport_mode.operation)
	|| is_set(vccv_type.operation)
	|| (load_balance_group !=  nullptr && load_balance_group->has_operation())
	|| (mpls_redundancy !=  nullptr && mpls_redundancy->has_operation())
	|| (preferred_path !=  nullptr && preferred_path->has_operation())
	|| (sequencing !=  nullptr && sequencing->has_operation());
}

std::string L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-encapsulation";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsEncapsulation' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (control_word.is_set || is_set(control_word.operation)) leaf_name_data.push_back(control_word.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (pw_switching_tlv.is_set || is_set(pw_switching_tlv.operation)) leaf_name_data.push_back(pw_switching_tlv.get_name_leafdata());
    if (signaling_protocol.is_set || is_set(signaling_protocol.operation)) leaf_name_data.push_back(signaling_protocol.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (static_tag_rewrite.is_set || is_set(static_tag_rewrite.operation)) leaf_name_data.push_back(static_tag_rewrite.get_name_leafdata());
    if (transport_mode.is_set || is_set(transport_mode.operation)) leaf_name_data.push_back(transport_mode.get_name_leafdata());
    if (vccv_type.is_set || is_set(vccv_type.operation)) leaf_name_data.push_back(vccv_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "load-balance-group")
    {
        if(load_balance_group != nullptr)
        {
            children["load-balance-group"] = load_balance_group;
        }
        else
        {
            load_balance_group = std::make_shared<L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup>();
            load_balance_group->parent = this;
            children["load-balance-group"] = load_balance_group;
        }
        return children.at("load-balance-group");
    }

    if(child_yang_name == "mpls-redundancy")
    {
        if(mpls_redundancy != nullptr)
        {
            children["mpls-redundancy"] = mpls_redundancy;
        }
        else
        {
            mpls_redundancy = std::make_shared<L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::MplsRedundancy>();
            mpls_redundancy->parent = this;
            children["mpls-redundancy"] = mpls_redundancy;
        }
        return children.at("mpls-redundancy");
    }

    if(child_yang_name == "preferred-path")
    {
        if(preferred_path != nullptr)
        {
            children["preferred-path"] = preferred_path;
        }
        else
        {
            preferred_path = std::make_shared<L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::PreferredPath>();
            preferred_path->parent = this;
            children["preferred-path"] = preferred_path;
        }
        return children.at("preferred-path");
    }

    if(child_yang_name == "sequencing")
    {
        if(sequencing != nullptr)
        {
            children["sequencing"] = sequencing;
        }
        else
        {
            sequencing = std::make_shared<L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::Sequencing>();
            sequencing->parent = this;
            children["sequencing"] = sequencing;
        }
        return children.at("sequencing");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::get_children()
{
    if(children.find("load-balance-group") == children.end())
    {
        if(load_balance_group != nullptr)
        {
            children["load-balance-group"] = load_balance_group;
        }
    }

    if(children.find("mpls-redundancy") == children.end())
    {
        if(mpls_redundancy != nullptr)
        {
            children["mpls-redundancy"] = mpls_redundancy;
        }
    }

    if(children.find("preferred-path") == children.end())
    {
        if(preferred_path != nullptr)
        {
            children["preferred-path"] = preferred_path;
        }
    }

    if(children.find("sequencing") == children.end())
    {
        if(sequencing != nullptr)
        {
            children["sequencing"] = sequencing;
        }
    }

    return children;
}

void L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "control-word")
    {
        control_word = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "pw-switching-tlv")
    {
        pw_switching_tlv = value;
    }
    if(value_path == "signaling-protocol")
    {
        signaling_protocol = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "static-tag-rewrite")
    {
        static_tag_rewrite = value;
    }
    if(value_path == "transport-mode")
    {
        transport_mode = value;
    }
    if(value_path == "vccv-type")
    {
        vccv_type = value;
    }
}

L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::Sequencing::Sequencing()
    :
    resync_threshold{YType::uint32, "resync-threshold"},
    sequencing{YType::enumeration, "sequencing"}
{
    yang_name = "sequencing"; yang_parent_name = "mpls-encapsulation";
}

L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::Sequencing::~Sequencing()
{
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::Sequencing::has_data() const
{
    return resync_threshold.is_set
	|| sequencing.is_set;
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::Sequencing::has_operation() const
{
    return is_set(operation)
	|| is_set(resync_threshold.operation)
	|| is_set(sequencing.operation);
}

std::string L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::Sequencing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sequencing";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::Sequencing::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sequencing' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (resync_threshold.is_set || is_set(resync_threshold.operation)) leaf_name_data.push_back(resync_threshold.get_name_leafdata());
    if (sequencing.is_set || is_set(sequencing.operation)) leaf_name_data.push_back(sequencing.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::Sequencing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::Sequencing::get_children()
{
    return children;
}

void L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::Sequencing::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "resync-threshold")
    {
        resync_threshold = value;
    }
    if(value_path == "sequencing")
    {
        sequencing = value;
    }
}

L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::MplsRedundancy::MplsRedundancy()
    :
    redundancy_initial_delay{YType::uint32, "redundancy-initial-delay"},
    redundancy_one_way{YType::empty, "redundancy-one-way"}
{
    yang_name = "mpls-redundancy"; yang_parent_name = "mpls-encapsulation";
}

L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::MplsRedundancy::~MplsRedundancy()
{
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::MplsRedundancy::has_data() const
{
    return redundancy_initial_delay.is_set
	|| redundancy_one_way.is_set;
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::MplsRedundancy::has_operation() const
{
    return is_set(operation)
	|| is_set(redundancy_initial_delay.operation)
	|| is_set(redundancy_one_way.operation);
}

std::string L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::MplsRedundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-redundancy";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::MplsRedundancy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MplsRedundancy' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (redundancy_initial_delay.is_set || is_set(redundancy_initial_delay.operation)) leaf_name_data.push_back(redundancy_initial_delay.get_name_leafdata());
    if (redundancy_one_way.is_set || is_set(redundancy_one_way.operation)) leaf_name_data.push_back(redundancy_one_way.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::MplsRedundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::MplsRedundancy::get_children()
{
    return children;
}

void L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::MplsRedundancy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "redundancy-initial-delay")
    {
        redundancy_initial_delay = value;
    }
    if(value_path == "redundancy-one-way")
    {
        redundancy_one_way = value;
    }
}

L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::PreferredPath::PreferredPath()
    :
    fallback_disable{YType::empty, "fallback-disable"},
    interface_tunnel_number{YType::uint32, "interface-tunnel-number"},
    type{YType::enumeration, "type"}
{
    yang_name = "preferred-path"; yang_parent_name = "mpls-encapsulation";
}

L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::PreferredPath::~PreferredPath()
{
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::PreferredPath::has_data() const
{
    return fallback_disable.is_set
	|| interface_tunnel_number.is_set
	|| type.is_set;
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::PreferredPath::has_operation() const
{
    return is_set(operation)
	|| is_set(fallback_disable.operation)
	|| is_set(interface_tunnel_number.operation)
	|| is_set(type.operation);
}

std::string L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::PreferredPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preferred-path";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::PreferredPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PreferredPath' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fallback_disable.is_set || is_set(fallback_disable.operation)) leaf_name_data.push_back(fallback_disable.get_name_leafdata());
    if (interface_tunnel_number.is_set || is_set(interface_tunnel_number.operation)) leaf_name_data.push_back(interface_tunnel_number.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::PreferredPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::PreferredPath::get_children()
{
    return children;
}

void L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::PreferredPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fallback-disable")
    {
        fallback_disable = value;
    }
    if(value_path == "interface-tunnel-number")
    {
        interface_tunnel_number = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::LoadBalanceGroup()
    :
    flow_label_load_balance_code{YType::enumeration, "flow-label-load-balance-code"},
    pw_label_load_balance{YType::enumeration, "pw-label-load-balance"}
    	,
    flow_label_load_balance(std::make_shared<L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::FlowLabelLoadBalance>())
{
    flow_label_load_balance->parent = this;
    children["flow-label-load-balance"] = flow_label_load_balance;

    yang_name = "load-balance-group"; yang_parent_name = "mpls-encapsulation";
}

L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::~LoadBalanceGroup()
{
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::has_data() const
{
    return flow_label_load_balance_code.is_set
	|| pw_label_load_balance.is_set
	|| (flow_label_load_balance !=  nullptr && flow_label_load_balance->has_data());
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(flow_label_load_balance_code.operation)
	|| is_set(pw_label_load_balance.operation)
	|| (flow_label_load_balance !=  nullptr && flow_label_load_balance->has_operation());
}

std::string L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-balance-group";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LoadBalanceGroup' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_label_load_balance_code.is_set || is_set(flow_label_load_balance_code.operation)) leaf_name_data.push_back(flow_label_load_balance_code.get_name_leafdata());
    if (pw_label_load_balance.is_set || is_set(pw_label_load_balance.operation)) leaf_name_data.push_back(pw_label_load_balance.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flow-label-load-balance")
    {
        if(flow_label_load_balance != nullptr)
        {
            children["flow-label-load-balance"] = flow_label_load_balance;
        }
        else
        {
            flow_label_load_balance = std::make_shared<L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::FlowLabelLoadBalance>();
            flow_label_load_balance->parent = this;
            children["flow-label-load-balance"] = flow_label_load_balance;
        }
        return children.at("flow-label-load-balance");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::get_children()
{
    if(children.find("flow-label-load-balance") == children.end())
    {
        if(flow_label_load_balance != nullptr)
        {
            children["flow-label-load-balance"] = flow_label_load_balance;
        }
    }

    return children;
}

void L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flow-label-load-balance-code")
    {
        flow_label_load_balance_code = value;
    }
    if(value_path == "pw-label-load-balance")
    {
        pw_label_load_balance = value;
    }
}

L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::FlowLabelLoadBalance::FlowLabelLoadBalance()
    :
    flow_label{YType::enumeration, "flow-label"},
    static_{YType::empty, "static"}
{
    yang_name = "flow-label-load-balance"; yang_parent_name = "load-balance-group";
}

L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::FlowLabelLoadBalance::~FlowLabelLoadBalance()
{
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::FlowLabelLoadBalance::has_data() const
{
    return flow_label.is_set
	|| static_.is_set;
}

bool L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::FlowLabelLoadBalance::has_operation() const
{
    return is_set(operation)
	|| is_set(flow_label.operation)
	|| is_set(static_.operation);
}

std::string L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::FlowLabelLoadBalance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-label-load-balance";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::FlowLabelLoadBalance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FlowLabelLoadBalance' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_label.is_set || is_set(flow_label.operation)) leaf_name_data.push_back(flow_label.get_name_leafdata());
    if (static_.is_set || is_set(static_.operation)) leaf_name_data.push_back(static_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::FlowLabelLoadBalance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::FlowLabelLoadBalance::get_children()
{
    return children;
}

void L2Vpn::Database::PseudowireClasses::PseudowireClass::MplsEncapsulation::LoadBalanceGroup::FlowLabelLoadBalance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flow-label")
    {
        flow_label = value;
    }
    if(value_path == "static")
    {
        static_ = value;
    }
}

L2Vpn::Database::FlexibleXconnectServiceTable::FlexibleXconnectServiceTable()
    :
    vlan_aware_flexible_xconnect_services(std::make_shared<L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices>())
	,vlan_unaware_flexible_xconnect_services(std::make_shared<L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices>())
{
    vlan_aware_flexible_xconnect_services->parent = this;
    children["vlan-aware-flexible-xconnect-services"] = vlan_aware_flexible_xconnect_services;

    vlan_unaware_flexible_xconnect_services->parent = this;
    children["vlan-unaware-flexible-xconnect-services"] = vlan_unaware_flexible_xconnect_services;

    yang_name = "flexible-xconnect-service-table"; yang_parent_name = "database";
}

L2Vpn::Database::FlexibleXconnectServiceTable::~FlexibleXconnectServiceTable()
{
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::has_data() const
{
    return (vlan_aware_flexible_xconnect_services !=  nullptr && vlan_aware_flexible_xconnect_services->has_data())
	|| (vlan_unaware_flexible_xconnect_services !=  nullptr && vlan_unaware_flexible_xconnect_services->has_data());
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::has_operation() const
{
    return is_set(operation)
	|| (vlan_aware_flexible_xconnect_services !=  nullptr && vlan_aware_flexible_xconnect_services->has_operation())
	|| (vlan_unaware_flexible_xconnect_services !=  nullptr && vlan_unaware_flexible_xconnect_services->has_operation());
}

std::string L2Vpn::Database::FlexibleXconnectServiceTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flexible-xconnect-service-table";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::FlexibleXconnectServiceTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/database/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::FlexibleXconnectServiceTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vlan-aware-flexible-xconnect-services")
    {
        if(vlan_aware_flexible_xconnect_services != nullptr)
        {
            children["vlan-aware-flexible-xconnect-services"] = vlan_aware_flexible_xconnect_services;
        }
        else
        {
            vlan_aware_flexible_xconnect_services = std::make_shared<L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices>();
            vlan_aware_flexible_xconnect_services->parent = this;
            children["vlan-aware-flexible-xconnect-services"] = vlan_aware_flexible_xconnect_services;
        }
        return children.at("vlan-aware-flexible-xconnect-services");
    }

    if(child_yang_name == "vlan-unaware-flexible-xconnect-services")
    {
        if(vlan_unaware_flexible_xconnect_services != nullptr)
        {
            children["vlan-unaware-flexible-xconnect-services"] = vlan_unaware_flexible_xconnect_services;
        }
        else
        {
            vlan_unaware_flexible_xconnect_services = std::make_shared<L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices>();
            vlan_unaware_flexible_xconnect_services->parent = this;
            children["vlan-unaware-flexible-xconnect-services"] = vlan_unaware_flexible_xconnect_services;
        }
        return children.at("vlan-unaware-flexible-xconnect-services");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::FlexibleXconnectServiceTable::get_children()
{
    if(children.find("vlan-aware-flexible-xconnect-services") == children.end())
    {
        if(vlan_aware_flexible_xconnect_services != nullptr)
        {
            children["vlan-aware-flexible-xconnect-services"] = vlan_aware_flexible_xconnect_services;
        }
    }

    if(children.find("vlan-unaware-flexible-xconnect-services") == children.end())
    {
        if(vlan_unaware_flexible_xconnect_services != nullptr)
        {
            children["vlan-unaware-flexible-xconnect-services"] = vlan_unaware_flexible_xconnect_services;
        }
    }

    return children;
}

void L2Vpn::Database::FlexibleXconnectServiceTable::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectServices()
{
    yang_name = "vlan-unaware-flexible-xconnect-services"; yang_parent_name = "flexible-xconnect-service-table";
}

L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::~VlanUnawareFlexibleXconnectServices()
{
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::has_data() const
{
    for (std::size_t index=0; index<vlan_unaware_flexible_xconnect_service.size(); index++)
    {
        if(vlan_unaware_flexible_xconnect_service[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::has_operation() const
{
    for (std::size_t index=0; index<vlan_unaware_flexible_xconnect_service.size(); index++)
    {
        if(vlan_unaware_flexible_xconnect_service[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-unaware-flexible-xconnect-services";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/database/flexible-xconnect-service-table/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vlan-unaware-flexible-xconnect-service")
    {
        for(auto const & c : vlan_unaware_flexible_xconnect_service)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService>();
        c->parent = this;
        vlan_unaware_flexible_xconnect_service.push_back(std::move(c));
        children[segment_path] = vlan_unaware_flexible_xconnect_service.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::get_children()
{
    for (auto const & c : vlan_unaware_flexible_xconnect_service)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFlexibleXconnectService()
    :
    name{YType::str, "name"}
    	,
    vlan_unaware_fxc_attachment_circuits(std::make_shared<L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits>())
	,vlan_unaware_fxc_pseudowire_evpns(std::make_shared<L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns>())
{
    vlan_unaware_fxc_attachment_circuits->parent = this;
    children["vlan-unaware-fxc-attachment-circuits"] = vlan_unaware_fxc_attachment_circuits;

    vlan_unaware_fxc_pseudowire_evpns->parent = this;
    children["vlan-unaware-fxc-pseudowire-evpns"] = vlan_unaware_fxc_pseudowire_evpns;

    yang_name = "vlan-unaware-flexible-xconnect-service"; yang_parent_name = "vlan-unaware-flexible-xconnect-services";
}

L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::~VlanUnawareFlexibleXconnectService()
{
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::has_data() const
{
    return name.is_set
	|| (vlan_unaware_fxc_attachment_circuits !=  nullptr && vlan_unaware_fxc_attachment_circuits->has_data())
	|| (vlan_unaware_fxc_pseudowire_evpns !=  nullptr && vlan_unaware_fxc_pseudowire_evpns->has_data());
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (vlan_unaware_fxc_attachment_circuits !=  nullptr && vlan_unaware_fxc_attachment_circuits->has_operation())
	|| (vlan_unaware_fxc_pseudowire_evpns !=  nullptr && vlan_unaware_fxc_pseudowire_evpns->has_operation());
}

std::string L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-unaware-flexible-xconnect-service" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/database/flexible-xconnect-service-table/vlan-unaware-flexible-xconnect-services/" << get_segment_path();
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

std::shared_ptr<Entity> L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vlan-unaware-fxc-attachment-circuits")
    {
        if(vlan_unaware_fxc_attachment_circuits != nullptr)
        {
            children["vlan-unaware-fxc-attachment-circuits"] = vlan_unaware_fxc_attachment_circuits;
        }
        else
        {
            vlan_unaware_fxc_attachment_circuits = std::make_shared<L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits>();
            vlan_unaware_fxc_attachment_circuits->parent = this;
            children["vlan-unaware-fxc-attachment-circuits"] = vlan_unaware_fxc_attachment_circuits;
        }
        return children.at("vlan-unaware-fxc-attachment-circuits");
    }

    if(child_yang_name == "vlan-unaware-fxc-pseudowire-evpns")
    {
        if(vlan_unaware_fxc_pseudowire_evpns != nullptr)
        {
            children["vlan-unaware-fxc-pseudowire-evpns"] = vlan_unaware_fxc_pseudowire_evpns;
        }
        else
        {
            vlan_unaware_fxc_pseudowire_evpns = std::make_shared<L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns>();
            vlan_unaware_fxc_pseudowire_evpns->parent = this;
            children["vlan-unaware-fxc-pseudowire-evpns"] = vlan_unaware_fxc_pseudowire_evpns;
        }
        return children.at("vlan-unaware-fxc-pseudowire-evpns");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::get_children()
{
    if(children.find("vlan-unaware-fxc-attachment-circuits") == children.end())
    {
        if(vlan_unaware_fxc_attachment_circuits != nullptr)
        {
            children["vlan-unaware-fxc-attachment-circuits"] = vlan_unaware_fxc_attachment_circuits;
        }
    }

    if(children.find("vlan-unaware-fxc-pseudowire-evpns") == children.end())
    {
        if(vlan_unaware_fxc_pseudowire_evpns != nullptr)
        {
            children["vlan-unaware-fxc-pseudowire-evpns"] = vlan_unaware_fxc_pseudowire_evpns;
        }
    }

    return children;
}

void L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::VlanUnawareFxcAttachmentCircuits()
{
    yang_name = "vlan-unaware-fxc-attachment-circuits"; yang_parent_name = "vlan-unaware-flexible-xconnect-service";
}

L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::~VlanUnawareFxcAttachmentCircuits()
{
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::has_data() const
{
    for (std::size_t index=0; index<vlan_unaware_fxc_attachment_circuit.size(); index++)
    {
        if(vlan_unaware_fxc_attachment_circuit[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::has_operation() const
{
    for (std::size_t index=0; index<vlan_unaware_fxc_attachment_circuit.size(); index++)
    {
        if(vlan_unaware_fxc_attachment_circuit[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-unaware-fxc-attachment-circuits";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VlanUnawareFxcAttachmentCircuits' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vlan-unaware-fxc-attachment-circuit")
    {
        for(auto const & c : vlan_unaware_fxc_attachment_circuit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::VlanUnawareFxcAttachmentCircuit>();
        c->parent = this;
        vlan_unaware_fxc_attachment_circuit.push_back(std::move(c));
        children[segment_path] = vlan_unaware_fxc_attachment_circuit.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::get_children()
{
    for (auto const & c : vlan_unaware_fxc_attachment_circuit)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::VlanUnawareFxcAttachmentCircuit::VlanUnawareFxcAttachmentCircuit()
    :
    name{YType::str, "name"}
{
    yang_name = "vlan-unaware-fxc-attachment-circuit"; yang_parent_name = "vlan-unaware-fxc-attachment-circuits";
}

L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::VlanUnawareFxcAttachmentCircuit::~VlanUnawareFxcAttachmentCircuit()
{
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::VlanUnawareFxcAttachmentCircuit::has_data() const
{
    return name.is_set;
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::VlanUnawareFxcAttachmentCircuit::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::VlanUnawareFxcAttachmentCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-unaware-fxc-attachment-circuit" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::VlanUnawareFxcAttachmentCircuit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VlanUnawareFxcAttachmentCircuit' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::VlanUnawareFxcAttachmentCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::VlanUnawareFxcAttachmentCircuit::get_children()
{
    return children;
}

void L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcAttachmentCircuits::VlanUnawareFxcAttachmentCircuit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::VlanUnawareFxcPseudowireEvpns()
{
    yang_name = "vlan-unaware-fxc-pseudowire-evpns"; yang_parent_name = "vlan-unaware-flexible-xconnect-service";
}

L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::~VlanUnawareFxcPseudowireEvpns()
{
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::has_data() const
{
    for (std::size_t index=0; index<vlan_unaware_fxc_pseudowire_evpn.size(); index++)
    {
        if(vlan_unaware_fxc_pseudowire_evpn[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::has_operation() const
{
    for (std::size_t index=0; index<vlan_unaware_fxc_pseudowire_evpn.size(); index++)
    {
        if(vlan_unaware_fxc_pseudowire_evpn[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-unaware-fxc-pseudowire-evpns";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VlanUnawareFxcPseudowireEvpns' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vlan-unaware-fxc-pseudowire-evpn")
    {
        for(auto const & c : vlan_unaware_fxc_pseudowire_evpn)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::VlanUnawareFxcPseudowireEvpn>();
        c->parent = this;
        vlan_unaware_fxc_pseudowire_evpn.push_back(std::move(c));
        children[segment_path] = vlan_unaware_fxc_pseudowire_evpn.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::get_children()
{
    for (auto const & c : vlan_unaware_fxc_pseudowire_evpn)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::VlanUnawareFxcPseudowireEvpn::VlanUnawareFxcPseudowireEvpn()
    :
    acid{YType::uint32, "acid"},
    eviid{YType::uint32, "eviid"}
{
    yang_name = "vlan-unaware-fxc-pseudowire-evpn"; yang_parent_name = "vlan-unaware-fxc-pseudowire-evpns";
}

L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::VlanUnawareFxcPseudowireEvpn::~VlanUnawareFxcPseudowireEvpn()
{
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::VlanUnawareFxcPseudowireEvpn::has_data() const
{
    return acid.is_set
	|| eviid.is_set;
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::VlanUnawareFxcPseudowireEvpn::has_operation() const
{
    return is_set(operation)
	|| is_set(acid.operation)
	|| is_set(eviid.operation);
}

std::string L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::VlanUnawareFxcPseudowireEvpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-unaware-fxc-pseudowire-evpn" <<"[acid='" <<acid <<"']" <<"[eviid='" <<eviid <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::VlanUnawareFxcPseudowireEvpn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VlanUnawareFxcPseudowireEvpn' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acid.is_set || is_set(acid.operation)) leaf_name_data.push_back(acid.get_name_leafdata());
    if (eviid.is_set || is_set(eviid.operation)) leaf_name_data.push_back(eviid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::VlanUnawareFxcPseudowireEvpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::VlanUnawareFxcPseudowireEvpn::get_children()
{
    return children;
}

void L2Vpn::Database::FlexibleXconnectServiceTable::VlanUnawareFlexibleXconnectServices::VlanUnawareFlexibleXconnectService::VlanUnawareFxcPseudowireEvpns::VlanUnawareFxcPseudowireEvpn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acid")
    {
        acid = value;
    }
    if(value_path == "eviid")
    {
        eviid = value;
    }
}

L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectServices()
{
    yang_name = "vlan-aware-flexible-xconnect-services"; yang_parent_name = "flexible-xconnect-service-table";
}

L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::~VlanAwareFlexibleXconnectServices()
{
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::has_data() const
{
    for (std::size_t index=0; index<vlan_aware_flexible_xconnect_service.size(); index++)
    {
        if(vlan_aware_flexible_xconnect_service[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::has_operation() const
{
    for (std::size_t index=0; index<vlan_aware_flexible_xconnect_service.size(); index++)
    {
        if(vlan_aware_flexible_xconnect_service[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-aware-flexible-xconnect-services";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/database/flexible-xconnect-service-table/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vlan-aware-flexible-xconnect-service")
    {
        for(auto const & c : vlan_aware_flexible_xconnect_service)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService>();
        c->parent = this;
        vlan_aware_flexible_xconnect_service.push_back(std::move(c));
        children[segment_path] = vlan_aware_flexible_xconnect_service.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::get_children()
{
    for (auto const & c : vlan_aware_flexible_xconnect_service)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFlexibleXconnectService()
    :
    eviid{YType::uint32, "eviid"}
    	,
    vlan_aware_fxc_attachment_circuits(std::make_shared<L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits>())
{
    vlan_aware_fxc_attachment_circuits->parent = this;
    children["vlan-aware-fxc-attachment-circuits"] = vlan_aware_fxc_attachment_circuits;

    yang_name = "vlan-aware-flexible-xconnect-service"; yang_parent_name = "vlan-aware-flexible-xconnect-services";
}

L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::~VlanAwareFlexibleXconnectService()
{
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::has_data() const
{
    return eviid.is_set
	|| (vlan_aware_fxc_attachment_circuits !=  nullptr && vlan_aware_fxc_attachment_circuits->has_data());
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::has_operation() const
{
    return is_set(operation)
	|| is_set(eviid.operation)
	|| (vlan_aware_fxc_attachment_circuits !=  nullptr && vlan_aware_fxc_attachment_circuits->has_operation());
}

std::string L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-aware-flexible-xconnect-service" <<"[eviid='" <<eviid <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/database/flexible-xconnect-service-table/vlan-aware-flexible-xconnect-services/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eviid.is_set || is_set(eviid.operation)) leaf_name_data.push_back(eviid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vlan-aware-fxc-attachment-circuits")
    {
        if(vlan_aware_fxc_attachment_circuits != nullptr)
        {
            children["vlan-aware-fxc-attachment-circuits"] = vlan_aware_fxc_attachment_circuits;
        }
        else
        {
            vlan_aware_fxc_attachment_circuits = std::make_shared<L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits>();
            vlan_aware_fxc_attachment_circuits->parent = this;
            children["vlan-aware-fxc-attachment-circuits"] = vlan_aware_fxc_attachment_circuits;
        }
        return children.at("vlan-aware-fxc-attachment-circuits");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::get_children()
{
    if(children.find("vlan-aware-fxc-attachment-circuits") == children.end())
    {
        if(vlan_aware_fxc_attachment_circuits != nullptr)
        {
            children["vlan-aware-fxc-attachment-circuits"] = vlan_aware_fxc_attachment_circuits;
        }
    }

    return children;
}

void L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eviid")
    {
        eviid = value;
    }
}

L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::VlanAwareFxcAttachmentCircuits()
{
    yang_name = "vlan-aware-fxc-attachment-circuits"; yang_parent_name = "vlan-aware-flexible-xconnect-service";
}

L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::~VlanAwareFxcAttachmentCircuits()
{
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::has_data() const
{
    for (std::size_t index=0; index<vlan_aware_fxc_attachment_circuit.size(); index++)
    {
        if(vlan_aware_fxc_attachment_circuit[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::has_operation() const
{
    for (std::size_t index=0; index<vlan_aware_fxc_attachment_circuit.size(); index++)
    {
        if(vlan_aware_fxc_attachment_circuit[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-aware-fxc-attachment-circuits";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VlanAwareFxcAttachmentCircuits' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vlan-aware-fxc-attachment-circuit")
    {
        for(auto const & c : vlan_aware_fxc_attachment_circuit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::VlanAwareFxcAttachmentCircuit>();
        c->parent = this;
        vlan_aware_fxc_attachment_circuit.push_back(std::move(c));
        children[segment_path] = vlan_aware_fxc_attachment_circuit.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::get_children()
{
    for (auto const & c : vlan_aware_fxc_attachment_circuit)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::VlanAwareFxcAttachmentCircuit::VlanAwareFxcAttachmentCircuit()
    :
    name{YType::str, "name"}
{
    yang_name = "vlan-aware-fxc-attachment-circuit"; yang_parent_name = "vlan-aware-fxc-attachment-circuits";
}

L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::VlanAwareFxcAttachmentCircuit::~VlanAwareFxcAttachmentCircuit()
{
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::VlanAwareFxcAttachmentCircuit::has_data() const
{
    return name.is_set;
}

bool L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::VlanAwareFxcAttachmentCircuit::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::VlanAwareFxcAttachmentCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-aware-fxc-attachment-circuit" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::VlanAwareFxcAttachmentCircuit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VlanAwareFxcAttachmentCircuit' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::VlanAwareFxcAttachmentCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::VlanAwareFxcAttachmentCircuit::get_children()
{
    return children;
}

void L2Vpn::Database::FlexibleXconnectServiceTable::VlanAwareFlexibleXconnectServices::VlanAwareFlexibleXconnectService::VlanAwareFxcAttachmentCircuits::VlanAwareFxcAttachmentCircuit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

L2Vpn::Database::Redundancy::Redundancy()
    :
    enable{YType::empty, "enable"}
    	,
    iccp_redundancy_groups(std::make_shared<L2Vpn::Database::Redundancy::IccpRedundancyGroups>())
{
    iccp_redundancy_groups->parent = this;
    children["iccp-redundancy-groups"] = iccp_redundancy_groups;

    yang_name = "redundancy"; yang_parent_name = "database";
}

L2Vpn::Database::Redundancy::~Redundancy()
{
}

bool L2Vpn::Database::Redundancy::has_data() const
{
    return enable.is_set
	|| (iccp_redundancy_groups !=  nullptr && iccp_redundancy_groups->has_data());
}

bool L2Vpn::Database::Redundancy::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| (iccp_redundancy_groups !=  nullptr && iccp_redundancy_groups->has_operation());
}

std::string L2Vpn::Database::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::Redundancy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/database/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "iccp-redundancy-groups")
    {
        if(iccp_redundancy_groups != nullptr)
        {
            children["iccp-redundancy-groups"] = iccp_redundancy_groups;
        }
        else
        {
            iccp_redundancy_groups = std::make_shared<L2Vpn::Database::Redundancy::IccpRedundancyGroups>();
            iccp_redundancy_groups->parent = this;
            children["iccp-redundancy-groups"] = iccp_redundancy_groups;
        }
        return children.at("iccp-redundancy-groups");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::Redundancy::get_children()
{
    if(children.find("iccp-redundancy-groups") == children.end())
    {
        if(iccp_redundancy_groups != nullptr)
        {
            children["iccp-redundancy-groups"] = iccp_redundancy_groups;
        }
    }

    return children;
}

void L2Vpn::Database::Redundancy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroups()
{
    yang_name = "iccp-redundancy-groups"; yang_parent_name = "redundancy";
}

L2Vpn::Database::Redundancy::IccpRedundancyGroups::~IccpRedundancyGroups()
{
}

bool L2Vpn::Database::Redundancy::IccpRedundancyGroups::has_data() const
{
    for (std::size_t index=0; index<iccp_redundancy_group.size(); index++)
    {
        if(iccp_redundancy_group[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::Redundancy::IccpRedundancyGroups::has_operation() const
{
    for (std::size_t index=0; index<iccp_redundancy_group.size(); index++)
    {
        if(iccp_redundancy_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::Redundancy::IccpRedundancyGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-redundancy-groups";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::Redundancy::IccpRedundancyGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/database/redundancy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::Redundancy::IccpRedundancyGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "iccp-redundancy-group")
    {
        for(auto const & c : iccp_redundancy_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup>();
        c->parent = this;
        iccp_redundancy_group.push_back(std::move(c));
        children[segment_path] = iccp_redundancy_group.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::Redundancy::IccpRedundancyGroups::get_children()
{
    for (auto const & c : iccp_redundancy_group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::Redundancy::IccpRedundancyGroups::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpRedundancyGroup()
    :
    group_id{YType::uint32, "group-id"},
    multi_homing_node_id{YType::uint32, "multi-homing-node-id"}
    	,
    iccp_interfaces(std::make_shared<L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces>())
{
    iccp_interfaces->parent = this;
    children["iccp-interfaces"] = iccp_interfaces;

    yang_name = "iccp-redundancy-group"; yang_parent_name = "iccp-redundancy-groups";
}

L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::~IccpRedundancyGroup()
{
}

bool L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::has_data() const
{
    return group_id.is_set
	|| multi_homing_node_id.is_set
	|| (iccp_interfaces !=  nullptr && iccp_interfaces->has_data());
}

bool L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(group_id.operation)
	|| is_set(multi_homing_node_id.operation)
	|| (iccp_interfaces !=  nullptr && iccp_interfaces->has_operation());
}

std::string L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-redundancy-group" <<"[group-id='" <<group_id <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/database/redundancy/iccp-redundancy-groups/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.operation)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (multi_homing_node_id.is_set || is_set(multi_homing_node_id.operation)) leaf_name_data.push_back(multi_homing_node_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "iccp-interfaces")
    {
        if(iccp_interfaces != nullptr)
        {
            children["iccp-interfaces"] = iccp_interfaces;
        }
        else
        {
            iccp_interfaces = std::make_shared<L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces>();
            iccp_interfaces->parent = this;
            children["iccp-interfaces"] = iccp_interfaces;
        }
        return children.at("iccp-interfaces");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::get_children()
{
    if(children.find("iccp-interfaces") == children.end())
    {
        if(iccp_interfaces != nullptr)
        {
            children["iccp-interfaces"] = iccp_interfaces;
        }
    }

    return children;
}

void L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-id")
    {
        group_id = value;
    }
    if(value_path == "multi-homing-node-id")
    {
        multi_homing_node_id = value;
    }
}

L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::IccpInterfaces()
{
    yang_name = "iccp-interfaces"; yang_parent_name = "iccp-redundancy-group";
}

L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::~IccpInterfaces()
{
}

bool L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::has_data() const
{
    for (std::size_t index=0; index<iccp_interface.size(); index++)
    {
        if(iccp_interface[index]->has_data())
            return true;
    }
    return false;
}

bool L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::has_operation() const
{
    for (std::size_t index=0; index<iccp_interface.size(); index++)
    {
        if(iccp_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-interfaces";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IccpInterfaces' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "iccp-interface")
    {
        for(auto const & c : iccp_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::IccpInterface>();
        c->parent = this;
        iccp_interface.push_back(std::move(c));
        children[segment_path] = iccp_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::get_children()
{
    for (auto const & c : iccp_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::IccpInterface::IccpInterface()
    :
    interface_name{YType::str, "interface-name"},
    mac_flush_tcn{YType::empty, "mac-flush-tcn"},
    primary_vlan_range{YType::str, "primary-vlan-range"},
    recovery_delay{YType::uint32, "recovery-delay"},
    secondary_vlan_range{YType::str, "secondary-vlan-range"}
{
    yang_name = "iccp-interface"; yang_parent_name = "iccp-interfaces";
}

L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::IccpInterface::~IccpInterface()
{
}

bool L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::IccpInterface::has_data() const
{
    return interface_name.is_set
	|| mac_flush_tcn.is_set
	|| primary_vlan_range.is_set
	|| recovery_delay.is_set
	|| secondary_vlan_range.is_set;
}

bool L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::IccpInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(mac_flush_tcn.operation)
	|| is_set(primary_vlan_range.operation)
	|| is_set(recovery_delay.operation)
	|| is_set(secondary_vlan_range.operation);
}

std::string L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::IccpInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::IccpInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IccpInterface' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (mac_flush_tcn.is_set || is_set(mac_flush_tcn.operation)) leaf_name_data.push_back(mac_flush_tcn.get_name_leafdata());
    if (primary_vlan_range.is_set || is_set(primary_vlan_range.operation)) leaf_name_data.push_back(primary_vlan_range.get_name_leafdata());
    if (recovery_delay.is_set || is_set(recovery_delay.operation)) leaf_name_data.push_back(recovery_delay.get_name_leafdata());
    if (secondary_vlan_range.is_set || is_set(secondary_vlan_range.operation)) leaf_name_data.push_back(secondary_vlan_range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::IccpInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::IccpInterface::get_children()
{
    return children;
}

void L2Vpn::Database::Redundancy::IccpRedundancyGroups::IccpRedundancyGroup::IccpInterfaces::IccpInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "mac-flush-tcn")
    {
        mac_flush_tcn = value;
    }
    if(value_path == "primary-vlan-range")
    {
        primary_vlan_range = value;
    }
    if(value_path == "recovery-delay")
    {
        recovery_delay = value;
    }
    if(value_path == "secondary-vlan-range")
    {
        secondary_vlan_range = value;
    }
}

L2Vpn::Pbb::Pbb()
    :
    backbone_source_mac{YType::str, "backbone-source-mac"}
{
    yang_name = "pbb"; yang_parent_name = "l2vpn";
}

L2Vpn::Pbb::~Pbb()
{
}

bool L2Vpn::Pbb::has_data() const
{
    return backbone_source_mac.is_set;
}

bool L2Vpn::Pbb::has_operation() const
{
    return is_set(operation)
	|| is_set(backbone_source_mac.operation);
}

std::string L2Vpn::Pbb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbb";

    return path_buffer.str();

}

EntityPath L2Vpn::Pbb::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backbone_source_mac.is_set || is_set(backbone_source_mac.operation)) leaf_name_data.push_back(backbone_source_mac.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Pbb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Pbb::get_children()
{
    return children;
}

void L2Vpn::Pbb::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backbone-source-mac")
    {
        backbone_source_mac = value;
    }
}

L2Vpn::AutoDiscovery::AutoDiscovery()
    :
    bgp_signaling(std::make_shared<L2Vpn::AutoDiscovery::BgpSignaling>())
{
    bgp_signaling->parent = this;
    children["bgp-signaling"] = bgp_signaling;

    yang_name = "auto-discovery"; yang_parent_name = "l2vpn";
}

L2Vpn::AutoDiscovery::~AutoDiscovery()
{
}

bool L2Vpn::AutoDiscovery::has_data() const
{
    return (bgp_signaling !=  nullptr && bgp_signaling->has_data());
}

bool L2Vpn::AutoDiscovery::has_operation() const
{
    return is_set(operation)
	|| (bgp_signaling !=  nullptr && bgp_signaling->has_operation());
}

std::string L2Vpn::AutoDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-discovery";

    return path_buffer.str();

}

EntityPath L2Vpn::AutoDiscovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::AutoDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bgp-signaling")
    {
        if(bgp_signaling != nullptr)
        {
            children["bgp-signaling"] = bgp_signaling;
        }
        else
        {
            bgp_signaling = std::make_shared<L2Vpn::AutoDiscovery::BgpSignaling>();
            bgp_signaling->parent = this;
            children["bgp-signaling"] = bgp_signaling;
        }
        return children.at("bgp-signaling");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::AutoDiscovery::get_children()
{
    if(children.find("bgp-signaling") == children.end())
    {
        if(bgp_signaling != nullptr)
        {
            children["bgp-signaling"] = bgp_signaling;
        }
    }

    return children;
}

void L2Vpn::AutoDiscovery::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::AutoDiscovery::BgpSignaling::BgpSignaling()
    :
    mtu_mismatch_ignore{YType::empty, "mtu-mismatch-ignore"}
{
    yang_name = "bgp-signaling"; yang_parent_name = "auto-discovery";
}

L2Vpn::AutoDiscovery::BgpSignaling::~BgpSignaling()
{
}

bool L2Vpn::AutoDiscovery::BgpSignaling::has_data() const
{
    return mtu_mismatch_ignore.is_set;
}

bool L2Vpn::AutoDiscovery::BgpSignaling::has_operation() const
{
    return is_set(operation)
	|| is_set(mtu_mismatch_ignore.operation);
}

std::string L2Vpn::AutoDiscovery::BgpSignaling::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-signaling";

    return path_buffer.str();

}

EntityPath L2Vpn::AutoDiscovery::BgpSignaling::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/auto-discovery/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mtu_mismatch_ignore.is_set || is_set(mtu_mismatch_ignore.operation)) leaf_name_data.push_back(mtu_mismatch_ignore.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::AutoDiscovery::BgpSignaling::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::AutoDiscovery::BgpSignaling::get_children()
{
    return children;
}

void L2Vpn::AutoDiscovery::BgpSignaling::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mtu-mismatch-ignore")
    {
        mtu_mismatch_ignore = value;
    }
}

L2Vpn::Utility::Utility()
    :
    logging(std::make_shared<L2Vpn::Utility::Logging>())
{
    logging->parent = this;
    children["logging"] = logging;

    yang_name = "utility"; yang_parent_name = "l2vpn";
}

L2Vpn::Utility::~Utility()
{
}

bool L2Vpn::Utility::has_data() const
{
    return (logging !=  nullptr && logging->has_data());
}

bool L2Vpn::Utility::has_operation() const
{
    return is_set(operation)
	|| (logging !=  nullptr && logging->has_operation());
}

std::string L2Vpn::Utility::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "utility";

    return path_buffer.str();

}

EntityPath L2Vpn::Utility::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Utility::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "logging")
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
        else
        {
            logging = std::make_shared<L2Vpn::Utility::Logging>();
            logging->parent = this;
            children["logging"] = logging;
        }
        return children.at("logging");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Utility::get_children()
{
    if(children.find("logging") == children.end())
    {
        if(logging != nullptr)
        {
            children["logging"] = logging;
        }
    }

    return children;
}

void L2Vpn::Utility::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Utility::Logging::Logging()
    :
    bridge_domain_state_change{YType::empty, "bridge-domain-state-change"},
    nsr_state_change{YType::empty, "nsr-state-change"},
    pseudowire_state_change{YType::empty, "pseudowire-state-change"},
    pwhe_replication_state_change{YType::empty, "pwhe-replication-state-change"},
    vfi{YType::empty, "vfi"}
{
    yang_name = "logging"; yang_parent_name = "utility";
}

L2Vpn::Utility::Logging::~Logging()
{
}

bool L2Vpn::Utility::Logging::has_data() const
{
    return bridge_domain_state_change.is_set
	|| nsr_state_change.is_set
	|| pseudowire_state_change.is_set
	|| pwhe_replication_state_change.is_set
	|| vfi.is_set;
}

bool L2Vpn::Utility::Logging::has_operation() const
{
    return is_set(operation)
	|| is_set(bridge_domain_state_change.operation)
	|| is_set(nsr_state_change.operation)
	|| is_set(pseudowire_state_change.operation)
	|| is_set(pwhe_replication_state_change.operation)
	|| is_set(vfi.operation);
}

std::string L2Vpn::Utility::Logging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "logging";

    return path_buffer.str();

}

EntityPath L2Vpn::Utility::Logging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/utility/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_domain_state_change.is_set || is_set(bridge_domain_state_change.operation)) leaf_name_data.push_back(bridge_domain_state_change.get_name_leafdata());
    if (nsr_state_change.is_set || is_set(nsr_state_change.operation)) leaf_name_data.push_back(nsr_state_change.get_name_leafdata());
    if (pseudowire_state_change.is_set || is_set(pseudowire_state_change.operation)) leaf_name_data.push_back(pseudowire_state_change.get_name_leafdata());
    if (pwhe_replication_state_change.is_set || is_set(pwhe_replication_state_change.operation)) leaf_name_data.push_back(pwhe_replication_state_change.get_name_leafdata());
    if (vfi.is_set || is_set(vfi.operation)) leaf_name_data.push_back(vfi.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Utility::Logging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Utility::Logging::get_children()
{
    return children;
}

void L2Vpn::Utility::Logging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bridge-domain-state-change")
    {
        bridge_domain_state_change = value;
    }
    if(value_path == "nsr-state-change")
    {
        nsr_state_change = value;
    }
    if(value_path == "pseudowire-state-change")
    {
        pseudowire_state_change = value;
    }
    if(value_path == "pwhe-replication-state-change")
    {
        pwhe_replication_state_change = value;
    }
    if(value_path == "vfi")
    {
        vfi = value;
    }
}

L2Vpn::Snmp::Snmp()
    :
    mib(std::make_shared<L2Vpn::Snmp::Mib>())
{
    mib->parent = this;
    children["mib"] = mib;

    yang_name = "snmp"; yang_parent_name = "l2vpn";
}

L2Vpn::Snmp::~Snmp()
{
}

bool L2Vpn::Snmp::has_data() const
{
    return (mib !=  nullptr && mib->has_data());
}

bool L2Vpn::Snmp::has_operation() const
{
    return is_set(operation)
	|| (mib !=  nullptr && mib->has_operation());
}

std::string L2Vpn::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";

    return path_buffer.str();

}

EntityPath L2Vpn::Snmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mib")
    {
        if(mib != nullptr)
        {
            children["mib"] = mib;
        }
        else
        {
            mib = std::make_shared<L2Vpn::Snmp::Mib>();
            mib->parent = this;
            children["mib"] = mib;
        }
        return children.at("mib");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Snmp::get_children()
{
    if(children.find("mib") == children.end())
    {
        if(mib != nullptr)
        {
            children["mib"] = mib;
        }
    }

    return children;
}

void L2Vpn::Snmp::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Snmp::Mib::Mib()
    :
    mib_interface(std::make_shared<L2Vpn::Snmp::Mib::MibInterface>())
	,mib_pseudowire(std::make_shared<L2Vpn::Snmp::Mib::MibPseudowire>())
{
    mib_interface->parent = this;
    children["mib-interface"] = mib_interface;

    mib_pseudowire->parent = this;
    children["mib-pseudowire"] = mib_pseudowire;

    yang_name = "mib"; yang_parent_name = "snmp";
}

L2Vpn::Snmp::Mib::~Mib()
{
}

bool L2Vpn::Snmp::Mib::has_data() const
{
    return (mib_interface !=  nullptr && mib_interface->has_data())
	|| (mib_pseudowire !=  nullptr && mib_pseudowire->has_data());
}

bool L2Vpn::Snmp::Mib::has_operation() const
{
    return is_set(operation)
	|| (mib_interface !=  nullptr && mib_interface->has_operation())
	|| (mib_pseudowire !=  nullptr && mib_pseudowire->has_operation());
}

std::string L2Vpn::Snmp::Mib::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mib";

    return path_buffer.str();

}

EntityPath L2Vpn::Snmp::Mib::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/snmp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Snmp::Mib::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mib-interface")
    {
        if(mib_interface != nullptr)
        {
            children["mib-interface"] = mib_interface;
        }
        else
        {
            mib_interface = std::make_shared<L2Vpn::Snmp::Mib::MibInterface>();
            mib_interface->parent = this;
            children["mib-interface"] = mib_interface;
        }
        return children.at("mib-interface");
    }

    if(child_yang_name == "mib-pseudowire")
    {
        if(mib_pseudowire != nullptr)
        {
            children["mib-pseudowire"] = mib_pseudowire;
        }
        else
        {
            mib_pseudowire = std::make_shared<L2Vpn::Snmp::Mib::MibPseudowire>();
            mib_pseudowire->parent = this;
            children["mib-pseudowire"] = mib_pseudowire;
        }
        return children.at("mib-pseudowire");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Snmp::Mib::get_children()
{
    if(children.find("mib-interface") == children.end())
    {
        if(mib_interface != nullptr)
        {
            children["mib-interface"] = mib_interface;
        }
    }

    if(children.find("mib-pseudowire") == children.end())
    {
        if(mib_pseudowire != nullptr)
        {
            children["mib-pseudowire"] = mib_pseudowire;
        }
    }

    return children;
}

void L2Vpn::Snmp::Mib::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Snmp::Mib::MibInterface::MibInterface()
    :
    format(std::make_shared<L2Vpn::Snmp::Mib::MibInterface::Format>())
{
    format->parent = this;
    children["format"] = format;

    yang_name = "mib-interface"; yang_parent_name = "mib";
}

L2Vpn::Snmp::Mib::MibInterface::~MibInterface()
{
}

bool L2Vpn::Snmp::Mib::MibInterface::has_data() const
{
    return (format !=  nullptr && format->has_data());
}

bool L2Vpn::Snmp::Mib::MibInterface::has_operation() const
{
    return is_set(operation)
	|| (format !=  nullptr && format->has_operation());
}

std::string L2Vpn::Snmp::Mib::MibInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mib-interface";

    return path_buffer.str();

}

EntityPath L2Vpn::Snmp::Mib::MibInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/snmp/mib/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Snmp::Mib::MibInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "format")
    {
        if(format != nullptr)
        {
            children["format"] = format;
        }
        else
        {
            format = std::make_shared<L2Vpn::Snmp::Mib::MibInterface::Format>();
            format->parent = this;
            children["format"] = format;
        }
        return children.at("format");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Snmp::Mib::MibInterface::get_children()
{
    if(children.find("format") == children.end())
    {
        if(format != nullptr)
        {
            children["format"] = format;
        }
    }

    return children;
}

void L2Vpn::Snmp::Mib::MibInterface::set_value(const std::string & value_path, std::string value)
{
}

L2Vpn::Snmp::Mib::MibInterface::Format::Format()
    :
    external_interface_format{YType::empty, "external-interface-format"}
{
    yang_name = "format"; yang_parent_name = "mib-interface";
}

L2Vpn::Snmp::Mib::MibInterface::Format::~Format()
{
}

bool L2Vpn::Snmp::Mib::MibInterface::Format::has_data() const
{
    return external_interface_format.is_set;
}

bool L2Vpn::Snmp::Mib::MibInterface::Format::has_operation() const
{
    return is_set(operation)
	|| is_set(external_interface_format.operation);
}

std::string L2Vpn::Snmp::Mib::MibInterface::Format::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "format";

    return path_buffer.str();

}

EntityPath L2Vpn::Snmp::Mib::MibInterface::Format::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/snmp/mib/mib-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_interface_format.is_set || is_set(external_interface_format.operation)) leaf_name_data.push_back(external_interface_format.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Snmp::Mib::MibInterface::Format::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Snmp::Mib::MibInterface::Format::get_children()
{
    return children;
}

void L2Vpn::Snmp::Mib::MibInterface::Format::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "external-interface-format")
    {
        external_interface_format = value;
    }
}

L2Vpn::Snmp::Mib::MibPseudowire::MibPseudowire()
    :
    statistics{YType::empty, "statistics"}
{
    yang_name = "mib-pseudowire"; yang_parent_name = "mib";
}

L2Vpn::Snmp::Mib::MibPseudowire::~MibPseudowire()
{
}

bool L2Vpn::Snmp::Mib::MibPseudowire::has_data() const
{
    return statistics.is_set;
}

bool L2Vpn::Snmp::Mib::MibPseudowire::has_operation() const
{
    return is_set(operation)
	|| is_set(statistics.operation);
}

std::string L2Vpn::Snmp::Mib::MibPseudowire::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mib-pseudowire";

    return path_buffer.str();

}

EntityPath L2Vpn::Snmp::Mib::MibPseudowire::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-cfg:l2vpn/snmp/mib/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (statistics.is_set || is_set(statistics.operation)) leaf_name_data.push_back(statistics.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> L2Vpn::Snmp::Mib::MibPseudowire::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & L2Vpn::Snmp::Mib::MibPseudowire::get_children()
{
    return children;
}

void L2Vpn::Snmp::Mib::MibPseudowire::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "statistics")
    {
        statistics = value;
    }
}

GenericInterfaceLists::GenericInterfaceLists()
{
    yang_name = "generic-interface-lists"; yang_parent_name = "Cisco-IOS-XR-l2vpn-cfg";
}

GenericInterfaceLists::~GenericInterfaceLists()
{
}

bool GenericInterfaceLists::has_data() const
{
    for (std::size_t index=0; index<generic_interface.size(); index++)
    {
        if(generic_interface[index]->has_data())
            return true;
    }
    return false;
}

bool GenericInterfaceLists::has_operation() const
{
    for (std::size_t index=0; index<generic_interface.size(); index++)
    {
        if(generic_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string GenericInterfaceLists::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:generic-interface-lists";

    return path_buffer.str();

}

EntityPath GenericInterfaceLists::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> GenericInterfaceLists::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "generic-interface")
    {
        for(auto const & c : generic_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<GenericInterfaceLists::GenericInterface>();
        c->parent = this;
        generic_interface.push_back(std::move(c));
        children[segment_path] = generic_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & GenericInterfaceLists::get_children()
{
    for (auto const & c : generic_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void GenericInterfaceLists::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> GenericInterfaceLists::clone_ptr() const
{
    return std::make_shared<GenericInterfaceLists>();
}

std::string GenericInterfaceLists::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string GenericInterfaceLists::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function GenericInterfaceLists::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

GenericInterfaceLists::GenericInterface::GenericInterface()
    :
    generic_interface_list_name{YType::str, "generic-interface-list-name"},
    enable{YType::empty, "enable"}
    	,
    interfaces(std::make_shared<GenericInterfaceLists::GenericInterface::Interfaces>())
{
    interfaces->parent = this;
    children["interfaces"] = interfaces;

    yang_name = "generic-interface"; yang_parent_name = "generic-interface-lists";
}

GenericInterfaceLists::GenericInterface::~GenericInterface()
{
}

bool GenericInterfaceLists::GenericInterface::has_data() const
{
    return generic_interface_list_name.is_set
	|| enable.is_set
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool GenericInterfaceLists::GenericInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(generic_interface_list_name.operation)
	|| is_set(enable.operation)
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string GenericInterfaceLists::GenericInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-interface" <<"[generic-interface-list-name='" <<generic_interface_list_name <<"']";

    return path_buffer.str();

}

EntityPath GenericInterfaceLists::GenericInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-cfg:generic-interface-lists/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_interface_list_name.is_set || is_set(generic_interface_list_name.operation)) leaf_name_data.push_back(generic_interface_list_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GenericInterfaceLists::GenericInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
        else
        {
            interfaces = std::make_shared<GenericInterfaceLists::GenericInterface::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces;
        }
        return children.at("interfaces");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & GenericInterfaceLists::GenericInterface::get_children()
{
    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
    }

    return children;
}

void GenericInterfaceLists::GenericInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "generic-interface-list-name")
    {
        generic_interface_list_name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

GenericInterfaceLists::GenericInterface::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "generic-interface";
}

GenericInterfaceLists::GenericInterface::Interfaces::~Interfaces()
{
}

bool GenericInterfaceLists::GenericInterface::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool GenericInterfaceLists::GenericInterface::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string GenericInterfaceLists::GenericInterface::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath GenericInterfaceLists::GenericInterface::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interfaces' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GenericInterfaceLists::GenericInterface::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<GenericInterfaceLists::GenericInterface::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & GenericInterfaceLists::GenericInterface::Interfaces::get_children()
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

void GenericInterfaceLists::GenericInterface::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

GenericInterfaceLists::GenericInterface::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    enable{YType::empty, "enable"}
{
    yang_name = "interface"; yang_parent_name = "interfaces";
}

GenericInterfaceLists::GenericInterface::Interfaces::Interface::~Interface()
{
}

bool GenericInterfaceLists::GenericInterface::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| enable.is_set;
}

bool GenericInterfaceLists::GenericInterface::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(enable.operation);
}

std::string GenericInterfaceLists::GenericInterface::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath GenericInterfaceLists::GenericInterface::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> GenericInterfaceLists::GenericInterface::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & GenericInterfaceLists::GenericInterface::Interfaces::Interface::get_children()
{
    return children;
}

void GenericInterfaceLists::GenericInterface::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
}

Evpn::Evpn()
    :
    enable{YType::empty, "enable"}
    	,
    evpn_tables(std::make_shared<Evpn::EvpnTables>())
{
    evpn_tables->parent = this;
    children["evpn-tables"] = evpn_tables;

    yang_name = "evpn"; yang_parent_name = "Cisco-IOS-XR-l2vpn-cfg";
}

Evpn::~Evpn()
{
}

bool Evpn::has_data() const
{
    return enable.is_set
	|| (evpn_tables !=  nullptr && evpn_tables->has_data());
}

bool Evpn::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| (evpn_tables !=  nullptr && evpn_tables->has_operation());
}

std::string Evpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn";

    return path_buffer.str();

}

EntityPath Evpn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "evpn-tables")
    {
        if(evpn_tables != nullptr)
        {
            children["evpn-tables"] = evpn_tables;
        }
        else
        {
            evpn_tables = std::make_shared<Evpn::EvpnTables>();
            evpn_tables->parent = this;
            children["evpn-tables"] = evpn_tables;
        }
        return children.at("evpn-tables");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::get_children()
{
    if(children.find("evpn-tables") == children.end())
    {
        if(evpn_tables != nullptr)
        {
            children["evpn-tables"] = evpn_tables;
        }
    }

    return children;
}

void Evpn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

std::shared_ptr<Entity> Evpn::clone_ptr() const
{
    return std::make_shared<Evpn>();
}

std::string Evpn::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Evpn::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Evpn::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Evpn::EvpnTables::EvpnTables()
    :
    evpn_source_interface{YType::str, "evpn-source-interface"}
    	,
    evpn_interfaces(std::make_shared<Evpn::EvpnTables::EvpnInterfaces>())
	,evpn_load_balancing(std::make_shared<Evpn::EvpnTables::EvpnLoadBalancing>())
	,evpn_logging(std::make_shared<Evpn::EvpnTables::EvpnLogging>())
	,evpn_timers(std::make_shared<Evpn::EvpnTables::EvpnTimers>())
	,evpn_virtual_access_pws(std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessPws>())
	,evpn_virtual_access_vfis(std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessVfis>())
	,evpnbgp_auto_discovery(std::make_shared<Evpn::EvpnTables::EvpnbgpAutoDiscovery>())
	,evpnevis(std::make_shared<Evpn::EvpnTables::Evpnevis>())
{
    evpn_interfaces->parent = this;
    children["evpn-interfaces"] = evpn_interfaces;

    evpn_load_balancing->parent = this;
    children["evpn-load-balancing"] = evpn_load_balancing;

    evpn_logging->parent = this;
    children["evpn-logging"] = evpn_logging;

    evpn_timers->parent = this;
    children["evpn-timers"] = evpn_timers;

    evpn_virtual_access_pws->parent = this;
    children["evpn-virtual-access-pws"] = evpn_virtual_access_pws;

    evpn_virtual_access_vfis->parent = this;
    children["evpn-virtual-access-vfis"] = evpn_virtual_access_vfis;

    evpnbgp_auto_discovery->parent = this;
    children["evpnbgp-auto-discovery"] = evpnbgp_auto_discovery;

    evpnevis->parent = this;
    children["evpnevis"] = evpnevis;

    yang_name = "evpn-tables"; yang_parent_name = "evpn";
}

Evpn::EvpnTables::~EvpnTables()
{
}

bool Evpn::EvpnTables::has_data() const
{
    return evpn_source_interface.is_set
	|| (evpn_interfaces !=  nullptr && evpn_interfaces->has_data())
	|| (evpn_load_balancing !=  nullptr && evpn_load_balancing->has_data())
	|| (evpn_logging !=  nullptr && evpn_logging->has_data())
	|| (evpn_timers !=  nullptr && evpn_timers->has_data())
	|| (evpn_virtual_access_pws !=  nullptr && evpn_virtual_access_pws->has_data())
	|| (evpn_virtual_access_vfis !=  nullptr && evpn_virtual_access_vfis->has_data())
	|| (evpnbgp_auto_discovery !=  nullptr && evpnbgp_auto_discovery->has_data())
	|| (evpnevis !=  nullptr && evpnevis->has_data());
}

bool Evpn::EvpnTables::has_operation() const
{
    return is_set(operation)
	|| is_set(evpn_source_interface.operation)
	|| (evpn_interfaces !=  nullptr && evpn_interfaces->has_operation())
	|| (evpn_load_balancing !=  nullptr && evpn_load_balancing->has_operation())
	|| (evpn_logging !=  nullptr && evpn_logging->has_operation())
	|| (evpn_timers !=  nullptr && evpn_timers->has_operation())
	|| (evpn_virtual_access_pws !=  nullptr && evpn_virtual_access_pws->has_operation())
	|| (evpn_virtual_access_vfis !=  nullptr && evpn_virtual_access_vfis->has_operation())
	|| (evpnbgp_auto_discovery !=  nullptr && evpnbgp_auto_discovery->has_operation())
	|| (evpnevis !=  nullptr && evpnevis->has_operation());
}

std::string Evpn::EvpnTables::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-tables";

    return path_buffer.str();

}

EntityPath Evpn::EvpnTables::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (evpn_source_interface.is_set || is_set(evpn_source_interface.operation)) leaf_name_data.push_back(evpn_source_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::EvpnTables::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "evpn-interfaces")
    {
        if(evpn_interfaces != nullptr)
        {
            children["evpn-interfaces"] = evpn_interfaces;
        }
        else
        {
            evpn_interfaces = std::make_shared<Evpn::EvpnTables::EvpnInterfaces>();
            evpn_interfaces->parent = this;
            children["evpn-interfaces"] = evpn_interfaces;
        }
        return children.at("evpn-interfaces");
    }

    if(child_yang_name == "evpn-load-balancing")
    {
        if(evpn_load_balancing != nullptr)
        {
            children["evpn-load-balancing"] = evpn_load_balancing;
        }
        else
        {
            evpn_load_balancing = std::make_shared<Evpn::EvpnTables::EvpnLoadBalancing>();
            evpn_load_balancing->parent = this;
            children["evpn-load-balancing"] = evpn_load_balancing;
        }
        return children.at("evpn-load-balancing");
    }

    if(child_yang_name == "evpn-logging")
    {
        if(evpn_logging != nullptr)
        {
            children["evpn-logging"] = evpn_logging;
        }
        else
        {
            evpn_logging = std::make_shared<Evpn::EvpnTables::EvpnLogging>();
            evpn_logging->parent = this;
            children["evpn-logging"] = evpn_logging;
        }
        return children.at("evpn-logging");
    }

    if(child_yang_name == "evpn-timers")
    {
        if(evpn_timers != nullptr)
        {
            children["evpn-timers"] = evpn_timers;
        }
        else
        {
            evpn_timers = std::make_shared<Evpn::EvpnTables::EvpnTimers>();
            evpn_timers->parent = this;
            children["evpn-timers"] = evpn_timers;
        }
        return children.at("evpn-timers");
    }

    if(child_yang_name == "evpn-virtual-access-pws")
    {
        if(evpn_virtual_access_pws != nullptr)
        {
            children["evpn-virtual-access-pws"] = evpn_virtual_access_pws;
        }
        else
        {
            evpn_virtual_access_pws = std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessPws>();
            evpn_virtual_access_pws->parent = this;
            children["evpn-virtual-access-pws"] = evpn_virtual_access_pws;
        }
        return children.at("evpn-virtual-access-pws");
    }

    if(child_yang_name == "evpn-virtual-access-vfis")
    {
        if(evpn_virtual_access_vfis != nullptr)
        {
            children["evpn-virtual-access-vfis"] = evpn_virtual_access_vfis;
        }
        else
        {
            evpn_virtual_access_vfis = std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessVfis>();
            evpn_virtual_access_vfis->parent = this;
            children["evpn-virtual-access-vfis"] = evpn_virtual_access_vfis;
        }
        return children.at("evpn-virtual-access-vfis");
    }

    if(child_yang_name == "evpnbgp-auto-discovery")
    {
        if(evpnbgp_auto_discovery != nullptr)
        {
            children["evpnbgp-auto-discovery"] = evpnbgp_auto_discovery;
        }
        else
        {
            evpnbgp_auto_discovery = std::make_shared<Evpn::EvpnTables::EvpnbgpAutoDiscovery>();
            evpnbgp_auto_discovery->parent = this;
            children["evpnbgp-auto-discovery"] = evpnbgp_auto_discovery;
        }
        return children.at("evpnbgp-auto-discovery");
    }

    if(child_yang_name == "evpnevis")
    {
        if(evpnevis != nullptr)
        {
            children["evpnevis"] = evpnevis;
        }
        else
        {
            evpnevis = std::make_shared<Evpn::EvpnTables::Evpnevis>();
            evpnevis->parent = this;
            children["evpnevis"] = evpnevis;
        }
        return children.at("evpnevis");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::EvpnTables::get_children()
{
    if(children.find("evpn-interfaces") == children.end())
    {
        if(evpn_interfaces != nullptr)
        {
            children["evpn-interfaces"] = evpn_interfaces;
        }
    }

    if(children.find("evpn-load-balancing") == children.end())
    {
        if(evpn_load_balancing != nullptr)
        {
            children["evpn-load-balancing"] = evpn_load_balancing;
        }
    }

    if(children.find("evpn-logging") == children.end())
    {
        if(evpn_logging != nullptr)
        {
            children["evpn-logging"] = evpn_logging;
        }
    }

    if(children.find("evpn-timers") == children.end())
    {
        if(evpn_timers != nullptr)
        {
            children["evpn-timers"] = evpn_timers;
        }
    }

    if(children.find("evpn-virtual-access-pws") == children.end())
    {
        if(evpn_virtual_access_pws != nullptr)
        {
            children["evpn-virtual-access-pws"] = evpn_virtual_access_pws;
        }
    }

    if(children.find("evpn-virtual-access-vfis") == children.end())
    {
        if(evpn_virtual_access_vfis != nullptr)
        {
            children["evpn-virtual-access-vfis"] = evpn_virtual_access_vfis;
        }
    }

    if(children.find("evpnbgp-auto-discovery") == children.end())
    {
        if(evpnbgp_auto_discovery != nullptr)
        {
            children["evpnbgp-auto-discovery"] = evpnbgp_auto_discovery;
        }
    }

    if(children.find("evpnevis") == children.end())
    {
        if(evpnevis != nullptr)
        {
            children["evpnevis"] = evpnevis;
        }
    }

    return children;
}

void Evpn::EvpnTables::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "evpn-source-interface")
    {
        evpn_source_interface = value;
    }
}

Evpn::EvpnTables::EvpnTimers::EvpnTimers()
    :
    enable{YType::empty, "enable"},
    evpn_peering{YType::uint32, "evpn-peering"},
    evpn_recovery{YType::uint32, "evpn-recovery"}
{
    yang_name = "evpn-timers"; yang_parent_name = "evpn-tables";
}

Evpn::EvpnTables::EvpnTimers::~EvpnTimers()
{
}

bool Evpn::EvpnTables::EvpnTimers::has_data() const
{
    return enable.is_set
	|| evpn_peering.is_set
	|| evpn_recovery.is_set;
}

bool Evpn::EvpnTables::EvpnTimers::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(evpn_peering.operation)
	|| is_set(evpn_recovery.operation);
}

std::string Evpn::EvpnTables::EvpnTimers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-timers";

    return path_buffer.str();

}

EntityPath Evpn::EvpnTables::EvpnTimers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (evpn_peering.is_set || is_set(evpn_peering.operation)) leaf_name_data.push_back(evpn_peering.get_name_leafdata());
    if (evpn_recovery.is_set || is_set(evpn_recovery.operation)) leaf_name_data.push_back(evpn_recovery.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::EvpnTables::EvpnTimers::get_children()
{
    return children;
}

void Evpn::EvpnTables::EvpnTimers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "evpn-peering")
    {
        evpn_peering = value;
    }
    if(value_path == "evpn-recovery")
    {
        evpn_recovery = value;
    }
}

Evpn::EvpnTables::Evpnevis::Evpnevis()
{
    yang_name = "evpnevis"; yang_parent_name = "evpn-tables";
}

Evpn::EvpnTables::Evpnevis::~Evpnevis()
{
}

bool Evpn::EvpnTables::Evpnevis::has_data() const
{
    for (std::size_t index=0; index<evpnevi.size(); index++)
    {
        if(evpnevi[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::EvpnTables::Evpnevis::has_operation() const
{
    for (std::size_t index=0; index<evpnevi.size(); index++)
    {
        if(evpnevi[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Evpn::EvpnTables::Evpnevis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpnevis";

    return path_buffer.str();

}

EntityPath Evpn::EvpnTables::Evpnevis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::EvpnTables::Evpnevis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "evpnevi")
    {
        for(auto const & c : evpnevi)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Evpn::EvpnTables::Evpnevis::Evpnevi>();
        c->parent = this;
        evpnevi.push_back(std::move(c));
        children[segment_path] = evpnevi.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::EvpnTables::Evpnevis::get_children()
{
    for (auto const & c : evpnevi)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Evpn::EvpnTables::Evpnevis::set_value(const std::string & value_path, std::string value)
{
}

Evpn::EvpnTables::Evpnevis::Evpnevi::Evpnevi()
    :
    eviid{YType::uint32, "eviid"},
    evi_advertise_mac{YType::empty, "evi-advertise-mac"},
    evi_reorig_disable{YType::empty, "evi-reorig-disable"},
    evi_stitching{YType::empty, "evi-stitching"},
    evi_unknown_unicast_flooding_disable{YType::empty, "evi-unknown-unicast-flooding-disable"},
    evpn_evi_cw_disable{YType::empty, "evpn-evi-cw-disable"},
    evpnevi_description{YType::str, "evpnevi-description"}
    	,
    evi_load_balancing(std::make_shared<Evpn::EvpnTables::Evpnevis::Evpnevi::EviLoadBalancing>())
	,evpnevibgp_auto_discovery(std::make_shared<Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery>())
{
    evi_load_balancing->parent = this;
    children["evi-load-balancing"] = evi_load_balancing;

    evpnevibgp_auto_discovery->parent = this;
    children["evpnevibgp-auto-discovery"] = evpnevibgp_auto_discovery;

    yang_name = "evpnevi"; yang_parent_name = "evpnevis";
}

Evpn::EvpnTables::Evpnevis::Evpnevi::~Evpnevi()
{
}

bool Evpn::EvpnTables::Evpnevis::Evpnevi::has_data() const
{
    return eviid.is_set
	|| evi_advertise_mac.is_set
	|| evi_reorig_disable.is_set
	|| evi_stitching.is_set
	|| evi_unknown_unicast_flooding_disable.is_set
	|| evpn_evi_cw_disable.is_set
	|| evpnevi_description.is_set
	|| (evi_load_balancing !=  nullptr && evi_load_balancing->has_data())
	|| (evpnevibgp_auto_discovery !=  nullptr && evpnevibgp_auto_discovery->has_data());
}

bool Evpn::EvpnTables::Evpnevis::Evpnevi::has_operation() const
{
    return is_set(operation)
	|| is_set(eviid.operation)
	|| is_set(evi_advertise_mac.operation)
	|| is_set(evi_reorig_disable.operation)
	|| is_set(evi_stitching.operation)
	|| is_set(evi_unknown_unicast_flooding_disable.operation)
	|| is_set(evpn_evi_cw_disable.operation)
	|| is_set(evpnevi_description.operation)
	|| (evi_load_balancing !=  nullptr && evi_load_balancing->has_operation())
	|| (evpnevibgp_auto_discovery !=  nullptr && evpnevibgp_auto_discovery->has_operation());
}

std::string Evpn::EvpnTables::Evpnevis::Evpnevi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpnevi" <<"[eviid='" <<eviid <<"']";

    return path_buffer.str();

}

EntityPath Evpn::EvpnTables::Evpnevis::Evpnevi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/evpnevis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eviid.is_set || is_set(eviid.operation)) leaf_name_data.push_back(eviid.get_name_leafdata());
    if (evi_advertise_mac.is_set || is_set(evi_advertise_mac.operation)) leaf_name_data.push_back(evi_advertise_mac.get_name_leafdata());
    if (evi_reorig_disable.is_set || is_set(evi_reorig_disable.operation)) leaf_name_data.push_back(evi_reorig_disable.get_name_leafdata());
    if (evi_stitching.is_set || is_set(evi_stitching.operation)) leaf_name_data.push_back(evi_stitching.get_name_leafdata());
    if (evi_unknown_unicast_flooding_disable.is_set || is_set(evi_unknown_unicast_flooding_disable.operation)) leaf_name_data.push_back(evi_unknown_unicast_flooding_disable.get_name_leafdata());
    if (evpn_evi_cw_disable.is_set || is_set(evpn_evi_cw_disable.operation)) leaf_name_data.push_back(evpn_evi_cw_disable.get_name_leafdata());
    if (evpnevi_description.is_set || is_set(evpnevi_description.operation)) leaf_name_data.push_back(evpnevi_description.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::EvpnTables::Evpnevis::Evpnevi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "evi-load-balancing")
    {
        if(evi_load_balancing != nullptr)
        {
            children["evi-load-balancing"] = evi_load_balancing;
        }
        else
        {
            evi_load_balancing = std::make_shared<Evpn::EvpnTables::Evpnevis::Evpnevi::EviLoadBalancing>();
            evi_load_balancing->parent = this;
            children["evi-load-balancing"] = evi_load_balancing;
        }
        return children.at("evi-load-balancing");
    }

    if(child_yang_name == "evpnevibgp-auto-discovery")
    {
        if(evpnevibgp_auto_discovery != nullptr)
        {
            children["evpnevibgp-auto-discovery"] = evpnevibgp_auto_discovery;
        }
        else
        {
            evpnevibgp_auto_discovery = std::make_shared<Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery>();
            evpnevibgp_auto_discovery->parent = this;
            children["evpnevibgp-auto-discovery"] = evpnevibgp_auto_discovery;
        }
        return children.at("evpnevibgp-auto-discovery");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::EvpnTables::Evpnevis::Evpnevi::get_children()
{
    if(children.find("evi-load-balancing") == children.end())
    {
        if(evi_load_balancing != nullptr)
        {
            children["evi-load-balancing"] = evi_load_balancing;
        }
    }

    if(children.find("evpnevibgp-auto-discovery") == children.end())
    {
        if(evpnevibgp_auto_discovery != nullptr)
        {
            children["evpnevibgp-auto-discovery"] = evpnevibgp_auto_discovery;
        }
    }

    return children;
}

void Evpn::EvpnTables::Evpnevis::Evpnevi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "eviid")
    {
        eviid = value;
    }
    if(value_path == "evi-advertise-mac")
    {
        evi_advertise_mac = value;
    }
    if(value_path == "evi-reorig-disable")
    {
        evi_reorig_disable = value;
    }
    if(value_path == "evi-stitching")
    {
        evi_stitching = value;
    }
    if(value_path == "evi-unknown-unicast-flooding-disable")
    {
        evi_unknown_unicast_flooding_disable = value;
    }
    if(value_path == "evpn-evi-cw-disable")
    {
        evpn_evi_cw_disable = value;
    }
    if(value_path == "evpnevi-description")
    {
        evpnevi_description = value;
    }
}

Evpn::EvpnTables::Evpnevis::Evpnevi::EviLoadBalancing::EviLoadBalancing()
    :
    enable{YType::empty, "enable"},
    evi_flow_label{YType::empty, "evi-flow-label"}
{
    yang_name = "evi-load-balancing"; yang_parent_name = "evpnevi";
}

Evpn::EvpnTables::Evpnevis::Evpnevi::EviLoadBalancing::~EviLoadBalancing()
{
}

bool Evpn::EvpnTables::Evpnevis::Evpnevi::EviLoadBalancing::has_data() const
{
    return enable.is_set
	|| evi_flow_label.is_set;
}

bool Evpn::EvpnTables::Evpnevis::Evpnevi::EviLoadBalancing::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(evi_flow_label.operation);
}

std::string Evpn::EvpnTables::Evpnevis::Evpnevi::EviLoadBalancing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evi-load-balancing";

    return path_buffer.str();

}

EntityPath Evpn::EvpnTables::Evpnevis::Evpnevi::EviLoadBalancing::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EviLoadBalancing' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (evi_flow_label.is_set || is_set(evi_flow_label.operation)) leaf_name_data.push_back(evi_flow_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::EvpnTables::Evpnevis::Evpnevi::EviLoadBalancing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::EvpnTables::Evpnevis::Evpnevi::EviLoadBalancing::get_children()
{
    return children;
}

void Evpn::EvpnTables::Evpnevis::Evpnevi::EviLoadBalancing::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "evi-flow-label")
    {
        evi_flow_label = value;
    }
}

Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnevibgpAutoDiscovery()
    :
    enable{YType::empty, "enable"},
    table_policy{YType::str, "table-policy"}
    	,
    evpn_route_distinguisher(std::make_shared<Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteDistinguisher>())
	,evpn_route_targets(std::make_shared<Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets>())
{
    evpn_route_distinguisher->parent = this;
    children["evpn-route-distinguisher"] = evpn_route_distinguisher;

    evpn_route_targets->parent = this;
    children["evpn-route-targets"] = evpn_route_targets;

    yang_name = "evpnevibgp-auto-discovery"; yang_parent_name = "evpnevi";
}

Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::~EvpnevibgpAutoDiscovery()
{
}

bool Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::has_data() const
{
    return enable.is_set
	|| table_policy.is_set
	|| (evpn_route_distinguisher !=  nullptr && evpn_route_distinguisher->has_data())
	|| (evpn_route_targets !=  nullptr && evpn_route_targets->has_data());
}

bool Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(table_policy.operation)
	|| (evpn_route_distinguisher !=  nullptr && evpn_route_distinguisher->has_operation())
	|| (evpn_route_targets !=  nullptr && evpn_route_targets->has_operation());
}

std::string Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpnevibgp-auto-discovery";

    return path_buffer.str();

}

EntityPath Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EvpnevibgpAutoDiscovery' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (table_policy.is_set || is_set(table_policy.operation)) leaf_name_data.push_back(table_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "evpn-route-distinguisher")
    {
        if(evpn_route_distinguisher != nullptr)
        {
            children["evpn-route-distinguisher"] = evpn_route_distinguisher;
        }
        else
        {
            evpn_route_distinguisher = std::make_shared<Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteDistinguisher>();
            evpn_route_distinguisher->parent = this;
            children["evpn-route-distinguisher"] = evpn_route_distinguisher;
        }
        return children.at("evpn-route-distinguisher");
    }

    if(child_yang_name == "evpn-route-targets")
    {
        if(evpn_route_targets != nullptr)
        {
            children["evpn-route-targets"] = evpn_route_targets;
        }
        else
        {
            evpn_route_targets = std::make_shared<Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets>();
            evpn_route_targets->parent = this;
            children["evpn-route-targets"] = evpn_route_targets;
        }
        return children.at("evpn-route-targets");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::get_children()
{
    if(children.find("evpn-route-distinguisher") == children.end())
    {
        if(evpn_route_distinguisher != nullptr)
        {
            children["evpn-route-distinguisher"] = evpn_route_distinguisher;
        }
    }

    if(children.find("evpn-route-targets") == children.end())
    {
        if(evpn_route_targets != nullptr)
        {
            children["evpn-route-targets"] = evpn_route_targets;
        }
    }

    return children;
}

void Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "table-policy")
    {
        table_policy = value;
    }
}

Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargets()
{
    yang_name = "evpn-route-targets"; yang_parent_name = "evpnevibgp-auto-discovery";
}

Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::~EvpnRouteTargets()
{
}

bool Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::has_data() const
{
    for (std::size_t index=0; index<evpn_route_target_as.size(); index++)
    {
        if(evpn_route_target_as[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<evpn_route_target_ipv4_address.size(); index++)
    {
        if(evpn_route_target_ipv4_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<evpn_route_target_none.size(); index++)
    {
        if(evpn_route_target_none[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::has_operation() const
{
    for (std::size_t index=0; index<evpn_route_target_as.size(); index++)
    {
        if(evpn_route_target_as[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<evpn_route_target_ipv4_address.size(); index++)
    {
        if(evpn_route_target_ipv4_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<evpn_route_target_none.size(); index++)
    {
        if(evpn_route_target_none[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-route-targets";

    return path_buffer.str();

}

EntityPath Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EvpnRouteTargets' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "evpn-route-target-as")
    {
        for(auto const & c : evpn_route_target_as)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs>();
        c->parent = this;
        evpn_route_target_as.push_back(std::move(c));
        children[segment_path] = evpn_route_target_as.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "evpn-route-target-ipv4-address")
    {
        for(auto const & c : evpn_route_target_ipv4_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address>();
        c->parent = this;
        evpn_route_target_ipv4_address.push_back(std::move(c));
        children[segment_path] = evpn_route_target_ipv4_address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "evpn-route-target-none")
    {
        for(auto const & c : evpn_route_target_none)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone>();
        c->parent = this;
        evpn_route_target_none.push_back(std::move(c));
        children[segment_path] = evpn_route_target_none.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::get_children()
{
    for (auto const & c : evpn_route_target_as)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : evpn_route_target_ipv4_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : evpn_route_target_none)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::set_value(const std::string & value_path, std::string value)
{
}

Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::EvpnRouteTargetAs()
    :
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"},
    format{YType::enumeration, "format"},
    role{YType::enumeration, "role"},
    stitching{YType::enumeration, "stitching"}
{
    yang_name = "evpn-route-target-as"; yang_parent_name = "evpn-route-targets";
}

Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::~EvpnRouteTargetAs()
{
}

bool Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::has_data() const
{
    return as.is_set
	|| as_index.is_set
	|| format.is_set
	|| role.is_set
	|| stitching.is_set;
}

bool Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::has_operation() const
{
    return is_set(operation)
	|| is_set(as.operation)
	|| is_set(as_index.operation)
	|| is_set(format.operation)
	|| is_set(role.operation)
	|| is_set(stitching.operation);
}

std::string Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-route-target-as" <<"[as='" <<as <<"']" <<"[as-index='" <<as_index <<"']" <<"[format='" <<format <<"']" <<"[role='" <<role <<"']" <<"[stitching='" <<stitching <<"']";

    return path_buffer.str();

}

EntityPath Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EvpnRouteTargetAs' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.operation)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.operation)) leaf_name_data.push_back(as_index.get_name_leafdata());
    if (format.is_set || is_set(format.operation)) leaf_name_data.push_back(format.get_name_leafdata());
    if (role.is_set || is_set(role.operation)) leaf_name_data.push_back(role.get_name_leafdata());
    if (stitching.is_set || is_set(stitching.operation)) leaf_name_data.push_back(stitching.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::get_children()
{
    return children;
}

void Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetAs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as")
    {
        as = value;
    }
    if(value_path == "as-index")
    {
        as_index = value;
    }
    if(value_path == "format")
    {
        format = value;
    }
    if(value_path == "role")
    {
        role = value;
    }
    if(value_path == "stitching")
    {
        stitching = value;
    }
}

Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::EvpnRouteTargetNone()
    :
    format{YType::enumeration, "format"},
    role{YType::enumeration, "role"},
    stitching{YType::enumeration, "stitching"}
{
    yang_name = "evpn-route-target-none"; yang_parent_name = "evpn-route-targets";
}

Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::~EvpnRouteTargetNone()
{
}

bool Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::has_data() const
{
    return format.is_set
	|| role.is_set
	|| stitching.is_set;
}

bool Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::has_operation() const
{
    return is_set(operation)
	|| is_set(format.operation)
	|| is_set(role.operation)
	|| is_set(stitching.operation);
}

std::string Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-route-target-none" <<"[format='" <<format <<"']" <<"[role='" <<role <<"']" <<"[stitching='" <<stitching <<"']";

    return path_buffer.str();

}

EntityPath Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EvpnRouteTargetNone' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (format.is_set || is_set(format.operation)) leaf_name_data.push_back(format.get_name_leafdata());
    if (role.is_set || is_set(role.operation)) leaf_name_data.push_back(role.get_name_leafdata());
    if (stitching.is_set || is_set(stitching.operation)) leaf_name_data.push_back(stitching.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::get_children()
{
    return children;
}

void Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetNone::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "format")
    {
        format = value;
    }
    if(value_path == "role")
    {
        role = value;
    }
    if(value_path == "stitching")
    {
        stitching = value;
    }
}

Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::EvpnRouteTargetIpv4Address()
    :
    addr_index{YType::uint32, "addr-index"},
    address{YType::str, "address"},
    format{YType::enumeration, "format"},
    role{YType::enumeration, "role"},
    stitching{YType::enumeration, "stitching"}
{
    yang_name = "evpn-route-target-ipv4-address"; yang_parent_name = "evpn-route-targets";
}

Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::~EvpnRouteTargetIpv4Address()
{
}

bool Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::has_data() const
{
    return addr_index.is_set
	|| address.is_set
	|| format.is_set
	|| role.is_set
	|| stitching.is_set;
}

bool Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::has_operation() const
{
    return is_set(operation)
	|| is_set(addr_index.operation)
	|| is_set(address.operation)
	|| is_set(format.operation)
	|| is_set(role.operation)
	|| is_set(stitching.operation);
}

std::string Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-route-target-ipv4-address" <<"[addr-index='" <<addr_index <<"']" <<"[address='" <<address <<"']" <<"[format='" <<format <<"']" <<"[role='" <<role <<"']" <<"[stitching='" <<stitching <<"']";

    return path_buffer.str();

}

EntityPath Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EvpnRouteTargetIpv4Address' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr_index.is_set || is_set(addr_index.operation)) leaf_name_data.push_back(addr_index.get_name_leafdata());
    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (format.is_set || is_set(format.operation)) leaf_name_data.push_back(format.get_name_leafdata());
    if (role.is_set || is_set(role.operation)) leaf_name_data.push_back(role.get_name_leafdata());
    if (stitching.is_set || is_set(stitching.operation)) leaf_name_data.push_back(stitching.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::get_children()
{
    return children;
}

void Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteTargets::EvpnRouteTargetIpv4Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "addr-index")
    {
        addr_index = value;
    }
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "format")
    {
        format = value;
    }
    if(value_path == "role")
    {
        role = value;
    }
    if(value_path == "stitching")
    {
        stitching = value;
    }
}

Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteDistinguisher::EvpnRouteDistinguisher()
    :
    addr_index{YType::uint32, "addr-index"},
    address{YType::str, "address"},
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"},
    type{YType::enumeration, "type"}
{
    yang_name = "evpn-route-distinguisher"; yang_parent_name = "evpnevibgp-auto-discovery";
}

Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteDistinguisher::~EvpnRouteDistinguisher()
{
}

bool Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteDistinguisher::has_data() const
{
    return addr_index.is_set
	|| address.is_set
	|| as.is_set
	|| as_index.is_set
	|| type.is_set;
}

bool Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteDistinguisher::has_operation() const
{
    return is_set(operation)
	|| is_set(addr_index.operation)
	|| is_set(address.operation)
	|| is_set(as.operation)
	|| is_set(as_index.operation)
	|| is_set(type.operation);
}

std::string Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteDistinguisher::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-route-distinguisher";

    return path_buffer.str();

}

EntityPath Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteDistinguisher::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EvpnRouteDistinguisher' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr_index.is_set || is_set(addr_index.operation)) leaf_name_data.push_back(addr_index.get_name_leafdata());
    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (as.is_set || is_set(as.operation)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.operation)) leaf_name_data.push_back(as_index.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteDistinguisher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteDistinguisher::get_children()
{
    return children;
}

void Evpn::EvpnTables::Evpnevis::Evpnevi::EvpnevibgpAutoDiscovery::EvpnRouteDistinguisher::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "addr-index")
    {
        addr_index = value;
    }
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "as")
    {
        as = value;
    }
    if(value_path == "as-index")
    {
        as_index = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfis()
{
    yang_name = "evpn-virtual-access-vfis"; yang_parent_name = "evpn-tables";
}

Evpn::EvpnTables::EvpnVirtualAccessVfis::~EvpnVirtualAccessVfis()
{
}

bool Evpn::EvpnTables::EvpnVirtualAccessVfis::has_data() const
{
    for (std::size_t index=0; index<evpn_virtual_access_vfi.size(); index++)
    {
        if(evpn_virtual_access_vfi[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::EvpnTables::EvpnVirtualAccessVfis::has_operation() const
{
    for (std::size_t index=0; index<evpn_virtual_access_vfi.size(); index++)
    {
        if(evpn_virtual_access_vfi[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Evpn::EvpnTables::EvpnVirtualAccessVfis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-virtual-access-vfis";

    return path_buffer.str();

}

EntityPath Evpn::EvpnTables::EvpnVirtualAccessVfis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnVirtualAccessVfis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "evpn-virtual-access-vfi")
    {
        for(auto const & c : evpn_virtual_access_vfi)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi>();
        c->parent = this;
        evpn_virtual_access_vfi.push_back(std::move(c));
        children[segment_path] = evpn_virtual_access_vfi.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::EvpnTables::EvpnVirtualAccessVfis::get_children()
{
    for (auto const & c : evpn_virtual_access_vfi)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Evpn::EvpnTables::EvpnVirtualAccessVfis::set_value(const std::string & value_path, std::string value)
{
}

Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualAccessVfi()
    :
    name{YType::str, "name"}
    	,
    evpn_virtual_access_vfi_timers(std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualAccessVfiTimers>())
	,evpn_virtual_ethernet_segment(std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment>())
{
    evpn_virtual_access_vfi_timers->parent = this;
    children["evpn-virtual-access-vfi-timers"] = evpn_virtual_access_vfi_timers;

    evpn_virtual_ethernet_segment->parent = this;
    children["evpn-virtual-ethernet-segment"] = evpn_virtual_ethernet_segment;

    yang_name = "evpn-virtual-access-vfi"; yang_parent_name = "evpn-virtual-access-vfis";
}

Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::~EvpnVirtualAccessVfi()
{
}

bool Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::has_data() const
{
    return name.is_set
	|| (evpn_virtual_access_vfi_timers !=  nullptr && evpn_virtual_access_vfi_timers->has_data())
	|| (evpn_virtual_ethernet_segment !=  nullptr && evpn_virtual_ethernet_segment->has_data());
}

bool Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (evpn_virtual_access_vfi_timers !=  nullptr && evpn_virtual_access_vfi_timers->has_operation())
	|| (evpn_virtual_ethernet_segment !=  nullptr && evpn_virtual_ethernet_segment->has_operation());
}

std::string Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-virtual-access-vfi" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

EntityPath Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/evpn-virtual-access-vfis/" << get_segment_path();
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

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "evpn-virtual-access-vfi-timers")
    {
        if(evpn_virtual_access_vfi_timers != nullptr)
        {
            children["evpn-virtual-access-vfi-timers"] = evpn_virtual_access_vfi_timers;
        }
        else
        {
            evpn_virtual_access_vfi_timers = std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualAccessVfiTimers>();
            evpn_virtual_access_vfi_timers->parent = this;
            children["evpn-virtual-access-vfi-timers"] = evpn_virtual_access_vfi_timers;
        }
        return children.at("evpn-virtual-access-vfi-timers");
    }

    if(child_yang_name == "evpn-virtual-ethernet-segment")
    {
        if(evpn_virtual_ethernet_segment != nullptr)
        {
            children["evpn-virtual-ethernet-segment"] = evpn_virtual_ethernet_segment;
        }
        else
        {
            evpn_virtual_ethernet_segment = std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment>();
            evpn_virtual_ethernet_segment->parent = this;
            children["evpn-virtual-ethernet-segment"] = evpn_virtual_ethernet_segment;
        }
        return children.at("evpn-virtual-ethernet-segment");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::get_children()
{
    if(children.find("evpn-virtual-access-vfi-timers") == children.end())
    {
        if(evpn_virtual_access_vfi_timers != nullptr)
        {
            children["evpn-virtual-access-vfi-timers"] = evpn_virtual_access_vfi_timers;
        }
    }

    if(children.find("evpn-virtual-ethernet-segment") == children.end())
    {
        if(evpn_virtual_ethernet_segment != nullptr)
        {
            children["evpn-virtual-ethernet-segment"] = evpn_virtual_ethernet_segment;
        }
    }

    return children;
}

void Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualAccessVfiTimers::EvpnVirtualAccessVfiTimers()
    :
    enable{YType::empty, "enable"},
    evpn_virtual_access_vfi_peering{YType::uint32, "evpn-virtual-access-vfi-peering"},
    evpn_virtual_access_vfi_recovery{YType::uint32, "evpn-virtual-access-vfi-recovery"}
{
    yang_name = "evpn-virtual-access-vfi-timers"; yang_parent_name = "evpn-virtual-access-vfi";
}

Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualAccessVfiTimers::~EvpnVirtualAccessVfiTimers()
{
}

bool Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualAccessVfiTimers::has_data() const
{
    return enable.is_set
	|| evpn_virtual_access_vfi_peering.is_set
	|| evpn_virtual_access_vfi_recovery.is_set;
}

bool Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualAccessVfiTimers::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(evpn_virtual_access_vfi_peering.operation)
	|| is_set(evpn_virtual_access_vfi_recovery.operation);
}

std::string Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualAccessVfiTimers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-virtual-access-vfi-timers";

    return path_buffer.str();

}

EntityPath Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualAccessVfiTimers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EvpnVirtualAccessVfiTimers' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (evpn_virtual_access_vfi_peering.is_set || is_set(evpn_virtual_access_vfi_peering.operation)) leaf_name_data.push_back(evpn_virtual_access_vfi_peering.get_name_leafdata());
    if (evpn_virtual_access_vfi_recovery.is_set || is_set(evpn_virtual_access_vfi_recovery.operation)) leaf_name_data.push_back(evpn_virtual_access_vfi_recovery.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualAccessVfiTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualAccessVfiTimers::get_children()
{
    return children;
}

void Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualAccessVfiTimers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "evpn-virtual-access-vfi-peering")
    {
        evpn_virtual_access_vfi_peering = value;
    }
    if(value_path == "evpn-virtual-access-vfi-recovery")
    {
        evpn_virtual_access_vfi_recovery = value;
    }
}

Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::EvpnVirtualEthernetSegment()
    :
    enable{YType::empty, "enable"},
    es_import_route_target{YType::str, "es-import-route-target"}
    	,
    identifier(nullptr) // presence node
{
    yang_name = "evpn-virtual-ethernet-segment"; yang_parent_name = "evpn-virtual-access-vfi";
}

Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::~EvpnVirtualEthernetSegment()
{
}

bool Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::has_data() const
{
    return enable.is_set
	|| es_import_route_target.is_set
	|| (identifier !=  nullptr && identifier->has_data());
}

bool Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(es_import_route_target.operation)
	|| (identifier !=  nullptr && identifier->has_operation());
}

std::string Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-virtual-ethernet-segment";

    return path_buffer.str();

}

EntityPath Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EvpnVirtualEthernetSegment' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (es_import_route_target.is_set || is_set(es_import_route_target.operation)) leaf_name_data.push_back(es_import_route_target.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "identifier")
    {
        if(identifier != nullptr)
        {
            children["identifier"] = identifier;
        }
        else
        {
            identifier = std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::Identifier>();
            identifier->parent = this;
            children["identifier"] = identifier;
        }
        return children.at("identifier");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::get_children()
{
    if(children.find("identifier") == children.end())
    {
        if(identifier != nullptr)
        {
            children["identifier"] = identifier;
        }
    }

    return children;
}

void Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "es-import-route-target")
    {
        es_import_route_target = value;
    }
}

Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::Identifier::Identifier()
    :
    bytes01{YType::str, "bytes01"},
    bytes23{YType::str, "bytes23"},
    bytes45{YType::str, "bytes45"},
    bytes67{YType::str, "bytes67"},
    bytes89{YType::str, "bytes89"},
    type{YType::enumeration, "type"}
{
    yang_name = "identifier"; yang_parent_name = "evpn-virtual-ethernet-segment";
}

Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::Identifier::~Identifier()
{
}

bool Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::Identifier::has_data() const
{
    return bytes01.is_set
	|| bytes23.is_set
	|| bytes45.is_set
	|| bytes67.is_set
	|| bytes89.is_set
	|| type.is_set;
}

bool Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::Identifier::has_operation() const
{
    return is_set(operation)
	|| is_set(bytes01.operation)
	|| is_set(bytes23.operation)
	|| is_set(bytes45.operation)
	|| is_set(bytes67.operation)
	|| is_set(bytes89.operation)
	|| is_set(type.operation);
}

std::string Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::Identifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifier";

    return path_buffer.str();

}

EntityPath Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::Identifier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Identifier' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes01.is_set || is_set(bytes01.operation)) leaf_name_data.push_back(bytes01.get_name_leafdata());
    if (bytes23.is_set || is_set(bytes23.operation)) leaf_name_data.push_back(bytes23.get_name_leafdata());
    if (bytes45.is_set || is_set(bytes45.operation)) leaf_name_data.push_back(bytes45.get_name_leafdata());
    if (bytes67.is_set || is_set(bytes67.operation)) leaf_name_data.push_back(bytes67.get_name_leafdata());
    if (bytes89.is_set || is_set(bytes89.operation)) leaf_name_data.push_back(bytes89.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::Identifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::Identifier::get_children()
{
    return children;
}

void Evpn::EvpnTables::EvpnVirtualAccessVfis::EvpnVirtualAccessVfi::EvpnVirtualEthernetSegment::Identifier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bytes01")
    {
        bytes01 = value;
    }
    if(value_path == "bytes23")
    {
        bytes23 = value;
    }
    if(value_path == "bytes45")
    {
        bytes45 = value;
    }
    if(value_path == "bytes67")
    {
        bytes67 = value;
    }
    if(value_path == "bytes89")
    {
        bytes89 = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Evpn::EvpnTables::EvpnLoadBalancing::EvpnLoadBalancing()
    :
    enable{YType::empty, "enable"},
    evpn_flow_label{YType::empty, "evpn-flow-label"}
{
    yang_name = "evpn-load-balancing"; yang_parent_name = "evpn-tables";
}

Evpn::EvpnTables::EvpnLoadBalancing::~EvpnLoadBalancing()
{
}

bool Evpn::EvpnTables::EvpnLoadBalancing::has_data() const
{
    return enable.is_set
	|| evpn_flow_label.is_set;
}

bool Evpn::EvpnTables::EvpnLoadBalancing::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(evpn_flow_label.operation);
}

std::string Evpn::EvpnTables::EvpnLoadBalancing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-load-balancing";

    return path_buffer.str();

}

EntityPath Evpn::EvpnTables::EvpnLoadBalancing::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (evpn_flow_label.is_set || is_set(evpn_flow_label.operation)) leaf_name_data.push_back(evpn_flow_label.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnLoadBalancing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::EvpnTables::EvpnLoadBalancing::get_children()
{
    return children;
}

void Evpn::EvpnTables::EvpnLoadBalancing::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "evpn-flow-label")
    {
        evpn_flow_label = value;
    }
}

Evpn::EvpnTables::EvpnbgpAutoDiscovery::EvpnbgpAutoDiscovery()
    :
    enable{YType::empty, "enable"}
    	,
    evpn_route_distinguisher(std::make_shared<Evpn::EvpnTables::EvpnbgpAutoDiscovery::EvpnRouteDistinguisher>())
{
    evpn_route_distinguisher->parent = this;
    children["evpn-route-distinguisher"] = evpn_route_distinguisher;

    yang_name = "evpnbgp-auto-discovery"; yang_parent_name = "evpn-tables";
}

Evpn::EvpnTables::EvpnbgpAutoDiscovery::~EvpnbgpAutoDiscovery()
{
}

bool Evpn::EvpnTables::EvpnbgpAutoDiscovery::has_data() const
{
    return enable.is_set
	|| (evpn_route_distinguisher !=  nullptr && evpn_route_distinguisher->has_data());
}

bool Evpn::EvpnTables::EvpnbgpAutoDiscovery::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| (evpn_route_distinguisher !=  nullptr && evpn_route_distinguisher->has_operation());
}

std::string Evpn::EvpnTables::EvpnbgpAutoDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpnbgp-auto-discovery";

    return path_buffer.str();

}

EntityPath Evpn::EvpnTables::EvpnbgpAutoDiscovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnbgpAutoDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "evpn-route-distinguisher")
    {
        if(evpn_route_distinguisher != nullptr)
        {
            children["evpn-route-distinguisher"] = evpn_route_distinguisher;
        }
        else
        {
            evpn_route_distinguisher = std::make_shared<Evpn::EvpnTables::EvpnbgpAutoDiscovery::EvpnRouteDistinguisher>();
            evpn_route_distinguisher->parent = this;
            children["evpn-route-distinguisher"] = evpn_route_distinguisher;
        }
        return children.at("evpn-route-distinguisher");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::EvpnTables::EvpnbgpAutoDiscovery::get_children()
{
    if(children.find("evpn-route-distinguisher") == children.end())
    {
        if(evpn_route_distinguisher != nullptr)
        {
            children["evpn-route-distinguisher"] = evpn_route_distinguisher;
        }
    }

    return children;
}

void Evpn::EvpnTables::EvpnbgpAutoDiscovery::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

Evpn::EvpnTables::EvpnbgpAutoDiscovery::EvpnRouteDistinguisher::EvpnRouteDistinguisher()
    :
    addr_index{YType::uint32, "addr-index"},
    address{YType::str, "address"},
    as{YType::uint32, "as"},
    as_index{YType::uint32, "as-index"},
    type{YType::enumeration, "type"}
{
    yang_name = "evpn-route-distinguisher"; yang_parent_name = "evpnbgp-auto-discovery";
}

Evpn::EvpnTables::EvpnbgpAutoDiscovery::EvpnRouteDistinguisher::~EvpnRouteDistinguisher()
{
}

bool Evpn::EvpnTables::EvpnbgpAutoDiscovery::EvpnRouteDistinguisher::has_data() const
{
    return addr_index.is_set
	|| address.is_set
	|| as.is_set
	|| as_index.is_set
	|| type.is_set;
}

bool Evpn::EvpnTables::EvpnbgpAutoDiscovery::EvpnRouteDistinguisher::has_operation() const
{
    return is_set(operation)
	|| is_set(addr_index.operation)
	|| is_set(address.operation)
	|| is_set(as.operation)
	|| is_set(as_index.operation)
	|| is_set(type.operation);
}

std::string Evpn::EvpnTables::EvpnbgpAutoDiscovery::EvpnRouteDistinguisher::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-route-distinguisher";

    return path_buffer.str();

}

EntityPath Evpn::EvpnTables::EvpnbgpAutoDiscovery::EvpnRouteDistinguisher::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/evpnbgp-auto-discovery/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr_index.is_set || is_set(addr_index.operation)) leaf_name_data.push_back(addr_index.get_name_leafdata());
    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (as.is_set || is_set(as.operation)) leaf_name_data.push_back(as.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.operation)) leaf_name_data.push_back(as_index.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnbgpAutoDiscovery::EvpnRouteDistinguisher::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::EvpnTables::EvpnbgpAutoDiscovery::EvpnRouteDistinguisher::get_children()
{
    return children;
}

void Evpn::EvpnTables::EvpnbgpAutoDiscovery::EvpnRouteDistinguisher::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "addr-index")
    {
        addr_index = value;
    }
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "as")
    {
        as = value;
    }
    if(value_path == "as-index")
    {
        as_index = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Evpn::EvpnTables::EvpnLogging::EvpnLogging()
    :
    enable{YType::empty, "enable"},
    evpn_df_election{YType::empty, "evpn-df-election"}
{
    yang_name = "evpn-logging"; yang_parent_name = "evpn-tables";
}

Evpn::EvpnTables::EvpnLogging::~EvpnLogging()
{
}

bool Evpn::EvpnTables::EvpnLogging::has_data() const
{
    return enable.is_set
	|| evpn_df_election.is_set;
}

bool Evpn::EvpnTables::EvpnLogging::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(evpn_df_election.operation);
}

std::string Evpn::EvpnTables::EvpnLogging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-logging";

    return path_buffer.str();

}

EntityPath Evpn::EvpnTables::EvpnLogging::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (evpn_df_election.is_set || is_set(evpn_df_election.operation)) leaf_name_data.push_back(evpn_df_election.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnLogging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::EvpnTables::EvpnLogging::get_children()
{
    return children;
}

void Evpn::EvpnTables::EvpnLogging::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "evpn-df-election")
    {
        evpn_df_election = value;
    }
}

Evpn::EvpnTables::EvpnInterfaces::EvpnInterfaces()
{
    yang_name = "evpn-interfaces"; yang_parent_name = "evpn-tables";
}

Evpn::EvpnTables::EvpnInterfaces::~EvpnInterfaces()
{
}

bool Evpn::EvpnTables::EvpnInterfaces::has_data() const
{
    for (std::size_t index=0; index<evpn_interface.size(); index++)
    {
        if(evpn_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::EvpnTables::EvpnInterfaces::has_operation() const
{
    for (std::size_t index=0; index<evpn_interface.size(); index++)
    {
        if(evpn_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Evpn::EvpnTables::EvpnInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-interfaces";

    return path_buffer.str();

}

EntityPath Evpn::EvpnTables::EvpnInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "evpn-interface")
    {
        for(auto const & c : evpn_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Evpn::EvpnTables::EvpnInterfaces::EvpnInterface>();
        c->parent = this;
        evpn_interface.push_back(std::move(c));
        children[segment_path] = evpn_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::EvpnTables::EvpnInterfaces::get_children()
{
    for (auto const & c : evpn_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Evpn::EvpnTables::EvpnInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterface()
    :
    interface_name{YType::str, "interface-name"},
    mac_flush{YType::empty, "mac-flush"}
    	,
    evpn_interface_ethernet_segment(std::make_shared<Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment>())
	,evpnac_timers(std::make_shared<Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnacTimers>())
{
    evpn_interface_ethernet_segment->parent = this;
    children["evpn-interface-ethernet-segment"] = evpn_interface_ethernet_segment;

    evpnac_timers->parent = this;
    children["evpnac-timers"] = evpnac_timers;

    yang_name = "evpn-interface"; yang_parent_name = "evpn-interfaces";
}

Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::~EvpnInterface()
{
}

bool Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::has_data() const
{
    return interface_name.is_set
	|| mac_flush.is_set
	|| (evpn_interface_ethernet_segment !=  nullptr && evpn_interface_ethernet_segment->has_data())
	|| (evpnac_timers !=  nullptr && evpnac_timers->has_data());
}

bool Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(mac_flush.operation)
	|| (evpn_interface_ethernet_segment !=  nullptr && evpn_interface_ethernet_segment->has_operation())
	|| (evpnac_timers !=  nullptr && evpnac_timers->has_operation());
}

std::string Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/evpn-interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (mac_flush.is_set || is_set(mac_flush.operation)) leaf_name_data.push_back(mac_flush.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "evpn-interface-ethernet-segment")
    {
        if(evpn_interface_ethernet_segment != nullptr)
        {
            children["evpn-interface-ethernet-segment"] = evpn_interface_ethernet_segment;
        }
        else
        {
            evpn_interface_ethernet_segment = std::make_shared<Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment>();
            evpn_interface_ethernet_segment->parent = this;
            children["evpn-interface-ethernet-segment"] = evpn_interface_ethernet_segment;
        }
        return children.at("evpn-interface-ethernet-segment");
    }

    if(child_yang_name == "evpnac-timers")
    {
        if(evpnac_timers != nullptr)
        {
            children["evpnac-timers"] = evpnac_timers;
        }
        else
        {
            evpnac_timers = std::make_shared<Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnacTimers>();
            evpnac_timers->parent = this;
            children["evpnac-timers"] = evpnac_timers;
        }
        return children.at("evpnac-timers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::get_children()
{
    if(children.find("evpn-interface-ethernet-segment") == children.end())
    {
        if(evpn_interface_ethernet_segment != nullptr)
        {
            children["evpn-interface-ethernet-segment"] = evpn_interface_ethernet_segment;
        }
    }

    if(children.find("evpnac-timers") == children.end())
    {
        if(evpnac_timers != nullptr)
        {
            children["evpnac-timers"] = evpnac_timers;
        }
    }

    return children;
}

void Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "mac-flush")
    {
        mac_flush = value;
    }
}

Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::EvpnInterfaceEthernetSegment()
    :
    backbone_source_mac{YType::str, "backbone-source-mac"},
    enable{YType::empty, "enable"},
    es_import_route_target{YType::str, "es-import-route-target"},
    force_single_homed{YType::empty, "force-single-homed"},
    load_balancing_single_active{YType::empty, "load-balancing-single-active"}
    	,
    identifier(nullptr) // presence node
	,manual_service_carving(std::make_shared<Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::ManualServiceCarving>())
{
    manual_service_carving->parent = this;
    children["manual-service-carving"] = manual_service_carving;

    yang_name = "evpn-interface-ethernet-segment"; yang_parent_name = "evpn-interface";
}

Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::~EvpnInterfaceEthernetSegment()
{
}

bool Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::has_data() const
{
    return backbone_source_mac.is_set
	|| enable.is_set
	|| es_import_route_target.is_set
	|| force_single_homed.is_set
	|| load_balancing_single_active.is_set
	|| (identifier !=  nullptr && identifier->has_data())
	|| (manual_service_carving !=  nullptr && manual_service_carving->has_data());
}

bool Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::has_operation() const
{
    return is_set(operation)
	|| is_set(backbone_source_mac.operation)
	|| is_set(enable.operation)
	|| is_set(es_import_route_target.operation)
	|| is_set(force_single_homed.operation)
	|| is_set(load_balancing_single_active.operation)
	|| (identifier !=  nullptr && identifier->has_operation())
	|| (manual_service_carving !=  nullptr && manual_service_carving->has_operation());
}

std::string Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-interface-ethernet-segment";

    return path_buffer.str();

}

EntityPath Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EvpnInterfaceEthernetSegment' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backbone_source_mac.is_set || is_set(backbone_source_mac.operation)) leaf_name_data.push_back(backbone_source_mac.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (es_import_route_target.is_set || is_set(es_import_route_target.operation)) leaf_name_data.push_back(es_import_route_target.get_name_leafdata());
    if (force_single_homed.is_set || is_set(force_single_homed.operation)) leaf_name_data.push_back(force_single_homed.get_name_leafdata());
    if (load_balancing_single_active.is_set || is_set(load_balancing_single_active.operation)) leaf_name_data.push_back(load_balancing_single_active.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "identifier")
    {
        if(identifier != nullptr)
        {
            children["identifier"] = identifier;
        }
        else
        {
            identifier = std::make_shared<Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::Identifier>();
            identifier->parent = this;
            children["identifier"] = identifier;
        }
        return children.at("identifier");
    }

    if(child_yang_name == "manual-service-carving")
    {
        if(manual_service_carving != nullptr)
        {
            children["manual-service-carving"] = manual_service_carving;
        }
        else
        {
            manual_service_carving = std::make_shared<Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::ManualServiceCarving>();
            manual_service_carving->parent = this;
            children["manual-service-carving"] = manual_service_carving;
        }
        return children.at("manual-service-carving");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::get_children()
{
    if(children.find("identifier") == children.end())
    {
        if(identifier != nullptr)
        {
            children["identifier"] = identifier;
        }
    }

    if(children.find("manual-service-carving") == children.end())
    {
        if(manual_service_carving != nullptr)
        {
            children["manual-service-carving"] = manual_service_carving;
        }
    }

    return children;
}

void Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "backbone-source-mac")
    {
        backbone_source_mac = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "es-import-route-target")
    {
        es_import_route_target = value;
    }
    if(value_path == "force-single-homed")
    {
        force_single_homed = value;
    }
    if(value_path == "load-balancing-single-active")
    {
        load_balancing_single_active = value;
    }
}

Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::ManualServiceCarving::ManualServiceCarving()
    :
    enable{YType::empty, "enable"}
    	,
    service_list(std::make_shared<Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::ManualServiceCarving::ServiceList>())
{
    service_list->parent = this;
    children["service-list"] = service_list;

    yang_name = "manual-service-carving"; yang_parent_name = "evpn-interface-ethernet-segment";
}

Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::ManualServiceCarving::~ManualServiceCarving()
{
}

bool Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::ManualServiceCarving::has_data() const
{
    return enable.is_set
	|| (service_list !=  nullptr && service_list->has_data());
}

bool Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::ManualServiceCarving::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| (service_list !=  nullptr && service_list->has_operation());
}

std::string Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::ManualServiceCarving::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manual-service-carving";

    return path_buffer.str();

}

EntityPath Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::ManualServiceCarving::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ManualServiceCarving' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::ManualServiceCarving::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "service-list")
    {
        if(service_list != nullptr)
        {
            children["service-list"] = service_list;
        }
        else
        {
            service_list = std::make_shared<Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::ManualServiceCarving::ServiceList>();
            service_list->parent = this;
            children["service-list"] = service_list;
        }
        return children.at("service-list");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::ManualServiceCarving::get_children()
{
    if(children.find("service-list") == children.end())
    {
        if(service_list != nullptr)
        {
            children["service-list"] = service_list;
        }
    }

    return children;
}

void Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::ManualServiceCarving::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::ManualServiceCarving::ServiceList::ServiceList()
    :
    primary{YType::str, "primary"},
    secondary{YType::str, "secondary"}
{
    yang_name = "service-list"; yang_parent_name = "manual-service-carving";
}

Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::ManualServiceCarving::ServiceList::~ServiceList()
{
}

bool Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::ManualServiceCarving::ServiceList::has_data() const
{
    return primary.is_set
	|| secondary.is_set;
}

bool Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::ManualServiceCarving::ServiceList::has_operation() const
{
    return is_set(operation)
	|| is_set(primary.operation)
	|| is_set(secondary.operation);
}

std::string Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::ManualServiceCarving::ServiceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-list";

    return path_buffer.str();

}

EntityPath Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::ManualServiceCarving::ServiceList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServiceList' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (primary.is_set || is_set(primary.operation)) leaf_name_data.push_back(primary.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.operation)) leaf_name_data.push_back(secondary.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::ManualServiceCarving::ServiceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::ManualServiceCarving::ServiceList::get_children()
{
    return children;
}

void Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::ManualServiceCarving::ServiceList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "primary")
    {
        primary = value;
    }
    if(value_path == "secondary")
    {
        secondary = value;
    }
}

Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::Identifier::Identifier()
    :
    bytes01{YType::str, "bytes01"},
    bytes23{YType::str, "bytes23"},
    bytes45{YType::str, "bytes45"},
    bytes67{YType::str, "bytes67"},
    bytes89{YType::str, "bytes89"},
    type{YType::enumeration, "type"}
{
    yang_name = "identifier"; yang_parent_name = "evpn-interface-ethernet-segment";
}

Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::Identifier::~Identifier()
{
}

bool Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::Identifier::has_data() const
{
    return bytes01.is_set
	|| bytes23.is_set
	|| bytes45.is_set
	|| bytes67.is_set
	|| bytes89.is_set
	|| type.is_set;
}

bool Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::Identifier::has_operation() const
{
    return is_set(operation)
	|| is_set(bytes01.operation)
	|| is_set(bytes23.operation)
	|| is_set(bytes45.operation)
	|| is_set(bytes67.operation)
	|| is_set(bytes89.operation)
	|| is_set(type.operation);
}

std::string Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::Identifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifier";

    return path_buffer.str();

}

EntityPath Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::Identifier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Identifier' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes01.is_set || is_set(bytes01.operation)) leaf_name_data.push_back(bytes01.get_name_leafdata());
    if (bytes23.is_set || is_set(bytes23.operation)) leaf_name_data.push_back(bytes23.get_name_leafdata());
    if (bytes45.is_set || is_set(bytes45.operation)) leaf_name_data.push_back(bytes45.get_name_leafdata());
    if (bytes67.is_set || is_set(bytes67.operation)) leaf_name_data.push_back(bytes67.get_name_leafdata());
    if (bytes89.is_set || is_set(bytes89.operation)) leaf_name_data.push_back(bytes89.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::Identifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::Identifier::get_children()
{
    return children;
}

void Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnInterfaceEthernetSegment::Identifier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bytes01")
    {
        bytes01 = value;
    }
    if(value_path == "bytes23")
    {
        bytes23 = value;
    }
    if(value_path == "bytes45")
    {
        bytes45 = value;
    }
    if(value_path == "bytes67")
    {
        bytes67 = value;
    }
    if(value_path == "bytes89")
    {
        bytes89 = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnacTimers::EvpnacTimers()
    :
    enable{YType::empty, "enable"},
    evpnac_peering{YType::uint32, "evpnac-peering"},
    evpnac_recovery{YType::uint32, "evpnac-recovery"}
{
    yang_name = "evpnac-timers"; yang_parent_name = "evpn-interface";
}

Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnacTimers::~EvpnacTimers()
{
}

bool Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnacTimers::has_data() const
{
    return enable.is_set
	|| evpnac_peering.is_set
	|| evpnac_recovery.is_set;
}

bool Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnacTimers::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(evpnac_peering.operation)
	|| is_set(evpnac_recovery.operation);
}

std::string Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnacTimers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpnac-timers";

    return path_buffer.str();

}

EntityPath Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnacTimers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EvpnacTimers' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (evpnac_peering.is_set || is_set(evpnac_peering.operation)) leaf_name_data.push_back(evpnac_peering.get_name_leafdata());
    if (evpnac_recovery.is_set || is_set(evpnac_recovery.operation)) leaf_name_data.push_back(evpnac_recovery.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnacTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnacTimers::get_children()
{
    return children;
}

void Evpn::EvpnTables::EvpnInterfaces::EvpnInterface::EvpnacTimers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "evpnac-peering")
    {
        evpnac_peering = value;
    }
    if(value_path == "evpnac-recovery")
    {
        evpnac_recovery = value;
    }
}

Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPws()
{
    yang_name = "evpn-virtual-access-pws"; yang_parent_name = "evpn-tables";
}

Evpn::EvpnTables::EvpnVirtualAccessPws::~EvpnVirtualAccessPws()
{
}

bool Evpn::EvpnTables::EvpnVirtualAccessPws::has_data() const
{
    for (std::size_t index=0; index<evpn_virtual_access_pw.size(); index++)
    {
        if(evpn_virtual_access_pw[index]->has_data())
            return true;
    }
    return false;
}

bool Evpn::EvpnTables::EvpnVirtualAccessPws::has_operation() const
{
    for (std::size_t index=0; index<evpn_virtual_access_pw.size(); index++)
    {
        if(evpn_virtual_access_pw[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Evpn::EvpnTables::EvpnVirtualAccessPws::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-virtual-access-pws";

    return path_buffer.str();

}

EntityPath Evpn::EvpnTables::EvpnVirtualAccessPws::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnVirtualAccessPws::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "evpn-virtual-access-pw")
    {
        for(auto const & c : evpn_virtual_access_pw)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw>();
        c->parent = this;
        evpn_virtual_access_pw.push_back(std::move(c));
        children[segment_path] = evpn_virtual_access_pw.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::EvpnTables::EvpnVirtualAccessPws::get_children()
{
    for (auto const & c : evpn_virtual_access_pw)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Evpn::EvpnTables::EvpnVirtualAccessPws::set_value(const std::string & value_path, std::string value)
{
}

Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualAccessPw()
    :
    neighbor{YType::str, "neighbor"},
    pseudowire_id{YType::uint32, "pseudowire-id"}
    	,
    evpn_virtual_access_pw_timers(std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualAccessPwTimers>())
	,evpn_virtual_ethernet_segment(std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment>())
{
    evpn_virtual_access_pw_timers->parent = this;
    children["evpn-virtual-access-pw-timers"] = evpn_virtual_access_pw_timers;

    evpn_virtual_ethernet_segment->parent = this;
    children["evpn-virtual-ethernet-segment"] = evpn_virtual_ethernet_segment;

    yang_name = "evpn-virtual-access-pw"; yang_parent_name = "evpn-virtual-access-pws";
}

Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::~EvpnVirtualAccessPw()
{
}

bool Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::has_data() const
{
    return neighbor.is_set
	|| pseudowire_id.is_set
	|| (evpn_virtual_access_pw_timers !=  nullptr && evpn_virtual_access_pw_timers->has_data())
	|| (evpn_virtual_ethernet_segment !=  nullptr && evpn_virtual_ethernet_segment->has_data());
}

bool Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::has_operation() const
{
    return is_set(operation)
	|| is_set(neighbor.operation)
	|| is_set(pseudowire_id.operation)
	|| (evpn_virtual_access_pw_timers !=  nullptr && evpn_virtual_access_pw_timers->has_operation())
	|| (evpn_virtual_ethernet_segment !=  nullptr && evpn_virtual_ethernet_segment->has_operation());
}

std::string Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-virtual-access-pw" <<"[neighbor='" <<neighbor <<"']" <<"[pseudowire-id='" <<pseudowire_id <<"']";

    return path_buffer.str();

}

EntityPath Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-l2vpn-cfg:evpn/evpn-tables/evpn-virtual-access-pws/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor.is_set || is_set(neighbor.operation)) leaf_name_data.push_back(neighbor.get_name_leafdata());
    if (pseudowire_id.is_set || is_set(pseudowire_id.operation)) leaf_name_data.push_back(pseudowire_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "evpn-virtual-access-pw-timers")
    {
        if(evpn_virtual_access_pw_timers != nullptr)
        {
            children["evpn-virtual-access-pw-timers"] = evpn_virtual_access_pw_timers;
        }
        else
        {
            evpn_virtual_access_pw_timers = std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualAccessPwTimers>();
            evpn_virtual_access_pw_timers->parent = this;
            children["evpn-virtual-access-pw-timers"] = evpn_virtual_access_pw_timers;
        }
        return children.at("evpn-virtual-access-pw-timers");
    }

    if(child_yang_name == "evpn-virtual-ethernet-segment")
    {
        if(evpn_virtual_ethernet_segment != nullptr)
        {
            children["evpn-virtual-ethernet-segment"] = evpn_virtual_ethernet_segment;
        }
        else
        {
            evpn_virtual_ethernet_segment = std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment>();
            evpn_virtual_ethernet_segment->parent = this;
            children["evpn-virtual-ethernet-segment"] = evpn_virtual_ethernet_segment;
        }
        return children.at("evpn-virtual-ethernet-segment");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::get_children()
{
    if(children.find("evpn-virtual-access-pw-timers") == children.end())
    {
        if(evpn_virtual_access_pw_timers != nullptr)
        {
            children["evpn-virtual-access-pw-timers"] = evpn_virtual_access_pw_timers;
        }
    }

    if(children.find("evpn-virtual-ethernet-segment") == children.end())
    {
        if(evpn_virtual_ethernet_segment != nullptr)
        {
            children["evpn-virtual-ethernet-segment"] = evpn_virtual_ethernet_segment;
        }
    }

    return children;
}

void Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor")
    {
        neighbor = value;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id = value;
    }
}

Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualAccessPwTimers::EvpnVirtualAccessPwTimers()
    :
    enable{YType::empty, "enable"},
    evpn_virtual_access_pw_peering{YType::uint32, "evpn-virtual-access-pw-peering"},
    evpn_virtual_access_pw_recovery{YType::uint32, "evpn-virtual-access-pw-recovery"}
{
    yang_name = "evpn-virtual-access-pw-timers"; yang_parent_name = "evpn-virtual-access-pw";
}

Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualAccessPwTimers::~EvpnVirtualAccessPwTimers()
{
}

bool Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualAccessPwTimers::has_data() const
{
    return enable.is_set
	|| evpn_virtual_access_pw_peering.is_set
	|| evpn_virtual_access_pw_recovery.is_set;
}

bool Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualAccessPwTimers::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(evpn_virtual_access_pw_peering.operation)
	|| is_set(evpn_virtual_access_pw_recovery.operation);
}

std::string Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualAccessPwTimers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-virtual-access-pw-timers";

    return path_buffer.str();

}

EntityPath Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualAccessPwTimers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EvpnVirtualAccessPwTimers' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (evpn_virtual_access_pw_peering.is_set || is_set(evpn_virtual_access_pw_peering.operation)) leaf_name_data.push_back(evpn_virtual_access_pw_peering.get_name_leafdata());
    if (evpn_virtual_access_pw_recovery.is_set || is_set(evpn_virtual_access_pw_recovery.operation)) leaf_name_data.push_back(evpn_virtual_access_pw_recovery.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualAccessPwTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualAccessPwTimers::get_children()
{
    return children;
}

void Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualAccessPwTimers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "evpn-virtual-access-pw-peering")
    {
        evpn_virtual_access_pw_peering = value;
    }
    if(value_path == "evpn-virtual-access-pw-recovery")
    {
        evpn_virtual_access_pw_recovery = value;
    }
}

Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::EvpnVirtualEthernetSegment()
    :
    enable{YType::empty, "enable"},
    es_import_route_target{YType::str, "es-import-route-target"}
    	,
    identifier(nullptr) // presence node
{
    yang_name = "evpn-virtual-ethernet-segment"; yang_parent_name = "evpn-virtual-access-pw";
}

Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::~EvpnVirtualEthernetSegment()
{
}

bool Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::has_data() const
{
    return enable.is_set
	|| es_import_route_target.is_set
	|| (identifier !=  nullptr && identifier->has_data());
}

bool Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(es_import_route_target.operation)
	|| (identifier !=  nullptr && identifier->has_operation());
}

std::string Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-virtual-ethernet-segment";

    return path_buffer.str();

}

EntityPath Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EvpnVirtualEthernetSegment' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (es_import_route_target.is_set || is_set(es_import_route_target.operation)) leaf_name_data.push_back(es_import_route_target.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "identifier")
    {
        if(identifier != nullptr)
        {
            children["identifier"] = identifier;
        }
        else
        {
            identifier = std::make_shared<Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::Identifier>();
            identifier->parent = this;
            children["identifier"] = identifier;
        }
        return children.at("identifier");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::get_children()
{
    if(children.find("identifier") == children.end())
    {
        if(identifier != nullptr)
        {
            children["identifier"] = identifier;
        }
    }

    return children;
}

void Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "es-import-route-target")
    {
        es_import_route_target = value;
    }
}

Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::Identifier::Identifier()
    :
    bytes01{YType::str, "bytes01"},
    bytes23{YType::str, "bytes23"},
    bytes45{YType::str, "bytes45"},
    bytes67{YType::str, "bytes67"},
    bytes89{YType::str, "bytes89"},
    type{YType::enumeration, "type"}
{
    yang_name = "identifier"; yang_parent_name = "evpn-virtual-ethernet-segment";
}

Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::Identifier::~Identifier()
{
}

bool Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::Identifier::has_data() const
{
    return bytes01.is_set
	|| bytes23.is_set
	|| bytes45.is_set
	|| bytes67.is_set
	|| bytes89.is_set
	|| type.is_set;
}

bool Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::Identifier::has_operation() const
{
    return is_set(operation)
	|| is_set(bytes01.operation)
	|| is_set(bytes23.operation)
	|| is_set(bytes45.operation)
	|| is_set(bytes67.operation)
	|| is_set(bytes89.operation)
	|| is_set(type.operation);
}

std::string Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::Identifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "identifier";

    return path_buffer.str();

}

EntityPath Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::Identifier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Identifier' in Cisco_IOS_XR_l2vpn_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bytes01.is_set || is_set(bytes01.operation)) leaf_name_data.push_back(bytes01.get_name_leafdata());
    if (bytes23.is_set || is_set(bytes23.operation)) leaf_name_data.push_back(bytes23.get_name_leafdata());
    if (bytes45.is_set || is_set(bytes45.operation)) leaf_name_data.push_back(bytes45.get_name_leafdata());
    if (bytes67.is_set || is_set(bytes67.operation)) leaf_name_data.push_back(bytes67.get_name_leafdata());
    if (bytes89.is_set || is_set(bytes89.operation)) leaf_name_data.push_back(bytes89.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::Identifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::Identifier::get_children()
{
    return children;
}

void Evpn::EvpnTables::EvpnVirtualAccessPws::EvpnVirtualAccessPw::EvpnVirtualEthernetSegment::Identifier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bytes01")
    {
        bytes01 = value;
    }
    if(value_path == "bytes23")
    {
        bytes23 = value;
    }
    if(value_path == "bytes45")
    {
        bytes45 = value;
    }
    if(value_path == "bytes67")
    {
        bytes67 = value;
    }
    if(value_path == "bytes89")
    {
        bytes89 = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}


}
}

