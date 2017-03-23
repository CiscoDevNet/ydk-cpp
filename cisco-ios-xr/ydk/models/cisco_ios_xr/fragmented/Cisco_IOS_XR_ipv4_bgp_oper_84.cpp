
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_84.hpp"
#include "Cisco_IOS_XR_ipv4_bgp_oper_85.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_bgp_oper {

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "mvpn-nexthop-addr";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "mvpn-nexthop-addr";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "mvpn-nexthop-addr";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnNexthopAddr::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::L2VpnCircuitStatusValue::L2VpnCircuitStatusValue()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "l2vpn-circuit-status-value"; yang_parent_name = "path-information";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::L2VpnCircuitStatusValue::~L2VpnCircuitStatusValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::L2VpnCircuitStatusValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::L2VpnCircuitStatusValue::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::L2VpnCircuitStatusValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-circuit-status-value";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::L2VpnCircuitStatusValue::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::L2VpnCircuitStatusValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::L2VpnCircuitStatusValue::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::L2VpnCircuitStatusValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnPmsiValue::MvpnPmsiValue()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "mvpn-pmsi-value"; yang_parent_name = "path-information";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnPmsiValue::~MvpnPmsiValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnPmsiValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnPmsiValue::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnPmsiValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mvpn-pmsi-value";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnPmsiValue::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnPmsiValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnPmsiValue::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::MvpnPmsiValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::ExtendedCommunity::ExtendedCommunity()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "extended-community"; yang_parent_name = "path-information";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::ExtendedCommunity::~ExtendedCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::ExtendedCommunity::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::ExtendedCommunity::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::ExtendedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::ExtendedCommunity::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::ExtendedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::ExtendedCommunity::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::ExtendedCommunity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::LocalPeersAdvertisedTo()
    :
    is_neighbor{YType::boolean, "is-neighbor"},
    update_group_number{YType::uint32, "update-group-number"}
    	,
    neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress>())
{
    neighbor_address->parent = this;
    children["neighbor-address"] = neighbor_address;

    yang_name = "local-peers-advertised-to"; yang_parent_name = "path-information";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::~LocalPeersAdvertisedTo()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::has_data() const
{
    return is_neighbor.is_set
	|| update_group_number.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::has_operation() const
{
    return is_set(operation)
	|| is_set(is_neighbor.operation)
	|| is_set(update_group_number.operation)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-peers-advertised-to";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress>();
            neighbor_address->parent = this;
            children["neighbor-address"] = neighbor_address;
        }
        return children.at("neighbor-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::get_children()
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::set_value(const std::string & value_path, std::string value)
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

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::NeighborAddress()
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
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress>())
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

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress>();
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
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress>();
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
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress>();
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
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::get_children()
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::set_value(const std::string & value_path, std::string value)
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

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::LocalPeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::PePeersAdvertisedTo()
    :
    is_neighbor{YType::boolean, "is-neighbor"},
    update_group_number{YType::uint32, "update-group-number"}
    	,
    neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress>())
{
    neighbor_address->parent = this;
    children["neighbor-address"] = neighbor_address;

    yang_name = "pe-peers-advertised-to"; yang_parent_name = "path-information";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::~PePeersAdvertisedTo()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::has_data() const
{
    return is_neighbor.is_set
	|| update_group_number.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::has_operation() const
{
    return is_set(operation)
	|| is_set(is_neighbor.operation)
	|| is_set(update_group_number.operation)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-peers-advertised-to";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress>();
            neighbor_address->parent = this;
            children["neighbor-address"] = neighbor_address;
        }
        return children.at("neighbor-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::get_children()
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::set_value(const std::string & value_path, std::string value)
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

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::NeighborAddress()
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
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress>())
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

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress>();
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
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress>();
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
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress>();
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
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::get_children()
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::set_value(const std::string & value_path, std::string value)
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

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::PePeersAdvertisedTo::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::BestPathOrrBitfield()
    :
    is_neighbor{YType::boolean, "is-neighbor"},
    update_group_number{YType::uint32, "update-group-number"}
    	,
    neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress>())
{
    neighbor_address->parent = this;
    children["neighbor-address"] = neighbor_address;

    yang_name = "best-path-orr-bitfield"; yang_parent_name = "path-information";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::~BestPathOrrBitfield()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::has_data() const
{
    return is_neighbor.is_set
	|| update_group_number.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::has_operation() const
{
    return is_set(operation)
	|| is_set(is_neighbor.operation)
	|| is_set(update_group_number.operation)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best-path-orr-bitfield";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress>();
            neighbor_address->parent = this;
            children["neighbor-address"] = neighbor_address;
        }
        return children.at("neighbor-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::get_children()
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::set_value(const std::string & value_path, std::string value)
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

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::NeighborAddress()
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
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress>())
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

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress>();
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
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress>();
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
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress>();
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
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::get_children()
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::set_value(const std::string & value_path, std::string value)
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

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::BestPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::AddPathOrrBitfield()
    :
    is_neighbor{YType::boolean, "is-neighbor"},
    update_group_number{YType::uint32, "update-group-number"}
    	,
    neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress>())
{
    neighbor_address->parent = this;
    children["neighbor-address"] = neighbor_address;

    yang_name = "add-path-orr-bitfield"; yang_parent_name = "path-information";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::~AddPathOrrBitfield()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::has_data() const
{
    return is_neighbor.is_set
	|| update_group_number.is_set
	|| (neighbor_address !=  nullptr && neighbor_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::has_operation() const
{
    return is_set(operation)
	|| is_set(is_neighbor.operation)
	|| is_set(update_group_number.operation)
	|| (neighbor_address !=  nullptr && neighbor_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "add-path-orr-bitfield";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress>();
            neighbor_address->parent = this;
            children["neighbor-address"] = neighbor_address;
        }
        return children.at("neighbor-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::get_children()
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::set_value(const std::string & value_path, std::string value)
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

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::NeighborAddress()
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
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnvplsAddress>())
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

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::~NeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress>();
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
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress>();
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
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress>();
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
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::get_children()
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::set_value(const std::string & value_path, std::string value)
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

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::PathInformation::AddPathOrrBitfield::NeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttributesAfterPolicyIn()
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
    attr_set(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet>())
	,common_attributes(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes>())
	,ribrnh_ip(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp>())
	,rnh_addr(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RnhAddr>())
{
    attr_set->parent = this;
    children["attr-set"] = attr_set;

    common_attributes->parent = this;
    children["common-attributes"] = common_attributes;

    ribrnh_ip->parent = this;
    children["ribrnh-ip"] = ribrnh_ip;

    rnh_addr->parent = this;
    children["rnh-addr"] = rnh_addr;

    yang_name = "attributes-after-policy-in"; yang_parent_name = "dampening";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::~AttributesAfterPolicyIn()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes-after-policy-in";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            attr_set = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet>();
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
            common_attributes = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes>();
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
            ribrnh_ip = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp>();
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
            rnh_addr = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RnhAddr>();
            rnh_addr->parent = this;
            children["rnh-addr"] = rnh_addr;
        }
        return children.at("rnh-addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::get_children()
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::set_value(const std::string & value_path, std::string value)
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

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::CommonAttributes()
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
    sr_policy_allocated_binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::SrPolicyAllocatedBindingSid>())
	,sr_policy_binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::SrPolicyBindingSid>())
{
    sr_policy_allocated_binding_sid->parent = this;
    children["sr-policy-allocated-binding-sid"] = sr_policy_allocated_binding_sid;

    sr_policy_binding_sid->parent = this;
    children["sr-policy-binding-sid"] = sr_policy_binding_sid;

    yang_name = "common-attributes"; yang_parent_name = "attributes-after-policy-in";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::~CommonAttributes()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-attributes";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::Cluster>();
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::Community>();
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue>();
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity>();
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie>();
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr>();
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LsAttr>();
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel>();
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::PmsiValue>();
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
            sr_policy_allocated_binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::SrPolicyAllocatedBindingSid>();
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
            sr_policy_binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::SrPolicyBindingSid>();
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath>();
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute>();
        c->parent = this;
        unknown_attribute.push_back(std::move(c));
        children[segment_path] = unknown_attribute.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::get_children()
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::set_value(const std::string & value_path, std::string value)
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

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::SrPolicyBindingSid::SrPolicyBindingSid()
    :
    ipv6_address{YType::str, "ipv6-address"},
    label{YType::uint32, "label"},
    type{YType::enumeration, "type"}
{
    yang_name = "sr-policy-binding-sid"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::SrPolicyBindingSid::~SrPolicyBindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::SrPolicyBindingSid::has_data() const
{
    return ipv6_address.is_set
	|| label.is_set
	|| type.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::SrPolicyBindingSid::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_address.operation)
	|| is_set(label.operation)
	|| is_set(type.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::SrPolicyBindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy-binding-sid";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::SrPolicyBindingSid::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::SrPolicyBindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::SrPolicyBindingSid::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::SrPolicyBindingSid::set_value(const std::string & value_path, std::string value)
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

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::SrPolicyAllocatedBindingSid::SrPolicyAllocatedBindingSid()
    :
    ipv6_address{YType::str, "ipv6-address"},
    label{YType::uint32, "label"},
    type{YType::enumeration, "type"}
{
    yang_name = "sr-policy-allocated-binding-sid"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::SrPolicyAllocatedBindingSid::~SrPolicyAllocatedBindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::SrPolicyAllocatedBindingSid::has_data() const
{
    return ipv6_address.is_set
	|| label.is_set
	|| type.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::SrPolicyAllocatedBindingSid::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_address.operation)
	|| is_set(label.operation)
	|| is_set(type.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::SrPolicyAllocatedBindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy-allocated-binding-sid";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::SrPolicyAllocatedBindingSid::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::SrPolicyAllocatedBindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::SrPolicyAllocatedBindingSid::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::SrPolicyAllocatedBindingSid::set_value(const std::string & value_path, std::string value)
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

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::Community::Community()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "community"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::Community::~Community()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::Community::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::Community::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::Community::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::Community::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::Community::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity::ExtendedCommunity()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "extended-community"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity::~ExtendedCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::ExtendedCommunity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute::UnknownAttribute()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "unknown-attribute"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute::~UnknownAttribute()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attribute";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::UnknownAttribute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::Cluster::Cluster()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "cluster"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::Cluster::~Cluster()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::Cluster::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::Cluster::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::Cluster::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cluster";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::Cluster::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::Cluster::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::Cluster::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::Cluster::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie::L2Tpv3Cookie()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "l2tpv3-cookie"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie::~L2Tpv3Cookie()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3-cookie";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::L2Tpv3Cookie::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue::ConnectorValue()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "connector-value"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue::~ConnectorValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connector-value";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::ConnectorValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::PmsiValue::PmsiValue()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "pmsi-value"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::PmsiValue::~PmsiValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::PmsiValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::PmsiValue::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::PmsiValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-value";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::PmsiValue::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::PmsiValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::PmsiValue::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::PmsiValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LsAttr::LsAttr()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "ls-attr"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LsAttr::~LsAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LsAttr::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LsAttr::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LsAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ls-attr";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LsAttr::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LsAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LsAttr::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LsAttr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr::LabelIndexAttr()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "label-index-attr"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr::~LabelIndexAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-index-attr";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::LabelIndexAttr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel::PeDistinguisherLabel()
    :
    label{YType::uint32, "label"},
    pe_address{YType::str, "pe-address"}
{
    yang_name = "pe-distinguisher-label"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel::~PeDistinguisherLabel()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel::has_data() const
{
    return label.is_set
	|| pe_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(label.operation)
	|| is_set(pe_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-distinguisher-label";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::PeDistinguisherLabel::set_value(const std::string & value_path, std::string value)
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

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath::SrPolicyExplicitPath()
    :
    weight{YType::uint8, "weight"}
{
    yang_name = "sr-policy-explicit-path"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath::~SrPolicyExplicitPath()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath::has_data() const
{
    for (std::size_t index=0; index<sid.size(); index++)
    {
        if(sid[index]->has_data())
            return true;
    }
    return weight.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath::has_operation() const
{
    for (std::size_t index=0; index<sid.size(); index++)
    {
        if(sid[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(weight.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy-explicit-path";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath::Sid>();
        c->parent = this;
        sid.push_back(std::move(c));
        children[segment_path] = sid.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath::get_children()
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "weight")
    {
        weight = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath::Sid::Sid()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"},
    label{YType::uint32, "label"},
    type{YType::uint8, "type"}
{
    yang_name = "sid"; yang_parent_name = "sr-policy-explicit-path";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath::Sid::~Sid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath::Sid::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set
	|| label.is_set
	|| type.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath::Sid::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation)
	|| is_set(label.operation)
	|| is_set(type.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath::Sid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath::Sid::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath::Sid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath::Sid::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::CommonAttributes::SrPolicyExplicitPath::Sid::set_value(const std::string & value_path, std::string value)
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

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::AttrSet()
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
    sr_policy_allocated_binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::SrPolicyAllocatedBindingSid>())
	,sr_policy_binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::SrPolicyBindingSid>())
{
    sr_policy_allocated_binding_sid->parent = this;
    children["sr-policy-allocated-binding-sid"] = sr_policy_allocated_binding_sid;

    sr_policy_binding_sid->parent = this;
    children["sr-policy-binding-sid"] = sr_policy_binding_sid;

    yang_name = "attr-set"; yang_parent_name = "attributes-after-policy-in";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::~AttrSet()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attr-set";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Cluster>();
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Community>();
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ConnectorValue>();
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity>();
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie>();
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr>();
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LsAttr>();
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel>();
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PmsiValue>();
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
            sr_policy_allocated_binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::SrPolicyAllocatedBindingSid>();
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
            sr_policy_binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::SrPolicyBindingSid>();
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath>();
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::UnknownAttribute>();
        c->parent = this;
        unknown_attribute.push_back(std::move(c));
        children[segment_path] = unknown_attribute.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::get_children()
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::set_value(const std::string & value_path, std::string value)
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

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::SrPolicyBindingSid::SrPolicyBindingSid()
    :
    ipv6_address{YType::str, "ipv6-address"},
    label{YType::uint32, "label"},
    type{YType::enumeration, "type"}
{
    yang_name = "sr-policy-binding-sid"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::SrPolicyBindingSid::~SrPolicyBindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::SrPolicyBindingSid::has_data() const
{
    return ipv6_address.is_set
	|| label.is_set
	|| type.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::SrPolicyBindingSid::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_address.operation)
	|| is_set(label.operation)
	|| is_set(type.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::SrPolicyBindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy-binding-sid";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::SrPolicyBindingSid::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::SrPolicyBindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::SrPolicyBindingSid::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::SrPolicyBindingSid::set_value(const std::string & value_path, std::string value)
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

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::SrPolicyAllocatedBindingSid::SrPolicyAllocatedBindingSid()
    :
    ipv6_address{YType::str, "ipv6-address"},
    label{YType::uint32, "label"},
    type{YType::enumeration, "type"}
{
    yang_name = "sr-policy-allocated-binding-sid"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::SrPolicyAllocatedBindingSid::~SrPolicyAllocatedBindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::SrPolicyAllocatedBindingSid::has_data() const
{
    return ipv6_address.is_set
	|| label.is_set
	|| type.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::SrPolicyAllocatedBindingSid::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_address.operation)
	|| is_set(label.operation)
	|| is_set(type.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::SrPolicyAllocatedBindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy-allocated-binding-sid";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::SrPolicyAllocatedBindingSid::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::SrPolicyAllocatedBindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::SrPolicyAllocatedBindingSid::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::SrPolicyAllocatedBindingSid::set_value(const std::string & value_path, std::string value)
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

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Community::Community()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "community"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Community::~Community()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Community::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Community::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Community::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Community::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Community::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::ExtendedCommunity()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "extended-community"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::~ExtendedCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ExtendedCommunity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::UnknownAttribute()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "unknown-attribute"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::~UnknownAttribute()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attribute";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::UnknownAttribute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Cluster::Cluster()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "cluster"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Cluster::~Cluster()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Cluster::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Cluster::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Cluster::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cluster";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Cluster::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Cluster::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Cluster::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::Cluster::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie::L2Tpv3Cookie()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "l2tpv3-cookie"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie::~L2Tpv3Cookie()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3-cookie";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::L2Tpv3Cookie::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ConnectorValue::ConnectorValue()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "connector-value"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ConnectorValue::~ConnectorValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ConnectorValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ConnectorValue::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ConnectorValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connector-value";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ConnectorValue::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ConnectorValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ConnectorValue::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::ConnectorValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PmsiValue::PmsiValue()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "pmsi-value"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PmsiValue::~PmsiValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PmsiValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PmsiValue::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PmsiValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-value";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PmsiValue::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PmsiValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PmsiValue::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PmsiValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LsAttr::LsAttr()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "ls-attr"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LsAttr::~LsAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LsAttr::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LsAttr::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LsAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ls-attr";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LsAttr::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LsAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LsAttr::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LsAttr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr::LabelIndexAttr()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "label-index-attr"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr::~LabelIndexAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-index-attr";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::LabelIndexAttr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::PeDistinguisherLabel()
    :
    label{YType::uint32, "label"},
    pe_address{YType::str, "pe-address"}
{
    yang_name = "pe-distinguisher-label"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::~PeDistinguisherLabel()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::has_data() const
{
    return label.is_set
	|| pe_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(label.operation)
	|| is_set(pe_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-distinguisher-label";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::PeDistinguisherLabel::set_value(const std::string & value_path, std::string value)
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

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath::SrPolicyExplicitPath()
    :
    weight{YType::uint8, "weight"}
{
    yang_name = "sr-policy-explicit-path"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath::~SrPolicyExplicitPath()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath::has_data() const
{
    for (std::size_t index=0; index<sid.size(); index++)
    {
        if(sid[index]->has_data())
            return true;
    }
    return weight.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath::has_operation() const
{
    for (std::size_t index=0; index<sid.size(); index++)
    {
        if(sid[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(weight.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy-explicit-path";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath::Sid>();
        c->parent = this;
        sid.push_back(std::move(c));
        children[segment_path] = sid.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath::get_children()
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "weight")
    {
        weight = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath::Sid::Sid()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"},
    label{YType::uint32, "label"},
    type{YType::uint8, "type"}
{
    yang_name = "sid"; yang_parent_name = "sr-policy-explicit-path";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath::Sid::~Sid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath::Sid::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set
	|| label.is_set
	|| type.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath::Sid::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation)
	|| is_set(label.operation)
	|| is_set(type.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath::Sid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath::Sid::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath::Sid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath::Sid::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::AttrSet::SrPolicyExplicitPath::Sid::set_value(const std::string & value_path, std::string value)
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

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RnhAddr::RnhAddr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    len{YType::enumeration, "len"},
    mac_address{YType::str, "mac-address"}
{
    yang_name = "rnh-addr"; yang_parent_name = "attributes-after-policy-in";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RnhAddr::~RnhAddr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RnhAddr::has_data() const
{
    return ipv4_address.is_set
	|| ipv6_address.is_set
	|| len.is_set
	|| mac_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RnhAddr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(len.operation)
	|| is_set(mac_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RnhAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rnh-addr";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RnhAddr::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RnhAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RnhAddr::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RnhAddr::set_value(const std::string & value_path, std::string value)
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

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::RibrnhIp()
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
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2VpnvplsAddress>())
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

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::~RibrnhIp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ribrnh-ip";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress>();
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
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress>();
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
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress>();
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
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::get_children()
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::set_value(const std::string & value_path, std::string value)
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

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "ribrnh-ip";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "ribrnh-ip";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "ribrnh-ip";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "ribrnh-ip";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Dampenings::Dampening::AttributesAfterPolicyIn::RibrnhIp::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilters()
{
    yang_name = "prefix-filters"; yang_parent_name = "af";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::~PrefixFilters()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::has_data() const
{
    for (std::size_t index=0; index<prefix_filter.size(); index++)
    {
        if(prefix_filter[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::has_operation() const
{
    for (std::size_t index=0; index<prefix_filter.size(); index++)
    {
        if(prefix_filter[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-filters";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixFilters' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "prefix-filter")
    {
        for(auto const & c : prefix_filter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter>();
        c->parent = this;
        prefix_filter.push_back(std::move(c));
        children[segment_path] = prefix_filter.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::get_children()
{
    for (auto const & c : prefix_filter)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixFilter()
    :
    neighbor_address{YType::str, "neighbor-address"},
    af_name{YType::enumeration, "af-name"}
    	,
    neighbor_address_xr(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr>())
	,prefix_list_info(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo>())
{
    neighbor_address_xr->parent = this;
    children["neighbor-address-xr"] = neighbor_address_xr;

    prefix_list_info->parent = this;
    children["prefix-list-info"] = prefix_list_info;

    yang_name = "prefix-filter"; yang_parent_name = "prefix-filters";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::~PrefixFilter()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::has_data() const
{
    return neighbor_address.is_set
	|| af_name.is_set
	|| (neighbor_address_xr !=  nullptr && neighbor_address_xr->has_data())
	|| (prefix_list_info !=  nullptr && prefix_list_info->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::has_operation() const
{
    return is_set(operation)
	|| is_set(neighbor_address.operation)
	|| is_set(af_name.operation)
	|| (neighbor_address_xr !=  nullptr && neighbor_address_xr->has_operation())
	|| (prefix_list_info !=  nullptr && prefix_list_info->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-filter" <<"[neighbor-address='" <<neighbor_address <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixFilter' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-address-xr")
    {
        if(neighbor_address_xr != nullptr)
        {
            children["neighbor-address-xr"] = neighbor_address_xr;
        }
        else
        {
            neighbor_address_xr = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr>();
            neighbor_address_xr->parent = this;
            children["neighbor-address-xr"] = neighbor_address_xr;
        }
        return children.at("neighbor-address-xr");
    }

    if(child_yang_name == "prefix-list-info")
    {
        if(prefix_list_info != nullptr)
        {
            children["prefix-list-info"] = prefix_list_info;
        }
        else
        {
            prefix_list_info = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo>();
            prefix_list_info->parent = this;
            children["prefix-list-info"] = prefix_list_info;
        }
        return children.at("prefix-list-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::get_children()
{
    if(children.find("neighbor-address-xr") == children.end())
    {
        if(neighbor_address_xr != nullptr)
        {
            children["neighbor-address-xr"] = neighbor_address_xr;
        }
    }

    if(children.find("prefix-list-info") == children.end())
    {
        if(prefix_list_info != nullptr)
        {
            children["prefix-list-info"] = prefix_list_info;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "af-name")
    {
        af_name = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::NeighborAddressXr()
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
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;
    children["ipv4sr-policy-address"] = ipv4sr_policy_address;

    ipv6sr_policy_address->parent = this;
    children["ipv6sr-policy-address"] = ipv6sr_policy_address;

    l2vpn_mspw_address->parent = this;
    children["l2vpn-mspw-address"] = l2vpn_mspw_address;

    l2vpnvpls_address->parent = this;
    children["l2vpnvpls-address"] = l2vpnvpls_address;

    yang_name = "neighbor-address-xr"; yang_parent_name = "prefix-filter";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::~NeighborAddressXr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-address-xr";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAddressXr' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv4SrPolicyAddress>();
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
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv6SrPolicyAddress>();
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
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2VpnMspwAddress>();
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
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::get_children()
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::set_value(const std::string & value_path, std::string value)
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

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "neighbor-address-xr";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbor-address-xr";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "neighbor-address-xr";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "neighbor-address-xr";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::NeighborAddressXr::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::PrefixListInfo()
{
    yang_name = "prefix-list-info"; yang_parent_name = "prefix-filter";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::~PrefixListInfo()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::has_data() const
{
    for (std::size_t index=0; index<bgp_pfxlst.size(); index++)
    {
        if(bgp_pfxlst[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::has_operation() const
{
    for (std::size_t index=0; index<bgp_pfxlst.size(); index++)
    {
        if(bgp_pfxlst[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list-info";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixListInfo' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bgp-pfxlst")
    {
        for(auto const & c : bgp_pfxlst)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst>();
        c->parent = this;
        bgp_pfxlst.push_back(std::move(c));
        children[segment_path] = bgp_pfxlst.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::get_children()
{
    for (auto const & c : bgp_pfxlst)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPfxlst()
    :
    is_prefix_grant{YType::boolean, "is-prefix-grant"},
    max_prefix_length{YType::uint8, "max-prefix-length"},
    min_prefix_length{YType::uint8, "min-prefix-length"},
    sequence_number{YType::uint32, "sequence-number"}
    	,
    bgp_prefix(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix>())
{
    bgp_prefix->parent = this;
    children["bgp-prefix"] = bgp_prefix;

    yang_name = "bgp-pfxlst"; yang_parent_name = "prefix-list-info";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::~BgpPfxlst()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::has_data() const
{
    return is_prefix_grant.is_set
	|| max_prefix_length.is_set
	|| min_prefix_length.is_set
	|| sequence_number.is_set
	|| (bgp_prefix !=  nullptr && bgp_prefix->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::has_operation() const
{
    return is_set(operation)
	|| is_set(is_prefix_grant.operation)
	|| is_set(max_prefix_length.operation)
	|| is_set(min_prefix_length.operation)
	|| is_set(sequence_number.operation)
	|| (bgp_prefix !=  nullptr && bgp_prefix->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-pfxlst";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BgpPfxlst' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_prefix_grant.is_set || is_set(is_prefix_grant.operation)) leaf_name_data.push_back(is_prefix_grant.get_name_leafdata());
    if (max_prefix_length.is_set || is_set(max_prefix_length.operation)) leaf_name_data.push_back(max_prefix_length.get_name_leafdata());
    if (min_prefix_length.is_set || is_set(min_prefix_length.operation)) leaf_name_data.push_back(min_prefix_length.get_name_leafdata());
    if (sequence_number.is_set || is_set(sequence_number.operation)) leaf_name_data.push_back(sequence_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bgp-prefix")
    {
        if(bgp_prefix != nullptr)
        {
            children["bgp-prefix"] = bgp_prefix;
        }
        else
        {
            bgp_prefix = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix>();
            bgp_prefix->parent = this;
            children["bgp-prefix"] = bgp_prefix;
        }
        return children.at("bgp-prefix");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::get_children()
{
    if(children.find("bgp-prefix") == children.end())
    {
        if(bgp_prefix != nullptr)
        {
            children["bgp-prefix"] = bgp_prefix;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-prefix-grant")
    {
        is_prefix_grant = value;
    }
    if(value_path == "max-prefix-length")
    {
        max_prefix_length = value;
    }
    if(value_path == "min-prefix-length")
    {
        min_prefix_length = value;
    }
    if(value_path == "sequence-number")
    {
        sequence_number = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::BgpPrefix()
    :
    prefix_length{YType::uint16, "prefix-length"}
    	,
    prefix(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix>())
{
    prefix->parent = this;
    children["prefix"] = prefix;

    yang_name = "bgp-prefix"; yang_parent_name = "bgp-pfxlst";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::~BgpPrefix()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::has_data() const
{
    return prefix_length.is_set
	|| (prefix !=  nullptr && prefix->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix_length.operation)
	|| (prefix !=  nullptr && prefix->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-prefix";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BgpPrefix' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "prefix")
    {
        if(prefix != nullptr)
        {
            children["prefix"] = prefix;
        }
        else
        {
            prefix = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix>();
            prefix->parent = this;
            children["prefix"] = prefix;
        }
        return children.at("prefix");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::get_children()
{
    if(children.find("prefix") == children.end())
    {
        if(prefix != nullptr)
        {
            children["prefix"] = prefix;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Prefix()
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
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;
    children["ipv4sr-policy-address"] = ipv4sr_policy_address;

    ipv6sr_policy_address->parent = this;
    children["ipv6sr-policy-address"] = ipv6sr_policy_address;

    l2vpn_mspw_address->parent = this;
    children["l2vpn-mspw-address"] = l2vpn_mspw_address;

    l2vpnvpls_address->parent = this;
    children["l2vpnvpls-address"] = l2vpnvpls_address;

    yang_name = "prefix"; yang_parent_name = "bgp-prefix";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::~Prefix()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prefix' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv4SrPolicyAddress>();
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
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv6SrPolicyAddress>();
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
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2VpnMspwAddress>();
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
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::get_children()
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::set_value(const std::string & value_path, std::string value)
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

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "prefix";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "prefix";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "prefix";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "prefix";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::PrefixFilters::PrefixFilter::PrefixListInfo::BgpPfxlst::BgpPrefix::Prefix::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attributes()
{
    yang_name = "attributes"; yang_parent_name = "af";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::~Attributes()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::has_data() const
{
    for (std::size_t index=0; index<attribute.size(); index++)
    {
        if(attribute[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::has_operation() const
{
    for (std::size_t index=0; index<attribute.size(); index++)
    {
        if(attribute[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attributes";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attributes' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "attribute")
    {
        for(auto const & c : attribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute>();
        c->parent = this;
        attribute.push_back(std::move(c));
        children[segment_path] = attribute.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::get_children()
{
    for (auto const & c : attribute)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::Attribute()
    :
    attribute_cache_bucket{YType::int32, "attribute-cache-bucket"},
    attribute_cache_id{YType::int32, "attribute-cache-id"},
    attribute_iid{YType::int32, "attribute-iid"},
    attribute_instance_id{YType::uint8, "attribute-instance-id"},
    attribute_structure_hash_value{YType::uint32, "attribute-structure-hash-value"},
    attribute_structure_id{YType::uint32, "attribute-structure-id"},
    process_instance_id{YType::uint8, "process-instance-id"},
    reference_count{YType::uint32, "reference-count"}
    	,
    attribute_info(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo>())
{
    attribute_info->parent = this;
    children["attribute-info"] = attribute_info;

    yang_name = "attribute"; yang_parent_name = "attributes";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::~Attribute()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::has_data() const
{
    return attribute_cache_bucket.is_set
	|| attribute_cache_id.is_set
	|| attribute_iid.is_set
	|| attribute_instance_id.is_set
	|| attribute_structure_hash_value.is_set
	|| attribute_structure_id.is_set
	|| process_instance_id.is_set
	|| reference_count.is_set
	|| (attribute_info !=  nullptr && attribute_info->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::has_operation() const
{
    return is_set(operation)
	|| is_set(attribute_cache_bucket.operation)
	|| is_set(attribute_cache_id.operation)
	|| is_set(attribute_iid.operation)
	|| is_set(attribute_instance_id.operation)
	|| is_set(attribute_structure_hash_value.operation)
	|| is_set(attribute_structure_id.operation)
	|| is_set(process_instance_id.operation)
	|| is_set(reference_count.operation)
	|| (attribute_info !=  nullptr && attribute_info->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attribute' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attribute_cache_bucket.is_set || is_set(attribute_cache_bucket.operation)) leaf_name_data.push_back(attribute_cache_bucket.get_name_leafdata());
    if (attribute_cache_id.is_set || is_set(attribute_cache_id.operation)) leaf_name_data.push_back(attribute_cache_id.get_name_leafdata());
    if (attribute_iid.is_set || is_set(attribute_iid.operation)) leaf_name_data.push_back(attribute_iid.get_name_leafdata());
    if (attribute_instance_id.is_set || is_set(attribute_instance_id.operation)) leaf_name_data.push_back(attribute_instance_id.get_name_leafdata());
    if (attribute_structure_hash_value.is_set || is_set(attribute_structure_hash_value.operation)) leaf_name_data.push_back(attribute_structure_hash_value.get_name_leafdata());
    if (attribute_structure_id.is_set || is_set(attribute_structure_id.operation)) leaf_name_data.push_back(attribute_structure_id.get_name_leafdata());
    if (process_instance_id.is_set || is_set(process_instance_id.operation)) leaf_name_data.push_back(process_instance_id.get_name_leafdata());
    if (reference_count.is_set || is_set(reference_count.operation)) leaf_name_data.push_back(reference_count.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "attribute-info")
    {
        if(attribute_info != nullptr)
        {
            children["attribute-info"] = attribute_info;
        }
        else
        {
            attribute_info = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo>();
            attribute_info->parent = this;
            children["attribute-info"] = attribute_info;
        }
        return children.at("attribute-info");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::get_children()
{
    if(children.find("attribute-info") == children.end())
    {
        if(attribute_info != nullptr)
        {
            children["attribute-info"] = attribute_info;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attribute-cache-bucket")
    {
        attribute_cache_bucket = value;
    }
    if(value_path == "attribute-cache-id")
    {
        attribute_cache_id = value;
    }
    if(value_path == "attribute-iid")
    {
        attribute_iid = value;
    }
    if(value_path == "attribute-instance-id")
    {
        attribute_instance_id = value;
    }
    if(value_path == "attribute-structure-hash-value")
    {
        attribute_structure_hash_value = value;
    }
    if(value_path == "attribute-structure-id")
    {
        attribute_structure_id = value;
    }
    if(value_path == "process-instance-id")
    {
        process_instance_id = value;
    }
    if(value_path == "reference-count")
    {
        reference_count = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttributeInfo()
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
    attr_set(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet>())
	,common_attributes(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes>())
	,ribrnh_ip(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp>())
	,rnh_addr(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr>())
{
    attr_set->parent = this;
    children["attr-set"] = attr_set;

    common_attributes->parent = this;
    children["common-attributes"] = common_attributes;

    ribrnh_ip->parent = this;
    children["ribrnh-ip"] = ribrnh_ip;

    rnh_addr->parent = this;
    children["rnh-addr"] = rnh_addr;

    yang_name = "attribute-info"; yang_parent_name = "attribute";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::~AttributeInfo()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute-info";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttributeInfo' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            attr_set = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet>();
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
            common_attributes = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes>();
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
            ribrnh_ip = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp>();
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
            rnh_addr = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr>();
            rnh_addr->parent = this;
            children["rnh-addr"] = rnh_addr;
        }
        return children.at("rnh-addr");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::get_children()
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::set_value(const std::string & value_path, std::string value)
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

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::CommonAttributes()
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
    sr_policy_allocated_binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyAllocatedBindingSid>())
	,sr_policy_binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyBindingSid>())
{
    sr_policy_allocated_binding_sid->parent = this;
    children["sr-policy-allocated-binding-sid"] = sr_policy_allocated_binding_sid;

    sr_policy_binding_sid->parent = this;
    children["sr-policy-binding-sid"] = sr_policy_binding_sid;

    yang_name = "common-attributes"; yang_parent_name = "attribute-info";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::~CommonAttributes()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-attributes";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster>();
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community>();
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue>();
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity>();
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie>();
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr>();
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr>();
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel>();
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue>();
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
            sr_policy_allocated_binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyAllocatedBindingSid>();
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
            sr_policy_binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyBindingSid>();
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyExplicitPath>();
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute>();
        c->parent = this;
        unknown_attribute.push_back(std::move(c));
        children[segment_path] = unknown_attribute.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::get_children()
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::set_value(const std::string & value_path, std::string value)
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

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyBindingSid::SrPolicyBindingSid()
    :
    ipv6_address{YType::str, "ipv6-address"},
    label{YType::uint32, "label"},
    type{YType::enumeration, "type"}
{
    yang_name = "sr-policy-binding-sid"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyBindingSid::~SrPolicyBindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyBindingSid::has_data() const
{
    return ipv6_address.is_set
	|| label.is_set
	|| type.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyBindingSid::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_address.operation)
	|| is_set(label.operation)
	|| is_set(type.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyBindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy-binding-sid";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyBindingSid::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyBindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyBindingSid::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyBindingSid::set_value(const std::string & value_path, std::string value)
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

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyAllocatedBindingSid::SrPolicyAllocatedBindingSid()
    :
    ipv6_address{YType::str, "ipv6-address"},
    label{YType::uint32, "label"},
    type{YType::enumeration, "type"}
{
    yang_name = "sr-policy-allocated-binding-sid"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyAllocatedBindingSid::~SrPolicyAllocatedBindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyAllocatedBindingSid::has_data() const
{
    return ipv6_address.is_set
	|| label.is_set
	|| type.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyAllocatedBindingSid::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_address.operation)
	|| is_set(label.operation)
	|| is_set(type.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyAllocatedBindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy-allocated-binding-sid";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyAllocatedBindingSid::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyAllocatedBindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyAllocatedBindingSid::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyAllocatedBindingSid::set_value(const std::string & value_path, std::string value)
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

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::Community()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "community"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::~Community()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Community::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::ExtendedCommunity()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "extended-community"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::~ExtendedCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ExtendedCommunity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::UnknownAttribute()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "unknown-attribute"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::~UnknownAttribute()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attribute";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::UnknownAttribute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::Cluster()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "cluster"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::~Cluster()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cluster";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::Cluster::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::L2Tpv3Cookie()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "l2tpv3-cookie"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::~L2Tpv3Cookie()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3-cookie";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::L2Tpv3Cookie::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::ConnectorValue()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "connector-value"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::~ConnectorValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connector-value";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::ConnectorValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::PmsiValue()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "pmsi-value"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::~PmsiValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-value";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PmsiValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::LsAttr()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "ls-attr"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::~LsAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ls-attr";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LsAttr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::LabelIndexAttr()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "label-index-attr"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::~LabelIndexAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-index-attr";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::LabelIndexAttr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::PeDistinguisherLabel()
    :
    label{YType::uint32, "label"},
    pe_address{YType::str, "pe-address"}
{
    yang_name = "pe-distinguisher-label"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::~PeDistinguisherLabel()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::has_data() const
{
    return label.is_set
	|| pe_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(label.operation)
	|| is_set(pe_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-distinguisher-label";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::PeDistinguisherLabel::set_value(const std::string & value_path, std::string value)
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

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyExplicitPath::SrPolicyExplicitPath()
    :
    weight{YType::uint8, "weight"}
{
    yang_name = "sr-policy-explicit-path"; yang_parent_name = "common-attributes";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyExplicitPath::~SrPolicyExplicitPath()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyExplicitPath::has_data() const
{
    for (std::size_t index=0; index<sid.size(); index++)
    {
        if(sid[index]->has_data())
            return true;
    }
    return weight.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyExplicitPath::has_operation() const
{
    for (std::size_t index=0; index<sid.size(); index++)
    {
        if(sid[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(weight.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyExplicitPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy-explicit-path";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyExplicitPath::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyExplicitPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyExplicitPath::Sid>();
        c->parent = this;
        sid.push_back(std::move(c));
        children[segment_path] = sid.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyExplicitPath::get_children()
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyExplicitPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "weight")
    {
        weight = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyExplicitPath::Sid::Sid()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"},
    label{YType::uint32, "label"},
    type{YType::uint8, "type"}
{
    yang_name = "sid"; yang_parent_name = "sr-policy-explicit-path";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyExplicitPath::Sid::~Sid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyExplicitPath::Sid::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set
	|| label.is_set
	|| type.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyExplicitPath::Sid::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation)
	|| is_set(label.operation)
	|| is_set(type.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyExplicitPath::Sid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyExplicitPath::Sid::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyExplicitPath::Sid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyExplicitPath::Sid::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::CommonAttributes::SrPolicyExplicitPath::Sid::set_value(const std::string & value_path, std::string value)
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

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::AttrSet()
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
    sr_policy_allocated_binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyAllocatedBindingSid>())
	,sr_policy_binding_sid(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyBindingSid>())
{
    sr_policy_allocated_binding_sid->parent = this;
    children["sr-policy-allocated-binding-sid"] = sr_policy_allocated_binding_sid;

    sr_policy_binding_sid->parent = this;
    children["sr-policy-binding-sid"] = sr_policy_binding_sid;

    yang_name = "attr-set"; yang_parent_name = "attribute-info";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::~AttrSet()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attr-set";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster>();
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community>();
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue>();
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity>();
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie>();
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr>();
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr>();
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel>();
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue>();
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
            sr_policy_allocated_binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyAllocatedBindingSid>();
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
            sr_policy_binding_sid = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyBindingSid>();
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyExplicitPath>();
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute>();
        c->parent = this;
        unknown_attribute.push_back(std::move(c));
        children[segment_path] = unknown_attribute.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::get_children()
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::set_value(const std::string & value_path, std::string value)
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

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyBindingSid::SrPolicyBindingSid()
    :
    ipv6_address{YType::str, "ipv6-address"},
    label{YType::uint32, "label"},
    type{YType::enumeration, "type"}
{
    yang_name = "sr-policy-binding-sid"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyBindingSid::~SrPolicyBindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyBindingSid::has_data() const
{
    return ipv6_address.is_set
	|| label.is_set
	|| type.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyBindingSid::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_address.operation)
	|| is_set(label.operation)
	|| is_set(type.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyBindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy-binding-sid";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyBindingSid::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyBindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyBindingSid::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyBindingSid::set_value(const std::string & value_path, std::string value)
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

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyAllocatedBindingSid::SrPolicyAllocatedBindingSid()
    :
    ipv6_address{YType::str, "ipv6-address"},
    label{YType::uint32, "label"},
    type{YType::enumeration, "type"}
{
    yang_name = "sr-policy-allocated-binding-sid"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyAllocatedBindingSid::~SrPolicyAllocatedBindingSid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyAllocatedBindingSid::has_data() const
{
    return ipv6_address.is_set
	|| label.is_set
	|| type.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyAllocatedBindingSid::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_address.operation)
	|| is_set(label.operation)
	|| is_set(type.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyAllocatedBindingSid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy-allocated-binding-sid";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyAllocatedBindingSid::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyAllocatedBindingSid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyAllocatedBindingSid::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyAllocatedBindingSid::set_value(const std::string & value_path, std::string value)
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

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::Community()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "community"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::~Community()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Community::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::ExtendedCommunity()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "extended-community"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::~ExtendedCommunity()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "extended-community";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ExtendedCommunity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::UnknownAttribute()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "unknown-attribute"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::~UnknownAttribute()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unknown-attribute";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::UnknownAttribute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::Cluster()
    :
    entry{YType::uint32, "entry"}
{
    yang_name = "cluster"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::~Cluster()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cluster";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::Cluster::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::L2Tpv3Cookie()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "l2tpv3-cookie"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::~L2Tpv3Cookie()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tpv3-cookie";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::L2Tpv3Cookie::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::ConnectorValue()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "connector-value"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::~ConnectorValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connector-value";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::ConnectorValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::PmsiValue()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "pmsi-value"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::~PmsiValue()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pmsi-value";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PmsiValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::LsAttr()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "ls-attr"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::~LsAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ls-attr";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LsAttr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::LabelIndexAttr()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "label-index-attr"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::~LabelIndexAttr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-index-attr";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::LabelIndexAttr::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::PeDistinguisherLabel()
    :
    label{YType::uint32, "label"},
    pe_address{YType::str, "pe-address"}
{
    yang_name = "pe-distinguisher-label"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::~PeDistinguisherLabel()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::has_data() const
{
    return label.is_set
	|| pe_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::has_operation() const
{
    return is_set(operation)
	|| is_set(label.operation)
	|| is_set(pe_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pe-distinguisher-label";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::PeDistinguisherLabel::set_value(const std::string & value_path, std::string value)
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

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyExplicitPath::SrPolicyExplicitPath()
    :
    weight{YType::uint8, "weight"}
{
    yang_name = "sr-policy-explicit-path"; yang_parent_name = "attr-set";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyExplicitPath::~SrPolicyExplicitPath()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyExplicitPath::has_data() const
{
    for (std::size_t index=0; index<sid.size(); index++)
    {
        if(sid[index]->has_data())
            return true;
    }
    return weight.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyExplicitPath::has_operation() const
{
    for (std::size_t index=0; index<sid.size(); index++)
    {
        if(sid[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(weight.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyExplicitPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-policy-explicit-path";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyExplicitPath::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyExplicitPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyExplicitPath::Sid>();
        c->parent = this;
        sid.push_back(std::move(c));
        children[segment_path] = sid.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyExplicitPath::get_children()
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyExplicitPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "weight")
    {
        weight = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyExplicitPath::Sid::Sid()
    :
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"},
    label{YType::uint32, "label"},
    type{YType::uint8, "type"}
{
    yang_name = "sid"; yang_parent_name = "sr-policy-explicit-path";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyExplicitPath::Sid::~Sid()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyExplicitPath::Sid::has_data() const
{
    return ipv4.is_set
	|| ipv6.is_set
	|| label.is_set
	|| type.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyExplicitPath::Sid::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation)
	|| is_set(label.operation)
	|| is_set(type.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyExplicitPath::Sid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyExplicitPath::Sid::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyExplicitPath::Sid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyExplicitPath::Sid::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::AttrSet::SrPolicyExplicitPath::Sid::set_value(const std::string & value_path, std::string value)
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

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::RnhAddr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    ipv6_address{YType::str, "ipv6-address"},
    len{YType::enumeration, "len"},
    mac_address{YType::str, "mac-address"}
{
    yang_name = "rnh-addr"; yang_parent_name = "attribute-info";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::~RnhAddr()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::has_data() const
{
    return ipv4_address.is_set
	|| ipv6_address.is_set
	|| len.is_set
	|| mac_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(len.operation)
	|| is_set(mac_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rnh-addr";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RnhAddr::set_value(const std::string & value_path, std::string value)
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

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::RibrnhIp()
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
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;
    children["ipv4sr-policy-address"] = ipv4sr_policy_address;

    ipv6sr_policy_address->parent = this;
    children["ipv6sr-policy-address"] = ipv6sr_policy_address;

    l2vpn_mspw_address->parent = this;
    children["l2vpn-mspw-address"] = l2vpn_mspw_address;

    l2vpnvpls_address->parent = this;
    children["l2vpnvpls-address"] = l2vpnvpls_address;

    yang_name = "ribrnh-ip"; yang_parent_name = "attribute-info";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::~RibrnhIp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ribrnh-ip";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress>();
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
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress>();
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
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress>();
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
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::get_children()
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::set_value(const std::string & value_path, std::string value)
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

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "ribrnh-ip";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "ribrnh-ip";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "ribrnh-ip";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "ribrnh-ip";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Afs::Af::Attributes::Attribute::AttributeInfo::RibrnhIp::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Information::Information()
    :
    route_distinguisher{YType::str, "route-distinguisher"}
{
    yang_name = "information"; yang_parent_name = "default-vrf";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Information::~Information()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Information::has_data() const
{
    return route_distinguisher.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Information::has_operation() const
{
    return is_set(operation)
	|| is_set(route_distinguisher.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Information::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Information' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_distinguisher.is_set || is_set(route_distinguisher.operation)) leaf_name_data.push_back(route_distinguisher.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Information::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Information::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-distinguisher")
    {
        route_distinguisher = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::UpdateInboundFilterVrf()
    :
    last_update_filtered_age{YType::uint32, "last-update-filtered-age"},
    update_filtered_message_count{YType::uint32, "update-filtered-message-count"},
    update_filtered_neighbor_count{YType::uint32, "update-filtered-neighbor-count"},
    update_vrf_name{YType::str, "update-vrf-name"}
    	,
    last_update_filtered_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp>())
{
    last_update_filtered_timestamp->parent = this;
    children["last-update-filtered-timestamp"] = last_update_filtered_timestamp;

    yang_name = "update-inbound-filter-vrf"; yang_parent_name = "default-vrf";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::~UpdateInboundFilterVrf()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::has_data() const
{
    return last_update_filtered_age.is_set
	|| update_filtered_message_count.is_set
	|| update_filtered_neighbor_count.is_set
	|| update_vrf_name.is_set
	|| (last_update_filtered_timestamp !=  nullptr && last_update_filtered_timestamp->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::has_operation() const
{
    return is_set(operation)
	|| is_set(last_update_filtered_age.operation)
	|| is_set(update_filtered_message_count.operation)
	|| is_set(update_filtered_neighbor_count.operation)
	|| is_set(update_vrf_name.operation)
	|| (last_update_filtered_timestamp !=  nullptr && last_update_filtered_timestamp->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-inbound-filter-vrf";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpdateInboundFilterVrf' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_update_filtered_age.is_set || is_set(last_update_filtered_age.operation)) leaf_name_data.push_back(last_update_filtered_age.get_name_leafdata());
    if (update_filtered_message_count.is_set || is_set(update_filtered_message_count.operation)) leaf_name_data.push_back(update_filtered_message_count.get_name_leafdata());
    if (update_filtered_neighbor_count.is_set || is_set(update_filtered_neighbor_count.operation)) leaf_name_data.push_back(update_filtered_neighbor_count.get_name_leafdata());
    if (update_vrf_name.is_set || is_set(update_vrf_name.operation)) leaf_name_data.push_back(update_vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-update-filtered-timestamp")
    {
        if(last_update_filtered_timestamp != nullptr)
        {
            children["last-update-filtered-timestamp"] = last_update_filtered_timestamp;
        }
        else
        {
            last_update_filtered_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp>();
            last_update_filtered_timestamp->parent = this;
            children["last-update-filtered-timestamp"] = last_update_filtered_timestamp;
        }
        return children.at("last-update-filtered-timestamp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::get_children()
{
    if(children.find("last-update-filtered-timestamp") == children.end())
    {
        if(last_update_filtered_timestamp != nullptr)
        {
            children["last-update-filtered-timestamp"] = last_update_filtered_timestamp;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-update-filtered-age")
    {
        last_update_filtered_age = value;
    }
    if(value_path == "update-filtered-message-count")
    {
        update_filtered_message_count = value;
    }
    if(value_path == "update-filtered-neighbor-count")
    {
        update_filtered_neighbor_count = value;
    }
    if(value_path == "update-vrf-name")
    {
        update_vrf_name = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::LastUpdateFilteredTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-update-filtered-timestamp"; yang_parent_name = "update-inbound-filter-vrf";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::~LastUpdateFilteredTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-filtered-timestamp";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastUpdateFilteredTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundFilterVrf::LastUpdateFilteredTimestamp::set_value(const std::string & value_path, std::string value)
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

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postits()
{
    yang_name = "postits"; yang_parent_name = "default-vrf";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::~Postits()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::has_data() const
{
    for (std::size_t index=0; index<postit.size(); index++)
    {
        if(postit[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::has_operation() const
{
    for (std::size_t index=0; index<postit.size(); index++)
    {
        if(postit[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "postits";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Postits' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "postit")
    {
        for(auto const & c : postit)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit>();
        c->parent = this;
        postit.push_back(std::move(c));
        children[segment_path] = postit.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::get_children()
{
    for (auto const & c : postit)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::Postit()
    :
    neighbor_address{YType::str, "neighbor-address"},
    connect_state{YType::uint32, "connect-state"},
    nsr_state{YType::enumeration, "nsr-state"},
    start_time{YType::uint32, "start-time"},
    vrf_name{YType::str, "vrf-name"}
    	,
    neighbors_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress>())
{
    neighbors_address->parent = this;
    children["neighbors-address"] = neighbors_address;

    yang_name = "postit"; yang_parent_name = "postits";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::~Postit()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::has_data() const
{
    for (std::size_t index=0; index<neighbor_af.size(); index++)
    {
        if(neighbor_af[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<postit_info.size(); index++)
    {
        if(postit_info[index]->has_data())
            return true;
    }
    return neighbor_address.is_set
	|| connect_state.is_set
	|| nsr_state.is_set
	|| start_time.is_set
	|| vrf_name.is_set
	|| (neighbors_address !=  nullptr && neighbors_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::has_operation() const
{
    for (std::size_t index=0; index<neighbor_af.size(); index++)
    {
        if(neighbor_af[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<postit_info.size(); index++)
    {
        if(postit_info[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(neighbor_address.operation)
	|| is_set(connect_state.operation)
	|| is_set(nsr_state.operation)
	|| is_set(start_time.operation)
	|| is_set(vrf_name.operation)
	|| (neighbors_address !=  nullptr && neighbors_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "postit" <<"[neighbor-address='" <<neighbor_address <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Postit' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (connect_state.is_set || is_set(connect_state.operation)) leaf_name_data.push_back(connect_state.get_name_leafdata());
    if (nsr_state.is_set || is_set(nsr_state.operation)) leaf_name_data.push_back(nsr_state.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.operation)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-af")
    {
        for(auto const & c : neighbor_af)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborAf>();
        c->parent = this;
        neighbor_af.push_back(std::move(c));
        children[segment_path] = neighbor_af.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbors-address")
    {
        if(neighbors_address != nullptr)
        {
            children["neighbors-address"] = neighbors_address;
        }
        else
        {
            neighbors_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress>();
            neighbors_address->parent = this;
            children["neighbors-address"] = neighbors_address;
        }
        return children.at("neighbors-address");
    }

    if(child_yang_name == "postit-info")
    {
        for(auto const & c : postit_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo>();
        c->parent = this;
        postit_info.push_back(std::move(c));
        children[segment_path] = postit_info.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::get_children()
{
    for (auto const & c : neighbor_af)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("neighbors-address") == children.end())
    {
        if(neighbors_address != nullptr)
        {
            children["neighbors-address"] = neighbors_address;
        }
    }

    for (auto const & c : postit_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "connect-state")
    {
        connect_state = value;
    }
    if(value_path == "nsr-state")
    {
        nsr_state = value;
    }
    if(value_path == "start-time")
    {
        start_time = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::NeighborsAddress()
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
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;
    children["ipv4sr-policy-address"] = ipv4sr_policy_address;

    ipv6sr_policy_address->parent = this;
    children["ipv6sr-policy-address"] = ipv6sr_policy_address;

    l2vpn_mspw_address->parent = this;
    children["l2vpn-mspw-address"] = l2vpn_mspw_address;

    l2vpnvpls_address->parent = this;
    children["l2vpnvpls-address"] = l2vpnvpls_address;

    yang_name = "neighbors-address"; yang_parent_name = "postit";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::~NeighborsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborsAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress>();
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
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress>();
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
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress>();
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
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::get_children()
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::set_value(const std::string & value_path, std::string value)
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

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "neighbors-address";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "neighbors-address";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "neighbors-address";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "neighbors-address";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborsAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborAf::NeighborAf()
    :
    entry{YType::boolean, "entry"}
{
    yang_name = "neighbor-af"; yang_parent_name = "postit";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborAf::~NeighborAf()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborAf::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborAf::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-af";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborAf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NeighborAf' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborAf::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::NeighborAf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitInfo()
    :
    peer_id{YType::uint32, "peer-id"},
    postit_af_name{YType::enumeration, "postit-af-name"},
    postit_direction{YType::uint8, "postit-direction"},
    postit_flags{YType::uint8, "postit-flags"},
    postit_id{YType::uint32, "postit-id"},
    postit_policy{YType::str, "postit-policy"},
    postit_reset{YType::enumeration, "postit-reset"},
    postit_subtype{YType::uint32, "postit-subtype"},
    postit_ts{YType::uint64, "postit-ts"},
    postit_type{YType::uint32, "postit-type"}
    	,
    postit_notification(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification>())
{
    postit_notification->parent = this;
    children["postit-notification"] = postit_notification;

    yang_name = "postit-info"; yang_parent_name = "postit";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::~PostitInfo()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::has_data() const
{
    return peer_id.is_set
	|| postit_af_name.is_set
	|| postit_direction.is_set
	|| postit_flags.is_set
	|| postit_id.is_set
	|| postit_policy.is_set
	|| postit_reset.is_set
	|| postit_subtype.is_set
	|| postit_ts.is_set
	|| postit_type.is_set
	|| (postit_notification !=  nullptr && postit_notification->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_id.operation)
	|| is_set(postit_af_name.operation)
	|| is_set(postit_direction.operation)
	|| is_set(postit_flags.operation)
	|| is_set(postit_id.operation)
	|| is_set(postit_policy.operation)
	|| is_set(postit_reset.operation)
	|| is_set(postit_subtype.operation)
	|| is_set(postit_ts.operation)
	|| is_set(postit_type.operation)
	|| (postit_notification !=  nullptr && postit_notification->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "postit-info";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PostitInfo' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_id.is_set || is_set(peer_id.operation)) leaf_name_data.push_back(peer_id.get_name_leafdata());
    if (postit_af_name.is_set || is_set(postit_af_name.operation)) leaf_name_data.push_back(postit_af_name.get_name_leafdata());
    if (postit_direction.is_set || is_set(postit_direction.operation)) leaf_name_data.push_back(postit_direction.get_name_leafdata());
    if (postit_flags.is_set || is_set(postit_flags.operation)) leaf_name_data.push_back(postit_flags.get_name_leafdata());
    if (postit_id.is_set || is_set(postit_id.operation)) leaf_name_data.push_back(postit_id.get_name_leafdata());
    if (postit_policy.is_set || is_set(postit_policy.operation)) leaf_name_data.push_back(postit_policy.get_name_leafdata());
    if (postit_reset.is_set || is_set(postit_reset.operation)) leaf_name_data.push_back(postit_reset.get_name_leafdata());
    if (postit_subtype.is_set || is_set(postit_subtype.operation)) leaf_name_data.push_back(postit_subtype.get_name_leafdata());
    if (postit_ts.is_set || is_set(postit_ts.operation)) leaf_name_data.push_back(postit_ts.get_name_leafdata());
    if (postit_type.is_set || is_set(postit_type.operation)) leaf_name_data.push_back(postit_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "postit-notification")
    {
        if(postit_notification != nullptr)
        {
            children["postit-notification"] = postit_notification;
        }
        else
        {
            postit_notification = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification>();
            postit_notification->parent = this;
            children["postit-notification"] = postit_notification;
        }
        return children.at("postit-notification");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::get_children()
{
    if(children.find("postit-notification") == children.end())
    {
        if(postit_notification != nullptr)
        {
            children["postit-notification"] = postit_notification;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-id")
    {
        peer_id = value;
    }
    if(value_path == "postit-af-name")
    {
        postit_af_name = value;
    }
    if(value_path == "postit-direction")
    {
        postit_direction = value;
    }
    if(value_path == "postit-flags")
    {
        postit_flags = value;
    }
    if(value_path == "postit-id")
    {
        postit_id = value;
    }
    if(value_path == "postit-policy")
    {
        postit_policy = value;
    }
    if(value_path == "postit-reset")
    {
        postit_reset = value;
    }
    if(value_path == "postit-subtype")
    {
        postit_subtype = value;
    }
    if(value_path == "postit-ts")
    {
        postit_ts = value;
    }
    if(value_path == "postit-type")
    {
        postit_type = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::PostitNotification()
    :
    notification_error_code{YType::uint8, "notification-error-code"},
    notification_error_subcode{YType::uint8, "notification-error-subcode"},
    time_since_last_notification{YType::uint32, "time-since-last-notification"}
{
    yang_name = "postit-notification"; yang_parent_name = "postit-info";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::~PostitNotification()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "postit-notification";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PostitNotification' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData>();
        c->parent = this;
        last_notification_data.push_back(std::move(c));
        children[segment_path] = last_notification_data.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::get_children()
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::set_value(const std::string & value_path, std::string value)
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

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData::LastNotificationData()
    :
    entry{YType::uint8, "entry"}
{
    yang_name = "last-notification-data"; yang_parent_name = "postit-notification";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData::~LastNotificationData()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData::has_data() const
{
    return entry.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData::has_operation() const
{
    return is_set(operation)
	|| is_set(entry.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-notification-data";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::Postits::Postit::PostitInfo::PostitNotification::LastNotificationData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "entry")
    {
        entry = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::GlobalProcessInfo()
    :
    vrf_name{YType::str, "vrf-name"},
    vrfid{YType::uint32, "vrfid"}
    	,
    global(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global>())
	,vrf(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Vrf>())
{
    global->parent = this;
    children["global"] = global;

    vrf->parent = this;
    children["vrf"] = vrf;

    yang_name = "global-process-info"; yang_parent_name = "default-vrf";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::~GlobalProcessInfo()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::has_data() const
{
    return vrf_name.is_set
	|| vrfid.is_set
	|| (global !=  nullptr && global->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| is_set(vrfid.operation)
	|| (global !=  nullptr && global->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-process-info";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GlobalProcessInfo' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (vrfid.is_set || is_set(vrfid.operation)) leaf_name_data.push_back(vrfid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            global = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global>();
            global->parent = this;
            children["global"] = global;
        }
        return children.at("global");
    }

    if(child_yang_name == "vrf")
    {
        if(vrf != nullptr)
        {
            children["vrf"] = vrf;
        }
        else
        {
            vrf = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Vrf>();
            vrf->parent = this;
            children["vrf"] = vrf;
        }
        return children.at("vrf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::get_children()
{
    if(children.find("global") == children.end())
    {
        if(global != nullptr)
        {
            children["global"] = global;
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "vrfid")
    {
        vrfid = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::Global()
    :
    asn_format{YType::uint32, "asn-format"},
    bmp_current_buffer_size{YType::uint64, "bmp-current-buffer-size"},
    bmp_default_buffer_size{YType::uint64, "bmp-default-buffer-size"},
    bmp_maximum_buffer_size{YType::uint64, "bmp-maximum-buffer-size"},
    cluster_id{YType::uint32, "cluster-id"},
    confederation_id{YType::uint32, "confederation-id"},
    configured_cluster_id{YType::uint32, "configured-cluster-id"},
    generic_scan_period{YType::uint16, "generic-scan-period"},
    graceful_maint_all_nbrs{YType::boolean, "graceful-maint-all-nbrs"},
    graceful_maint_retain_routes{YType::boolean, "graceful-maint-retain-routes"},
    graceful_maintenance{YType::boolean, "graceful-maintenance"},
    in_standalone_mode{YType::boolean, "in-standalone-mode"},
    instance_name{YType::str, "instance-name"},
    is_cluster_id_specified_as_ip{YType::boolean, "is-cluster-id-specified-as-ip"},
    local_as{YType::uint32, "local-as"},
    process_rlimit{YType::uint64, "process-rlimit"},
    restart_count{YType::uint32, "restart-count"},
    srgb_end{YType::uint32, "srgb-end"},
    srgb_end_configured{YType::uint32, "srgb-end-configured"},
    srgb_start{YType::uint32, "srgb-start"},
    srgb_start_configured{YType::uint32, "srgb-start-configured"},
    update_delay{YType::uint32, "update-delay"}
{
    yang_name = "global"; yang_parent_name = "global-process-info";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::~Global()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::has_data() const
{
    for (std::size_t index=0; index<cluster_id_entry.size(); index++)
    {
        if(cluster_id_entry[index]->has_data())
            return true;
    }
    return asn_format.is_set
	|| bmp_current_buffer_size.is_set
	|| bmp_default_buffer_size.is_set
	|| bmp_maximum_buffer_size.is_set
	|| cluster_id.is_set
	|| confederation_id.is_set
	|| configured_cluster_id.is_set
	|| generic_scan_period.is_set
	|| graceful_maint_all_nbrs.is_set
	|| graceful_maint_retain_routes.is_set
	|| graceful_maintenance.is_set
	|| in_standalone_mode.is_set
	|| instance_name.is_set
	|| is_cluster_id_specified_as_ip.is_set
	|| local_as.is_set
	|| process_rlimit.is_set
	|| restart_count.is_set
	|| srgb_end.is_set
	|| srgb_end_configured.is_set
	|| srgb_start.is_set
	|| srgb_start_configured.is_set
	|| update_delay.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::has_operation() const
{
    for (std::size_t index=0; index<cluster_id_entry.size(); index++)
    {
        if(cluster_id_entry[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(asn_format.operation)
	|| is_set(bmp_current_buffer_size.operation)
	|| is_set(bmp_default_buffer_size.operation)
	|| is_set(bmp_maximum_buffer_size.operation)
	|| is_set(cluster_id.operation)
	|| is_set(confederation_id.operation)
	|| is_set(configured_cluster_id.operation)
	|| is_set(generic_scan_period.operation)
	|| is_set(graceful_maint_all_nbrs.operation)
	|| is_set(graceful_maint_retain_routes.operation)
	|| is_set(graceful_maintenance.operation)
	|| is_set(in_standalone_mode.operation)
	|| is_set(instance_name.operation)
	|| is_set(is_cluster_id_specified_as_ip.operation)
	|| is_set(local_as.operation)
	|| is_set(process_rlimit.operation)
	|| is_set(restart_count.operation)
	|| is_set(srgb_end.operation)
	|| is_set(srgb_end_configured.operation)
	|| is_set(srgb_start.operation)
	|| is_set(srgb_start_configured.operation)
	|| is_set(update_delay.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Global' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn_format.is_set || is_set(asn_format.operation)) leaf_name_data.push_back(asn_format.get_name_leafdata());
    if (bmp_current_buffer_size.is_set || is_set(bmp_current_buffer_size.operation)) leaf_name_data.push_back(bmp_current_buffer_size.get_name_leafdata());
    if (bmp_default_buffer_size.is_set || is_set(bmp_default_buffer_size.operation)) leaf_name_data.push_back(bmp_default_buffer_size.get_name_leafdata());
    if (bmp_maximum_buffer_size.is_set || is_set(bmp_maximum_buffer_size.operation)) leaf_name_data.push_back(bmp_maximum_buffer_size.get_name_leafdata());
    if (cluster_id.is_set || is_set(cluster_id.operation)) leaf_name_data.push_back(cluster_id.get_name_leafdata());
    if (confederation_id.is_set || is_set(confederation_id.operation)) leaf_name_data.push_back(confederation_id.get_name_leafdata());
    if (configured_cluster_id.is_set || is_set(configured_cluster_id.operation)) leaf_name_data.push_back(configured_cluster_id.get_name_leafdata());
    if (generic_scan_period.is_set || is_set(generic_scan_period.operation)) leaf_name_data.push_back(generic_scan_period.get_name_leafdata());
    if (graceful_maint_all_nbrs.is_set || is_set(graceful_maint_all_nbrs.operation)) leaf_name_data.push_back(graceful_maint_all_nbrs.get_name_leafdata());
    if (graceful_maint_retain_routes.is_set || is_set(graceful_maint_retain_routes.operation)) leaf_name_data.push_back(graceful_maint_retain_routes.get_name_leafdata());
    if (graceful_maintenance.is_set || is_set(graceful_maintenance.operation)) leaf_name_data.push_back(graceful_maintenance.get_name_leafdata());
    if (in_standalone_mode.is_set || is_set(in_standalone_mode.operation)) leaf_name_data.push_back(in_standalone_mode.get_name_leafdata());
    if (instance_name.is_set || is_set(instance_name.operation)) leaf_name_data.push_back(instance_name.get_name_leafdata());
    if (is_cluster_id_specified_as_ip.is_set || is_set(is_cluster_id_specified_as_ip.operation)) leaf_name_data.push_back(is_cluster_id_specified_as_ip.get_name_leafdata());
    if (local_as.is_set || is_set(local_as.operation)) leaf_name_data.push_back(local_as.get_name_leafdata());
    if (process_rlimit.is_set || is_set(process_rlimit.operation)) leaf_name_data.push_back(process_rlimit.get_name_leafdata());
    if (restart_count.is_set || is_set(restart_count.operation)) leaf_name_data.push_back(restart_count.get_name_leafdata());
    if (srgb_end.is_set || is_set(srgb_end.operation)) leaf_name_data.push_back(srgb_end.get_name_leafdata());
    if (srgb_end_configured.is_set || is_set(srgb_end_configured.operation)) leaf_name_data.push_back(srgb_end_configured.get_name_leafdata());
    if (srgb_start.is_set || is_set(srgb_start.operation)) leaf_name_data.push_back(srgb_start.get_name_leafdata());
    if (srgb_start_configured.is_set || is_set(srgb_start_configured.operation)) leaf_name_data.push_back(srgb_start_configured.get_name_leafdata());
    if (update_delay.is_set || is_set(update_delay.operation)) leaf_name_data.push_back(update_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "cluster-id-entry")
    {
        for(auto const & c : cluster_id_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::ClusterIdEntry>();
        c->parent = this;
        cluster_id_entry.push_back(std::move(c));
        children[segment_path] = cluster_id_entry.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::get_children()
{
    for (auto const & c : cluster_id_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "asn-format")
    {
        asn_format = value;
    }
    if(value_path == "bmp-current-buffer-size")
    {
        bmp_current_buffer_size = value;
    }
    if(value_path == "bmp-default-buffer-size")
    {
        bmp_default_buffer_size = value;
    }
    if(value_path == "bmp-maximum-buffer-size")
    {
        bmp_maximum_buffer_size = value;
    }
    if(value_path == "cluster-id")
    {
        cluster_id = value;
    }
    if(value_path == "confederation-id")
    {
        confederation_id = value;
    }
    if(value_path == "configured-cluster-id")
    {
        configured_cluster_id = value;
    }
    if(value_path == "generic-scan-period")
    {
        generic_scan_period = value;
    }
    if(value_path == "graceful-maint-all-nbrs")
    {
        graceful_maint_all_nbrs = value;
    }
    if(value_path == "graceful-maint-retain-routes")
    {
        graceful_maint_retain_routes = value;
    }
    if(value_path == "graceful-maintenance")
    {
        graceful_maintenance = value;
    }
    if(value_path == "in-standalone-mode")
    {
        in_standalone_mode = value;
    }
    if(value_path == "instance-name")
    {
        instance_name = value;
    }
    if(value_path == "is-cluster-id-specified-as-ip")
    {
        is_cluster_id_specified_as_ip = value;
    }
    if(value_path == "local-as")
    {
        local_as = value;
    }
    if(value_path == "process-rlimit")
    {
        process_rlimit = value;
    }
    if(value_path == "restart-count")
    {
        restart_count = value;
    }
    if(value_path == "srgb-end")
    {
        srgb_end = value;
    }
    if(value_path == "srgb-end-configured")
    {
        srgb_end_configured = value;
    }
    if(value_path == "srgb-start")
    {
        srgb_start = value;
    }
    if(value_path == "srgb-start-configured")
    {
        srgb_start_configured = value;
    }
    if(value_path == "update-delay")
    {
        update_delay = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::ClusterIdEntry::ClusterIdEntry()
    :
    cluster_id_type{YType::uint8, "cluster-id-type"},
    cluster_id_val{YType::uint32, "cluster-id-val"}
{
    yang_name = "cluster-id-entry"; yang_parent_name = "global";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::ClusterIdEntry::~ClusterIdEntry()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::ClusterIdEntry::has_data() const
{
    return cluster_id_type.is_set
	|| cluster_id_val.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::ClusterIdEntry::has_operation() const
{
    return is_set(operation)
	|| is_set(cluster_id_type.operation)
	|| is_set(cluster_id_val.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::ClusterIdEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cluster-id-entry";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::ClusterIdEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClusterIdEntry' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cluster_id_type.is_set || is_set(cluster_id_type.operation)) leaf_name_data.push_back(cluster_id_type.get_name_leafdata());
    if (cluster_id_val.is_set || is_set(cluster_id_val.operation)) leaf_name_data.push_back(cluster_id_val.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::ClusterIdEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::ClusterIdEntry::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Global::ClusterIdEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cluster-id-type")
    {
        cluster_id_type = value;
    }
    if(value_path == "cluster-id-val")
    {
        cluster_id_val = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Vrf::Vrf()
    :
    configured_router_id{YType::str, "configured-router-id"},
    default_local_preference{YType::uint32, "default-local-preference"},
    default_metric{YType::uint32, "default-metric"},
    hold_time{YType::uint16, "hold-time"},
    is_bestpath_aigp_ignore_enabled{YType::boolean, "is-bestpath-aigp-ignore-enabled"},
    is_bestpath_always_compare_med_enabled{YType::boolean, "is-bestpath-always-compare-med-enabled"},
    is_bestpath_as_path_mpath_relax_enabled{YType::boolean, "is-bestpath-as-path-mpath-relax-enabled"},
    is_bestpath_compare_med_from_confed_peer_enabled{YType::boolean, "is-bestpath-compare-med-from-confed-peer-enabled"},
    is_bestpath_compare_router_id_for_ebgp_peers_enabled{YType::boolean, "is-bestpath-compare-router-id-for-ebgp-peers-enabled"},
    is_bestpath_ignore_as_path_enabled{YType::boolean, "is-bestpath-ignore-as-path-enabled"},
    is_bestpath_missing_med_is_worst_enabled{YType::boolean, "is-bestpath-missing-med-is-worst-enabled"},
    is_default_metric_configured{YType::boolean, "is-default-metric-configured"},
    is_default_originate_configured{YType::boolean, "is-default-originate-configured"},
    is_enforce_first_as_enabled{YType::boolean, "is-enforce-first-as-enabled"},
    is_fast_external_fallover_enabled{YType::boolean, "is-fast-external-fallover-enabled"},
    is_graceful_restart{YType::boolean, "is-graceful-restart"},
    is_multipath_as_path_ignore_onwards_enabled{YType::boolean, "is-multipath-as-path-ignore-onwards-enabled"},
    is_neighbor_logging{YType::boolean, "is-neighbor-logging"},
    is_nsr{YType::boolean, "is-nsr"},
    is_redistribute_ibgp_to_ig_ps_enabled{YType::boolean, "is-redistribute-ibgp-to-ig-ps-enabled"},
    keep_alive_time{YType::uint16, "keep-alive-time"},
    min_acceptable_hold_time{YType::uint16, "min-acceptable-hold-time"},
    restart_time{YType::uint32, "restart-time"},
    rib_purge_timeout{YType::uint32, "rib-purge-timeout"},
    route_distinguisher{YType::str, "route-distinguisher"},
    router_id{YType::str, "router-id"},
    stale_path_time{YType::uint32, "stale-path-time"},
    vrf_is_active{YType::boolean, "vrf-is-active"}
{
    yang_name = "vrf"; yang_parent_name = "global-process-info";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Vrf::~Vrf()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Vrf::has_data() const
{
    return configured_router_id.is_set
	|| default_local_preference.is_set
	|| default_metric.is_set
	|| hold_time.is_set
	|| is_bestpath_aigp_ignore_enabled.is_set
	|| is_bestpath_always_compare_med_enabled.is_set
	|| is_bestpath_as_path_mpath_relax_enabled.is_set
	|| is_bestpath_compare_med_from_confed_peer_enabled.is_set
	|| is_bestpath_compare_router_id_for_ebgp_peers_enabled.is_set
	|| is_bestpath_ignore_as_path_enabled.is_set
	|| is_bestpath_missing_med_is_worst_enabled.is_set
	|| is_default_metric_configured.is_set
	|| is_default_originate_configured.is_set
	|| is_enforce_first_as_enabled.is_set
	|| is_fast_external_fallover_enabled.is_set
	|| is_graceful_restart.is_set
	|| is_multipath_as_path_ignore_onwards_enabled.is_set
	|| is_neighbor_logging.is_set
	|| is_nsr.is_set
	|| is_redistribute_ibgp_to_ig_ps_enabled.is_set
	|| keep_alive_time.is_set
	|| min_acceptable_hold_time.is_set
	|| restart_time.is_set
	|| rib_purge_timeout.is_set
	|| route_distinguisher.is_set
	|| router_id.is_set
	|| stale_path_time.is_set
	|| vrf_is_active.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(configured_router_id.operation)
	|| is_set(default_local_preference.operation)
	|| is_set(default_metric.operation)
	|| is_set(hold_time.operation)
	|| is_set(is_bestpath_aigp_ignore_enabled.operation)
	|| is_set(is_bestpath_always_compare_med_enabled.operation)
	|| is_set(is_bestpath_as_path_mpath_relax_enabled.operation)
	|| is_set(is_bestpath_compare_med_from_confed_peer_enabled.operation)
	|| is_set(is_bestpath_compare_router_id_for_ebgp_peers_enabled.operation)
	|| is_set(is_bestpath_ignore_as_path_enabled.operation)
	|| is_set(is_bestpath_missing_med_is_worst_enabled.operation)
	|| is_set(is_default_metric_configured.operation)
	|| is_set(is_default_originate_configured.operation)
	|| is_set(is_enforce_first_as_enabled.operation)
	|| is_set(is_fast_external_fallover_enabled.operation)
	|| is_set(is_graceful_restart.operation)
	|| is_set(is_multipath_as_path_ignore_onwards_enabled.operation)
	|| is_set(is_neighbor_logging.operation)
	|| is_set(is_nsr.operation)
	|| is_set(is_redistribute_ibgp_to_ig_ps_enabled.operation)
	|| is_set(keep_alive_time.operation)
	|| is_set(min_acceptable_hold_time.operation)
	|| is_set(restart_time.operation)
	|| is_set(rib_purge_timeout.operation)
	|| is_set(route_distinguisher.operation)
	|| is_set(router_id.operation)
	|| is_set(stale_path_time.operation)
	|| is_set(vrf_is_active.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_router_id.is_set || is_set(configured_router_id.operation)) leaf_name_data.push_back(configured_router_id.get_name_leafdata());
    if (default_local_preference.is_set || is_set(default_local_preference.operation)) leaf_name_data.push_back(default_local_preference.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.operation)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.operation)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (is_bestpath_aigp_ignore_enabled.is_set || is_set(is_bestpath_aigp_ignore_enabled.operation)) leaf_name_data.push_back(is_bestpath_aigp_ignore_enabled.get_name_leafdata());
    if (is_bestpath_always_compare_med_enabled.is_set || is_set(is_bestpath_always_compare_med_enabled.operation)) leaf_name_data.push_back(is_bestpath_always_compare_med_enabled.get_name_leafdata());
    if (is_bestpath_as_path_mpath_relax_enabled.is_set || is_set(is_bestpath_as_path_mpath_relax_enabled.operation)) leaf_name_data.push_back(is_bestpath_as_path_mpath_relax_enabled.get_name_leafdata());
    if (is_bestpath_compare_med_from_confed_peer_enabled.is_set || is_set(is_bestpath_compare_med_from_confed_peer_enabled.operation)) leaf_name_data.push_back(is_bestpath_compare_med_from_confed_peer_enabled.get_name_leafdata());
    if (is_bestpath_compare_router_id_for_ebgp_peers_enabled.is_set || is_set(is_bestpath_compare_router_id_for_ebgp_peers_enabled.operation)) leaf_name_data.push_back(is_bestpath_compare_router_id_for_ebgp_peers_enabled.get_name_leafdata());
    if (is_bestpath_ignore_as_path_enabled.is_set || is_set(is_bestpath_ignore_as_path_enabled.operation)) leaf_name_data.push_back(is_bestpath_ignore_as_path_enabled.get_name_leafdata());
    if (is_bestpath_missing_med_is_worst_enabled.is_set || is_set(is_bestpath_missing_med_is_worst_enabled.operation)) leaf_name_data.push_back(is_bestpath_missing_med_is_worst_enabled.get_name_leafdata());
    if (is_default_metric_configured.is_set || is_set(is_default_metric_configured.operation)) leaf_name_data.push_back(is_default_metric_configured.get_name_leafdata());
    if (is_default_originate_configured.is_set || is_set(is_default_originate_configured.operation)) leaf_name_data.push_back(is_default_originate_configured.get_name_leafdata());
    if (is_enforce_first_as_enabled.is_set || is_set(is_enforce_first_as_enabled.operation)) leaf_name_data.push_back(is_enforce_first_as_enabled.get_name_leafdata());
    if (is_fast_external_fallover_enabled.is_set || is_set(is_fast_external_fallover_enabled.operation)) leaf_name_data.push_back(is_fast_external_fallover_enabled.get_name_leafdata());
    if (is_graceful_restart.is_set || is_set(is_graceful_restart.operation)) leaf_name_data.push_back(is_graceful_restart.get_name_leafdata());
    if (is_multipath_as_path_ignore_onwards_enabled.is_set || is_set(is_multipath_as_path_ignore_onwards_enabled.operation)) leaf_name_data.push_back(is_multipath_as_path_ignore_onwards_enabled.get_name_leafdata());
    if (is_neighbor_logging.is_set || is_set(is_neighbor_logging.operation)) leaf_name_data.push_back(is_neighbor_logging.get_name_leafdata());
    if (is_nsr.is_set || is_set(is_nsr.operation)) leaf_name_data.push_back(is_nsr.get_name_leafdata());
    if (is_redistribute_ibgp_to_ig_ps_enabled.is_set || is_set(is_redistribute_ibgp_to_ig_ps_enabled.operation)) leaf_name_data.push_back(is_redistribute_ibgp_to_ig_ps_enabled.get_name_leafdata());
    if (keep_alive_time.is_set || is_set(keep_alive_time.operation)) leaf_name_data.push_back(keep_alive_time.get_name_leafdata());
    if (min_acceptable_hold_time.is_set || is_set(min_acceptable_hold_time.operation)) leaf_name_data.push_back(min_acceptable_hold_time.get_name_leafdata());
    if (restart_time.is_set || is_set(restart_time.operation)) leaf_name_data.push_back(restart_time.get_name_leafdata());
    if (rib_purge_timeout.is_set || is_set(rib_purge_timeout.operation)) leaf_name_data.push_back(rib_purge_timeout.get_name_leafdata());
    if (route_distinguisher.is_set || is_set(route_distinguisher.operation)) leaf_name_data.push_back(route_distinguisher.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (stale_path_time.is_set || is_set(stale_path_time.operation)) leaf_name_data.push_back(stale_path_time.get_name_leafdata());
    if (vrf_is_active.is_set || is_set(vrf_is_active.operation)) leaf_name_data.push_back(vrf_is_active.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Vrf::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::GlobalProcessInfo::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "configured-router-id")
    {
        configured_router_id = value;
    }
    if(value_path == "default-local-preference")
    {
        default_local_preference = value;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
    }
    if(value_path == "is-bestpath-aigp-ignore-enabled")
    {
        is_bestpath_aigp_ignore_enabled = value;
    }
    if(value_path == "is-bestpath-always-compare-med-enabled")
    {
        is_bestpath_always_compare_med_enabled = value;
    }
    if(value_path == "is-bestpath-as-path-mpath-relax-enabled")
    {
        is_bestpath_as_path_mpath_relax_enabled = value;
    }
    if(value_path == "is-bestpath-compare-med-from-confed-peer-enabled")
    {
        is_bestpath_compare_med_from_confed_peer_enabled = value;
    }
    if(value_path == "is-bestpath-compare-router-id-for-ebgp-peers-enabled")
    {
        is_bestpath_compare_router_id_for_ebgp_peers_enabled = value;
    }
    if(value_path == "is-bestpath-ignore-as-path-enabled")
    {
        is_bestpath_ignore_as_path_enabled = value;
    }
    if(value_path == "is-bestpath-missing-med-is-worst-enabled")
    {
        is_bestpath_missing_med_is_worst_enabled = value;
    }
    if(value_path == "is-default-metric-configured")
    {
        is_default_metric_configured = value;
    }
    if(value_path == "is-default-originate-configured")
    {
        is_default_originate_configured = value;
    }
    if(value_path == "is-enforce-first-as-enabled")
    {
        is_enforce_first_as_enabled = value;
    }
    if(value_path == "is-fast-external-fallover-enabled")
    {
        is_fast_external_fallover_enabled = value;
    }
    if(value_path == "is-graceful-restart")
    {
        is_graceful_restart = value;
    }
    if(value_path == "is-multipath-as-path-ignore-onwards-enabled")
    {
        is_multipath_as_path_ignore_onwards_enabled = value;
    }
    if(value_path == "is-neighbor-logging")
    {
        is_neighbor_logging = value;
    }
    if(value_path == "is-nsr")
    {
        is_nsr = value;
    }
    if(value_path == "is-redistribute-ibgp-to-ig-ps-enabled")
    {
        is_redistribute_ibgp_to_ig_ps_enabled = value;
    }
    if(value_path == "keep-alive-time")
    {
        keep_alive_time = value;
    }
    if(value_path == "min-acceptable-hold-time")
    {
        min_acceptable_hold_time = value;
    }
    if(value_path == "restart-time")
    {
        restart_time = value;
    }
    if(value_path == "rib-purge-timeout")
    {
        rib_purge_timeout = value;
    }
    if(value_path == "route-distinguisher")
    {
        route_distinguisher = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
    if(value_path == "stale-path-time")
    {
        stale_path_time = value;
    }
    if(value_path == "vrf-is-active")
    {
        vrf_is_active = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbors()
{
    yang_name = "update-inbound-error-neighbors"; yang_parent_name = "default-vrf";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::~UpdateInboundErrorNeighbors()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::has_data() const
{
    for (std::size_t index=0; index<update_inbound_error_neighbor.size(); index++)
    {
        if(update_inbound_error_neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::has_operation() const
{
    for (std::size_t index=0; index<update_inbound_error_neighbor.size(); index++)
    {
        if(update_inbound_error_neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-inbound-error-neighbors";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpdateInboundErrorNeighbors' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "update-inbound-error-neighbor")
    {
        for(auto const & c : update_inbound_error_neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor>();
        c->parent = this;
        update_inbound_error_neighbor.push_back(std::move(c));
        children[segment_path] = update_inbound_error_neighbor.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::get_children()
{
    for (auto const & c : update_inbound_error_neighbor)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::set_value(const std::string & value_path, std::string value)
{
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateInboundErrorNeighbor()
    :
    neighbor_address{YType::str, "neighbor-address"},
    establishment_total_update_message_count{YType::uint32, "establishment-total-update-message-count"},
    last_error_handling_reset_age{YType::uint32, "last-error-handling-reset-age"},
    last_update_malformed_age{YType::uint32, "last-update-malformed-age"},
    last_update_memory_allocation_fail_age{YType::uint32, "last-update-memory-allocation-fail-age"},
    total_update_message_count{YType::uint32, "total-update-message-count"},
    update_attribute_discard_count{YType::uint32, "update-attribute-discard-count"},
    update_error_handling_avoid_reset{YType::boolean, "update-error-handling-avoid-reset"},
    update_error_handling_reset_count{YType::uint32, "update-error-handling-reset-count"},
    update_error_message_list_count{YType::uint32, "update-error-message-list-count"},
    update_malformed_message_count{YType::uint32, "update-malformed-message-count"},
    update_memory_allocation_fail_count{YType::uint32, "update-memory-allocation-fail-count"},
    update_vrf_name{YType::str, "update-vrf-name"}
    	,
    first_update_error_handling_reset_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp>())
	,first_update_malformed_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp>())
	,first_update_memory_allocation_fail_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp>())
	,last_error_handling_reset_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp>())
	,last_update_malformed_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp>())
	,last_update_memory_allocation_fail_timestamp(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp>())
	,update_neighbor_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress>())
{
    first_update_error_handling_reset_timestamp->parent = this;
    children["first-update-error-handling-reset-timestamp"] = first_update_error_handling_reset_timestamp;

    first_update_malformed_timestamp->parent = this;
    children["first-update-malformed-timestamp"] = first_update_malformed_timestamp;

    first_update_memory_allocation_fail_timestamp->parent = this;
    children["first-update-memory-allocation-fail-timestamp"] = first_update_memory_allocation_fail_timestamp;

    last_error_handling_reset_timestamp->parent = this;
    children["last-error-handling-reset-timestamp"] = last_error_handling_reset_timestamp;

    last_update_malformed_timestamp->parent = this;
    children["last-update-malformed-timestamp"] = last_update_malformed_timestamp;

    last_update_memory_allocation_fail_timestamp->parent = this;
    children["last-update-memory-allocation-fail-timestamp"] = last_update_memory_allocation_fail_timestamp;

    update_neighbor_address->parent = this;
    children["update-neighbor-address"] = update_neighbor_address;

    yang_name = "update-inbound-error-neighbor"; yang_parent_name = "update-inbound-error-neighbors";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::~UpdateInboundErrorNeighbor()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::has_data() const
{
    for (std::size_t index=0; index<establishment_action_count.size(); index++)
    {
        if(establishment_action_count[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<update_error_message.size(); index++)
    {
        if(update_error_message[index]->has_data())
            return true;
    }
    return neighbor_address.is_set
	|| establishment_total_update_message_count.is_set
	|| last_error_handling_reset_age.is_set
	|| last_update_malformed_age.is_set
	|| last_update_memory_allocation_fail_age.is_set
	|| total_update_message_count.is_set
	|| update_attribute_discard_count.is_set
	|| update_error_handling_avoid_reset.is_set
	|| update_error_handling_reset_count.is_set
	|| update_error_message_list_count.is_set
	|| update_malformed_message_count.is_set
	|| update_memory_allocation_fail_count.is_set
	|| update_vrf_name.is_set
	|| (first_update_error_handling_reset_timestamp !=  nullptr && first_update_error_handling_reset_timestamp->has_data())
	|| (first_update_malformed_timestamp !=  nullptr && first_update_malformed_timestamp->has_data())
	|| (first_update_memory_allocation_fail_timestamp !=  nullptr && first_update_memory_allocation_fail_timestamp->has_data())
	|| (last_error_handling_reset_timestamp !=  nullptr && last_error_handling_reset_timestamp->has_data())
	|| (last_update_malformed_timestamp !=  nullptr && last_update_malformed_timestamp->has_data())
	|| (last_update_memory_allocation_fail_timestamp !=  nullptr && last_update_memory_allocation_fail_timestamp->has_data())
	|| (update_neighbor_address !=  nullptr && update_neighbor_address->has_data());
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::has_operation() const
{
    for (std::size_t index=0; index<establishment_action_count.size(); index++)
    {
        if(establishment_action_count[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<update_error_message.size(); index++)
    {
        if(update_error_message[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(neighbor_address.operation)
	|| is_set(establishment_total_update_message_count.operation)
	|| is_set(last_error_handling_reset_age.operation)
	|| is_set(last_update_malformed_age.operation)
	|| is_set(last_update_memory_allocation_fail_age.operation)
	|| is_set(total_update_message_count.operation)
	|| is_set(update_attribute_discard_count.operation)
	|| is_set(update_error_handling_avoid_reset.operation)
	|| is_set(update_error_handling_reset_count.operation)
	|| is_set(update_error_message_list_count.operation)
	|| is_set(update_malformed_message_count.operation)
	|| is_set(update_memory_allocation_fail_count.operation)
	|| is_set(update_vrf_name.operation)
	|| (first_update_error_handling_reset_timestamp !=  nullptr && first_update_error_handling_reset_timestamp->has_operation())
	|| (first_update_malformed_timestamp !=  nullptr && first_update_malformed_timestamp->has_operation())
	|| (first_update_memory_allocation_fail_timestamp !=  nullptr && first_update_memory_allocation_fail_timestamp->has_operation())
	|| (last_error_handling_reset_timestamp !=  nullptr && last_error_handling_reset_timestamp->has_operation())
	|| (last_update_malformed_timestamp !=  nullptr && last_update_malformed_timestamp->has_operation())
	|| (last_update_memory_allocation_fail_timestamp !=  nullptr && last_update_memory_allocation_fail_timestamp->has_operation())
	|| (update_neighbor_address !=  nullptr && update_neighbor_address->has_operation());
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-inbound-error-neighbor" <<"[neighbor-address='" <<neighbor_address <<"']";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpdateInboundErrorNeighbor' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (establishment_total_update_message_count.is_set || is_set(establishment_total_update_message_count.operation)) leaf_name_data.push_back(establishment_total_update_message_count.get_name_leafdata());
    if (last_error_handling_reset_age.is_set || is_set(last_error_handling_reset_age.operation)) leaf_name_data.push_back(last_error_handling_reset_age.get_name_leafdata());
    if (last_update_malformed_age.is_set || is_set(last_update_malformed_age.operation)) leaf_name_data.push_back(last_update_malformed_age.get_name_leafdata());
    if (last_update_memory_allocation_fail_age.is_set || is_set(last_update_memory_allocation_fail_age.operation)) leaf_name_data.push_back(last_update_memory_allocation_fail_age.get_name_leafdata());
    if (total_update_message_count.is_set || is_set(total_update_message_count.operation)) leaf_name_data.push_back(total_update_message_count.get_name_leafdata());
    if (update_attribute_discard_count.is_set || is_set(update_attribute_discard_count.operation)) leaf_name_data.push_back(update_attribute_discard_count.get_name_leafdata());
    if (update_error_handling_avoid_reset.is_set || is_set(update_error_handling_avoid_reset.operation)) leaf_name_data.push_back(update_error_handling_avoid_reset.get_name_leafdata());
    if (update_error_handling_reset_count.is_set || is_set(update_error_handling_reset_count.operation)) leaf_name_data.push_back(update_error_handling_reset_count.get_name_leafdata());
    if (update_error_message_list_count.is_set || is_set(update_error_message_list_count.operation)) leaf_name_data.push_back(update_error_message_list_count.get_name_leafdata());
    if (update_malformed_message_count.is_set || is_set(update_malformed_message_count.operation)) leaf_name_data.push_back(update_malformed_message_count.get_name_leafdata());
    if (update_memory_allocation_fail_count.is_set || is_set(update_memory_allocation_fail_count.operation)) leaf_name_data.push_back(update_memory_allocation_fail_count.get_name_leafdata());
    if (update_vrf_name.is_set || is_set(update_vrf_name.operation)) leaf_name_data.push_back(update_vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "establishment-action-count")
    {
        for(auto const & c : establishment_action_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::EstablishmentActionCount>();
        c->parent = this;
        establishment_action_count.push_back(std::move(c));
        children[segment_path] = establishment_action_count.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "first-update-error-handling-reset-timestamp")
    {
        if(first_update_error_handling_reset_timestamp != nullptr)
        {
            children["first-update-error-handling-reset-timestamp"] = first_update_error_handling_reset_timestamp;
        }
        else
        {
            first_update_error_handling_reset_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateErrorHandlingResetTimestamp>();
            first_update_error_handling_reset_timestamp->parent = this;
            children["first-update-error-handling-reset-timestamp"] = first_update_error_handling_reset_timestamp;
        }
        return children.at("first-update-error-handling-reset-timestamp");
    }

    if(child_yang_name == "first-update-malformed-timestamp")
    {
        if(first_update_malformed_timestamp != nullptr)
        {
            children["first-update-malformed-timestamp"] = first_update_malformed_timestamp;
        }
        else
        {
            first_update_malformed_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp>();
            first_update_malformed_timestamp->parent = this;
            children["first-update-malformed-timestamp"] = first_update_malformed_timestamp;
        }
        return children.at("first-update-malformed-timestamp");
    }

    if(child_yang_name == "first-update-memory-allocation-fail-timestamp")
    {
        if(first_update_memory_allocation_fail_timestamp != nullptr)
        {
            children["first-update-memory-allocation-fail-timestamp"] = first_update_memory_allocation_fail_timestamp;
        }
        else
        {
            first_update_memory_allocation_fail_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp>();
            first_update_memory_allocation_fail_timestamp->parent = this;
            children["first-update-memory-allocation-fail-timestamp"] = first_update_memory_allocation_fail_timestamp;
        }
        return children.at("first-update-memory-allocation-fail-timestamp");
    }

    if(child_yang_name == "last-error-handling-reset-timestamp")
    {
        if(last_error_handling_reset_timestamp != nullptr)
        {
            children["last-error-handling-reset-timestamp"] = last_error_handling_reset_timestamp;
        }
        else
        {
            last_error_handling_reset_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastErrorHandlingResetTimestamp>();
            last_error_handling_reset_timestamp->parent = this;
            children["last-error-handling-reset-timestamp"] = last_error_handling_reset_timestamp;
        }
        return children.at("last-error-handling-reset-timestamp");
    }

    if(child_yang_name == "last-update-malformed-timestamp")
    {
        if(last_update_malformed_timestamp != nullptr)
        {
            children["last-update-malformed-timestamp"] = last_update_malformed_timestamp;
        }
        else
        {
            last_update_malformed_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp>();
            last_update_malformed_timestamp->parent = this;
            children["last-update-malformed-timestamp"] = last_update_malformed_timestamp;
        }
        return children.at("last-update-malformed-timestamp");
    }

    if(child_yang_name == "last-update-memory-allocation-fail-timestamp")
    {
        if(last_update_memory_allocation_fail_timestamp != nullptr)
        {
            children["last-update-memory-allocation-fail-timestamp"] = last_update_memory_allocation_fail_timestamp;
        }
        else
        {
            last_update_memory_allocation_fail_timestamp = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp>();
            last_update_memory_allocation_fail_timestamp->parent = this;
            children["last-update-memory-allocation-fail-timestamp"] = last_update_memory_allocation_fail_timestamp;
        }
        return children.at("last-update-memory-allocation-fail-timestamp");
    }

    if(child_yang_name == "update-error-message")
    {
        for(auto const & c : update_error_message)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateErrorMessage>();
        c->parent = this;
        update_error_message.push_back(std::move(c));
        children[segment_path] = update_error_message.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "update-neighbor-address")
    {
        if(update_neighbor_address != nullptr)
        {
            children["update-neighbor-address"] = update_neighbor_address;
        }
        else
        {
            update_neighbor_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress>();
            update_neighbor_address->parent = this;
            children["update-neighbor-address"] = update_neighbor_address;
        }
        return children.at("update-neighbor-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::get_children()
{
    for (auto const & c : establishment_action_count)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("first-update-error-handling-reset-timestamp") == children.end())
    {
        if(first_update_error_handling_reset_timestamp != nullptr)
        {
            children["first-update-error-handling-reset-timestamp"] = first_update_error_handling_reset_timestamp;
        }
    }

    if(children.find("first-update-malformed-timestamp") == children.end())
    {
        if(first_update_malformed_timestamp != nullptr)
        {
            children["first-update-malformed-timestamp"] = first_update_malformed_timestamp;
        }
    }

    if(children.find("first-update-memory-allocation-fail-timestamp") == children.end())
    {
        if(first_update_memory_allocation_fail_timestamp != nullptr)
        {
            children["first-update-memory-allocation-fail-timestamp"] = first_update_memory_allocation_fail_timestamp;
        }
    }

    if(children.find("last-error-handling-reset-timestamp") == children.end())
    {
        if(last_error_handling_reset_timestamp != nullptr)
        {
            children["last-error-handling-reset-timestamp"] = last_error_handling_reset_timestamp;
        }
    }

    if(children.find("last-update-malformed-timestamp") == children.end())
    {
        if(last_update_malformed_timestamp != nullptr)
        {
            children["last-update-malformed-timestamp"] = last_update_malformed_timestamp;
        }
    }

    if(children.find("last-update-memory-allocation-fail-timestamp") == children.end())
    {
        if(last_update_memory_allocation_fail_timestamp != nullptr)
        {
            children["last-update-memory-allocation-fail-timestamp"] = last_update_memory_allocation_fail_timestamp;
        }
    }

    for (auto const & c : update_error_message)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("update-neighbor-address") == children.end())
    {
        if(update_neighbor_address != nullptr)
        {
            children["update-neighbor-address"] = update_neighbor_address;
        }
    }

    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "establishment-total-update-message-count")
    {
        establishment_total_update_message_count = value;
    }
    if(value_path == "last-error-handling-reset-age")
    {
        last_error_handling_reset_age = value;
    }
    if(value_path == "last-update-malformed-age")
    {
        last_update_malformed_age = value;
    }
    if(value_path == "last-update-memory-allocation-fail-age")
    {
        last_update_memory_allocation_fail_age = value;
    }
    if(value_path == "total-update-message-count")
    {
        total_update_message_count = value;
    }
    if(value_path == "update-attribute-discard-count")
    {
        update_attribute_discard_count = value;
    }
    if(value_path == "update-error-handling-avoid-reset")
    {
        update_error_handling_avoid_reset = value;
    }
    if(value_path == "update-error-handling-reset-count")
    {
        update_error_handling_reset_count = value;
    }
    if(value_path == "update-error-message-list-count")
    {
        update_error_message_list_count = value;
    }
    if(value_path == "update-malformed-message-count")
    {
        update_malformed_message_count = value;
    }
    if(value_path == "update-memory-allocation-fail-count")
    {
        update_memory_allocation_fail_count = value;
    }
    if(value_path == "update-vrf-name")
    {
        update_vrf_name = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::UpdateNeighborAddress()
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
    ipv4sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress>())
	,ipv6sr_policy_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress>())
	,l2vpn_mspw_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress>())
	,l2vpnvpls_address(std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnvplsAddress>())
{
    ipv4sr_policy_address->parent = this;
    children["ipv4sr-policy-address"] = ipv4sr_policy_address;

    ipv6sr_policy_address->parent = this;
    children["ipv6sr-policy-address"] = ipv6sr_policy_address;

    l2vpn_mspw_address->parent = this;
    children["l2vpn-mspw-address"] = l2vpn_mspw_address;

    l2vpnvpls_address->parent = this;
    children["l2vpnvpls-address"] = l2vpnvpls_address;

    yang_name = "update-neighbor-address"; yang_parent_name = "update-inbound-error-neighbor";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::~UpdateNeighborAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::has_data() const
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

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::has_operation() const
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

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update-neighbor-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'UpdateNeighborAddress' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            ipv4sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress>();
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
            ipv6sr_policy_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress>();
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
            l2vpn_mspw_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress>();
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
            l2vpnvpls_address = std::make_shared<Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnvplsAddress>();
            l2vpnvpls_address->parent = this;
            children["l2vpnvpls-address"] = l2vpnvpls_address;
        }
        return children.at("l2vpnvpls-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::get_children()
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

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::set_value(const std::string & value_path, std::string value)
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

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnvplsAddress::L2VpnvplsAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpnvpls-address"; yang_parent_name = "update-neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnvplsAddress::~L2VpnvplsAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnvplsAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnvplsAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnvplsAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpnvpls-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnvplsAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnvplsAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnvplsAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnvplsAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::L2VpnMspwAddress()
    :
    l2vpn_address{YType::str, "l2vpn-address"}
{
    yang_name = "l2vpn-mspw-address"; yang_parent_name = "update-neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::~L2VpnMspwAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::has_data() const
{
    return l2vpn_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(l2vpn_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-mspw-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::L2VpnMspwAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2vpn-address")
    {
        l2vpn_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::Ipv4SrPolicyAddress()
    :
    ipv4_srpolicy_address{YType::str, "ipv4-srpolicy-address"}
{
    yang_name = "ipv4sr-policy-address"; yang_parent_name = "update-neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::~Ipv4SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::has_data() const
{
    return ipv4_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv4SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-srpolicy-address")
    {
        ipv4_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::Ipv6SrPolicyAddress()
    :
    ipv6_srpolicy_address{YType::str, "ipv6-srpolicy-address"}
{
    yang_name = "ipv6sr-policy-address"; yang_parent_name = "update-neighbor-address";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::~Ipv6SrPolicyAddress()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::has_data() const
{
    return ipv6_srpolicy_address.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_srpolicy_address.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6sr-policy-address";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::UpdateNeighborAddress::Ipv6SrPolicyAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-srpolicy-address")
    {
        ipv6_srpolicy_address = value;
    }
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::FirstUpdateMalformedTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "first-update-malformed-timestamp"; yang_parent_name = "update-inbound-error-neighbor";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::~FirstUpdateMalformedTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-update-malformed-timestamp";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FirstUpdateMalformedTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMalformedTimestamp::set_value(const std::string & value_path, std::string value)
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

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::LastUpdateMalformedTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-update-malformed-timestamp"; yang_parent_name = "update-inbound-error-neighbor";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::~LastUpdateMalformedTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-malformed-timestamp";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastUpdateMalformedTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMalformedTimestamp::set_value(const std::string & value_path, std::string value)
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

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::FirstUpdateMemoryAllocationFailTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "first-update-memory-allocation-fail-timestamp"; yang_parent_name = "update-inbound-error-neighbor";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::~FirstUpdateMemoryAllocationFailTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "first-update-memory-allocation-fail-timestamp";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FirstUpdateMemoryAllocationFailTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::FirstUpdateMemoryAllocationFailTimestamp::set_value(const std::string & value_path, std::string value)
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

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::LastUpdateMemoryAllocationFailTimestamp()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "last-update-memory-allocation-fail-timestamp"; yang_parent_name = "update-inbound-error-neighbor";
}

Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::~LastUpdateMemoryAllocationFailTimestamp()
{
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-update-memory-allocation-fail-timestamp";

    return path_buffer.str();

}

EntityPath Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LastUpdateMemoryAllocationFailTimestamp' in Cisco_IOS_XR_ipv4_bgp_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::get_children()
{
    return children;
}

void Bgp::Instances::Instance::InstanceStandby::DefaultVrf::UpdateInboundErrorNeighbors::UpdateInboundErrorNeighbor::LastUpdateMemoryAllocationFailTimestamp::set_value(const std::string & value_path, std::string value)
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


}
}

