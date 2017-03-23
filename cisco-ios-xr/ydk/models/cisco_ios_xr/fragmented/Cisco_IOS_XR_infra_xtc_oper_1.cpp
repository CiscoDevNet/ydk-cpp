
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_infra_xtc_oper_1.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_xtc_oper {

Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::Ospf()
    :
    area{YType::uint32, "area"},
    router_id{YType::str, "router-id"}
{
    yang_name = "ospf"; yang_parent_name = "igp-srgb";
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::~Ospf()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::has_data() const
{
    return area.is_set
	|| router_id.is_set;
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::has_operation() const
{
    return is_set(operation)
	|| is_set(area.operation)
	|| is_set(router_id.operation);
}

std::string Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";

    return path_buffer.str();

}

EntityPath Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ospf' in Cisco_IOS_XR_infra_xtc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area.is_set || is_set(area.operation)) leaf_name_data.push_back(area.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::get_children()
{
    return children;
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area")
    {
        area = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::Bgp()
    :
    router_id{YType::str, "router-id"}
{
    yang_name = "bgp"; yang_parent_name = "igp-srgb";
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::~Bgp()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::has_data() const
{
    return router_id.is_set;
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::has_operation() const
{
    return is_set(operation)
	|| is_set(router_id.operation);
}

std::string Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";

    return path_buffer.str();

}

EntityPath Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bgp' in Cisco_IOS_XR_infra_xtc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::get_children()
{
    return children;
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "router-id")
    {
        router_id = value;
    }
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::AdjacencySid()
    :
    domain_identifier{YType::uint64, "domain-identifier"},
    eflag{YType::boolean, "eflag"},
    lflag{YType::boolean, "lflag"},
    mpls_label{YType::uint32, "mpls-label"},
    nflag{YType::boolean, "nflag"},
    pflag{YType::boolean, "pflag"},
    rflag{YType::boolean, "rflag"},
    sid_type{YType::enumeration, "sid-type"},
    vflag{YType::boolean, "vflag"}
    	,
    sid_prefix(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix>())
{
    sid_prefix->parent = this;
    children["sid-prefix"] = sid_prefix;

    yang_name = "adjacency-sid"; yang_parent_name = "ipv4-link";
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::~AdjacencySid()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::has_data() const
{
    return domain_identifier.is_set
	|| eflag.is_set
	|| lflag.is_set
	|| mpls_label.is_set
	|| nflag.is_set
	|| pflag.is_set
	|| rflag.is_set
	|| sid_type.is_set
	|| vflag.is_set
	|| (sid_prefix !=  nullptr && sid_prefix->has_data());
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::has_operation() const
{
    return is_set(operation)
	|| is_set(domain_identifier.operation)
	|| is_set(eflag.operation)
	|| is_set(lflag.operation)
	|| is_set(mpls_label.operation)
	|| is_set(nflag.operation)
	|| is_set(pflag.operation)
	|| is_set(rflag.operation)
	|| is_set(sid_type.operation)
	|| is_set(vflag.operation)
	|| (sid_prefix !=  nullptr && sid_prefix->has_operation());
}

std::string Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid";

    return path_buffer.str();

}

EntityPath Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjacencySid' in Cisco_IOS_XR_infra_xtc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_identifier.is_set || is_set(domain_identifier.operation)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());
    if (eflag.is_set || is_set(eflag.operation)) leaf_name_data.push_back(eflag.get_name_leafdata());
    if (lflag.is_set || is_set(lflag.operation)) leaf_name_data.push_back(lflag.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.operation)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (nflag.is_set || is_set(nflag.operation)) leaf_name_data.push_back(nflag.get_name_leafdata());
    if (pflag.is_set || is_set(pflag.operation)) leaf_name_data.push_back(pflag.get_name_leafdata());
    if (rflag.is_set || is_set(rflag.operation)) leaf_name_data.push_back(rflag.get_name_leafdata());
    if (sid_type.is_set || is_set(sid_type.operation)) leaf_name_data.push_back(sid_type.get_name_leafdata());
    if (vflag.is_set || is_set(vflag.operation)) leaf_name_data.push_back(vflag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sid-prefix")
    {
        if(sid_prefix != nullptr)
        {
            children["sid-prefix"] = sid_prefix;
        }
        else
        {
            sid_prefix = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix>();
            sid_prefix->parent = this;
            children["sid-prefix"] = sid_prefix;
        }
        return children.at("sid-prefix");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::get_children()
{
    if(children.find("sid-prefix") == children.end())
    {
        if(sid_prefix != nullptr)
        {
            children["sid-prefix"] = sid_prefix;
        }
    }

    return children;
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
    }
    if(value_path == "eflag")
    {
        eflag = value;
    }
    if(value_path == "lflag")
    {
        lflag = value;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
    }
    if(value_path == "nflag")
    {
        nflag = value;
    }
    if(value_path == "pflag")
    {
        pflag = value;
    }
    if(value_path == "rflag")
    {
        rflag = value;
    }
    if(value_path == "sid-type")
    {
        sid_type = value;
    }
    if(value_path == "vflag")
    {
        vflag = value;
    }
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::SidPrefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "sid-prefix"; yang_parent_name = "adjacency-sid";
}

Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::~SidPrefix()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::has_data() const
{
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid-prefix";

    return path_buffer.str();

}

EntityPath Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SidPrefix' in Cisco_IOS_XR_infra_xtc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::get_children()
{
    return children;
}

void Pce::TopologyNodes::TopologyNode::Ipv4Link::AdjacencySid::SidPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pce::TopologyNodes::TopologyNode::Ipv6Link::Ipv6Link()
    :
    igp_metric{YType::uint32, "igp-metric"},
    local_ipv6_address{YType::str, "local-ipv6-address"},
    max_reservable_bandwidth{YType::uint64, "max-reservable-bandwidth"},
    maximum_link_bandwidth{YType::uint64, "maximum-link-bandwidth"},
    remote_ipv6_address{YType::str, "remote-ipv6-address"},
    te_metric{YType::uint32, "te-metric"}
    	,
    local_igp_information(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation>())
	,remote_node_protocol_identifier(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier>())
{
    local_igp_information->parent = this;
    children["local-igp-information"] = local_igp_information;

    remote_node_protocol_identifier->parent = this;
    children["remote-node-protocol-identifier"] = remote_node_protocol_identifier;

    yang_name = "ipv6-link"; yang_parent_name = "topology-node";
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::~Ipv6Link()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::has_data() const
{
    for (std::size_t index=0; index<adjacency_sid.size(); index++)
    {
        if(adjacency_sid[index]->has_data())
            return true;
    }
    return igp_metric.is_set
	|| local_ipv6_address.is_set
	|| max_reservable_bandwidth.is_set
	|| maximum_link_bandwidth.is_set
	|| remote_ipv6_address.is_set
	|| te_metric.is_set
	|| (local_igp_information !=  nullptr && local_igp_information->has_data())
	|| (remote_node_protocol_identifier !=  nullptr && remote_node_protocol_identifier->has_data());
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::has_operation() const
{
    for (std::size_t index=0; index<adjacency_sid.size(); index++)
    {
        if(adjacency_sid[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(igp_metric.operation)
	|| is_set(local_ipv6_address.operation)
	|| is_set(max_reservable_bandwidth.operation)
	|| is_set(maximum_link_bandwidth.operation)
	|| is_set(remote_ipv6_address.operation)
	|| is_set(te_metric.operation)
	|| (local_igp_information !=  nullptr && local_igp_information->has_operation())
	|| (remote_node_protocol_identifier !=  nullptr && remote_node_protocol_identifier->has_operation());
}

std::string Pce::TopologyNodes::TopologyNode::Ipv6Link::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-link";

    return path_buffer.str();

}

EntityPath Pce::TopologyNodes::TopologyNode::Ipv6Link::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6Link' in Cisco_IOS_XR_infra_xtc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_metric.is_set || is_set(igp_metric.operation)) leaf_name_data.push_back(igp_metric.get_name_leafdata());
    if (local_ipv6_address.is_set || is_set(local_ipv6_address.operation)) leaf_name_data.push_back(local_ipv6_address.get_name_leafdata());
    if (max_reservable_bandwidth.is_set || is_set(max_reservable_bandwidth.operation)) leaf_name_data.push_back(max_reservable_bandwidth.get_name_leafdata());
    if (maximum_link_bandwidth.is_set || is_set(maximum_link_bandwidth.operation)) leaf_name_data.push_back(maximum_link_bandwidth.get_name_leafdata());
    if (remote_ipv6_address.is_set || is_set(remote_ipv6_address.operation)) leaf_name_data.push_back(remote_ipv6_address.get_name_leafdata());
    if (te_metric.is_set || is_set(te_metric.operation)) leaf_name_data.push_back(te_metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::TopologyNodes::TopologyNode::Ipv6Link::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "adjacency-sid")
    {
        for(auto const & c : adjacency_sid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid>();
        c->parent = this;
        adjacency_sid.push_back(std::move(c));
        children[segment_path] = adjacency_sid.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "local-igp-information")
    {
        if(local_igp_information != nullptr)
        {
            children["local-igp-information"] = local_igp_information;
        }
        else
        {
            local_igp_information = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation>();
            local_igp_information->parent = this;
            children["local-igp-information"] = local_igp_information;
        }
        return children.at("local-igp-information");
    }

    if(child_yang_name == "remote-node-protocol-identifier")
    {
        if(remote_node_protocol_identifier != nullptr)
        {
            children["remote-node-protocol-identifier"] = remote_node_protocol_identifier;
        }
        else
        {
            remote_node_protocol_identifier = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier>();
            remote_node_protocol_identifier->parent = this;
            children["remote-node-protocol-identifier"] = remote_node_protocol_identifier;
        }
        return children.at("remote-node-protocol-identifier");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::TopologyNodes::TopologyNode::Ipv6Link::get_children()
{
    for (auto const & c : adjacency_sid)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("local-igp-information") == children.end())
    {
        if(local_igp_information != nullptr)
        {
            children["local-igp-information"] = local_igp_information;
        }
    }

    if(children.find("remote-node-protocol-identifier") == children.end())
    {
        if(remote_node_protocol_identifier != nullptr)
        {
            children["remote-node-protocol-identifier"] = remote_node_protocol_identifier;
        }
    }

    return children;
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "igp-metric")
    {
        igp_metric = value;
    }
    if(value_path == "local-ipv6-address")
    {
        local_ipv6_address = value;
    }
    if(value_path == "max-reservable-bandwidth")
    {
        max_reservable_bandwidth = value;
    }
    if(value_path == "maximum-link-bandwidth")
    {
        maximum_link_bandwidth = value;
    }
    if(value_path == "remote-ipv6-address")
    {
        remote_ipv6_address = value;
    }
    if(value_path == "te-metric")
    {
        te_metric = value;
    }
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::LocalIgpInformation()
    :
    domain_identifier{YType::uint64, "domain-identifier"}
    	,
    igp(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp>())
{
    igp->parent = this;
    children["igp"] = igp;

    yang_name = "local-igp-information"; yang_parent_name = "ipv6-link";
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::~LocalIgpInformation()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::has_data() const
{
    return domain_identifier.is_set
	|| (igp !=  nullptr && igp->has_data());
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(domain_identifier.operation)
	|| (igp !=  nullptr && igp->has_operation());
}

std::string Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-igp-information";

    return path_buffer.str();

}

EntityPath Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalIgpInformation' in Cisco_IOS_XR_infra_xtc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_identifier.is_set || is_set(domain_identifier.operation)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "igp")
    {
        if(igp != nullptr)
        {
            children["igp"] = igp;
        }
        else
        {
            igp = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp>();
            igp->parent = this;
            children["igp"] = igp;
        }
        return children.at("igp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::get_children()
{
    if(children.find("igp") == children.end())
    {
        if(igp != nullptr)
        {
            children["igp"] = igp;
        }
    }

    return children;
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
    }
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Igp()
    :
    igp_id{YType::enumeration, "igp-id"}
    	,
    bgp(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp>())
	,isis(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis>())
	,ospf(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf>())
{
    bgp->parent = this;
    children["bgp"] = bgp;

    isis->parent = this;
    children["isis"] = isis;

    ospf->parent = this;
    children["ospf"] = ospf;

    yang_name = "igp"; yang_parent_name = "local-igp-information";
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::~Igp()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::has_data() const
{
    return igp_id.is_set
	|| (bgp !=  nullptr && bgp->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data());
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::has_operation() const
{
    return is_set(operation)
	|| is_set(igp_id.operation)
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation());
}

std::string Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";

    return path_buffer.str();

}

EntityPath Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Igp' in Cisco_IOS_XR_infra_xtc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.operation)) leaf_name_data.push_back(igp_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bgp")
    {
        if(bgp != nullptr)
        {
            children["bgp"] = bgp;
        }
        else
        {
            bgp = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp>();
            bgp->parent = this;
            children["bgp"] = bgp;
        }
        return children.at("bgp");
    }

    if(child_yang_name == "isis")
    {
        if(isis != nullptr)
        {
            children["isis"] = isis;
        }
        else
        {
            isis = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis>();
            isis->parent = this;
            children["isis"] = isis;
        }
        return children.at("isis");
    }

    if(child_yang_name == "ospf")
    {
        if(ospf != nullptr)
        {
            children["ospf"] = ospf;
        }
        else
        {
            ospf = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf>();
            ospf->parent = this;
            children["ospf"] = ospf;
        }
        return children.at("ospf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::get_children()
{
    if(children.find("bgp") == children.end())
    {
        if(bgp != nullptr)
        {
            children["bgp"] = bgp;
        }
    }

    if(children.find("isis") == children.end())
    {
        if(isis != nullptr)
        {
            children["isis"] = isis;
        }
    }

    if(children.find("ospf") == children.end())
    {
        if(ospf != nullptr)
        {
            children["ospf"] = ospf;
        }
    }

    return children;
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
    }
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis::Isis()
    :
    level{YType::uint32, "level"},
    system_id{YType::str, "system-id"}
{
    yang_name = "isis"; yang_parent_name = "igp";
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis::~Isis()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis::has_data() const
{
    return level.is_set
	|| system_id.is_set;
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(system_id.operation);
}

std::string Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";

    return path_buffer.str();

}

EntityPath Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Isis' in Cisco_IOS_XR_infra_xtc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (system_id.is_set || is_set(system_id.operation)) leaf_name_data.push_back(system_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis::get_children()
{
    return children;
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Isis::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "system-id")
    {
        system_id = value;
    }
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf::Ospf()
    :
    area{YType::uint32, "area"},
    router_id{YType::str, "router-id"}
{
    yang_name = "ospf"; yang_parent_name = "igp";
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf::~Ospf()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf::has_data() const
{
    return area.is_set
	|| router_id.is_set;
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf::has_operation() const
{
    return is_set(operation)
	|| is_set(area.operation)
	|| is_set(router_id.operation);
}

std::string Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";

    return path_buffer.str();

}

EntityPath Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ospf' in Cisco_IOS_XR_infra_xtc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area.is_set || is_set(area.operation)) leaf_name_data.push_back(area.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf::get_children()
{
    return children;
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Ospf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area")
    {
        area = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp::Bgp()
    :
    router_id{YType::str, "router-id"}
{
    yang_name = "bgp"; yang_parent_name = "igp";
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp::~Bgp()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp::has_data() const
{
    return router_id.is_set;
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp::has_operation() const
{
    return is_set(operation)
	|| is_set(router_id.operation);
}

std::string Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";

    return path_buffer.str();

}

EntityPath Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bgp' in Cisco_IOS_XR_infra_xtc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp::get_children()
{
    return children;
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::LocalIgpInformation::Igp::Bgp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "router-id")
    {
        router_id = value;
    }
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::RemoteNodeProtocolIdentifier()
    :
    ipv4bgp_router_id{YType::str, "ipv4bgp-router-id"},
    ipv4bgp_router_id_set{YType::boolean, "ipv4bgp-router-id-set"},
    ipv4te_router_id{YType::str, "ipv4te-router-id"},
    ipv4te_router_id_set{YType::boolean, "ipv4te-router-id-set"},
    node_name{YType::str, "node-name"}
{
    yang_name = "remote-node-protocol-identifier"; yang_parent_name = "ipv6-link";
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::~RemoteNodeProtocolIdentifier()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::has_data() const
{
    for (std::size_t index=0; index<igp_information.size(); index++)
    {
        if(igp_information[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<srgb_information.size(); index++)
    {
        if(srgb_information[index]->has_data())
            return true;
    }
    return ipv4bgp_router_id.is_set
	|| ipv4bgp_router_id_set.is_set
	|| ipv4te_router_id.is_set
	|| ipv4te_router_id_set.is_set
	|| node_name.is_set;
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::has_operation() const
{
    for (std::size_t index=0; index<igp_information.size(); index++)
    {
        if(igp_information[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<srgb_information.size(); index++)
    {
        if(srgb_information[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(ipv4bgp_router_id.operation)
	|| is_set(ipv4bgp_router_id_set.operation)
	|| is_set(ipv4te_router_id.operation)
	|| is_set(ipv4te_router_id_set.operation)
	|| is_set(node_name.operation);
}

std::string Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-node-protocol-identifier";

    return path_buffer.str();

}

EntityPath Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RemoteNodeProtocolIdentifier' in Cisco_IOS_XR_infra_xtc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4bgp_router_id.is_set || is_set(ipv4bgp_router_id.operation)) leaf_name_data.push_back(ipv4bgp_router_id.get_name_leafdata());
    if (ipv4bgp_router_id_set.is_set || is_set(ipv4bgp_router_id_set.operation)) leaf_name_data.push_back(ipv4bgp_router_id_set.get_name_leafdata());
    if (ipv4te_router_id.is_set || is_set(ipv4te_router_id.operation)) leaf_name_data.push_back(ipv4te_router_id.get_name_leafdata());
    if (ipv4te_router_id_set.is_set || is_set(ipv4te_router_id_set.operation)) leaf_name_data.push_back(ipv4te_router_id_set.get_name_leafdata());
    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "igp-information")
    {
        for(auto const & c : igp_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation>();
        c->parent = this;
        igp_information.push_back(std::move(c));
        children[segment_path] = igp_information.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "srgb-information")
    {
        for(auto const & c : srgb_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation>();
        c->parent = this;
        srgb_information.push_back(std::move(c));
        children[segment_path] = srgb_information.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::get_children()
{
    for (auto const & c : igp_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : srgb_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4bgp-router-id")
    {
        ipv4bgp_router_id = value;
    }
    if(value_path == "ipv4bgp-router-id-set")
    {
        ipv4bgp_router_id_set = value;
    }
    if(value_path == "ipv4te-router-id")
    {
        ipv4te_router_id = value;
    }
    if(value_path == "ipv4te-router-id-set")
    {
        ipv4te_router_id_set = value;
    }
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::IgpInformation()
    :
    domain_identifier{YType::uint64, "domain-identifier"}
    	,
    igp(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp>())
{
    igp->parent = this;
    children["igp"] = igp;

    yang_name = "igp-information"; yang_parent_name = "remote-node-protocol-identifier";
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::~IgpInformation()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::has_data() const
{
    return domain_identifier.is_set
	|| (igp !=  nullptr && igp->has_data());
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(domain_identifier.operation)
	|| (igp !=  nullptr && igp->has_operation());
}

std::string Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-information";

    return path_buffer.str();

}

EntityPath Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IgpInformation' in Cisco_IOS_XR_infra_xtc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_identifier.is_set || is_set(domain_identifier.operation)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "igp")
    {
        if(igp != nullptr)
        {
            children["igp"] = igp;
        }
        else
        {
            igp = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp>();
            igp->parent = this;
            children["igp"] = igp;
        }
        return children.at("igp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::get_children()
{
    if(children.find("igp") == children.end())
    {
        if(igp != nullptr)
        {
            children["igp"] = igp;
        }
    }

    return children;
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
    }
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Igp()
    :
    igp_id{YType::enumeration, "igp-id"}
    	,
    bgp(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp>())
	,isis(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis>())
	,ospf(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf>())
{
    bgp->parent = this;
    children["bgp"] = bgp;

    isis->parent = this;
    children["isis"] = isis;

    ospf->parent = this;
    children["ospf"] = ospf;

    yang_name = "igp"; yang_parent_name = "igp-information";
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::~Igp()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::has_data() const
{
    return igp_id.is_set
	|| (bgp !=  nullptr && bgp->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data());
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::has_operation() const
{
    return is_set(operation)
	|| is_set(igp_id.operation)
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation());
}

std::string Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";

    return path_buffer.str();

}

EntityPath Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Igp' in Cisco_IOS_XR_infra_xtc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.operation)) leaf_name_data.push_back(igp_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bgp")
    {
        if(bgp != nullptr)
        {
            children["bgp"] = bgp;
        }
        else
        {
            bgp = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp>();
            bgp->parent = this;
            children["bgp"] = bgp;
        }
        return children.at("bgp");
    }

    if(child_yang_name == "isis")
    {
        if(isis != nullptr)
        {
            children["isis"] = isis;
        }
        else
        {
            isis = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis>();
            isis->parent = this;
            children["isis"] = isis;
        }
        return children.at("isis");
    }

    if(child_yang_name == "ospf")
    {
        if(ospf != nullptr)
        {
            children["ospf"] = ospf;
        }
        else
        {
            ospf = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf>();
            ospf->parent = this;
            children["ospf"] = ospf;
        }
        return children.at("ospf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::get_children()
{
    if(children.find("bgp") == children.end())
    {
        if(bgp != nullptr)
        {
            children["bgp"] = bgp;
        }
    }

    if(children.find("isis") == children.end())
    {
        if(isis != nullptr)
        {
            children["isis"] = isis;
        }
    }

    if(children.find("ospf") == children.end())
    {
        if(ospf != nullptr)
        {
            children["ospf"] = ospf;
        }
    }

    return children;
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
    }
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::Isis()
    :
    level{YType::uint32, "level"},
    system_id{YType::str, "system-id"}
{
    yang_name = "isis"; yang_parent_name = "igp";
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::~Isis()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::has_data() const
{
    return level.is_set
	|| system_id.is_set;
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(system_id.operation);
}

std::string Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";

    return path_buffer.str();

}

EntityPath Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Isis' in Cisco_IOS_XR_infra_xtc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (system_id.is_set || is_set(system_id.operation)) leaf_name_data.push_back(system_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::get_children()
{
    return children;
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Isis::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "system-id")
    {
        system_id = value;
    }
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::Ospf()
    :
    area{YType::uint32, "area"},
    router_id{YType::str, "router-id"}
{
    yang_name = "ospf"; yang_parent_name = "igp";
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::~Ospf()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::has_data() const
{
    return area.is_set
	|| router_id.is_set;
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::has_operation() const
{
    return is_set(operation)
	|| is_set(area.operation)
	|| is_set(router_id.operation);
}

std::string Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";

    return path_buffer.str();

}

EntityPath Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ospf' in Cisco_IOS_XR_infra_xtc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area.is_set || is_set(area.operation)) leaf_name_data.push_back(area.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_children()
{
    return children;
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Ospf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area")
    {
        area = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::Bgp()
    :
    router_id{YType::str, "router-id"}
{
    yang_name = "bgp"; yang_parent_name = "igp";
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::~Bgp()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::has_data() const
{
    return router_id.is_set;
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::has_operation() const
{
    return is_set(operation)
	|| is_set(router_id.operation);
}

std::string Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";

    return path_buffer.str();

}

EntityPath Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bgp' in Cisco_IOS_XR_infra_xtc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_children()
{
    return children;
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::IgpInformation::Igp::Bgp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "router-id")
    {
        router_id = value;
    }
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::SrgbInformation()
    :
    size{YType::uint32, "size"},
    start{YType::uint32, "start"}
    	,
    igp_srgb(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb>())
{
    igp_srgb->parent = this;
    children["igp-srgb"] = igp_srgb;

    yang_name = "srgb-information"; yang_parent_name = "remote-node-protocol-identifier";
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::~SrgbInformation()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::has_data() const
{
    return size.is_set
	|| start.is_set
	|| (igp_srgb !=  nullptr && igp_srgb->has_data());
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(size.operation)
	|| is_set(start.operation)
	|| (igp_srgb !=  nullptr && igp_srgb->has_operation());
}

std::string Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srgb-information";

    return path_buffer.str();

}

EntityPath Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrgbInformation' in Cisco_IOS_XR_infra_xtc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.operation)) leaf_name_data.push_back(size.get_name_leafdata());
    if (start.is_set || is_set(start.operation)) leaf_name_data.push_back(start.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "igp-srgb")
    {
        if(igp_srgb != nullptr)
        {
            children["igp-srgb"] = igp_srgb;
        }
        else
        {
            igp_srgb = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb>();
            igp_srgb->parent = this;
            children["igp-srgb"] = igp_srgb;
        }
        return children.at("igp-srgb");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::get_children()
{
    if(children.find("igp-srgb") == children.end())
    {
        if(igp_srgb != nullptr)
        {
            children["igp-srgb"] = igp_srgb;
        }
    }

    return children;
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "size")
    {
        size = value;
    }
    if(value_path == "start")
    {
        start = value;
    }
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::IgpSrgb()
    :
    igp_id{YType::enumeration, "igp-id"}
    	,
    bgp(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp>())
	,isis(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis>())
	,ospf(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf>())
{
    bgp->parent = this;
    children["bgp"] = bgp;

    isis->parent = this;
    children["isis"] = isis;

    ospf->parent = this;
    children["ospf"] = ospf;

    yang_name = "igp-srgb"; yang_parent_name = "srgb-information";
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::~IgpSrgb()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::has_data() const
{
    return igp_id.is_set
	|| (bgp !=  nullptr && bgp->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data());
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::has_operation() const
{
    return is_set(operation)
	|| is_set(igp_id.operation)
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation());
}

std::string Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-srgb";

    return path_buffer.str();

}

EntityPath Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IgpSrgb' in Cisco_IOS_XR_infra_xtc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.operation)) leaf_name_data.push_back(igp_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bgp")
    {
        if(bgp != nullptr)
        {
            children["bgp"] = bgp;
        }
        else
        {
            bgp = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp>();
            bgp->parent = this;
            children["bgp"] = bgp;
        }
        return children.at("bgp");
    }

    if(child_yang_name == "isis")
    {
        if(isis != nullptr)
        {
            children["isis"] = isis;
        }
        else
        {
            isis = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis>();
            isis->parent = this;
            children["isis"] = isis;
        }
        return children.at("isis");
    }

    if(child_yang_name == "ospf")
    {
        if(ospf != nullptr)
        {
            children["ospf"] = ospf;
        }
        else
        {
            ospf = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf>();
            ospf->parent = this;
            children["ospf"] = ospf;
        }
        return children.at("ospf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::get_children()
{
    if(children.find("bgp") == children.end())
    {
        if(bgp != nullptr)
        {
            children["bgp"] = bgp;
        }
    }

    if(children.find("isis") == children.end())
    {
        if(isis != nullptr)
        {
            children["isis"] = isis;
        }
    }

    if(children.find("ospf") == children.end())
    {
        if(ospf != nullptr)
        {
            children["ospf"] = ospf;
        }
    }

    return children;
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
    }
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::Isis()
    :
    level{YType::uint32, "level"},
    system_id{YType::str, "system-id"}
{
    yang_name = "isis"; yang_parent_name = "igp-srgb";
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::~Isis()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::has_data() const
{
    return level.is_set
	|| system_id.is_set;
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(system_id.operation);
}

std::string Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";

    return path_buffer.str();

}

EntityPath Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Isis' in Cisco_IOS_XR_infra_xtc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (system_id.is_set || is_set(system_id.operation)) leaf_name_data.push_back(system_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::get_children()
{
    return children;
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "system-id")
    {
        system_id = value;
    }
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::Ospf()
    :
    area{YType::uint32, "area"},
    router_id{YType::str, "router-id"}
{
    yang_name = "ospf"; yang_parent_name = "igp-srgb";
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::~Ospf()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::has_data() const
{
    return area.is_set
	|| router_id.is_set;
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::has_operation() const
{
    return is_set(operation)
	|| is_set(area.operation)
	|| is_set(router_id.operation);
}

std::string Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";

    return path_buffer.str();

}

EntityPath Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ospf' in Cisco_IOS_XR_infra_xtc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area.is_set || is_set(area.operation)) leaf_name_data.push_back(area.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::get_children()
{
    return children;
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area")
    {
        area = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::Bgp()
    :
    router_id{YType::str, "router-id"}
{
    yang_name = "bgp"; yang_parent_name = "igp-srgb";
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::~Bgp()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::has_data() const
{
    return router_id.is_set;
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::has_operation() const
{
    return is_set(operation)
	|| is_set(router_id.operation);
}

std::string Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";

    return path_buffer.str();

}

EntityPath Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bgp' in Cisco_IOS_XR_infra_xtc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::get_children()
{
    return children;
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::RemoteNodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "router-id")
    {
        router_id = value;
    }
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::AdjacencySid()
    :
    domain_identifier{YType::uint64, "domain-identifier"},
    eflag{YType::boolean, "eflag"},
    lflag{YType::boolean, "lflag"},
    mpls_label{YType::uint32, "mpls-label"},
    nflag{YType::boolean, "nflag"},
    pflag{YType::boolean, "pflag"},
    rflag{YType::boolean, "rflag"},
    sid_type{YType::enumeration, "sid-type"},
    vflag{YType::boolean, "vflag"}
    	,
    sid_prefix(std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix>())
{
    sid_prefix->parent = this;
    children["sid-prefix"] = sid_prefix;

    yang_name = "adjacency-sid"; yang_parent_name = "ipv6-link";
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::~AdjacencySid()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::has_data() const
{
    return domain_identifier.is_set
	|| eflag.is_set
	|| lflag.is_set
	|| mpls_label.is_set
	|| nflag.is_set
	|| pflag.is_set
	|| rflag.is_set
	|| sid_type.is_set
	|| vflag.is_set
	|| (sid_prefix !=  nullptr && sid_prefix->has_data());
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::has_operation() const
{
    return is_set(operation)
	|| is_set(domain_identifier.operation)
	|| is_set(eflag.operation)
	|| is_set(lflag.operation)
	|| is_set(mpls_label.operation)
	|| is_set(nflag.operation)
	|| is_set(pflag.operation)
	|| is_set(rflag.operation)
	|| is_set(sid_type.operation)
	|| is_set(vflag.operation)
	|| (sid_prefix !=  nullptr && sid_prefix->has_operation());
}

std::string Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "adjacency-sid";

    return path_buffer.str();

}

EntityPath Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AdjacencySid' in Cisco_IOS_XR_infra_xtc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_identifier.is_set || is_set(domain_identifier.operation)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());
    if (eflag.is_set || is_set(eflag.operation)) leaf_name_data.push_back(eflag.get_name_leafdata());
    if (lflag.is_set || is_set(lflag.operation)) leaf_name_data.push_back(lflag.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.operation)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (nflag.is_set || is_set(nflag.operation)) leaf_name_data.push_back(nflag.get_name_leafdata());
    if (pflag.is_set || is_set(pflag.operation)) leaf_name_data.push_back(pflag.get_name_leafdata());
    if (rflag.is_set || is_set(rflag.operation)) leaf_name_data.push_back(rflag.get_name_leafdata());
    if (sid_type.is_set || is_set(sid_type.operation)) leaf_name_data.push_back(sid_type.get_name_leafdata());
    if (vflag.is_set || is_set(vflag.operation)) leaf_name_data.push_back(vflag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sid-prefix")
    {
        if(sid_prefix != nullptr)
        {
            children["sid-prefix"] = sid_prefix;
        }
        else
        {
            sid_prefix = std::make_shared<Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix>();
            sid_prefix->parent = this;
            children["sid-prefix"] = sid_prefix;
        }
        return children.at("sid-prefix");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::get_children()
{
    if(children.find("sid-prefix") == children.end())
    {
        if(sid_prefix != nullptr)
        {
            children["sid-prefix"] = sid_prefix;
        }
    }

    return children;
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
    }
    if(value_path == "eflag")
    {
        eflag = value;
    }
    if(value_path == "lflag")
    {
        lflag = value;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
    }
    if(value_path == "nflag")
    {
        nflag = value;
    }
    if(value_path == "pflag")
    {
        pflag = value;
    }
    if(value_path == "rflag")
    {
        rflag = value;
    }
    if(value_path == "sid-type")
    {
        sid_type = value;
    }
    if(value_path == "vflag")
    {
        vflag = value;
    }
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::SidPrefix()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "sid-prefix"; yang_parent_name = "adjacency-sid";
}

Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::~SidPrefix()
{
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::has_data() const
{
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sid-prefix";

    return path_buffer.str();

}

EntityPath Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SidPrefix' in Cisco_IOS_XR_infra_xtc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::get_children()
{
    return children;
}

void Pce::TopologyNodes::TopologyNode::Ipv6Link::AdjacencySid::SidPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pce::PrefixInfos::PrefixInfos()
{
    yang_name = "prefix-infos"; yang_parent_name = "pce";
}

Pce::PrefixInfos::~PrefixInfos()
{
}

bool Pce::PrefixInfos::has_data() const
{
    for (std::size_t index=0; index<prefix_info.size(); index++)
    {
        if(prefix_info[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::PrefixInfos::has_operation() const
{
    for (std::size_t index=0; index<prefix_info.size(); index++)
    {
        if(prefix_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pce::PrefixInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-infos";

    return path_buffer.str();

}

EntityPath Pce::PrefixInfos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::PrefixInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "prefix-info")
    {
        for(auto const & c : prefix_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pce::PrefixInfos::PrefixInfo>();
        c->parent = this;
        prefix_info.push_back(std::move(c));
        children[segment_path] = prefix_info.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::PrefixInfos::get_children()
{
    for (auto const & c : prefix_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pce::PrefixInfos::set_value(const std::string & value_path, std::string value)
{
}

Pce::PrefixInfos::PrefixInfo::PrefixInfo()
    :
    node_identifier{YType::int32, "node-identifier"},
    node_identifier_xr{YType::uint32, "node-identifier-xr"}
    	,
    node_protocol_identifier(std::make_shared<Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier>())
{
    node_protocol_identifier->parent = this;
    children["node-protocol-identifier"] = node_protocol_identifier;

    yang_name = "prefix-info"; yang_parent_name = "prefix-infos";
}

Pce::PrefixInfos::PrefixInfo::~PrefixInfo()
{
}

bool Pce::PrefixInfos::PrefixInfo::has_data() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_data())
            return true;
    }
    return node_identifier.is_set
	|| node_identifier_xr.is_set
	|| (node_protocol_identifier !=  nullptr && node_protocol_identifier->has_data());
}

bool Pce::PrefixInfos::PrefixInfo::has_operation() const
{
    for (std::size_t index=0; index<address.size(); index++)
    {
        if(address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(node_identifier.operation)
	|| is_set(node_identifier_xr.operation)
	|| (node_protocol_identifier !=  nullptr && node_protocol_identifier->has_operation());
}

std::string Pce::PrefixInfos::PrefixInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-info" <<"[node-identifier='" <<node_identifier <<"']";

    return path_buffer.str();

}

EntityPath Pce::PrefixInfos::PrefixInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/prefix-infos/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_identifier.is_set || is_set(node_identifier.operation)) leaf_name_data.push_back(node_identifier.get_name_leafdata());
    if (node_identifier_xr.is_set || is_set(node_identifier_xr.operation)) leaf_name_data.push_back(node_identifier_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::PrefixInfos::PrefixInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        for(auto const & c : address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pce::PrefixInfos::PrefixInfo::Address>();
        c->parent = this;
        address.push_back(std::move(c));
        children[segment_path] = address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "node-protocol-identifier")
    {
        if(node_protocol_identifier != nullptr)
        {
            children["node-protocol-identifier"] = node_protocol_identifier;
        }
        else
        {
            node_protocol_identifier = std::make_shared<Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier>();
            node_protocol_identifier->parent = this;
            children["node-protocol-identifier"] = node_protocol_identifier;
        }
        return children.at("node-protocol-identifier");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::PrefixInfos::PrefixInfo::get_children()
{
    for (auto const & c : address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("node-protocol-identifier") == children.end())
    {
        if(node_protocol_identifier != nullptr)
        {
            children["node-protocol-identifier"] = node_protocol_identifier;
        }
    }

    return children;
}

void Pce::PrefixInfos::PrefixInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-identifier")
    {
        node_identifier = value;
    }
    if(value_path == "node-identifier-xr")
    {
        node_identifier_xr = value;
    }
}

Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::NodeProtocolIdentifier()
    :
    ipv4bgp_router_id{YType::str, "ipv4bgp-router-id"},
    ipv4bgp_router_id_set{YType::boolean, "ipv4bgp-router-id-set"},
    ipv4te_router_id{YType::str, "ipv4te-router-id"},
    ipv4te_router_id_set{YType::boolean, "ipv4te-router-id-set"},
    node_name{YType::str, "node-name"}
{
    yang_name = "node-protocol-identifier"; yang_parent_name = "prefix-info";
}

Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::~NodeProtocolIdentifier()
{
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::has_data() const
{
    for (std::size_t index=0; index<igp_information.size(); index++)
    {
        if(igp_information[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<srgb_information.size(); index++)
    {
        if(srgb_information[index]->has_data())
            return true;
    }
    return ipv4bgp_router_id.is_set
	|| ipv4bgp_router_id_set.is_set
	|| ipv4te_router_id.is_set
	|| ipv4te_router_id_set.is_set
	|| node_name.is_set;
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::has_operation() const
{
    for (std::size_t index=0; index<igp_information.size(); index++)
    {
        if(igp_information[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<srgb_information.size(); index++)
    {
        if(srgb_information[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(ipv4bgp_router_id.operation)
	|| is_set(ipv4bgp_router_id_set.operation)
	|| is_set(ipv4te_router_id.operation)
	|| is_set(ipv4te_router_id_set.operation)
	|| is_set(node_name.operation);
}

std::string Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-protocol-identifier";

    return path_buffer.str();

}

EntityPath Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NodeProtocolIdentifier' in Cisco_IOS_XR_infra_xtc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4bgp_router_id.is_set || is_set(ipv4bgp_router_id.operation)) leaf_name_data.push_back(ipv4bgp_router_id.get_name_leafdata());
    if (ipv4bgp_router_id_set.is_set || is_set(ipv4bgp_router_id_set.operation)) leaf_name_data.push_back(ipv4bgp_router_id_set.get_name_leafdata());
    if (ipv4te_router_id.is_set || is_set(ipv4te_router_id.operation)) leaf_name_data.push_back(ipv4te_router_id.get_name_leafdata());
    if (ipv4te_router_id_set.is_set || is_set(ipv4te_router_id_set.operation)) leaf_name_data.push_back(ipv4te_router_id_set.get_name_leafdata());
    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "igp-information")
    {
        for(auto const & c : igp_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation>();
        c->parent = this;
        igp_information.push_back(std::move(c));
        children[segment_path] = igp_information.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "srgb-information")
    {
        for(auto const & c : srgb_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation>();
        c->parent = this;
        srgb_information.push_back(std::move(c));
        children[segment_path] = srgb_information.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::get_children()
{
    for (auto const & c : igp_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : srgb_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4bgp-router-id")
    {
        ipv4bgp_router_id = value;
    }
    if(value_path == "ipv4bgp-router-id-set")
    {
        ipv4bgp_router_id_set = value;
    }
    if(value_path == "ipv4te-router-id")
    {
        ipv4te_router_id = value;
    }
    if(value_path == "ipv4te-router-id-set")
    {
        ipv4te_router_id_set = value;
    }
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::IgpInformation()
    :
    domain_identifier{YType::uint64, "domain-identifier"}
    	,
    igp(std::make_shared<Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp>())
{
    igp->parent = this;
    children["igp"] = igp;

    yang_name = "igp-information"; yang_parent_name = "node-protocol-identifier";
}

Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::~IgpInformation()
{
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::has_data() const
{
    return domain_identifier.is_set
	|| (igp !=  nullptr && igp->has_data());
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(domain_identifier.operation)
	|| (igp !=  nullptr && igp->has_operation());
}

std::string Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-information";

    return path_buffer.str();

}

EntityPath Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IgpInformation' in Cisco_IOS_XR_infra_xtc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_identifier.is_set || is_set(domain_identifier.operation)) leaf_name_data.push_back(domain_identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "igp")
    {
        if(igp != nullptr)
        {
            children["igp"] = igp;
        }
        else
        {
            igp = std::make_shared<Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp>();
            igp->parent = this;
            children["igp"] = igp;
        }
        return children.at("igp");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::get_children()
{
    if(children.find("igp") == children.end())
    {
        if(igp != nullptr)
        {
            children["igp"] = igp;
        }
    }

    return children;
}

void Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain-identifier")
    {
        domain_identifier = value;
    }
}

Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Igp()
    :
    igp_id{YType::enumeration, "igp-id"}
    	,
    bgp(std::make_shared<Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp>())
	,isis(std::make_shared<Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis>())
	,ospf(std::make_shared<Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf>())
{
    bgp->parent = this;
    children["bgp"] = bgp;

    isis->parent = this;
    children["isis"] = isis;

    ospf->parent = this;
    children["ospf"] = ospf;

    yang_name = "igp"; yang_parent_name = "igp-information";
}

Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::~Igp()
{
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::has_data() const
{
    return igp_id.is_set
	|| (bgp !=  nullptr && bgp->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data());
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::has_operation() const
{
    return is_set(operation)
	|| is_set(igp_id.operation)
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation());
}

std::string Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp";

    return path_buffer.str();

}

EntityPath Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Igp' in Cisco_IOS_XR_infra_xtc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.operation)) leaf_name_data.push_back(igp_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bgp")
    {
        if(bgp != nullptr)
        {
            children["bgp"] = bgp;
        }
        else
        {
            bgp = std::make_shared<Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp>();
            bgp->parent = this;
            children["bgp"] = bgp;
        }
        return children.at("bgp");
    }

    if(child_yang_name == "isis")
    {
        if(isis != nullptr)
        {
            children["isis"] = isis;
        }
        else
        {
            isis = std::make_shared<Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis>();
            isis->parent = this;
            children["isis"] = isis;
        }
        return children.at("isis");
    }

    if(child_yang_name == "ospf")
    {
        if(ospf != nullptr)
        {
            children["ospf"] = ospf;
        }
        else
        {
            ospf = std::make_shared<Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf>();
            ospf->parent = this;
            children["ospf"] = ospf;
        }
        return children.at("ospf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::get_children()
{
    if(children.find("bgp") == children.end())
    {
        if(bgp != nullptr)
        {
            children["bgp"] = bgp;
        }
    }

    if(children.find("isis") == children.end())
    {
        if(isis != nullptr)
        {
            children["isis"] = isis;
        }
    }

    if(children.find("ospf") == children.end())
    {
        if(ospf != nullptr)
        {
            children["ospf"] = ospf;
        }
    }

    return children;
}

void Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
    }
}

Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis::Isis()
    :
    level{YType::uint32, "level"},
    system_id{YType::str, "system-id"}
{
    yang_name = "isis"; yang_parent_name = "igp";
}

Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis::~Isis()
{
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis::has_data() const
{
    return level.is_set
	|| system_id.is_set;
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(system_id.operation);
}

std::string Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";

    return path_buffer.str();

}

EntityPath Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Isis' in Cisco_IOS_XR_infra_xtc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (system_id.is_set || is_set(system_id.operation)) leaf_name_data.push_back(system_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis::get_children()
{
    return children;
}

void Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Isis::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "system-id")
    {
        system_id = value;
    }
}

Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::Ospf()
    :
    area{YType::uint32, "area"},
    router_id{YType::str, "router-id"}
{
    yang_name = "ospf"; yang_parent_name = "igp";
}

Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::~Ospf()
{
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::has_data() const
{
    return area.is_set
	|| router_id.is_set;
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::has_operation() const
{
    return is_set(operation)
	|| is_set(area.operation)
	|| is_set(router_id.operation);
}

std::string Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";

    return path_buffer.str();

}

EntityPath Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ospf' in Cisco_IOS_XR_infra_xtc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area.is_set || is_set(area.operation)) leaf_name_data.push_back(area.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::get_children()
{
    return children;
}

void Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Ospf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area")
    {
        area = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
}

Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::Bgp()
    :
    router_id{YType::str, "router-id"}
{
    yang_name = "bgp"; yang_parent_name = "igp";
}

Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::~Bgp()
{
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::has_data() const
{
    return router_id.is_set;
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::has_operation() const
{
    return is_set(operation)
	|| is_set(router_id.operation);
}

std::string Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";

    return path_buffer.str();

}

EntityPath Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bgp' in Cisco_IOS_XR_infra_xtc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::get_children()
{
    return children;
}

void Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::IgpInformation::Igp::Bgp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "router-id")
    {
        router_id = value;
    }
}

Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::SrgbInformation()
    :
    size{YType::uint32, "size"},
    start{YType::uint32, "start"}
    	,
    igp_srgb(std::make_shared<Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb>())
{
    igp_srgb->parent = this;
    children["igp-srgb"] = igp_srgb;

    yang_name = "srgb-information"; yang_parent_name = "node-protocol-identifier";
}

Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::~SrgbInformation()
{
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::has_data() const
{
    return size.is_set
	|| start.is_set
	|| (igp_srgb !=  nullptr && igp_srgb->has_data());
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(size.operation)
	|| is_set(start.operation)
	|| (igp_srgb !=  nullptr && igp_srgb->has_operation());
}

std::string Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srgb-information";

    return path_buffer.str();

}

EntityPath Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrgbInformation' in Cisco_IOS_XR_infra_xtc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (size.is_set || is_set(size.operation)) leaf_name_data.push_back(size.get_name_leafdata());
    if (start.is_set || is_set(start.operation)) leaf_name_data.push_back(start.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "igp-srgb")
    {
        if(igp_srgb != nullptr)
        {
            children["igp-srgb"] = igp_srgb;
        }
        else
        {
            igp_srgb = std::make_shared<Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb>();
            igp_srgb->parent = this;
            children["igp-srgb"] = igp_srgb;
        }
        return children.at("igp-srgb");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::get_children()
{
    if(children.find("igp-srgb") == children.end())
    {
        if(igp_srgb != nullptr)
        {
            children["igp-srgb"] = igp_srgb;
        }
    }

    return children;
}

void Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "size")
    {
        size = value;
    }
    if(value_path == "start")
    {
        start = value;
    }
}

Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::IgpSrgb()
    :
    igp_id{YType::enumeration, "igp-id"}
    	,
    bgp(std::make_shared<Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp>())
	,isis(std::make_shared<Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis>())
	,ospf(std::make_shared<Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf>())
{
    bgp->parent = this;
    children["bgp"] = bgp;

    isis->parent = this;
    children["isis"] = isis;

    ospf->parent = this;
    children["ospf"] = ospf;

    yang_name = "igp-srgb"; yang_parent_name = "srgb-information";
}

Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::~IgpSrgb()
{
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::has_data() const
{
    return igp_id.is_set
	|| (bgp !=  nullptr && bgp->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (ospf !=  nullptr && ospf->has_data());
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::has_operation() const
{
    return is_set(operation)
	|| is_set(igp_id.operation)
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation());
}

std::string Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "igp-srgb";

    return path_buffer.str();

}

EntityPath Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IgpSrgb' in Cisco_IOS_XR_infra_xtc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (igp_id.is_set || is_set(igp_id.operation)) leaf_name_data.push_back(igp_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bgp")
    {
        if(bgp != nullptr)
        {
            children["bgp"] = bgp;
        }
        else
        {
            bgp = std::make_shared<Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp>();
            bgp->parent = this;
            children["bgp"] = bgp;
        }
        return children.at("bgp");
    }

    if(child_yang_name == "isis")
    {
        if(isis != nullptr)
        {
            children["isis"] = isis;
        }
        else
        {
            isis = std::make_shared<Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis>();
            isis->parent = this;
            children["isis"] = isis;
        }
        return children.at("isis");
    }

    if(child_yang_name == "ospf")
    {
        if(ospf != nullptr)
        {
            children["ospf"] = ospf;
        }
        else
        {
            ospf = std::make_shared<Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf>();
            ospf->parent = this;
            children["ospf"] = ospf;
        }
        return children.at("ospf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::get_children()
{
    if(children.find("bgp") == children.end())
    {
        if(bgp != nullptr)
        {
            children["bgp"] = bgp;
        }
    }

    if(children.find("isis") == children.end())
    {
        if(isis != nullptr)
        {
            children["isis"] = isis;
        }
    }

    if(children.find("ospf") == children.end())
    {
        if(ospf != nullptr)
        {
            children["ospf"] = ospf;
        }
    }

    return children;
}

void Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "igp-id")
    {
        igp_id = value;
    }
}

Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::Isis()
    :
    level{YType::uint32, "level"},
    system_id{YType::str, "system-id"}
{
    yang_name = "isis"; yang_parent_name = "igp-srgb";
}

Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::~Isis()
{
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::has_data() const
{
    return level.is_set
	|| system_id.is_set;
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(system_id.operation);
}

std::string Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";

    return path_buffer.str();

}

EntityPath Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Isis' in Cisco_IOS_XR_infra_xtc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (system_id.is_set || is_set(system_id.operation)) leaf_name_data.push_back(system_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::get_children()
{
    return children;
}

void Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Isis::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "system-id")
    {
        system_id = value;
    }
}

Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::Ospf()
    :
    area{YType::uint32, "area"},
    router_id{YType::str, "router-id"}
{
    yang_name = "ospf"; yang_parent_name = "igp-srgb";
}

Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::~Ospf()
{
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::has_data() const
{
    return area.is_set
	|| router_id.is_set;
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::has_operation() const
{
    return is_set(operation)
	|| is_set(area.operation)
	|| is_set(router_id.operation);
}

std::string Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf";

    return path_buffer.str();

}

EntityPath Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ospf' in Cisco_IOS_XR_infra_xtc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area.is_set || is_set(area.operation)) leaf_name_data.push_back(area.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::get_children()
{
    return children;
}

void Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Ospf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area")
    {
        area = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
}

Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::Bgp()
    :
    router_id{YType::str, "router-id"}
{
    yang_name = "bgp"; yang_parent_name = "igp-srgb";
}

Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::~Bgp()
{
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::has_data() const
{
    return router_id.is_set;
}

bool Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::has_operation() const
{
    return is_set(operation)
	|| is_set(router_id.operation);
}

std::string Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";

    return path_buffer.str();

}

EntityPath Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bgp' in Cisco_IOS_XR_infra_xtc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::get_children()
{
    return children;
}

void Pce::PrefixInfos::PrefixInfo::NodeProtocolIdentifier::SrgbInformation::IgpSrgb::Bgp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "router-id")
    {
        router_id = value;
    }
}

Pce::PrefixInfos::PrefixInfo::Address::Address()
    :
    af_name{YType::enumeration, "af-name"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "address"; yang_parent_name = "prefix-info";
}

Pce::PrefixInfos::PrefixInfo::Address::~Address()
{
}

bool Pce::PrefixInfos::PrefixInfo::Address::has_data() const
{
    return af_name.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Pce::PrefixInfos::PrefixInfo::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(af_name.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Pce::PrefixInfos::PrefixInfo::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

EntityPath Pce::PrefixInfos::PrefixInfo::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XR_infra_xtc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.operation)) leaf_name_data.push_back(af_name.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::PrefixInfos::PrefixInfo::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::PrefixInfos::PrefixInfo::Address::get_children()
{
    return children;
}

void Pce::PrefixInfos::PrefixInfo::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "af-name")
    {
        af_name = value;
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

Pce::LspSummary::LspSummary()
    :
    all_ls_ps(std::make_shared<Pce::LspSummary::AllLsPs>())
{
    all_ls_ps->parent = this;
    children["all-ls-ps"] = all_ls_ps;

    yang_name = "lsp-summary"; yang_parent_name = "pce";
}

Pce::LspSummary::~LspSummary()
{
}

bool Pce::LspSummary::has_data() const
{
    for (std::size_t index=0; index<peer_ls_ps_info.size(); index++)
    {
        if(peer_ls_ps_info[index]->has_data())
            return true;
    }
    return (all_ls_ps !=  nullptr && all_ls_ps->has_data());
}

bool Pce::LspSummary::has_operation() const
{
    for (std::size_t index=0; index<peer_ls_ps_info.size(); index++)
    {
        if(peer_ls_ps_info[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (all_ls_ps !=  nullptr && all_ls_ps->has_operation());
}

std::string Pce::LspSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-summary";

    return path_buffer.str();

}

EntityPath Pce::LspSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::LspSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "all-ls-ps")
    {
        if(all_ls_ps != nullptr)
        {
            children["all-ls-ps"] = all_ls_ps;
        }
        else
        {
            all_ls_ps = std::make_shared<Pce::LspSummary::AllLsPs>();
            all_ls_ps->parent = this;
            children["all-ls-ps"] = all_ls_ps;
        }
        return children.at("all-ls-ps");
    }

    if(child_yang_name == "peer-ls-ps-info")
    {
        for(auto const & c : peer_ls_ps_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pce::LspSummary::PeerLsPsInfo>();
        c->parent = this;
        peer_ls_ps_info.push_back(std::move(c));
        children[segment_path] = peer_ls_ps_info.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::LspSummary::get_children()
{
    if(children.find("all-ls-ps") == children.end())
    {
        if(all_ls_ps != nullptr)
        {
            children["all-ls-ps"] = all_ls_ps;
        }
    }

    for (auto const & c : peer_ls_ps_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pce::LspSummary::set_value(const std::string & value_path, std::string value)
{
}

Pce::LspSummary::AllLsPs::AllLsPs()
    :
    admin_up_ls_ps{YType::uint32, "admin-up-ls-ps"},
    all_ls_ps{YType::uint32, "all-ls-ps"},
    rsvp_ls_ps{YType::uint32, "rsvp-ls-ps"},
    sr_ls_ps{YType::uint32, "sr-ls-ps"},
    up_ls_ps{YType::uint32, "up-ls-ps"}
{
    yang_name = "all-ls-ps"; yang_parent_name = "lsp-summary";
}

Pce::LspSummary::AllLsPs::~AllLsPs()
{
}

bool Pce::LspSummary::AllLsPs::has_data() const
{
    return admin_up_ls_ps.is_set
	|| all_ls_ps.is_set
	|| rsvp_ls_ps.is_set
	|| sr_ls_ps.is_set
	|| up_ls_ps.is_set;
}

bool Pce::LspSummary::AllLsPs::has_operation() const
{
    return is_set(operation)
	|| is_set(admin_up_ls_ps.operation)
	|| is_set(all_ls_ps.operation)
	|| is_set(rsvp_ls_ps.operation)
	|| is_set(sr_ls_ps.operation)
	|| is_set(up_ls_ps.operation);
}

std::string Pce::LspSummary::AllLsPs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all-ls-ps";

    return path_buffer.str();

}

EntityPath Pce::LspSummary::AllLsPs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/lsp-summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_up_ls_ps.is_set || is_set(admin_up_ls_ps.operation)) leaf_name_data.push_back(admin_up_ls_ps.get_name_leafdata());
    if (all_ls_ps.is_set || is_set(all_ls_ps.operation)) leaf_name_data.push_back(all_ls_ps.get_name_leafdata());
    if (rsvp_ls_ps.is_set || is_set(rsvp_ls_ps.operation)) leaf_name_data.push_back(rsvp_ls_ps.get_name_leafdata());
    if (sr_ls_ps.is_set || is_set(sr_ls_ps.operation)) leaf_name_data.push_back(sr_ls_ps.get_name_leafdata());
    if (up_ls_ps.is_set || is_set(up_ls_ps.operation)) leaf_name_data.push_back(up_ls_ps.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::LspSummary::AllLsPs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::LspSummary::AllLsPs::get_children()
{
    return children;
}

void Pce::LspSummary::AllLsPs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-up-ls-ps")
    {
        admin_up_ls_ps = value;
    }
    if(value_path == "all-ls-ps")
    {
        all_ls_ps = value;
    }
    if(value_path == "rsvp-ls-ps")
    {
        rsvp_ls_ps = value;
    }
    if(value_path == "sr-ls-ps")
    {
        sr_ls_ps = value;
    }
    if(value_path == "up-ls-ps")
    {
        up_ls_ps = value;
    }
}

Pce::LspSummary::PeerLsPsInfo::PeerLsPsInfo()
    :
    peer_address{YType::str, "peer-address"}
    	,
    lsp_summary(std::make_shared<Pce::LspSummary::PeerLsPsInfo::LspSummary_>())
{
    lsp_summary->parent = this;
    children["lsp-summary"] = lsp_summary;

    yang_name = "peer-ls-ps-info"; yang_parent_name = "lsp-summary";
}

Pce::LspSummary::PeerLsPsInfo::~PeerLsPsInfo()
{
}

bool Pce::LspSummary::PeerLsPsInfo::has_data() const
{
    return peer_address.is_set
	|| (lsp_summary !=  nullptr && lsp_summary->has_data());
}

bool Pce::LspSummary::PeerLsPsInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_address.operation)
	|| (lsp_summary !=  nullptr && lsp_summary->has_operation());
}

std::string Pce::LspSummary::PeerLsPsInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-ls-ps-info";

    return path_buffer.str();

}

EntityPath Pce::LspSummary::PeerLsPsInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/lsp-summary/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_address.is_set || is_set(peer_address.operation)) leaf_name_data.push_back(peer_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::LspSummary::PeerLsPsInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsp-summary")
    {
        if(lsp_summary != nullptr)
        {
            children["lsp-summary"] = lsp_summary;
        }
        else
        {
            lsp_summary = std::make_shared<Pce::LspSummary::PeerLsPsInfo::LspSummary_>();
            lsp_summary->parent = this;
            children["lsp-summary"] = lsp_summary;
        }
        return children.at("lsp-summary");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::LspSummary::PeerLsPsInfo::get_children()
{
    if(children.find("lsp-summary") == children.end())
    {
        if(lsp_summary != nullptr)
        {
            children["lsp-summary"] = lsp_summary;
        }
    }

    return children;
}

void Pce::LspSummary::PeerLsPsInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-address")
    {
        peer_address = value;
    }
}

Pce::LspSummary::PeerLsPsInfo::LspSummary_::LspSummary_()
    :
    admin_up_ls_ps{YType::uint32, "admin-up-ls-ps"},
    all_ls_ps{YType::uint32, "all-ls-ps"},
    rsvp_ls_ps{YType::uint32, "rsvp-ls-ps"},
    sr_ls_ps{YType::uint32, "sr-ls-ps"},
    up_ls_ps{YType::uint32, "up-ls-ps"}
{
    yang_name = "lsp-summary"; yang_parent_name = "peer-ls-ps-info";
}

Pce::LspSummary::PeerLsPsInfo::LspSummary_::~LspSummary_()
{
}

bool Pce::LspSummary::PeerLsPsInfo::LspSummary_::has_data() const
{
    return admin_up_ls_ps.is_set
	|| all_ls_ps.is_set
	|| rsvp_ls_ps.is_set
	|| sr_ls_ps.is_set
	|| up_ls_ps.is_set;
}

bool Pce::LspSummary::PeerLsPsInfo::LspSummary_::has_operation() const
{
    return is_set(operation)
	|| is_set(admin_up_ls_ps.operation)
	|| is_set(all_ls_ps.operation)
	|| is_set(rsvp_ls_ps.operation)
	|| is_set(sr_ls_ps.operation)
	|| is_set(up_ls_ps.operation);
}

std::string Pce::LspSummary::PeerLsPsInfo::LspSummary_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-summary";

    return path_buffer.str();

}

EntityPath Pce::LspSummary::PeerLsPsInfo::LspSummary_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/lsp-summary/peer-ls-ps-info/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admin_up_ls_ps.is_set || is_set(admin_up_ls_ps.operation)) leaf_name_data.push_back(admin_up_ls_ps.get_name_leafdata());
    if (all_ls_ps.is_set || is_set(all_ls_ps.operation)) leaf_name_data.push_back(all_ls_ps.get_name_leafdata());
    if (rsvp_ls_ps.is_set || is_set(rsvp_ls_ps.operation)) leaf_name_data.push_back(rsvp_ls_ps.get_name_leafdata());
    if (sr_ls_ps.is_set || is_set(sr_ls_ps.operation)) leaf_name_data.push_back(sr_ls_ps.get_name_leafdata());
    if (up_ls_ps.is_set || is_set(up_ls_ps.operation)) leaf_name_data.push_back(up_ls_ps.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::LspSummary::PeerLsPsInfo::LspSummary_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::LspSummary::PeerLsPsInfo::LspSummary_::get_children()
{
    return children;
}

void Pce::LspSummary::PeerLsPsInfo::LspSummary_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "admin-up-ls-ps")
    {
        admin_up_ls_ps = value;
    }
    if(value_path == "all-ls-ps")
    {
        all_ls_ps = value;
    }
    if(value_path == "rsvp-ls-ps")
    {
        rsvp_ls_ps = value;
    }
    if(value_path == "sr-ls-ps")
    {
        sr_ls_ps = value;
    }
    if(value_path == "up-ls-ps")
    {
        up_ls_ps = value;
    }
}

Pce::PeerInfos::PeerInfos()
{
    yang_name = "peer-infos"; yang_parent_name = "pce";
}

Pce::PeerInfos::~PeerInfos()
{
}

bool Pce::PeerInfos::has_data() const
{
    for (std::size_t index=0; index<peer_info.size(); index++)
    {
        if(peer_info[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::PeerInfos::has_operation() const
{
    for (std::size_t index=0; index<peer_info.size(); index++)
    {
        if(peer_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pce::PeerInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-infos";

    return path_buffer.str();

}

EntityPath Pce::PeerInfos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::PeerInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "peer-info")
    {
        for(auto const & c : peer_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pce::PeerInfos::PeerInfo>();
        c->parent = this;
        peer_info.push_back(std::move(c));
        children[segment_path] = peer_info.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::PeerInfos::get_children()
{
    for (auto const & c : peer_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pce::PeerInfos::set_value(const std::string & value_path, std::string value)
{
}

Pce::PeerInfos::PeerInfo::PeerInfo()
    :
    peer_address{YType::str, "peer-address"},
    peer_address_xr{YType::str, "peer-address-xr"},
    peer_protocol{YType::enumeration, "peer-protocol"}
    	,
    brief_pcep_information(std::make_shared<Pce::PeerInfos::PeerInfo::BriefPcepInformation>())
{
    brief_pcep_information->parent = this;
    children["brief-pcep-information"] = brief_pcep_information;

    yang_name = "peer-info"; yang_parent_name = "peer-infos";
}

Pce::PeerInfos::PeerInfo::~PeerInfo()
{
}

bool Pce::PeerInfos::PeerInfo::has_data() const
{
    return peer_address.is_set
	|| peer_address_xr.is_set
	|| peer_protocol.is_set
	|| (brief_pcep_information !=  nullptr && brief_pcep_information->has_data());
}

bool Pce::PeerInfos::PeerInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(peer_address.operation)
	|| is_set(peer_address_xr.operation)
	|| is_set(peer_protocol.operation)
	|| (brief_pcep_information !=  nullptr && brief_pcep_information->has_operation());
}

std::string Pce::PeerInfos::PeerInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-info" <<"[peer-address='" <<peer_address <<"']";

    return path_buffer.str();

}

EntityPath Pce::PeerInfos::PeerInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/peer-infos/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_address.is_set || is_set(peer_address.operation)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (peer_address_xr.is_set || is_set(peer_address_xr.operation)) leaf_name_data.push_back(peer_address_xr.get_name_leafdata());
    if (peer_protocol.is_set || is_set(peer_protocol.operation)) leaf_name_data.push_back(peer_protocol.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::PeerInfos::PeerInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "brief-pcep-information")
    {
        if(brief_pcep_information != nullptr)
        {
            children["brief-pcep-information"] = brief_pcep_information;
        }
        else
        {
            brief_pcep_information = std::make_shared<Pce::PeerInfos::PeerInfo::BriefPcepInformation>();
            brief_pcep_information->parent = this;
            children["brief-pcep-information"] = brief_pcep_information;
        }
        return children.at("brief-pcep-information");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::PeerInfos::PeerInfo::get_children()
{
    if(children.find("brief-pcep-information") == children.end())
    {
        if(brief_pcep_information != nullptr)
        {
            children["brief-pcep-information"] = brief_pcep_information;
        }
    }

    return children;
}

void Pce::PeerInfos::PeerInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-address")
    {
        peer_address = value;
    }
    if(value_path == "peer-address-xr")
    {
        peer_address_xr = value;
    }
    if(value_path == "peer-protocol")
    {
        peer_protocol = value;
    }
}

Pce::PeerInfos::PeerInfo::BriefPcepInformation::BriefPcepInformation()
    :
    capability_db_version{YType::boolean, "capability-db-version"},
    capability_delta_sync{YType::boolean, "capability-delta-sync"},
    capability_instantiate{YType::boolean, "capability-instantiate"},
    capability_segment_routing{YType::boolean, "capability-segment-routing"},
    capability_triggered_sync{YType::boolean, "capability-triggered-sync"},
    capability_update{YType::boolean, "capability-update"},
    pcep_state{YType::enumeration, "pcep-state"},
    stateful{YType::boolean, "stateful"}
{
    yang_name = "brief-pcep-information"; yang_parent_name = "peer-info";
}

Pce::PeerInfos::PeerInfo::BriefPcepInformation::~BriefPcepInformation()
{
}

bool Pce::PeerInfos::PeerInfo::BriefPcepInformation::has_data() const
{
    return capability_db_version.is_set
	|| capability_delta_sync.is_set
	|| capability_instantiate.is_set
	|| capability_segment_routing.is_set
	|| capability_triggered_sync.is_set
	|| capability_update.is_set
	|| pcep_state.is_set
	|| stateful.is_set;
}

bool Pce::PeerInfos::PeerInfo::BriefPcepInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(capability_db_version.operation)
	|| is_set(capability_delta_sync.operation)
	|| is_set(capability_instantiate.operation)
	|| is_set(capability_segment_routing.operation)
	|| is_set(capability_triggered_sync.operation)
	|| is_set(capability_update.operation)
	|| is_set(pcep_state.operation)
	|| is_set(stateful.operation);
}

std::string Pce::PeerInfos::PeerInfo::BriefPcepInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-pcep-information";

    return path_buffer.str();

}

EntityPath Pce::PeerInfos::PeerInfo::BriefPcepInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BriefPcepInformation' in Cisco_IOS_XR_infra_xtc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (capability_db_version.is_set || is_set(capability_db_version.operation)) leaf_name_data.push_back(capability_db_version.get_name_leafdata());
    if (capability_delta_sync.is_set || is_set(capability_delta_sync.operation)) leaf_name_data.push_back(capability_delta_sync.get_name_leafdata());
    if (capability_instantiate.is_set || is_set(capability_instantiate.operation)) leaf_name_data.push_back(capability_instantiate.get_name_leafdata());
    if (capability_segment_routing.is_set || is_set(capability_segment_routing.operation)) leaf_name_data.push_back(capability_segment_routing.get_name_leafdata());
    if (capability_triggered_sync.is_set || is_set(capability_triggered_sync.operation)) leaf_name_data.push_back(capability_triggered_sync.get_name_leafdata());
    if (capability_update.is_set || is_set(capability_update.operation)) leaf_name_data.push_back(capability_update.get_name_leafdata());
    if (pcep_state.is_set || is_set(pcep_state.operation)) leaf_name_data.push_back(pcep_state.get_name_leafdata());
    if (stateful.is_set || is_set(stateful.operation)) leaf_name_data.push_back(stateful.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::PeerInfos::PeerInfo::BriefPcepInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::PeerInfos::PeerInfo::BriefPcepInformation::get_children()
{
    return children;
}

void Pce::PeerInfos::PeerInfo::BriefPcepInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "capability-db-version")
    {
        capability_db_version = value;
    }
    if(value_path == "capability-delta-sync")
    {
        capability_delta_sync = value;
    }
    if(value_path == "capability-instantiate")
    {
        capability_instantiate = value;
    }
    if(value_path == "capability-segment-routing")
    {
        capability_segment_routing = value;
    }
    if(value_path == "capability-triggered-sync")
    {
        capability_triggered_sync = value;
    }
    if(value_path == "capability-update")
    {
        capability_update = value;
    }
    if(value_path == "pcep-state")
    {
        pcep_state = value;
    }
    if(value_path == "stateful")
    {
        stateful = value;
    }
}

Pce::TunnelDetailInfos::TunnelDetailInfos()
{
    yang_name = "tunnel-detail-infos"; yang_parent_name = "pce";
}

Pce::TunnelDetailInfos::~TunnelDetailInfos()
{
}

bool Pce::TunnelDetailInfos::has_data() const
{
    for (std::size_t index=0; index<tunnel_detail_info.size(); index++)
    {
        if(tunnel_detail_info[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::TunnelDetailInfos::has_operation() const
{
    for (std::size_t index=0; index<tunnel_detail_info.size(); index++)
    {
        if(tunnel_detail_info[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pce::TunnelDetailInfos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-detail-infos";

    return path_buffer.str();

}

EntityPath Pce::TunnelDetailInfos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::TunnelDetailInfos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tunnel-detail-info")
    {
        for(auto const & c : tunnel_detail_info)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo>();
        c->parent = this;
        tunnel_detail_info.push_back(std::move(c));
        children[segment_path] = tunnel_detail_info.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::TunnelDetailInfos::get_children()
{
    for (auto const & c : tunnel_detail_info)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pce::TunnelDetailInfos::set_value(const std::string & value_path, std::string value)
{
}

Pce::TunnelDetailInfos::TunnelDetailInfo::TunnelDetailInfo()
    :
    peer_address{YType::str, "peer-address"},
    plsp_id{YType::int32, "plsp-id"},
    tunnel_name{YType::str, "tunnel-name"},
    pcc_address{YType::str, "pcc-address"},
    tunnel_name_xr{YType::str, "tunnel-name-xr"}
    	,
    private_lsp_information(std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation>())
{
    private_lsp_information->parent = this;
    children["private-lsp-information"] = private_lsp_information;

    yang_name = "tunnel-detail-info"; yang_parent_name = "tunnel-detail-infos";
}

Pce::TunnelDetailInfos::TunnelDetailInfo::~TunnelDetailInfo()
{
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::has_data() const
{
    for (std::size_t index=0; index<detail_lsp_information.size(); index++)
    {
        if(detail_lsp_information[index]->has_data())
            return true;
    }
    return peer_address.is_set
	|| plsp_id.is_set
	|| tunnel_name.is_set
	|| pcc_address.is_set
	|| tunnel_name_xr.is_set
	|| (private_lsp_information !=  nullptr && private_lsp_information->has_data());
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::has_operation() const
{
    for (std::size_t index=0; index<detail_lsp_information.size(); index++)
    {
        if(detail_lsp_information[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(peer_address.operation)
	|| is_set(plsp_id.operation)
	|| is_set(tunnel_name.operation)
	|| is_set(pcc_address.operation)
	|| is_set(tunnel_name_xr.operation)
	|| (private_lsp_information !=  nullptr && private_lsp_information->has_operation());
}

std::string Pce::TunnelDetailInfos::TunnelDetailInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-detail-info" <<"[peer-address='" <<peer_address <<"']" <<"[plsp-id='" <<plsp_id <<"']" <<"[tunnel-name='" <<tunnel_name <<"']";

    return path_buffer.str();

}

EntityPath Pce::TunnelDetailInfos::TunnelDetailInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-xtc-oper:pce/tunnel-detail-infos/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_address.is_set || is_set(peer_address.operation)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (plsp_id.is_set || is_set(plsp_id.operation)) leaf_name_data.push_back(plsp_id.get_name_leafdata());
    if (tunnel_name.is_set || is_set(tunnel_name.operation)) leaf_name_data.push_back(tunnel_name.get_name_leafdata());
    if (pcc_address.is_set || is_set(pcc_address.operation)) leaf_name_data.push_back(pcc_address.get_name_leafdata());
    if (tunnel_name_xr.is_set || is_set(tunnel_name_xr.operation)) leaf_name_data.push_back(tunnel_name_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::TunnelDetailInfos::TunnelDetailInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "detail-lsp-information")
    {
        for(auto const & c : detail_lsp_information)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation>();
        c->parent = this;
        detail_lsp_information.push_back(std::move(c));
        children[segment_path] = detail_lsp_information.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "private-lsp-information")
    {
        if(private_lsp_information != nullptr)
        {
            children["private-lsp-information"] = private_lsp_information;
        }
        else
        {
            private_lsp_information = std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation>();
            private_lsp_information->parent = this;
            children["private-lsp-information"] = private_lsp_information;
        }
        return children.at("private-lsp-information");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::TunnelDetailInfos::TunnelDetailInfo::get_children()
{
    for (auto const & c : detail_lsp_information)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("private-lsp-information") == children.end())
    {
        if(private_lsp_information != nullptr)
        {
            children["private-lsp-information"] = private_lsp_information;
        }
    }

    return children;
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "peer-address")
    {
        peer_address = value;
    }
    if(value_path == "plsp-id")
    {
        plsp_id = value;
    }
    if(value_path == "tunnel-name")
    {
        tunnel_name = value;
    }
    if(value_path == "pcc-address")
    {
        pcc_address = value;
    }
    if(value_path == "tunnel-name-xr")
    {
        tunnel_name_xr = value;
    }
}

Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::PrivateLspInformation()
{
    yang_name = "private-lsp-information"; yang_parent_name = "tunnel-detail-info";
}

Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::~PrivateLspInformation()
{
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::has_data() const
{
    for (std::size_t index=0; index<event_buffer.size(); index++)
    {
        if(event_buffer[index]->has_data())
            return true;
    }
    return false;
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::has_operation() const
{
    for (std::size_t index=0; index<event_buffer.size(); index++)
    {
        if(event_buffer[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "private-lsp-information";

    return path_buffer.str();

}

EntityPath Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrivateLspInformation' in Cisco_IOS_XR_infra_xtc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "event-buffer")
    {
        for(auto const & c : event_buffer)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer>();
        c->parent = this;
        event_buffer.push_back(std::move(c));
        children[segment_path] = event_buffer.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::get_children()
{
    for (auto const & c : event_buffer)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::set_value(const std::string & value_path, std::string value)
{
}

Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer::EventBuffer()
    :
    event_message{YType::str, "event-message"},
    time_stamp{YType::uint32, "time-stamp"}
{
    yang_name = "event-buffer"; yang_parent_name = "private-lsp-information";
}

Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer::~EventBuffer()
{
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer::has_data() const
{
    return event_message.is_set
	|| time_stamp.is_set;
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer::has_operation() const
{
    return is_set(operation)
	|| is_set(event_message.operation)
	|| is_set(time_stamp.operation);
}

std::string Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event-buffer";

    return path_buffer.str();

}

EntityPath Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EventBuffer' in Cisco_IOS_XR_infra_xtc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_message.is_set || is_set(event_message.operation)) leaf_name_data.push_back(event_message.get_name_leafdata());
    if (time_stamp.is_set || is_set(time_stamp.operation)) leaf_name_data.push_back(time_stamp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer::get_children()
{
    return children;
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::PrivateLspInformation::EventBuffer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "event-message")
    {
        event_message = value;
    }
    if(value_path == "time-stamp")
    {
        time_stamp = value;
    }
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::DetailLspInformation()
    :
    actual_bandwidth{YType::uint64, "actual-bandwidth"},
    actual_bandwidth_specified{YType::boolean, "actual-bandwidth-specified"},
    computing_pce{YType::uint32, "computing-pce"},
    lsp_role{YType::uint32, "lsp-role"},
    reporting_pcc_address{YType::str, "reporting-pcc-address"},
    signaled_bandwidth{YType::uint64, "signaled-bandwidth"},
    signaled_bandwidth_specified{YType::boolean, "signaled-bandwidth-specified"},
    srlg_info{YType::uint32, "srlg-info"},
    state_sync_pce{YType::str, "state-sync-pce"},
    sub_delegated_pce{YType::str, "sub-delegated-pce"}
    	,
    brief_lsp_information(std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation>())
	,er_os(std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs>())
	,lsp_association_info(std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo>())
	,lsp_attributes(std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes>())
	,lsppcep_information(std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation>())
{
    brief_lsp_information->parent = this;
    children["brief-lsp-information"] = brief_lsp_information;

    er_os->parent = this;
    children["er-os"] = er_os;

    lsp_association_info->parent = this;
    children["lsp-association-info"] = lsp_association_info;

    lsp_attributes->parent = this;
    children["lsp-attributes"] = lsp_attributes;

    lsppcep_information->parent = this;
    children["lsppcep-information"] = lsppcep_information;

    yang_name = "detail-lsp-information"; yang_parent_name = "tunnel-detail-info";
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::~DetailLspInformation()
{
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::has_data() const
{
    for (std::size_t index=0; index<rro.size(); index++)
    {
        if(rro[index]->has_data())
            return true;
    }
    for (auto const & leaf : srlg_info.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return actual_bandwidth.is_set
	|| actual_bandwidth_specified.is_set
	|| computing_pce.is_set
	|| lsp_role.is_set
	|| reporting_pcc_address.is_set
	|| signaled_bandwidth.is_set
	|| signaled_bandwidth_specified.is_set
	|| state_sync_pce.is_set
	|| sub_delegated_pce.is_set
	|| (brief_lsp_information !=  nullptr && brief_lsp_information->has_data())
	|| (er_os !=  nullptr && er_os->has_data())
	|| (lsp_association_info !=  nullptr && lsp_association_info->has_data())
	|| (lsp_attributes !=  nullptr && lsp_attributes->has_data())
	|| (lsppcep_information !=  nullptr && lsppcep_information->has_data());
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::has_operation() const
{
    for (std::size_t index=0; index<rro.size(); index++)
    {
        if(rro[index]->has_operation())
            return true;
    }
    for (auto const & leaf : srlg_info.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(actual_bandwidth.operation)
	|| is_set(actual_bandwidth_specified.operation)
	|| is_set(computing_pce.operation)
	|| is_set(lsp_role.operation)
	|| is_set(reporting_pcc_address.operation)
	|| is_set(signaled_bandwidth.operation)
	|| is_set(signaled_bandwidth_specified.operation)
	|| is_set(srlg_info.operation)
	|| is_set(state_sync_pce.operation)
	|| is_set(sub_delegated_pce.operation)
	|| (brief_lsp_information !=  nullptr && brief_lsp_information->has_operation())
	|| (er_os !=  nullptr && er_os->has_operation())
	|| (lsp_association_info !=  nullptr && lsp_association_info->has_operation())
	|| (lsp_attributes !=  nullptr && lsp_attributes->has_operation())
	|| (lsppcep_information !=  nullptr && lsppcep_information->has_operation());
}

std::string Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-lsp-information";

    return path_buffer.str();

}

EntityPath Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DetailLspInformation' in Cisco_IOS_XR_infra_xtc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (actual_bandwidth.is_set || is_set(actual_bandwidth.operation)) leaf_name_data.push_back(actual_bandwidth.get_name_leafdata());
    if (actual_bandwidth_specified.is_set || is_set(actual_bandwidth_specified.operation)) leaf_name_data.push_back(actual_bandwidth_specified.get_name_leafdata());
    if (computing_pce.is_set || is_set(computing_pce.operation)) leaf_name_data.push_back(computing_pce.get_name_leafdata());
    if (lsp_role.is_set || is_set(lsp_role.operation)) leaf_name_data.push_back(lsp_role.get_name_leafdata());
    if (reporting_pcc_address.is_set || is_set(reporting_pcc_address.operation)) leaf_name_data.push_back(reporting_pcc_address.get_name_leafdata());
    if (signaled_bandwidth.is_set || is_set(signaled_bandwidth.operation)) leaf_name_data.push_back(signaled_bandwidth.get_name_leafdata());
    if (signaled_bandwidth_specified.is_set || is_set(signaled_bandwidth_specified.operation)) leaf_name_data.push_back(signaled_bandwidth_specified.get_name_leafdata());
    if (state_sync_pce.is_set || is_set(state_sync_pce.operation)) leaf_name_data.push_back(state_sync_pce.get_name_leafdata());
    if (sub_delegated_pce.is_set || is_set(sub_delegated_pce.operation)) leaf_name_data.push_back(sub_delegated_pce.get_name_leafdata());

    auto srlg_info_name_datas = srlg_info.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), srlg_info_name_datas.begin(), srlg_info_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "brief-lsp-information")
    {
        if(brief_lsp_information != nullptr)
        {
            children["brief-lsp-information"] = brief_lsp_information;
        }
        else
        {
            brief_lsp_information = std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation>();
            brief_lsp_information->parent = this;
            children["brief-lsp-information"] = brief_lsp_information;
        }
        return children.at("brief-lsp-information");
    }

    if(child_yang_name == "er-os")
    {
        if(er_os != nullptr)
        {
            children["er-os"] = er_os;
        }
        else
        {
            er_os = std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs>();
            er_os->parent = this;
            children["er-os"] = er_os;
        }
        return children.at("er-os");
    }

    if(child_yang_name == "lsp-association-info")
    {
        if(lsp_association_info != nullptr)
        {
            children["lsp-association-info"] = lsp_association_info;
        }
        else
        {
            lsp_association_info = std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo>();
            lsp_association_info->parent = this;
            children["lsp-association-info"] = lsp_association_info;
        }
        return children.at("lsp-association-info");
    }

    if(child_yang_name == "lsp-attributes")
    {
        if(lsp_attributes != nullptr)
        {
            children["lsp-attributes"] = lsp_attributes;
        }
        else
        {
            lsp_attributes = std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes>();
            lsp_attributes->parent = this;
            children["lsp-attributes"] = lsp_attributes;
        }
        return children.at("lsp-attributes");
    }

    if(child_yang_name == "lsppcep-information")
    {
        if(lsppcep_information != nullptr)
        {
            children["lsppcep-information"] = lsppcep_information;
        }
        else
        {
            lsppcep_information = std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation>();
            lsppcep_information->parent = this;
            children["lsppcep-information"] = lsppcep_information;
        }
        return children.at("lsppcep-information");
    }

    if(child_yang_name == "rro")
    {
        for(auto const & c : rro)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro>();
        c->parent = this;
        rro.push_back(std::move(c));
        children[segment_path] = rro.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::get_children()
{
    if(children.find("brief-lsp-information") == children.end())
    {
        if(brief_lsp_information != nullptr)
        {
            children["brief-lsp-information"] = brief_lsp_information;
        }
    }

    if(children.find("er-os") == children.end())
    {
        if(er_os != nullptr)
        {
            children["er-os"] = er_os;
        }
    }

    if(children.find("lsp-association-info") == children.end())
    {
        if(lsp_association_info != nullptr)
        {
            children["lsp-association-info"] = lsp_association_info;
        }
    }

    if(children.find("lsp-attributes") == children.end())
    {
        if(lsp_attributes != nullptr)
        {
            children["lsp-attributes"] = lsp_attributes;
        }
    }

    if(children.find("lsppcep-information") == children.end())
    {
        if(lsppcep_information != nullptr)
        {
            children["lsppcep-information"] = lsppcep_information;
        }
    }

    for (auto const & c : rro)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "actual-bandwidth")
    {
        actual_bandwidth = value;
    }
    if(value_path == "actual-bandwidth-specified")
    {
        actual_bandwidth_specified = value;
    }
    if(value_path == "computing-pce")
    {
        computing_pce = value;
    }
    if(value_path == "lsp-role")
    {
        lsp_role = value;
    }
    if(value_path == "reporting-pcc-address")
    {
        reporting_pcc_address = value;
    }
    if(value_path == "signaled-bandwidth")
    {
        signaled_bandwidth = value;
    }
    if(value_path == "signaled-bandwidth-specified")
    {
        signaled_bandwidth_specified = value;
    }
    if(value_path == "srlg-info")
    {
        srlg_info.append(value);
    }
    if(value_path == "state-sync-pce")
    {
        state_sync_pce = value;
    }
    if(value_path == "sub-delegated-pce")
    {
        sub_delegated_pce = value;
    }
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::BriefLspInformation()
    :
    administrative_state{YType::enumeration, "administrative-state"},
    binding_sid{YType::uint32, "binding-sid"},
    destination_address{YType::str, "destination-address"},
    lsp_setup_type{YType::enumeration, "lsp-setup-type"},
    lspid{YType::uint32, "lspid"},
    operational_state{YType::enumeration, "operational-state"},
    source_address{YType::str, "source-address"},
    tunnel_id{YType::uint32, "tunnel-id"}
{
    yang_name = "brief-lsp-information"; yang_parent_name = "detail-lsp-information";
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::~BriefLspInformation()
{
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::has_data() const
{
    return administrative_state.is_set
	|| binding_sid.is_set
	|| destination_address.is_set
	|| lsp_setup_type.is_set
	|| lspid.is_set
	|| operational_state.is_set
	|| source_address.is_set
	|| tunnel_id.is_set;
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(administrative_state.operation)
	|| is_set(binding_sid.operation)
	|| is_set(destination_address.operation)
	|| is_set(lsp_setup_type.operation)
	|| is_set(lspid.operation)
	|| is_set(operational_state.operation)
	|| is_set(source_address.operation)
	|| is_set(tunnel_id.operation);
}

std::string Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "brief-lsp-information";

    return path_buffer.str();

}

EntityPath Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BriefLspInformation' in Cisco_IOS_XR_infra_xtc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (administrative_state.is_set || is_set(administrative_state.operation)) leaf_name_data.push_back(administrative_state.get_name_leafdata());
    if (binding_sid.is_set || is_set(binding_sid.operation)) leaf_name_data.push_back(binding_sid.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (lsp_setup_type.is_set || is_set(lsp_setup_type.operation)) leaf_name_data.push_back(lsp_setup_type.get_name_leafdata());
    if (lspid.is_set || is_set(lspid.operation)) leaf_name_data.push_back(lspid.get_name_leafdata());
    if (operational_state.is_set || is_set(operational_state.operation)) leaf_name_data.push_back(operational_state.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (tunnel_id.is_set || is_set(tunnel_id.operation)) leaf_name_data.push_back(tunnel_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::get_children()
{
    return children;
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::BriefLspInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "administrative-state")
    {
        administrative_state = value;
    }
    if(value_path == "binding-sid")
    {
        binding_sid = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "lsp-setup-type")
    {
        lsp_setup_type = value;
    }
    if(value_path == "lspid")
    {
        lspid = value;
    }
    if(value_path == "operational-state")
    {
        operational_state = value;
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

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ErOs()
    :
    computed_hop_list_time{YType::uint32, "computed-hop-list-time"},
    computed_metric_type{YType::uint32, "computed-metric-type"},
    computed_metric_value{YType::uint32, "computed-metric-value"},
    reported_metric_type{YType::uint32, "reported-metric-type"},
    reported_metric_value{YType::uint32, "reported-metric-value"}
{
    yang_name = "er-os"; yang_parent_name = "detail-lsp-information";
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::~ErOs()
{
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::has_data() const
{
    for (std::size_t index=0; index<computed_rsvp_path.size(); index++)
    {
        if(computed_rsvp_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<computed_sr_path.size(); index++)
    {
        if(computed_sr_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<reported_rsvp_path.size(); index++)
    {
        if(reported_rsvp_path[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<reported_sr_path.size(); index++)
    {
        if(reported_sr_path[index]->has_data())
            return true;
    }
    return computed_hop_list_time.is_set
	|| computed_metric_type.is_set
	|| computed_metric_value.is_set
	|| reported_metric_type.is_set
	|| reported_metric_value.is_set;
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::has_operation() const
{
    for (std::size_t index=0; index<computed_rsvp_path.size(); index++)
    {
        if(computed_rsvp_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<computed_sr_path.size(); index++)
    {
        if(computed_sr_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<reported_rsvp_path.size(); index++)
    {
        if(reported_rsvp_path[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<reported_sr_path.size(); index++)
    {
        if(reported_sr_path[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(computed_hop_list_time.operation)
	|| is_set(computed_metric_type.operation)
	|| is_set(computed_metric_value.operation)
	|| is_set(reported_metric_type.operation)
	|| is_set(reported_metric_value.operation);
}

std::string Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "er-os";

    return path_buffer.str();

}

EntityPath Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ErOs' in Cisco_IOS_XR_infra_xtc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (computed_hop_list_time.is_set || is_set(computed_hop_list_time.operation)) leaf_name_data.push_back(computed_hop_list_time.get_name_leafdata());
    if (computed_metric_type.is_set || is_set(computed_metric_type.operation)) leaf_name_data.push_back(computed_metric_type.get_name_leafdata());
    if (computed_metric_value.is_set || is_set(computed_metric_value.operation)) leaf_name_data.push_back(computed_metric_value.get_name_leafdata());
    if (reported_metric_type.is_set || is_set(reported_metric_type.operation)) leaf_name_data.push_back(reported_metric_type.get_name_leafdata());
    if (reported_metric_value.is_set || is_set(reported_metric_value.operation)) leaf_name_data.push_back(reported_metric_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "computed-rsvp-path")
    {
        for(auto const & c : computed_rsvp_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath>();
        c->parent = this;
        computed_rsvp_path.push_back(std::move(c));
        children[segment_path] = computed_rsvp_path.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "computed-sr-path")
    {
        for(auto const & c : computed_sr_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath>();
        c->parent = this;
        computed_sr_path.push_back(std::move(c));
        children[segment_path] = computed_sr_path.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "reported-rsvp-path")
    {
        for(auto const & c : reported_rsvp_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath>();
        c->parent = this;
        reported_rsvp_path.push_back(std::move(c));
        children[segment_path] = reported_rsvp_path.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "reported-sr-path")
    {
        for(auto const & c : reported_sr_path)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath>();
        c->parent = this;
        reported_sr_path.push_back(std::move(c));
        children[segment_path] = reported_sr_path.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::get_children()
{
    for (auto const & c : computed_rsvp_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : computed_sr_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : reported_rsvp_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : reported_sr_path)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "computed-hop-list-time")
    {
        computed_hop_list_time = value;
    }
    if(value_path == "computed-metric-type")
    {
        computed_metric_type = value;
    }
    if(value_path == "computed-metric-value")
    {
        computed_metric_value = value;
    }
    if(value_path == "reported-metric-type")
    {
        reported_metric_type = value;
    }
    if(value_path == "reported-metric-value")
    {
        reported_metric_value = value;
    }
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath::ReportedRsvpPath()
    :
    hop_address{YType::str, "hop-address"}
{
    yang_name = "reported-rsvp-path"; yang_parent_name = "er-os";
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath::~ReportedRsvpPath()
{
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath::has_data() const
{
    return hop_address.is_set;
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath::has_operation() const
{
    return is_set(operation)
	|| is_set(hop_address.operation);
}

std::string Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reported-rsvp-path";

    return path_buffer.str();

}

EntityPath Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReportedRsvpPath' in Cisco_IOS_XR_infra_xtc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hop_address.is_set || is_set(hop_address.operation)) leaf_name_data.push_back(hop_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath::get_children()
{
    return children;
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedRsvpPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hop-address")
    {
        hop_address = value;
    }
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::ReportedSrPath()
    :
    local_addr{YType::str, "local-addr"},
    mpls_label{YType::uint32, "mpls-label"},
    remote_addr{YType::str, "remote-addr"},
    sid_type{YType::enumeration, "sid-type"}
{
    yang_name = "reported-sr-path"; yang_parent_name = "er-os";
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::~ReportedSrPath()
{
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::has_data() const
{
    return local_addr.is_set
	|| mpls_label.is_set
	|| remote_addr.is_set
	|| sid_type.is_set;
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::has_operation() const
{
    return is_set(operation)
	|| is_set(local_addr.operation)
	|| is_set(mpls_label.operation)
	|| is_set(remote_addr.operation)
	|| is_set(sid_type.operation);
}

std::string Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reported-sr-path";

    return path_buffer.str();

}

EntityPath Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReportedSrPath' in Cisco_IOS_XR_infra_xtc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_addr.is_set || is_set(local_addr.operation)) leaf_name_data.push_back(local_addr.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.operation)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (remote_addr.is_set || is_set(remote_addr.operation)) leaf_name_data.push_back(remote_addr.get_name_leafdata());
    if (sid_type.is_set || is_set(sid_type.operation)) leaf_name_data.push_back(sid_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::get_children()
{
    return children;
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ReportedSrPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-addr")
    {
        local_addr = value;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
    }
    if(value_path == "remote-addr")
    {
        remote_addr = value;
    }
    if(value_path == "sid-type")
    {
        sid_type = value;
    }
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath::ComputedRsvpPath()
    :
    hop_address{YType::str, "hop-address"}
{
    yang_name = "computed-rsvp-path"; yang_parent_name = "er-os";
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath::~ComputedRsvpPath()
{
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath::has_data() const
{
    return hop_address.is_set;
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath::has_operation() const
{
    return is_set(operation)
	|| is_set(hop_address.operation);
}

std::string Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "computed-rsvp-path";

    return path_buffer.str();

}

EntityPath Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ComputedRsvpPath' in Cisco_IOS_XR_infra_xtc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hop_address.is_set || is_set(hop_address.operation)) leaf_name_data.push_back(hop_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath::get_children()
{
    return children;
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedRsvpPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hop-address")
    {
        hop_address = value;
    }
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::ComputedSrPath()
    :
    local_addr{YType::str, "local-addr"},
    mpls_label{YType::uint32, "mpls-label"},
    remote_addr{YType::str, "remote-addr"},
    sid_type{YType::enumeration, "sid-type"}
{
    yang_name = "computed-sr-path"; yang_parent_name = "er-os";
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::~ComputedSrPath()
{
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::has_data() const
{
    return local_addr.is_set
	|| mpls_label.is_set
	|| remote_addr.is_set
	|| sid_type.is_set;
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::has_operation() const
{
    return is_set(operation)
	|| is_set(local_addr.operation)
	|| is_set(mpls_label.operation)
	|| is_set(remote_addr.operation)
	|| is_set(sid_type.operation);
}

std::string Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "computed-sr-path";

    return path_buffer.str();

}

EntityPath Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ComputedSrPath' in Cisco_IOS_XR_infra_xtc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_addr.is_set || is_set(local_addr.operation)) leaf_name_data.push_back(local_addr.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.operation)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (remote_addr.is_set || is_set(remote_addr.operation)) leaf_name_data.push_back(remote_addr.get_name_leafdata());
    if (sid_type.is_set || is_set(sid_type.operation)) leaf_name_data.push_back(sid_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::get_children()
{
    return children;
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::ErOs::ComputedSrPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-addr")
    {
        local_addr = value;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
    }
    if(value_path == "remote-addr")
    {
        remote_addr = value;
    }
    if(value_path == "sid-type")
    {
        sid_type = value;
    }
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::LsppcepInformation()
    :
    pcep_flag_a{YType::boolean, "pcep-flag-a"},
    pcep_flag_d{YType::boolean, "pcep-flag-d"},
    pcep_flag_o{YType::uint8, "pcep-flag-o"},
    pcep_flag_r{YType::boolean, "pcep-flag-r"},
    pcep_flag_s{YType::boolean, "pcep-flag-s"},
    pcepid{YType::uint32, "pcepid"}
    	,
    rsvp_error(std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError>())
{
    rsvp_error->parent = this;
    children["rsvp-error"] = rsvp_error;

    yang_name = "lsppcep-information"; yang_parent_name = "detail-lsp-information";
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::~LsppcepInformation()
{
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::has_data() const
{
    return pcep_flag_a.is_set
	|| pcep_flag_d.is_set
	|| pcep_flag_o.is_set
	|| pcep_flag_r.is_set
	|| pcep_flag_s.is_set
	|| pcepid.is_set
	|| (rsvp_error !=  nullptr && rsvp_error->has_data());
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(pcep_flag_a.operation)
	|| is_set(pcep_flag_d.operation)
	|| is_set(pcep_flag_o.operation)
	|| is_set(pcep_flag_r.operation)
	|| is_set(pcep_flag_s.operation)
	|| is_set(pcepid.operation)
	|| (rsvp_error !=  nullptr && rsvp_error->has_operation());
}

std::string Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsppcep-information";

    return path_buffer.str();

}

EntityPath Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsppcepInformation' in Cisco_IOS_XR_infra_xtc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pcep_flag_a.is_set || is_set(pcep_flag_a.operation)) leaf_name_data.push_back(pcep_flag_a.get_name_leafdata());
    if (pcep_flag_d.is_set || is_set(pcep_flag_d.operation)) leaf_name_data.push_back(pcep_flag_d.get_name_leafdata());
    if (pcep_flag_o.is_set || is_set(pcep_flag_o.operation)) leaf_name_data.push_back(pcep_flag_o.get_name_leafdata());
    if (pcep_flag_r.is_set || is_set(pcep_flag_r.operation)) leaf_name_data.push_back(pcep_flag_r.get_name_leafdata());
    if (pcep_flag_s.is_set || is_set(pcep_flag_s.operation)) leaf_name_data.push_back(pcep_flag_s.get_name_leafdata());
    if (pcepid.is_set || is_set(pcepid.operation)) leaf_name_data.push_back(pcepid.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "rsvp-error")
    {
        if(rsvp_error != nullptr)
        {
            children["rsvp-error"] = rsvp_error;
        }
        else
        {
            rsvp_error = std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError>();
            rsvp_error->parent = this;
            children["rsvp-error"] = rsvp_error;
        }
        return children.at("rsvp-error");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::get_children()
{
    if(children.find("rsvp-error") == children.end())
    {
        if(rsvp_error != nullptr)
        {
            children["rsvp-error"] = rsvp_error;
        }
    }

    return children;
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pcep-flag-a")
    {
        pcep_flag_a = value;
    }
    if(value_path == "pcep-flag-d")
    {
        pcep_flag_d = value;
    }
    if(value_path == "pcep-flag-o")
    {
        pcep_flag_o = value;
    }
    if(value_path == "pcep-flag-r")
    {
        pcep_flag_r = value;
    }
    if(value_path == "pcep-flag-s")
    {
        pcep_flag_s = value;
    }
    if(value_path == "pcepid")
    {
        pcepid = value;
    }
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError::RsvpError()
    :
    error_code{YType::uint8, "error-code"},
    error_flags{YType::uint8, "error-flags"},
    error_value{YType::uint16, "error-value"},
    node_address{YType::str, "node-address"}
{
    yang_name = "rsvp-error"; yang_parent_name = "lsppcep-information";
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError::~RsvpError()
{
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError::has_data() const
{
    return error_code.is_set
	|| error_flags.is_set
	|| error_value.is_set
	|| node_address.is_set;
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError::has_operation() const
{
    return is_set(operation)
	|| is_set(error_code.operation)
	|| is_set(error_flags.operation)
	|| is_set(error_value.operation)
	|| is_set(node_address.operation);
}

std::string Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rsvp-error";

    return path_buffer.str();

}

EntityPath Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RsvpError' in Cisco_IOS_XR_infra_xtc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (error_code.is_set || is_set(error_code.operation)) leaf_name_data.push_back(error_code.get_name_leafdata());
    if (error_flags.is_set || is_set(error_flags.operation)) leaf_name_data.push_back(error_flags.get_name_leafdata());
    if (error_value.is_set || is_set(error_value.operation)) leaf_name_data.push_back(error_value.get_name_leafdata());
    if (node_address.is_set || is_set(node_address.operation)) leaf_name_data.push_back(node_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError::get_children()
{
    return children;
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LsppcepInformation::RsvpError::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "error-code")
    {
        error_code = value;
    }
    if(value_path == "error-flags")
    {
        error_flags = value;
    }
    if(value_path == "error-value")
    {
        error_value = value;
    }
    if(value_path == "node-address")
    {
        node_address = value;
    }
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::LspAssociationInfo()
    :
    association_id{YType::uint32, "association-id"},
    association_source{YType::str, "association-source"},
    association_type{YType::uint32, "association-type"}
{
    yang_name = "lsp-association-info"; yang_parent_name = "detail-lsp-information";
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::~LspAssociationInfo()
{
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::has_data() const
{
    return association_id.is_set
	|| association_source.is_set
	|| association_type.is_set;
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(association_id.operation)
	|| is_set(association_source.operation)
	|| is_set(association_type.operation);
}

std::string Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-association-info";

    return path_buffer.str();

}

EntityPath Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspAssociationInfo' in Cisco_IOS_XR_infra_xtc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (association_id.is_set || is_set(association_id.operation)) leaf_name_data.push_back(association_id.get_name_leafdata());
    if (association_source.is_set || is_set(association_source.operation)) leaf_name_data.push_back(association_source.get_name_leafdata());
    if (association_type.is_set || is_set(association_type.operation)) leaf_name_data.push_back(association_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::get_children()
{
    return children;
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAssociationInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "association-id")
    {
        association_id = value;
    }
    if(value_path == "association-source")
    {
        association_source = value;
    }
    if(value_path == "association-type")
    {
        association_type = value;
    }
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes::LspAttributes()
    :
    affinity_exclude_any{YType::uint32, "affinity-exclude-any"},
    affinity_include_all{YType::uint32, "affinity-include-all"},
    affinity_include_any{YType::uint32, "affinity-include-any"},
    hold_priority{YType::uint8, "hold-priority"},
    local_protection{YType::boolean, "local-protection"},
    setup_priority{YType::uint8, "setup-priority"}
{
    yang_name = "lsp-attributes"; yang_parent_name = "detail-lsp-information";
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes::~LspAttributes()
{
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes::has_data() const
{
    return affinity_exclude_any.is_set
	|| affinity_include_all.is_set
	|| affinity_include_any.is_set
	|| hold_priority.is_set
	|| local_protection.is_set
	|| setup_priority.is_set;
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes::has_operation() const
{
    return is_set(operation)
	|| is_set(affinity_exclude_any.operation)
	|| is_set(affinity_include_all.operation)
	|| is_set(affinity_include_any.operation)
	|| is_set(hold_priority.operation)
	|| is_set(local_protection.operation)
	|| is_set(setup_priority.operation);
}

std::string Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsp-attributes";

    return path_buffer.str();

}

EntityPath Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LspAttributes' in Cisco_IOS_XR_infra_xtc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (affinity_exclude_any.is_set || is_set(affinity_exclude_any.operation)) leaf_name_data.push_back(affinity_exclude_any.get_name_leafdata());
    if (affinity_include_all.is_set || is_set(affinity_include_all.operation)) leaf_name_data.push_back(affinity_include_all.get_name_leafdata());
    if (affinity_include_any.is_set || is_set(affinity_include_any.operation)) leaf_name_data.push_back(affinity_include_any.get_name_leafdata());
    if (hold_priority.is_set || is_set(hold_priority.operation)) leaf_name_data.push_back(hold_priority.get_name_leafdata());
    if (local_protection.is_set || is_set(local_protection.operation)) leaf_name_data.push_back(local_protection.get_name_leafdata());
    if (setup_priority.is_set || is_set(setup_priority.operation)) leaf_name_data.push_back(setup_priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes::get_children()
{
    return children;
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::LspAttributes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "affinity-exclude-any")
    {
        affinity_exclude_any = value;
    }
    if(value_path == "affinity-include-all")
    {
        affinity_include_all = value;
    }
    if(value_path == "affinity-include-any")
    {
        affinity_include_any = value;
    }
    if(value_path == "hold-priority")
    {
        hold_priority = value;
    }
    if(value_path == "local-protection")
    {
        local_protection = value;
    }
    if(value_path == "setup-priority")
    {
        setup_priority = value;
    }
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::Rro()
    :
    flags{YType::uint8, "flags"},
    ipv4_address{YType::str, "ipv4-address"},
    mpls_label{YType::uint32, "mpls-label"},
    rro_type{YType::enumeration, "rro-type"}
    	,
    sr_rro(std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro>())
{
    sr_rro->parent = this;
    children["sr-rro"] = sr_rro;

    yang_name = "rro"; yang_parent_name = "detail-lsp-information";
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::~Rro()
{
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::has_data() const
{
    return flags.is_set
	|| ipv4_address.is_set
	|| mpls_label.is_set
	|| rro_type.is_set
	|| (sr_rro !=  nullptr && sr_rro->has_data());
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::has_operation() const
{
    return is_set(operation)
	|| is_set(flags.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(mpls_label.operation)
	|| is_set(rro_type.operation)
	|| (sr_rro !=  nullptr && sr_rro->has_operation());
}

std::string Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rro";

    return path_buffer.str();

}

EntityPath Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rro' in Cisco_IOS_XR_infra_xtc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.operation)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (rro_type.is_set || is_set(rro_type.operation)) leaf_name_data.push_back(rro_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sr-rro")
    {
        if(sr_rro != nullptr)
        {
            children["sr-rro"] = sr_rro;
        }
        else
        {
            sr_rro = std::make_shared<Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro>();
            sr_rro->parent = this;
            children["sr-rro"] = sr_rro;
        }
        return children.at("sr-rro");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::get_children()
{
    if(children.find("sr-rro") == children.end())
    {
        if(sr_rro != nullptr)
        {
            children["sr-rro"] = sr_rro;
        }
    }

    return children;
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
    }
    if(value_path == "rro-type")
    {
        rro_type = value;
    }
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::SrRro()
    :
    local_addr{YType::str, "local-addr"},
    mpls_label{YType::uint32, "mpls-label"},
    remote_addr{YType::str, "remote-addr"},
    sid_type{YType::enumeration, "sid-type"}
{
    yang_name = "sr-rro"; yang_parent_name = "rro";
}

Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::~SrRro()
{
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::has_data() const
{
    return local_addr.is_set
	|| mpls_label.is_set
	|| remote_addr.is_set
	|| sid_type.is_set;
}

bool Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::has_operation() const
{
    return is_set(operation)
	|| is_set(local_addr.operation)
	|| is_set(mpls_label.operation)
	|| is_set(remote_addr.operation)
	|| is_set(sid_type.operation);
}

std::string Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sr-rro";

    return path_buffer.str();

}

EntityPath Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SrRro' in Cisco_IOS_XR_infra_xtc_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_addr.is_set || is_set(local_addr.operation)) leaf_name_data.push_back(local_addr.get_name_leafdata());
    if (mpls_label.is_set || is_set(mpls_label.operation)) leaf_name_data.push_back(mpls_label.get_name_leafdata());
    if (remote_addr.is_set || is_set(remote_addr.operation)) leaf_name_data.push_back(remote_addr.get_name_leafdata());
    if (sid_type.is_set || is_set(sid_type.operation)) leaf_name_data.push_back(sid_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::get_children()
{
    return children;
}

void Pce::TunnelDetailInfos::TunnelDetailInfo::DetailLspInformation::Rro::SrRro::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-addr")
    {
        local_addr = value;
    }
    if(value_path == "mpls-label")
    {
        mpls_label = value;
    }
    if(value_path == "remote-addr")
    {
        remote_addr = value;
    }
    if(value_path == "sid-type")
    {
        sid_type = value;
    }
}


}
}

