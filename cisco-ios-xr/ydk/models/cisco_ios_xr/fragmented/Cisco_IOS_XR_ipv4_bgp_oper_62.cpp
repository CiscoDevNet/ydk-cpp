
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_62.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_63.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_bgp_oper {

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNexthopAddr::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "mvpn-nexthop-addr";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNexthopAddr::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNexthopAddr::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNexthopAddr::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNexthopAddr::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNexthopAddr::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNexthopAddr::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNexthopAddr::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNexthopAddr::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNexthopAddr::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "mvpn-nexthop-addr";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNexthopAddr::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNexthopAddr::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNexthopAddr::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNexthopAddr::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNexthopAddr::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNexthopAddr::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNexthopAddr::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnNexthopAddr::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::L2VpnCircuitStatusValue::L2VpnCircuitStatusValue()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "l2vpn-circuit-status-value"; yang_parent_name = "path-info-after-policy-out";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::L2VpnCircuitStatusValue::~L2VpnCircuitStatusValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::L2VpnCircuitStatusValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::L2VpnCircuitStatusValue::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::L2VpnCircuitStatusValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-circuit-status-value";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::L2VpnCircuitStatusValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnCircuitStatusValue' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::L2VpnCircuitStatusValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::L2VpnCircuitStatusValue::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::L2VpnCircuitStatusValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnPmsiValue::MvpnPmsiValue()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "mvpn-pmsi-value"; yang_parent_name = "path-info-after-policy-out";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnPmsiValue::~MvpnPmsiValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnPmsiValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnPmsiValue::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnPmsiValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mvpn-pmsi-value";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnPmsiValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MvpnPmsiValue' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnPmsiValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnPmsiValue::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::MvpnPmsiValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::ExtendedCommunity::ExtendedCommunity()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "extended-community"; yang_parent_name = "path-info-after-policy-out";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::ExtendedCommunity::~ExtendedCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::ExtendedCommunity::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::ExtendedCommunity::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::ExtendedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::ExtendedCommunity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExtendedCommunity' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::ExtendedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::ExtendedCommunity::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::ExtendedCommunity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::LocalPeersAdvertisedTo()
    :
    is_neighbor{YType::boolean, "is-neighbor"},
    update_group_number{YType::uint32, "update-group-number"}
    	,
    neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress>())
{
    neighbor_address->parent = this;
    children["neighbor-address"] = neighbor_address;

    yang_name = "local-peers-advertised-to"; yang_parent_name = "path-info-after-policy-out";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::~LocalPeersAdvertisedTo()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::has_data() const
{
    return is_neighbor.is_set
	|| update_group_number.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::has_operation() const
{
    return is_set(operation)
	|| is_set(is_neighbor.operation)
	|| is_set(update_group_number.operation)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-peers-advertised-to";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalPeersAdvertisedTo' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_neighbor.is_set || is_set(is_neighbor.operation)) leaf_name_data.push_back(is_neighbor.get_name_leafdata());
    if (update_group_number.is_set || is_set(update_group_number.operation)) leaf_name_data.push_back(update_group_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
        else
        {
            neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress>();
            neighbor_address->parent = this;
            children["neighbor-address"] = neighbor_address;
        }
        return children.at("neighbor-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::get_children()
{
    if(children.find("neighbor-address") == children.end())
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-neighbor")
    {
        is_neighbor = value;
    }
    if(value_path == "update-group-number")
    {
        update_group_number = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;
    children["ipv4sr-policy-address"] = ipv4sr_policy_address;

    ipv6sr_policy_address->parent = this;
    children["ipv6sr-policy-address"] = ipv6sr_policy_address;

    l2vpn_mspw_address->parent = this;
    children["l2vpn-mspw-address"] = l2vpn_mspw_address;

    l2vpnvpls_address->parent = this;
    children["l2vpnvpls-address"] = l2vpnvpls_address;

    yang_name = "neighbor-address"; yang_parent_name = "local-peers-advertised-to";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        else
        {
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress>();
            ipv4sr_policy_address->parent = this;
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        return children.at("ipv4sr-policy-address");
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        else
        {
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress>();
            ipv6sr_policy_address->parent = this;
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        return children.at("ipv6sr-policy-address");
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        else
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress>();
            l2vpn_mspw_address->parent = this;
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        return children.at("l2vpn-mspw-address");
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        else
        {
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::get_children()
{
    if(children.find("ipv4sr-policy-address") == children.end())
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
    }

    if(children.find("ipv6sr-policy-address") == children.end())
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
    }

    if(children.find("l2vpn-mspw-address") == children.end())
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
    }

    if(children.find("l2vpnvpls-address") == children.end())
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::PePeersAdvertisedTo()
    :
    is_neighbor{YType::boolean, "is-neighbor"},
    update_group_number{YType::uint32, "update-group-number"}
    	,
    neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress>())
{
    neighbor_address->parent = this;
    children["neighbor-address"] = neighbor_address;

    yang_name = "pe-peers-advertised-to"; yang_parent_name = "path-info-after-policy-out";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::~PePeersAdvertisedTo()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::has_data() const
{
    return is_neighbor.is_set
	|| update_group_number.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::has_operation() const
{
    return is_set(operation)
	|| is_set(is_neighbor.operation)
	|| is_set(update_group_number.operation)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-peers-advertised-to";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PePeersAdvertisedTo' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_neighbor.is_set || is_set(is_neighbor.operation)) leaf_name_data.push_back(is_neighbor.get_name_leafdata());
    if (update_group_number.is_set || is_set(update_group_number.operation)) leaf_name_data.push_back(update_group_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
        else
        {
            neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress>();
            neighbor_address->parent = this;
            children["neighbor-address"] = neighbor_address;
        }
        return children.at("neighbor-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::get_children()
{
    if(children.find("neighbor-address") == children.end())
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-neighbor")
    {
        is_neighbor = value;
    }
    if(value_path == "update-group-number")
    {
        update_group_number = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;
    children["ipv4sr-policy-address"] = ipv4sr_policy_address;

    ipv6sr_policy_address->parent = this;
    children["ipv6sr-policy-address"] = ipv6sr_policy_address;

    l2vpn_mspw_address->parent = this;
    children["l2vpn-mspw-address"] = l2vpn_mspw_address;

    l2vpnvpls_address->parent = this;
    children["l2vpnvpls-address"] = l2vpnvpls_address;

    yang_name = "neighbor-address"; yang_parent_name = "pe-peers-advertised-to";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        else
        {
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress>();
            ipv4sr_policy_address->parent = this;
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        return children.at("ipv4sr-policy-address");
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        else
        {
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress>();
            ipv6sr_policy_address->parent = this;
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        return children.at("ipv6sr-policy-address");
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        else
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress>();
            l2vpn_mspw_address->parent = this;
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        return children.at("l2vpn-mspw-address");
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        else
        {
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::get_children()
{
    if(children.find("ipv4sr-policy-address") == children.end())
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
    }

    if(children.find("ipv6sr-policy-address") == children.end())
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
    }

    if(children.find("l2vpn-mspw-address") == children.end())
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
    }

    if(children.find("l2vpnvpls-address") == children.end())
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::BestPathOrrBitfield()
    :
    is_neighbor{YType::boolean, "is-neighbor"},
    update_group_number{YType::uint32, "update-group-number"}
    	,
    neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress>())
{
    neighbor_address->parent = this;
    children["neighbor-address"] = neighbor_address;

    yang_name = "best-path-orr-bitfield"; yang_parent_name = "path-info-after-policy-out";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::~BestPathOrrBitfield()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::has_data() const
{
    return is_neighbor.is_set
	|| update_group_number.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::has_operation() const
{
    return is_set(operation)
	|| is_set(is_neighbor.operation)
	|| is_set(update_group_number.operation)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best-path-orr-bitfield";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BestPathOrrBitfield' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_neighbor.is_set || is_set(is_neighbor.operation)) leaf_name_data.push_back(is_neighbor.get_name_leafdata());
    if (update_group_number.is_set || is_set(update_group_number.operation)) leaf_name_data.push_back(update_group_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
        else
        {
            neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress>();
            neighbor_address->parent = this;
            children["neighbor-address"] = neighbor_address;
        }
        return children.at("neighbor-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::get_children()
{
    if(children.find("neighbor-address") == children.end())
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-neighbor")
    {
        is_neighbor = value;
    }
    if(value_path == "update-group-number")
    {
        update_group_number = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;
    children["ipv4sr-policy-address"] = ipv4sr_policy_address;

    ipv6sr_policy_address->parent = this;
    children["ipv6sr-policy-address"] = ipv6sr_policy_address;

    l2vpn_mspw_address->parent = this;
    children["l2vpn-mspw-address"] = l2vpn_mspw_address;

    l2vpnvpls_address->parent = this;
    children["l2vpnvpls-address"] = l2vpnvpls_address;

    yang_name = "neighbor-address"; yang_parent_name = "best-path-orr-bitfield";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        else
        {
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress>();
            ipv4sr_policy_address->parent = this;
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        return children.at("ipv4sr-policy-address");
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        else
        {
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress>();
            ipv6sr_policy_address->parent = this;
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        return children.at("ipv6sr-policy-address");
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        else
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress>();
            l2vpn_mspw_address->parent = this;
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        return children.at("l2vpn-mspw-address");
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        else
        {
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::get_children()
{
    if(children.find("ipv4sr-policy-address") == children.end())
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
    }

    if(children.find("ipv6sr-policy-address") == children.end())
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
    }

    if(children.find("l2vpn-mspw-address") == children.end())
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
    }

    if(children.find("l2vpnvpls-address") == children.end())
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::AddPathOrrBitfield()
    :
    is_neighbor{YType::boolean, "is-neighbor"},
    update_group_number{YType::uint32, "update-group-number"}
    	,
    neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress>())
{
    neighbor_address->parent = this;
    children["neighbor-address"] = neighbor_address;

    yang_name = "add-path-orr-bitfield"; yang_parent_name = "path-info-after-policy-out";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::~AddPathOrrBitfield()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::has_data() const
{
    return is_neighbor.is_set
	|| update_group_number.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::has_operation() const
{
    return is_set(operation)
	|| is_set(is_neighbor.operation)
	|| is_set(update_group_number.operation)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "add-path-orr-bitfield";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AddPathOrrBitfield' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_neighbor.is_set || is_set(is_neighbor.operation)) leaf_name_data.push_back(is_neighbor.get_name_leafdata());
    if (update_group_number.is_set || is_set(update_group_number.operation)) leaf_name_data.push_back(update_group_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-address")
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
        else
        {
            neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress>();
            neighbor_address->parent = this;
            children["neighbor-address"] = neighbor_address;
        }
        return children.at("neighbor-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::get_children()
{
    if(children.find("neighbor-address") == children.end())
    {
        if(neighbor_address != nullptr)
        {
            children["neighbor-address"] = neighbor_address;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-neighbor")
    {
        is_neighbor = value;
    }
    if(value_path == "update-group-number")
    {
        update_group_number = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::NeighborAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;
    children["ipv4sr-policy-address"] = ipv4sr_policy_address;

    ipv6sr_policy_address->parent = this;
    children["ipv6sr-policy-address"] = ipv6sr_policy_address;

    l2vpn_mspw_address->parent = this;
    children["l2vpn-mspw-address"] = l2vpn_mspw_address;

    l2vpnvpls_address->parent = this;
    children["l2vpnvpls-address"] = l2vpnvpls_address;

    yang_name = "neighbor-address"; yang_parent_name = "add-path-orr-bitfield";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        else
        {
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress>();
            ipv4sr_policy_address->parent = this;
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        return children.at("ipv4sr-policy-address");
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        else
        {
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress>();
            ipv6sr_policy_address->parent = this;
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        return children.at("ipv6sr-policy-address");
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        else
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress>();
            l2vpn_mspw_address->parent = this;
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        return children.at("l2vpn-mspw-address");
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        else
        {
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::get_children()
{
    if(children.find("ipv4sr-policy-address") == children.end())
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
    }

    if(children.find("ipv6sr-policy-address") == children.end())
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
    }

    if(children.find("l2vpn-mspw-address") == children.end())
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
    }

    if(children.find("l2vpnvpls-address") == children.end())
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::PathInfoAfterPolicyOut::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttributesAfterPolicyIn()
    :
    attribute_key_number{YType::uint32, "attribute-key-number"},
    attribute_reuse_id_config{YType::boolean, "attribute-reuse-id-config"},
    attribute_reuse_id_current{YType::uint32, "attribute-reuse-id-current"},
    attribute_reuse_id_keys{YType::uint32, "attribute-reuse-id-keys"},
    attribute_reuse_id_max_id{YType::uint32, "attribute-reuse-id-max-id"},
    attribute_reuse_id_node{YType::uint32, "attribute-reuse-id-node"},
    attribute_reuse_id_recover_sec{YType::uint32, "attribute-reuse-id-recover-sec"},
    is_application_gateway_present{YType::boolean, "is-application-gateway-present"},
    is_as_path2_byte{YType::boolean, "is-as-path2-byte"},
    is_attr_set_present{YType::boolean, "is-attr-set-present"},
    is_ribrnh_present{YType::boolean, "is-ribrnh-present"},
    is_rnh_present{YType::boolean, "is-rnh-present"},
    ribrnh_encap{YType::uint8, "ribrnh-encap"},
    ribrnh_mac{YType::str, "ribrnh-mac"},
    ribrnh_table{YType::uint32, "ribrnh-table"},
    ribrnh_vni{YType::uint32, "ribrnh-vni"},
    ribrnhip_table{YType::uint32, "ribrnhip-table"},
    rnh_addr_len{YType::uint32, "rnh-addr-len"},
    rnh_len{YType::uint8, "rnh-len"},
    rnh_type{YType::uint16, "rnh-type"},
    set_aigp_inbound_igp{YType::boolean, "set-aigp-inbound-igp"},
    set_aigp_inbound_metric{YType::boolean, "set-aigp-inbound-metric"},
    vpn_distinguisher{YType::uint32, "vpn-distinguisher"}
    	,
    attr_set(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet>())
	,common_attributes(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes>())
	,ribrnh_ip(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp>())
	,rnh_addr(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RnhAddr>())
{
    attr_set->parent = this;
    children["attr-set"] = attr_set;

    common_attributes->parent = this;
    children["common-attributes"] = common_attributes;

    ribrnh_ip->parent = this;
    children["ribrnh-ip"] = ribrnh_ip;

    rnh_addr->parent = this;
    children["rnh-addr"] = rnh_addr;

    yang_name = "attributes-after-policy-in"; yang_parent_name = "adv-path-info";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::~AttributesAfterPolicyIn()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::has_data() const
{
    return attribute_key_number.is_set
	|| attribute_reuse_id_config.is_set
	|| attribute_reuse_id_current.is_set
	|| attribute_reuse_id_keys.is_set
	|| attribute_reuse_id_max_id.is_set
	|| attribute_reuse_id_node.is_set
	|| attribute_reuse_id_recover_sec.is_set
	|| is_application_gateway_present.is_set
	|| is_as_path2_byte.is_set
	|| is_attr_set_present.is_set
	|| is_ribrnh_present.is_set
	|| is_rnh_present.is_set
	|| ribrnh_encap.is_set
	|| ribrnh_mac.is_set
	|| ribrnh_table.is_set
	|| ribrnh_vni.is_set
	|| ribrnhip_table.is_set
	|| rnh_addr_len.is_set
	|| rnh_len.is_set
	|| rnh_type.is_set
	|| set_aigp_inbound_igp.is_set
	|| set_aigp_inbound_metric.is_set
	|| vpn_distinguisher.is_set
	|| (attr_set !=  nullptr && attr_set->has_data())
	|| (common_attributes !=  nullptr && common_attributes->has_data())
	|| (ribrnh_ip !=  nullptr && ribrnh_ip->has_data())
	|| (rnh_addr !=  nullptr && rnh_addr->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::has_operation() const
{
    return is_set(operation)
	|| is_set(attribute_key_number.operation)
	|| is_set(attribute_reuse_id_config.operation)
	|| is_set(attribute_reuse_id_current.operation)
	|| is_set(attribute_reuse_id_keys.operation)
	|| is_set(attribute_reuse_id_max_id.operation)
	|| is_set(attribute_reuse_id_node.operation)
	|| is_set(attribute_reuse_id_recover_sec.operation)
	|| is_set(is_application_gateway_present.operation)
	|| is_set(is_as_path2_byte.operation)
	|| is_set(is_attr_set_present.operation)
	|| is_set(is_ribrnh_present.operation)
	|| is_set(is_rnh_present.operation)
	|| is_set(ribrnh_encap.operation)
	|| is_set(ribrnh_mac.operation)
	|| is_set(ribrnh_table.operation)
	|| is_set(ribrnh_vni.operation)
	|| is_set(ribrnhip_table.operation)
	|| is_set(rnh_addr_len.operation)
	|| is_set(rnh_len.operation)
	|| is_set(rnh_type.operation)
	|| is_set(set_aigp_inbound_igp.operation)
	|| is_set(set_aigp_inbound_metric.operation)
	|| is_set(vpn_distinguisher.operation)
	|| (attr_set !=  nullptr && attr_set->has_operation())
	|| (common_attributes !=  nullptr && common_attributes->has_operation())
	|| (ribrnh_ip !=  nullptr && ribrnh_ip->has_operation())
	|| (rnh_addr !=  nullptr && rnh_addr->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes-after-policy-in";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributesAfterPolicyIn' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_key_number.is_set || is_set(attribute_key_number.operation)) leaf_name_data.push_back(attribute_key_number.get_name_leafdata());
    if (attribute_reuse_id_config.is_set || is_set(attribute_reuse_id_config.operation)) leaf_name_data.push_back(attribute_reuse_id_config.get_name_leafdata());
    if (attribute_reuse_id_current.is_set || is_set(attribute_reuse_id_current.operation)) leaf_name_data.push_back(attribute_reuse_id_current.get_name_leafdata());
    if (attribute_reuse_id_keys.is_set || is_set(attribute_reuse_id_keys.operation)) leaf_name_data.push_back(attribute_reuse_id_keys.get_name_leafdata());
    if (attribute_reuse_id_max_id.is_set || is_set(attribute_reuse_id_max_id.operation)) leaf_name_data.push_back(attribute_reuse_id_max_id.get_name_leafdata());
    if (attribute_reuse_id_node.is_set || is_set(attribute_reuse_id_node.operation)) leaf_name_data.push_back(attribute_reuse_id_node.get_name_leafdata());
    if (attribute_reuse_id_recover_sec.is_set || is_set(attribute_reuse_id_recover_sec.operation)) leaf_name_data.push_back(attribute_reuse_id_recover_sec.get_name_leafdata());
    if (is_application_gateway_present.is_set || is_set(is_application_gateway_present.operation)) leaf_name_data.push_back(is_application_gateway_present.get_name_leafdata());
    if (is_as_path2_byte.is_set || is_set(is_as_path2_byte.operation)) leaf_name_data.push_back(is_as_path2_byte.get_name_leafdata());
    if (is_attr_set_present.is_set || is_set(is_attr_set_present.operation)) leaf_name_data.push_back(is_attr_set_present.get_name_leafdata());
    if (is_ribrnh_present.is_set || is_set(is_ribrnh_present.operation)) leaf_name_data.push_back(is_ribrnh_present.get_name_leafdata());
    if (is_rnh_present.is_set || is_set(is_rnh_present.operation)) leaf_name_data.push_back(is_rnh_present.get_name_leafdata());
    if (ribrnh_encap.is_set || is_set(ribrnh_encap.operation)) leaf_name_data.push_back(ribrnh_encap.get_name_leafdata());
    if (ribrnh_mac.is_set || is_set(ribrnh_mac.operation)) leaf_name_data.push_back(ribrnh_mac.get_name_leafdata());
    if (ribrnh_table.is_set || is_set(ribrnh_table.operation)) leaf_name_data.push_back(ribrnh_table.get_name_leafdata());
    if (ribrnh_vni.is_set || is_set(ribrnh_vni.operation)) leaf_name_data.push_back(ribrnh_vni.get_name_leafdata());
    if (ribrnhip_table.is_set || is_set(ribrnhip_table.operation)) leaf_name_data.push_back(ribrnhip_table.get_name_leafdata());
    if (rnh_addr_len.is_set || is_set(rnh_addr_len.operation)) leaf_name_data.push_back(rnh_addr_len.get_name_leafdata());
    if (rnh_len.is_set || is_set(rnh_len.operation)) leaf_name_data.push_back(rnh_len.get_name_leafdata());
    if (rnh_type.is_set || is_set(rnh_type.operation)) leaf_name_data.push_back(rnh_type.get_name_leafdata());
    if (set_aigp_inbound_igp.is_set || is_set(set_aigp_inbound_igp.operation)) leaf_name_data.push_back(set_aigp_inbound_igp.get_name_leafdata());
    if (set_aigp_inbound_metric.is_set || is_set(set_aigp_inbound_metric.operation)) leaf_name_data.push_back(set_aigp_inbound_metric.get_name_leafdata());
    if (vpn_distinguisher.is_set || is_set(vpn_distinguisher.operation)) leaf_name_data.push_back(vpn_distinguisher.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "attr-set")
    {
        if(attr_set != nullptr)
        {
            children["attr-set"] = attr_set;
        }
        else
        {
            attr_set = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet>();
            attr_set->parent = this;
            children["attr-set"] = attr_set;
        }
        return children.at("attr-set");
    }

    if(child_yang_name == "common-attributes")
    {
        if(common_attributes != nullptr)
        {
            children["common-attributes"] = common_attributes;
        }
        else
        {
            common_attributes = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes>();
            common_attributes->parent = this;
            children["common-attributes"] = common_attributes;
        }
        return children.at("common-attributes");
    }

    if(child_yang_name == "ribrnh-ip")
    {
        if(ribrnh_ip != nullptr)
        {
            children["ribrnh-ip"] = ribrnh_ip;
        }
        else
        {
            ribrnh_ip = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp>();
            ribrnh_ip->parent = this;
            children["ribrnh-ip"] = ribrnh_ip;
        }
        return children.at("ribrnh-ip");
    }

    if(child_yang_name == "rnh-addr")
    {
        if(rnh_addr != nullptr)
        {
            children["rnh-addr"] = rnh_addr;
        }
        else
        {
            rnh_addr = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RnhAddr>();
            rnh_addr->parent = this;
            children["rnh-addr"] = rnh_addr;
        }
        return children.at("rnh-addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::get_children()
{
    if(children.find("attr-set") == children.end())
    {
        if(attr_set != nullptr)
        {
            children["attr-set"] = attr_set;
        }
    }

    if(children.find("common-attributes") == children.end())
    {
        if(common_attributes != nullptr)
        {
            children["common-attributes"] = common_attributes;
        }
    }

    if(children.find("ribrnh-ip") == children.end())
    {
        if(ribrnh_ip != nullptr)
        {
            children["ribrnh-ip"] = ribrnh_ip;
        }
    }

    if(children.find("rnh-addr") == children.end())
    {
        if(rnh_addr != nullptr)
        {
            children["rnh-addr"] = rnh_addr;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attribute-key-number")
    {
        attribute_key_number = value;
    }
    if(value_path == "attribute-reuse-id-config")
    {
        attribute_reuse_id_config = value;
    }
    if(value_path == "attribute-reuse-id-current")
    {
        attribute_reuse_id_current = value;
    }
    if(value_path == "attribute-reuse-id-keys")
    {
        attribute_reuse_id_keys = value;
    }
    if(value_path == "attribute-reuse-id-max-id")
    {
        attribute_reuse_id_max_id = value;
    }
    if(value_path == "attribute-reuse-id-node")
    {
        attribute_reuse_id_node = value;
    }
    if(value_path == "attribute-reuse-id-recover-sec")
    {
        attribute_reuse_id_recover_sec = value;
    }
    if(value_path == "is-application-gateway-present")
    {
        is_application_gateway_present = value;
    }
    if(value_path == "is-as-path2-byte")
    {
        is_as_path2_byte = value;
    }
    if(value_path == "is-attr-set-present")
    {
        is_attr_set_present = value;
    }
    if(value_path == "is-ribrnh-present")
    {
        is_ribrnh_present = value;
    }
    if(value_path == "is-rnh-present")
    {
        is_rnh_present = value;
    }
    if(value_path == "ribrnh-encap")
    {
        ribrnh_encap = value;
    }
    if(value_path == "ribrnh-mac")
    {
        ribrnh_mac = value;
    }
    if(value_path == "ribrnh-table")
    {
        ribrnh_table = value;
    }
    if(value_path == "ribrnh-vni")
    {
        ribrnh_vni = value;
    }
    if(value_path == "ribrnhip-table")
    {
        ribrnhip_table = value;
    }
    if(value_path == "rnh-addr-len")
    {
        rnh_addr_len = value;
    }
    if(value_path == "rnh-len")
    {
        rnh_len = value;
    }
    if(value_path == "rnh-type")
    {
        rnh_type = value;
    }
    if(value_path == "set-aigp-inbound-igp")
    {
        set_aigp_inbound_igp = value;
    }
    if(value_path == "set-aigp-inbound-metric")
    {
        set_aigp_inbound_metric = value;
    }
    if(value_path == "vpn-distinguisher")
    {
        vpn_distinguisher = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::CommonAttributes()
    :
    aggregator_address{YType::str, "aggregator-address"},
    aggregator_as{YType::uint32, "aggregator-as"},
    aigp_metric_value{YType::uint64, "aigp-metric-value"},
    as_path{YType::str, "as-path"},
    connector_type{YType::uint16, "connector-type"},
    extended_community_flags{YType::uint8, "extended-community-flags"},
    is_aggregator_present{YType::boolean, "is-aggregator-present"},
    is_aigp_present{YType::boolean, "is-aigp-present"},
    is_as_path_present{YType::boolean, "is-as-path-present"},
    is_atomic_aggregate_present{YType::boolean, "is-atomic-aggregate-present"},
    is_community_present{YType::boolean, "is-community-present"},
    is_connector_present{YType::boolean, "is-connector-present"},
    is_extended_community_present{YType::boolean, "is-extended-community-present"},
    is_label_index_present{YType::boolean, "is-label-index-present"},
    is_local_pref_present{YType::boolean, "is-local-pref-present"},
    is_ls_attribute_present{YType::boolean, "is-ls-attribute-present"},
    is_metric_present{YType::boolean, "is-metric-present"},
    is_origin_present{YType::boolean, "is-origin-present"},
    is_pe_distinguisher_label_present{YType::boolean, "is-pe-distinguisher-label-present"},
    is_pmsi_present{YType::boolean, "is-pmsi-present"},
    is_pppmp_present{YType::boolean, "is-pppmp-present"},
    is_ssa_present{YType::boolean, "is-ssa-present"},
    is_tunnel_encap_present{YType::boolean, "is-tunnel-encap-present"},
    l2tpv3_session_id{YType::uint32, "l2tpv3-session-id"},
    local_preference{YType::uint32, "local-preference"},
    metric{YType::uint32, "metric"},
    neighbor_as{YType::uint32, "neighbor-as"},
    origin{YType::uint16, "origin"},
    originator{YType::str, "originator"},
    pmsi_flags{YType::uint8, "pmsi-flags"},
    pmsi_label{YType::uint32, "pmsi-label"},
    pmsi_type{YType::uint16, "pmsi-type"},
    ppm_pvalue{YType::uint32, "ppm-pvalue"},
    sr_policy_preference{YType::uint32, "sr-policy-preference"},
    sr_tunnel_request_state{YType::enumeration, "sr-tunnel-request-state"},
    sr_tunnel_state{YType::uint32, "sr-tunnel-state"},
    tunnel_encap_type{YType::uint16, "tunnel-encap-type"}
    	,
    sr_policy_allocated_binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::SrPolicyAllocatedBindingSid>())
	,sr_policy_binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::SrPolicyBindingSid>())
{
    sr_policy_allocated_binding_sid->parent = this;
    children["sr-policy-allocated-binding-sid"] = sr_policy_allocated_binding_sid;

    sr_policy_binding_sid->parent = this;
    children["sr-policy-binding-sid"] = sr_policy_binding_sid;

    yang_name = "common-attributes"; yang_parent_name = "attributes-after-policy-in";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::~CommonAttributes()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::has_data() const
{
    for (std::size_t index=0; index<cluster.size(); index++)
    {
        if(cluster[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<community.size(); index++)
    {
        if(community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<connector_value.size(); index++)
    {
        if(connector_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_community.size(); index++)
    {
        if(extended_community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<l2tpv3_cookie.size(); index++)
    {
        if(l2tpv3_cookie[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<label_index_attr.size(); index++)
    {
        if(label_index_attr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ls_attr.size(); index++)
    {
        if(ls_attr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pe_distinguisher_label.size(); index++)
    {
        if(pe_distinguisher_label[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pmsi_value.size(); index++)
    {
        if(pmsi_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sr_policy_explicit_path.size(); index++)
    {
        if(sr_policy_explicit_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<unknown_attribute.size(); index++)
    {
        if(unknown_attribute[index]->has_data())
            return true;
    }
    return aggregator_address.is_set
	|| aggregator_as.is_set
	|| aigp_metric_value.is_set
	|| as_path.is_set
	|| connector_type.is_set
	|| extended_community_flags.is_set
	|| is_aggregator_present.is_set
	|| is_aigp_present.is_set
	|| is_as_path_present.is_set
	|| is_atomic_aggregate_present.is_set
	|| is_community_present.is_set
	|| is_connector_present.is_set
	|| is_extended_community_present.is_set
	|| is_label_index_present.is_set
	|| is_local_pref_present.is_set
	|| is_ls_attribute_present.is_set
	|| is_metric_present.is_set
	|| is_origin_present.is_set
	|| is_pe_distinguisher_label_present.is_set
	|| is_pmsi_present.is_set
	|| is_pppmp_present.is_set
	|| is_ssa_present.is_set
	|| is_tunnel_encap_present.is_set
	|| l2tpv3_session_id.is_set
	|| local_preference.is_set
	|| metric.is_set
	|| neighbor_as.is_set
	|| origin.is_set
	|| originator.is_set
	|| pmsi_flags.is_set
	|| pmsi_label.is_set
	|| pmsi_type.is_set
	|| ppm_pvalue.is_set
	|| sr_policy_preference.is_set
	|| sr_tunnel_request_state.is_set
	|| sr_tunnel_state.is_set
	|| tunnel_encap_type.is_set
	|| (sr_policy_allocated_binding_sid !=  nullptr && sr_policy_allocated_binding_sid->has_data())
	|| (sr_policy_binding_sid !=  nullptr && sr_policy_binding_sid->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::has_operation() const
{
    for (std::size_t index=0; index<cluster.size(); index++)
    {
        if(cluster[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<community.size(); index++)
    {
        if(community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<connector_value.size(); index++)
    {
        if(connector_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_community.size(); index++)
    {
        if(extended_community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<l2tpv3_cookie.size(); index++)
    {
        if(l2tpv3_cookie[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<label_index_attr.size(); index++)
    {
        if(label_index_attr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ls_attr.size(); index++)
    {
        if(ls_attr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pe_distinguisher_label.size(); index++)
    {
        if(pe_distinguisher_label[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pmsi_value.size(); index++)
    {
        if(pmsi_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sr_policy_explicit_path.size(); index++)
    {
        if(sr_policy_explicit_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<unknown_attribute.size(); index++)
    {
        if(unknown_attribute[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(aggregator_address.operation)
	|| is_set(aggregator_as.operation)
	|| is_set(aigp_metric_value.operation)
	|| is_set(as_path.operation)
	|| is_set(connector_type.operation)
	|| is_set(extended_community_flags.operation)
	|| is_set(is_aggregator_present.operation)
	|| is_set(is_aigp_present.operation)
	|| is_set(is_as_path_present.operation)
	|| is_set(is_atomic_aggregate_present.operation)
	|| is_set(is_community_present.operation)
	|| is_set(is_connector_present.operation)
	|| is_set(is_extended_community_present.operation)
	|| is_set(is_label_index_present.operation)
	|| is_set(is_local_pref_present.operation)
	|| is_set(is_ls_attribute_present.operation)
	|| is_set(is_metric_present.operation)
	|| is_set(is_origin_present.operation)
	|| is_set(is_pe_distinguisher_label_present.operation)
	|| is_set(is_pmsi_present.operation)
	|| is_set(is_pppmp_present.operation)
	|| is_set(is_ssa_present.operation)
	|| is_set(is_tunnel_encap_present.operation)
	|| is_set(l2tpv3_session_id.operation)
	|| is_set(local_preference.operation)
	|| is_set(metric.operation)
	|| is_set(neighbor_as.operation)
	|| is_set(origin.operation)
	|| is_set(originator.operation)
	|| is_set(pmsi_flags.operation)
	|| is_set(pmsi_label.operation)
	|| is_set(pmsi_type.operation)
	|| is_set(ppm_pvalue.operation)
	|| is_set(sr_policy_preference.operation)
	|| is_set(sr_tunnel_request_state.operation)
	|| is_set(sr_tunnel_state.operation)
	|| is_set(tunnel_encap_type.operation)
	|| (sr_policy_allocated_binding_sid !=  nullptr && sr_policy_allocated_binding_sid->has_operation())
	|| (sr_policy_binding_sid !=  nullptr && sr_policy_binding_sid->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-attributes";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CommonAttributes' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggregator_address.is_set || is_set(aggregator_address.operation)) leaf_name_data.push_back(aggregator_address.get_name_leafdata());
    if (aggregator_as.is_set || is_set(aggregator_as.operation)) leaf_name_data.push_back(aggregator_as.get_name_leafdata());
    if (aigp_metric_value.is_set || is_set(aigp_metric_value.operation)) leaf_name_data.push_back(aigp_metric_value.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.operation)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (connector_type.is_set || is_set(connector_type.operation)) leaf_name_data.push_back(connector_type.get_name_leafdata());
    if (extended_community_flags.is_set || is_set(extended_community_flags.operation)) leaf_name_data.push_back(extended_community_flags.get_name_leafdata());
    if (is_aggregator_present.is_set || is_set(is_aggregator_present.operation)) leaf_name_data.push_back(is_aggregator_present.get_name_leafdata());
    if (is_aigp_present.is_set || is_set(is_aigp_present.operation)) leaf_name_data.push_back(is_aigp_present.get_name_leafdata());
    if (is_as_path_present.is_set || is_set(is_as_path_present.operation)) leaf_name_data.push_back(is_as_path_present.get_name_leafdata());
    if (is_atomic_aggregate_present.is_set || is_set(is_atomic_aggregate_present.operation)) leaf_name_data.push_back(is_atomic_aggregate_present.get_name_leafdata());
    if (is_community_present.is_set || is_set(is_community_present.operation)) leaf_name_data.push_back(is_community_present.get_name_leafdata());
    if (is_connector_present.is_set || is_set(is_connector_present.operation)) leaf_name_data.push_back(is_connector_present.get_name_leafdata());
    if (is_extended_community_present.is_set || is_set(is_extended_community_present.operation)) leaf_name_data.push_back(is_extended_community_present.get_name_leafdata());
    if (is_label_index_present.is_set || is_set(is_label_index_present.operation)) leaf_name_data.push_back(is_label_index_present.get_name_leafdata());
    if (is_local_pref_present.is_set || is_set(is_local_pref_present.operation)) leaf_name_data.push_back(is_local_pref_present.get_name_leafdata());
    if (is_ls_attribute_present.is_set || is_set(is_ls_attribute_present.operation)) leaf_name_data.push_back(is_ls_attribute_present.get_name_leafdata());
    if (is_metric_present.is_set || is_set(is_metric_present.operation)) leaf_name_data.push_back(is_metric_present.get_name_leafdata());
    if (is_origin_present.is_set || is_set(is_origin_present.operation)) leaf_name_data.push_back(is_origin_present.get_name_leafdata());
    if (is_pe_distinguisher_label_present.is_set || is_set(is_pe_distinguisher_label_present.operation)) leaf_name_data.push_back(is_pe_distinguisher_label_present.get_name_leafdata());
    if (is_pmsi_present.is_set || is_set(is_pmsi_present.operation)) leaf_name_data.push_back(is_pmsi_present.get_name_leafdata());
    if (is_pppmp_present.is_set || is_set(is_pppmp_present.operation)) leaf_name_data.push_back(is_pppmp_present.get_name_leafdata());
    if (is_ssa_present.is_set || is_set(is_ssa_present.operation)) leaf_name_data.push_back(is_ssa_present.get_name_leafdata());
    if (is_tunnel_encap_present.is_set || is_set(is_tunnel_encap_present.operation)) leaf_name_data.push_back(is_tunnel_encap_present.get_name_leafdata());
    if (l2tpv3_session_id.is_set || is_set(l2tpv3_session_id.operation)) leaf_name_data.push_back(l2tpv3_session_id.get_name_leafdata());
    if (local_preference.is_set || is_set(local_preference.operation)) leaf_name_data.push_back(local_preference.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (neighbor_as.is_set || is_set(neighbor_as.operation)) leaf_name_data.push_back(neighbor_as.get_name_leafdata());
    if (origin.is_set || is_set(origin.operation)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (originator.is_set || is_set(originator.operation)) leaf_name_data.push_back(originator.get_name_leafdata());
    if (pmsi_flags.is_set || is_set(pmsi_flags.operation)) leaf_name_data.push_back(pmsi_flags.get_name_leafdata());
    if (pmsi_label.is_set || is_set(pmsi_label.operation)) leaf_name_data.push_back(pmsi_label.get_name_leafdata());
    if (pmsi_type.is_set || is_set(pmsi_type.operation)) leaf_name_data.push_back(pmsi_type.get_name_leafdata());
    if (ppm_pvalue.is_set || is_set(ppm_pvalue.operation)) leaf_name_data.push_back(ppm_pvalue.get_name_leafdata());
    if (sr_policy_preference.is_set || is_set(sr_policy_preference.operation)) leaf_name_data.push_back(sr_policy_preference.get_name_leafdata());
    if (sr_tunnel_request_state.is_set || is_set(sr_tunnel_request_state.operation)) leaf_name_data.push_back(sr_tunnel_request_state.get_name_leafdata());
    if (sr_tunnel_state.is_set || is_set(sr_tunnel_state.operation)) leaf_name_data.push_back(sr_tunnel_state.get_name_leafdata());
    if (tunnel_encap_type.is_set || is_set(tunnel_encap_type.operation)) leaf_name_data.push_back(tunnel_encap_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cluster")
    {
        for(auto const & c : cluster)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::Cluster>();
        c->parent = this;
        cluster.push_back(std::move(c));
        children[segment_path] = cluster.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "community")
    {
        for(auto const & c : community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::Community>();
        c->parent = this;
        community.push_back(std::move(c));
        children[segment_path] = community.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "connector-value")
    {
        for(auto const & c : connector_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue>();
        c->parent = this;
        connector_value.push_back(std::move(c));
        children[segment_path] = connector_value.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "extended-community")
    {
        for(auto const & c : extended_community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity>();
        c->parent = this;
        extended_community.push_back(std::move(c));
        children[segment_path] = extended_community.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "l2tpv3-cookie")
    {
        for(auto const & c : l2tpv3_cookie)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie>();
        c->parent = this;
        l2tpv3_cookie.push_back(std::move(c));
        children[segment_path] = l2tpv3_cookie.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "label-index-attr")
    {
        for(auto const & c : label_index_attr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr>();
        c->parent = this;
        label_index_attr.push_back(std::move(c));
        children[segment_path] = label_index_attr.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "ls-attr")
    {
        for(auto const & c : ls_attr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::LsAttr>();
        c->parent = this;
        ls_attr.push_back(std::move(c));
        children[segment_path] = ls_attr.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "pe-distinguisher-label")
    {
        for(auto const & c : pe_distinguisher_label)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel>();
        c->parent = this;
        pe_distinguisher_label.push_back(std::move(c));
        children[segment_path] = pe_distinguisher_label.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "pmsi-value")
    {
        for(auto const & c : pmsi_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::PmsiValue>();
        c->parent = this;
        pmsi_value.push_back(std::move(c));
        children[segment_path] = pmsi_value.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "sr-policy-allocated-binding-sid")
    {
        if(sr_policy_allocated_binding_sid != nullptr)
        {
            children["sr-policy-allocated-binding-sid"] = sr_policy_allocated_binding_sid;
        }
        else
        {
            sr_policy_allocated_binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::SrPolicyAllocatedBindingSid>();
            sr_policy_allocated_binding_sid->parent = this;
            children["sr-policy-allocated-binding-sid"] = sr_policy_allocated_binding_sid;
        }
        return children.at("sr-policy-allocated-binding-sid");
    }

    if(child_yang_name == "sr-policy-binding-sid")
    {
        if(sr_policy_binding_sid != nullptr)
        {
            children["sr-policy-binding-sid"] = sr_policy_binding_sid;
        }
        else
        {
            sr_policy_binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::SrPolicyBindingSid>();
            sr_policy_binding_sid->parent = this;
            children["sr-policy-binding-sid"] = sr_policy_binding_sid;
        }
        return children.at("sr-policy-binding-sid");
    }

    if(child_yang_name == "sr-policy-explicit-path")
    {
        for(auto const & c : sr_policy_explicit_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath>();
        c->parent = this;
        sr_policy_explicit_path.push_back(std::move(c));
        children[segment_path] = sr_policy_explicit_path.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "unknown-attribute")
    {
        for(auto const & c : unknown_attribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute>();
        c->parent = this;
        unknown_attribute.push_back(std::move(c));
        children[segment_path] = unknown_attribute.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::get_children()
{
    for (auto const & c : cluster)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : community)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : connector_value)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : extended_community)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : l2tpv3_cookie)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : label_index_attr)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : ls_attr)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : pe_distinguisher_label)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : pmsi_value)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("sr-policy-allocated-binding-sid") == children.end())
    {
        if(sr_policy_allocated_binding_sid != nullptr)
        {
            children["sr-policy-allocated-binding-sid"] = sr_policy_allocated_binding_sid;
        }
    }

    if(children.find("sr-policy-binding-sid") == children.end())
    {
        if(sr_policy_binding_sid != nullptr)
        {
            children["sr-policy-binding-sid"] = sr_policy_binding_sid;
        }
    }

    for (auto const & c : sr_policy_explicit_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : unknown_attribute)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aggregator-address")
    {
        aggregator_address = value;
    }
    if(value_path == "aggregator-as")
    {
        aggregator_as = value;
    }
    if(value_path == "aigp-metric-value")
    {
        aigp_metric_value = value;
    }
    if(value_path == "as-path")
    {
        as_path = value;
    }
    if(value_path == "connector-type")
    {
        connector_type = value;
    }
    if(value_path == "extended-community-flags")
    {
        extended_community_flags = value;
    }
    if(value_path == "is-aggregator-present")
    {
        is_aggregator_present = value;
    }
    if(value_path == "is-aigp-present")
    {
        is_aigp_present = value;
    }
    if(value_path == "is-as-path-present")
    {
        is_as_path_present = value;
    }
    if(value_path == "is-atomic-aggregate-present")
    {
        is_atomic_aggregate_present = value;
    }
    if(value_path == "is-community-present")
    {
        is_community_present = value;
    }
    if(value_path == "is-connector-present")
    {
        is_connector_present = value;
    }
    if(value_path == "is-extended-community-present")
    {
        is_extended_community_present = value;
    }
    if(value_path == "is-label-index-present")
    {
        is_label_index_present = value;
    }
    if(value_path == "is-local-pref-present")
    {
        is_local_pref_present = value;
    }
    if(value_path == "is-ls-attribute-present")
    {
        is_ls_attribute_present = value;
    }
    if(value_path == "is-metric-present")
    {
        is_metric_present = value;
    }
    if(value_path == "is-origin-present")
    {
        is_origin_present = value;
    }
    if(value_path == "is-pe-distinguisher-label-present")
    {
        is_pe_distinguisher_label_present = value;
    }
    if(value_path == "is-pmsi-present")
    {
        is_pmsi_present = value;
    }
    if(value_path == "is-pppmp-present")
    {
        is_pppmp_present = value;
    }
    if(value_path == "is-ssa-present")
    {
        is_ssa_present = value;
    }
    if(value_path == "is-tunnel-encap-present")
    {
        is_tunnel_encap_present = value;
    }
    if(value_path == "l2tpv3-session-id")
    {
        l2tpv3_session_id = value;
    }
    if(value_path == "local-preference")
    {
        local_preference = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "neighbor-as")
    {
        neighbor_as = value;
    }
    if(value_path == "origin")
    {
        origin = value;
    }
    if(value_path == "originator")
    {
        originator = value;
    }
    if(value_path == "pmsi-flags")
    {
        pmsi_flags = value;
    }
    if(value_path == "pmsi-label")
    {
        pmsi_label = value;
    }
    if(value_path == "pmsi-type")
    {
        pmsi_type = value;
    }
    if(value_path == "ppm-pvalue")
    {
        ppm_pvalue = value;
    }
    if(value_path == "sr-policy-preference")
    {
        sr_policy_preference = value;
    }
    if(value_path == "sr-tunnel-request-state")
    {
        sr_tunnel_request_state = value;
    }
    if(value_path == "sr-tunnel-state")
    {
        sr_tunnel_state = value;
    }
    if(value_path == "tunnel-encap-type")
    {
        tunnel_encap_type = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::SrPolicyBindingSid::SrPolicyBindingSid()
    :
    ipv6_address{YType::str, "ipv6-address"},
    label{YType::uint32, "label"},
    type{YType::enumeration, "type"}
{
    yang_name = "sr-policy-binding-sid"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::SrPolicyBindingSid::~SrPolicyBindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::SrPolicyBindingSid::has_data() const
{
    return ipv6_address.is_set
	|| label.is_set
	|| type.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::SrPolicyBindingSid::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_address.operation)
	|| is_set(label.operation)
	|| is_set(type.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::SrPolicyBindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy-binding-sid";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::SrPolicyBindingSid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrPolicyBindingSid' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::SrPolicyBindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::SrPolicyBindingSid::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::SrPolicyBindingSid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::SrPolicyAllocatedBindingSid::SrPolicyAllocatedBindingSid()
    :
    ipv6_address{YType::str, "ipv6-address"},
    label{YType::uint32, "label"},
    type{YType::enumeration, "type"}
{
    yang_name = "sr-policy-allocated-binding-sid"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::SrPolicyAllocatedBindingSid::~SrPolicyAllocatedBindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::SrPolicyAllocatedBindingSid::has_data() const
{
    return ipv6_address.is_set
	|| label.is_set
	|| type.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::SrPolicyAllocatedBindingSid::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_address.operation)
	|| is_set(label.operation)
	|| is_set(type.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::SrPolicyAllocatedBindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy-allocated-binding-sid";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::SrPolicyAllocatedBindingSid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrPolicyAllocatedBindingSid' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::SrPolicyAllocatedBindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::SrPolicyAllocatedBindingSid::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::SrPolicyAllocatedBindingSid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::Community::Community()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "community"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::Community::~Community()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::Community::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::Community::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::Community::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Community' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::Community::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::Community::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity::ExtendedCommunity()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "extended-community"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity::~ExtendedCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExtendedCommunity' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute::UnknownAttribute()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "unknown-attribute"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute::~UnknownAttribute()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attribute";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnknownAttribute' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::Cluster::Cluster()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "cluster"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::Cluster::~Cluster()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::Cluster::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::Cluster::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::Cluster::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cluster";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::Cluster::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cluster' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::Cluster::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::Cluster::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::Cluster::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie::L2Tpv3Cookie()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "l2tpv3-cookie"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie::~L2Tpv3Cookie()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3-cookie";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2Tpv3Cookie' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue::ConnectorValue()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "connector-value"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue::~ConnectorValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connector-value";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConnectorValue' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::PmsiValue::PmsiValue()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "pmsi-value"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::PmsiValue::~PmsiValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::PmsiValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::PmsiValue::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::PmsiValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-value";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::PmsiValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PmsiValue' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::PmsiValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::PmsiValue::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::PmsiValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::LsAttr::LsAttr()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "ls-attr"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::LsAttr::~LsAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::LsAttr::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::LsAttr::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::LsAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ls-attr";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::LsAttr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsAttr' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::LsAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::LsAttr::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::LsAttr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr::LabelIndexAttr()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "label-index-attr"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr::~LabelIndexAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-index-attr";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabelIndexAttr' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel::PeDistinguisherLabel()
    :
    label{YType::uint32, "label"},
    pe_address{YType::str, "pe-address"}
{
    yang_name = "pe-distinguisher-label"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel::~PeDistinguisherLabel()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel::has_data() const
{
    return label.is_set
	|| pe_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(label.operation)
	|| is_set(pe_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-distinguisher-label";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeDistinguisherLabel' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (pe_address.is_set || is_set(pe_address.operation)) leaf_name_data.push_back(pe_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "pe-address")
    {
        pe_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath::SrPolicyExplicitPath()
    :
    weight{YType::uint8, "weight"}
{
    yang_name = "sr-policy-explicit-path"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath::~SrPolicyExplicitPath()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath::has_data() const
{
    for (std::size_t index=0; index<sid.size(); index++)
    {
        if(sid[index]->has_data())
            return true;
    }
    return weight.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath::has_operation() const
{
    for (std::size_t index=0; index<sid.size(); index++)
    {
        if(sid[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(weight.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy-explicit-path";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrPolicyExplicitPath' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sid")
    {
        for(auto const & c : sid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath::Sid>();
        c->parent = this;
        sid.push_back(std::move(c));
        children[segment_path] = sid.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath::get_children()
{
    for (auto const & c : sid)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "weight")
    {
        weight = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath::Sid::Sid()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"},
    label{YType::uint32, "label"},
    type{YType::uint8, "type"}
{
    yang_name = "sid"; yang_parent_name = "sr-policy-explicit-path";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath::Sid::~Sid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath::Sid::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set
	|| label.is_set
	|| type.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath::Sid::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation)
	|| is_set(label.operation)
	|| is_set(type.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath::Sid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath::Sid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sid' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath::Sid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath::Sid::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath::Sid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::AttrSet()
    :
    aggregator_address{YType::str, "aggregator-address"},
    aggregator_as{YType::uint32, "aggregator-as"},
    aigp_metric_value{YType::uint64, "aigp-metric-value"},
    as_path{YType::str, "as-path"},
    connector_type{YType::uint16, "connector-type"},
    extended_community_flags{YType::uint8, "extended-community-flags"},
    is_aggregator_present{YType::boolean, "is-aggregator-present"},
    is_aigp_present{YType::boolean, "is-aigp-present"},
    is_as_path_present{YType::boolean, "is-as-path-present"},
    is_atomic_aggregate_present{YType::boolean, "is-atomic-aggregate-present"},
    is_community_present{YType::boolean, "is-community-present"},
    is_connector_present{YType::boolean, "is-connector-present"},
    is_extended_community_present{YType::boolean, "is-extended-community-present"},
    is_label_index_present{YType::boolean, "is-label-index-present"},
    is_local_pref_present{YType::boolean, "is-local-pref-present"},
    is_ls_attribute_present{YType::boolean, "is-ls-attribute-present"},
    is_metric_present{YType::boolean, "is-metric-present"},
    is_origin_present{YType::boolean, "is-origin-present"},
    is_pe_distinguisher_label_present{YType::boolean, "is-pe-distinguisher-label-present"},
    is_pmsi_present{YType::boolean, "is-pmsi-present"},
    is_pppmp_present{YType::boolean, "is-pppmp-present"},
    is_ssa_present{YType::boolean, "is-ssa-present"},
    is_tunnel_encap_present{YType::boolean, "is-tunnel-encap-present"},
    l2tpv3_session_id{YType::uint32, "l2tpv3-session-id"},
    local_preference{YType::uint32, "local-preference"},
    metric{YType::uint32, "metric"},
    neighbor_as{YType::uint32, "neighbor-as"},
    origin{YType::uint16, "origin"},
    originator{YType::str, "originator"},
    pmsi_flags{YType::uint8, "pmsi-flags"},
    pmsi_label{YType::uint32, "pmsi-label"},
    pmsi_type{YType::uint16, "pmsi-type"},
    ppm_pvalue{YType::uint32, "ppm-pvalue"},
    sr_policy_preference{YType::uint32, "sr-policy-preference"},
    sr_tunnel_request_state{YType::enumeration, "sr-tunnel-request-state"},
    sr_tunnel_state{YType::uint32, "sr-tunnel-state"},
    tunnel_encap_type{YType::uint16, "tunnel-encap-type"}
    	,
    sr_policy_allocated_binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::SrPolicyAllocatedBindingSid>())
	,sr_policy_binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::SrPolicyBindingSid>())
{
    sr_policy_allocated_binding_sid->parent = this;
    children["sr-policy-allocated-binding-sid"] = sr_policy_allocated_binding_sid;

    sr_policy_binding_sid->parent = this;
    children["sr-policy-binding-sid"] = sr_policy_binding_sid;

    yang_name = "attr-set"; yang_parent_name = "attributes-after-policy-in";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::~AttrSet()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::has_data() const
{
    for (std::size_t index=0; index<cluster.size(); index++)
    {
        if(cluster[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<community.size(); index++)
    {
        if(community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<connector_value.size(); index++)
    {
        if(connector_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_community.size(); index++)
    {
        if(extended_community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<l2tpv3_cookie.size(); index++)
    {
        if(l2tpv3_cookie[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<label_index_attr.size(); index++)
    {
        if(label_index_attr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ls_attr.size(); index++)
    {
        if(ls_attr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pe_distinguisher_label.size(); index++)
    {
        if(pe_distinguisher_label[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pmsi_value.size(); index++)
    {
        if(pmsi_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sr_policy_explicit_path.size(); index++)
    {
        if(sr_policy_explicit_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<unknown_attribute.size(); index++)
    {
        if(unknown_attribute[index]->has_data())
            return true;
    }
    return aggregator_address.is_set
	|| aggregator_as.is_set
	|| aigp_metric_value.is_set
	|| as_path.is_set
	|| connector_type.is_set
	|| extended_community_flags.is_set
	|| is_aggregator_present.is_set
	|| is_aigp_present.is_set
	|| is_as_path_present.is_set
	|| is_atomic_aggregate_present.is_set
	|| is_community_present.is_set
	|| is_connector_present.is_set
	|| is_extended_community_present.is_set
	|| is_label_index_present.is_set
	|| is_local_pref_present.is_set
	|| is_ls_attribute_present.is_set
	|| is_metric_present.is_set
	|| is_origin_present.is_set
	|| is_pe_distinguisher_label_present.is_set
	|| is_pmsi_present.is_set
	|| is_pppmp_present.is_set
	|| is_ssa_present.is_set
	|| is_tunnel_encap_present.is_set
	|| l2tpv3_session_id.is_set
	|| local_preference.is_set
	|| metric.is_set
	|| neighbor_as.is_set
	|| origin.is_set
	|| originator.is_set
	|| pmsi_flags.is_set
	|| pmsi_label.is_set
	|| pmsi_type.is_set
	|| ppm_pvalue.is_set
	|| sr_policy_preference.is_set
	|| sr_tunnel_request_state.is_set
	|| sr_tunnel_state.is_set
	|| tunnel_encap_type.is_set
	|| (sr_policy_allocated_binding_sid !=  nullptr && sr_policy_allocated_binding_sid->has_data())
	|| (sr_policy_binding_sid !=  nullptr && sr_policy_binding_sid->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::has_operation() const
{
    for (std::size_t index=0; index<cluster.size(); index++)
    {
        if(cluster[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<community.size(); index++)
    {
        if(community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<connector_value.size(); index++)
    {
        if(connector_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_community.size(); index++)
    {
        if(extended_community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<l2tpv3_cookie.size(); index++)
    {
        if(l2tpv3_cookie[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<label_index_attr.size(); index++)
    {
        if(label_index_attr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ls_attr.size(); index++)
    {
        if(ls_attr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pe_distinguisher_label.size(); index++)
    {
        if(pe_distinguisher_label[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pmsi_value.size(); index++)
    {
        if(pmsi_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sr_policy_explicit_path.size(); index++)
    {
        if(sr_policy_explicit_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<unknown_attribute.size(); index++)
    {
        if(unknown_attribute[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(aggregator_address.operation)
	|| is_set(aggregator_as.operation)
	|| is_set(aigp_metric_value.operation)
	|| is_set(as_path.operation)
	|| is_set(connector_type.operation)
	|| is_set(extended_community_flags.operation)
	|| is_set(is_aggregator_present.operation)
	|| is_set(is_aigp_present.operation)
	|| is_set(is_as_path_present.operation)
	|| is_set(is_atomic_aggregate_present.operation)
	|| is_set(is_community_present.operation)
	|| is_set(is_connector_present.operation)
	|| is_set(is_extended_community_present.operation)
	|| is_set(is_label_index_present.operation)
	|| is_set(is_local_pref_present.operation)
	|| is_set(is_ls_attribute_present.operation)
	|| is_set(is_metric_present.operation)
	|| is_set(is_origin_present.operation)
	|| is_set(is_pe_distinguisher_label_present.operation)
	|| is_set(is_pmsi_present.operation)
	|| is_set(is_pppmp_present.operation)
	|| is_set(is_ssa_present.operation)
	|| is_set(is_tunnel_encap_present.operation)
	|| is_set(l2tpv3_session_id.operation)
	|| is_set(local_preference.operation)
	|| is_set(metric.operation)
	|| is_set(neighbor_as.operation)
	|| is_set(origin.operation)
	|| is_set(originator.operation)
	|| is_set(pmsi_flags.operation)
	|| is_set(pmsi_label.operation)
	|| is_set(pmsi_type.operation)
	|| is_set(ppm_pvalue.operation)
	|| is_set(sr_policy_preference.operation)
	|| is_set(sr_tunnel_request_state.operation)
	|| is_set(sr_tunnel_state.operation)
	|| is_set(tunnel_encap_type.operation)
	|| (sr_policy_allocated_binding_sid !=  nullptr && sr_policy_allocated_binding_sid->has_operation())
	|| (sr_policy_binding_sid !=  nullptr && sr_policy_binding_sid->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attr-set";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttrSet' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggregator_address.is_set || is_set(aggregator_address.operation)) leaf_name_data.push_back(aggregator_address.get_name_leafdata());
    if (aggregator_as.is_set || is_set(aggregator_as.operation)) leaf_name_data.push_back(aggregator_as.get_name_leafdata());
    if (aigp_metric_value.is_set || is_set(aigp_metric_value.operation)) leaf_name_data.push_back(aigp_metric_value.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.operation)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (connector_type.is_set || is_set(connector_type.operation)) leaf_name_data.push_back(connector_type.get_name_leafdata());
    if (extended_community_flags.is_set || is_set(extended_community_flags.operation)) leaf_name_data.push_back(extended_community_flags.get_name_leafdata());
    if (is_aggregator_present.is_set || is_set(is_aggregator_present.operation)) leaf_name_data.push_back(is_aggregator_present.get_name_leafdata());
    if (is_aigp_present.is_set || is_set(is_aigp_present.operation)) leaf_name_data.push_back(is_aigp_present.get_name_leafdata());
    if (is_as_path_present.is_set || is_set(is_as_path_present.operation)) leaf_name_data.push_back(is_as_path_present.get_name_leafdata());
    if (is_atomic_aggregate_present.is_set || is_set(is_atomic_aggregate_present.operation)) leaf_name_data.push_back(is_atomic_aggregate_present.get_name_leafdata());
    if (is_community_present.is_set || is_set(is_community_present.operation)) leaf_name_data.push_back(is_community_present.get_name_leafdata());
    if (is_connector_present.is_set || is_set(is_connector_present.operation)) leaf_name_data.push_back(is_connector_present.get_name_leafdata());
    if (is_extended_community_present.is_set || is_set(is_extended_community_present.operation)) leaf_name_data.push_back(is_extended_community_present.get_name_leafdata());
    if (is_label_index_present.is_set || is_set(is_label_index_present.operation)) leaf_name_data.push_back(is_label_index_present.get_name_leafdata());
    if (is_local_pref_present.is_set || is_set(is_local_pref_present.operation)) leaf_name_data.push_back(is_local_pref_present.get_name_leafdata());
    if (is_ls_attribute_present.is_set || is_set(is_ls_attribute_present.operation)) leaf_name_data.push_back(is_ls_attribute_present.get_name_leafdata());
    if (is_metric_present.is_set || is_set(is_metric_present.operation)) leaf_name_data.push_back(is_metric_present.get_name_leafdata());
    if (is_origin_present.is_set || is_set(is_origin_present.operation)) leaf_name_data.push_back(is_origin_present.get_name_leafdata());
    if (is_pe_distinguisher_label_present.is_set || is_set(is_pe_distinguisher_label_present.operation)) leaf_name_data.push_back(is_pe_distinguisher_label_present.get_name_leafdata());
    if (is_pmsi_present.is_set || is_set(is_pmsi_present.operation)) leaf_name_data.push_back(is_pmsi_present.get_name_leafdata());
    if (is_pppmp_present.is_set || is_set(is_pppmp_present.operation)) leaf_name_data.push_back(is_pppmp_present.get_name_leafdata());
    if (is_ssa_present.is_set || is_set(is_ssa_present.operation)) leaf_name_data.push_back(is_ssa_present.get_name_leafdata());
    if (is_tunnel_encap_present.is_set || is_set(is_tunnel_encap_present.operation)) leaf_name_data.push_back(is_tunnel_encap_present.get_name_leafdata());
    if (l2tpv3_session_id.is_set || is_set(l2tpv3_session_id.operation)) leaf_name_data.push_back(l2tpv3_session_id.get_name_leafdata());
    if (local_preference.is_set || is_set(local_preference.operation)) leaf_name_data.push_back(local_preference.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (neighbor_as.is_set || is_set(neighbor_as.operation)) leaf_name_data.push_back(neighbor_as.get_name_leafdata());
    if (origin.is_set || is_set(origin.operation)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (originator.is_set || is_set(originator.operation)) leaf_name_data.push_back(originator.get_name_leafdata());
    if (pmsi_flags.is_set || is_set(pmsi_flags.operation)) leaf_name_data.push_back(pmsi_flags.get_name_leafdata());
    if (pmsi_label.is_set || is_set(pmsi_label.operation)) leaf_name_data.push_back(pmsi_label.get_name_leafdata());
    if (pmsi_type.is_set || is_set(pmsi_type.operation)) leaf_name_data.push_back(pmsi_type.get_name_leafdata());
    if (ppm_pvalue.is_set || is_set(ppm_pvalue.operation)) leaf_name_data.push_back(ppm_pvalue.get_name_leafdata());
    if (sr_policy_preference.is_set || is_set(sr_policy_preference.operation)) leaf_name_data.push_back(sr_policy_preference.get_name_leafdata());
    if (sr_tunnel_request_state.is_set || is_set(sr_tunnel_request_state.operation)) leaf_name_data.push_back(sr_tunnel_request_state.get_name_leafdata());
    if (sr_tunnel_state.is_set || is_set(sr_tunnel_state.operation)) leaf_name_data.push_back(sr_tunnel_state.get_name_leafdata());
    if (tunnel_encap_type.is_set || is_set(tunnel_encap_type.operation)) leaf_name_data.push_back(tunnel_encap_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cluster")
    {
        for(auto const & c : cluster)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::Cluster>();
        c->parent = this;
        cluster.push_back(std::move(c));
        children[segment_path] = cluster.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "community")
    {
        for(auto const & c : community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::Community>();
        c->parent = this;
        community.push_back(std::move(c));
        children[segment_path] = community.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "connector-value")
    {
        for(auto const & c : connector_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::ConnectorValue>();
        c->parent = this;
        connector_value.push_back(std::move(c));
        children[segment_path] = connector_value.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "extended-community")
    {
        for(auto const & c : extended_community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity>();
        c->parent = this;
        extended_community.push_back(std::move(c));
        children[segment_path] = extended_community.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "l2tpv3-cookie")
    {
        for(auto const & c : l2tpv3_cookie)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie>();
        c->parent = this;
        l2tpv3_cookie.push_back(std::move(c));
        children[segment_path] = l2tpv3_cookie.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "label-index-attr")
    {
        for(auto const & c : label_index_attr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr>();
        c->parent = this;
        label_index_attr.push_back(std::move(c));
        children[segment_path] = label_index_attr.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "ls-attr")
    {
        for(auto const & c : ls_attr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::LsAttr>();
        c->parent = this;
        ls_attr.push_back(std::move(c));
        children[segment_path] = ls_attr.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "pe-distinguisher-label")
    {
        for(auto const & c : pe_distinguisher_label)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel>();
        c->parent = this;
        pe_distinguisher_label.push_back(std::move(c));
        children[segment_path] = pe_distinguisher_label.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "pmsi-value")
    {
        for(auto const & c : pmsi_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::PmsiValue>();
        c->parent = this;
        pmsi_value.push_back(std::move(c));
        children[segment_path] = pmsi_value.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "sr-policy-allocated-binding-sid")
    {
        if(sr_policy_allocated_binding_sid != nullptr)
        {
            children["sr-policy-allocated-binding-sid"] = sr_policy_allocated_binding_sid;
        }
        else
        {
            sr_policy_allocated_binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::SrPolicyAllocatedBindingSid>();
            sr_policy_allocated_binding_sid->parent = this;
            children["sr-policy-allocated-binding-sid"] = sr_policy_allocated_binding_sid;
        }
        return children.at("sr-policy-allocated-binding-sid");
    }

    if(child_yang_name == "sr-policy-binding-sid")
    {
        if(sr_policy_binding_sid != nullptr)
        {
            children["sr-policy-binding-sid"] = sr_policy_binding_sid;
        }
        else
        {
            sr_policy_binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::SrPolicyBindingSid>();
            sr_policy_binding_sid->parent = this;
            children["sr-policy-binding-sid"] = sr_policy_binding_sid;
        }
        return children.at("sr-policy-binding-sid");
    }

    if(child_yang_name == "sr-policy-explicit-path")
    {
        for(auto const & c : sr_policy_explicit_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath>();
        c->parent = this;
        sr_policy_explicit_path.push_back(std::move(c));
        children[segment_path] = sr_policy_explicit_path.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "unknown-attribute")
    {
        for(auto const & c : unknown_attribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::UnknownAttribute>();
        c->parent = this;
        unknown_attribute.push_back(std::move(c));
        children[segment_path] = unknown_attribute.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::get_children()
{
    for (auto const & c : cluster)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : community)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : connector_value)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : extended_community)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : l2tpv3_cookie)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : label_index_attr)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : ls_attr)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : pe_distinguisher_label)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : pmsi_value)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("sr-policy-allocated-binding-sid") == children.end())
    {
        if(sr_policy_allocated_binding_sid != nullptr)
        {
            children["sr-policy-allocated-binding-sid"] = sr_policy_allocated_binding_sid;
        }
    }

    if(children.find("sr-policy-binding-sid") == children.end())
    {
        if(sr_policy_binding_sid != nullptr)
        {
            children["sr-policy-binding-sid"] = sr_policy_binding_sid;
        }
    }

    for (auto const & c : sr_policy_explicit_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : unknown_attribute)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aggregator-address")
    {
        aggregator_address = value;
    }
    if(value_path == "aggregator-as")
    {
        aggregator_as = value;
    }
    if(value_path == "aigp-metric-value")
    {
        aigp_metric_value = value;
    }
    if(value_path == "as-path")
    {
        as_path = value;
    }
    if(value_path == "connector-type")
    {
        connector_type = value;
    }
    if(value_path == "extended-community-flags")
    {
        extended_community_flags = value;
    }
    if(value_path == "is-aggregator-present")
    {
        is_aggregator_present = value;
    }
    if(value_path == "is-aigp-present")
    {
        is_aigp_present = value;
    }
    if(value_path == "is-as-path-present")
    {
        is_as_path_present = value;
    }
    if(value_path == "is-atomic-aggregate-present")
    {
        is_atomic_aggregate_present = value;
    }
    if(value_path == "is-community-present")
    {
        is_community_present = value;
    }
    if(value_path == "is-connector-present")
    {
        is_connector_present = value;
    }
    if(value_path == "is-extended-community-present")
    {
        is_extended_community_present = value;
    }
    if(value_path == "is-label-index-present")
    {
        is_label_index_present = value;
    }
    if(value_path == "is-local-pref-present")
    {
        is_local_pref_present = value;
    }
    if(value_path == "is-ls-attribute-present")
    {
        is_ls_attribute_present = value;
    }
    if(value_path == "is-metric-present")
    {
        is_metric_present = value;
    }
    if(value_path == "is-origin-present")
    {
        is_origin_present = value;
    }
    if(value_path == "is-pe-distinguisher-label-present")
    {
        is_pe_distinguisher_label_present = value;
    }
    if(value_path == "is-pmsi-present")
    {
        is_pmsi_present = value;
    }
    if(value_path == "is-pppmp-present")
    {
        is_pppmp_present = value;
    }
    if(value_path == "is-ssa-present")
    {
        is_ssa_present = value;
    }
    if(value_path == "is-tunnel-encap-present")
    {
        is_tunnel_encap_present = value;
    }
    if(value_path == "l2tpv3-session-id")
    {
        l2tpv3_session_id = value;
    }
    if(value_path == "local-preference")
    {
        local_preference = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "neighbor-as")
    {
        neighbor_as = value;
    }
    if(value_path == "origin")
    {
        origin = value;
    }
    if(value_path == "originator")
    {
        originator = value;
    }
    if(value_path == "pmsi-flags")
    {
        pmsi_flags = value;
    }
    if(value_path == "pmsi-label")
    {
        pmsi_label = value;
    }
    if(value_path == "pmsi-type")
    {
        pmsi_type = value;
    }
    if(value_path == "ppm-pvalue")
    {
        ppm_pvalue = value;
    }
    if(value_path == "sr-policy-preference")
    {
        sr_policy_preference = value;
    }
    if(value_path == "sr-tunnel-request-state")
    {
        sr_tunnel_request_state = value;
    }
    if(value_path == "sr-tunnel-state")
    {
        sr_tunnel_state = value;
    }
    if(value_path == "tunnel-encap-type")
    {
        tunnel_encap_type = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::SrPolicyBindingSid::SrPolicyBindingSid()
    :
    ipv6_address{YType::str, "ipv6-address"},
    label{YType::uint32, "label"},
    type{YType::enumeration, "type"}
{
    yang_name = "sr-policy-binding-sid"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::SrPolicyBindingSid::~SrPolicyBindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::SrPolicyBindingSid::has_data() const
{
    return ipv6_address.is_set
	|| label.is_set
	|| type.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::SrPolicyBindingSid::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_address.operation)
	|| is_set(label.operation)
	|| is_set(type.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::SrPolicyBindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy-binding-sid";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::SrPolicyBindingSid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrPolicyBindingSid' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::SrPolicyBindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::SrPolicyBindingSid::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::SrPolicyBindingSid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::SrPolicyAllocatedBindingSid::SrPolicyAllocatedBindingSid()
    :
    ipv6_address{YType::str, "ipv6-address"},
    label{YType::uint32, "label"},
    type{YType::enumeration, "type"}
{
    yang_name = "sr-policy-allocated-binding-sid"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::SrPolicyAllocatedBindingSid::~SrPolicyAllocatedBindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::SrPolicyAllocatedBindingSid::has_data() const
{
    return ipv6_address.is_set
	|| label.is_set
	|| type.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::SrPolicyAllocatedBindingSid::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_address.operation)
	|| is_set(label.operation)
	|| is_set(type.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::SrPolicyAllocatedBindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy-allocated-binding-sid";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::SrPolicyAllocatedBindingSid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrPolicyAllocatedBindingSid' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::SrPolicyAllocatedBindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::SrPolicyAllocatedBindingSid::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::SrPolicyAllocatedBindingSid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::Community::Community()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "community"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::Community::~Community()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::Community::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::Community::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::Community::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Community' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::Community::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::Community::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::ExtendedCommunity()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "extended-community"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::~ExtendedCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExtendedCommunity' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::UnknownAttribute()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "unknown-attribute"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::~UnknownAttribute()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attribute";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnknownAttribute' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::Cluster::Cluster()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "cluster"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::Cluster::~Cluster()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::Cluster::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::Cluster::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::Cluster::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cluster";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::Cluster::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cluster' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::Cluster::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::Cluster::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::Cluster::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie::L2Tpv3Cookie()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "l2tpv3-cookie"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie::~L2Tpv3Cookie()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3-cookie";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2Tpv3Cookie' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::ConnectorValue::ConnectorValue()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "connector-value"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::ConnectorValue::~ConnectorValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::ConnectorValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::ConnectorValue::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::ConnectorValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connector-value";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::ConnectorValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConnectorValue' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::ConnectorValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::ConnectorValue::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::ConnectorValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::PmsiValue::PmsiValue()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "pmsi-value"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::PmsiValue::~PmsiValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::PmsiValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::PmsiValue::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::PmsiValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-value";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::PmsiValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PmsiValue' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::PmsiValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::PmsiValue::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::PmsiValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::LsAttr::LsAttr()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "ls-attr"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::LsAttr::~LsAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::LsAttr::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::LsAttr::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::LsAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ls-attr";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::LsAttr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsAttr' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::LsAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::LsAttr::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::LsAttr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr::LabelIndexAttr()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "label-index-attr"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr::~LabelIndexAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-index-attr";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabelIndexAttr' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::PeDistinguisherLabel()
    :
    label{YType::uint32, "label"},
    pe_address{YType::str, "pe-address"}
{
    yang_name = "pe-distinguisher-label"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::~PeDistinguisherLabel()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::has_data() const
{
    return label.is_set
	|| pe_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(label.operation)
	|| is_set(pe_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-distinguisher-label";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeDistinguisherLabel' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (pe_address.is_set || is_set(pe_address.operation)) leaf_name_data.push_back(pe_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "pe-address")
    {
        pe_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath::SrPolicyExplicitPath()
    :
    weight{YType::uint8, "weight"}
{
    yang_name = "sr-policy-explicit-path"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath::~SrPolicyExplicitPath()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath::has_data() const
{
    for (std::size_t index=0; index<sid.size(); index++)
    {
        if(sid[index]->has_data())
            return true;
    }
    return weight.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath::has_operation() const
{
    for (std::size_t index=0; index<sid.size(); index++)
    {
        if(sid[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(weight.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy-explicit-path";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrPolicyExplicitPath' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sid")
    {
        for(auto const & c : sid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath::Sid>();
        c->parent = this;
        sid.push_back(std::move(c));
        children[segment_path] = sid.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath::get_children()
{
    for (auto const & c : sid)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "weight")
    {
        weight = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath::Sid::Sid()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"},
    label{YType::uint32, "label"},
    type{YType::uint8, "type"}
{
    yang_name = "sid"; yang_parent_name = "sr-policy-explicit-path";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath::Sid::~Sid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath::Sid::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set
	|| label.is_set
	|| type.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath::Sid::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation)
	|| is_set(label.operation)
	|| is_set(type.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath::Sid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath::Sid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sid' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath::Sid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath::Sid::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath::Sid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RnhAddr::RnhAddr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    len{YType::enumeration, "len"},
    mac_address{YType::str, "mac-address"}
{
    yang_name = "rnh-addr"; yang_parent_name = "attributes-after-policy-in";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RnhAddr::~RnhAddr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RnhAddr::has_data() const
{
    return ipv4_address.is_set
	|| ipv6_address.is_set
	|| len.is_set
	|| mac_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RnhAddr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(len.operation)
	|| is_set(mac_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RnhAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rnh-addr";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RnhAddr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RnhAddr' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (len.is_set || is_set(len.operation)) leaf_name_data.push_back(len.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RnhAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RnhAddr::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RnhAddr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "len")
    {
        len = value;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::RibrnhIp()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;
    children["ipv4sr-policy-address"] = ipv4sr_policy_address;

    ipv6sr_policy_address->parent = this;
    children["ipv6sr-policy-address"] = ipv6sr_policy_address;

    l2vpn_mspw_address->parent = this;
    children["l2vpn-mspw-address"] = l2vpn_mspw_address;

    l2vpnvpls_address->parent = this;
    children["l2vpnvpls-address"] = l2vpnvpls_address;

    yang_name = "ribrnh-ip"; yang_parent_name = "attributes-after-policy-in";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::~RibrnhIp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ribrnh-ip";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RibrnhIp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        else
        {
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress>();
            ipv4sr_policy_address->parent = this;
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        return children.at("ipv4sr-policy-address");
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        else
        {
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress>();
            ipv6sr_policy_address->parent = this;
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        return children.at("ipv6sr-policy-address");
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        else
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress>();
            l2vpn_mspw_address->parent = this;
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        return children.at("l2vpn-mspw-address");
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        else
        {
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::get_children()
{
    if(children.find("ipv4sr-policy-address") == children.end())
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
    }

    if(children.find("ipv6sr-policy-address") == children.end())
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
    }

    if(children.find("l2vpn-mspw-address") == children.end())
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
    }

    if(children.find("l2vpnvpls-address") == children.end())
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "ribrnh-ip";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "ribrnh-ip";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "ribrnh-ip";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "ribrnh-ip";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttributesAfterPolicyOut()
    :
    attribute_key_number{YType::uint32, "attribute-key-number"},
    attribute_reuse_id_config{YType::boolean, "attribute-reuse-id-config"},
    attribute_reuse_id_current{YType::uint32, "attribute-reuse-id-current"},
    attribute_reuse_id_keys{YType::uint32, "attribute-reuse-id-keys"},
    attribute_reuse_id_max_id{YType::uint32, "attribute-reuse-id-max-id"},
    attribute_reuse_id_node{YType::uint32, "attribute-reuse-id-node"},
    attribute_reuse_id_recover_sec{YType::uint32, "attribute-reuse-id-recover-sec"},
    is_application_gateway_present{YType::boolean, "is-application-gateway-present"},
    is_as_path2_byte{YType::boolean, "is-as-path2-byte"},
    is_attr_set_present{YType::boolean, "is-attr-set-present"},
    is_ribrnh_present{YType::boolean, "is-ribrnh-present"},
    is_rnh_present{YType::boolean, "is-rnh-present"},
    ribrnh_encap{YType::uint8, "ribrnh-encap"},
    ribrnh_mac{YType::str, "ribrnh-mac"},
    ribrnh_table{YType::uint32, "ribrnh-table"},
    ribrnh_vni{YType::uint32, "ribrnh-vni"},
    ribrnhip_table{YType::uint32, "ribrnhip-table"},
    rnh_addr_len{YType::uint32, "rnh-addr-len"},
    rnh_len{YType::uint8, "rnh-len"},
    rnh_type{YType::uint16, "rnh-type"},
    set_aigp_inbound_igp{YType::boolean, "set-aigp-inbound-igp"},
    set_aigp_inbound_metric{YType::boolean, "set-aigp-inbound-metric"},
    vpn_distinguisher{YType::uint32, "vpn-distinguisher"}
    	,
    attr_set(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet>())
	,common_attributes(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes>())
	,ribrnh_ip(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp>())
	,rnh_addr(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RnhAddr>())
{
    attr_set->parent = this;
    children["attr-set"] = attr_set;

    common_attributes->parent = this;
    children["common-attributes"] = common_attributes;

    ribrnh_ip->parent = this;
    children["ribrnh-ip"] = ribrnh_ip;

    rnh_addr->parent = this;
    children["rnh-addr"] = rnh_addr;

    yang_name = "attributes-after-policy-out"; yang_parent_name = "adv-path-info";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::~AttributesAfterPolicyOut()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::has_data() const
{
    return attribute_key_number.is_set
	|| attribute_reuse_id_config.is_set
	|| attribute_reuse_id_current.is_set
	|| attribute_reuse_id_keys.is_set
	|| attribute_reuse_id_max_id.is_set
	|| attribute_reuse_id_node.is_set
	|| attribute_reuse_id_recover_sec.is_set
	|| is_application_gateway_present.is_set
	|| is_as_path2_byte.is_set
	|| is_attr_set_present.is_set
	|| is_ribrnh_present.is_set
	|| is_rnh_present.is_set
	|| ribrnh_encap.is_set
	|| ribrnh_mac.is_set
	|| ribrnh_table.is_set
	|| ribrnh_vni.is_set
	|| ribrnhip_table.is_set
	|| rnh_addr_len.is_set
	|| rnh_len.is_set
	|| rnh_type.is_set
	|| set_aigp_inbound_igp.is_set
	|| set_aigp_inbound_metric.is_set
	|| vpn_distinguisher.is_set
	|| (attr_set !=  nullptr && attr_set->has_data())
	|| (common_attributes !=  nullptr && common_attributes->has_data())
	|| (ribrnh_ip !=  nullptr && ribrnh_ip->has_data())
	|| (rnh_addr !=  nullptr && rnh_addr->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::has_operation() const
{
    return is_set(operation)
	|| is_set(attribute_key_number.operation)
	|| is_set(attribute_reuse_id_config.operation)
	|| is_set(attribute_reuse_id_current.operation)
	|| is_set(attribute_reuse_id_keys.operation)
	|| is_set(attribute_reuse_id_max_id.operation)
	|| is_set(attribute_reuse_id_node.operation)
	|| is_set(attribute_reuse_id_recover_sec.operation)
	|| is_set(is_application_gateway_present.operation)
	|| is_set(is_as_path2_byte.operation)
	|| is_set(is_attr_set_present.operation)
	|| is_set(is_ribrnh_present.operation)
	|| is_set(is_rnh_present.operation)
	|| is_set(ribrnh_encap.operation)
	|| is_set(ribrnh_mac.operation)
	|| is_set(ribrnh_table.operation)
	|| is_set(ribrnh_vni.operation)
	|| is_set(ribrnhip_table.operation)
	|| is_set(rnh_addr_len.operation)
	|| is_set(rnh_len.operation)
	|| is_set(rnh_type.operation)
	|| is_set(set_aigp_inbound_igp.operation)
	|| is_set(set_aigp_inbound_metric.operation)
	|| is_set(vpn_distinguisher.operation)
	|| (attr_set !=  nullptr && attr_set->has_operation())
	|| (common_attributes !=  nullptr && common_attributes->has_operation())
	|| (ribrnh_ip !=  nullptr && ribrnh_ip->has_operation())
	|| (rnh_addr !=  nullptr && rnh_addr->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes-after-policy-out";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributesAfterPolicyOut' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_key_number.is_set || is_set(attribute_key_number.operation)) leaf_name_data.push_back(attribute_key_number.get_name_leafdata());
    if (attribute_reuse_id_config.is_set || is_set(attribute_reuse_id_config.operation)) leaf_name_data.push_back(attribute_reuse_id_config.get_name_leafdata());
    if (attribute_reuse_id_current.is_set || is_set(attribute_reuse_id_current.operation)) leaf_name_data.push_back(attribute_reuse_id_current.get_name_leafdata());
    if (attribute_reuse_id_keys.is_set || is_set(attribute_reuse_id_keys.operation)) leaf_name_data.push_back(attribute_reuse_id_keys.get_name_leafdata());
    if (attribute_reuse_id_max_id.is_set || is_set(attribute_reuse_id_max_id.operation)) leaf_name_data.push_back(attribute_reuse_id_max_id.get_name_leafdata());
    if (attribute_reuse_id_node.is_set || is_set(attribute_reuse_id_node.operation)) leaf_name_data.push_back(attribute_reuse_id_node.get_name_leafdata());
    if (attribute_reuse_id_recover_sec.is_set || is_set(attribute_reuse_id_recover_sec.operation)) leaf_name_data.push_back(attribute_reuse_id_recover_sec.get_name_leafdata());
    if (is_application_gateway_present.is_set || is_set(is_application_gateway_present.operation)) leaf_name_data.push_back(is_application_gateway_present.get_name_leafdata());
    if (is_as_path2_byte.is_set || is_set(is_as_path2_byte.operation)) leaf_name_data.push_back(is_as_path2_byte.get_name_leafdata());
    if (is_attr_set_present.is_set || is_set(is_attr_set_present.operation)) leaf_name_data.push_back(is_attr_set_present.get_name_leafdata());
    if (is_ribrnh_present.is_set || is_set(is_ribrnh_present.operation)) leaf_name_data.push_back(is_ribrnh_present.get_name_leafdata());
    if (is_rnh_present.is_set || is_set(is_rnh_present.operation)) leaf_name_data.push_back(is_rnh_present.get_name_leafdata());
    if (ribrnh_encap.is_set || is_set(ribrnh_encap.operation)) leaf_name_data.push_back(ribrnh_encap.get_name_leafdata());
    if (ribrnh_mac.is_set || is_set(ribrnh_mac.operation)) leaf_name_data.push_back(ribrnh_mac.get_name_leafdata());
    if (ribrnh_table.is_set || is_set(ribrnh_table.operation)) leaf_name_data.push_back(ribrnh_table.get_name_leafdata());
    if (ribrnh_vni.is_set || is_set(ribrnh_vni.operation)) leaf_name_data.push_back(ribrnh_vni.get_name_leafdata());
    if (ribrnhip_table.is_set || is_set(ribrnhip_table.operation)) leaf_name_data.push_back(ribrnhip_table.get_name_leafdata());
    if (rnh_addr_len.is_set || is_set(rnh_addr_len.operation)) leaf_name_data.push_back(rnh_addr_len.get_name_leafdata());
    if (rnh_len.is_set || is_set(rnh_len.operation)) leaf_name_data.push_back(rnh_len.get_name_leafdata());
    if (rnh_type.is_set || is_set(rnh_type.operation)) leaf_name_data.push_back(rnh_type.get_name_leafdata());
    if (set_aigp_inbound_igp.is_set || is_set(set_aigp_inbound_igp.operation)) leaf_name_data.push_back(set_aigp_inbound_igp.get_name_leafdata());
    if (set_aigp_inbound_metric.is_set || is_set(set_aigp_inbound_metric.operation)) leaf_name_data.push_back(set_aigp_inbound_metric.get_name_leafdata());
    if (vpn_distinguisher.is_set || is_set(vpn_distinguisher.operation)) leaf_name_data.push_back(vpn_distinguisher.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "attr-set")
    {
        if(attr_set != nullptr)
        {
            children["attr-set"] = attr_set;
        }
        else
        {
            attr_set = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet>();
            attr_set->parent = this;
            children["attr-set"] = attr_set;
        }
        return children.at("attr-set");
    }

    if(child_yang_name == "common-attributes")
    {
        if(common_attributes != nullptr)
        {
            children["common-attributes"] = common_attributes;
        }
        else
        {
            common_attributes = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes>();
            common_attributes->parent = this;
            children["common-attributes"] = common_attributes;
        }
        return children.at("common-attributes");
    }

    if(child_yang_name == "ribrnh-ip")
    {
        if(ribrnh_ip != nullptr)
        {
            children["ribrnh-ip"] = ribrnh_ip;
        }
        else
        {
            ribrnh_ip = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp>();
            ribrnh_ip->parent = this;
            children["ribrnh-ip"] = ribrnh_ip;
        }
        return children.at("ribrnh-ip");
    }

    if(child_yang_name == "rnh-addr")
    {
        if(rnh_addr != nullptr)
        {
            children["rnh-addr"] = rnh_addr;
        }
        else
        {
            rnh_addr = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RnhAddr>();
            rnh_addr->parent = this;
            children["rnh-addr"] = rnh_addr;
        }
        return children.at("rnh-addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::get_children()
{
    if(children.find("attr-set") == children.end())
    {
        if(attr_set != nullptr)
        {
            children["attr-set"] = attr_set;
        }
    }

    if(children.find("common-attributes") == children.end())
    {
        if(common_attributes != nullptr)
        {
            children["common-attributes"] = common_attributes;
        }
    }

    if(children.find("ribrnh-ip") == children.end())
    {
        if(ribrnh_ip != nullptr)
        {
            children["ribrnh-ip"] = ribrnh_ip;
        }
    }

    if(children.find("rnh-addr") == children.end())
    {
        if(rnh_addr != nullptr)
        {
            children["rnh-addr"] = rnh_addr;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attribute-key-number")
    {
        attribute_key_number = value;
    }
    if(value_path == "attribute-reuse-id-config")
    {
        attribute_reuse_id_config = value;
    }
    if(value_path == "attribute-reuse-id-current")
    {
        attribute_reuse_id_current = value;
    }
    if(value_path == "attribute-reuse-id-keys")
    {
        attribute_reuse_id_keys = value;
    }
    if(value_path == "attribute-reuse-id-max-id")
    {
        attribute_reuse_id_max_id = value;
    }
    if(value_path == "attribute-reuse-id-node")
    {
        attribute_reuse_id_node = value;
    }
    if(value_path == "attribute-reuse-id-recover-sec")
    {
        attribute_reuse_id_recover_sec = value;
    }
    if(value_path == "is-application-gateway-present")
    {
        is_application_gateway_present = value;
    }
    if(value_path == "is-as-path2-byte")
    {
        is_as_path2_byte = value;
    }
    if(value_path == "is-attr-set-present")
    {
        is_attr_set_present = value;
    }
    if(value_path == "is-ribrnh-present")
    {
        is_ribrnh_present = value;
    }
    if(value_path == "is-rnh-present")
    {
        is_rnh_present = value;
    }
    if(value_path == "ribrnh-encap")
    {
        ribrnh_encap = value;
    }
    if(value_path == "ribrnh-mac")
    {
        ribrnh_mac = value;
    }
    if(value_path == "ribrnh-table")
    {
        ribrnh_table = value;
    }
    if(value_path == "ribrnh-vni")
    {
        ribrnh_vni = value;
    }
    if(value_path == "ribrnhip-table")
    {
        ribrnhip_table = value;
    }
    if(value_path == "rnh-addr-len")
    {
        rnh_addr_len = value;
    }
    if(value_path == "rnh-len")
    {
        rnh_len = value;
    }
    if(value_path == "rnh-type")
    {
        rnh_type = value;
    }
    if(value_path == "set-aigp-inbound-igp")
    {
        set_aigp_inbound_igp = value;
    }
    if(value_path == "set-aigp-inbound-metric")
    {
        set_aigp_inbound_metric = value;
    }
    if(value_path == "vpn-distinguisher")
    {
        vpn_distinguisher = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::CommonAttributes()
    :
    aggregator_address{YType::str, "aggregator-address"},
    aggregator_as{YType::uint32, "aggregator-as"},
    aigp_metric_value{YType::uint64, "aigp-metric-value"},
    as_path{YType::str, "as-path"},
    connector_type{YType::uint16, "connector-type"},
    extended_community_flags{YType::uint8, "extended-community-flags"},
    is_aggregator_present{YType::boolean, "is-aggregator-present"},
    is_aigp_present{YType::boolean, "is-aigp-present"},
    is_as_path_present{YType::boolean, "is-as-path-present"},
    is_atomic_aggregate_present{YType::boolean, "is-atomic-aggregate-present"},
    is_community_present{YType::boolean, "is-community-present"},
    is_connector_present{YType::boolean, "is-connector-present"},
    is_extended_community_present{YType::boolean, "is-extended-community-present"},
    is_label_index_present{YType::boolean, "is-label-index-present"},
    is_local_pref_present{YType::boolean, "is-local-pref-present"},
    is_ls_attribute_present{YType::boolean, "is-ls-attribute-present"},
    is_metric_present{YType::boolean, "is-metric-present"},
    is_origin_present{YType::boolean, "is-origin-present"},
    is_pe_distinguisher_label_present{YType::boolean, "is-pe-distinguisher-label-present"},
    is_pmsi_present{YType::boolean, "is-pmsi-present"},
    is_pppmp_present{YType::boolean, "is-pppmp-present"},
    is_ssa_present{YType::boolean, "is-ssa-present"},
    is_tunnel_encap_present{YType::boolean, "is-tunnel-encap-present"},
    l2tpv3_session_id{YType::uint32, "l2tpv3-session-id"},
    local_preference{YType::uint32, "local-preference"},
    metric{YType::uint32, "metric"},
    neighbor_as{YType::uint32, "neighbor-as"},
    origin{YType::uint16, "origin"},
    originator{YType::str, "originator"},
    pmsi_flags{YType::uint8, "pmsi-flags"},
    pmsi_label{YType::uint32, "pmsi-label"},
    pmsi_type{YType::uint16, "pmsi-type"},
    ppm_pvalue{YType::uint32, "ppm-pvalue"},
    sr_policy_preference{YType::uint32, "sr-policy-preference"},
    sr_tunnel_request_state{YType::enumeration, "sr-tunnel-request-state"},
    sr_tunnel_state{YType::uint32, "sr-tunnel-state"},
    tunnel_encap_type{YType::uint16, "tunnel-encap-type"}
    	,
    sr_policy_allocated_binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::SrPolicyAllocatedBindingSid>())
	,sr_policy_binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::SrPolicyBindingSid>())
{
    sr_policy_allocated_binding_sid->parent = this;
    children["sr-policy-allocated-binding-sid"] = sr_policy_allocated_binding_sid;

    sr_policy_binding_sid->parent = this;
    children["sr-policy-binding-sid"] = sr_policy_binding_sid;

    yang_name = "common-attributes"; yang_parent_name = "attributes-after-policy-out";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::~CommonAttributes()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::has_data() const
{
    for (std::size_t index=0; index<cluster.size(); index++)
    {
        if(cluster[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<community.size(); index++)
    {
        if(community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<connector_value.size(); index++)
    {
        if(connector_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_community.size(); index++)
    {
        if(extended_community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<l2tpv3_cookie.size(); index++)
    {
        if(l2tpv3_cookie[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<label_index_attr.size(); index++)
    {
        if(label_index_attr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ls_attr.size(); index++)
    {
        if(ls_attr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pe_distinguisher_label.size(); index++)
    {
        if(pe_distinguisher_label[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pmsi_value.size(); index++)
    {
        if(pmsi_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sr_policy_explicit_path.size(); index++)
    {
        if(sr_policy_explicit_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<unknown_attribute.size(); index++)
    {
        if(unknown_attribute[index]->has_data())
            return true;
    }
    return aggregator_address.is_set
	|| aggregator_as.is_set
	|| aigp_metric_value.is_set
	|| as_path.is_set
	|| connector_type.is_set
	|| extended_community_flags.is_set
	|| is_aggregator_present.is_set
	|| is_aigp_present.is_set
	|| is_as_path_present.is_set
	|| is_atomic_aggregate_present.is_set
	|| is_community_present.is_set
	|| is_connector_present.is_set
	|| is_extended_community_present.is_set
	|| is_label_index_present.is_set
	|| is_local_pref_present.is_set
	|| is_ls_attribute_present.is_set
	|| is_metric_present.is_set
	|| is_origin_present.is_set
	|| is_pe_distinguisher_label_present.is_set
	|| is_pmsi_present.is_set
	|| is_pppmp_present.is_set
	|| is_ssa_present.is_set
	|| is_tunnel_encap_present.is_set
	|| l2tpv3_session_id.is_set
	|| local_preference.is_set
	|| metric.is_set
	|| neighbor_as.is_set
	|| origin.is_set
	|| originator.is_set
	|| pmsi_flags.is_set
	|| pmsi_label.is_set
	|| pmsi_type.is_set
	|| ppm_pvalue.is_set
	|| sr_policy_preference.is_set
	|| sr_tunnel_request_state.is_set
	|| sr_tunnel_state.is_set
	|| tunnel_encap_type.is_set
	|| (sr_policy_allocated_binding_sid !=  nullptr && sr_policy_allocated_binding_sid->has_data())
	|| (sr_policy_binding_sid !=  nullptr && sr_policy_binding_sid->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::has_operation() const
{
    for (std::size_t index=0; index<cluster.size(); index++)
    {
        if(cluster[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<community.size(); index++)
    {
        if(community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<connector_value.size(); index++)
    {
        if(connector_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_community.size(); index++)
    {
        if(extended_community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<l2tpv3_cookie.size(); index++)
    {
        if(l2tpv3_cookie[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<label_index_attr.size(); index++)
    {
        if(label_index_attr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ls_attr.size(); index++)
    {
        if(ls_attr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pe_distinguisher_label.size(); index++)
    {
        if(pe_distinguisher_label[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pmsi_value.size(); index++)
    {
        if(pmsi_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sr_policy_explicit_path.size(); index++)
    {
        if(sr_policy_explicit_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<unknown_attribute.size(); index++)
    {
        if(unknown_attribute[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(aggregator_address.operation)
	|| is_set(aggregator_as.operation)
	|| is_set(aigp_metric_value.operation)
	|| is_set(as_path.operation)
	|| is_set(connector_type.operation)
	|| is_set(extended_community_flags.operation)
	|| is_set(is_aggregator_present.operation)
	|| is_set(is_aigp_present.operation)
	|| is_set(is_as_path_present.operation)
	|| is_set(is_atomic_aggregate_present.operation)
	|| is_set(is_community_present.operation)
	|| is_set(is_connector_present.operation)
	|| is_set(is_extended_community_present.operation)
	|| is_set(is_label_index_present.operation)
	|| is_set(is_local_pref_present.operation)
	|| is_set(is_ls_attribute_present.operation)
	|| is_set(is_metric_present.operation)
	|| is_set(is_origin_present.operation)
	|| is_set(is_pe_distinguisher_label_present.operation)
	|| is_set(is_pmsi_present.operation)
	|| is_set(is_pppmp_present.operation)
	|| is_set(is_ssa_present.operation)
	|| is_set(is_tunnel_encap_present.operation)
	|| is_set(l2tpv3_session_id.operation)
	|| is_set(local_preference.operation)
	|| is_set(metric.operation)
	|| is_set(neighbor_as.operation)
	|| is_set(origin.operation)
	|| is_set(originator.operation)
	|| is_set(pmsi_flags.operation)
	|| is_set(pmsi_label.operation)
	|| is_set(pmsi_type.operation)
	|| is_set(ppm_pvalue.operation)
	|| is_set(sr_policy_preference.operation)
	|| is_set(sr_tunnel_request_state.operation)
	|| is_set(sr_tunnel_state.operation)
	|| is_set(tunnel_encap_type.operation)
	|| (sr_policy_allocated_binding_sid !=  nullptr && sr_policy_allocated_binding_sid->has_operation())
	|| (sr_policy_binding_sid !=  nullptr && sr_policy_binding_sid->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-attributes";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CommonAttributes' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggregator_address.is_set || is_set(aggregator_address.operation)) leaf_name_data.push_back(aggregator_address.get_name_leafdata());
    if (aggregator_as.is_set || is_set(aggregator_as.operation)) leaf_name_data.push_back(aggregator_as.get_name_leafdata());
    if (aigp_metric_value.is_set || is_set(aigp_metric_value.operation)) leaf_name_data.push_back(aigp_metric_value.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.operation)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (connector_type.is_set || is_set(connector_type.operation)) leaf_name_data.push_back(connector_type.get_name_leafdata());
    if (extended_community_flags.is_set || is_set(extended_community_flags.operation)) leaf_name_data.push_back(extended_community_flags.get_name_leafdata());
    if (is_aggregator_present.is_set || is_set(is_aggregator_present.operation)) leaf_name_data.push_back(is_aggregator_present.get_name_leafdata());
    if (is_aigp_present.is_set || is_set(is_aigp_present.operation)) leaf_name_data.push_back(is_aigp_present.get_name_leafdata());
    if (is_as_path_present.is_set || is_set(is_as_path_present.operation)) leaf_name_data.push_back(is_as_path_present.get_name_leafdata());
    if (is_atomic_aggregate_present.is_set || is_set(is_atomic_aggregate_present.operation)) leaf_name_data.push_back(is_atomic_aggregate_present.get_name_leafdata());
    if (is_community_present.is_set || is_set(is_community_present.operation)) leaf_name_data.push_back(is_community_present.get_name_leafdata());
    if (is_connector_present.is_set || is_set(is_connector_present.operation)) leaf_name_data.push_back(is_connector_present.get_name_leafdata());
    if (is_extended_community_present.is_set || is_set(is_extended_community_present.operation)) leaf_name_data.push_back(is_extended_community_present.get_name_leafdata());
    if (is_label_index_present.is_set || is_set(is_label_index_present.operation)) leaf_name_data.push_back(is_label_index_present.get_name_leafdata());
    if (is_local_pref_present.is_set || is_set(is_local_pref_present.operation)) leaf_name_data.push_back(is_local_pref_present.get_name_leafdata());
    if (is_ls_attribute_present.is_set || is_set(is_ls_attribute_present.operation)) leaf_name_data.push_back(is_ls_attribute_present.get_name_leafdata());
    if (is_metric_present.is_set || is_set(is_metric_present.operation)) leaf_name_data.push_back(is_metric_present.get_name_leafdata());
    if (is_origin_present.is_set || is_set(is_origin_present.operation)) leaf_name_data.push_back(is_origin_present.get_name_leafdata());
    if (is_pe_distinguisher_label_present.is_set || is_set(is_pe_distinguisher_label_present.operation)) leaf_name_data.push_back(is_pe_distinguisher_label_present.get_name_leafdata());
    if (is_pmsi_present.is_set || is_set(is_pmsi_present.operation)) leaf_name_data.push_back(is_pmsi_present.get_name_leafdata());
    if (is_pppmp_present.is_set || is_set(is_pppmp_present.operation)) leaf_name_data.push_back(is_pppmp_present.get_name_leafdata());
    if (is_ssa_present.is_set || is_set(is_ssa_present.operation)) leaf_name_data.push_back(is_ssa_present.get_name_leafdata());
    if (is_tunnel_encap_present.is_set || is_set(is_tunnel_encap_present.operation)) leaf_name_data.push_back(is_tunnel_encap_present.get_name_leafdata());
    if (l2tpv3_session_id.is_set || is_set(l2tpv3_session_id.operation)) leaf_name_data.push_back(l2tpv3_session_id.get_name_leafdata());
    if (local_preference.is_set || is_set(local_preference.operation)) leaf_name_data.push_back(local_preference.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (neighbor_as.is_set || is_set(neighbor_as.operation)) leaf_name_data.push_back(neighbor_as.get_name_leafdata());
    if (origin.is_set || is_set(origin.operation)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (originator.is_set || is_set(originator.operation)) leaf_name_data.push_back(originator.get_name_leafdata());
    if (pmsi_flags.is_set || is_set(pmsi_flags.operation)) leaf_name_data.push_back(pmsi_flags.get_name_leafdata());
    if (pmsi_label.is_set || is_set(pmsi_label.operation)) leaf_name_data.push_back(pmsi_label.get_name_leafdata());
    if (pmsi_type.is_set || is_set(pmsi_type.operation)) leaf_name_data.push_back(pmsi_type.get_name_leafdata());
    if (ppm_pvalue.is_set || is_set(ppm_pvalue.operation)) leaf_name_data.push_back(ppm_pvalue.get_name_leafdata());
    if (sr_policy_preference.is_set || is_set(sr_policy_preference.operation)) leaf_name_data.push_back(sr_policy_preference.get_name_leafdata());
    if (sr_tunnel_request_state.is_set || is_set(sr_tunnel_request_state.operation)) leaf_name_data.push_back(sr_tunnel_request_state.get_name_leafdata());
    if (sr_tunnel_state.is_set || is_set(sr_tunnel_state.operation)) leaf_name_data.push_back(sr_tunnel_state.get_name_leafdata());
    if (tunnel_encap_type.is_set || is_set(tunnel_encap_type.operation)) leaf_name_data.push_back(tunnel_encap_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cluster")
    {
        for(auto const & c : cluster)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::Cluster>();
        c->parent = this;
        cluster.push_back(std::move(c));
        children[segment_path] = cluster.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "community")
    {
        for(auto const & c : community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::Community>();
        c->parent = this;
        community.push_back(std::move(c));
        children[segment_path] = community.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "connector-value")
    {
        for(auto const & c : connector_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::ConnectorValue>();
        c->parent = this;
        connector_value.push_back(std::move(c));
        children[segment_path] = connector_value.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "extended-community")
    {
        for(auto const & c : extended_community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::ExtendedCommunity>();
        c->parent = this;
        extended_community.push_back(std::move(c));
        children[segment_path] = extended_community.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "l2tpv3-cookie")
    {
        for(auto const & c : l2tpv3_cookie)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::L2Tpv3Cookie>();
        c->parent = this;
        l2tpv3_cookie.push_back(std::move(c));
        children[segment_path] = l2tpv3_cookie.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "label-index-attr")
    {
        for(auto const & c : label_index_attr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::LabelIndexAttr>();
        c->parent = this;
        label_index_attr.push_back(std::move(c));
        children[segment_path] = label_index_attr.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "ls-attr")
    {
        for(auto const & c : ls_attr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::LsAttr>();
        c->parent = this;
        ls_attr.push_back(std::move(c));
        children[segment_path] = ls_attr.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "pe-distinguisher-label")
    {
        for(auto const & c : pe_distinguisher_label)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::PeDistinguisherLabel>();
        c->parent = this;
        pe_distinguisher_label.push_back(std::move(c));
        children[segment_path] = pe_distinguisher_label.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "pmsi-value")
    {
        for(auto const & c : pmsi_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::PmsiValue>();
        c->parent = this;
        pmsi_value.push_back(std::move(c));
        children[segment_path] = pmsi_value.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "sr-policy-allocated-binding-sid")
    {
        if(sr_policy_allocated_binding_sid != nullptr)
        {
            children["sr-policy-allocated-binding-sid"] = sr_policy_allocated_binding_sid;
        }
        else
        {
            sr_policy_allocated_binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::SrPolicyAllocatedBindingSid>();
            sr_policy_allocated_binding_sid->parent = this;
            children["sr-policy-allocated-binding-sid"] = sr_policy_allocated_binding_sid;
        }
        return children.at("sr-policy-allocated-binding-sid");
    }

    if(child_yang_name == "sr-policy-binding-sid")
    {
        if(sr_policy_binding_sid != nullptr)
        {
            children["sr-policy-binding-sid"] = sr_policy_binding_sid;
        }
        else
        {
            sr_policy_binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::SrPolicyBindingSid>();
            sr_policy_binding_sid->parent = this;
            children["sr-policy-binding-sid"] = sr_policy_binding_sid;
        }
        return children.at("sr-policy-binding-sid");
    }

    if(child_yang_name == "sr-policy-explicit-path")
    {
        for(auto const & c : sr_policy_explicit_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::SrPolicyExplicitPath>();
        c->parent = this;
        sr_policy_explicit_path.push_back(std::move(c));
        children[segment_path] = sr_policy_explicit_path.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "unknown-attribute")
    {
        for(auto const & c : unknown_attribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::UnknownAttribute>();
        c->parent = this;
        unknown_attribute.push_back(std::move(c));
        children[segment_path] = unknown_attribute.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::get_children()
{
    for (auto const & c : cluster)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : community)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : connector_value)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : extended_community)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : l2tpv3_cookie)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : label_index_attr)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : ls_attr)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : pe_distinguisher_label)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : pmsi_value)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("sr-policy-allocated-binding-sid") == children.end())
    {
        if(sr_policy_allocated_binding_sid != nullptr)
        {
            children["sr-policy-allocated-binding-sid"] = sr_policy_allocated_binding_sid;
        }
    }

    if(children.find("sr-policy-binding-sid") == children.end())
    {
        if(sr_policy_binding_sid != nullptr)
        {
            children["sr-policy-binding-sid"] = sr_policy_binding_sid;
        }
    }

    for (auto const & c : sr_policy_explicit_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : unknown_attribute)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aggregator-address")
    {
        aggregator_address = value;
    }
    if(value_path == "aggregator-as")
    {
        aggregator_as = value;
    }
    if(value_path == "aigp-metric-value")
    {
        aigp_metric_value = value;
    }
    if(value_path == "as-path")
    {
        as_path = value;
    }
    if(value_path == "connector-type")
    {
        connector_type = value;
    }
    if(value_path == "extended-community-flags")
    {
        extended_community_flags = value;
    }
    if(value_path == "is-aggregator-present")
    {
        is_aggregator_present = value;
    }
    if(value_path == "is-aigp-present")
    {
        is_aigp_present = value;
    }
    if(value_path == "is-as-path-present")
    {
        is_as_path_present = value;
    }
    if(value_path == "is-atomic-aggregate-present")
    {
        is_atomic_aggregate_present = value;
    }
    if(value_path == "is-community-present")
    {
        is_community_present = value;
    }
    if(value_path == "is-connector-present")
    {
        is_connector_present = value;
    }
    if(value_path == "is-extended-community-present")
    {
        is_extended_community_present = value;
    }
    if(value_path == "is-label-index-present")
    {
        is_label_index_present = value;
    }
    if(value_path == "is-local-pref-present")
    {
        is_local_pref_present = value;
    }
    if(value_path == "is-ls-attribute-present")
    {
        is_ls_attribute_present = value;
    }
    if(value_path == "is-metric-present")
    {
        is_metric_present = value;
    }
    if(value_path == "is-origin-present")
    {
        is_origin_present = value;
    }
    if(value_path == "is-pe-distinguisher-label-present")
    {
        is_pe_distinguisher_label_present = value;
    }
    if(value_path == "is-pmsi-present")
    {
        is_pmsi_present = value;
    }
    if(value_path == "is-pppmp-present")
    {
        is_pppmp_present = value;
    }
    if(value_path == "is-ssa-present")
    {
        is_ssa_present = value;
    }
    if(value_path == "is-tunnel-encap-present")
    {
        is_tunnel_encap_present = value;
    }
    if(value_path == "l2tpv3-session-id")
    {
        l2tpv3_session_id = value;
    }
    if(value_path == "local-preference")
    {
        local_preference = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "neighbor-as")
    {
        neighbor_as = value;
    }
    if(value_path == "origin")
    {
        origin = value;
    }
    if(value_path == "originator")
    {
        originator = value;
    }
    if(value_path == "pmsi-flags")
    {
        pmsi_flags = value;
    }
    if(value_path == "pmsi-label")
    {
        pmsi_label = value;
    }
    if(value_path == "pmsi-type")
    {
        pmsi_type = value;
    }
    if(value_path == "ppm-pvalue")
    {
        ppm_pvalue = value;
    }
    if(value_path == "sr-policy-preference")
    {
        sr_policy_preference = value;
    }
    if(value_path == "sr-tunnel-request-state")
    {
        sr_tunnel_request_state = value;
    }
    if(value_path == "sr-tunnel-state")
    {
        sr_tunnel_state = value;
    }
    if(value_path == "tunnel-encap-type")
    {
        tunnel_encap_type = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::SrPolicyBindingSid::SrPolicyBindingSid()
    :
    ipv6_address{YType::str, "ipv6-address"},
    label{YType::uint32, "label"},
    type{YType::enumeration, "type"}
{
    yang_name = "sr-policy-binding-sid"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::SrPolicyBindingSid::~SrPolicyBindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::SrPolicyBindingSid::has_data() const
{
    return ipv6_address.is_set
	|| label.is_set
	|| type.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::SrPolicyBindingSid::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_address.operation)
	|| is_set(label.operation)
	|| is_set(type.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::SrPolicyBindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy-binding-sid";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::SrPolicyBindingSid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrPolicyBindingSid' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::SrPolicyBindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::SrPolicyBindingSid::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::SrPolicyBindingSid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::SrPolicyAllocatedBindingSid::SrPolicyAllocatedBindingSid()
    :
    ipv6_address{YType::str, "ipv6-address"},
    label{YType::uint32, "label"},
    type{YType::enumeration, "type"}
{
    yang_name = "sr-policy-allocated-binding-sid"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::SrPolicyAllocatedBindingSid::~SrPolicyAllocatedBindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::SrPolicyAllocatedBindingSid::has_data() const
{
    return ipv6_address.is_set
	|| label.is_set
	|| type.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::SrPolicyAllocatedBindingSid::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_address.operation)
	|| is_set(label.operation)
	|| is_set(type.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::SrPolicyAllocatedBindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy-allocated-binding-sid";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::SrPolicyAllocatedBindingSid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrPolicyAllocatedBindingSid' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::SrPolicyAllocatedBindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::SrPolicyAllocatedBindingSid::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::SrPolicyAllocatedBindingSid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::Community::Community()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "community"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::Community::~Community()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::Community::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::Community::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::Community::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Community' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::Community::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::Community::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::ExtendedCommunity::ExtendedCommunity()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "extended-community"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::ExtendedCommunity::~ExtendedCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::ExtendedCommunity::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::ExtendedCommunity::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::ExtendedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::ExtendedCommunity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExtendedCommunity' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::ExtendedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::ExtendedCommunity::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::ExtendedCommunity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::UnknownAttribute::UnknownAttribute()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "unknown-attribute"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::UnknownAttribute::~UnknownAttribute()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::UnknownAttribute::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::UnknownAttribute::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::UnknownAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attribute";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::UnknownAttribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnknownAttribute' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::UnknownAttribute::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::UnknownAttribute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::Cluster::Cluster()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "cluster"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::Cluster::~Cluster()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::Cluster::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::Cluster::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::Cluster::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cluster";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::Cluster::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cluster' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::Cluster::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::Cluster::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::Cluster::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::L2Tpv3Cookie::L2Tpv3Cookie()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "l2tpv3-cookie"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::L2Tpv3Cookie::~L2Tpv3Cookie()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::L2Tpv3Cookie::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::L2Tpv3Cookie::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::L2Tpv3Cookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3-cookie";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::L2Tpv3Cookie::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2Tpv3Cookie' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::L2Tpv3Cookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::L2Tpv3Cookie::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::L2Tpv3Cookie::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::ConnectorValue::ConnectorValue()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "connector-value"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::ConnectorValue::~ConnectorValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::ConnectorValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::ConnectorValue::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::ConnectorValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connector-value";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::ConnectorValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConnectorValue' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::ConnectorValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::ConnectorValue::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::ConnectorValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::PmsiValue::PmsiValue()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "pmsi-value"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::PmsiValue::~PmsiValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::PmsiValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::PmsiValue::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::PmsiValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-value";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::PmsiValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PmsiValue' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::PmsiValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::PmsiValue::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::PmsiValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::LsAttr::LsAttr()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "ls-attr"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::LsAttr::~LsAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::LsAttr::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::LsAttr::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::LsAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ls-attr";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::LsAttr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsAttr' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::LsAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::LsAttr::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::LsAttr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::LabelIndexAttr::LabelIndexAttr()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "label-index-attr"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::LabelIndexAttr::~LabelIndexAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::LabelIndexAttr::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::LabelIndexAttr::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::LabelIndexAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-index-attr";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::LabelIndexAttr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabelIndexAttr' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::LabelIndexAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::LabelIndexAttr::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::LabelIndexAttr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::PeDistinguisherLabel::PeDistinguisherLabel()
    :
    label{YType::uint32, "label"},
    pe_address{YType::str, "pe-address"}
{
    yang_name = "pe-distinguisher-label"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::PeDistinguisherLabel::~PeDistinguisherLabel()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::PeDistinguisherLabel::has_data() const
{
    return label.is_set
	|| pe_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::PeDistinguisherLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(label.operation)
	|| is_set(pe_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::PeDistinguisherLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-distinguisher-label";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::PeDistinguisherLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeDistinguisherLabel' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (pe_address.is_set || is_set(pe_address.operation)) leaf_name_data.push_back(pe_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::PeDistinguisherLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::PeDistinguisherLabel::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::PeDistinguisherLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "pe-address")
    {
        pe_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::SrPolicyExplicitPath::SrPolicyExplicitPath()
    :
    weight{YType::uint8, "weight"}
{
    yang_name = "sr-policy-explicit-path"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::SrPolicyExplicitPath::~SrPolicyExplicitPath()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::SrPolicyExplicitPath::has_data() const
{
    for (std::size_t index=0; index<sid.size(); index++)
    {
        if(sid[index]->has_data())
            return true;
    }
    return weight.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::SrPolicyExplicitPath::has_operation() const
{
    for (std::size_t index=0; index<sid.size(); index++)
    {
        if(sid[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(weight.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::SrPolicyExplicitPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy-explicit-path";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::SrPolicyExplicitPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrPolicyExplicitPath' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::SrPolicyExplicitPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sid")
    {
        for(auto const & c : sid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::SrPolicyExplicitPath::Sid>();
        c->parent = this;
        sid.push_back(std::move(c));
        children[segment_path] = sid.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::SrPolicyExplicitPath::get_children()
{
    for (auto const & c : sid)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::SrPolicyExplicitPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "weight")
    {
        weight = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::SrPolicyExplicitPath::Sid::Sid()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"},
    label{YType::uint32, "label"},
    type{YType::uint8, "type"}
{
    yang_name = "sid"; yang_parent_name = "sr-policy-explicit-path";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::SrPolicyExplicitPath::Sid::~Sid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::SrPolicyExplicitPath::Sid::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set
	|| label.is_set
	|| type.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::SrPolicyExplicitPath::Sid::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation)
	|| is_set(label.operation)
	|| is_set(type.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::SrPolicyExplicitPath::Sid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::SrPolicyExplicitPath::Sid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sid' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::SrPolicyExplicitPath::Sid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::SrPolicyExplicitPath::Sid::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::CommonAttributes::SrPolicyExplicitPath::Sid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::AttrSet()
    :
    aggregator_address{YType::str, "aggregator-address"},
    aggregator_as{YType::uint32, "aggregator-as"},
    aigp_metric_value{YType::uint64, "aigp-metric-value"},
    as_path{YType::str, "as-path"},
    connector_type{YType::uint16, "connector-type"},
    extended_community_flags{YType::uint8, "extended-community-flags"},
    is_aggregator_present{YType::boolean, "is-aggregator-present"},
    is_aigp_present{YType::boolean, "is-aigp-present"},
    is_as_path_present{YType::boolean, "is-as-path-present"},
    is_atomic_aggregate_present{YType::boolean, "is-atomic-aggregate-present"},
    is_community_present{YType::boolean, "is-community-present"},
    is_connector_present{YType::boolean, "is-connector-present"},
    is_extended_community_present{YType::boolean, "is-extended-community-present"},
    is_label_index_present{YType::boolean, "is-label-index-present"},
    is_local_pref_present{YType::boolean, "is-local-pref-present"},
    is_ls_attribute_present{YType::boolean, "is-ls-attribute-present"},
    is_metric_present{YType::boolean, "is-metric-present"},
    is_origin_present{YType::boolean, "is-origin-present"},
    is_pe_distinguisher_label_present{YType::boolean, "is-pe-distinguisher-label-present"},
    is_pmsi_present{YType::boolean, "is-pmsi-present"},
    is_pppmp_present{YType::boolean, "is-pppmp-present"},
    is_ssa_present{YType::boolean, "is-ssa-present"},
    is_tunnel_encap_present{YType::boolean, "is-tunnel-encap-present"},
    l2tpv3_session_id{YType::uint32, "l2tpv3-session-id"},
    local_preference{YType::uint32, "local-preference"},
    metric{YType::uint32, "metric"},
    neighbor_as{YType::uint32, "neighbor-as"},
    origin{YType::uint16, "origin"},
    originator{YType::str, "originator"},
    pmsi_flags{YType::uint8, "pmsi-flags"},
    pmsi_label{YType::uint32, "pmsi-label"},
    pmsi_type{YType::uint16, "pmsi-type"},
    ppm_pvalue{YType::uint32, "ppm-pvalue"},
    sr_policy_preference{YType::uint32, "sr-policy-preference"},
    sr_tunnel_request_state{YType::enumeration, "sr-tunnel-request-state"},
    sr_tunnel_state{YType::uint32, "sr-tunnel-state"},
    tunnel_encap_type{YType::uint16, "tunnel-encap-type"}
    	,
    sr_policy_allocated_binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyAllocatedBindingSid>())
	,sr_policy_binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyBindingSid>())
{
    sr_policy_allocated_binding_sid->parent = this;
    children["sr-policy-allocated-binding-sid"] = sr_policy_allocated_binding_sid;

    sr_policy_binding_sid->parent = this;
    children["sr-policy-binding-sid"] = sr_policy_binding_sid;

    yang_name = "attr-set"; yang_parent_name = "attributes-after-policy-out";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::~AttrSet()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::has_data() const
{
    for (std::size_t index=0; index<cluster.size(); index++)
    {
        if(cluster[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<community.size(); index++)
    {
        if(community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<connector_value.size(); index++)
    {
        if(connector_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<extended_community.size(); index++)
    {
        if(extended_community[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<l2tpv3_cookie.size(); index++)
    {
        if(l2tpv3_cookie[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<label_index_attr.size(); index++)
    {
        if(label_index_attr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ls_attr.size(); index++)
    {
        if(ls_attr[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pe_distinguisher_label.size(); index++)
    {
        if(pe_distinguisher_label[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<pmsi_value.size(); index++)
    {
        if(pmsi_value[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<sr_policy_explicit_path.size(); index++)
    {
        if(sr_policy_explicit_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<unknown_attribute.size(); index++)
    {
        if(unknown_attribute[index]->has_data())
            return true;
    }
    return aggregator_address.is_set
	|| aggregator_as.is_set
	|| aigp_metric_value.is_set
	|| as_path.is_set
	|| connector_type.is_set
	|| extended_community_flags.is_set
	|| is_aggregator_present.is_set
	|| is_aigp_present.is_set
	|| is_as_path_present.is_set
	|| is_atomic_aggregate_present.is_set
	|| is_community_present.is_set
	|| is_connector_present.is_set
	|| is_extended_community_present.is_set
	|| is_label_index_present.is_set
	|| is_local_pref_present.is_set
	|| is_ls_attribute_present.is_set
	|| is_metric_present.is_set
	|| is_origin_present.is_set
	|| is_pe_distinguisher_label_present.is_set
	|| is_pmsi_present.is_set
	|| is_pppmp_present.is_set
	|| is_ssa_present.is_set
	|| is_tunnel_encap_present.is_set
	|| l2tpv3_session_id.is_set
	|| local_preference.is_set
	|| metric.is_set
	|| neighbor_as.is_set
	|| origin.is_set
	|| originator.is_set
	|| pmsi_flags.is_set
	|| pmsi_label.is_set
	|| pmsi_type.is_set
	|| ppm_pvalue.is_set
	|| sr_policy_preference.is_set
	|| sr_tunnel_request_state.is_set
	|| sr_tunnel_state.is_set
	|| tunnel_encap_type.is_set
	|| (sr_policy_allocated_binding_sid !=  nullptr && sr_policy_allocated_binding_sid->has_data())
	|| (sr_policy_binding_sid !=  nullptr && sr_policy_binding_sid->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::has_operation() const
{
    for (std::size_t index=0; index<cluster.size(); index++)
    {
        if(cluster[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<community.size(); index++)
    {
        if(community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<connector_value.size(); index++)
    {
        if(connector_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<extended_community.size(); index++)
    {
        if(extended_community[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<l2tpv3_cookie.size(); index++)
    {
        if(l2tpv3_cookie[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<label_index_attr.size(); index++)
    {
        if(label_index_attr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ls_attr.size(); index++)
    {
        if(ls_attr[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pe_distinguisher_label.size(); index++)
    {
        if(pe_distinguisher_label[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<pmsi_value.size(); index++)
    {
        if(pmsi_value[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<sr_policy_explicit_path.size(); index++)
    {
        if(sr_policy_explicit_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<unknown_attribute.size(); index++)
    {
        if(unknown_attribute[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(aggregator_address.operation)
	|| is_set(aggregator_as.operation)
	|| is_set(aigp_metric_value.operation)
	|| is_set(as_path.operation)
	|| is_set(connector_type.operation)
	|| is_set(extended_community_flags.operation)
	|| is_set(is_aggregator_present.operation)
	|| is_set(is_aigp_present.operation)
	|| is_set(is_as_path_present.operation)
	|| is_set(is_atomic_aggregate_present.operation)
	|| is_set(is_community_present.operation)
	|| is_set(is_connector_present.operation)
	|| is_set(is_extended_community_present.operation)
	|| is_set(is_label_index_present.operation)
	|| is_set(is_local_pref_present.operation)
	|| is_set(is_ls_attribute_present.operation)
	|| is_set(is_metric_present.operation)
	|| is_set(is_origin_present.operation)
	|| is_set(is_pe_distinguisher_label_present.operation)
	|| is_set(is_pmsi_present.operation)
	|| is_set(is_pppmp_present.operation)
	|| is_set(is_ssa_present.operation)
	|| is_set(is_tunnel_encap_present.operation)
	|| is_set(l2tpv3_session_id.operation)
	|| is_set(local_preference.operation)
	|| is_set(metric.operation)
	|| is_set(neighbor_as.operation)
	|| is_set(origin.operation)
	|| is_set(originator.operation)
	|| is_set(pmsi_flags.operation)
	|| is_set(pmsi_label.operation)
	|| is_set(pmsi_type.operation)
	|| is_set(ppm_pvalue.operation)
	|| is_set(sr_policy_preference.operation)
	|| is_set(sr_tunnel_request_state.operation)
	|| is_set(sr_tunnel_state.operation)
	|| is_set(tunnel_encap_type.operation)
	|| (sr_policy_allocated_binding_sid !=  nullptr && sr_policy_allocated_binding_sid->has_operation())
	|| (sr_policy_binding_sid !=  nullptr && sr_policy_binding_sid->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attr-set";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttrSet' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggregator_address.is_set || is_set(aggregator_address.operation)) leaf_name_data.push_back(aggregator_address.get_name_leafdata());
    if (aggregator_as.is_set || is_set(aggregator_as.operation)) leaf_name_data.push_back(aggregator_as.get_name_leafdata());
    if (aigp_metric_value.is_set || is_set(aigp_metric_value.operation)) leaf_name_data.push_back(aigp_metric_value.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.operation)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (connector_type.is_set || is_set(connector_type.operation)) leaf_name_data.push_back(connector_type.get_name_leafdata());
    if (extended_community_flags.is_set || is_set(extended_community_flags.operation)) leaf_name_data.push_back(extended_community_flags.get_name_leafdata());
    if (is_aggregator_present.is_set || is_set(is_aggregator_present.operation)) leaf_name_data.push_back(is_aggregator_present.get_name_leafdata());
    if (is_aigp_present.is_set || is_set(is_aigp_present.operation)) leaf_name_data.push_back(is_aigp_present.get_name_leafdata());
    if (is_as_path_present.is_set || is_set(is_as_path_present.operation)) leaf_name_data.push_back(is_as_path_present.get_name_leafdata());
    if (is_atomic_aggregate_present.is_set || is_set(is_atomic_aggregate_present.operation)) leaf_name_data.push_back(is_atomic_aggregate_present.get_name_leafdata());
    if (is_community_present.is_set || is_set(is_community_present.operation)) leaf_name_data.push_back(is_community_present.get_name_leafdata());
    if (is_connector_present.is_set || is_set(is_connector_present.operation)) leaf_name_data.push_back(is_connector_present.get_name_leafdata());
    if (is_extended_community_present.is_set || is_set(is_extended_community_present.operation)) leaf_name_data.push_back(is_extended_community_present.get_name_leafdata());
    if (is_label_index_present.is_set || is_set(is_label_index_present.operation)) leaf_name_data.push_back(is_label_index_present.get_name_leafdata());
    if (is_local_pref_present.is_set || is_set(is_local_pref_present.operation)) leaf_name_data.push_back(is_local_pref_present.get_name_leafdata());
    if (is_ls_attribute_present.is_set || is_set(is_ls_attribute_present.operation)) leaf_name_data.push_back(is_ls_attribute_present.get_name_leafdata());
    if (is_metric_present.is_set || is_set(is_metric_present.operation)) leaf_name_data.push_back(is_metric_present.get_name_leafdata());
    if (is_origin_present.is_set || is_set(is_origin_present.operation)) leaf_name_data.push_back(is_origin_present.get_name_leafdata());
    if (is_pe_distinguisher_label_present.is_set || is_set(is_pe_distinguisher_label_present.operation)) leaf_name_data.push_back(is_pe_distinguisher_label_present.get_name_leafdata());
    if (is_pmsi_present.is_set || is_set(is_pmsi_present.operation)) leaf_name_data.push_back(is_pmsi_present.get_name_leafdata());
    if (is_pppmp_present.is_set || is_set(is_pppmp_present.operation)) leaf_name_data.push_back(is_pppmp_present.get_name_leafdata());
    if (is_ssa_present.is_set || is_set(is_ssa_present.operation)) leaf_name_data.push_back(is_ssa_present.get_name_leafdata());
    if (is_tunnel_encap_present.is_set || is_set(is_tunnel_encap_present.operation)) leaf_name_data.push_back(is_tunnel_encap_present.get_name_leafdata());
    if (l2tpv3_session_id.is_set || is_set(l2tpv3_session_id.operation)) leaf_name_data.push_back(l2tpv3_session_id.get_name_leafdata());
    if (local_preference.is_set || is_set(local_preference.operation)) leaf_name_data.push_back(local_preference.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (neighbor_as.is_set || is_set(neighbor_as.operation)) leaf_name_data.push_back(neighbor_as.get_name_leafdata());
    if (origin.is_set || is_set(origin.operation)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (originator.is_set || is_set(originator.operation)) leaf_name_data.push_back(originator.get_name_leafdata());
    if (pmsi_flags.is_set || is_set(pmsi_flags.operation)) leaf_name_data.push_back(pmsi_flags.get_name_leafdata());
    if (pmsi_label.is_set || is_set(pmsi_label.operation)) leaf_name_data.push_back(pmsi_label.get_name_leafdata());
    if (pmsi_type.is_set || is_set(pmsi_type.operation)) leaf_name_data.push_back(pmsi_type.get_name_leafdata());
    if (ppm_pvalue.is_set || is_set(ppm_pvalue.operation)) leaf_name_data.push_back(ppm_pvalue.get_name_leafdata());
    if (sr_policy_preference.is_set || is_set(sr_policy_preference.operation)) leaf_name_data.push_back(sr_policy_preference.get_name_leafdata());
    if (sr_tunnel_request_state.is_set || is_set(sr_tunnel_request_state.operation)) leaf_name_data.push_back(sr_tunnel_request_state.get_name_leafdata());
    if (sr_tunnel_state.is_set || is_set(sr_tunnel_state.operation)) leaf_name_data.push_back(sr_tunnel_state.get_name_leafdata());
    if (tunnel_encap_type.is_set || is_set(tunnel_encap_type.operation)) leaf_name_data.push_back(tunnel_encap_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cluster")
    {
        for(auto const & c : cluster)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::Cluster>();
        c->parent = this;
        cluster.push_back(std::move(c));
        children[segment_path] = cluster.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "community")
    {
        for(auto const & c : community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::Community>();
        c->parent = this;
        community.push_back(std::move(c));
        children[segment_path] = community.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "connector-value")
    {
        for(auto const & c : connector_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::ConnectorValue>();
        c->parent = this;
        connector_value.push_back(std::move(c));
        children[segment_path] = connector_value.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "extended-community")
    {
        for(auto const & c : extended_community)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::ExtendedCommunity>();
        c->parent = this;
        extended_community.push_back(std::move(c));
        children[segment_path] = extended_community.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "l2tpv3-cookie")
    {
        for(auto const & c : l2tpv3_cookie)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::L2Tpv3Cookie>();
        c->parent = this;
        l2tpv3_cookie.push_back(std::move(c));
        children[segment_path] = l2tpv3_cookie.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "label-index-attr")
    {
        for(auto const & c : label_index_attr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::LabelIndexAttr>();
        c->parent = this;
        label_index_attr.push_back(std::move(c));
        children[segment_path] = label_index_attr.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "ls-attr")
    {
        for(auto const & c : ls_attr)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::LsAttr>();
        c->parent = this;
        ls_attr.push_back(std::move(c));
        children[segment_path] = ls_attr.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "pe-distinguisher-label")
    {
        for(auto const & c : pe_distinguisher_label)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PeDistinguisherLabel>();
        c->parent = this;
        pe_distinguisher_label.push_back(std::move(c));
        children[segment_path] = pe_distinguisher_label.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "pmsi-value")
    {
        for(auto const & c : pmsi_value)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PmsiValue>();
        c->parent = this;
        pmsi_value.push_back(std::move(c));
        children[segment_path] = pmsi_value.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "sr-policy-allocated-binding-sid")
    {
        if(sr_policy_allocated_binding_sid != nullptr)
        {
            children["sr-policy-allocated-binding-sid"] = sr_policy_allocated_binding_sid;
        }
        else
        {
            sr_policy_allocated_binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyAllocatedBindingSid>();
            sr_policy_allocated_binding_sid->parent = this;
            children["sr-policy-allocated-binding-sid"] = sr_policy_allocated_binding_sid;
        }
        return children.at("sr-policy-allocated-binding-sid");
    }

    if(child_yang_name == "sr-policy-binding-sid")
    {
        if(sr_policy_binding_sid != nullptr)
        {
            children["sr-policy-binding-sid"] = sr_policy_binding_sid;
        }
        else
        {
            sr_policy_binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyBindingSid>();
            sr_policy_binding_sid->parent = this;
            children["sr-policy-binding-sid"] = sr_policy_binding_sid;
        }
        return children.at("sr-policy-binding-sid");
    }

    if(child_yang_name == "sr-policy-explicit-path")
    {
        for(auto const & c : sr_policy_explicit_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyExplicitPath>();
        c->parent = this;
        sr_policy_explicit_path.push_back(std::move(c));
        children[segment_path] = sr_policy_explicit_path.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "unknown-attribute")
    {
        for(auto const & c : unknown_attribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::UnknownAttribute>();
        c->parent = this;
        unknown_attribute.push_back(std::move(c));
        children[segment_path] = unknown_attribute.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::get_children()
{
    for (auto const & c : cluster)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : community)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : connector_value)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : extended_community)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : l2tpv3_cookie)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : label_index_attr)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : ls_attr)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : pe_distinguisher_label)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : pmsi_value)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("sr-policy-allocated-binding-sid") == children.end())
    {
        if(sr_policy_allocated_binding_sid != nullptr)
        {
            children["sr-policy-allocated-binding-sid"] = sr_policy_allocated_binding_sid;
        }
    }

    if(children.find("sr-policy-binding-sid") == children.end())
    {
        if(sr_policy_binding_sid != nullptr)
        {
            children["sr-policy-binding-sid"] = sr_policy_binding_sid;
        }
    }

    for (auto const & c : sr_policy_explicit_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : unknown_attribute)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aggregator-address")
    {
        aggregator_address = value;
    }
    if(value_path == "aggregator-as")
    {
        aggregator_as = value;
    }
    if(value_path == "aigp-metric-value")
    {
        aigp_metric_value = value;
    }
    if(value_path == "as-path")
    {
        as_path = value;
    }
    if(value_path == "connector-type")
    {
        connector_type = value;
    }
    if(value_path == "extended-community-flags")
    {
        extended_community_flags = value;
    }
    if(value_path == "is-aggregator-present")
    {
        is_aggregator_present = value;
    }
    if(value_path == "is-aigp-present")
    {
        is_aigp_present = value;
    }
    if(value_path == "is-as-path-present")
    {
        is_as_path_present = value;
    }
    if(value_path == "is-atomic-aggregate-present")
    {
        is_atomic_aggregate_present = value;
    }
    if(value_path == "is-community-present")
    {
        is_community_present = value;
    }
    if(value_path == "is-connector-present")
    {
        is_connector_present = value;
    }
    if(value_path == "is-extended-community-present")
    {
        is_extended_community_present = value;
    }
    if(value_path == "is-label-index-present")
    {
        is_label_index_present = value;
    }
    if(value_path == "is-local-pref-present")
    {
        is_local_pref_present = value;
    }
    if(value_path == "is-ls-attribute-present")
    {
        is_ls_attribute_present = value;
    }
    if(value_path == "is-metric-present")
    {
        is_metric_present = value;
    }
    if(value_path == "is-origin-present")
    {
        is_origin_present = value;
    }
    if(value_path == "is-pe-distinguisher-label-present")
    {
        is_pe_distinguisher_label_present = value;
    }
    if(value_path == "is-pmsi-present")
    {
        is_pmsi_present = value;
    }
    if(value_path == "is-pppmp-present")
    {
        is_pppmp_present = value;
    }
    if(value_path == "is-ssa-present")
    {
        is_ssa_present = value;
    }
    if(value_path == "is-tunnel-encap-present")
    {
        is_tunnel_encap_present = value;
    }
    if(value_path == "l2tpv3-session-id")
    {
        l2tpv3_session_id = value;
    }
    if(value_path == "local-preference")
    {
        local_preference = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "neighbor-as")
    {
        neighbor_as = value;
    }
    if(value_path == "origin")
    {
        origin = value;
    }
    if(value_path == "originator")
    {
        originator = value;
    }
    if(value_path == "pmsi-flags")
    {
        pmsi_flags = value;
    }
    if(value_path == "pmsi-label")
    {
        pmsi_label = value;
    }
    if(value_path == "pmsi-type")
    {
        pmsi_type = value;
    }
    if(value_path == "ppm-pvalue")
    {
        ppm_pvalue = value;
    }
    if(value_path == "sr-policy-preference")
    {
        sr_policy_preference = value;
    }
    if(value_path == "sr-tunnel-request-state")
    {
        sr_tunnel_request_state = value;
    }
    if(value_path == "sr-tunnel-state")
    {
        sr_tunnel_state = value;
    }
    if(value_path == "tunnel-encap-type")
    {
        tunnel_encap_type = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyBindingSid::SrPolicyBindingSid()
    :
    ipv6_address{YType::str, "ipv6-address"},
    label{YType::uint32, "label"},
    type{YType::enumeration, "type"}
{
    yang_name = "sr-policy-binding-sid"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyBindingSid::~SrPolicyBindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyBindingSid::has_data() const
{
    return ipv6_address.is_set
	|| label.is_set
	|| type.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyBindingSid::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_address.operation)
	|| is_set(label.operation)
	|| is_set(type.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyBindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy-binding-sid";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyBindingSid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrPolicyBindingSid' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyBindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyBindingSid::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyBindingSid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyAllocatedBindingSid::SrPolicyAllocatedBindingSid()
    :
    ipv6_address{YType::str, "ipv6-address"},
    label{YType::uint32, "label"},
    type{YType::enumeration, "type"}
{
    yang_name = "sr-policy-allocated-binding-sid"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyAllocatedBindingSid::~SrPolicyAllocatedBindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyAllocatedBindingSid::has_data() const
{
    return ipv6_address.is_set
	|| label.is_set
	|| type.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyAllocatedBindingSid::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_address.operation)
	|| is_set(label.operation)
	|| is_set(type.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyAllocatedBindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy-allocated-binding-sid";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyAllocatedBindingSid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrPolicyAllocatedBindingSid' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyAllocatedBindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyAllocatedBindingSid::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyAllocatedBindingSid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::Community::Community()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "community"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::Community::~Community()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::Community::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::Community::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::Community::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Community' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::Community::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::Community::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::ExtendedCommunity::ExtendedCommunity()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "extended-community"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::ExtendedCommunity::~ExtendedCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::ExtendedCommunity::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::ExtendedCommunity::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::ExtendedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::ExtendedCommunity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExtendedCommunity' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::ExtendedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::ExtendedCommunity::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::ExtendedCommunity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::UnknownAttribute::UnknownAttribute()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "unknown-attribute"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::UnknownAttribute::~UnknownAttribute()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::UnknownAttribute::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::UnknownAttribute::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::UnknownAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attribute";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::UnknownAttribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UnknownAttribute' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::UnknownAttribute::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::UnknownAttribute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::Cluster::Cluster()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "cluster"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::Cluster::~Cluster()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::Cluster::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::Cluster::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::Cluster::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cluster";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::Cluster::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cluster' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::Cluster::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::Cluster::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::Cluster::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::L2Tpv3Cookie::L2Tpv3Cookie()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "l2tpv3-cookie"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::L2Tpv3Cookie::~L2Tpv3Cookie()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::L2Tpv3Cookie::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::L2Tpv3Cookie::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::L2Tpv3Cookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3-cookie";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::L2Tpv3Cookie::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2Tpv3Cookie' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::L2Tpv3Cookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::L2Tpv3Cookie::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::L2Tpv3Cookie::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::ConnectorValue::ConnectorValue()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "connector-value"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::ConnectorValue::~ConnectorValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::ConnectorValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::ConnectorValue::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::ConnectorValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connector-value";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::ConnectorValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConnectorValue' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::ConnectorValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::ConnectorValue::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::ConnectorValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PmsiValue::PmsiValue()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "pmsi-value"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PmsiValue::~PmsiValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PmsiValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PmsiValue::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PmsiValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-value";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PmsiValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PmsiValue' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PmsiValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PmsiValue::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PmsiValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::LsAttr::LsAttr()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "ls-attr"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::LsAttr::~LsAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::LsAttr::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::LsAttr::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::LsAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ls-attr";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::LsAttr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsAttr' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::LsAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::LsAttr::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::LsAttr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::LabelIndexAttr::LabelIndexAttr()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "label-index-attr"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::LabelIndexAttr::~LabelIndexAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::LabelIndexAttr::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::LabelIndexAttr::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::LabelIndexAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-index-attr";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::LabelIndexAttr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LabelIndexAttr' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::LabelIndexAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::LabelIndexAttr::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::LabelIndexAttr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PeDistinguisherLabel::PeDistinguisherLabel()
    :
    label{YType::uint32, "label"},
    pe_address{YType::str, "pe-address"}
{
    yang_name = "pe-distinguisher-label"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PeDistinguisherLabel::~PeDistinguisherLabel()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PeDistinguisherLabel::has_data() const
{
    return label.is_set
	|| pe_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PeDistinguisherLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(label.operation)
	|| is_set(pe_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PeDistinguisherLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-distinguisher-label";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PeDistinguisherLabel::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeDistinguisherLabel' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (pe_address.is_set || is_set(pe_address.operation)) leaf_name_data.push_back(pe_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PeDistinguisherLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PeDistinguisherLabel::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::PeDistinguisherLabel::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "pe-address")
    {
        pe_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyExplicitPath::SrPolicyExplicitPath()
    :
    weight{YType::uint8, "weight"}
{
    yang_name = "sr-policy-explicit-path"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyExplicitPath::~SrPolicyExplicitPath()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyExplicitPath::has_data() const
{
    for (std::size_t index=0; index<sid.size(); index++)
    {
        if(sid[index]->has_data())
            return true;
    }
    return weight.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyExplicitPath::has_operation() const
{
    for (std::size_t index=0; index<sid.size(); index++)
    {
        if(sid[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(weight.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyExplicitPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy-explicit-path";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyExplicitPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrPolicyExplicitPath' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (weight.is_set || is_set(weight.operation)) leaf_name_data.push_back(weight.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyExplicitPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sid")
    {
        for(auto const & c : sid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyExplicitPath::Sid>();
        c->parent = this;
        sid.push_back(std::move(c));
        children[segment_path] = sid.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyExplicitPath::get_children()
{
    for (auto const & c : sid)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyExplicitPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "weight")
    {
        weight = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyExplicitPath::Sid::Sid()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"},
    label{YType::uint32, "label"},
    type{YType::uint8, "type"}
{
    yang_name = "sid"; yang_parent_name = "sr-policy-explicit-path";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyExplicitPath::Sid::~Sid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyExplicitPath::Sid::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set
	|| label.is_set
	|| type.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyExplicitPath::Sid::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation)
	|| is_set(label.operation)
	|| is_set(type.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyExplicitPath::Sid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyExplicitPath::Sid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sid' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (label.is_set || is_set(label.operation)) leaf_name_data.push_back(label.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyExplicitPath::Sid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyExplicitPath::Sid::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::AttrSet::SrPolicyExplicitPath::Sid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
    if(value_path == "label")
    {
        label = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RnhAddr::RnhAddr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    len{YType::enumeration, "len"},
    mac_address{YType::str, "mac-address"}
{
    yang_name = "rnh-addr"; yang_parent_name = "attributes-after-policy-out";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RnhAddr::~RnhAddr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RnhAddr::has_data() const
{
    return ipv4_address.is_set
	|| ipv6_address.is_set
	|| len.is_set
	|| mac_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RnhAddr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(len.operation)
	|| is_set(mac_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RnhAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rnh-addr";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RnhAddr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RnhAddr' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (len.is_set || is_set(len.operation)) leaf_name_data.push_back(len.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RnhAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RnhAddr::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RnhAddr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "len")
    {
        len = value;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::RibrnhIp()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;
    children["ipv4sr-policy-address"] = ipv4sr_policy_address;

    ipv6sr_policy_address->parent = this;
    children["ipv6sr-policy-address"] = ipv6sr_policy_address;

    l2vpn_mspw_address->parent = this;
    children["l2vpn-mspw-address"] = l2vpn_mspw_address;

    l2vpnvpls_address->parent = this;
    children["l2vpnvpls-address"] = l2vpnvpls_address;

    yang_name = "ribrnh-ip"; yang_parent_name = "attributes-after-policy-out";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::~RibrnhIp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ribrnh-ip";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RibrnhIp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        else
        {
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::Ipv4SrPolicyAddress>();
            ipv4sr_policy_address->parent = this;
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        return children.at("ipv4sr-policy-address");
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        else
        {
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::Ipv6SrPolicyAddress>();
            ipv6sr_policy_address->parent = this;
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        return children.at("ipv6sr-policy-address");
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        else
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::L2VpnMspwAddress>();
            l2vpn_mspw_address->parent = this;
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        return children.at("l2vpn-mspw-address");
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        else
        {
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::get_children()
{
    if(children.find("ipv4sr-policy-address") == children.end())
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
    }

    if(children.find("ipv6sr-policy-address") == children.end())
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
    }

    if(children.find("l2vpn-mspw-address") == children.end())
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
    }

    if(children.find("l2vpnvpls-address") == children.end())
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "ribrnh-ip";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "ribrnh-ip";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "ribrnh-ip";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "ribrnh-ip";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::AdvertisedPaths::AdvertisedPath::AdvPathInfo::AttributesAfterPolicyOut::RibrnhIp::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::NeighborAfTable()
{
    yang_name = "neighbor-af-table"; yang_parent_name = "af";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::~NeighborAfTable()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-af-table";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAfTable' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor>();
        c->parent = this;
        neighbor.push_back(std::move(c));
        children[segment_path] = neighbor.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::get_children()
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

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::Neighbor()
    :
    neighbor_address{YType::str, "neighbor-address"},
    active_bmp_servers{YType::uint8, "active-bmp-servers"},
    actual_last_write_bytes{YType::uint32, "actual-last-write-bytes"},
    actual_last_write_reset_bytes{YType::uint32, "actual-last-write-reset-bytes"},
    actual_second_last_write_bytes{YType::uint32, "actual-second-last-write-bytes"},
    actual_second_last_write_reset_bytes{YType::uint32, "actual-second-last-write-reset-bytes"},
    attempted_last_write_bytes{YType::uint32, "attempted-last-write-bytes"},
    attempted_last_write_reset_bytes{YType::uint32, "attempted-last-write-reset-bytes"},
    attempted_second_last_write_bytes{YType::uint32, "attempted-second-last-write-bytes"},
    attempted_second_last_write_reset_bytes{YType::uint32, "attempted-second-last-write-reset-bytes"},
    bfd_minintervalval{YType::uint32, "bfd-minintervalval"},
    bfd_multiplierval{YType::uint32, "bfd-multiplierval"},
    bfd_session_created_state{YType::enumeration, "bfd-session-created-state"},
    bfd_session_enable_mode{YType::enumeration, "bfd-session-enable-mode"},
    bfd_session_state{YType::enumeration, "bfd-session-state"},
    bfd_state_ts{YType::uint64, "bfd-state-ts"},
    bytes_read{YType::uint32, "bytes-read"},
    bytes_written{YType::uint32, "bytes-written"},
    configured_hold_time{YType::uint16, "configured-hold-time"},
    configured_keepalive{YType::uint16, "configured-keepalive"},
    configured_min_acc_hold_time{YType::uint16, "configured-min-acc-hold-time"},
    connect_retry_interval{YType::uint16, "connect-retry-interval"},
    connection_admin_status{YType::uint32, "connection-admin-status"},
    connection_down_count{YType::uint32, "connection-down-count"},
    connection_established_time{YType::uint32, "connection-established-time"},
    connection_local_port{YType::uint32, "connection-local-port"},
    connection_remote_port{YType::uint32, "connection-remote-port"},
    connection_state{YType::enumeration, "connection-state"},
    connection_up_count{YType::uint32, "connection-up-count"},
    count_last_write{YType::uint32, "count-last-write"},
    description{YType::str, "description"},
    discard_as4_path{YType::uint32, "discard-as4-path"},
    discard_data_bytes{YType::uint32, "discard-data-bytes"},
    dmz_link_bandwidth{YType::uint32, "dmz-link-bandwidth"},
    dynamic_neighbor{YType::boolean, "dynamic-neighbor"},
    ebgp_recv_dmz{YType::boolean, "ebgp-recv-dmz"},
    ebgp_send_dmz_mode{YType::enumeration, "ebgp-send-dmz-mode"},
    ebgp_time_to_live{YType::uint32, "ebgp-time-to-live"},
    egress_peer_engineering_enabled{YType::boolean, "egress-peer-engineering-enabled"},
    error_notifies_received{YType::uint32, "error-notifies-received"},
    error_notifies_sent{YType::uint32, "error-notifies-sent"},
    fpbsn_offset{YType::uint32, "fpbsn-offset"},
    fssn_offset{YType::uint32, "fssn-offset"},
    gr_restart_time{YType::uint32, "gr-restart-time"},
    gr_stale_path_time{YType::uint32, "gr-stale-path-time"},
    graceful_restart_enabled_nbr{YType::boolean, "graceful-restart-enabled-nbr"},
    has_internal_link{YType::boolean, "has-internal-link"},
    hold_time{YType::uint16, "hold-time"},
    ignore_connected{YType::boolean, "ignore-connected"},
    internal_vpn_client{YType::boolean, "internal-vpn-client"},
    io_armed{YType::boolean, "io-armed"},
    is4_byte_as_capability_received{YType::boolean, "is4-byte-as-capability-received"},
    is4_byte_as_capability_sent{YType::boolean, "is4-byte-as-capability-sent"},
    is_administratively_shut_down{YType::boolean, "is-administratively-shut-down"},
    is_capability_negotiation_performed{YType::boolean, "is-capability-negotiation-performed"},
    is_capability_negotiation_suppressed{YType::boolean, "is-capability-negotiation-suppressed"},
    is_ebgp_multihop_bgpmpls_forwarding_disabled{YType::boolean, "is-ebgp-multihop-bgpmpls-forwarding-disabled"},
    is_ebgp_peer_as_league{YType::boolean, "is-ebgp-peer-as-league"},
    is_ebgp_peer_common_admin{YType::boolean, "is-ebgp-peer-common-admin"},
    is_external_neighbor_not_directly_connected{YType::boolean, "is-external-neighbor-not-directly-connected"},
    is_gr_aware{YType::boolean, "is-gr-aware"},
    is_local_address_configured{YType::boolean, "is-local-address-configured"},
    is_neighbor_max_prefix_shutdown{YType::boolean, "is-neighbor-max-prefix-shutdown"},
    is_out_of_memory_forced_up{YType::boolean, "is-out-of-memory-forced-up"},
    is_out_of_memory_shutdown{YType::boolean, "is-out-of-memory-shutdown"},
    is_passive_close{YType::boolean, "is-passive-close"},
    is_read_disabled{YType::boolean, "is-read-disabled"},
    is_route_refresh_capability_received{YType::boolean, "is-route-refresh-capability-received"},
    is_route_refresh_old_capability_received{YType::boolean, "is-route-refresh-old-capability-received"},
    keep_alive_time{YType::uint16, "keep-alive-time"},
    last_ackd_seq_no{YType::uint32, "last-ackd-seq-no"},
    last_k_aerror_reset{YType::uint32, "last-k-aerror-reset"},
    last_k_aexpiry_reset{YType::uint32, "last-k-aexpiry-reset"},
    last_k_anotsent_reset{YType::uint32, "last-k-anotsent-reset"},
    last_k_astart_reset{YType::uint32, "last-k-astart-reset"},
    last_notify_error_code{YType::uint8, "last-notify-error-code"},
    last_notify_error_subcode{YType::uint8, "last-notify-error-subcode"},
    last_write_event{YType::uint32, "last-write-event"},
    local_as{YType::uint32, "local-as"},
    local_as_dual_as{YType::boolean, "local-as-dual-as"},
    local_as_dual_as_mode_native{YType::boolean, "local-as-dual-as-mode-native"},
    local_as_no_prepend{YType::boolean, "local-as-no-prepend"},
    local_as_replace_as{YType::boolean, "local-as-replace-as"},
    messages_queued_in{YType::uint32, "messages-queued-in"},
    messages_queued_out{YType::uint32, "messages-queued-out"},
    messages_received{YType::uint32, "messages-received"},
    messages_sent{YType::uint32, "messages-sent"},
    min_advertise_interval{YType::uint32, "min-advertise-interval"},
    min_advertise_interval_msecs{YType::uint32, "min-advertise-interval-msecs"},
    min_origination_interval{YType::uint16, "min-origination-interval"},
    msg_log_in{YType::uint32, "msg-log-in"},
    msg_log_out{YType::uint32, "msg-log-out"},
    multi_protocol_capability_received{YType::boolean, "multi-protocol-capability-received"},
    nbr_cluster_id{YType::uint32, "nbr-cluster-id"},
    nbr_enforce_first_as{YType::boolean, "nbr-enforce-first-as"},
    nbr_in_cluster{YType::uint8, "nbr-in-cluster"},
    negotiated_protocol_version{YType::uint16, "negotiated-protocol-version"},
    neighbor_interface_handle{YType::uint32, "neighbor-interface-handle"},
    neighbor_local_as{YType::uint32, "neighbor-local-as"},
    nsr_enabled{YType::boolean, "nsr-enabled"},
    nsr_state{YType::enumeration, "nsr-state"},
    open_check_error_code{YType::enumeration, "open-check-error-code"},
    peer_error_code{YType::uint32, "peer-error-code"},
    peer_reset_reason{YType::enumeration, "peer-reset-reason"},
    previous_connection_state{YType::uint32, "previous-connection-state"},
    read_armed{YType::boolean, "read-armed"},
    remote_as{YType::uint32, "remote-as"},
    remote_as_number{YType::uint32, "remote-as-number"},
    reset_notification_sent{YType::boolean, "reset-notification-sent"},
    reset_reason{YType::enumeration, "reset-reason"},
    router_id{YType::str, "router-id"},
    rpki_allow_invalid{YType::boolean, "rpki-allow-invalid"},
    rpki_disable{YType::boolean, "rpki-disable"},
    rpki_signal_ibgp{YType::boolean, "rpki-signal-ibgp"},
    rpki_use_validity{YType::boolean, "rpki-use-validity"},
    second_last_k_aexpiry_reset{YType::uint32, "second-last-k-aexpiry-reset"},
    second_last_k_astart_reset{YType::uint32, "second-last-k-astart-reset"},
    second_last_write_event{YType::uint32, "second-last-write-event"},
    socket_read_bytes{YType::uint32, "socket-read-bytes"},
    speaker_id{YType::uint8, "speaker-id"},
    standby_rp{YType::boolean, "standby-rp"},
    suppress4_byte_as{YType::boolean, "suppress4-byte-as"},
    tcp_session_open_mode{YType::enumeration, "tcp-session-open-mode"},
    tcpmss{YType::uint32, "tcpmss"},
    time_last_cb{YType::uint64, "time-last-cb"},
    time_last_cb_reset{YType::uint32, "time-last-cb-reset"},
    time_last_fb{YType::uint64, "time-last-fb"},
    time_since_connection_last_dropped{YType::uint32, "time-since-connection-last-dropped"},
    time_since_last_read{YType::uint32, "time-since-last-read"},
    time_since_last_read_reset{YType::uint32, "time-since-last-read-reset"},
    time_since_last_update{YType::uint32, "time-since-last-update"},
    time_since_last_write{YType::uint32, "time-since-last-write"},
    time_since_last_write_reset{YType::uint32, "time-since-last-write-reset"},
    time_since_second_last_write{YType::uint32, "time-since-second-last-write"},
    time_since_second_last_write_reset{YType::uint32, "time-since-second-last-write-reset"},
    tos_type{YType::uint8, "tos-type"},
    tos_value{YType::uint8, "tos-value"},
    ttl_security_enabled{YType::boolean, "ttl-security-enabled"},
    update_bytes_read{YType::uint32, "update-bytes-read"},
    update_messages_in{YType::uint32, "update-messages-in"},
    update_messages_out{YType::uint32, "update-messages-out"},
    vrf_name{YType::str, "vrf-name"},
    write_armed{YType::boolean, "write-armed"}
    	,
    connection_local_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress>())
	,connection_remote_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress>())
	,graceful_maintenance(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::GracefulMaintenance>())
	,message_statistics(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics>())
	,performance_statistics(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::PerformanceStatistics>())
	,received_notification_info(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ReceivedNotificationInfo>())
	,send_notification_info(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::SendNotificationInfo>())
	,tcp_init_sync_done_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::TcpInitSyncDoneTimeSpec>())
	,tcp_init_sync_phase_two_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::TcpInitSyncPhaseTwoTimeSpec>())
	,tcp_init_sync_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::TcpInitSyncTimeSpec>())
{
    connection_local_address->parent = this;
    children["connection-local-address"] = connection_local_address;

    connection_remote_address->parent = this;
    children["connection-remote-address"] = connection_remote_address;

    graceful_maintenance->parent = this;
    children["graceful-maintenance"] = graceful_maintenance;

    message_statistics->parent = this;
    children["message-statistics"] = message_statistics;

    performance_statistics->parent = this;
    children["performance-statistics"] = performance_statistics;

    received_notification_info->parent = this;
    children["received-notification-info"] = received_notification_info;

    send_notification_info->parent = this;
    children["send-notification-info"] = send_notification_info;

    tcp_init_sync_done_time_spec->parent = this;
    children["tcp-init-sync-done-time-spec"] = tcp_init_sync_done_time_spec;

    tcp_init_sync_phase_two_time_spec->parent = this;
    children["tcp-init-sync-phase-two-time-spec"] = tcp_init_sync_phase_two_time_spec;

    tcp_init_sync_time_spec->parent = this;
    children["tcp-init-sync-time-spec"] = tcp_init_sync_time_spec;

    yang_name = "neighbor"; yang_parent_name = "neighbor-af-table";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::~Neighbor()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::has_data() const
{
    for (std::size_t index=0; index<af_data.size(); index++)
    {
        if(af_data[index]->has_data())
            return true;
    }
    return neighbor_address.is_set
	|| active_bmp_servers.is_set
	|| actual_last_write_bytes.is_set
	|| actual_last_write_reset_bytes.is_set
	|| actual_second_last_write_bytes.is_set
	|| actual_second_last_write_reset_bytes.is_set
	|| attempted_last_write_bytes.is_set
	|| attempted_last_write_reset_bytes.is_set
	|| attempted_second_last_write_bytes.is_set
	|| attempted_second_last_write_reset_bytes.is_set
	|| bfd_minintervalval.is_set
	|| bfd_multiplierval.is_set
	|| bfd_session_created_state.is_set
	|| bfd_session_enable_mode.is_set
	|| bfd_session_state.is_set
	|| bfd_state_ts.is_set
	|| bytes_read.is_set
	|| bytes_written.is_set
	|| configured_hold_time.is_set
	|| configured_keepalive.is_set
	|| configured_min_acc_hold_time.is_set
	|| connect_retry_interval.is_set
	|| connection_admin_status.is_set
	|| connection_down_count.is_set
	|| connection_established_time.is_set
	|| connection_local_port.is_set
	|| connection_remote_port.is_set
	|| connection_state.is_set
	|| connection_up_count.is_set
	|| count_last_write.is_set
	|| description.is_set
	|| discard_as4_path.is_set
	|| discard_data_bytes.is_set
	|| dmz_link_bandwidth.is_set
	|| dynamic_neighbor.is_set
	|| ebgp_recv_dmz.is_set
	|| ebgp_send_dmz_mode.is_set
	|| ebgp_time_to_live.is_set
	|| egress_peer_engineering_enabled.is_set
	|| error_notifies_received.is_set
	|| error_notifies_sent.is_set
	|| fpbsn_offset.is_set
	|| fssn_offset.is_set
	|| gr_restart_time.is_set
	|| gr_stale_path_time.is_set
	|| graceful_restart_enabled_nbr.is_set
	|| has_internal_link.is_set
	|| hold_time.is_set
	|| ignore_connected.is_set
	|| internal_vpn_client.is_set
	|| io_armed.is_set
	|| is4_byte_as_capability_received.is_set
	|| is4_byte_as_capability_sent.is_set
	|| is_administratively_shut_down.is_set
	|| is_capability_negotiation_performed.is_set
	|| is_capability_negotiation_suppressed.is_set
	|| is_ebgp_multihop_bgpmpls_forwarding_disabled.is_set
	|| is_ebgp_peer_as_league.is_set
	|| is_ebgp_peer_common_admin.is_set
	|| is_external_neighbor_not_directly_connected.is_set
	|| is_gr_aware.is_set
	|| is_local_address_configured.is_set
	|| is_neighbor_max_prefix_shutdown.is_set
	|| is_out_of_memory_forced_up.is_set
	|| is_out_of_memory_shutdown.is_set
	|| is_passive_close.is_set
	|| is_read_disabled.is_set
	|| is_route_refresh_capability_received.is_set
	|| is_route_refresh_old_capability_received.is_set
	|| keep_alive_time.is_set
	|| last_ackd_seq_no.is_set
	|| last_k_aerror_reset.is_set
	|| last_k_aexpiry_reset.is_set
	|| last_k_anotsent_reset.is_set
	|| last_k_astart_reset.is_set
	|| last_notify_error_code.is_set
	|| last_notify_error_subcode.is_set
	|| last_write_event.is_set
	|| local_as.is_set
	|| local_as_dual_as.is_set
	|| local_as_dual_as_mode_native.is_set
	|| local_as_no_prepend.is_set
	|| local_as_replace_as.is_set
	|| messages_queued_in.is_set
	|| messages_queued_out.is_set
	|| messages_received.is_set
	|| messages_sent.is_set
	|| min_advertise_interval.is_set
	|| min_advertise_interval_msecs.is_set
	|| min_origination_interval.is_set
	|| msg_log_in.is_set
	|| msg_log_out.is_set
	|| multi_protocol_capability_received.is_set
	|| nbr_cluster_id.is_set
	|| nbr_enforce_first_as.is_set
	|| nbr_in_cluster.is_set
	|| negotiated_protocol_version.is_set
	|| neighbor_interface_handle.is_set
	|| neighbor_local_as.is_set
	|| nsr_enabled.is_set
	|| nsr_state.is_set
	|| open_check_error_code.is_set
	|| peer_error_code.is_set
	|| peer_reset_reason.is_set
	|| previous_connection_state.is_set
	|| read_armed.is_set
	|| remote_as.is_set
	|| remote_as_number.is_set
	|| reset_notification_sent.is_set
	|| reset_reason.is_set
	|| router_id.is_set
	|| rpki_allow_invalid.is_set
	|| rpki_disable.is_set
	|| rpki_signal_ibgp.is_set
	|| rpki_use_validity.is_set
	|| second_last_k_aexpiry_reset.is_set
	|| second_last_k_astart_reset.is_set
	|| second_last_write_event.is_set
	|| socket_read_bytes.is_set
	|| speaker_id.is_set
	|| standby_rp.is_set
	|| suppress4_byte_as.is_set
	|| tcp_session_open_mode.is_set
	|| tcpmss.is_set
	|| time_last_cb.is_set
	|| time_last_cb_reset.is_set
	|| time_last_fb.is_set
	|| time_since_connection_last_dropped.is_set
	|| time_since_last_read.is_set
	|| time_since_last_read_reset.is_set
	|| time_since_last_update.is_set
	|| time_since_last_write.is_set
	|| time_since_last_write_reset.is_set
	|| time_since_second_last_write.is_set
	|| time_since_second_last_write_reset.is_set
	|| tos_type.is_set
	|| tos_value.is_set
	|| ttl_security_enabled.is_set
	|| update_bytes_read.is_set
	|| update_messages_in.is_set
	|| update_messages_out.is_set
	|| vrf_name.is_set
	|| write_armed.is_set
	|| (connection_local_address !=  nullptr && connection_local_address->has_data())
	|| (connection_remote_address !=  nullptr && connection_remote_address->has_data())
	|| (graceful_maintenance !=  nullptr && graceful_maintenance->has_data())
	|| (message_statistics !=  nullptr && message_statistics->has_data())
	|| (performance_statistics !=  nullptr && performance_statistics->has_data())
	|| (received_notification_info !=  nullptr && received_notification_info->has_data())
	|| (send_notification_info !=  nullptr && send_notification_info->has_data())
	|| (tcp_init_sync_done_time_spec !=  nullptr && tcp_init_sync_done_time_spec->has_data())
	|| (tcp_init_sync_phase_two_time_spec !=  nullptr && tcp_init_sync_phase_two_time_spec->has_data())
	|| (tcp_init_sync_time_spec !=  nullptr && tcp_init_sync_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::has_operation() const
{
    for (std::size_t index=0; index<af_data.size(); index++)
    {
        if(af_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(neighbor_address.operation)
	|| is_set(active_bmp_servers.operation)
	|| is_set(actual_last_write_bytes.operation)
	|| is_set(actual_last_write_reset_bytes.operation)
	|| is_set(actual_second_last_write_bytes.operation)
	|| is_set(actual_second_last_write_reset_bytes.operation)
	|| is_set(attempted_last_write_bytes.operation)
	|| is_set(attempted_last_write_reset_bytes.operation)
	|| is_set(attempted_second_last_write_bytes.operation)
	|| is_set(attempted_second_last_write_reset_bytes.operation)
	|| is_set(bfd_minintervalval.operation)
	|| is_set(bfd_multiplierval.operation)
	|| is_set(bfd_session_created_state.operation)
	|| is_set(bfd_session_enable_mode.operation)
	|| is_set(bfd_session_state.operation)
	|| is_set(bfd_state_ts.operation)
	|| is_set(bytes_read.operation)
	|| is_set(bytes_written.operation)
	|| is_set(configured_hold_time.operation)
	|| is_set(configured_keepalive.operation)
	|| is_set(configured_min_acc_hold_time.operation)
	|| is_set(connect_retry_interval.operation)
	|| is_set(connection_admin_status.operation)
	|| is_set(connection_down_count.operation)
	|| is_set(connection_established_time.operation)
	|| is_set(connection_local_port.operation)
	|| is_set(connection_remote_port.operation)
	|| is_set(connection_state.operation)
	|| is_set(connection_up_count.operation)
	|| is_set(count_last_write.operation)
	|| is_set(description.operation)
	|| is_set(discard_as4_path.operation)
	|| is_set(discard_data_bytes.operation)
	|| is_set(dmz_link_bandwidth.operation)
	|| is_set(dynamic_neighbor.operation)
	|| is_set(ebgp_recv_dmz.operation)
	|| is_set(ebgp_send_dmz_mode.operation)
	|| is_set(ebgp_time_to_live.operation)
	|| is_set(egress_peer_engineering_enabled.operation)
	|| is_set(error_notifies_received.operation)
	|| is_set(error_notifies_sent.operation)
	|| is_set(fpbsn_offset.operation)
	|| is_set(fssn_offset.operation)
	|| is_set(gr_restart_time.operation)
	|| is_set(gr_stale_path_time.operation)
	|| is_set(graceful_restart_enabled_nbr.operation)
	|| is_set(has_internal_link.operation)
	|| is_set(hold_time.operation)
	|| is_set(ignore_connected.operation)
	|| is_set(internal_vpn_client.operation)
	|| is_set(io_armed.operation)
	|| is_set(is4_byte_as_capability_received.operation)
	|| is_set(is4_byte_as_capability_sent.operation)
	|| is_set(is_administratively_shut_down.operation)
	|| is_set(is_capability_negotiation_performed.operation)
	|| is_set(is_capability_negotiation_suppressed.operation)
	|| is_set(is_ebgp_multihop_bgpmpls_forwarding_disabled.operation)
	|| is_set(is_ebgp_peer_as_league.operation)
	|| is_set(is_ebgp_peer_common_admin.operation)
	|| is_set(is_external_neighbor_not_directly_connected.operation)
	|| is_set(is_gr_aware.operation)
	|| is_set(is_local_address_configured.operation)
	|| is_set(is_neighbor_max_prefix_shutdown.operation)
	|| is_set(is_out_of_memory_forced_up.operation)
	|| is_set(is_out_of_memory_shutdown.operation)
	|| is_set(is_passive_close.operation)
	|| is_set(is_read_disabled.operation)
	|| is_set(is_route_refresh_capability_received.operation)
	|| is_set(is_route_refresh_old_capability_received.operation)
	|| is_set(keep_alive_time.operation)
	|| is_set(last_ackd_seq_no.operation)
	|| is_set(last_k_aerror_reset.operation)
	|| is_set(last_k_aexpiry_reset.operation)
	|| is_set(last_k_anotsent_reset.operation)
	|| is_set(last_k_astart_reset.operation)
	|| is_set(last_notify_error_code.operation)
	|| is_set(last_notify_error_subcode.operation)
	|| is_set(last_write_event.operation)
	|| is_set(local_as.operation)
	|| is_set(local_as_dual_as.operation)
	|| is_set(local_as_dual_as_mode_native.operation)
	|| is_set(local_as_no_prepend.operation)
	|| is_set(local_as_replace_as.operation)
	|| is_set(messages_queued_in.operation)
	|| is_set(messages_queued_out.operation)
	|| is_set(messages_received.operation)
	|| is_set(messages_sent.operation)
	|| is_set(min_advertise_interval.operation)
	|| is_set(min_advertise_interval_msecs.operation)
	|| is_set(min_origination_interval.operation)
	|| is_set(msg_log_in.operation)
	|| is_set(msg_log_out.operation)
	|| is_set(multi_protocol_capability_received.operation)
	|| is_set(nbr_cluster_id.operation)
	|| is_set(nbr_enforce_first_as.operation)
	|| is_set(nbr_in_cluster.operation)
	|| is_set(negotiated_protocol_version.operation)
	|| is_set(neighbor_interface_handle.operation)
	|| is_set(neighbor_local_as.operation)
	|| is_set(nsr_enabled.operation)
	|| is_set(nsr_state.operation)
	|| is_set(open_check_error_code.operation)
	|| is_set(peer_error_code.operation)
	|| is_set(peer_reset_reason.operation)
	|| is_set(previous_connection_state.operation)
	|| is_set(read_armed.operation)
	|| is_set(remote_as.operation)
	|| is_set(remote_as_number.operation)
	|| is_set(reset_notification_sent.operation)
	|| is_set(reset_reason.operation)
	|| is_set(router_id.operation)
	|| is_set(rpki_allow_invalid.operation)
	|| is_set(rpki_disable.operation)
	|| is_set(rpki_signal_ibgp.operation)
	|| is_set(rpki_use_validity.operation)
	|| is_set(second_last_k_aexpiry_reset.operation)
	|| is_set(second_last_k_astart_reset.operation)
	|| is_set(second_last_write_event.operation)
	|| is_set(socket_read_bytes.operation)
	|| is_set(speaker_id.operation)
	|| is_set(standby_rp.operation)
	|| is_set(suppress4_byte_as.operation)
	|| is_set(tcp_session_open_mode.operation)
	|| is_set(tcpmss.operation)
	|| is_set(time_last_cb.operation)
	|| is_set(time_last_cb_reset.operation)
	|| is_set(time_last_fb.operation)
	|| is_set(time_since_connection_last_dropped.operation)
	|| is_set(time_since_last_read.operation)
	|| is_set(time_since_last_read_reset.operation)
	|| is_set(time_since_last_update.operation)
	|| is_set(time_since_last_write.operation)
	|| is_set(time_since_last_write_reset.operation)
	|| is_set(time_since_second_last_write.operation)
	|| is_set(time_since_second_last_write_reset.operation)
	|| is_set(tos_type.operation)
	|| is_set(tos_value.operation)
	|| is_set(ttl_security_enabled.operation)
	|| is_set(update_bytes_read.operation)
	|| is_set(update_messages_in.operation)
	|| is_set(update_messages_out.operation)
	|| is_set(vrf_name.operation)
	|| is_set(write_armed.operation)
	|| (connection_local_address !=  nullptr && connection_local_address->has_operation())
	|| (connection_remote_address !=  nullptr && connection_remote_address->has_operation())
	|| (graceful_maintenance !=  nullptr && graceful_maintenance->has_operation())
	|| (message_statistics !=  nullptr && message_statistics->has_operation())
	|| (performance_statistics !=  nullptr && performance_statistics->has_operation())
	|| (received_notification_info !=  nullptr && received_notification_info->has_operation())
	|| (send_notification_info !=  nullptr && send_notification_info->has_operation())
	|| (tcp_init_sync_done_time_spec !=  nullptr && tcp_init_sync_done_time_spec->has_operation())
	|| (tcp_init_sync_phase_two_time_spec !=  nullptr && tcp_init_sync_phase_two_time_spec->has_operation())
	|| (tcp_init_sync_time_spec !=  nullptr && tcp_init_sync_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[neighbor-address='" <<neighbor_address <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (active_bmp_servers.is_set || is_set(active_bmp_servers.operation)) leaf_name_data.push_back(active_bmp_servers.get_name_leafdata());
    if (actual_last_write_bytes.is_set || is_set(actual_last_write_bytes.operation)) leaf_name_data.push_back(actual_last_write_bytes.get_name_leafdata());
    if (actual_last_write_reset_bytes.is_set || is_set(actual_last_write_reset_bytes.operation)) leaf_name_data.push_back(actual_last_write_reset_bytes.get_name_leafdata());
    if (actual_second_last_write_bytes.is_set || is_set(actual_second_last_write_bytes.operation)) leaf_name_data.push_back(actual_second_last_write_bytes.get_name_leafdata());
    if (actual_second_last_write_reset_bytes.is_set || is_set(actual_second_last_write_reset_bytes.operation)) leaf_name_data.push_back(actual_second_last_write_reset_bytes.get_name_leafdata());
    if (attempted_last_write_bytes.is_set || is_set(attempted_last_write_bytes.operation)) leaf_name_data.push_back(attempted_last_write_bytes.get_name_leafdata());
    if (attempted_last_write_reset_bytes.is_set || is_set(attempted_last_write_reset_bytes.operation)) leaf_name_data.push_back(attempted_last_write_reset_bytes.get_name_leafdata());
    if (attempted_second_last_write_bytes.is_set || is_set(attempted_second_last_write_bytes.operation)) leaf_name_data.push_back(attempted_second_last_write_bytes.get_name_leafdata());
    if (attempted_second_last_write_reset_bytes.is_set || is_set(attempted_second_last_write_reset_bytes.operation)) leaf_name_data.push_back(attempted_second_last_write_reset_bytes.get_name_leafdata());
    if (bfd_minintervalval.is_set || is_set(bfd_minintervalval.operation)) leaf_name_data.push_back(bfd_minintervalval.get_name_leafdata());
    if (bfd_multiplierval.is_set || is_set(bfd_multiplierval.operation)) leaf_name_data.push_back(bfd_multiplierval.get_name_leafdata());
    if (bfd_session_created_state.is_set || is_set(bfd_session_created_state.operation)) leaf_name_data.push_back(bfd_session_created_state.get_name_leafdata());
    if (bfd_session_enable_mode.is_set || is_set(bfd_session_enable_mode.operation)) leaf_name_data.push_back(bfd_session_enable_mode.get_name_leafdata());
    if (bfd_session_state.is_set || is_set(bfd_session_state.operation)) leaf_name_data.push_back(bfd_session_state.get_name_leafdata());
    if (bfd_state_ts.is_set || is_set(bfd_state_ts.operation)) leaf_name_data.push_back(bfd_state_ts.get_name_leafdata());
    if (bytes_read.is_set || is_set(bytes_read.operation)) leaf_name_data.push_back(bytes_read.get_name_leafdata());
    if (bytes_written.is_set || is_set(bytes_written.operation)) leaf_name_data.push_back(bytes_written.get_name_leafdata());
    if (configured_hold_time.is_set || is_set(configured_hold_time.operation)) leaf_name_data.push_back(configured_hold_time.get_name_leafdata());
    if (configured_keepalive.is_set || is_set(configured_keepalive.operation)) leaf_name_data.push_back(configured_keepalive.get_name_leafdata());
    if (configured_min_acc_hold_time.is_set || is_set(configured_min_acc_hold_time.operation)) leaf_name_data.push_back(configured_min_acc_hold_time.get_name_leafdata());
    if (connect_retry_interval.is_set || is_set(connect_retry_interval.operation)) leaf_name_data.push_back(connect_retry_interval.get_name_leafdata());
    if (connection_admin_status.is_set || is_set(connection_admin_status.operation)) leaf_name_data.push_back(connection_admin_status.get_name_leafdata());
    if (connection_down_count.is_set || is_set(connection_down_count.operation)) leaf_name_data.push_back(connection_down_count.get_name_leafdata());
    if (connection_established_time.is_set || is_set(connection_established_time.operation)) leaf_name_data.push_back(connection_established_time.get_name_leafdata());
    if (connection_local_port.is_set || is_set(connection_local_port.operation)) leaf_name_data.push_back(connection_local_port.get_name_leafdata());
    if (connection_remote_port.is_set || is_set(connection_remote_port.operation)) leaf_name_data.push_back(connection_remote_port.get_name_leafdata());
    if (connection_state.is_set || is_set(connection_state.operation)) leaf_name_data.push_back(connection_state.get_name_leafdata());
    if (connection_up_count.is_set || is_set(connection_up_count.operation)) leaf_name_data.push_back(connection_up_count.get_name_leafdata());
    if (count_last_write.is_set || is_set(count_last_write.operation)) leaf_name_data.push_back(count_last_write.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (discard_as4_path.is_set || is_set(discard_as4_path.operation)) leaf_name_data.push_back(discard_as4_path.get_name_leafdata());
    if (discard_data_bytes.is_set || is_set(discard_data_bytes.operation)) leaf_name_data.push_back(discard_data_bytes.get_name_leafdata());
    if (dmz_link_bandwidth.is_set || is_set(dmz_link_bandwidth.operation)) leaf_name_data.push_back(dmz_link_bandwidth.get_name_leafdata());
    if (dynamic_neighbor.is_set || is_set(dynamic_neighbor.operation)) leaf_name_data.push_back(dynamic_neighbor.get_name_leafdata());
    if (ebgp_recv_dmz.is_set || is_set(ebgp_recv_dmz.operation)) leaf_name_data.push_back(ebgp_recv_dmz.get_name_leafdata());
    if (ebgp_send_dmz_mode.is_set || is_set(ebgp_send_dmz_mode.operation)) leaf_name_data.push_back(ebgp_send_dmz_mode.get_name_leafdata());
    if (ebgp_time_to_live.is_set || is_set(ebgp_time_to_live.operation)) leaf_name_data.push_back(ebgp_time_to_live.get_name_leafdata());
    if (egress_peer_engineering_enabled.is_set || is_set(egress_peer_engineering_enabled.operation)) leaf_name_data.push_back(egress_peer_engineering_enabled.get_name_leafdata());
    if (error_notifies_received.is_set || is_set(error_notifies_received.operation)) leaf_name_data.push_back(error_notifies_received.get_name_leafdata());
    if (error_notifies_sent.is_set || is_set(error_notifies_sent.operation)) leaf_name_data.push_back(error_notifies_sent.get_name_leafdata());
    if (fpbsn_offset.is_set || is_set(fpbsn_offset.operation)) leaf_name_data.push_back(fpbsn_offset.get_name_leafdata());
    if (fssn_offset.is_set || is_set(fssn_offset.operation)) leaf_name_data.push_back(fssn_offset.get_name_leafdata());
    if (gr_restart_time.is_set || is_set(gr_restart_time.operation)) leaf_name_data.push_back(gr_restart_time.get_name_leafdata());
    if (gr_stale_path_time.is_set || is_set(gr_stale_path_time.operation)) leaf_name_data.push_back(gr_stale_path_time.get_name_leafdata());
    if (graceful_restart_enabled_nbr.is_set || is_set(graceful_restart_enabled_nbr.operation)) leaf_name_data.push_back(graceful_restart_enabled_nbr.get_name_leafdata());
    if (has_internal_link.is_set || is_set(has_internal_link.operation)) leaf_name_data.push_back(has_internal_link.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.operation)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (ignore_connected.is_set || is_set(ignore_connected.operation)) leaf_name_data.push_back(ignore_connected.get_name_leafdata());
    if (internal_vpn_client.is_set || is_set(internal_vpn_client.operation)) leaf_name_data.push_back(internal_vpn_client.get_name_leafdata());
    if (io_armed.is_set || is_set(io_armed.operation)) leaf_name_data.push_back(io_armed.get_name_leafdata());
    if (is4_byte_as_capability_received.is_set || is_set(is4_byte_as_capability_received.operation)) leaf_name_data.push_back(is4_byte_as_capability_received.get_name_leafdata());
    if (is4_byte_as_capability_sent.is_set || is_set(is4_byte_as_capability_sent.operation)) leaf_name_data.push_back(is4_byte_as_capability_sent.get_name_leafdata());
    if (is_administratively_shut_down.is_set || is_set(is_administratively_shut_down.operation)) leaf_name_data.push_back(is_administratively_shut_down.get_name_leafdata());
    if (is_capability_negotiation_performed.is_set || is_set(is_capability_negotiation_performed.operation)) leaf_name_data.push_back(is_capability_negotiation_performed.get_name_leafdata());
    if (is_capability_negotiation_suppressed.is_set || is_set(is_capability_negotiation_suppressed.operation)) leaf_name_data.push_back(is_capability_negotiation_suppressed.get_name_leafdata());
    if (is_ebgp_multihop_bgpmpls_forwarding_disabled.is_set || is_set(is_ebgp_multihop_bgpmpls_forwarding_disabled.operation)) leaf_name_data.push_back(is_ebgp_multihop_bgpmpls_forwarding_disabled.get_name_leafdata());
    if (is_ebgp_peer_as_league.is_set || is_set(is_ebgp_peer_as_league.operation)) leaf_name_data.push_back(is_ebgp_peer_as_league.get_name_leafdata());
    if (is_ebgp_peer_common_admin.is_set || is_set(is_ebgp_peer_common_admin.operation)) leaf_name_data.push_back(is_ebgp_peer_common_admin.get_name_leafdata());
    if (is_external_neighbor_not_directly_connected.is_set || is_set(is_external_neighbor_not_directly_connected.operation)) leaf_name_data.push_back(is_external_neighbor_not_directly_connected.get_name_leafdata());
    if (is_gr_aware.is_set || is_set(is_gr_aware.operation)) leaf_name_data.push_back(is_gr_aware.get_name_leafdata());
    if (is_local_address_configured.is_set || is_set(is_local_address_configured.operation)) leaf_name_data.push_back(is_local_address_configured.get_name_leafdata());
    if (is_neighbor_max_prefix_shutdown.is_set || is_set(is_neighbor_max_prefix_shutdown.operation)) leaf_name_data.push_back(is_neighbor_max_prefix_shutdown.get_name_leafdata());
    if (is_out_of_memory_forced_up.is_set || is_set(is_out_of_memory_forced_up.operation)) leaf_name_data.push_back(is_out_of_memory_forced_up.get_name_leafdata());
    if (is_out_of_memory_shutdown.is_set || is_set(is_out_of_memory_shutdown.operation)) leaf_name_data.push_back(is_out_of_memory_shutdown.get_name_leafdata());
    if (is_passive_close.is_set || is_set(is_passive_close.operation)) leaf_name_data.push_back(is_passive_close.get_name_leafdata());
    if (is_read_disabled.is_set || is_set(is_read_disabled.operation)) leaf_name_data.push_back(is_read_disabled.get_name_leafdata());
    if (is_route_refresh_capability_received.is_set || is_set(is_route_refresh_capability_received.operation)) leaf_name_data.push_back(is_route_refresh_capability_received.get_name_leafdata());
    if (is_route_refresh_old_capability_received.is_set || is_set(is_route_refresh_old_capability_received.operation)) leaf_name_data.push_back(is_route_refresh_old_capability_received.get_name_leafdata());
    if (keep_alive_time.is_set || is_set(keep_alive_time.operation)) leaf_name_data.push_back(keep_alive_time.get_name_leafdata());
    if (last_ackd_seq_no.is_set || is_set(last_ackd_seq_no.operation)) leaf_name_data.push_back(last_ackd_seq_no.get_name_leafdata());
    if (last_k_aerror_reset.is_set || is_set(last_k_aerror_reset.operation)) leaf_name_data.push_back(last_k_aerror_reset.get_name_leafdata());
    if (last_k_aexpiry_reset.is_set || is_set(last_k_aexpiry_reset.operation)) leaf_name_data.push_back(last_k_aexpiry_reset.get_name_leafdata());
    if (last_k_anotsent_reset.is_set || is_set(last_k_anotsent_reset.operation)) leaf_name_data.push_back(last_k_anotsent_reset.get_name_leafdata());
    if (last_k_astart_reset.is_set || is_set(last_k_astart_reset.operation)) leaf_name_data.push_back(last_k_astart_reset.get_name_leafdata());
    if (last_notify_error_code.is_set || is_set(last_notify_error_code.operation)) leaf_name_data.push_back(last_notify_error_code.get_name_leafdata());
    if (last_notify_error_subcode.is_set || is_set(last_notify_error_subcode.operation)) leaf_name_data.push_back(last_notify_error_subcode.get_name_leafdata());
    if (last_write_event.is_set || is_set(last_write_event.operation)) leaf_name_data.push_back(last_write_event.get_name_leafdata());
    if (local_as.is_set || is_set(local_as.operation)) leaf_name_data.push_back(local_as.get_name_leafdata());
    if (local_as_dual_as.is_set || is_set(local_as_dual_as.operation)) leaf_name_data.push_back(local_as_dual_as.get_name_leafdata());
    if (local_as_dual_as_mode_native.is_set || is_set(local_as_dual_as_mode_native.operation)) leaf_name_data.push_back(local_as_dual_as_mode_native.get_name_leafdata());
    if (local_as_no_prepend.is_set || is_set(local_as_no_prepend.operation)) leaf_name_data.push_back(local_as_no_prepend.get_name_leafdata());
    if (local_as_replace_as.is_set || is_set(local_as_replace_as.operation)) leaf_name_data.push_back(local_as_replace_as.get_name_leafdata());
    if (messages_queued_in.is_set || is_set(messages_queued_in.operation)) leaf_name_data.push_back(messages_queued_in.get_name_leafdata());
    if (messages_queued_out.is_set || is_set(messages_queued_out.operation)) leaf_name_data.push_back(messages_queued_out.get_name_leafdata());
    if (messages_received.is_set || is_set(messages_received.operation)) leaf_name_data.push_back(messages_received.get_name_leafdata());
    if (messages_sent.is_set || is_set(messages_sent.operation)) leaf_name_data.push_back(messages_sent.get_name_leafdata());
    if (min_advertise_interval.is_set || is_set(min_advertise_interval.operation)) leaf_name_data.push_back(min_advertise_interval.get_name_leafdata());
    if (min_advertise_interval_msecs.is_set || is_set(min_advertise_interval_msecs.operation)) leaf_name_data.push_back(min_advertise_interval_msecs.get_name_leafdata());
    if (min_origination_interval.is_set || is_set(min_origination_interval.operation)) leaf_name_data.push_back(min_origination_interval.get_name_leafdata());
    if (msg_log_in.is_set || is_set(msg_log_in.operation)) leaf_name_data.push_back(msg_log_in.get_name_leafdata());
    if (msg_log_out.is_set || is_set(msg_log_out.operation)) leaf_name_data.push_back(msg_log_out.get_name_leafdata());
    if (multi_protocol_capability_received.is_set || is_set(multi_protocol_capability_received.operation)) leaf_name_data.push_back(multi_protocol_capability_received.get_name_leafdata());
    if (nbr_cluster_id.is_set || is_set(nbr_cluster_id.operation)) leaf_name_data.push_back(nbr_cluster_id.get_name_leafdata());
    if (nbr_enforce_first_as.is_set || is_set(nbr_enforce_first_as.operation)) leaf_name_data.push_back(nbr_enforce_first_as.get_name_leafdata());
    if (nbr_in_cluster.is_set || is_set(nbr_in_cluster.operation)) leaf_name_data.push_back(nbr_in_cluster.get_name_leafdata());
    if (negotiated_protocol_version.is_set || is_set(negotiated_protocol_version.operation)) leaf_name_data.push_back(negotiated_protocol_version.get_name_leafdata());
    if (neighbor_interface_handle.is_set || is_set(neighbor_interface_handle.operation)) leaf_name_data.push_back(neighbor_interface_handle.get_name_leafdata());
    if (neighbor_local_as.is_set || is_set(neighbor_local_as.operation)) leaf_name_data.push_back(neighbor_local_as.get_name_leafdata());
    if (nsr_enabled.is_set || is_set(nsr_enabled.operation)) leaf_name_data.push_back(nsr_enabled.get_name_leafdata());
    if (nsr_state.is_set || is_set(nsr_state.operation)) leaf_name_data.push_back(nsr_state.get_name_leafdata());
    if (open_check_error_code.is_set || is_set(open_check_error_code.operation)) leaf_name_data.push_back(open_check_error_code.get_name_leafdata());
    if (peer_error_code.is_set || is_set(peer_error_code.operation)) leaf_name_data.push_back(peer_error_code.get_name_leafdata());
    if (peer_reset_reason.is_set || is_set(peer_reset_reason.operation)) leaf_name_data.push_back(peer_reset_reason.get_name_leafdata());
    if (previous_connection_state.is_set || is_set(previous_connection_state.operation)) leaf_name_data.push_back(previous_connection_state.get_name_leafdata());
    if (read_armed.is_set || is_set(read_armed.operation)) leaf_name_data.push_back(read_armed.get_name_leafdata());
    if (remote_as.is_set || is_set(remote_as.operation)) leaf_name_data.push_back(remote_as.get_name_leafdata());
    if (remote_as_number.is_set || is_set(remote_as_number.operation)) leaf_name_data.push_back(remote_as_number.get_name_leafdata());
    if (reset_notification_sent.is_set || is_set(reset_notification_sent.operation)) leaf_name_data.push_back(reset_notification_sent.get_name_leafdata());
    if (reset_reason.is_set || is_set(reset_reason.operation)) leaf_name_data.push_back(reset_reason.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (rpki_allow_invalid.is_set || is_set(rpki_allow_invalid.operation)) leaf_name_data.push_back(rpki_allow_invalid.get_name_leafdata());
    if (rpki_disable.is_set || is_set(rpki_disable.operation)) leaf_name_data.push_back(rpki_disable.get_name_leafdata());
    if (rpki_signal_ibgp.is_set || is_set(rpki_signal_ibgp.operation)) leaf_name_data.push_back(rpki_signal_ibgp.get_name_leafdata());
    if (rpki_use_validity.is_set || is_set(rpki_use_validity.operation)) leaf_name_data.push_back(rpki_use_validity.get_name_leafdata());
    if (second_last_k_aexpiry_reset.is_set || is_set(second_last_k_aexpiry_reset.operation)) leaf_name_data.push_back(second_last_k_aexpiry_reset.get_name_leafdata());
    if (second_last_k_astart_reset.is_set || is_set(second_last_k_astart_reset.operation)) leaf_name_data.push_back(second_last_k_astart_reset.get_name_leafdata());
    if (second_last_write_event.is_set || is_set(second_last_write_event.operation)) leaf_name_data.push_back(second_last_write_event.get_name_leafdata());
    if (socket_read_bytes.is_set || is_set(socket_read_bytes.operation)) leaf_name_data.push_back(socket_read_bytes.get_name_leafdata());
    if (speaker_id.is_set || is_set(speaker_id.operation)) leaf_name_data.push_back(speaker_id.get_name_leafdata());
    if (standby_rp.is_set || is_set(standby_rp.operation)) leaf_name_data.push_back(standby_rp.get_name_leafdata());
    if (suppress4_byte_as.is_set || is_set(suppress4_byte_as.operation)) leaf_name_data.push_back(suppress4_byte_as.get_name_leafdata());
    if (tcp_session_open_mode.is_set || is_set(tcp_session_open_mode.operation)) leaf_name_data.push_back(tcp_session_open_mode.get_name_leafdata());
    if (tcpmss.is_set || is_set(tcpmss.operation)) leaf_name_data.push_back(tcpmss.get_name_leafdata());
    if (time_last_cb.is_set || is_set(time_last_cb.operation)) leaf_name_data.push_back(time_last_cb.get_name_leafdata());
    if (time_last_cb_reset.is_set || is_set(time_last_cb_reset.operation)) leaf_name_data.push_back(time_last_cb_reset.get_name_leafdata());
    if (time_last_fb.is_set || is_set(time_last_fb.operation)) leaf_name_data.push_back(time_last_fb.get_name_leafdata());
    if (time_since_connection_last_dropped.is_set || is_set(time_since_connection_last_dropped.operation)) leaf_name_data.push_back(time_since_connection_last_dropped.get_name_leafdata());
    if (time_since_last_read.is_set || is_set(time_since_last_read.operation)) leaf_name_data.push_back(time_since_last_read.get_name_leafdata());
    if (time_since_last_read_reset.is_set || is_set(time_since_last_read_reset.operation)) leaf_name_data.push_back(time_since_last_read_reset.get_name_leafdata());
    if (time_since_last_update.is_set || is_set(time_since_last_update.operation)) leaf_name_data.push_back(time_since_last_update.get_name_leafdata());
    if (time_since_last_write.is_set || is_set(time_since_last_write.operation)) leaf_name_data.push_back(time_since_last_write.get_name_leafdata());
    if (time_since_last_write_reset.is_set || is_set(time_since_last_write_reset.operation)) leaf_name_data.push_back(time_since_last_write_reset.get_name_leafdata());
    if (time_since_second_last_write.is_set || is_set(time_since_second_last_write.operation)) leaf_name_data.push_back(time_since_second_last_write.get_name_leafdata());
    if (time_since_second_last_write_reset.is_set || is_set(time_since_second_last_write_reset.operation)) leaf_name_data.push_back(time_since_second_last_write_reset.get_name_leafdata());
    if (tos_type.is_set || is_set(tos_type.operation)) leaf_name_data.push_back(tos_type.get_name_leafdata());
    if (tos_value.is_set || is_set(tos_value.operation)) leaf_name_data.push_back(tos_value.get_name_leafdata());
    if (ttl_security_enabled.is_set || is_set(ttl_security_enabled.operation)) leaf_name_data.push_back(ttl_security_enabled.get_name_leafdata());
    if (update_bytes_read.is_set || is_set(update_bytes_read.operation)) leaf_name_data.push_back(update_bytes_read.get_name_leafdata());
    if (update_messages_in.is_set || is_set(update_messages_in.operation)) leaf_name_data.push_back(update_messages_in.get_name_leafdata());
    if (update_messages_out.is_set || is_set(update_messages_out.operation)) leaf_name_data.push_back(update_messages_out.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (write_armed.is_set || is_set(write_armed.operation)) leaf_name_data.push_back(write_armed.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "af-data")
    {
        for(auto const & c : af_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::AfData>();
        c->parent = this;
        af_data.push_back(std::move(c));
        children[segment_path] = af_data.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "connection-local-address")
    {
        if(connection_local_address != nullptr)
        {
            children["connection-local-address"] = connection_local_address;
        }
        else
        {
            connection_local_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress>();
            connection_local_address->parent = this;
            children["connection-local-address"] = connection_local_address;
        }
        return children.at("connection-local-address");
    }

    if(child_yang_name == "connection-remote-address")
    {
        if(connection_remote_address != nullptr)
        {
            children["connection-remote-address"] = connection_remote_address;
        }
        else
        {
            connection_remote_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress>();
            connection_remote_address->parent = this;
            children["connection-remote-address"] = connection_remote_address;
        }
        return children.at("connection-remote-address");
    }

    if(child_yang_name == "graceful-maintenance")
    {
        if(graceful_maintenance != nullptr)
        {
            children["graceful-maintenance"] = graceful_maintenance;
        }
        else
        {
            graceful_maintenance = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::GracefulMaintenance>();
            graceful_maintenance->parent = this;
            children["graceful-maintenance"] = graceful_maintenance;
        }
        return children.at("graceful-maintenance");
    }

    if(child_yang_name == "message-statistics")
    {
        if(message_statistics != nullptr)
        {
            children["message-statistics"] = message_statistics;
        }
        else
        {
            message_statistics = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics>();
            message_statistics->parent = this;
            children["message-statistics"] = message_statistics;
        }
        return children.at("message-statistics");
    }

    if(child_yang_name == "performance-statistics")
    {
        if(performance_statistics != nullptr)
        {
            children["performance-statistics"] = performance_statistics;
        }
        else
        {
            performance_statistics = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::PerformanceStatistics>();
            performance_statistics->parent = this;
            children["performance-statistics"] = performance_statistics;
        }
        return children.at("performance-statistics");
    }

    if(child_yang_name == "received-notification-info")
    {
        if(received_notification_info != nullptr)
        {
            children["received-notification-info"] = received_notification_info;
        }
        else
        {
            received_notification_info = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ReceivedNotificationInfo>();
            received_notification_info->parent = this;
            children["received-notification-info"] = received_notification_info;
        }
        return children.at("received-notification-info");
    }

    if(child_yang_name == "send-notification-info")
    {
        if(send_notification_info != nullptr)
        {
            children["send-notification-info"] = send_notification_info;
        }
        else
        {
            send_notification_info = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::SendNotificationInfo>();
            send_notification_info->parent = this;
            children["send-notification-info"] = send_notification_info;
        }
        return children.at("send-notification-info");
    }

    if(child_yang_name == "tcp-init-sync-done-time-spec")
    {
        if(tcp_init_sync_done_time_spec != nullptr)
        {
            children["tcp-init-sync-done-time-spec"] = tcp_init_sync_done_time_spec;
        }
        else
        {
            tcp_init_sync_done_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::TcpInitSyncDoneTimeSpec>();
            tcp_init_sync_done_time_spec->parent = this;
            children["tcp-init-sync-done-time-spec"] = tcp_init_sync_done_time_spec;
        }
        return children.at("tcp-init-sync-done-time-spec");
    }

    if(child_yang_name == "tcp-init-sync-phase-two-time-spec")
    {
        if(tcp_init_sync_phase_two_time_spec != nullptr)
        {
            children["tcp-init-sync-phase-two-time-spec"] = tcp_init_sync_phase_two_time_spec;
        }
        else
        {
            tcp_init_sync_phase_two_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::TcpInitSyncPhaseTwoTimeSpec>();
            tcp_init_sync_phase_two_time_spec->parent = this;
            children["tcp-init-sync-phase-two-time-spec"] = tcp_init_sync_phase_two_time_spec;
        }
        return children.at("tcp-init-sync-phase-two-time-spec");
    }

    if(child_yang_name == "tcp-init-sync-time-spec")
    {
        if(tcp_init_sync_time_spec != nullptr)
        {
            children["tcp-init-sync-time-spec"] = tcp_init_sync_time_spec;
        }
        else
        {
            tcp_init_sync_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::TcpInitSyncTimeSpec>();
            tcp_init_sync_time_spec->parent = this;
            children["tcp-init-sync-time-spec"] = tcp_init_sync_time_spec;
        }
        return children.at("tcp-init-sync-time-spec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::get_children()
{
    for (auto const & c : af_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("connection-local-address") == children.end())
    {
        if(connection_local_address != nullptr)
        {
            children["connection-local-address"] = connection_local_address;
        }
    }

    if(children.find("connection-remote-address") == children.end())
    {
        if(connection_remote_address != nullptr)
        {
            children["connection-remote-address"] = connection_remote_address;
        }
    }

    if(children.find("graceful-maintenance") == children.end())
    {
        if(graceful_maintenance != nullptr)
        {
            children["graceful-maintenance"] = graceful_maintenance;
        }
    }

    if(children.find("message-statistics") == children.end())
    {
        if(message_statistics != nullptr)
        {
            children["message-statistics"] = message_statistics;
        }
    }

    if(children.find("performance-statistics") == children.end())
    {
        if(performance_statistics != nullptr)
        {
            children["performance-statistics"] = performance_statistics;
        }
    }

    if(children.find("received-notification-info") == children.end())
    {
        if(received_notification_info != nullptr)
        {
            children["received-notification-info"] = received_notification_info;
        }
    }

    if(children.find("send-notification-info") == children.end())
    {
        if(send_notification_info != nullptr)
        {
            children["send-notification-info"] = send_notification_info;
        }
    }

    if(children.find("tcp-init-sync-done-time-spec") == children.end())
    {
        if(tcp_init_sync_done_time_spec != nullptr)
        {
            children["tcp-init-sync-done-time-spec"] = tcp_init_sync_done_time_spec;
        }
    }

    if(children.find("tcp-init-sync-phase-two-time-spec") == children.end())
    {
        if(tcp_init_sync_phase_two_time_spec != nullptr)
        {
            children["tcp-init-sync-phase-two-time-spec"] = tcp_init_sync_phase_two_time_spec;
        }
    }

    if(children.find("tcp-init-sync-time-spec") == children.end())
    {
        if(tcp_init_sync_time_spec != nullptr)
        {
            children["tcp-init-sync-time-spec"] = tcp_init_sync_time_spec;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "active-bmp-servers")
    {
        active_bmp_servers = value;
    }
    if(value_path == "actual-last-write-bytes")
    {
        actual_last_write_bytes = value;
    }
    if(value_path == "actual-last-write-reset-bytes")
    {
        actual_last_write_reset_bytes = value;
    }
    if(value_path == "actual-second-last-write-bytes")
    {
        actual_second_last_write_bytes = value;
    }
    if(value_path == "actual-second-last-write-reset-bytes")
    {
        actual_second_last_write_reset_bytes = value;
    }
    if(value_path == "attempted-last-write-bytes")
    {
        attempted_last_write_bytes = value;
    }
    if(value_path == "attempted-last-write-reset-bytes")
    {
        attempted_last_write_reset_bytes = value;
    }
    if(value_path == "attempted-second-last-write-bytes")
    {
        attempted_second_last_write_bytes = value;
    }
    if(value_path == "attempted-second-last-write-reset-bytes")
    {
        attempted_second_last_write_reset_bytes = value;
    }
    if(value_path == "bfd-minintervalval")
    {
        bfd_minintervalval = value;
    }
    if(value_path == "bfd-multiplierval")
    {
        bfd_multiplierval = value;
    }
    if(value_path == "bfd-session-created-state")
    {
        bfd_session_created_state = value;
    }
    if(value_path == "bfd-session-enable-mode")
    {
        bfd_session_enable_mode = value;
    }
    if(value_path == "bfd-session-state")
    {
        bfd_session_state = value;
    }
    if(value_path == "bfd-state-ts")
    {
        bfd_state_ts = value;
    }
    if(value_path == "bytes-read")
    {
        bytes_read = value;
    }
    if(value_path == "bytes-written")
    {
        bytes_written = value;
    }
    if(value_path == "configured-hold-time")
    {
        configured_hold_time = value;
    }
    if(value_path == "configured-keepalive")
    {
        configured_keepalive = value;
    }
    if(value_path == "configured-min-acc-hold-time")
    {
        configured_min_acc_hold_time = value;
    }
    if(value_path == "connect-retry-interval")
    {
        connect_retry_interval = value;
    }
    if(value_path == "connection-admin-status")
    {
        connection_admin_status = value;
    }
    if(value_path == "connection-down-count")
    {
        connection_down_count = value;
    }
    if(value_path == "connection-established-time")
    {
        connection_established_time = value;
    }
    if(value_path == "connection-local-port")
    {
        connection_local_port = value;
    }
    if(value_path == "connection-remote-port")
    {
        connection_remote_port = value;
    }
    if(value_path == "connection-state")
    {
        connection_state = value;
    }
    if(value_path == "connection-up-count")
    {
        connection_up_count = value;
    }
    if(value_path == "count-last-write")
    {
        count_last_write = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "discard-as4-path")
    {
        discard_as4_path = value;
    }
    if(value_path == "discard-data-bytes")
    {
        discard_data_bytes = value;
    }
    if(value_path == "dmz-link-bandwidth")
    {
        dmz_link_bandwidth = value;
    }
    if(value_path == "dynamic-neighbor")
    {
        dynamic_neighbor = value;
    }
    if(value_path == "ebgp-recv-dmz")
    {
        ebgp_recv_dmz = value;
    }
    if(value_path == "ebgp-send-dmz-mode")
    {
        ebgp_send_dmz_mode = value;
    }
    if(value_path == "ebgp-time-to-live")
    {
        ebgp_time_to_live = value;
    }
    if(value_path == "egress-peer-engineering-enabled")
    {
        egress_peer_engineering_enabled = value;
    }
    if(value_path == "error-notifies-received")
    {
        error_notifies_received = value;
    }
    if(value_path == "error-notifies-sent")
    {
        error_notifies_sent = value;
    }
    if(value_path == "fpbsn-offset")
    {
        fpbsn_offset = value;
    }
    if(value_path == "fssn-offset")
    {
        fssn_offset = value;
    }
    if(value_path == "gr-restart-time")
    {
        gr_restart_time = value;
    }
    if(value_path == "gr-stale-path-time")
    {
        gr_stale_path_time = value;
    }
    if(value_path == "graceful-restart-enabled-nbr")
    {
        graceful_restart_enabled_nbr = value;
    }
    if(value_path == "has-internal-link")
    {
        has_internal_link = value;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
    }
    if(value_path == "ignore-connected")
    {
        ignore_connected = value;
    }
    if(value_path == "internal-vpn-client")
    {
        internal_vpn_client = value;
    }
    if(value_path == "io-armed")
    {
        io_armed = value;
    }
    if(value_path == "is4-byte-as-capability-received")
    {
        is4_byte_as_capability_received = value;
    }
    if(value_path == "is4-byte-as-capability-sent")
    {
        is4_byte_as_capability_sent = value;
    }
    if(value_path == "is-administratively-shut-down")
    {
        is_administratively_shut_down = value;
    }
    if(value_path == "is-capability-negotiation-performed")
    {
        is_capability_negotiation_performed = value;
    }
    if(value_path == "is-capability-negotiation-suppressed")
    {
        is_capability_negotiation_suppressed = value;
    }
    if(value_path == "is-ebgp-multihop-bgpmpls-forwarding-disabled")
    {
        is_ebgp_multihop_bgpmpls_forwarding_disabled = value;
    }
    if(value_path == "is-ebgp-peer-as-league")
    {
        is_ebgp_peer_as_league = value;
    }
    if(value_path == "is-ebgp-peer-common-admin")
    {
        is_ebgp_peer_common_admin = value;
    }
    if(value_path == "is-external-neighbor-not-directly-connected")
    {
        is_external_neighbor_not_directly_connected = value;
    }
    if(value_path == "is-gr-aware")
    {
        is_gr_aware = value;
    }
    if(value_path == "is-local-address-configured")
    {
        is_local_address_configured = value;
    }
    if(value_path == "is-neighbor-max-prefix-shutdown")
    {
        is_neighbor_max_prefix_shutdown = value;
    }
    if(value_path == "is-out-of-memory-forced-up")
    {
        is_out_of_memory_forced_up = value;
    }
    if(value_path == "is-out-of-memory-shutdown")
    {
        is_out_of_memory_shutdown = value;
    }
    if(value_path == "is-passive-close")
    {
        is_passive_close = value;
    }
    if(value_path == "is-read-disabled")
    {
        is_read_disabled = value;
    }
    if(value_path == "is-route-refresh-capability-received")
    {
        is_route_refresh_capability_received = value;
    }
    if(value_path == "is-route-refresh-old-capability-received")
    {
        is_route_refresh_old_capability_received = value;
    }
    if(value_path == "keep-alive-time")
    {
        keep_alive_time = value;
    }
    if(value_path == "last-ackd-seq-no")
    {
        last_ackd_seq_no = value;
    }
    if(value_path == "last-k-aerror-reset")
    {
        last_k_aerror_reset = value;
    }
    if(value_path == "last-k-aexpiry-reset")
    {
        last_k_aexpiry_reset = value;
    }
    if(value_path == "last-k-anotsent-reset")
    {
        last_k_anotsent_reset = value;
    }
    if(value_path == "last-k-astart-reset")
    {
        last_k_astart_reset = value;
    }
    if(value_path == "last-notify-error-code")
    {
        last_notify_error_code = value;
    }
    if(value_path == "last-notify-error-subcode")
    {
        last_notify_error_subcode = value;
    }
    if(value_path == "last-write-event")
    {
        last_write_event = value;
    }
    if(value_path == "local-as")
    {
        local_as = value;
    }
    if(value_path == "local-as-dual-as")
    {
        local_as_dual_as = value;
    }
    if(value_path == "local-as-dual-as-mode-native")
    {
        local_as_dual_as_mode_native = value;
    }
    if(value_path == "local-as-no-prepend")
    {
        local_as_no_prepend = value;
    }
    if(value_path == "local-as-replace-as")
    {
        local_as_replace_as = value;
    }
    if(value_path == "messages-queued-in")
    {
        messages_queued_in = value;
    }
    if(value_path == "messages-queued-out")
    {
        messages_queued_out = value;
    }
    if(value_path == "messages-received")
    {
        messages_received = value;
    }
    if(value_path == "messages-sent")
    {
        messages_sent = value;
    }
    if(value_path == "min-advertise-interval")
    {
        min_advertise_interval = value;
    }
    if(value_path == "min-advertise-interval-msecs")
    {
        min_advertise_interval_msecs = value;
    }
    if(value_path == "min-origination-interval")
    {
        min_origination_interval = value;
    }
    if(value_path == "msg-log-in")
    {
        msg_log_in = value;
    }
    if(value_path == "msg-log-out")
    {
        msg_log_out = value;
    }
    if(value_path == "multi-protocol-capability-received")
    {
        multi_protocol_capability_received = value;
    }
    if(value_path == "nbr-cluster-id")
    {
        nbr_cluster_id = value;
    }
    if(value_path == "nbr-enforce-first-as")
    {
        nbr_enforce_first_as = value;
    }
    if(value_path == "nbr-in-cluster")
    {
        nbr_in_cluster = value;
    }
    if(value_path == "negotiated-protocol-version")
    {
        negotiated_protocol_version = value;
    }
    if(value_path == "neighbor-interface-handle")
    {
        neighbor_interface_handle = value;
    }
    if(value_path == "neighbor-local-as")
    {
        neighbor_local_as = value;
    }
    if(value_path == "nsr-enabled")
    {
        nsr_enabled = value;
    }
    if(value_path == "nsr-state")
    {
        nsr_state = value;
    }
    if(value_path == "open-check-error-code")
    {
        open_check_error_code = value;
    }
    if(value_path == "peer-error-code")
    {
        peer_error_code = value;
    }
    if(value_path == "peer-reset-reason")
    {
        peer_reset_reason = value;
    }
    if(value_path == "previous-connection-state")
    {
        previous_connection_state = value;
    }
    if(value_path == "read-armed")
    {
        read_armed = value;
    }
    if(value_path == "remote-as")
    {
        remote_as = value;
    }
    if(value_path == "remote-as-number")
    {
        remote_as_number = value;
    }
    if(value_path == "reset-notification-sent")
    {
        reset_notification_sent = value;
    }
    if(value_path == "reset-reason")
    {
        reset_reason = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
    if(value_path == "rpki-allow-invalid")
    {
        rpki_allow_invalid = value;
    }
    if(value_path == "rpki-disable")
    {
        rpki_disable = value;
    }
    if(value_path == "rpki-signal-ibgp")
    {
        rpki_signal_ibgp = value;
    }
    if(value_path == "rpki-use-validity")
    {
        rpki_use_validity = value;
    }
    if(value_path == "second-last-k-aexpiry-reset")
    {
        second_last_k_aexpiry_reset = value;
    }
    if(value_path == "second-last-k-astart-reset")
    {
        second_last_k_astart_reset = value;
    }
    if(value_path == "second-last-write-event")
    {
        second_last_write_event = value;
    }
    if(value_path == "socket-read-bytes")
    {
        socket_read_bytes = value;
    }
    if(value_path == "speaker-id")
    {
        speaker_id = value;
    }
    if(value_path == "standby-rp")
    {
        standby_rp = value;
    }
    if(value_path == "suppress4-byte-as")
    {
        suppress4_byte_as = value;
    }
    if(value_path == "tcp-session-open-mode")
    {
        tcp_session_open_mode = value;
    }
    if(value_path == "tcpmss")
    {
        tcpmss = value;
    }
    if(value_path == "time-last-cb")
    {
        time_last_cb = value;
    }
    if(value_path == "time-last-cb-reset")
    {
        time_last_cb_reset = value;
    }
    if(value_path == "time-last-fb")
    {
        time_last_fb = value;
    }
    if(value_path == "time-since-connection-last-dropped")
    {
        time_since_connection_last_dropped = value;
    }
    if(value_path == "time-since-last-read")
    {
        time_since_last_read = value;
    }
    if(value_path == "time-since-last-read-reset")
    {
        time_since_last_read_reset = value;
    }
    if(value_path == "time-since-last-update")
    {
        time_since_last_update = value;
    }
    if(value_path == "time-since-last-write")
    {
        time_since_last_write = value;
    }
    if(value_path == "time-since-last-write-reset")
    {
        time_since_last_write_reset = value;
    }
    if(value_path == "time-since-second-last-write")
    {
        time_since_second_last_write = value;
    }
    if(value_path == "time-since-second-last-write-reset")
    {
        time_since_second_last_write_reset = value;
    }
    if(value_path == "tos-type")
    {
        tos_type = value;
    }
    if(value_path == "tos-value")
    {
        tos_value = value;
    }
    if(value_path == "ttl-security-enabled")
    {
        ttl_security_enabled = value;
    }
    if(value_path == "update-bytes-read")
    {
        update_bytes_read = value;
    }
    if(value_path == "update-messages-in")
    {
        update_messages_in = value;
    }
    if(value_path == "update-messages-out")
    {
        update_messages_out = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "write-armed")
    {
        write_armed = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::ConnectionLocalAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;
    children["ipv4sr-policy-address"] = ipv4sr_policy_address;

    ipv6sr_policy_address->parent = this;
    children["ipv6sr-policy-address"] = ipv6sr_policy_address;

    l2vpn_mspw_address->parent = this;
    children["l2vpn-mspw-address"] = l2vpn_mspw_address;

    l2vpnvpls_address->parent = this;
    children["l2vpnvpls-address"] = l2vpnvpls_address;

    yang_name = "connection-local-address"; yang_parent_name = "neighbor";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::~ConnectionLocalAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection-local-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConnectionLocalAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        else
        {
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress>();
            ipv4sr_policy_address->parent = this;
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        return children.at("ipv4sr-policy-address");
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        else
        {
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress>();
            ipv6sr_policy_address->parent = this;
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        return children.at("ipv6sr-policy-address");
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        else
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress>();
            l2vpn_mspw_address->parent = this;
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        return children.at("l2vpn-mspw-address");
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        else
        {
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::get_children()
{
    if(children.find("ipv4sr-policy-address") == children.end())
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
    }

    if(children.find("ipv6sr-policy-address") == children.end())
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
    }

    if(children.find("l2vpn-mspw-address") == children.end())
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
    }

    if(children.find("l2vpnvpls-address") == children.end())
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "connection-local-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "connection-local-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "connection-local-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "connection-local-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionLocalAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::ConnectionRemoteAddress()
    :
    afi{YType::enumeration, "afi"},
    ipv4_address{YType::str, "ipv4-address"},
    ipv4_flowspec_address{YType::str, "ipv4-flowspec-address"},
    ipv4_label_address{YType::str, "ipv4-label-address"},
    ipv4_mcast_address{YType::str, "ipv4-mcast-address"},
    ipv4_tunnel_address{YType::str, "ipv4-tunnel-address"},
    ipv4mdt_address{YType::str, "ipv4mdt-address"},
    ipv4mvpn_address{YType::str, "ipv4mvpn-address"},
    ipv4vpn_address{YType::str, "ipv4vpn-address"},
    ipv4vpn_flowspec_address{YType::str, "ipv4vpn-flowspec-address"},
    ipv4vpna_mcastddress{YType::str, "ipv4vpna-mcastddress"},
    ipv6_address{YType::str, "ipv6-address"},
    ipv6_flowspec_address{YType::str, "ipv6-flowspec-address"},
    ipv6_label_address{YType::str, "ipv6-label-address"},
    ipv6_mcast_address{YType::str, "ipv6-mcast-address"},
    ipv6mvpn_address{YType::str, "ipv6mvpn-address"},
    ipv6vpn_address{YType::str, "ipv6vpn-address"},
    ipv6vpn_flowspec_address{YType::str, "ipv6vpn-flowspec-address"},
    ipv6vpn_mcast_address{YType::str, "ipv6vpn-mcast-address"},
    l2vpn_evpn_address{YType::str, "l2vpn-evpn-address"},
    ls_ls_address{YType::str, "ls-ls-address"},
    rt_constraint_address{YType::str, "rt-constraint-address"}
    	,
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;
    children["ipv4sr-policy-address"] = ipv4sr_policy_address;

    ipv6sr_policy_address->parent = this;
    children["ipv6sr-policy-address"] = ipv6sr_policy_address;

    l2vpn_mspw_address->parent = this;
    children["l2vpn-mspw-address"] = l2vpn_mspw_address;

    l2vpnvpls_address->parent = this;
    children["l2vpnvpls-address"] = l2vpnvpls_address;

    yang_name = "connection-remote-address"; yang_parent_name = "neighbor";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::~ConnectionRemoteAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::has_data() const
{
    return afi.is_set
	|| ipv4_address.is_set
	|| ipv4_flowspec_address.is_set
	|| ipv4_label_address.is_set
	|| ipv4_mcast_address.is_set
	|| ipv4_tunnel_address.is_set
	|| ipv4mdt_address.is_set
	|| ipv4mvpn_address.is_set
	|| ipv4vpn_address.is_set
	|| ipv4vpn_flowspec_address.is_set
	|| ipv4vpna_mcastddress.is_set
	|| ipv6_address.is_set
	|| ipv6_flowspec_address.is_set
	|| ipv6_label_address.is_set
	|| ipv6_mcast_address.is_set
	|| ipv6mvpn_address.is_set
	|| ipv6vpn_address.is_set
	|| ipv6vpn_flowspec_address.is_set
	|| ipv6vpn_mcast_address.is_set
	|| l2vpn_evpn_address.is_set
	|| ls_ls_address.is_set
	|| rt_constraint_address.is_set
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_data())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_data())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_data())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(afi.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv4_flowspec_address.operation)
	|| is_set(ipv4_label_address.operation)
	|| is_set(ipv4_mcast_address.operation)
	|| is_set(ipv4_tunnel_address.operation)
	|| is_set(ipv4mdt_address.operation)
	|| is_set(ipv4mvpn_address.operation)
	|| is_set(ipv4vpn_address.operation)
	|| is_set(ipv4vpn_flowspec_address.operation)
	|| is_set(ipv4vpna_mcastddress.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(ipv6_flowspec_address.operation)
	|| is_set(ipv6_label_address.operation)
	|| is_set(ipv6_mcast_address.operation)
	|| is_set(ipv6mvpn_address.operation)
	|| is_set(ipv6vpn_address.operation)
	|| is_set(ipv6vpn_flowspec_address.operation)
	|| is_set(ipv6vpn_mcast_address.operation)
	|| is_set(l2vpn_evpn_address.operation)
	|| is_set(ls_ls_address.operation)
	|| is_set(rt_constraint_address.operation)
	|| (ipv4sr_policy_address !=  nullptr && ipv4sr_policy_address->has_operation())
	|| (ipv6sr_policy_address !=  nullptr && ipv6sr_policy_address->has_operation())
	|| (l2vpn_mspw_address !=  nullptr && l2vpn_mspw_address->has_operation())
	|| (l2vpnvpls_address !=  nullptr && l2vpnvpls_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection-remote-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConnectionRemoteAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi.is_set || is_set(afi.operation)) leaf_name_data.push_back(afi.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv4_flowspec_address.is_set || is_set(ipv4_flowspec_address.operation)) leaf_name_data.push_back(ipv4_flowspec_address.get_name_leafdata());
    if (ipv4_label_address.is_set || is_set(ipv4_label_address.operation)) leaf_name_data.push_back(ipv4_label_address.get_name_leafdata());
    if (ipv4_mcast_address.is_set || is_set(ipv4_mcast_address.operation)) leaf_name_data.push_back(ipv4_mcast_address.get_name_leafdata());
    if (ipv4_tunnel_address.is_set || is_set(ipv4_tunnel_address.operation)) leaf_name_data.push_back(ipv4_tunnel_address.get_name_leafdata());
    if (ipv4mdt_address.is_set || is_set(ipv4mdt_address.operation)) leaf_name_data.push_back(ipv4mdt_address.get_name_leafdata());
    if (ipv4mvpn_address.is_set || is_set(ipv4mvpn_address.operation)) leaf_name_data.push_back(ipv4mvpn_address.get_name_leafdata());
    if (ipv4vpn_address.is_set || is_set(ipv4vpn_address.operation)) leaf_name_data.push_back(ipv4vpn_address.get_name_leafdata());
    if (ipv4vpn_flowspec_address.is_set || is_set(ipv4vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv4vpn_flowspec_address.get_name_leafdata());
    if (ipv4vpna_mcastddress.is_set || is_set(ipv4vpna_mcastddress.operation)) leaf_name_data.push_back(ipv4vpna_mcastddress.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (ipv6_flowspec_address.is_set || is_set(ipv6_flowspec_address.operation)) leaf_name_data.push_back(ipv6_flowspec_address.get_name_leafdata());
    if (ipv6_label_address.is_set || is_set(ipv6_label_address.operation)) leaf_name_data.push_back(ipv6_label_address.get_name_leafdata());
    if (ipv6_mcast_address.is_set || is_set(ipv6_mcast_address.operation)) leaf_name_data.push_back(ipv6_mcast_address.get_name_leafdata());
    if (ipv6mvpn_address.is_set || is_set(ipv6mvpn_address.operation)) leaf_name_data.push_back(ipv6mvpn_address.get_name_leafdata());
    if (ipv6vpn_address.is_set || is_set(ipv6vpn_address.operation)) leaf_name_data.push_back(ipv6vpn_address.get_name_leafdata());
    if (ipv6vpn_flowspec_address.is_set || is_set(ipv6vpn_flowspec_address.operation)) leaf_name_data.push_back(ipv6vpn_flowspec_address.get_name_leafdata());
    if (ipv6vpn_mcast_address.is_set || is_set(ipv6vpn_mcast_address.operation)) leaf_name_data.push_back(ipv6vpn_mcast_address.get_name_leafdata());
    if (l2vpn_evpn_address.is_set || is_set(l2vpn_evpn_address.operation)) leaf_name_data.push_back(l2vpn_evpn_address.get_name_leafdata());
    if (ls_ls_address.is_set || is_set(ls_ls_address.operation)) leaf_name_data.push_back(ls_ls_address.get_name_leafdata());
    if (rt_constraint_address.is_set || is_set(rt_constraint_address.operation)) leaf_name_data.push_back(rt_constraint_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4sr-policy-address")
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        else
        {
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress>();
            ipv4sr_policy_address->parent = this;
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
        return children.at("ipv4sr-policy-address");
    }

    if(child_yang_name == "ipv6sr-policy-address")
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        else
        {
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress>();
            ipv6sr_policy_address->parent = this;
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
        return children.at("ipv6sr-policy-address");
    }

    if(child_yang_name == "l2vpn-mspw-address")
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        else
        {
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress>();
            l2vpn_mspw_address->parent = this;
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
        return children.at("l2vpn-mspw-address");
    }

    if(child_yang_name == "l2vpnvpls-address")
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        else
        {
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::get_children()
{
    if(children.find("ipv4sr-policy-address") == children.end())
    {
        if(ipv4sr_policy_address != nullptr)
        {
            children["ipv4sr-policy-address"] = ipv4sr_policy_address;
        }
    }

    if(children.find("ipv6sr-policy-address") == children.end())
    {
        if(ipv6sr_policy_address != nullptr)
        {
            children["ipv6sr-policy-address"] = ipv6sr_policy_address;
        }
    }

    if(children.find("l2vpn-mspw-address") == children.end())
    {
        if(l2vpn_mspw_address != nullptr)
        {
            children["l2vpn-mspw-address"] = l2vpn_mspw_address;
        }
    }

    if(children.find("l2vpnvpls-address") == children.end())
    {
        if(l2vpnvpls_address != nullptr)
        {
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi")
    {
        afi = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv4-flowspec-address")
    {
        ipv4_flowspec_address = value;
    }
    if(value_path == "ipv4-label-address")
    {
        ipv4_label_address = value;
    }
    if(value_path == "ipv4-mcast-address")
    {
        ipv4_mcast_address = value;
    }
    if(value_path == "ipv4-tunnel-address")
    {
        ipv4_tunnel_address = value;
    }
    if(value_path == "ipv4mdt-address")
    {
        ipv4mdt_address = value;
    }
    if(value_path == "ipv4mvpn-address")
    {
        ipv4mvpn_address = value;
    }
    if(value_path == "ipv4vpn-address")
    {
        ipv4vpn_address = value;
    }
    if(value_path == "ipv4vpn-flowspec-address")
    {
        ipv4vpn_flowspec_address = value;
    }
    if(value_path == "ipv4vpna-mcastddress")
    {
        ipv4vpna_mcastddress = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "ipv6-flowspec-address")
    {
        ipv6_flowspec_address = value;
    }
    if(value_path == "ipv6-label-address")
    {
        ipv6_label_address = value;
    }
    if(value_path == "ipv6-mcast-address")
    {
        ipv6_mcast_address = value;
    }
    if(value_path == "ipv6mvpn-address")
    {
        ipv6mvpn_address = value;
    }
    if(value_path == "ipv6vpn-address")
    {
        ipv6vpn_address = value;
    }
    if(value_path == "ipv6vpn-flowspec-address")
    {
        ipv6vpn_flowspec_address = value;
    }
    if(value_path == "ipv6vpn-mcast-address")
    {
        ipv6vpn_mcast_address = value;
    }
    if(value_path == "l2vpn-evpn-address")
    {
        l2vpn_evpn_address = value;
    }
    if(value_path == "ls-ls-address")
    {
        ls_ls_address = value;
    }
    if(value_path == "rt-constraint-address")
    {
        rt_constraint_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "connection-remote-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnvplsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "connection-remote-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2VpnMspwAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2vpn_address.is_set || is_set(l2vpn_address.operation)) leaf_name_data.push_back(l2vpn_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "connection-remote-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_srpolicy_address.is_set || is_set(ipv4_srpolicy_address.operation)) leaf_name_data.push_back(ipv4_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "connection-remote-address";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6SrPolicyAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_srpolicy_address.is_set || is_set(ipv6_srpolicy_address.operation)) leaf_name_data.push_back(ipv6_srpolicy_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ConnectionRemoteAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::SendNotificationInfo::SendNotificationInfo()
    :
    notification_error_code{YType::uint8, "notification-error-code"},
    notification_error_subcode{YType::uint8, "notification-error-subcode"},
    time_since_last_notification{YType::uint32, "time-since-last-notification"}
{
    yang_name = "send-notification-info"; yang_parent_name = "neighbor";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::SendNotificationInfo::~SendNotificationInfo()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::SendNotificationInfo::has_data() const
{
    for (std::size_t index=0; index<last_notification_data.size(); index++)
    {
        if(last_notification_data[index]->has_data())
            return true;
    }
    return notification_error_code.is_set
	|| notification_error_subcode.is_set
	|| time_since_last_notification.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::SendNotificationInfo::has_operation() const
{
    for (std::size_t index=0; index<last_notification_data.size(); index++)
    {
        if(last_notification_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(notification_error_code.operation)
	|| is_set(notification_error_subcode.operation)
	|| is_set(time_since_last_notification.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::SendNotificationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-notification-info";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::SendNotificationInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SendNotificationInfo' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (notification_error_code.is_set || is_set(notification_error_code.operation)) leaf_name_data.push_back(notification_error_code.get_name_leafdata());
    if (notification_error_subcode.is_set || is_set(notification_error_subcode.operation)) leaf_name_data.push_back(notification_error_subcode.get_name_leafdata());
    if (time_since_last_notification.is_set || is_set(time_since_last_notification.operation)) leaf_name_data.push_back(time_since_last_notification.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::SendNotificationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-notification-data")
    {
        for(auto const & c : last_notification_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::SendNotificationInfo::LastNotificationData>();
        c->parent = this;
        last_notification_data.push_back(std::move(c));
        children[segment_path] = last_notification_data.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::SendNotificationInfo::get_children()
{
    for (auto const & c : last_notification_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::SendNotificationInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "notification-error-code")
    {
        notification_error_code = value;
    }
    if(value_path == "notification-error-subcode")
    {
        notification_error_subcode = value;
    }
    if(value_path == "time-since-last-notification")
    {
        time_since_last_notification = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::SendNotificationInfo::LastNotificationData::LastNotificationData()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "last-notification-data"; yang_parent_name = "send-notification-info";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::SendNotificationInfo::LastNotificationData::~LastNotificationData()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::SendNotificationInfo::LastNotificationData::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::SendNotificationInfo::LastNotificationData::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::SendNotificationInfo::LastNotificationData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-notification-data";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::SendNotificationInfo::LastNotificationData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastNotificationData' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::SendNotificationInfo::LastNotificationData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::SendNotificationInfo::LastNotificationData::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::SendNotificationInfo::LastNotificationData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ReceivedNotificationInfo::ReceivedNotificationInfo()
    :
    notification_error_code{YType::uint8, "notification-error-code"},
    notification_error_subcode{YType::uint8, "notification-error-subcode"},
    time_since_last_notification{YType::uint32, "time-since-last-notification"}
{
    yang_name = "received-notification-info"; yang_parent_name = "neighbor";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ReceivedNotificationInfo::~ReceivedNotificationInfo()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ReceivedNotificationInfo::has_data() const
{
    for (std::size_t index=0; index<last_notification_data.size(); index++)
    {
        if(last_notification_data[index]->has_data())
            return true;
    }
    return notification_error_code.is_set
	|| notification_error_subcode.is_set
	|| time_since_last_notification.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ReceivedNotificationInfo::has_operation() const
{
    for (std::size_t index=0; index<last_notification_data.size(); index++)
    {
        if(last_notification_data[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(notification_error_code.operation)
	|| is_set(notification_error_subcode.operation)
	|| is_set(time_since_last_notification.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ReceivedNotificationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-notification-info";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ReceivedNotificationInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceivedNotificationInfo' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (notification_error_code.is_set || is_set(notification_error_code.operation)) leaf_name_data.push_back(notification_error_code.get_name_leafdata());
    if (notification_error_subcode.is_set || is_set(notification_error_subcode.operation)) leaf_name_data.push_back(notification_error_subcode.get_name_leafdata());
    if (time_since_last_notification.is_set || is_set(time_since_last_notification.operation)) leaf_name_data.push_back(time_since_last_notification.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ReceivedNotificationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-notification-data")
    {
        for(auto const & c : last_notification_data)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ReceivedNotificationInfo::LastNotificationData>();
        c->parent = this;
        last_notification_data.push_back(std::move(c));
        children[segment_path] = last_notification_data.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ReceivedNotificationInfo::get_children()
{
    for (auto const & c : last_notification_data)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ReceivedNotificationInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "notification-error-code")
    {
        notification_error_code = value;
    }
    if(value_path == "notification-error-subcode")
    {
        notification_error_subcode = value;
    }
    if(value_path == "time-since-last-notification")
    {
        time_since_last_notification = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ReceivedNotificationInfo::LastNotificationData::LastNotificationData()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "last-notification-data"; yang_parent_name = "received-notification-info";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ReceivedNotificationInfo::LastNotificationData::~LastNotificationData()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ReceivedNotificationInfo::LastNotificationData::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ReceivedNotificationInfo::LastNotificationData::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ReceivedNotificationInfo::LastNotificationData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-notification-data";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ReceivedNotificationInfo::LastNotificationData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastNotificationData' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.operation)) leaf_name_data.push_back(entry.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ReceivedNotificationInfo::LastNotificationData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ReceivedNotificationInfo::LastNotificationData::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::ReceivedNotificationInfo::LastNotificationData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::PerformanceStatistics::PerformanceStatistics()
    :
    active_collision{YType::uint32, "active-collision"},
    actives{YType::uint32, "actives"},
    control_to_read_thread_trigger{YType::uint32, "control-to-read-thread-trigger"},
    control_to_write_thread_trigger{YType::uint32, "control-to-write-thread-trigger"},
    data_bytes_read{YType::uint32, "data-bytes-read"},
    data_bytes_written{YType::uint32, "data-bytes-written"},
    failed_post_actives{YType::uint32, "failed-post-actives"},
    high_throttled_read{YType::uint32, "high-throttled-read"},
    inbound_update_messages{YType::uint32, "inbound-update-messages"},
    inbound_update_messages_time{YType::uint32, "inbound-update-messages-time"},
    io_read_time{YType::uint32, "io-read-time"},
    io_write_time{YType::uint32, "io-write-time"},
    last_nsr_scoped_sync{YType::uint32, "last-nsr-scoped-sync"},
    last_sent_seq_no{YType::uint32, "last-sent-seq-no"},
    low_throttled_read{YType::uint32, "low-throttled-read"},
    maximum_read_size{YType::uint32, "maximum-read-size"},
    nbr_fd{YType::int32, "nbr-fd"},
    nbr_flags{YType::uint32, "nbr-flags"},
    network_status{YType::uint32, "network-status"},
    nsr_oper_down_count{YType::uint32, "nsr-oper-down-count"},
    passive_collision{YType::uint32, "passive-collision"},
    passives{YType::uint32, "passives"},
    read_calls_count{YType::uint32, "read-calls-count"},
    read_messages_count{YType::uint32, "read-messages-count"},
    read_throttles{YType::uint32, "read-throttles"},
    rejected_passives{YType::uint32, "rejected-passives"},
    reset_flags{YType::uint32, "reset-flags"},
    reset_retries{YType::uint8, "reset-retries"},
    subgroup_list_time{YType::uint32, "subgroup-list-time"},
    sync_flags{YType::uint32, "sync-flags"},
    time_since_last_throttled_read{YType::uint32, "time-since-last-throttled-read"},
    write_calls_count{YType::uint32, "write-calls-count"},
    write_queue_calls_count{YType::uint32, "write-queue-calls-count"},
    write_queue_messages_count{YType::uint32, "write-queue-messages-count"},
    write_queue_time{YType::uint32, "write-queue-time"},
    write_subgroup_calls_count{YType::uint32, "write-subgroup-calls-count"},
    write_subgroup_messages_count{YType::uint32, "write-subgroup-messages-count"}
{
    yang_name = "performance-statistics"; yang_parent_name = "neighbor";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::PerformanceStatistics::~PerformanceStatistics()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::PerformanceStatistics::has_data() const
{
    return active_collision.is_set
	|| actives.is_set
	|| control_to_read_thread_trigger.is_set
	|| control_to_write_thread_trigger.is_set
	|| data_bytes_read.is_set
	|| data_bytes_written.is_set
	|| failed_post_actives.is_set
	|| high_throttled_read.is_set
	|| inbound_update_messages.is_set
	|| inbound_update_messages_time.is_set
	|| io_read_time.is_set
	|| io_write_time.is_set
	|| last_nsr_scoped_sync.is_set
	|| last_sent_seq_no.is_set
	|| low_throttled_read.is_set
	|| maximum_read_size.is_set
	|| nbr_fd.is_set
	|| nbr_flags.is_set
	|| network_status.is_set
	|| nsr_oper_down_count.is_set
	|| passive_collision.is_set
	|| passives.is_set
	|| read_calls_count.is_set
	|| read_messages_count.is_set
	|| read_throttles.is_set
	|| rejected_passives.is_set
	|| reset_flags.is_set
	|| reset_retries.is_set
	|| subgroup_list_time.is_set
	|| sync_flags.is_set
	|| time_since_last_throttled_read.is_set
	|| write_calls_count.is_set
	|| write_queue_calls_count.is_set
	|| write_queue_messages_count.is_set
	|| write_queue_time.is_set
	|| write_subgroup_calls_count.is_set
	|| write_subgroup_messages_count.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::PerformanceStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(active_collision.operation)
	|| is_set(actives.operation)
	|| is_set(control_to_read_thread_trigger.operation)
	|| is_set(control_to_write_thread_trigger.operation)
	|| is_set(data_bytes_read.operation)
	|| is_set(data_bytes_written.operation)
	|| is_set(failed_post_actives.operation)
	|| is_set(high_throttled_read.operation)
	|| is_set(inbound_update_messages.operation)
	|| is_set(inbound_update_messages_time.operation)
	|| is_set(io_read_time.operation)
	|| is_set(io_write_time.operation)
	|| is_set(last_nsr_scoped_sync.operation)
	|| is_set(last_sent_seq_no.operation)
	|| is_set(low_throttled_read.operation)
	|| is_set(maximum_read_size.operation)
	|| is_set(nbr_fd.operation)
	|| is_set(nbr_flags.operation)
	|| is_set(network_status.operation)
	|| is_set(nsr_oper_down_count.operation)
	|| is_set(passive_collision.operation)
	|| is_set(passives.operation)
	|| is_set(read_calls_count.operation)
	|| is_set(read_messages_count.operation)
	|| is_set(read_throttles.operation)
	|| is_set(rejected_passives.operation)
	|| is_set(reset_flags.operation)
	|| is_set(reset_retries.operation)
	|| is_set(subgroup_list_time.operation)
	|| is_set(sync_flags.operation)
	|| is_set(time_since_last_throttled_read.operation)
	|| is_set(write_calls_count.operation)
	|| is_set(write_queue_calls_count.operation)
	|| is_set(write_queue_messages_count.operation)
	|| is_set(write_queue_time.operation)
	|| is_set(write_subgroup_calls_count.operation)
	|| is_set(write_subgroup_messages_count.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::PerformanceStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "performance-statistics";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::PerformanceStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerformanceStatistics' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_collision.is_set || is_set(active_collision.operation)) leaf_name_data.push_back(active_collision.get_name_leafdata());
    if (actives.is_set || is_set(actives.operation)) leaf_name_data.push_back(actives.get_name_leafdata());
    if (control_to_read_thread_trigger.is_set || is_set(control_to_read_thread_trigger.operation)) leaf_name_data.push_back(control_to_read_thread_trigger.get_name_leafdata());
    if (control_to_write_thread_trigger.is_set || is_set(control_to_write_thread_trigger.operation)) leaf_name_data.push_back(control_to_write_thread_trigger.get_name_leafdata());
    if (data_bytes_read.is_set || is_set(data_bytes_read.operation)) leaf_name_data.push_back(data_bytes_read.get_name_leafdata());
    if (data_bytes_written.is_set || is_set(data_bytes_written.operation)) leaf_name_data.push_back(data_bytes_written.get_name_leafdata());
    if (failed_post_actives.is_set || is_set(failed_post_actives.operation)) leaf_name_data.push_back(failed_post_actives.get_name_leafdata());
    if (high_throttled_read.is_set || is_set(high_throttled_read.operation)) leaf_name_data.push_back(high_throttled_read.get_name_leafdata());
    if (inbound_update_messages.is_set || is_set(inbound_update_messages.operation)) leaf_name_data.push_back(inbound_update_messages.get_name_leafdata());
    if (inbound_update_messages_time.is_set || is_set(inbound_update_messages_time.operation)) leaf_name_data.push_back(inbound_update_messages_time.get_name_leafdata());
    if (io_read_time.is_set || is_set(io_read_time.operation)) leaf_name_data.push_back(io_read_time.get_name_leafdata());
    if (io_write_time.is_set || is_set(io_write_time.operation)) leaf_name_data.push_back(io_write_time.get_name_leafdata());
    if (last_nsr_scoped_sync.is_set || is_set(last_nsr_scoped_sync.operation)) leaf_name_data.push_back(last_nsr_scoped_sync.get_name_leafdata());
    if (last_sent_seq_no.is_set || is_set(last_sent_seq_no.operation)) leaf_name_data.push_back(last_sent_seq_no.get_name_leafdata());
    if (low_throttled_read.is_set || is_set(low_throttled_read.operation)) leaf_name_data.push_back(low_throttled_read.get_name_leafdata());
    if (maximum_read_size.is_set || is_set(maximum_read_size.operation)) leaf_name_data.push_back(maximum_read_size.get_name_leafdata());
    if (nbr_fd.is_set || is_set(nbr_fd.operation)) leaf_name_data.push_back(nbr_fd.get_name_leafdata());
    if (nbr_flags.is_set || is_set(nbr_flags.operation)) leaf_name_data.push_back(nbr_flags.get_name_leafdata());
    if (network_status.is_set || is_set(network_status.operation)) leaf_name_data.push_back(network_status.get_name_leafdata());
    if (nsr_oper_down_count.is_set || is_set(nsr_oper_down_count.operation)) leaf_name_data.push_back(nsr_oper_down_count.get_name_leafdata());
    if (passive_collision.is_set || is_set(passive_collision.operation)) leaf_name_data.push_back(passive_collision.get_name_leafdata());
    if (passives.is_set || is_set(passives.operation)) leaf_name_data.push_back(passives.get_name_leafdata());
    if (read_calls_count.is_set || is_set(read_calls_count.operation)) leaf_name_data.push_back(read_calls_count.get_name_leafdata());
    if (read_messages_count.is_set || is_set(read_messages_count.operation)) leaf_name_data.push_back(read_messages_count.get_name_leafdata());
    if (read_throttles.is_set || is_set(read_throttles.operation)) leaf_name_data.push_back(read_throttles.get_name_leafdata());
    if (rejected_passives.is_set || is_set(rejected_passives.operation)) leaf_name_data.push_back(rejected_passives.get_name_leafdata());
    if (reset_flags.is_set || is_set(reset_flags.operation)) leaf_name_data.push_back(reset_flags.get_name_leafdata());
    if (reset_retries.is_set || is_set(reset_retries.operation)) leaf_name_data.push_back(reset_retries.get_name_leafdata());
    if (subgroup_list_time.is_set || is_set(subgroup_list_time.operation)) leaf_name_data.push_back(subgroup_list_time.get_name_leafdata());
    if (sync_flags.is_set || is_set(sync_flags.operation)) leaf_name_data.push_back(sync_flags.get_name_leafdata());
    if (time_since_last_throttled_read.is_set || is_set(time_since_last_throttled_read.operation)) leaf_name_data.push_back(time_since_last_throttled_read.get_name_leafdata());
    if (write_calls_count.is_set || is_set(write_calls_count.operation)) leaf_name_data.push_back(write_calls_count.get_name_leafdata());
    if (write_queue_calls_count.is_set || is_set(write_queue_calls_count.operation)) leaf_name_data.push_back(write_queue_calls_count.get_name_leafdata());
    if (write_queue_messages_count.is_set || is_set(write_queue_messages_count.operation)) leaf_name_data.push_back(write_queue_messages_count.get_name_leafdata());
    if (write_queue_time.is_set || is_set(write_queue_time.operation)) leaf_name_data.push_back(write_queue_time.get_name_leafdata());
    if (write_subgroup_calls_count.is_set || is_set(write_subgroup_calls_count.operation)) leaf_name_data.push_back(write_subgroup_calls_count.get_name_leafdata());
    if (write_subgroup_messages_count.is_set || is_set(write_subgroup_messages_count.operation)) leaf_name_data.push_back(write_subgroup_messages_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::PerformanceStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::PerformanceStatistics::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::PerformanceStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-collision")
    {
        active_collision = value;
    }
    if(value_path == "actives")
    {
        actives = value;
    }
    if(value_path == "control-to-read-thread-trigger")
    {
        control_to_read_thread_trigger = value;
    }
    if(value_path == "control-to-write-thread-trigger")
    {
        control_to_write_thread_trigger = value;
    }
    if(value_path == "data-bytes-read")
    {
        data_bytes_read = value;
    }
    if(value_path == "data-bytes-written")
    {
        data_bytes_written = value;
    }
    if(value_path == "failed-post-actives")
    {
        failed_post_actives = value;
    }
    if(value_path == "high-throttled-read")
    {
        high_throttled_read = value;
    }
    if(value_path == "inbound-update-messages")
    {
        inbound_update_messages = value;
    }
    if(value_path == "inbound-update-messages-time")
    {
        inbound_update_messages_time = value;
    }
    if(value_path == "io-read-time")
    {
        io_read_time = value;
    }
    if(value_path == "io-write-time")
    {
        io_write_time = value;
    }
    if(value_path == "last-nsr-scoped-sync")
    {
        last_nsr_scoped_sync = value;
    }
    if(value_path == "last-sent-seq-no")
    {
        last_sent_seq_no = value;
    }
    if(value_path == "low-throttled-read")
    {
        low_throttled_read = value;
    }
    if(value_path == "maximum-read-size")
    {
        maximum_read_size = value;
    }
    if(value_path == "nbr-fd")
    {
        nbr_fd = value;
    }
    if(value_path == "nbr-flags")
    {
        nbr_flags = value;
    }
    if(value_path == "network-status")
    {
        network_status = value;
    }
    if(value_path == "nsr-oper-down-count")
    {
        nsr_oper_down_count = value;
    }
    if(value_path == "passive-collision")
    {
        passive_collision = value;
    }
    if(value_path == "passives")
    {
        passives = value;
    }
    if(value_path == "read-calls-count")
    {
        read_calls_count = value;
    }
    if(value_path == "read-messages-count")
    {
        read_messages_count = value;
    }
    if(value_path == "read-throttles")
    {
        read_throttles = value;
    }
    if(value_path == "rejected-passives")
    {
        rejected_passives = value;
    }
    if(value_path == "reset-flags")
    {
        reset_flags = value;
    }
    if(value_path == "reset-retries")
    {
        reset_retries = value;
    }
    if(value_path == "subgroup-list-time")
    {
        subgroup_list_time = value;
    }
    if(value_path == "sync-flags")
    {
        sync_flags = value;
    }
    if(value_path == "time-since-last-throttled-read")
    {
        time_since_last_throttled_read = value;
    }
    if(value_path == "write-calls-count")
    {
        write_calls_count = value;
    }
    if(value_path == "write-queue-calls-count")
    {
        write_queue_calls_count = value;
    }
    if(value_path == "write-queue-messages-count")
    {
        write_queue_messages_count = value;
    }
    if(value_path == "write-queue-time")
    {
        write_queue_time = value;
    }
    if(value_path == "write-subgroup-calls-count")
    {
        write_subgroup_calls_count = value;
    }
    if(value_path == "write-subgroup-messages-count")
    {
        write_subgroup_messages_count = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::MessageStatistics()
    :
    keepalive(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive>())
	,notification(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification>())
	,open(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open>())
	,route_refresh(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh>())
	,total(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total>())
	,update(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update>())
{
    keepalive->parent = this;
    children["keepalive"] = keepalive;

    notification->parent = this;
    children["notification"] = notification;

    open->parent = this;
    children["open"] = open;

    route_refresh->parent = this;
    children["route-refresh"] = route_refresh;

    total->parent = this;
    children["total"] = total;

    update->parent = this;
    children["update"] = update;

    yang_name = "message-statistics"; yang_parent_name = "neighbor";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::~MessageStatistics()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::has_data() const
{
    return (keepalive !=  nullptr && keepalive->has_data())
	|| (notification !=  nullptr && notification->has_data())
	|| (open !=  nullptr && open->has_data())
	|| (route_refresh !=  nullptr && route_refresh->has_data())
	|| (total !=  nullptr && total->has_data())
	|| (update !=  nullptr && update->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::has_operation() const
{
    return is_set(operation)
	|| (keepalive !=  nullptr && keepalive->has_operation())
	|| (notification !=  nullptr && notification->has_operation())
	|| (open !=  nullptr && open->has_operation())
	|| (route_refresh !=  nullptr && route_refresh->has_operation())
	|| (total !=  nullptr && total->has_operation())
	|| (update !=  nullptr && update->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-statistics";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MessageStatistics' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "keepalive")
    {
        if(keepalive != nullptr)
        {
            children["keepalive"] = keepalive;
        }
        else
        {
            keepalive = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive>();
            keepalive->parent = this;
            children["keepalive"] = keepalive;
        }
        return children.at("keepalive");
    }

    if(child_yang_name == "notification")
    {
        if(notification != nullptr)
        {
            children["notification"] = notification;
        }
        else
        {
            notification = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification>();
            notification->parent = this;
            children["notification"] = notification;
        }
        return children.at("notification");
    }

    if(child_yang_name == "open")
    {
        if(open != nullptr)
        {
            children["open"] = open;
        }
        else
        {
            open = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open>();
            open->parent = this;
            children["open"] = open;
        }
        return children.at("open");
    }

    if(child_yang_name == "route-refresh")
    {
        if(route_refresh != nullptr)
        {
            children["route-refresh"] = route_refresh;
        }
        else
        {
            route_refresh = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh>();
            route_refresh->parent = this;
            children["route-refresh"] = route_refresh;
        }
        return children.at("route-refresh");
    }

    if(child_yang_name == "total")
    {
        if(total != nullptr)
        {
            children["total"] = total;
        }
        else
        {
            total = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total>();
            total->parent = this;
            children["total"] = total;
        }
        return children.at("total");
    }

    if(child_yang_name == "update")
    {
        if(update != nullptr)
        {
            children["update"] = update;
        }
        else
        {
            update = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update>();
            update->parent = this;
            children["update"] = update;
        }
        return children.at("update");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::get_children()
{
    if(children.find("keepalive") == children.end())
    {
        if(keepalive != nullptr)
        {
            children["keepalive"] = keepalive;
        }
    }

    if(children.find("notification") == children.end())
    {
        if(notification != nullptr)
        {
            children["notification"] = notification;
        }
    }

    if(children.find("open") == children.end())
    {
        if(open != nullptr)
        {
            children["open"] = open;
        }
    }

    if(children.find("route-refresh") == children.end())
    {
        if(route_refresh != nullptr)
        {
            children["route-refresh"] = route_refresh;
        }
    }

    if(children.find("total") == children.end())
    {
        if(total != nullptr)
        {
            children["total"] = total;
        }
    }

    if(children.find("update") == children.end())
    {
        if(update != nullptr)
        {
            children["update"] = update;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Open()
    :
    rx(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Rx>())
	,tx(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Tx>())
{
    rx->parent = this;
    children["rx"] = rx;

    tx->parent = this;
    children["tx"] = tx;

    yang_name = "open"; yang_parent_name = "message-statistics";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::~Open()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::has_data() const
{
    return (rx !=  nullptr && rx->has_data())
	|| (tx !=  nullptr && tx->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::has_operation() const
{
    return is_set(operation)
	|| (rx !=  nullptr && rx->has_operation())
	|| (tx !=  nullptr && tx->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "open";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Open' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rx")
    {
        if(rx != nullptr)
        {
            children["rx"] = rx;
        }
        else
        {
            rx = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Rx>();
            rx->parent = this;
            children["rx"] = rx;
        }
        return children.at("rx");
    }

    if(child_yang_name == "tx")
    {
        if(tx != nullptr)
        {
            children["tx"] = tx;
        }
        else
        {
            tx = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Tx>();
            tx->parent = this;
            children["tx"] = tx;
        }
        return children.at("tx");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::get_children()
{
    if(children.find("rx") == children.end())
    {
        if(rx != nullptr)
        {
            children["rx"] = rx;
        }
    }

    if(children.find("tx") == children.end())
    {
        if(tx != nullptr)
        {
            children["tx"] = tx;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Tx::Tx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec>())
{
    last_time_spec->parent = this;
    children["last-time-spec"] = last_time_spec;

    yang_name = "tx"; yang_parent_name = "open";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Tx::~Tx()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Tx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Tx::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Tx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Tx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tx' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Tx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
        else
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec>();
            last_time_spec->parent = this;
            children["last-time-spec"] = last_time_spec;
        }
        return children.at("last-time-spec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Tx::get_children()
{
    if(children.find("last-time-spec") == children.end())
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Tx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-time-spec"; yang_parent_name = "tx";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Tx::LastTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Rx::Rx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec>())
{
    last_time_spec->parent = this;
    children["last-time-spec"] = last_time_spec;

    yang_name = "rx"; yang_parent_name = "open";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Rx::~Rx()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Rx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Rx::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Rx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Rx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rx' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Rx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
        else
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec>();
            last_time_spec->parent = this;
            children["last-time-spec"] = last_time_spec;
        }
        return children.at("last-time-spec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Rx::get_children()
{
    if(children.find("last-time-spec") == children.end())
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Rx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-time-spec"; yang_parent_name = "rx";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Open::Rx::LastTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Notification()
    :
    rx(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Rx>())
	,tx(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Tx>())
{
    rx->parent = this;
    children["rx"] = rx;

    tx->parent = this;
    children["tx"] = tx;

    yang_name = "notification"; yang_parent_name = "message-statistics";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::~Notification()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::has_data() const
{
    return (rx !=  nullptr && rx->has_data())
	|| (tx !=  nullptr && tx->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::has_operation() const
{
    return is_set(operation)
	|| (rx !=  nullptr && rx->has_operation())
	|| (tx !=  nullptr && tx->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "notification";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Notification' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rx")
    {
        if(rx != nullptr)
        {
            children["rx"] = rx;
        }
        else
        {
            rx = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Rx>();
            rx->parent = this;
            children["rx"] = rx;
        }
        return children.at("rx");
    }

    if(child_yang_name == "tx")
    {
        if(tx != nullptr)
        {
            children["tx"] = tx;
        }
        else
        {
            tx = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Tx>();
            tx->parent = this;
            children["tx"] = tx;
        }
        return children.at("tx");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::get_children()
{
    if(children.find("rx") == children.end())
    {
        if(rx != nullptr)
        {
            children["rx"] = rx;
        }
    }

    if(children.find("tx") == children.end())
    {
        if(tx != nullptr)
        {
            children["tx"] = tx;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Tx::Tx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec>())
{
    last_time_spec->parent = this;
    children["last-time-spec"] = last_time_spec;

    yang_name = "tx"; yang_parent_name = "notification";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Tx::~Tx()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Tx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Tx::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Tx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Tx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tx' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Tx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
        else
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec>();
            last_time_spec->parent = this;
            children["last-time-spec"] = last_time_spec;
        }
        return children.at("last-time-spec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Tx::get_children()
{
    if(children.find("last-time-spec") == children.end())
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Tx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-time-spec"; yang_parent_name = "tx";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Tx::LastTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Rx::Rx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec>())
{
    last_time_spec->parent = this;
    children["last-time-spec"] = last_time_spec;

    yang_name = "rx"; yang_parent_name = "notification";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Rx::~Rx()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Rx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Rx::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Rx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Rx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rx' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Rx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
        else
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec>();
            last_time_spec->parent = this;
            children["last-time-spec"] = last_time_spec;
        }
        return children.at("last-time-spec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Rx::get_children()
{
    if(children.find("last-time-spec") == children.end())
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Rx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-time-spec"; yang_parent_name = "rx";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Notification::Rx::LastTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Update()
    :
    rx(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Rx>())
	,tx(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Tx>())
{
    rx->parent = this;
    children["rx"] = rx;

    tx->parent = this;
    children["tx"] = tx;

    yang_name = "update"; yang_parent_name = "message-statistics";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::~Update()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::has_data() const
{
    return (rx !=  nullptr && rx->has_data())
	|| (tx !=  nullptr && tx->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::has_operation() const
{
    return is_set(operation)
	|| (rx !=  nullptr && rx->has_operation())
	|| (tx !=  nullptr && tx->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Update' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rx")
    {
        if(rx != nullptr)
        {
            children["rx"] = rx;
        }
        else
        {
            rx = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Rx>();
            rx->parent = this;
            children["rx"] = rx;
        }
        return children.at("rx");
    }

    if(child_yang_name == "tx")
    {
        if(tx != nullptr)
        {
            children["tx"] = tx;
        }
        else
        {
            tx = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Tx>();
            tx->parent = this;
            children["tx"] = tx;
        }
        return children.at("tx");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::get_children()
{
    if(children.find("rx") == children.end())
    {
        if(rx != nullptr)
        {
            children["rx"] = rx;
        }
    }

    if(children.find("tx") == children.end())
    {
        if(tx != nullptr)
        {
            children["tx"] = tx;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Tx::Tx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec>())
{
    last_time_spec->parent = this;
    children["last-time-spec"] = last_time_spec;

    yang_name = "tx"; yang_parent_name = "update";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Tx::~Tx()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Tx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Tx::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Tx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Tx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tx' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Tx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
        else
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec>();
            last_time_spec->parent = this;
            children["last-time-spec"] = last_time_spec;
        }
        return children.at("last-time-spec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Tx::get_children()
{
    if(children.find("last-time-spec") == children.end())
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Tx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-time-spec"; yang_parent_name = "tx";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Tx::LastTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Rx::Rx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec>())
{
    last_time_spec->parent = this;
    children["last-time-spec"] = last_time_spec;

    yang_name = "rx"; yang_parent_name = "update";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Rx::~Rx()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Rx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Rx::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Rx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Rx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rx' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Rx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
        else
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec>();
            last_time_spec->parent = this;
            children["last-time-spec"] = last_time_spec;
        }
        return children.at("last-time-spec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Rx::get_children()
{
    if(children.find("last-time-spec") == children.end())
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Rx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-time-spec"; yang_parent_name = "rx";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Update::Rx::LastTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Keepalive()
    :
    rx(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Rx>())
	,tx(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Tx>())
{
    rx->parent = this;
    children["rx"] = rx;

    tx->parent = this;
    children["tx"] = tx;

    yang_name = "keepalive"; yang_parent_name = "message-statistics";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::~Keepalive()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::has_data() const
{
    return (rx !=  nullptr && rx->has_data())
	|| (tx !=  nullptr && tx->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::has_operation() const
{
    return is_set(operation)
	|| (rx !=  nullptr && rx->has_operation())
	|| (tx !=  nullptr && tx->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "keepalive";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Keepalive' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rx")
    {
        if(rx != nullptr)
        {
            children["rx"] = rx;
        }
        else
        {
            rx = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Rx>();
            rx->parent = this;
            children["rx"] = rx;
        }
        return children.at("rx");
    }

    if(child_yang_name == "tx")
    {
        if(tx != nullptr)
        {
            children["tx"] = tx;
        }
        else
        {
            tx = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Tx>();
            tx->parent = this;
            children["tx"] = tx;
        }
        return children.at("tx");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::get_children()
{
    if(children.find("rx") == children.end())
    {
        if(rx != nullptr)
        {
            children["rx"] = rx;
        }
    }

    if(children.find("tx") == children.end())
    {
        if(tx != nullptr)
        {
            children["tx"] = tx;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Tx::Tx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec>())
{
    last_time_spec->parent = this;
    children["last-time-spec"] = last_time_spec;

    yang_name = "tx"; yang_parent_name = "keepalive";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Tx::~Tx()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Tx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Tx::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Tx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Tx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tx' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Tx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
        else
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec>();
            last_time_spec->parent = this;
            children["last-time-spec"] = last_time_spec;
        }
        return children.at("last-time-spec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Tx::get_children()
{
    if(children.find("last-time-spec") == children.end())
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Tx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-time-spec"; yang_parent_name = "tx";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Tx::LastTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Rx::Rx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec>())
{
    last_time_spec->parent = this;
    children["last-time-spec"] = last_time_spec;

    yang_name = "rx"; yang_parent_name = "keepalive";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Rx::~Rx()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Rx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Rx::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Rx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Rx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rx' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Rx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
        else
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec>();
            last_time_spec->parent = this;
            children["last-time-spec"] = last_time_spec;
        }
        return children.at("last-time-spec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Rx::get_children()
{
    if(children.find("last-time-spec") == children.end())
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Rx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-time-spec"; yang_parent_name = "rx";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Keepalive::Rx::LastTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::RouteRefresh()
    :
    rx(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Rx>())
	,tx(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Tx>())
{
    rx->parent = this;
    children["rx"] = rx;

    tx->parent = this;
    children["tx"] = tx;

    yang_name = "route-refresh"; yang_parent_name = "message-statistics";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::~RouteRefresh()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::has_data() const
{
    return (rx !=  nullptr && rx->has_data())
	|| (tx !=  nullptr && tx->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::has_operation() const
{
    return is_set(operation)
	|| (rx !=  nullptr && rx->has_operation())
	|| (tx !=  nullptr && tx->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-refresh";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteRefresh' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rx")
    {
        if(rx != nullptr)
        {
            children["rx"] = rx;
        }
        else
        {
            rx = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Rx>();
            rx->parent = this;
            children["rx"] = rx;
        }
        return children.at("rx");
    }

    if(child_yang_name == "tx")
    {
        if(tx != nullptr)
        {
            children["tx"] = tx;
        }
        else
        {
            tx = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Tx>();
            tx->parent = this;
            children["tx"] = tx;
        }
        return children.at("tx");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::get_children()
{
    if(children.find("rx") == children.end())
    {
        if(rx != nullptr)
        {
            children["rx"] = rx;
        }
    }

    if(children.find("tx") == children.end())
    {
        if(tx != nullptr)
        {
            children["tx"] = tx;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Tx::Tx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec>())
{
    last_time_spec->parent = this;
    children["last-time-spec"] = last_time_spec;

    yang_name = "tx"; yang_parent_name = "route-refresh";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Tx::~Tx()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Tx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Tx::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Tx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Tx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tx' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Tx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
        else
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec>();
            last_time_spec->parent = this;
            children["last-time-spec"] = last_time_spec;
        }
        return children.at("last-time-spec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Tx::get_children()
{
    if(children.find("last-time-spec") == children.end())
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Tx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-time-spec"; yang_parent_name = "tx";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Tx::LastTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Rx::Rx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec>())
{
    last_time_spec->parent = this;
    children["last-time-spec"] = last_time_spec;

    yang_name = "rx"; yang_parent_name = "route-refresh";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Rx::~Rx()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Rx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Rx::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Rx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Rx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rx' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Rx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
        else
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec>();
            last_time_spec->parent = this;
            children["last-time-spec"] = last_time_spec;
        }
        return children.at("last-time-spec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Rx::get_children()
{
    if(children.find("last-time-spec") == children.end())
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Rx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-time-spec"; yang_parent_name = "rx";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::RouteRefresh::Rx::LastTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Total()
    :
    rx(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Rx>())
	,tx(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Tx>())
{
    rx->parent = this;
    children["rx"] = rx;

    tx->parent = this;
    children["tx"] = tx;

    yang_name = "total"; yang_parent_name = "message-statistics";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::~Total()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::has_data() const
{
    return (rx !=  nullptr && rx->has_data())
	|| (tx !=  nullptr && tx->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::has_operation() const
{
    return is_set(operation)
	|| (rx !=  nullptr && rx->has_operation())
	|| (tx !=  nullptr && tx->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "total";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Total' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rx")
    {
        if(rx != nullptr)
        {
            children["rx"] = rx;
        }
        else
        {
            rx = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Rx>();
            rx->parent = this;
            children["rx"] = rx;
        }
        return children.at("rx");
    }

    if(child_yang_name == "tx")
    {
        if(tx != nullptr)
        {
            children["tx"] = tx;
        }
        else
        {
            tx = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Tx>();
            tx->parent = this;
            children["tx"] = tx;
        }
        return children.at("tx");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::get_children()
{
    if(children.find("rx") == children.end())
    {
        if(rx != nullptr)
        {
            children["rx"] = rx;
        }
    }

    if(children.find("tx") == children.end())
    {
        if(tx != nullptr)
        {
            children["tx"] = tx;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Tx::Tx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec>())
{
    last_time_spec->parent = this;
    children["last-time-spec"] = last_time_spec;

    yang_name = "tx"; yang_parent_name = "total";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Tx::~Tx()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Tx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Tx::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Tx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tx";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Tx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tx' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Tx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
        else
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec>();
            last_time_spec->parent = this;
            children["last-time-spec"] = last_time_spec;
        }
        return children.at("last-time-spec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Tx::get_children()
{
    if(children.find("last-time-spec") == children.end())
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Tx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::LastTimeSpec()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-time-spec"; yang_parent_name = "tx";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::~LastTimeSpec()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-time-spec";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastTimeSpec' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Tx::LastTimeSpec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Rx::Rx()
    :
    count{YType::uint32, "count"}
    	,
    last_time_spec(std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec>())
{
    last_time_spec->parent = this;
    children["last-time-spec"] = last_time_spec;

    yang_name = "rx"; yang_parent_name = "total";
}

Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Rx::~Rx()
{
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Rx::has_data() const
{
    return count.is_set
	|| (last_time_spec !=  nullptr && last_time_spec->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Rx::has_operation() const
{
    return is_set(operation)
	|| is_set(count.operation)
	|| (last_time_spec !=  nullptr && last_time_spec->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Rx::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rx";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Rx::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rx' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count.is_set || is_set(count.operation)) leaf_name_data.push_back(count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Rx::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-time-spec")
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
        else
        {
            last_time_spec = std::make_shared<Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Rx::LastTimeSpec>();
            last_time_spec->parent = this;
            children["last-time-spec"] = last_time_spec;
        }
        return children.at("last-time-spec");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Rx::get_children()
{
    if(children.find("last-time-spec") == children.end())
    {
        if(last_time_spec != nullptr)
        {
            children["last-time-spec"] = last_time_spec;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::Vrfs::Vrf::Afs::Af::NeighborAfTable::Neighbor::MessageStatistics::Total::Rx::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count = value;
    }
}


}
}

