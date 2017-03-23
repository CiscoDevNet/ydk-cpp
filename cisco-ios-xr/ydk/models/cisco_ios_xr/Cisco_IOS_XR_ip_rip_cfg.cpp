
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ip_rip_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ip_rip_cfg {

Rip::Rip()
    :
    default_vrf(std::make_shared<Rip::DefaultVrf>())
	,vrfs(std::make_shared<Rip::Vrfs>())
{
    default_vrf->parent = this;
    children["default-vrf"] = default_vrf;

    vrfs->parent = this;
    children["vrfs"] = vrfs;

    yang_name = "rip"; yang_parent_name = "Cisco-IOS-XR-ip-rip-cfg";
}

Rip::~Rip()
{
}

bool Rip::has_data() const
{
    return (default_vrf !=  nullptr && default_vrf->has_data())
	|| (vrfs !=  nullptr && vrfs->has_data());
}

bool Rip::has_operation() const
{
    return is_set(operation)
	|| (default_vrf !=  nullptr && default_vrf->has_operation())
	|| (vrfs !=  nullptr && vrfs->has_operation());
}

std::string Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-rip-cfg:rip";

    return path_buffer.str();

}

EntityPath Rip::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "default-vrf")
    {
        if(default_vrf != nullptr)
        {
            children["default-vrf"] = default_vrf;
        }
        else
        {
            default_vrf = std::make_shared<Rip::DefaultVrf>();
            default_vrf->parent = this;
            children["default-vrf"] = default_vrf;
        }
        return children.at("default-vrf");
    }

    if(child_yang_name == "vrfs")
    {
        if(vrfs != nullptr)
        {
            children["vrfs"] = vrfs;
        }
        else
        {
            vrfs = std::make_shared<Rip::Vrfs>();
            vrfs->parent = this;
            children["vrfs"] = vrfs;
        }
        return children.at("vrfs");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rip::get_children()
{
    if(children.find("default-vrf") == children.end())
    {
        if(default_vrf != nullptr)
        {
            children["default-vrf"] = default_vrf;
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

void Rip::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Rip::clone_ptr() const
{
    return std::make_shared<Rip>();
}

std::string Rip::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Rip::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Rip::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Rip::DefaultVrf::DefaultVrf()
    :
    auto_summary{YType::empty, "auto-summary"},
    broadcast_for_v2{YType::empty, "broadcast-for-v2"},
    default_metric{YType::uint32, "default-metric"},
    distance{YType::uint32, "distance"},
    enable{YType::empty, "enable"},
    maximum_paths{YType::uint32, "maximum-paths"},
    nsf{YType::empty, "nsf"},
    output_delay{YType::uint32, "output-delay"},
    policy_in{YType::str, "policy-in"},
    policy_out{YType::str, "policy-out"},
    validate_source_disable{YType::empty, "validate-source-disable"}
    	,
    default_information(nullptr) // presence node
	,interfaces(std::make_shared<Rip::DefaultVrf::Interfaces>())
	,ip_distances(std::make_shared<Rip::DefaultVrf::IpDistances>())
	,neighbors(std::make_shared<Rip::DefaultVrf::Neighbors>())
	,redistribution(std::make_shared<Rip::DefaultVrf::Redistribution>())
	,timers(std::make_shared<Rip::DefaultVrf::Timers>())
{
    interfaces->parent = this;
    children["interfaces"] = interfaces;

    ip_distances->parent = this;
    children["ip-distances"] = ip_distances;

    neighbors->parent = this;
    children["neighbors"] = neighbors;

    redistribution->parent = this;
    children["redistribution"] = redistribution;

    timers->parent = this;
    children["timers"] = timers;

    yang_name = "default-vrf"; yang_parent_name = "rip";
}

Rip::DefaultVrf::~DefaultVrf()
{
}

bool Rip::DefaultVrf::has_data() const
{
    return auto_summary.is_set
	|| broadcast_for_v2.is_set
	|| default_metric.is_set
	|| distance.is_set
	|| enable.is_set
	|| maximum_paths.is_set
	|| nsf.is_set
	|| output_delay.is_set
	|| policy_in.is_set
	|| policy_out.is_set
	|| validate_source_disable.is_set
	|| (default_information !=  nullptr && default_information->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (ip_distances !=  nullptr && ip_distances->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (redistribution !=  nullptr && redistribution->has_data())
	|| (timers !=  nullptr && timers->has_data());
}

bool Rip::DefaultVrf::has_operation() const
{
    return is_set(operation)
	|| is_set(auto_summary.operation)
	|| is_set(broadcast_for_v2.operation)
	|| is_set(default_metric.operation)
	|| is_set(distance.operation)
	|| is_set(enable.operation)
	|| is_set(maximum_paths.operation)
	|| is_set(nsf.operation)
	|| is_set(output_delay.operation)
	|| is_set(policy_in.operation)
	|| is_set(policy_out.operation)
	|| is_set(validate_source_disable.operation)
	|| (default_information !=  nullptr && default_information->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (ip_distances !=  nullptr && ip_distances->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (redistribution !=  nullptr && redistribution->has_operation())
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Rip::DefaultVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-vrf";

    return path_buffer.str();

}

EntityPath Rip::DefaultVrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rip-cfg:rip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auto_summary.is_set || is_set(auto_summary.operation)) leaf_name_data.push_back(auto_summary.get_name_leafdata());
    if (broadcast_for_v2.is_set || is_set(broadcast_for_v2.operation)) leaf_name_data.push_back(broadcast_for_v2.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.operation)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (distance.is_set || is_set(distance.operation)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.operation)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());
    if (nsf.is_set || is_set(nsf.operation)) leaf_name_data.push_back(nsf.get_name_leafdata());
    if (output_delay.is_set || is_set(output_delay.operation)) leaf_name_data.push_back(output_delay.get_name_leafdata());
    if (policy_in.is_set || is_set(policy_in.operation)) leaf_name_data.push_back(policy_in.get_name_leafdata());
    if (policy_out.is_set || is_set(policy_out.operation)) leaf_name_data.push_back(policy_out.get_name_leafdata());
    if (validate_source_disable.is_set || is_set(validate_source_disable.operation)) leaf_name_data.push_back(validate_source_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::DefaultVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "default-information")
    {
        if(default_information != nullptr)
        {
            children["default-information"] = default_information;
        }
        else
        {
            default_information = std::make_shared<Rip::DefaultVrf::DefaultInformation>();
            default_information->parent = this;
            children["default-information"] = default_information;
        }
        return children.at("default-information");
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
        else
        {
            interfaces = std::make_shared<Rip::DefaultVrf::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces;
        }
        return children.at("interfaces");
    }

    if(child_yang_name == "ip-distances")
    {
        if(ip_distances != nullptr)
        {
            children["ip-distances"] = ip_distances;
        }
        else
        {
            ip_distances = std::make_shared<Rip::DefaultVrf::IpDistances>();
            ip_distances->parent = this;
            children["ip-distances"] = ip_distances;
        }
        return children.at("ip-distances");
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors != nullptr)
        {
            children["neighbors"] = neighbors;
        }
        else
        {
            neighbors = std::make_shared<Rip::DefaultVrf::Neighbors>();
            neighbors->parent = this;
            children["neighbors"] = neighbors;
        }
        return children.at("neighbors");
    }

    if(child_yang_name == "redistribution")
    {
        if(redistribution != nullptr)
        {
            children["redistribution"] = redistribution;
        }
        else
        {
            redistribution = std::make_shared<Rip::DefaultVrf::Redistribution>();
            redistribution->parent = this;
            children["redistribution"] = redistribution;
        }
        return children.at("redistribution");
    }

    if(child_yang_name == "timers")
    {
        if(timers != nullptr)
        {
            children["timers"] = timers;
        }
        else
        {
            timers = std::make_shared<Rip::DefaultVrf::Timers>();
            timers->parent = this;
            children["timers"] = timers;
        }
        return children.at("timers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rip::DefaultVrf::get_children()
{
    if(children.find("default-information") == children.end())
    {
        if(default_information != nullptr)
        {
            children["default-information"] = default_information;
        }
    }

    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
    }

    if(children.find("ip-distances") == children.end())
    {
        if(ip_distances != nullptr)
        {
            children["ip-distances"] = ip_distances;
        }
    }

    if(children.find("neighbors") == children.end())
    {
        if(neighbors != nullptr)
        {
            children["neighbors"] = neighbors;
        }
    }

    if(children.find("redistribution") == children.end())
    {
        if(redistribution != nullptr)
        {
            children["redistribution"] = redistribution;
        }
    }

    if(children.find("timers") == children.end())
    {
        if(timers != nullptr)
        {
            children["timers"] = timers;
        }
    }

    return children;
}

void Rip::DefaultVrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auto-summary")
    {
        auto_summary = value;
    }
    if(value_path == "broadcast-for-v2")
    {
        broadcast_for_v2 = value;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
    }
    if(value_path == "distance")
    {
        distance = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
    }
    if(value_path == "nsf")
    {
        nsf = value;
    }
    if(value_path == "output-delay")
    {
        output_delay = value;
    }
    if(value_path == "policy-in")
    {
        policy_in = value;
    }
    if(value_path == "policy-out")
    {
        policy_out = value;
    }
    if(value_path == "validate-source-disable")
    {
        validate_source_disable = value;
    }
}

Rip::DefaultVrf::DefaultInformation::DefaultInformation()
    :
    option{YType::enumeration, "option"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "default-information"; yang_parent_name = "default-vrf";
}

Rip::DefaultVrf::DefaultInformation::~DefaultInformation()
{
}

bool Rip::DefaultVrf::DefaultInformation::has_data() const
{
    return option.is_set
	|| route_policy_name.is_set;
}

bool Rip::DefaultVrf::DefaultInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(option.operation)
	|| is_set(route_policy_name.operation);
}

std::string Rip::DefaultVrf::DefaultInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information";

    return path_buffer.str();

}

EntityPath Rip::DefaultVrf::DefaultInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rip-cfg:rip/default-vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option.is_set || is_set(option.operation)) leaf_name_data.push_back(option.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::DefaultVrf::DefaultInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rip::DefaultVrf::DefaultInformation::get_children()
{
    return children;
}

void Rip::DefaultVrf::DefaultInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "option")
    {
        option = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Rip::DefaultVrf::Redistribution::Redistribution()
    :
    bgps(std::make_shared<Rip::DefaultVrf::Redistribution::Bgps>())
	,connected(nullptr) // presence node
	,eigrp_s(std::make_shared<Rip::DefaultVrf::Redistribution::EigrpS>())
	,isises(std::make_shared<Rip::DefaultVrf::Redistribution::Isises>())
	,ospfs(std::make_shared<Rip::DefaultVrf::Redistribution::Ospfs>())
	,static_(nullptr) // presence node
{
    bgps->parent = this;
    children["bgps"] = bgps;

    eigrp_s->parent = this;
    children["eigrp-s"] = eigrp_s;

    isises->parent = this;
    children["isises"] = isises;

    ospfs->parent = this;
    children["ospfs"] = ospfs;

    yang_name = "redistribution"; yang_parent_name = "default-vrf";
}

Rip::DefaultVrf::Redistribution::~Redistribution()
{
}

bool Rip::DefaultVrf::Redistribution::has_data() const
{
    return (bgps !=  nullptr && bgps->has_data())
	|| (connected !=  nullptr && connected->has_data())
	|| (eigrp_s !=  nullptr && eigrp_s->has_data())
	|| (isises !=  nullptr && isises->has_data())
	|| (ospfs !=  nullptr && ospfs->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Rip::DefaultVrf::Redistribution::has_operation() const
{
    return is_set(operation)
	|| (bgps !=  nullptr && bgps->has_operation())
	|| (connected !=  nullptr && connected->has_operation())
	|| (eigrp_s !=  nullptr && eigrp_s->has_operation())
	|| (isises !=  nullptr && isises->has_operation())
	|| (ospfs !=  nullptr && ospfs->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Rip::DefaultVrf::Redistribution::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribution";

    return path_buffer.str();

}

EntityPath Rip::DefaultVrf::Redistribution::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rip-cfg:rip/default-vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::DefaultVrf::Redistribution::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bgps")
    {
        if(bgps != nullptr)
        {
            children["bgps"] = bgps;
        }
        else
        {
            bgps = std::make_shared<Rip::DefaultVrf::Redistribution::Bgps>();
            bgps->parent = this;
            children["bgps"] = bgps;
        }
        return children.at("bgps");
    }

    if(child_yang_name == "connected")
    {
        if(connected != nullptr)
        {
            children["connected"] = connected;
        }
        else
        {
            connected = std::make_shared<Rip::DefaultVrf::Redistribution::Connected>();
            connected->parent = this;
            children["connected"] = connected;
        }
        return children.at("connected");
    }

    if(child_yang_name == "eigrp-s")
    {
        if(eigrp_s != nullptr)
        {
            children["eigrp-s"] = eigrp_s;
        }
        else
        {
            eigrp_s = std::make_shared<Rip::DefaultVrf::Redistribution::EigrpS>();
            eigrp_s->parent = this;
            children["eigrp-s"] = eigrp_s;
        }
        return children.at("eigrp-s");
    }

    if(child_yang_name == "isises")
    {
        if(isises != nullptr)
        {
            children["isises"] = isises;
        }
        else
        {
            isises = std::make_shared<Rip::DefaultVrf::Redistribution::Isises>();
            isises->parent = this;
            children["isises"] = isises;
        }
        return children.at("isises");
    }

    if(child_yang_name == "ospfs")
    {
        if(ospfs != nullptr)
        {
            children["ospfs"] = ospfs;
        }
        else
        {
            ospfs = std::make_shared<Rip::DefaultVrf::Redistribution::Ospfs>();
            ospfs->parent = this;
            children["ospfs"] = ospfs;
        }
        return children.at("ospfs");
    }

    if(child_yang_name == "static")
    {
        if(static_ != nullptr)
        {
            children["static"] = static_;
        }
        else
        {
            static_ = std::make_shared<Rip::DefaultVrf::Redistribution::Static_>();
            static_->parent = this;
            children["static"] = static_;
        }
        return children.at("static");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rip::DefaultVrf::Redistribution::get_children()
{
    if(children.find("bgps") == children.end())
    {
        if(bgps != nullptr)
        {
            children["bgps"] = bgps;
        }
    }

    if(children.find("connected") == children.end())
    {
        if(connected != nullptr)
        {
            children["connected"] = connected;
        }
    }

    if(children.find("eigrp-s") == children.end())
    {
        if(eigrp_s != nullptr)
        {
            children["eigrp-s"] = eigrp_s;
        }
    }

    if(children.find("isises") == children.end())
    {
        if(isises != nullptr)
        {
            children["isises"] = isises;
        }
    }

    if(children.find("ospfs") == children.end())
    {
        if(ospfs != nullptr)
        {
            children["ospfs"] = ospfs;
        }
    }

    if(children.find("static") == children.end())
    {
        if(static_ != nullptr)
        {
            children["static"] = static_;
        }
    }

    return children;
}

void Rip::DefaultVrf::Redistribution::set_value(const std::string & value_path, std::string value)
{
}

Rip::DefaultVrf::Redistribution::Connected::Connected()
    :
    route_policy_name{YType::str, "route-policy-name"},
    route_type{YType::enumeration, "route-type"}
{
    yang_name = "connected"; yang_parent_name = "redistribution";
}

Rip::DefaultVrf::Redistribution::Connected::~Connected()
{
}

bool Rip::DefaultVrf::Redistribution::Connected::has_data() const
{
    return route_policy_name.is_set
	|| route_type.is_set;
}

bool Rip::DefaultVrf::Redistribution::Connected::has_operation() const
{
    return is_set(operation)
	|| is_set(route_policy_name.operation)
	|| is_set(route_type.operation);
}

std::string Rip::DefaultVrf::Redistribution::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";

    return path_buffer.str();

}

EntityPath Rip::DefaultVrf::Redistribution::Connected::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rip-cfg:rip/default-vrf/redistribution/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::DefaultVrf::Redistribution::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rip::DefaultVrf::Redistribution::Connected::get_children()
{
    return children;
}

void Rip::DefaultVrf::Redistribution::Connected::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
}

Rip::DefaultVrf::Redistribution::Bgps::Bgps()
{
    yang_name = "bgps"; yang_parent_name = "redistribution";
}

Rip::DefaultVrf::Redistribution::Bgps::~Bgps()
{
}

bool Rip::DefaultVrf::Redistribution::Bgps::has_data() const
{
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_data())
            return true;
    }
    return false;
}

bool Rip::DefaultVrf::Redistribution::Bgps::has_operation() const
{
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rip::DefaultVrf::Redistribution::Bgps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgps";

    return path_buffer.str();

}

EntityPath Rip::DefaultVrf::Redistribution::Bgps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rip-cfg:rip/default-vrf/redistribution/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::DefaultVrf::Redistribution::Bgps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        for(auto const & c : bgp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Rip::DefaultVrf::Redistribution::Bgps::Bgp>();
        c->parent = this;
        bgp.push_back(std::move(c));
        children[segment_path] = bgp.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rip::DefaultVrf::Redistribution::Bgps::get_children()
{
    for (auto const & c : bgp)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Rip::DefaultVrf::Redistribution::Bgps::set_value(const std::string & value_path, std::string value)
{
}

Rip::DefaultVrf::Redistribution::Bgps::Bgp::Bgp()
    :
    asnxx{YType::uint32, "asnxx"},
    asnyy{YType::uint32, "asnyy"},
    policy{YType::str, "policy"},
    type{YType::enumeration, "type"}
{
    yang_name = "bgp"; yang_parent_name = "bgps";
}

Rip::DefaultVrf::Redistribution::Bgps::Bgp::~Bgp()
{
}

bool Rip::DefaultVrf::Redistribution::Bgps::Bgp::has_data() const
{
    return asnxx.is_set
	|| asnyy.is_set
	|| policy.is_set
	|| type.is_set;
}

bool Rip::DefaultVrf::Redistribution::Bgps::Bgp::has_operation() const
{
    return is_set(operation)
	|| is_set(asnxx.operation)
	|| is_set(asnyy.operation)
	|| is_set(policy.operation)
	|| is_set(type.operation);
}

std::string Rip::DefaultVrf::Redistribution::Bgps::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp" <<"[asnxx='" <<asnxx <<"']" <<"[asnyy='" <<asnyy <<"']";

    return path_buffer.str();

}

EntityPath Rip::DefaultVrf::Redistribution::Bgps::Bgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rip-cfg:rip/default-vrf/redistribution/bgps/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asnxx.is_set || is_set(asnxx.operation)) leaf_name_data.push_back(asnxx.get_name_leafdata());
    if (asnyy.is_set || is_set(asnyy.operation)) leaf_name_data.push_back(asnyy.get_name_leafdata());
    if (policy.is_set || is_set(policy.operation)) leaf_name_data.push_back(policy.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::DefaultVrf::Redistribution::Bgps::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rip::DefaultVrf::Redistribution::Bgps::Bgp::get_children()
{
    return children;
}

void Rip::DefaultVrf::Redistribution::Bgps::Bgp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "asnxx")
    {
        asnxx = value;
    }
    if(value_path == "asnyy")
    {
        asnyy = value;
    }
    if(value_path == "policy")
    {
        policy = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Rip::DefaultVrf::Redistribution::Isises::Isises()
{
    yang_name = "isises"; yang_parent_name = "redistribution";
}

Rip::DefaultVrf::Redistribution::Isises::~Isises()
{
}

bool Rip::DefaultVrf::Redistribution::Isises::has_data() const
{
    for (std::size_t index=0; index<isis.size(); index++)
    {
        if(isis[index]->has_data())
            return true;
    }
    return false;
}

bool Rip::DefaultVrf::Redistribution::Isises::has_operation() const
{
    for (std::size_t index=0; index<isis.size(); index++)
    {
        if(isis[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rip::DefaultVrf::Redistribution::Isises::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isises";

    return path_buffer.str();

}

EntityPath Rip::DefaultVrf::Redistribution::Isises::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rip-cfg:rip/default-vrf/redistribution/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::DefaultVrf::Redistribution::Isises::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "isis")
    {
        for(auto const & c : isis)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Rip::DefaultVrf::Redistribution::Isises::Isis>();
        c->parent = this;
        isis.push_back(std::move(c));
        children[segment_path] = isis.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rip::DefaultVrf::Redistribution::Isises::get_children()
{
    for (auto const & c : isis)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Rip::DefaultVrf::Redistribution::Isises::set_value(const std::string & value_path, std::string value)
{
}

Rip::DefaultVrf::Redistribution::Isises::Isis::Isis()
    :
    isis_name{YType::str, "isis-name"},
    route_policy_name{YType::str, "route-policy-name"},
    route_type{YType::enumeration, "route-type"}
{
    yang_name = "isis"; yang_parent_name = "isises";
}

Rip::DefaultVrf::Redistribution::Isises::Isis::~Isis()
{
}

bool Rip::DefaultVrf::Redistribution::Isises::Isis::has_data() const
{
    return isis_name.is_set
	|| route_policy_name.is_set
	|| route_type.is_set;
}

bool Rip::DefaultVrf::Redistribution::Isises::Isis::has_operation() const
{
    return is_set(operation)
	|| is_set(isis_name.operation)
	|| is_set(route_policy_name.operation)
	|| is_set(route_type.operation);
}

std::string Rip::DefaultVrf::Redistribution::Isises::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis" <<"[isis-name='" <<isis_name <<"']";

    return path_buffer.str();

}

EntityPath Rip::DefaultVrf::Redistribution::Isises::Isis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rip-cfg:rip/default-vrf/redistribution/isises/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_name.is_set || is_set(isis_name.operation)) leaf_name_data.push_back(isis_name.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::DefaultVrf::Redistribution::Isises::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rip::DefaultVrf::Redistribution::Isises::Isis::get_children()
{
    return children;
}

void Rip::DefaultVrf::Redistribution::Isises::Isis::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "isis-name")
    {
        isis_name = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
}

Rip::DefaultVrf::Redistribution::EigrpS::EigrpS()
{
    yang_name = "eigrp-s"; yang_parent_name = "redistribution";
}

Rip::DefaultVrf::Redistribution::EigrpS::~EigrpS()
{
}

bool Rip::DefaultVrf::Redistribution::EigrpS::has_data() const
{
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_data())
            return true;
    }
    return false;
}

bool Rip::DefaultVrf::Redistribution::EigrpS::has_operation() const
{
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rip::DefaultVrf::Redistribution::EigrpS::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp-s";

    return path_buffer.str();

}

EntityPath Rip::DefaultVrf::Redistribution::EigrpS::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rip-cfg:rip/default-vrf/redistribution/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::DefaultVrf::Redistribution::EigrpS::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "eigrp")
    {
        for(auto const & c : eigrp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Rip::DefaultVrf::Redistribution::EigrpS::Eigrp>();
        c->parent = this;
        eigrp.push_back(std::move(c));
        children[segment_path] = eigrp.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rip::DefaultVrf::Redistribution::EigrpS::get_children()
{
    for (auto const & c : eigrp)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Rip::DefaultVrf::Redistribution::EigrpS::set_value(const std::string & value_path, std::string value)
{
}

Rip::DefaultVrf::Redistribution::EigrpS::Eigrp::Eigrp()
    :
    as{YType::uint32, "as"},
    route_policy_name{YType::str, "route-policy-name"},
    route_type{YType::enumeration, "route-type"}
{
    yang_name = "eigrp"; yang_parent_name = "eigrp-s";
}

Rip::DefaultVrf::Redistribution::EigrpS::Eigrp::~Eigrp()
{
}

bool Rip::DefaultVrf::Redistribution::EigrpS::Eigrp::has_data() const
{
    return as.is_set
	|| route_policy_name.is_set
	|| route_type.is_set;
}

bool Rip::DefaultVrf::Redistribution::EigrpS::Eigrp::has_operation() const
{
    return is_set(operation)
	|| is_set(as.operation)
	|| is_set(route_policy_name.operation)
	|| is_set(route_type.operation);
}

std::string Rip::DefaultVrf::Redistribution::EigrpS::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[as='" <<as <<"']";

    return path_buffer.str();

}

EntityPath Rip::DefaultVrf::Redistribution::EigrpS::Eigrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rip-cfg:rip/default-vrf/redistribution/eigrp-s/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.operation)) leaf_name_data.push_back(as.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::DefaultVrf::Redistribution::EigrpS::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rip::DefaultVrf::Redistribution::EigrpS::Eigrp::get_children()
{
    return children;
}

void Rip::DefaultVrf::Redistribution::EigrpS::Eigrp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as")
    {
        as = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
}

Rip::DefaultVrf::Redistribution::Static_::Static_()
    :
    route_policy_name{YType::str, "route-policy-name"},
    route_type{YType::enumeration, "route-type"}
{
    yang_name = "static"; yang_parent_name = "redistribution";
}

Rip::DefaultVrf::Redistribution::Static_::~Static_()
{
}

bool Rip::DefaultVrf::Redistribution::Static_::has_data() const
{
    return route_policy_name.is_set
	|| route_type.is_set;
}

bool Rip::DefaultVrf::Redistribution::Static_::has_operation() const
{
    return is_set(operation)
	|| is_set(route_policy_name.operation)
	|| is_set(route_type.operation);
}

std::string Rip::DefaultVrf::Redistribution::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

EntityPath Rip::DefaultVrf::Redistribution::Static_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rip-cfg:rip/default-vrf/redistribution/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::DefaultVrf::Redistribution::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rip::DefaultVrf::Redistribution::Static_::get_children()
{
    return children;
}

void Rip::DefaultVrf::Redistribution::Static_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
}

Rip::DefaultVrf::Redistribution::Ospfs::Ospfs()
{
    yang_name = "ospfs"; yang_parent_name = "redistribution";
}

Rip::DefaultVrf::Redistribution::Ospfs::~Ospfs()
{
}

bool Rip::DefaultVrf::Redistribution::Ospfs::has_data() const
{
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_data())
            return true;
    }
    return false;
}

bool Rip::DefaultVrf::Redistribution::Ospfs::has_operation() const
{
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rip::DefaultVrf::Redistribution::Ospfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfs";

    return path_buffer.str();

}

EntityPath Rip::DefaultVrf::Redistribution::Ospfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rip-cfg:rip/default-vrf/redistribution/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::DefaultVrf::Redistribution::Ospfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ospf")
    {
        for(auto const & c : ospf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Rip::DefaultVrf::Redistribution::Ospfs::Ospf>();
        c->parent = this;
        ospf.push_back(std::move(c));
        children[segment_path] = ospf.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rip::DefaultVrf::Redistribution::Ospfs::get_children()
{
    for (auto const & c : ospf)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Rip::DefaultVrf::Redistribution::Ospfs::set_value(const std::string & value_path, std::string value)
{
}

Rip::DefaultVrf::Redistribution::Ospfs::Ospf::Ospf()
    :
    ospf_name{YType::str, "ospf-name"},
    external{YType::boolean, "external"},
    external_type{YType::uint32, "external-type"},
    internal{YType::boolean, "internal"},
    nssa_external{YType::boolean, "nssa-external"},
    nssa_external_type{YType::uint32, "nssa-external-type"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "ospf"; yang_parent_name = "ospfs";
}

Rip::DefaultVrf::Redistribution::Ospfs::Ospf::~Ospf()
{
}

bool Rip::DefaultVrf::Redistribution::Ospfs::Ospf::has_data() const
{
    return ospf_name.is_set
	|| external.is_set
	|| external_type.is_set
	|| internal.is_set
	|| nssa_external.is_set
	|| nssa_external_type.is_set
	|| route_policy_name.is_set;
}

bool Rip::DefaultVrf::Redistribution::Ospfs::Ospf::has_operation() const
{
    return is_set(operation)
	|| is_set(ospf_name.operation)
	|| is_set(external.operation)
	|| is_set(external_type.operation)
	|| is_set(internal.operation)
	|| is_set(nssa_external.operation)
	|| is_set(nssa_external_type.operation)
	|| is_set(route_policy_name.operation);
}

std::string Rip::DefaultVrf::Redistribution::Ospfs::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf" <<"[ospf-name='" <<ospf_name <<"']";

    return path_buffer.str();

}

EntityPath Rip::DefaultVrf::Redistribution::Ospfs::Ospf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rip-cfg:rip/default-vrf/redistribution/ospfs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospf_name.is_set || is_set(ospf_name.operation)) leaf_name_data.push_back(ospf_name.get_name_leafdata());
    if (external.is_set || is_set(external.operation)) leaf_name_data.push_back(external.get_name_leafdata());
    if (external_type.is_set || is_set(external_type.operation)) leaf_name_data.push_back(external_type.get_name_leafdata());
    if (internal.is_set || is_set(internal.operation)) leaf_name_data.push_back(internal.get_name_leafdata());
    if (nssa_external.is_set || is_set(nssa_external.operation)) leaf_name_data.push_back(nssa_external.get_name_leafdata());
    if (nssa_external_type.is_set || is_set(nssa_external_type.operation)) leaf_name_data.push_back(nssa_external_type.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::DefaultVrf::Redistribution::Ospfs::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rip::DefaultVrf::Redistribution::Ospfs::Ospf::get_children()
{
    return children;
}

void Rip::DefaultVrf::Redistribution::Ospfs::Ospf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ospf-name")
    {
        ospf_name = value;
    }
    if(value_path == "external")
    {
        external = value;
    }
    if(value_path == "external-type")
    {
        external_type = value;
    }
    if(value_path == "internal")
    {
        internal = value;
    }
    if(value_path == "nssa-external")
    {
        nssa_external = value;
    }
    if(value_path == "nssa-external-type")
    {
        nssa_external_type = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Rip::DefaultVrf::IpDistances::IpDistances()
{
    yang_name = "ip-distances"; yang_parent_name = "default-vrf";
}

Rip::DefaultVrf::IpDistances::~IpDistances()
{
}

bool Rip::DefaultVrf::IpDistances::has_data() const
{
    for (std::size_t index=0; index<ip_distance.size(); index++)
    {
        if(ip_distance[index]->has_data())
            return true;
    }
    return false;
}

bool Rip::DefaultVrf::IpDistances::has_operation() const
{
    for (std::size_t index=0; index<ip_distance.size(); index++)
    {
        if(ip_distance[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rip::DefaultVrf::IpDistances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-distances";

    return path_buffer.str();

}

EntityPath Rip::DefaultVrf::IpDistances::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rip-cfg:rip/default-vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::DefaultVrf::IpDistances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-distance")
    {
        for(auto const & c : ip_distance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Rip::DefaultVrf::IpDistances::IpDistance>();
        c->parent = this;
        ip_distance.push_back(std::move(c));
        children[segment_path] = ip_distance.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rip::DefaultVrf::IpDistances::get_children()
{
    for (auto const & c : ip_distance)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Rip::DefaultVrf::IpDistances::set_value(const std::string & value_path, std::string value)
{
}

Rip::DefaultVrf::IpDistances::IpDistance::IpDistance()
    :
    address{YType::str, "address"},
    netmask{YType::str, "netmask"},
    distance{YType::uint32, "distance"}
{
    yang_name = "ip-distance"; yang_parent_name = "ip-distances";
}

Rip::DefaultVrf::IpDistances::IpDistance::~IpDistance()
{
}

bool Rip::DefaultVrf::IpDistances::IpDistance::has_data() const
{
    return address.is_set
	|| netmask.is_set
	|| distance.is_set;
}

bool Rip::DefaultVrf::IpDistances::IpDistance::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(netmask.operation)
	|| is_set(distance.operation);
}

std::string Rip::DefaultVrf::IpDistances::IpDistance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-distance" <<"[address='" <<address <<"']" <<"[netmask='" <<netmask <<"']";

    return path_buffer.str();

}

EntityPath Rip::DefaultVrf::IpDistances::IpDistance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rip-cfg:rip/default-vrf/ip-distances/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (netmask.is_set || is_set(netmask.operation)) leaf_name_data.push_back(netmask.get_name_leafdata());
    if (distance.is_set || is_set(distance.operation)) leaf_name_data.push_back(distance.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::DefaultVrf::IpDistances::IpDistance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rip::DefaultVrf::IpDistances::IpDistance::get_children()
{
    return children;
}

void Rip::DefaultVrf::IpDistances::IpDistance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "netmask")
    {
        netmask = value;
    }
    if(value_path == "distance")
    {
        distance = value;
    }
}

Rip::DefaultVrf::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "default-vrf";
}

Rip::DefaultVrf::Interfaces::~Interfaces()
{
}

bool Rip::DefaultVrf::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Rip::DefaultVrf::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rip::DefaultVrf::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath Rip::DefaultVrf::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rip-cfg:rip/default-vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::DefaultVrf::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Rip::DefaultVrf::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rip::DefaultVrf::Interfaces::get_children()
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

void Rip::DefaultVrf::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Rip::DefaultVrf::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    accept_metric_zero{YType::empty, "accept-metric-zero"},
    broadcast_for_v2{YType::empty, "broadcast-for-v2"},
    enable{YType::empty, "enable"},
    passive{YType::empty, "passive"},
    poison_reverse{YType::empty, "poison-reverse"},
    policy_in{YType::str, "policy-in"},
    policy_out{YType::str, "policy-out"},
    split_horizon_disable{YType::empty, "split-horizon-disable"}
    	,
    authentication(nullptr) // presence node
	,receive_version(std::make_shared<Rip::DefaultVrf::Interfaces::Interface::ReceiveVersion>())
	,send_version(std::make_shared<Rip::DefaultVrf::Interfaces::Interface::SendVersion>())
	,site_of_origin(std::make_shared<Rip::DefaultVrf::Interfaces::Interface::SiteOfOrigin>())
{
    receive_version->parent = this;
    children["receive-version"] = receive_version;

    send_version->parent = this;
    children["send-version"] = send_version;

    site_of_origin->parent = this;
    children["site-of-origin"] = site_of_origin;

    yang_name = "interface"; yang_parent_name = "interfaces";
}

Rip::DefaultVrf::Interfaces::Interface::~Interface()
{
}

bool Rip::DefaultVrf::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| accept_metric_zero.is_set
	|| broadcast_for_v2.is_set
	|| enable.is_set
	|| passive.is_set
	|| poison_reverse.is_set
	|| policy_in.is_set
	|| policy_out.is_set
	|| split_horizon_disable.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (receive_version !=  nullptr && receive_version->has_data())
	|| (send_version !=  nullptr && send_version->has_data())
	|| (site_of_origin !=  nullptr && site_of_origin->has_data());
}

bool Rip::DefaultVrf::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(accept_metric_zero.operation)
	|| is_set(broadcast_for_v2.operation)
	|| is_set(enable.operation)
	|| is_set(passive.operation)
	|| is_set(poison_reverse.operation)
	|| is_set(policy_in.operation)
	|| is_set(policy_out.operation)
	|| is_set(split_horizon_disable.operation)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (receive_version !=  nullptr && receive_version->has_operation())
	|| (send_version !=  nullptr && send_version->has_operation())
	|| (site_of_origin !=  nullptr && site_of_origin->has_operation());
}

std::string Rip::DefaultVrf::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Rip::DefaultVrf::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rip-cfg:rip/default-vrf/interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (accept_metric_zero.is_set || is_set(accept_metric_zero.operation)) leaf_name_data.push_back(accept_metric_zero.get_name_leafdata());
    if (broadcast_for_v2.is_set || is_set(broadcast_for_v2.operation)) leaf_name_data.push_back(broadcast_for_v2.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (passive.is_set || is_set(passive.operation)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (poison_reverse.is_set || is_set(poison_reverse.operation)) leaf_name_data.push_back(poison_reverse.get_name_leafdata());
    if (policy_in.is_set || is_set(policy_in.operation)) leaf_name_data.push_back(policy_in.get_name_leafdata());
    if (policy_out.is_set || is_set(policy_out.operation)) leaf_name_data.push_back(policy_out.get_name_leafdata());
    if (split_horizon_disable.is_set || is_set(split_horizon_disable.operation)) leaf_name_data.push_back(split_horizon_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::DefaultVrf::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "authentication")
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication;
        }
        else
        {
            authentication = std::make_shared<Rip::DefaultVrf::Interfaces::Interface::Authentication>();
            authentication->parent = this;
            children["authentication"] = authentication;
        }
        return children.at("authentication");
    }

    if(child_yang_name == "receive-version")
    {
        if(receive_version != nullptr)
        {
            children["receive-version"] = receive_version;
        }
        else
        {
            receive_version = std::make_shared<Rip::DefaultVrf::Interfaces::Interface::ReceiveVersion>();
            receive_version->parent = this;
            children["receive-version"] = receive_version;
        }
        return children.at("receive-version");
    }

    if(child_yang_name == "send-version")
    {
        if(send_version != nullptr)
        {
            children["send-version"] = send_version;
        }
        else
        {
            send_version = std::make_shared<Rip::DefaultVrf::Interfaces::Interface::SendVersion>();
            send_version->parent = this;
            children["send-version"] = send_version;
        }
        return children.at("send-version");
    }

    if(child_yang_name == "site-of-origin")
    {
        if(site_of_origin != nullptr)
        {
            children["site-of-origin"] = site_of_origin;
        }
        else
        {
            site_of_origin = std::make_shared<Rip::DefaultVrf::Interfaces::Interface::SiteOfOrigin>();
            site_of_origin->parent = this;
            children["site-of-origin"] = site_of_origin;
        }
        return children.at("site-of-origin");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rip::DefaultVrf::Interfaces::Interface::get_children()
{
    if(children.find("authentication") == children.end())
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication;
        }
    }

    if(children.find("receive-version") == children.end())
    {
        if(receive_version != nullptr)
        {
            children["receive-version"] = receive_version;
        }
    }

    if(children.find("send-version") == children.end())
    {
        if(send_version != nullptr)
        {
            children["send-version"] = send_version;
        }
    }

    if(children.find("site-of-origin") == children.end())
    {
        if(site_of_origin != nullptr)
        {
            children["site-of-origin"] = site_of_origin;
        }
    }

    return children;
}

void Rip::DefaultVrf::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "accept-metric-zero")
    {
        accept_metric_zero = value;
    }
    if(value_path == "broadcast-for-v2")
    {
        broadcast_for_v2 = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "passive")
    {
        passive = value;
    }
    if(value_path == "poison-reverse")
    {
        poison_reverse = value;
    }
    if(value_path == "policy-in")
    {
        policy_in = value;
    }
    if(value_path == "policy-out")
    {
        policy_out = value;
    }
    if(value_path == "split-horizon-disable")
    {
        split_horizon_disable = value;
    }
}

Rip::DefaultVrf::Interfaces::Interface::Authentication::Authentication()
    :
    keychain{YType::str, "keychain"},
    mode{YType::enumeration, "mode"}
{
    yang_name = "authentication"; yang_parent_name = "interface";
}

Rip::DefaultVrf::Interfaces::Interface::Authentication::~Authentication()
{
}

bool Rip::DefaultVrf::Interfaces::Interface::Authentication::has_data() const
{
    return keychain.is_set
	|| mode.is_set;
}

bool Rip::DefaultVrf::Interfaces::Interface::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(keychain.operation)
	|| is_set(mode.operation);
}

std::string Rip::DefaultVrf::Interfaces::Interface::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

EntityPath Rip::DefaultVrf::Interfaces::Interface::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XR_ip_rip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keychain.is_set || is_set(keychain.operation)) leaf_name_data.push_back(keychain.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::DefaultVrf::Interfaces::Interface::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rip::DefaultVrf::Interfaces::Interface::Authentication::get_children()
{
    return children;
}

void Rip::DefaultVrf::Interfaces::Interface::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "keychain")
    {
        keychain = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
}

Rip::DefaultVrf::Interfaces::Interface::SiteOfOrigin::SiteOfOrigin()
    :
    address{YType::str, "address"},
    address_index{YType::uint32, "address-index"},
    as_index{YType::uint32, "as-index"},
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"},
    type{YType::enumeration, "type"}
{
    yang_name = "site-of-origin"; yang_parent_name = "interface";
}

Rip::DefaultVrf::Interfaces::Interface::SiteOfOrigin::~SiteOfOrigin()
{
}

bool Rip::DefaultVrf::Interfaces::Interface::SiteOfOrigin::has_data() const
{
    return address.is_set
	|| address_index.is_set
	|| as_index.is_set
	|| as_xx.is_set
	|| as_yy.is_set
	|| type.is_set;
}

bool Rip::DefaultVrf::Interfaces::Interface::SiteOfOrigin::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(address_index.operation)
	|| is_set(as_index.operation)
	|| is_set(as_xx.operation)
	|| is_set(as_yy.operation)
	|| is_set(type.operation);
}

std::string Rip::DefaultVrf::Interfaces::Interface::SiteOfOrigin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-of-origin";

    return path_buffer.str();

}

EntityPath Rip::DefaultVrf::Interfaces::Interface::SiteOfOrigin::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SiteOfOrigin' in Cisco_IOS_XR_ip_rip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (address_index.is_set || is_set(address_index.operation)) leaf_name_data.push_back(address_index.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.operation)) leaf_name_data.push_back(as_index.get_name_leafdata());
    if (as_xx.is_set || is_set(as_xx.operation)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.operation)) leaf_name_data.push_back(as_yy.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::DefaultVrf::Interfaces::Interface::SiteOfOrigin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rip::DefaultVrf::Interfaces::Interface::SiteOfOrigin::get_children()
{
    return children;
}

void Rip::DefaultVrf::Interfaces::Interface::SiteOfOrigin::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "address-index")
    {
        address_index = value;
    }
    if(value_path == "as-index")
    {
        as_index = value;
    }
    if(value_path == "as-xx")
    {
        as_xx = value;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Rip::DefaultVrf::Interfaces::Interface::ReceiveVersion::ReceiveVersion()
    :
    version1{YType::boolean, "version1"},
    version2{YType::boolean, "version2"}
{
    yang_name = "receive-version"; yang_parent_name = "interface";
}

Rip::DefaultVrf::Interfaces::Interface::ReceiveVersion::~ReceiveVersion()
{
}

bool Rip::DefaultVrf::Interfaces::Interface::ReceiveVersion::has_data() const
{
    return version1.is_set
	|| version2.is_set;
}

bool Rip::DefaultVrf::Interfaces::Interface::ReceiveVersion::has_operation() const
{
    return is_set(operation)
	|| is_set(version1.operation)
	|| is_set(version2.operation);
}

std::string Rip::DefaultVrf::Interfaces::Interface::ReceiveVersion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-version";

    return path_buffer.str();

}

EntityPath Rip::DefaultVrf::Interfaces::Interface::ReceiveVersion::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceiveVersion' in Cisco_IOS_XR_ip_rip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version1.is_set || is_set(version1.operation)) leaf_name_data.push_back(version1.get_name_leafdata());
    if (version2.is_set || is_set(version2.operation)) leaf_name_data.push_back(version2.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::DefaultVrf::Interfaces::Interface::ReceiveVersion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rip::DefaultVrf::Interfaces::Interface::ReceiveVersion::get_children()
{
    return children;
}

void Rip::DefaultVrf::Interfaces::Interface::ReceiveVersion::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "version1")
    {
        version1 = value;
    }
    if(value_path == "version2")
    {
        version2 = value;
    }
}

Rip::DefaultVrf::Interfaces::Interface::SendVersion::SendVersion()
    :
    version1{YType::boolean, "version1"},
    version2{YType::boolean, "version2"}
{
    yang_name = "send-version"; yang_parent_name = "interface";
}

Rip::DefaultVrf::Interfaces::Interface::SendVersion::~SendVersion()
{
}

bool Rip::DefaultVrf::Interfaces::Interface::SendVersion::has_data() const
{
    return version1.is_set
	|| version2.is_set;
}

bool Rip::DefaultVrf::Interfaces::Interface::SendVersion::has_operation() const
{
    return is_set(operation)
	|| is_set(version1.operation)
	|| is_set(version2.operation);
}

std::string Rip::DefaultVrf::Interfaces::Interface::SendVersion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-version";

    return path_buffer.str();

}

EntityPath Rip::DefaultVrf::Interfaces::Interface::SendVersion::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SendVersion' in Cisco_IOS_XR_ip_rip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version1.is_set || is_set(version1.operation)) leaf_name_data.push_back(version1.get_name_leafdata());
    if (version2.is_set || is_set(version2.operation)) leaf_name_data.push_back(version2.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::DefaultVrf::Interfaces::Interface::SendVersion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rip::DefaultVrf::Interfaces::Interface::SendVersion::get_children()
{
    return children;
}

void Rip::DefaultVrf::Interfaces::Interface::SendVersion::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "version1")
    {
        version1 = value;
    }
    if(value_path == "version2")
    {
        version2 = value;
    }
}

Rip::DefaultVrf::Neighbors::Neighbors()
{
    yang_name = "neighbors"; yang_parent_name = "default-vrf";
}

Rip::DefaultVrf::Neighbors::~Neighbors()
{
}

bool Rip::DefaultVrf::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Rip::DefaultVrf::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rip::DefaultVrf::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";

    return path_buffer.str();

}

EntityPath Rip::DefaultVrf::Neighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rip-cfg:rip/default-vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::DefaultVrf::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Rip::DefaultVrf::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(std::move(c));
        children[segment_path] = neighbor.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rip::DefaultVrf::Neighbors::get_children()
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

void Rip::DefaultVrf::Neighbors::set_value(const std::string & value_path, std::string value)
{
}

Rip::DefaultVrf::Neighbors::Neighbor::Neighbor()
    :
    neighbor_address{YType::str, "neighbor-address"}
{
    yang_name = "neighbor"; yang_parent_name = "neighbors";
}

Rip::DefaultVrf::Neighbors::Neighbor::~Neighbor()
{
}

bool Rip::DefaultVrf::Neighbors::Neighbor::has_data() const
{
    return neighbor_address.is_set;
}

bool Rip::DefaultVrf::Neighbors::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(neighbor_address.operation);
}

std::string Rip::DefaultVrf::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[neighbor-address='" <<neighbor_address <<"']";

    return path_buffer.str();

}

EntityPath Rip::DefaultVrf::Neighbors::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rip-cfg:rip/default-vrf/neighbors/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::DefaultVrf::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rip::DefaultVrf::Neighbors::Neighbor::get_children()
{
    return children;
}

void Rip::DefaultVrf::Neighbors::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
}

Rip::DefaultVrf::Timers::Timers()
    :
    flush_timer{YType::uint32, "flush-timer"},
    holddown_timer{YType::uint32, "holddown-timer"},
    invalid_timer{YType::uint32, "invalid-timer"},
    update_timer{YType::uint32, "update-timer"}
{
    yang_name = "timers"; yang_parent_name = "default-vrf";
}

Rip::DefaultVrf::Timers::~Timers()
{
}

bool Rip::DefaultVrf::Timers::has_data() const
{
    return flush_timer.is_set
	|| holddown_timer.is_set
	|| invalid_timer.is_set
	|| update_timer.is_set;
}

bool Rip::DefaultVrf::Timers::has_operation() const
{
    return is_set(operation)
	|| is_set(flush_timer.operation)
	|| is_set(holddown_timer.operation)
	|| is_set(invalid_timer.operation)
	|| is_set(update_timer.operation);
}

std::string Rip::DefaultVrf::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";

    return path_buffer.str();

}

EntityPath Rip::DefaultVrf::Timers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rip-cfg:rip/default-vrf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flush_timer.is_set || is_set(flush_timer.operation)) leaf_name_data.push_back(flush_timer.get_name_leafdata());
    if (holddown_timer.is_set || is_set(holddown_timer.operation)) leaf_name_data.push_back(holddown_timer.get_name_leafdata());
    if (invalid_timer.is_set || is_set(invalid_timer.operation)) leaf_name_data.push_back(invalid_timer.get_name_leafdata());
    if (update_timer.is_set || is_set(update_timer.operation)) leaf_name_data.push_back(update_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::DefaultVrf::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rip::DefaultVrf::Timers::get_children()
{
    return children;
}

void Rip::DefaultVrf::Timers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flush-timer")
    {
        flush_timer = value;
    }
    if(value_path == "holddown-timer")
    {
        holddown_timer = value;
    }
    if(value_path == "invalid-timer")
    {
        invalid_timer = value;
    }
    if(value_path == "update-timer")
    {
        update_timer = value;
    }
}

Rip::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "rip";
}

Rip::Vrfs::~Vrfs()
{
}

bool Rip::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Rip::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rip::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

EntityPath Rip::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rip-cfg:rip/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Rip::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(std::move(c));
        children[segment_path] = vrf.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rip::Vrfs::get_children()
{
    for (auto const & c : vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Rip::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

Rip::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"},
    auto_summary{YType::empty, "auto-summary"},
    broadcast_for_v2{YType::empty, "broadcast-for-v2"},
    default_metric{YType::uint32, "default-metric"},
    distance{YType::uint32, "distance"},
    enable{YType::empty, "enable"},
    maximum_paths{YType::uint32, "maximum-paths"},
    nsf{YType::empty, "nsf"},
    output_delay{YType::uint32, "output-delay"},
    policy_in{YType::str, "policy-in"},
    policy_out{YType::str, "policy-out"},
    validate_source_disable{YType::empty, "validate-source-disable"}
    	,
    default_information(nullptr) // presence node
	,interfaces(std::make_shared<Rip::Vrfs::Vrf::Interfaces>())
	,ip_distances(std::make_shared<Rip::Vrfs::Vrf::IpDistances>())
	,neighbors(std::make_shared<Rip::Vrfs::Vrf::Neighbors>())
	,redistribution(std::make_shared<Rip::Vrfs::Vrf::Redistribution>())
	,timers(std::make_shared<Rip::Vrfs::Vrf::Timers>())
{
    interfaces->parent = this;
    children["interfaces"] = interfaces;

    ip_distances->parent = this;
    children["ip-distances"] = ip_distances;

    neighbors->parent = this;
    children["neighbors"] = neighbors;

    redistribution->parent = this;
    children["redistribution"] = redistribution;

    timers->parent = this;
    children["timers"] = timers;

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

Rip::Vrfs::Vrf::~Vrf()
{
}

bool Rip::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| auto_summary.is_set
	|| broadcast_for_v2.is_set
	|| default_metric.is_set
	|| distance.is_set
	|| enable.is_set
	|| maximum_paths.is_set
	|| nsf.is_set
	|| output_delay.is_set
	|| policy_in.is_set
	|| policy_out.is_set
	|| validate_source_disable.is_set
	|| (default_information !=  nullptr && default_information->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (ip_distances !=  nullptr && ip_distances->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data())
	|| (redistribution !=  nullptr && redistribution->has_data())
	|| (timers !=  nullptr && timers->has_data());
}

bool Rip::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| is_set(auto_summary.operation)
	|| is_set(broadcast_for_v2.operation)
	|| is_set(default_metric.operation)
	|| is_set(distance.operation)
	|| is_set(enable.operation)
	|| is_set(maximum_paths.operation)
	|| is_set(nsf.operation)
	|| is_set(output_delay.operation)
	|| is_set(policy_in.operation)
	|| is_set(policy_out.operation)
	|| is_set(validate_source_disable.operation)
	|| (default_information !=  nullptr && default_information->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (ip_distances !=  nullptr && ip_distances->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (redistribution !=  nullptr && redistribution->has_operation())
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Rip::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

EntityPath Rip::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ip-rip-cfg:rip/vrfs/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (auto_summary.is_set || is_set(auto_summary.operation)) leaf_name_data.push_back(auto_summary.get_name_leafdata());
    if (broadcast_for_v2.is_set || is_set(broadcast_for_v2.operation)) leaf_name_data.push_back(broadcast_for_v2.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.operation)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (distance.is_set || is_set(distance.operation)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.operation)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());
    if (nsf.is_set || is_set(nsf.operation)) leaf_name_data.push_back(nsf.get_name_leafdata());
    if (output_delay.is_set || is_set(output_delay.operation)) leaf_name_data.push_back(output_delay.get_name_leafdata());
    if (policy_in.is_set || is_set(policy_in.operation)) leaf_name_data.push_back(policy_in.get_name_leafdata());
    if (policy_out.is_set || is_set(policy_out.operation)) leaf_name_data.push_back(policy_out.get_name_leafdata());
    if (validate_source_disable.is_set || is_set(validate_source_disable.operation)) leaf_name_data.push_back(validate_source_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "default-information")
    {
        if(default_information != nullptr)
        {
            children["default-information"] = default_information;
        }
        else
        {
            default_information = std::make_shared<Rip::Vrfs::Vrf::DefaultInformation>();
            default_information->parent = this;
            children["default-information"] = default_information;
        }
        return children.at("default-information");
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
        else
        {
            interfaces = std::make_shared<Rip::Vrfs::Vrf::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces;
        }
        return children.at("interfaces");
    }

    if(child_yang_name == "ip-distances")
    {
        if(ip_distances != nullptr)
        {
            children["ip-distances"] = ip_distances;
        }
        else
        {
            ip_distances = std::make_shared<Rip::Vrfs::Vrf::IpDistances>();
            ip_distances->parent = this;
            children["ip-distances"] = ip_distances;
        }
        return children.at("ip-distances");
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors != nullptr)
        {
            children["neighbors"] = neighbors;
        }
        else
        {
            neighbors = std::make_shared<Rip::Vrfs::Vrf::Neighbors>();
            neighbors->parent = this;
            children["neighbors"] = neighbors;
        }
        return children.at("neighbors");
    }

    if(child_yang_name == "redistribution")
    {
        if(redistribution != nullptr)
        {
            children["redistribution"] = redistribution;
        }
        else
        {
            redistribution = std::make_shared<Rip::Vrfs::Vrf::Redistribution>();
            redistribution->parent = this;
            children["redistribution"] = redistribution;
        }
        return children.at("redistribution");
    }

    if(child_yang_name == "timers")
    {
        if(timers != nullptr)
        {
            children["timers"] = timers;
        }
        else
        {
            timers = std::make_shared<Rip::Vrfs::Vrf::Timers>();
            timers->parent = this;
            children["timers"] = timers;
        }
        return children.at("timers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rip::Vrfs::Vrf::get_children()
{
    if(children.find("default-information") == children.end())
    {
        if(default_information != nullptr)
        {
            children["default-information"] = default_information;
        }
    }

    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
    }

    if(children.find("ip-distances") == children.end())
    {
        if(ip_distances != nullptr)
        {
            children["ip-distances"] = ip_distances;
        }
    }

    if(children.find("neighbors") == children.end())
    {
        if(neighbors != nullptr)
        {
            children["neighbors"] = neighbors;
        }
    }

    if(children.find("redistribution") == children.end())
    {
        if(redistribution != nullptr)
        {
            children["redistribution"] = redistribution;
        }
    }

    if(children.find("timers") == children.end())
    {
        if(timers != nullptr)
        {
            children["timers"] = timers;
        }
    }

    return children;
}

void Rip::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "auto-summary")
    {
        auto_summary = value;
    }
    if(value_path == "broadcast-for-v2")
    {
        broadcast_for_v2 = value;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
    }
    if(value_path == "distance")
    {
        distance = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
    }
    if(value_path == "nsf")
    {
        nsf = value;
    }
    if(value_path == "output-delay")
    {
        output_delay = value;
    }
    if(value_path == "policy-in")
    {
        policy_in = value;
    }
    if(value_path == "policy-out")
    {
        policy_out = value;
    }
    if(value_path == "validate-source-disable")
    {
        validate_source_disable = value;
    }
}

Rip::Vrfs::Vrf::DefaultInformation::DefaultInformation()
    :
    option{YType::enumeration, "option"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "default-information"; yang_parent_name = "vrf";
}

Rip::Vrfs::Vrf::DefaultInformation::~DefaultInformation()
{
}

bool Rip::Vrfs::Vrf::DefaultInformation::has_data() const
{
    return option.is_set
	|| route_policy_name.is_set;
}

bool Rip::Vrfs::Vrf::DefaultInformation::has_operation() const
{
    return is_set(operation)
	|| is_set(option.operation)
	|| is_set(route_policy_name.operation);
}

std::string Rip::Vrfs::Vrf::DefaultInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information";

    return path_buffer.str();

}

EntityPath Rip::Vrfs::Vrf::DefaultInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DefaultInformation' in Cisco_IOS_XR_ip_rip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (option.is_set || is_set(option.operation)) leaf_name_data.push_back(option.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::DefaultInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rip::Vrfs::Vrf::DefaultInformation::get_children()
{
    return children;
}

void Rip::Vrfs::Vrf::DefaultInformation::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "option")
    {
        option = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Rip::Vrfs::Vrf::Redistribution::Redistribution()
    :
    bgps(std::make_shared<Rip::Vrfs::Vrf::Redistribution::Bgps>())
	,connected(nullptr) // presence node
	,eigrp_s(std::make_shared<Rip::Vrfs::Vrf::Redistribution::EigrpS>())
	,isises(std::make_shared<Rip::Vrfs::Vrf::Redistribution::Isises>())
	,ospfs(std::make_shared<Rip::Vrfs::Vrf::Redistribution::Ospfs>())
	,static_(nullptr) // presence node
{
    bgps->parent = this;
    children["bgps"] = bgps;

    eigrp_s->parent = this;
    children["eigrp-s"] = eigrp_s;

    isises->parent = this;
    children["isises"] = isises;

    ospfs->parent = this;
    children["ospfs"] = ospfs;

    yang_name = "redistribution"; yang_parent_name = "vrf";
}

Rip::Vrfs::Vrf::Redistribution::~Redistribution()
{
}

bool Rip::Vrfs::Vrf::Redistribution::has_data() const
{
    return (bgps !=  nullptr && bgps->has_data())
	|| (connected !=  nullptr && connected->has_data())
	|| (eigrp_s !=  nullptr && eigrp_s->has_data())
	|| (isises !=  nullptr && isises->has_data())
	|| (ospfs !=  nullptr && ospfs->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Rip::Vrfs::Vrf::Redistribution::has_operation() const
{
    return is_set(operation)
	|| (bgps !=  nullptr && bgps->has_operation())
	|| (connected !=  nullptr && connected->has_operation())
	|| (eigrp_s !=  nullptr && eigrp_s->has_operation())
	|| (isises !=  nullptr && isises->has_operation())
	|| (ospfs !=  nullptr && ospfs->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Rip::Vrfs::Vrf::Redistribution::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribution";

    return path_buffer.str();

}

EntityPath Rip::Vrfs::Vrf::Redistribution::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redistribution' in Cisco_IOS_XR_ip_rip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::Redistribution::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bgps")
    {
        if(bgps != nullptr)
        {
            children["bgps"] = bgps;
        }
        else
        {
            bgps = std::make_shared<Rip::Vrfs::Vrf::Redistribution::Bgps>();
            bgps->parent = this;
            children["bgps"] = bgps;
        }
        return children.at("bgps");
    }

    if(child_yang_name == "connected")
    {
        if(connected != nullptr)
        {
            children["connected"] = connected;
        }
        else
        {
            connected = std::make_shared<Rip::Vrfs::Vrf::Redistribution::Connected>();
            connected->parent = this;
            children["connected"] = connected;
        }
        return children.at("connected");
    }

    if(child_yang_name == "eigrp-s")
    {
        if(eigrp_s != nullptr)
        {
            children["eigrp-s"] = eigrp_s;
        }
        else
        {
            eigrp_s = std::make_shared<Rip::Vrfs::Vrf::Redistribution::EigrpS>();
            eigrp_s->parent = this;
            children["eigrp-s"] = eigrp_s;
        }
        return children.at("eigrp-s");
    }

    if(child_yang_name == "isises")
    {
        if(isises != nullptr)
        {
            children["isises"] = isises;
        }
        else
        {
            isises = std::make_shared<Rip::Vrfs::Vrf::Redistribution::Isises>();
            isises->parent = this;
            children["isises"] = isises;
        }
        return children.at("isises");
    }

    if(child_yang_name == "ospfs")
    {
        if(ospfs != nullptr)
        {
            children["ospfs"] = ospfs;
        }
        else
        {
            ospfs = std::make_shared<Rip::Vrfs::Vrf::Redistribution::Ospfs>();
            ospfs->parent = this;
            children["ospfs"] = ospfs;
        }
        return children.at("ospfs");
    }

    if(child_yang_name == "static")
    {
        if(static_ != nullptr)
        {
            children["static"] = static_;
        }
        else
        {
            static_ = std::make_shared<Rip::Vrfs::Vrf::Redistribution::Static_>();
            static_->parent = this;
            children["static"] = static_;
        }
        return children.at("static");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rip::Vrfs::Vrf::Redistribution::get_children()
{
    if(children.find("bgps") == children.end())
    {
        if(bgps != nullptr)
        {
            children["bgps"] = bgps;
        }
    }

    if(children.find("connected") == children.end())
    {
        if(connected != nullptr)
        {
            children["connected"] = connected;
        }
    }

    if(children.find("eigrp-s") == children.end())
    {
        if(eigrp_s != nullptr)
        {
            children["eigrp-s"] = eigrp_s;
        }
    }

    if(children.find("isises") == children.end())
    {
        if(isises != nullptr)
        {
            children["isises"] = isises;
        }
    }

    if(children.find("ospfs") == children.end())
    {
        if(ospfs != nullptr)
        {
            children["ospfs"] = ospfs;
        }
    }

    if(children.find("static") == children.end())
    {
        if(static_ != nullptr)
        {
            children["static"] = static_;
        }
    }

    return children;
}

void Rip::Vrfs::Vrf::Redistribution::set_value(const std::string & value_path, std::string value)
{
}

Rip::Vrfs::Vrf::Redistribution::Connected::Connected()
    :
    route_policy_name{YType::str, "route-policy-name"},
    route_type{YType::enumeration, "route-type"}
{
    yang_name = "connected"; yang_parent_name = "redistribution";
}

Rip::Vrfs::Vrf::Redistribution::Connected::~Connected()
{
}

bool Rip::Vrfs::Vrf::Redistribution::Connected::has_data() const
{
    return route_policy_name.is_set
	|| route_type.is_set;
}

bool Rip::Vrfs::Vrf::Redistribution::Connected::has_operation() const
{
    return is_set(operation)
	|| is_set(route_policy_name.operation)
	|| is_set(route_type.operation);
}

std::string Rip::Vrfs::Vrf::Redistribution::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";

    return path_buffer.str();

}

EntityPath Rip::Vrfs::Vrf::Redistribution::Connected::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Connected' in Cisco_IOS_XR_ip_rip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::Redistribution::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rip::Vrfs::Vrf::Redistribution::Connected::get_children()
{
    return children;
}

void Rip::Vrfs::Vrf::Redistribution::Connected::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
}

Rip::Vrfs::Vrf::Redistribution::Bgps::Bgps()
{
    yang_name = "bgps"; yang_parent_name = "redistribution";
}

Rip::Vrfs::Vrf::Redistribution::Bgps::~Bgps()
{
}

bool Rip::Vrfs::Vrf::Redistribution::Bgps::has_data() const
{
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_data())
            return true;
    }
    return false;
}

bool Rip::Vrfs::Vrf::Redistribution::Bgps::has_operation() const
{
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rip::Vrfs::Vrf::Redistribution::Bgps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgps";

    return path_buffer.str();

}

EntityPath Rip::Vrfs::Vrf::Redistribution::Bgps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bgps' in Cisco_IOS_XR_ip_rip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::Redistribution::Bgps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        for(auto const & c : bgp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Rip::Vrfs::Vrf::Redistribution::Bgps::Bgp>();
        c->parent = this;
        bgp.push_back(std::move(c));
        children[segment_path] = bgp.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rip::Vrfs::Vrf::Redistribution::Bgps::get_children()
{
    for (auto const & c : bgp)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Rip::Vrfs::Vrf::Redistribution::Bgps::set_value(const std::string & value_path, std::string value)
{
}

Rip::Vrfs::Vrf::Redistribution::Bgps::Bgp::Bgp()
    :
    asnxx{YType::uint32, "asnxx"},
    asnyy{YType::uint32, "asnyy"},
    policy{YType::str, "policy"},
    type{YType::enumeration, "type"}
{
    yang_name = "bgp"; yang_parent_name = "bgps";
}

Rip::Vrfs::Vrf::Redistribution::Bgps::Bgp::~Bgp()
{
}

bool Rip::Vrfs::Vrf::Redistribution::Bgps::Bgp::has_data() const
{
    return asnxx.is_set
	|| asnyy.is_set
	|| policy.is_set
	|| type.is_set;
}

bool Rip::Vrfs::Vrf::Redistribution::Bgps::Bgp::has_operation() const
{
    return is_set(operation)
	|| is_set(asnxx.operation)
	|| is_set(asnyy.operation)
	|| is_set(policy.operation)
	|| is_set(type.operation);
}

std::string Rip::Vrfs::Vrf::Redistribution::Bgps::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp" <<"[asnxx='" <<asnxx <<"']" <<"[asnyy='" <<asnyy <<"']";

    return path_buffer.str();

}

EntityPath Rip::Vrfs::Vrf::Redistribution::Bgps::Bgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bgp' in Cisco_IOS_XR_ip_rip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asnxx.is_set || is_set(asnxx.operation)) leaf_name_data.push_back(asnxx.get_name_leafdata());
    if (asnyy.is_set || is_set(asnyy.operation)) leaf_name_data.push_back(asnyy.get_name_leafdata());
    if (policy.is_set || is_set(policy.operation)) leaf_name_data.push_back(policy.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::Redistribution::Bgps::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rip::Vrfs::Vrf::Redistribution::Bgps::Bgp::get_children()
{
    return children;
}

void Rip::Vrfs::Vrf::Redistribution::Bgps::Bgp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "asnxx")
    {
        asnxx = value;
    }
    if(value_path == "asnyy")
    {
        asnyy = value;
    }
    if(value_path == "policy")
    {
        policy = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Rip::Vrfs::Vrf::Redistribution::Isises::Isises()
{
    yang_name = "isises"; yang_parent_name = "redistribution";
}

Rip::Vrfs::Vrf::Redistribution::Isises::~Isises()
{
}

bool Rip::Vrfs::Vrf::Redistribution::Isises::has_data() const
{
    for (std::size_t index=0; index<isis.size(); index++)
    {
        if(isis[index]->has_data())
            return true;
    }
    return false;
}

bool Rip::Vrfs::Vrf::Redistribution::Isises::has_operation() const
{
    for (std::size_t index=0; index<isis.size(); index++)
    {
        if(isis[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rip::Vrfs::Vrf::Redistribution::Isises::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isises";

    return path_buffer.str();

}

EntityPath Rip::Vrfs::Vrf::Redistribution::Isises::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Isises' in Cisco_IOS_XR_ip_rip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::Redistribution::Isises::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "isis")
    {
        for(auto const & c : isis)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Rip::Vrfs::Vrf::Redistribution::Isises::Isis>();
        c->parent = this;
        isis.push_back(std::move(c));
        children[segment_path] = isis.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rip::Vrfs::Vrf::Redistribution::Isises::get_children()
{
    for (auto const & c : isis)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Rip::Vrfs::Vrf::Redistribution::Isises::set_value(const std::string & value_path, std::string value)
{
}

Rip::Vrfs::Vrf::Redistribution::Isises::Isis::Isis()
    :
    isis_name{YType::str, "isis-name"},
    route_policy_name{YType::str, "route-policy-name"},
    route_type{YType::enumeration, "route-type"}
{
    yang_name = "isis"; yang_parent_name = "isises";
}

Rip::Vrfs::Vrf::Redistribution::Isises::Isis::~Isis()
{
}

bool Rip::Vrfs::Vrf::Redistribution::Isises::Isis::has_data() const
{
    return isis_name.is_set
	|| route_policy_name.is_set
	|| route_type.is_set;
}

bool Rip::Vrfs::Vrf::Redistribution::Isises::Isis::has_operation() const
{
    return is_set(operation)
	|| is_set(isis_name.operation)
	|| is_set(route_policy_name.operation)
	|| is_set(route_type.operation);
}

std::string Rip::Vrfs::Vrf::Redistribution::Isises::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis" <<"[isis-name='" <<isis_name <<"']";

    return path_buffer.str();

}

EntityPath Rip::Vrfs::Vrf::Redistribution::Isises::Isis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Isis' in Cisco_IOS_XR_ip_rip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_name.is_set || is_set(isis_name.operation)) leaf_name_data.push_back(isis_name.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::Redistribution::Isises::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rip::Vrfs::Vrf::Redistribution::Isises::Isis::get_children()
{
    return children;
}

void Rip::Vrfs::Vrf::Redistribution::Isises::Isis::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "isis-name")
    {
        isis_name = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
}

Rip::Vrfs::Vrf::Redistribution::EigrpS::EigrpS()
{
    yang_name = "eigrp-s"; yang_parent_name = "redistribution";
}

Rip::Vrfs::Vrf::Redistribution::EigrpS::~EigrpS()
{
}

bool Rip::Vrfs::Vrf::Redistribution::EigrpS::has_data() const
{
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_data())
            return true;
    }
    return false;
}

bool Rip::Vrfs::Vrf::Redistribution::EigrpS::has_operation() const
{
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rip::Vrfs::Vrf::Redistribution::EigrpS::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp-s";

    return path_buffer.str();

}

EntityPath Rip::Vrfs::Vrf::Redistribution::EigrpS::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EigrpS' in Cisco_IOS_XR_ip_rip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::Redistribution::EigrpS::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "eigrp")
    {
        for(auto const & c : eigrp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Rip::Vrfs::Vrf::Redistribution::EigrpS::Eigrp>();
        c->parent = this;
        eigrp.push_back(std::move(c));
        children[segment_path] = eigrp.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rip::Vrfs::Vrf::Redistribution::EigrpS::get_children()
{
    for (auto const & c : eigrp)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Rip::Vrfs::Vrf::Redistribution::EigrpS::set_value(const std::string & value_path, std::string value)
{
}

Rip::Vrfs::Vrf::Redistribution::EigrpS::Eigrp::Eigrp()
    :
    as{YType::uint32, "as"},
    route_policy_name{YType::str, "route-policy-name"},
    route_type{YType::enumeration, "route-type"}
{
    yang_name = "eigrp"; yang_parent_name = "eigrp-s";
}

Rip::Vrfs::Vrf::Redistribution::EigrpS::Eigrp::~Eigrp()
{
}

bool Rip::Vrfs::Vrf::Redistribution::EigrpS::Eigrp::has_data() const
{
    return as.is_set
	|| route_policy_name.is_set
	|| route_type.is_set;
}

bool Rip::Vrfs::Vrf::Redistribution::EigrpS::Eigrp::has_operation() const
{
    return is_set(operation)
	|| is_set(as.operation)
	|| is_set(route_policy_name.operation)
	|| is_set(route_type.operation);
}

std::string Rip::Vrfs::Vrf::Redistribution::EigrpS::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[as='" <<as <<"']";

    return path_buffer.str();

}

EntityPath Rip::Vrfs::Vrf::Redistribution::EigrpS::Eigrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eigrp' in Cisco_IOS_XR_ip_rip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as.is_set || is_set(as.operation)) leaf_name_data.push_back(as.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::Redistribution::EigrpS::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rip::Vrfs::Vrf::Redistribution::EigrpS::Eigrp::get_children()
{
    return children;
}

void Rip::Vrfs::Vrf::Redistribution::EigrpS::Eigrp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "as")
    {
        as = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
}

Rip::Vrfs::Vrf::Redistribution::Static_::Static_()
    :
    route_policy_name{YType::str, "route-policy-name"},
    route_type{YType::enumeration, "route-type"}
{
    yang_name = "static"; yang_parent_name = "redistribution";
}

Rip::Vrfs::Vrf::Redistribution::Static_::~Static_()
{
}

bool Rip::Vrfs::Vrf::Redistribution::Static_::has_data() const
{
    return route_policy_name.is_set
	|| route_type.is_set;
}

bool Rip::Vrfs::Vrf::Redistribution::Static_::has_operation() const
{
    return is_set(operation)
	|| is_set(route_policy_name.operation)
	|| is_set(route_type.operation);
}

std::string Rip::Vrfs::Vrf::Redistribution::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

EntityPath Rip::Vrfs::Vrf::Redistribution::Static_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Static_' in Cisco_IOS_XR_ip_rip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (route_type.is_set || is_set(route_type.operation)) leaf_name_data.push_back(route_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::Redistribution::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rip::Vrfs::Vrf::Redistribution::Static_::get_children()
{
    return children;
}

void Rip::Vrfs::Vrf::Redistribution::Static_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "route-type")
    {
        route_type = value;
    }
}

Rip::Vrfs::Vrf::Redistribution::Ospfs::Ospfs()
{
    yang_name = "ospfs"; yang_parent_name = "redistribution";
}

Rip::Vrfs::Vrf::Redistribution::Ospfs::~Ospfs()
{
}

bool Rip::Vrfs::Vrf::Redistribution::Ospfs::has_data() const
{
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_data())
            return true;
    }
    return false;
}

bool Rip::Vrfs::Vrf::Redistribution::Ospfs::has_operation() const
{
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rip::Vrfs::Vrf::Redistribution::Ospfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfs";

    return path_buffer.str();

}

EntityPath Rip::Vrfs::Vrf::Redistribution::Ospfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ospfs' in Cisco_IOS_XR_ip_rip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::Redistribution::Ospfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ospf")
    {
        for(auto const & c : ospf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Rip::Vrfs::Vrf::Redistribution::Ospfs::Ospf>();
        c->parent = this;
        ospf.push_back(std::move(c));
        children[segment_path] = ospf.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rip::Vrfs::Vrf::Redistribution::Ospfs::get_children()
{
    for (auto const & c : ospf)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Rip::Vrfs::Vrf::Redistribution::Ospfs::set_value(const std::string & value_path, std::string value)
{
}

Rip::Vrfs::Vrf::Redistribution::Ospfs::Ospf::Ospf()
    :
    ospf_name{YType::str, "ospf-name"},
    external{YType::boolean, "external"},
    external_type{YType::uint32, "external-type"},
    internal{YType::boolean, "internal"},
    nssa_external{YType::boolean, "nssa-external"},
    nssa_external_type{YType::uint32, "nssa-external-type"},
    route_policy_name{YType::str, "route-policy-name"}
{
    yang_name = "ospf"; yang_parent_name = "ospfs";
}

Rip::Vrfs::Vrf::Redistribution::Ospfs::Ospf::~Ospf()
{
}

bool Rip::Vrfs::Vrf::Redistribution::Ospfs::Ospf::has_data() const
{
    return ospf_name.is_set
	|| external.is_set
	|| external_type.is_set
	|| internal.is_set
	|| nssa_external.is_set
	|| nssa_external_type.is_set
	|| route_policy_name.is_set;
}

bool Rip::Vrfs::Vrf::Redistribution::Ospfs::Ospf::has_operation() const
{
    return is_set(operation)
	|| is_set(ospf_name.operation)
	|| is_set(external.operation)
	|| is_set(external_type.operation)
	|| is_set(internal.operation)
	|| is_set(nssa_external.operation)
	|| is_set(nssa_external_type.operation)
	|| is_set(route_policy_name.operation);
}

std::string Rip::Vrfs::Vrf::Redistribution::Ospfs::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf" <<"[ospf-name='" <<ospf_name <<"']";

    return path_buffer.str();

}

EntityPath Rip::Vrfs::Vrf::Redistribution::Ospfs::Ospf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ospf' in Cisco_IOS_XR_ip_rip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospf_name.is_set || is_set(ospf_name.operation)) leaf_name_data.push_back(ospf_name.get_name_leafdata());
    if (external.is_set || is_set(external.operation)) leaf_name_data.push_back(external.get_name_leafdata());
    if (external_type.is_set || is_set(external_type.operation)) leaf_name_data.push_back(external_type.get_name_leafdata());
    if (internal.is_set || is_set(internal.operation)) leaf_name_data.push_back(internal.get_name_leafdata());
    if (nssa_external.is_set || is_set(nssa_external.operation)) leaf_name_data.push_back(nssa_external.get_name_leafdata());
    if (nssa_external_type.is_set || is_set(nssa_external_type.operation)) leaf_name_data.push_back(nssa_external_type.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::Redistribution::Ospfs::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rip::Vrfs::Vrf::Redistribution::Ospfs::Ospf::get_children()
{
    return children;
}

void Rip::Vrfs::Vrf::Redistribution::Ospfs::Ospf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ospf-name")
    {
        ospf_name = value;
    }
    if(value_path == "external")
    {
        external = value;
    }
    if(value_path == "external-type")
    {
        external_type = value;
    }
    if(value_path == "internal")
    {
        internal = value;
    }
    if(value_path == "nssa-external")
    {
        nssa_external = value;
    }
    if(value_path == "nssa-external-type")
    {
        nssa_external_type = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
}

Rip::Vrfs::Vrf::IpDistances::IpDistances()
{
    yang_name = "ip-distances"; yang_parent_name = "vrf";
}

Rip::Vrfs::Vrf::IpDistances::~IpDistances()
{
}

bool Rip::Vrfs::Vrf::IpDistances::has_data() const
{
    for (std::size_t index=0; index<ip_distance.size(); index++)
    {
        if(ip_distance[index]->has_data())
            return true;
    }
    return false;
}

bool Rip::Vrfs::Vrf::IpDistances::has_operation() const
{
    for (std::size_t index=0; index<ip_distance.size(); index++)
    {
        if(ip_distance[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rip::Vrfs::Vrf::IpDistances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-distances";

    return path_buffer.str();

}

EntityPath Rip::Vrfs::Vrf::IpDistances::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpDistances' in Cisco_IOS_XR_ip_rip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::IpDistances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ip-distance")
    {
        for(auto const & c : ip_distance)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Rip::Vrfs::Vrf::IpDistances::IpDistance>();
        c->parent = this;
        ip_distance.push_back(std::move(c));
        children[segment_path] = ip_distance.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rip::Vrfs::Vrf::IpDistances::get_children()
{
    for (auto const & c : ip_distance)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Rip::Vrfs::Vrf::IpDistances::set_value(const std::string & value_path, std::string value)
{
}

Rip::Vrfs::Vrf::IpDistances::IpDistance::IpDistance()
    :
    address{YType::str, "address"},
    netmask{YType::str, "netmask"},
    distance{YType::uint32, "distance"}
{
    yang_name = "ip-distance"; yang_parent_name = "ip-distances";
}

Rip::Vrfs::Vrf::IpDistances::IpDistance::~IpDistance()
{
}

bool Rip::Vrfs::Vrf::IpDistances::IpDistance::has_data() const
{
    return address.is_set
	|| netmask.is_set
	|| distance.is_set;
}

bool Rip::Vrfs::Vrf::IpDistances::IpDistance::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(netmask.operation)
	|| is_set(distance.operation);
}

std::string Rip::Vrfs::Vrf::IpDistances::IpDistance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-distance" <<"[address='" <<address <<"']" <<"[netmask='" <<netmask <<"']";

    return path_buffer.str();

}

EntityPath Rip::Vrfs::Vrf::IpDistances::IpDistance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpDistance' in Cisco_IOS_XR_ip_rip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (netmask.is_set || is_set(netmask.operation)) leaf_name_data.push_back(netmask.get_name_leafdata());
    if (distance.is_set || is_set(distance.operation)) leaf_name_data.push_back(distance.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::IpDistances::IpDistance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rip::Vrfs::Vrf::IpDistances::IpDistance::get_children()
{
    return children;
}

void Rip::Vrfs::Vrf::IpDistances::IpDistance::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "netmask")
    {
        netmask = value;
    }
    if(value_path == "distance")
    {
        distance = value;
    }
}

Rip::Vrfs::Vrf::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "vrf";
}

Rip::Vrfs::Vrf::Interfaces::~Interfaces()
{
}

bool Rip::Vrfs::Vrf::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Rip::Vrfs::Vrf::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rip::Vrfs::Vrf::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath Rip::Vrfs::Vrf::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interfaces' in Cisco_IOS_XR_ip_rip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Rip::Vrfs::Vrf::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rip::Vrfs::Vrf::Interfaces::get_children()
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

void Rip::Vrfs::Vrf::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Rip::Vrfs::Vrf::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    accept_metric_zero{YType::empty, "accept-metric-zero"},
    broadcast_for_v2{YType::empty, "broadcast-for-v2"},
    enable{YType::empty, "enable"},
    passive{YType::empty, "passive"},
    poison_reverse{YType::empty, "poison-reverse"},
    policy_in{YType::str, "policy-in"},
    policy_out{YType::str, "policy-out"},
    split_horizon_disable{YType::empty, "split-horizon-disable"}
    	,
    authentication(nullptr) // presence node
	,receive_version(std::make_shared<Rip::Vrfs::Vrf::Interfaces::Interface::ReceiveVersion>())
	,send_version(std::make_shared<Rip::Vrfs::Vrf::Interfaces::Interface::SendVersion>())
	,site_of_origin(std::make_shared<Rip::Vrfs::Vrf::Interfaces::Interface::SiteOfOrigin>())
{
    receive_version->parent = this;
    children["receive-version"] = receive_version;

    send_version->parent = this;
    children["send-version"] = send_version;

    site_of_origin->parent = this;
    children["site-of-origin"] = site_of_origin;

    yang_name = "interface"; yang_parent_name = "interfaces";
}

Rip::Vrfs::Vrf::Interfaces::Interface::~Interface()
{
}

bool Rip::Vrfs::Vrf::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| accept_metric_zero.is_set
	|| broadcast_for_v2.is_set
	|| enable.is_set
	|| passive.is_set
	|| poison_reverse.is_set
	|| policy_in.is_set
	|| policy_out.is_set
	|| split_horizon_disable.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (receive_version !=  nullptr && receive_version->has_data())
	|| (send_version !=  nullptr && send_version->has_data())
	|| (site_of_origin !=  nullptr && site_of_origin->has_data());
}

bool Rip::Vrfs::Vrf::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(accept_metric_zero.operation)
	|| is_set(broadcast_for_v2.operation)
	|| is_set(enable.operation)
	|| is_set(passive.operation)
	|| is_set(poison_reverse.operation)
	|| is_set(policy_in.operation)
	|| is_set(policy_out.operation)
	|| is_set(split_horizon_disable.operation)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (receive_version !=  nullptr && receive_version->has_operation())
	|| (send_version !=  nullptr && send_version->has_operation())
	|| (site_of_origin !=  nullptr && site_of_origin->has_operation());
}

std::string Rip::Vrfs::Vrf::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Rip::Vrfs::Vrf::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_ip_rip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (accept_metric_zero.is_set || is_set(accept_metric_zero.operation)) leaf_name_data.push_back(accept_metric_zero.get_name_leafdata());
    if (broadcast_for_v2.is_set || is_set(broadcast_for_v2.operation)) leaf_name_data.push_back(broadcast_for_v2.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (passive.is_set || is_set(passive.operation)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (poison_reverse.is_set || is_set(poison_reverse.operation)) leaf_name_data.push_back(poison_reverse.get_name_leafdata());
    if (policy_in.is_set || is_set(policy_in.operation)) leaf_name_data.push_back(policy_in.get_name_leafdata());
    if (policy_out.is_set || is_set(policy_out.operation)) leaf_name_data.push_back(policy_out.get_name_leafdata());
    if (split_horizon_disable.is_set || is_set(split_horizon_disable.operation)) leaf_name_data.push_back(split_horizon_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "authentication")
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication;
        }
        else
        {
            authentication = std::make_shared<Rip::Vrfs::Vrf::Interfaces::Interface::Authentication>();
            authentication->parent = this;
            children["authentication"] = authentication;
        }
        return children.at("authentication");
    }

    if(child_yang_name == "receive-version")
    {
        if(receive_version != nullptr)
        {
            children["receive-version"] = receive_version;
        }
        else
        {
            receive_version = std::make_shared<Rip::Vrfs::Vrf::Interfaces::Interface::ReceiveVersion>();
            receive_version->parent = this;
            children["receive-version"] = receive_version;
        }
        return children.at("receive-version");
    }

    if(child_yang_name == "send-version")
    {
        if(send_version != nullptr)
        {
            children["send-version"] = send_version;
        }
        else
        {
            send_version = std::make_shared<Rip::Vrfs::Vrf::Interfaces::Interface::SendVersion>();
            send_version->parent = this;
            children["send-version"] = send_version;
        }
        return children.at("send-version");
    }

    if(child_yang_name == "site-of-origin")
    {
        if(site_of_origin != nullptr)
        {
            children["site-of-origin"] = site_of_origin;
        }
        else
        {
            site_of_origin = std::make_shared<Rip::Vrfs::Vrf::Interfaces::Interface::SiteOfOrigin>();
            site_of_origin->parent = this;
            children["site-of-origin"] = site_of_origin;
        }
        return children.at("site-of-origin");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rip::Vrfs::Vrf::Interfaces::Interface::get_children()
{
    if(children.find("authentication") == children.end())
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication;
        }
    }

    if(children.find("receive-version") == children.end())
    {
        if(receive_version != nullptr)
        {
            children["receive-version"] = receive_version;
        }
    }

    if(children.find("send-version") == children.end())
    {
        if(send_version != nullptr)
        {
            children["send-version"] = send_version;
        }
    }

    if(children.find("site-of-origin") == children.end())
    {
        if(site_of_origin != nullptr)
        {
            children["site-of-origin"] = site_of_origin;
        }
    }

    return children;
}

void Rip::Vrfs::Vrf::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "accept-metric-zero")
    {
        accept_metric_zero = value;
    }
    if(value_path == "broadcast-for-v2")
    {
        broadcast_for_v2 = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "passive")
    {
        passive = value;
    }
    if(value_path == "poison-reverse")
    {
        poison_reverse = value;
    }
    if(value_path == "policy-in")
    {
        policy_in = value;
    }
    if(value_path == "policy-out")
    {
        policy_out = value;
    }
    if(value_path == "split-horizon-disable")
    {
        split_horizon_disable = value;
    }
}

Rip::Vrfs::Vrf::Interfaces::Interface::Authentication::Authentication()
    :
    keychain{YType::str, "keychain"},
    mode{YType::enumeration, "mode"}
{
    yang_name = "authentication"; yang_parent_name = "interface";
}

Rip::Vrfs::Vrf::Interfaces::Interface::Authentication::~Authentication()
{
}

bool Rip::Vrfs::Vrf::Interfaces::Interface::Authentication::has_data() const
{
    return keychain.is_set
	|| mode.is_set;
}

bool Rip::Vrfs::Vrf::Interfaces::Interface::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(keychain.operation)
	|| is_set(mode.operation);
}

std::string Rip::Vrfs::Vrf::Interfaces::Interface::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

EntityPath Rip::Vrfs::Vrf::Interfaces::Interface::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XR_ip_rip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keychain.is_set || is_set(keychain.operation)) leaf_name_data.push_back(keychain.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::Interfaces::Interface::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rip::Vrfs::Vrf::Interfaces::Interface::Authentication::get_children()
{
    return children;
}

void Rip::Vrfs::Vrf::Interfaces::Interface::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "keychain")
    {
        keychain = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
}

Rip::Vrfs::Vrf::Interfaces::Interface::SiteOfOrigin::SiteOfOrigin()
    :
    address{YType::str, "address"},
    address_index{YType::uint32, "address-index"},
    as_index{YType::uint32, "as-index"},
    as_xx{YType::uint32, "as-xx"},
    as_yy{YType::uint32, "as-yy"},
    type{YType::enumeration, "type"}
{
    yang_name = "site-of-origin"; yang_parent_name = "interface";
}

Rip::Vrfs::Vrf::Interfaces::Interface::SiteOfOrigin::~SiteOfOrigin()
{
}

bool Rip::Vrfs::Vrf::Interfaces::Interface::SiteOfOrigin::has_data() const
{
    return address.is_set
	|| address_index.is_set
	|| as_index.is_set
	|| as_xx.is_set
	|| as_yy.is_set
	|| type.is_set;
}

bool Rip::Vrfs::Vrf::Interfaces::Interface::SiteOfOrigin::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(address_index.operation)
	|| is_set(as_index.operation)
	|| is_set(as_xx.operation)
	|| is_set(as_yy.operation)
	|| is_set(type.operation);
}

std::string Rip::Vrfs::Vrf::Interfaces::Interface::SiteOfOrigin::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "site-of-origin";

    return path_buffer.str();

}

EntityPath Rip::Vrfs::Vrf::Interfaces::Interface::SiteOfOrigin::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SiteOfOrigin' in Cisco_IOS_XR_ip_rip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (address_index.is_set || is_set(address_index.operation)) leaf_name_data.push_back(address_index.get_name_leafdata());
    if (as_index.is_set || is_set(as_index.operation)) leaf_name_data.push_back(as_index.get_name_leafdata());
    if (as_xx.is_set || is_set(as_xx.operation)) leaf_name_data.push_back(as_xx.get_name_leafdata());
    if (as_yy.is_set || is_set(as_yy.operation)) leaf_name_data.push_back(as_yy.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::Interfaces::Interface::SiteOfOrigin::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rip::Vrfs::Vrf::Interfaces::Interface::SiteOfOrigin::get_children()
{
    return children;
}

void Rip::Vrfs::Vrf::Interfaces::Interface::SiteOfOrigin::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "address-index")
    {
        address_index = value;
    }
    if(value_path == "as-index")
    {
        as_index = value;
    }
    if(value_path == "as-xx")
    {
        as_xx = value;
    }
    if(value_path == "as-yy")
    {
        as_yy = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

Rip::Vrfs::Vrf::Interfaces::Interface::ReceiveVersion::ReceiveVersion()
    :
    version1{YType::boolean, "version1"},
    version2{YType::boolean, "version2"}
{
    yang_name = "receive-version"; yang_parent_name = "interface";
}

Rip::Vrfs::Vrf::Interfaces::Interface::ReceiveVersion::~ReceiveVersion()
{
}

bool Rip::Vrfs::Vrf::Interfaces::Interface::ReceiveVersion::has_data() const
{
    return version1.is_set
	|| version2.is_set;
}

bool Rip::Vrfs::Vrf::Interfaces::Interface::ReceiveVersion::has_operation() const
{
    return is_set(operation)
	|| is_set(version1.operation)
	|| is_set(version2.operation);
}

std::string Rip::Vrfs::Vrf::Interfaces::Interface::ReceiveVersion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "receive-version";

    return path_buffer.str();

}

EntityPath Rip::Vrfs::Vrf::Interfaces::Interface::ReceiveVersion::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReceiveVersion' in Cisco_IOS_XR_ip_rip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version1.is_set || is_set(version1.operation)) leaf_name_data.push_back(version1.get_name_leafdata());
    if (version2.is_set || is_set(version2.operation)) leaf_name_data.push_back(version2.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::Interfaces::Interface::ReceiveVersion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rip::Vrfs::Vrf::Interfaces::Interface::ReceiveVersion::get_children()
{
    return children;
}

void Rip::Vrfs::Vrf::Interfaces::Interface::ReceiveVersion::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "version1")
    {
        version1 = value;
    }
    if(value_path == "version2")
    {
        version2 = value;
    }
}

Rip::Vrfs::Vrf::Interfaces::Interface::SendVersion::SendVersion()
    :
    version1{YType::boolean, "version1"},
    version2{YType::boolean, "version2"}
{
    yang_name = "send-version"; yang_parent_name = "interface";
}

Rip::Vrfs::Vrf::Interfaces::Interface::SendVersion::~SendVersion()
{
}

bool Rip::Vrfs::Vrf::Interfaces::Interface::SendVersion::has_data() const
{
    return version1.is_set
	|| version2.is_set;
}

bool Rip::Vrfs::Vrf::Interfaces::Interface::SendVersion::has_operation() const
{
    return is_set(operation)
	|| is_set(version1.operation)
	|| is_set(version2.operation);
}

std::string Rip::Vrfs::Vrf::Interfaces::Interface::SendVersion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-version";

    return path_buffer.str();

}

EntityPath Rip::Vrfs::Vrf::Interfaces::Interface::SendVersion::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SendVersion' in Cisco_IOS_XR_ip_rip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version1.is_set || is_set(version1.operation)) leaf_name_data.push_back(version1.get_name_leafdata());
    if (version2.is_set || is_set(version2.operation)) leaf_name_data.push_back(version2.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::Interfaces::Interface::SendVersion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rip::Vrfs::Vrf::Interfaces::Interface::SendVersion::get_children()
{
    return children;
}

void Rip::Vrfs::Vrf::Interfaces::Interface::SendVersion::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "version1")
    {
        version1 = value;
    }
    if(value_path == "version2")
    {
        version2 = value;
    }
}

Rip::Vrfs::Vrf::Neighbors::Neighbors()
{
    yang_name = "neighbors"; yang_parent_name = "vrf";
}

Rip::Vrfs::Vrf::Neighbors::~Neighbors()
{
}

bool Rip::Vrfs::Vrf::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Rip::Vrfs::Vrf::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Rip::Vrfs::Vrf::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";

    return path_buffer.str();

}

EntityPath Rip::Vrfs::Vrf::Neighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbors' in Cisco_IOS_XR_ip_rip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Rip::Vrfs::Vrf::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(std::move(c));
        children[segment_path] = neighbor.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rip::Vrfs::Vrf::Neighbors::get_children()
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

void Rip::Vrfs::Vrf::Neighbors::set_value(const std::string & value_path, std::string value)
{
}

Rip::Vrfs::Vrf::Neighbors::Neighbor::Neighbor()
    :
    neighbor_address{YType::str, "neighbor-address"}
{
    yang_name = "neighbor"; yang_parent_name = "neighbors";
}

Rip::Vrfs::Vrf::Neighbors::Neighbor::~Neighbor()
{
}

bool Rip::Vrfs::Vrf::Neighbors::Neighbor::has_data() const
{
    return neighbor_address.is_set;
}

bool Rip::Vrfs::Vrf::Neighbors::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(neighbor_address.operation);
}

std::string Rip::Vrfs::Vrf::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[neighbor-address='" <<neighbor_address <<"']";

    return path_buffer.str();

}

EntityPath Rip::Vrfs::Vrf::Neighbors::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in Cisco_IOS_XR_ip_rip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rip::Vrfs::Vrf::Neighbors::Neighbor::get_children()
{
    return children;
}

void Rip::Vrfs::Vrf::Neighbors::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
}

Rip::Vrfs::Vrf::Timers::Timers()
    :
    flush_timer{YType::uint32, "flush-timer"},
    holddown_timer{YType::uint32, "holddown-timer"},
    invalid_timer{YType::uint32, "invalid-timer"},
    update_timer{YType::uint32, "update-timer"}
{
    yang_name = "timers"; yang_parent_name = "vrf";
}

Rip::Vrfs::Vrf::Timers::~Timers()
{
}

bool Rip::Vrfs::Vrf::Timers::has_data() const
{
    return flush_timer.is_set
	|| holddown_timer.is_set
	|| invalid_timer.is_set
	|| update_timer.is_set;
}

bool Rip::Vrfs::Vrf::Timers::has_operation() const
{
    return is_set(operation)
	|| is_set(flush_timer.operation)
	|| is_set(holddown_timer.operation)
	|| is_set(invalid_timer.operation)
	|| is_set(update_timer.operation);
}

std::string Rip::Vrfs::Vrf::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";

    return path_buffer.str();

}

EntityPath Rip::Vrfs::Vrf::Timers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timers' in Cisco_IOS_XR_ip_rip_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flush_timer.is_set || is_set(flush_timer.operation)) leaf_name_data.push_back(flush_timer.get_name_leafdata());
    if (holddown_timer.is_set || is_set(holddown_timer.operation)) leaf_name_data.push_back(holddown_timer.get_name_leafdata());
    if (invalid_timer.is_set || is_set(invalid_timer.operation)) leaf_name_data.push_back(invalid_timer.get_name_leafdata());
    if (update_timer.is_set || is_set(update_timer.operation)) leaf_name_data.push_back(update_timer.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Rip::Vrfs::Vrf::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Rip::Vrfs::Vrf::Timers::get_children()
{
    return children;
}

void Rip::Vrfs::Vrf::Timers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flush-timer")
    {
        flush_timer = value;
    }
    if(value_path == "holddown-timer")
    {
        holddown_timer = value;
    }
    if(value_path == "invalid-timer")
    {
        invalid_timer = value;
    }
    if(value_path == "update-timer")
    {
        update_timer = value;
    }
}

const Enum::YLeaf RipAuthModeEnum::text {2, "text"};
const Enum::YLeaf RipAuthModeEnum::md5 {3, "md5"};

const Enum::YLeaf IsisRedistRouteEnum::level1 {1, "level1"};
const Enum::YLeaf IsisRedistRouteEnum::level2 {2, "level2"};
const Enum::YLeaf IsisRedistRouteEnum::level1_and2 {3, "level1-and2"};

const Enum::YLeaf DefaultInformationOptionEnum::always {0, "always"};
const Enum::YLeaf DefaultInformationOptionEnum::policy {1, "policy"};

const Enum::YLeaf BgpRedistRouteEnum::all {0, "all"};
const Enum::YLeaf BgpRedistRouteEnum::internal {512, "internal"};
const Enum::YLeaf BgpRedistRouteEnum::external {1024, "external"};
const Enum::YLeaf BgpRedistRouteEnum::local {2048, "local"};

const Enum::YLeaf RipExtCommunityEnum::as {0, "as"};
const Enum::YLeaf RipExtCommunityEnum::ipv4_address {1, "ipv4-address"};
const Enum::YLeaf RipExtCommunityEnum::four_byte_as {2, "four-byte-as"};

const Enum::YLeaf DefaultRedistRouteEnum::all {0, "all"};


}
}

