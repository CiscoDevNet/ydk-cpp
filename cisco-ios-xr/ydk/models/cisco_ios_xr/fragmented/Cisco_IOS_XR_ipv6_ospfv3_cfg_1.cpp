
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv6_ospfv3_cfg_1.hpp"
#include "Cisco_IOS_XR_ipv6_ospfv3_cfg_2.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv6_ospfv3_cfg {

Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric::OnStartup::OnStartup()
    :
    wait_for_bgp{YType::boolean, "wait-for-bgp"},
    wait_time{YType::uint32, "wait-time"}
{
    yang_name = "on-startup"; yang_parent_name = "max-metric";
}

Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric::OnStartup::~OnStartup()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric::OnStartup::has_data() const
{
    return wait_for_bgp.is_set
	|| wait_time.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric::OnStartup::has_operation() const
{
    return is_set(operation)
	|| is_set(wait_for_bgp.operation)
	|| is_set(wait_time.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric::OnStartup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on-startup";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric::OnStartup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OnStartup' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (wait_for_bgp.is_set || is_set(wait_for_bgp.operation)) leaf_name_data.push_back(wait_for_bgp.get_name_leafdata());
    if (wait_time.is_set || is_set(wait_time.operation)) leaf_name_data.push_back(wait_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric::OnStartup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric::OnStartup::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::StubRouter::MaxMetric::OnStartup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "wait-for-bgp")
    {
        wait_for_bgp = value;
    }
    if(value_path == "wait-time")
    {
        wait_time = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::Bfd::Bfd()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    fast_detect_mode{YType::enumeration, "fast-detect-mode"},
    interval{YType::uint32, "interval"}
{
    yang_name = "bfd"; yang_parent_name = "default-vrf";
}

Ospfv3::Processes::Process::DefaultVrf::Bfd::~Bfd()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Bfd::has_data() const
{
    return detection_multiplier.is_set
	|| fast_detect_mode.is_set
	|| interval.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Bfd::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(fast_detect_mode.operation)
	|| is_set(interval.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bfd' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (fast_detect_mode.is_set || is_set(fast_detect_mode.operation)) leaf_name_data.push_back(fast_detect_mode.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::Bfd::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Bfd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "fast-detect-mode")
    {
        fast_detect_mode = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseFilter::DatabaseFilter()
    :
    all(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseFilter::All>())
{
    all->parent = this;
    children["all"] = all;

    yang_name = "database-filter"; yang_parent_name = "default-vrf";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseFilter::~DatabaseFilter()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseFilter::has_data() const
{
    return (all !=  nullptr && all->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseFilter::has_operation() const
{
    return is_set(operation)
	|| (all !=  nullptr && all->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseFilter' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "all")
    {
        if(all != nullptr)
        {
            children["all"] = all;
        }
        else
        {
            all = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DatabaseFilter::All>();
            all->parent = this;
            children["all"] = all;
        }
        return children.at("all");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseFilter::get_children()
{
    if(children.find("all") == children.end())
    {
        if(all != nullptr)
        {
            children["all"] = all;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseFilter::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseFilter::All::All()
    :
    out{YType::empty, "out"}
{
    yang_name = "all"; yang_parent_name = "database-filter";
}

Ospfv3::Processes::Process::DefaultVrf::DatabaseFilter::All::~All()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseFilter::All::has_data() const
{
    return out.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::DatabaseFilter::All::has_operation() const
{
    return is_set(operation)
	|| is_set(out.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::DatabaseFilter::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DatabaseFilter::All::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'All' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out.is_set || is_set(out.operation)) leaf_name_data.push_back(out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DatabaseFilter::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DatabaseFilter::All::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DatabaseFilter::All::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "out")
    {
        out = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::Authentication::Authentication()
    :
    algorithm{YType::enumeration, "algorithm"},
    enable{YType::boolean, "enable"},
    password{YType::str, "password"},
    spi{YType::uint32, "spi"}
{
    yang_name = "authentication"; yang_parent_name = "default-vrf";
}

Ospfv3::Processes::Process::DefaultVrf::Authentication::~Authentication()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Authentication::has_data() const
{
    return algorithm.is_set
	|| enable.is_set
	|| password.is_set
	|| spi.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(algorithm.operation)
	|| is_set(enable.operation)
	|| is_set(password.operation)
	|| is_set(spi.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (algorithm.is_set || is_set(algorithm.operation)) leaf_name_data.push_back(algorithm.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());
    if (spi.is_set || is_set(spi.operation)) leaf_name_data.push_back(spi.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::Authentication::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "algorithm")
    {
        algorithm = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
    if(value_path == "spi")
    {
        spi = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::GracefulRestart::GracefulRestart()
    :
    enable{YType::empty, "enable"},
    helper{YType::empty, "helper"},
    interval{YType::uint32, "interval"},
    lifetime{YType::uint32, "lifetime"},
    strict_lsa_checking{YType::empty, "strict-lsa-checking"}
{
    yang_name = "graceful-restart"; yang_parent_name = "default-vrf";
}

Ospfv3::Processes::Process::DefaultVrf::GracefulRestart::~GracefulRestart()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::GracefulRestart::has_data() const
{
    return enable.is_set
	|| helper.is_set
	|| interval.is_set
	|| lifetime.is_set
	|| strict_lsa_checking.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::GracefulRestart::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(helper.operation)
	|| is_set(interval.operation)
	|| is_set(lifetime.operation)
	|| is_set(strict_lsa_checking.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::GracefulRestart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "graceful-restart";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::GracefulRestart::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GracefulRestart' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (helper.is_set || is_set(helper.operation)) leaf_name_data.push_back(helper.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (lifetime.is_set || is_set(lifetime.operation)) leaf_name_data.push_back(lifetime.get_name_leafdata());
    if (strict_lsa_checking.is_set || is_set(strict_lsa_checking.operation)) leaf_name_data.push_back(strict_lsa_checking.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::GracefulRestart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::GracefulRestart::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::GracefulRestart::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "helper")
    {
        helper = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
    if(value_path == "lifetime")
    {
        lifetime = value;
    }
    if(value_path == "strict-lsa-checking")
    {
        strict_lsa_checking = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::DefaultInformation::DefaultInformation()
    :
    originate(nullptr) // presence node
{
    yang_name = "default-information"; yang_parent_name = "default-vrf";
}

Ospfv3::Processes::Process::DefaultVrf::DefaultInformation::~DefaultInformation()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DefaultInformation::has_data() const
{
    return (originate !=  nullptr && originate->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::DefaultInformation::has_operation() const
{
    return is_set(operation)
	|| (originate !=  nullptr && originate->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::DefaultInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DefaultInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DefaultInformation' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DefaultInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "originate")
    {
        if(originate != nullptr)
        {
            children["originate"] = originate;
        }
        else
        {
            originate = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::DefaultInformation::Originate>();
            originate->parent = this;
            children["originate"] = originate;
        }
        return children.at("originate");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DefaultInformation::get_children()
{
    if(children.find("originate") == children.end())
    {
        if(originate != nullptr)
        {
            children["originate"] = originate;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DefaultInformation::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::DefaultVrf::DefaultInformation::Originate::Originate()
    :
    always{YType::boolean, "always"},
    metric{YType::uint32, "metric"},
    metric_type{YType::uint32, "metric-type"},
    route_policy_name{YType::str, "route-policy-name"},
    tag{YType::int32, "tag"}
{
    yang_name = "originate"; yang_parent_name = "default-information";
}

Ospfv3::Processes::Process::DefaultVrf::DefaultInformation::Originate::~Originate()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::DefaultInformation::Originate::has_data() const
{
    return always.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_policy_name.is_set
	|| tag.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::DefaultInformation::Originate::has_operation() const
{
    return is_set(operation)
	|| is_set(always.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(route_policy_name.operation)
	|| is_set(tag.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::DefaultInformation::Originate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "originate";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::DefaultInformation::Originate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Originate' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always.is_set || is_set(always.operation)) leaf_name_data.push_back(always.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_policy_name.is_set || is_set(route_policy_name.operation)) leaf_name_data.push_back(route_policy_name.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::DefaultInformation::Originate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::DefaultInformation::Originate::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::DefaultInformation::Originate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "always")
    {
        always = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "route-policy-name")
    {
        route_policy_name = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::ProcessScope::ProcessScope()
    :
    fast_reroute(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute>())
{
    fast_reroute->parent = this;
    children["fast-reroute"] = fast_reroute;

    yang_name = "process-scope"; yang_parent_name = "default-vrf";
}

Ospfv3::Processes::Process::DefaultVrf::ProcessScope::~ProcessScope()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::ProcessScope::has_data() const
{
    return (fast_reroute !=  nullptr && fast_reroute->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::ProcessScope::has_operation() const
{
    return is_set(operation)
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::ProcessScope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-scope";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::ProcessScope::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProcessScope' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::ProcessScope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute != nullptr)
        {
            children["fast-reroute"] = fast_reroute;
        }
        else
        {
            fast_reroute = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute>();
            fast_reroute->parent = this;
            children["fast-reroute"] = fast_reroute;
        }
        return children.at("fast-reroute");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::ProcessScope::get_children()
{
    if(children.find("fast-reroute") == children.end())
    {
        if(fast_reroute != nullptr)
        {
            children["fast-reroute"] = fast_reroute;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::ProcessScope::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::FastReroute()
    :
    fast_reroute_enable{YType::enumeration, "fast-reroute-enable"}
    	,
    per_link(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink>())
	,per_prefix(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix>())
{
    per_link->parent = this;
    children["per-link"] = per_link;

    per_prefix->parent = this;
    children["per-prefix"] = per_prefix;

    yang_name = "fast-reroute"; yang_parent_name = "process-scope";
}

Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::~FastReroute()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::has_data() const
{
    return fast_reroute_enable.is_set
	|| (per_link !=  nullptr && per_link->has_data())
	|| (per_prefix !=  nullptr && per_prefix->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::has_operation() const
{
    return is_set(operation)
	|| is_set(fast_reroute_enable.operation)
	|| (per_link !=  nullptr && per_link->has_operation())
	|| (per_prefix !=  nullptr && per_prefix->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FastReroute' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_enable.is_set || is_set(fast_reroute_enable.operation)) leaf_name_data.push_back(fast_reroute_enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "per-link")
    {
        if(per_link != nullptr)
        {
            children["per-link"] = per_link;
        }
        else
        {
            per_link = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink>();
            per_link->parent = this;
            children["per-link"] = per_link;
        }
        return children.at("per-link");
    }

    if(child_yang_name == "per-prefix")
    {
        if(per_prefix != nullptr)
        {
            children["per-prefix"] = per_prefix;
        }
        else
        {
            per_prefix = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix>();
            per_prefix->parent = this;
            children["per-prefix"] = per_prefix;
        }
        return children.at("per-prefix");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::get_children()
{
    if(children.find("per-link") == children.end())
    {
        if(per_link != nullptr)
        {
            children["per-link"] = per_link;
        }
    }

    if(children.find("per-prefix") == children.end())
    {
        if(per_prefix != nullptr)
        {
            children["per-prefix"] = per_prefix;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fast-reroute-enable")
    {
        fast_reroute_enable = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::PerLink()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"}
    	,
    candidate_interfaces(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces>())
{
    candidate_interfaces->parent = this;
    children["candidate-interfaces"] = candidate_interfaces;

    exclude_interfaces->parent = this;
    children["exclude-interfaces"] = exclude_interfaces;

    yang_name = "per-link"; yang_parent_name = "fast-reroute";
}

Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::~PerLink()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::has_data() const
{
    return fast_reroute_use_candidate_only.is_set
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::has_operation() const
{
    return is_set(operation)
	|| is_set(fast_reroute_use_candidate_only.operation)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-link";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerLink' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.operation)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces != nullptr)
        {
            children["candidate-interfaces"] = candidate_interfaces;
        }
        else
        {
            candidate_interfaces = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces>();
            candidate_interfaces->parent = this;
            children["candidate-interfaces"] = candidate_interfaces;
        }
        return children.at("candidate-interfaces");
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
        else
        {
            exclude_interfaces = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces>();
            exclude_interfaces->parent = this;
            children["exclude-interfaces"] = exclude_interfaces;
        }
        return children.at("exclude-interfaces");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::get_children()
{
    if(children.find("candidate-interfaces") == children.end())
    {
        if(candidate_interfaces != nullptr)
        {
            children["candidate-interfaces"] = candidate_interfaces;
        }
    }

    if(children.find("exclude-interfaces") == children.end())
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterfaces()
{
    yang_name = "candidate-interfaces"; yang_parent_name = "per-link";
}

Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::~CandidateInterfaces()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateInterfaces' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-interface")
    {
        for(auto const & c : candidate_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(std::move(c));
        children[segment_path] = candidate_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::get_children()
{
    for (auto const & c : candidate_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces";
}

Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::~CandidateInterface()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateInterface' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterfaces()
{
    yang_name = "exclude-interfaces"; yang_parent_name = "per-link";
}

Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterfaces' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "exclude-interface")
    {
        for(auto const & c : exclude_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(std::move(c));
        children[segment_path] = exclude_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::get_children()
{
    for (auto const & c : exclude_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces";
}

Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterface' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::PerPrefix()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"}
    	,
    candidate_interfaces(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces>())
{
    candidate_interfaces->parent = this;
    children["candidate-interfaces"] = candidate_interfaces;

    exclude_interfaces->parent = this;
    children["exclude-interfaces"] = exclude_interfaces;

    yang_name = "per-prefix"; yang_parent_name = "fast-reroute";
}

Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::~PerPrefix()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::has_data() const
{
    return fast_reroute_use_candidate_only.is_set
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data());
}

bool Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(fast_reroute_use_candidate_only.operation)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation());
}

std::string Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-prefix";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerPrefix' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.operation)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces != nullptr)
        {
            children["candidate-interfaces"] = candidate_interfaces;
        }
        else
        {
            candidate_interfaces = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces>();
            candidate_interfaces->parent = this;
            children["candidate-interfaces"] = candidate_interfaces;
        }
        return children.at("candidate-interfaces");
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
        else
        {
            exclude_interfaces = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces>();
            exclude_interfaces->parent = this;
            children["exclude-interfaces"] = exclude_interfaces;
        }
        return children.at("exclude-interfaces");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::get_children()
{
    if(children.find("candidate-interfaces") == children.end())
    {
        if(candidate_interfaces != nullptr)
        {
            children["candidate-interfaces"] = candidate_interfaces;
        }
    }

    if(children.find("exclude-interfaces") == children.end())
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterfaces()
{
    yang_name = "candidate-interfaces"; yang_parent_name = "per-prefix";
}

Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::~CandidateInterfaces()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateInterfaces' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-interface")
    {
        for(auto const & c : candidate_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(std::move(c));
        children[segment_path] = candidate_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::get_children()
{
    for (auto const & c : candidate_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces";
}

Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::~CandidateInterface()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateInterface' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterfaces()
{
    yang_name = "exclude-interfaces"; yang_parent_name = "per-prefix";
}

Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterfaces' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "exclude-interface")
    {
        for(auto const & c : exclude_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(std::move(c));
        children[segment_path] = exclude_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::get_children()
{
    for (auto const & c : exclude_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces";
}

Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterface' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::ProcessScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::Encryption::Encryption()
    :
    authentication_algorithm{YType::enumeration, "authentication-algorithm"},
    authentication_password{YType::str, "authentication-password"},
    enable{YType::boolean, "enable"},
    encryption_algorithm{YType::enumeration, "encryption-algorithm"},
    encryption_password{YType::str, "encryption-password"},
    spi{YType::uint32, "spi"}
{
    yang_name = "encryption"; yang_parent_name = "default-vrf";
}

Ospfv3::Processes::Process::DefaultVrf::Encryption::~Encryption()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::Encryption::has_data() const
{
    return authentication_algorithm.is_set
	|| authentication_password.is_set
	|| enable.is_set
	|| encryption_algorithm.is_set
	|| encryption_password.is_set
	|| spi.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::Encryption::has_operation() const
{
    return is_set(operation)
	|| is_set(authentication_algorithm.operation)
	|| is_set(authentication_password.operation)
	|| is_set(enable.operation)
	|| is_set(encryption_algorithm.operation)
	|| is_set(encryption_password.operation)
	|| is_set(spi.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::Encryption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Encryption' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_algorithm.is_set || is_set(authentication_algorithm.operation)) leaf_name_data.push_back(authentication_algorithm.get_name_leafdata());
    if (authentication_password.is_set || is_set(authentication_password.operation)) leaf_name_data.push_back(authentication_password.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (encryption_algorithm.is_set || is_set(encryption_algorithm.operation)) leaf_name_data.push_back(encryption_algorithm.get_name_leafdata());
    if (encryption_password.is_set || is_set(encryption_password.operation)) leaf_name_data.push_back(encryption_password.get_name_leafdata());
    if (spi.is_set || is_set(spi.operation)) leaf_name_data.push_back(spi.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::Encryption::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::Encryption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authentication-algorithm")
    {
        authentication_algorithm = value;
    }
    if(value_path == "authentication-password")
    {
        authentication_password = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "encryption-algorithm")
    {
        encryption_algorithm = value;
    }
    if(value_path == "encryption-password")
    {
        encryption_password = value;
    }
    if(value_path == "spi")
    {
        spi = value;
    }
}

Ospfv3::Processes::Process::DefaultVrf::AutoCost::AutoCost()
    :
    disable{YType::empty, "disable"},
    reference_bandwidth{YType::uint32, "reference-bandwidth"}
{
    yang_name = "auto-cost"; yang_parent_name = "default-vrf";
}

Ospfv3::Processes::Process::DefaultVrf::AutoCost::~AutoCost()
{
}

bool Ospfv3::Processes::Process::DefaultVrf::AutoCost::has_data() const
{
    return disable.is_set
	|| reference_bandwidth.is_set;
}

bool Ospfv3::Processes::Process::DefaultVrf::AutoCost::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation)
	|| is_set(reference_bandwidth.operation);
}

std::string Ospfv3::Processes::Process::DefaultVrf::AutoCost::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-cost";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::DefaultVrf::AutoCost::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AutoCost' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (reference_bandwidth.is_set || is_set(reference_bandwidth.operation)) leaf_name_data.push_back(reference_bandwidth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::DefaultVrf::AutoCost::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::DefaultVrf::AutoCost::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::DefaultVrf::AutoCost::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
    if(value_path == "reference-bandwidth")
    {
        reference_bandwidth = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrfs()
{
    yang_name = "vrfs"; yang_parent_name = "process";
}

Ospfv3::Processes::Process::Vrfs::~Vrfs()
{
}

bool Ospfv3::Processes::Process::Vrfs::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrfs";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrfs' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf>();
        c->parent = this;
        vrf.push_back(std::move(c));
        children[segment_path] = vrf.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::get_children()
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

void Ospfv3::Processes::Process::Vrfs::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::Vrf()
    :
    vrf_name{YType::str, "vrf-name"},
    cost{YType::uint32, "cost"},
    dead_interval{YType::uint32, "dead-interval"},
    default_metric{YType::uint32, "default-metric"},
    demand_circuit{YType::boolean, "demand-circuit"},
    enable{YType::empty, "enable"},
    flood_reduction{YType::boolean, "flood-reduction"},
    hello_interval{YType::uint32, "hello-interval"},
    instance{YType::uint32, "instance"},
    log_adjacency_changes{YType::enumeration, "log-adjacency-changes"},
    mtu_ignore{YType::boolean, "mtu-ignore"},
    network{YType::enumeration, "network"},
    packet_size{YType::uint32, "packet-size"},
    passive{YType::boolean, "passive"},
    prefix_suppression{YType::boolean, "prefix-suppression"},
    priority{YType::uint32, "priority"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    router_id{YType::str, "router-id"},
    snmpvrf_trap{YType::empty, "snmpvrf-trap"},
    spf_prefix_priority_policy{YType::str, "spf-prefix-priority-policy"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    area_addresses(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses>())
	,authentication(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Authentication>())
	,auto_cost(nullptr) // presence node
	,bfd(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Bfd>())
	,capability(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Capability>())
	,database_filter(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter>())
	,default_information(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation>())
	,distance(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Distance>())
	,distribute_list(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList>())
	,distribute_list_out(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut>())
	,domain_id(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DomainId>())
	,encryption(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Encryption>())
	,fast_reroute(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute>())
	,graceful_restart(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::GracefulRestart>())
	,ignore(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Ignore>())
	,maximum(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Maximum>())
	,process_scope(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope>())
	,redistributes(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes>())
	,snmp(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Snmp>())
	,stub_router(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter>())
	,summary_prefixes(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes>())
	,timers(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Timers>())
{
    area_addresses->parent = this;
    children["area-addresses"] = area_addresses;

    authentication->parent = this;
    children["authentication"] = authentication;

    bfd->parent = this;
    children["bfd"] = bfd;

    capability->parent = this;
    children["capability"] = capability;

    database_filter->parent = this;
    children["database-filter"] = database_filter;

    default_information->parent = this;
    children["default-information"] = default_information;

    distance->parent = this;
    children["distance"] = distance;

    distribute_list->parent = this;
    children["distribute-list"] = distribute_list;

    distribute_list_out->parent = this;
    children["distribute-list-out"] = distribute_list_out;

    domain_id->parent = this;
    children["domain-id"] = domain_id;

    encryption->parent = this;
    children["encryption"] = encryption;

    fast_reroute->parent = this;
    children["fast-reroute"] = fast_reroute;

    graceful_restart->parent = this;
    children["graceful-restart"] = graceful_restart;

    ignore->parent = this;
    children["ignore"] = ignore;

    maximum->parent = this;
    children["maximum"] = maximum;

    process_scope->parent = this;
    children["process-scope"] = process_scope;

    redistributes->parent = this;
    children["redistributes"] = redistributes;

    snmp->parent = this;
    children["snmp"] = snmp;

    stub_router->parent = this;
    children["stub-router"] = stub_router;

    summary_prefixes->parent = this;
    children["summary-prefixes"] = summary_prefixes;

    timers->parent = this;
    children["timers"] = timers;

    yang_name = "vrf"; yang_parent_name = "vrfs";
}

Ospfv3::Processes::Process::Vrfs::Vrf::~Vrf()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::has_data() const
{
    return vrf_name.is_set
	|| cost.is_set
	|| dead_interval.is_set
	|| default_metric.is_set
	|| demand_circuit.is_set
	|| enable.is_set
	|| flood_reduction.is_set
	|| hello_interval.is_set
	|| instance.is_set
	|| log_adjacency_changes.is_set
	|| mtu_ignore.is_set
	|| network.is_set
	|| packet_size.is_set
	|| passive.is_set
	|| prefix_suppression.is_set
	|| priority.is_set
	|| retransmit_interval.is_set
	|| router_id.is_set
	|| snmpvrf_trap.is_set
	|| spf_prefix_priority_policy.is_set
	|| transmit_delay.is_set
	|| (area_addresses !=  nullptr && area_addresses->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (auto_cost !=  nullptr && auto_cost->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (capability !=  nullptr && capability->has_data())
	|| (database_filter !=  nullptr && database_filter->has_data())
	|| (default_information !=  nullptr && default_information->has_data())
	|| (distance !=  nullptr && distance->has_data())
	|| (distribute_list !=  nullptr && distribute_list->has_data())
	|| (distribute_list_out !=  nullptr && distribute_list_out->has_data())
	|| (domain_id !=  nullptr && domain_id->has_data())
	|| (encryption !=  nullptr && encryption->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (graceful_restart !=  nullptr && graceful_restart->has_data())
	|| (ignore !=  nullptr && ignore->has_data())
	|| (maximum !=  nullptr && maximum->has_data())
	|| (process_scope !=  nullptr && process_scope->has_data())
	|| (redistributes !=  nullptr && redistributes->has_data())
	|| (snmp !=  nullptr && snmp->has_data())
	|| (stub_router !=  nullptr && stub_router->has_data())
	|| (summary_prefixes !=  nullptr && summary_prefixes->has_data())
	|| (timers !=  nullptr && timers->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_name.operation)
	|| is_set(cost.operation)
	|| is_set(dead_interval.operation)
	|| is_set(default_metric.operation)
	|| is_set(demand_circuit.operation)
	|| is_set(enable.operation)
	|| is_set(flood_reduction.operation)
	|| is_set(hello_interval.operation)
	|| is_set(instance.operation)
	|| is_set(log_adjacency_changes.operation)
	|| is_set(mtu_ignore.operation)
	|| is_set(network.operation)
	|| is_set(packet_size.operation)
	|| is_set(passive.operation)
	|| is_set(prefix_suppression.operation)
	|| is_set(priority.operation)
	|| is_set(retransmit_interval.operation)
	|| is_set(router_id.operation)
	|| is_set(snmpvrf_trap.operation)
	|| is_set(spf_prefix_priority_policy.operation)
	|| is_set(transmit_delay.operation)
	|| (area_addresses !=  nullptr && area_addresses->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (auto_cost !=  nullptr && auto_cost->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (capability !=  nullptr && capability->has_operation())
	|| (database_filter !=  nullptr && database_filter->has_operation())
	|| (default_information !=  nullptr && default_information->has_operation())
	|| (distance !=  nullptr && distance->has_operation())
	|| (distribute_list !=  nullptr && distribute_list->has_operation())
	|| (distribute_list_out !=  nullptr && distribute_list_out->has_operation())
	|| (domain_id !=  nullptr && domain_id->has_operation())
	|| (encryption !=  nullptr && encryption->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (graceful_restart !=  nullptr && graceful_restart->has_operation())
	|| (ignore !=  nullptr && ignore->has_operation())
	|| (maximum !=  nullptr && maximum->has_operation())
	|| (process_scope !=  nullptr && process_scope->has_operation())
	|| (redistributes !=  nullptr && redistributes->has_operation())
	|| (snmp !=  nullptr && snmp->has_operation())
	|| (stub_router !=  nullptr && stub_router->has_operation())
	|| (summary_prefixes !=  nullptr && summary_prefixes->has_operation())
	|| (timers !=  nullptr && timers->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.operation)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (default_metric.is_set || is_set(default_metric.operation)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (demand_circuit.is_set || is_set(demand_circuit.operation)) leaf_name_data.push_back(demand_circuit.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (flood_reduction.is_set || is_set(flood_reduction.operation)) leaf_name_data.push_back(flood_reduction.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (log_adjacency_changes.is_set || is_set(log_adjacency_changes.operation)) leaf_name_data.push_back(log_adjacency_changes.get_name_leafdata());
    if (mtu_ignore.is_set || is_set(mtu_ignore.operation)) leaf_name_data.push_back(mtu_ignore.get_name_leafdata());
    if (network.is_set || is_set(network.operation)) leaf_name_data.push_back(network.get_name_leafdata());
    if (packet_size.is_set || is_set(packet_size.operation)) leaf_name_data.push_back(packet_size.get_name_leafdata());
    if (passive.is_set || is_set(passive.operation)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (prefix_suppression.is_set || is_set(prefix_suppression.operation)) leaf_name_data.push_back(prefix_suppression.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.operation)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (snmpvrf_trap.is_set || is_set(snmpvrf_trap.operation)) leaf_name_data.push_back(snmpvrf_trap.get_name_leafdata());
    if (spf_prefix_priority_policy.is_set || is_set(spf_prefix_priority_policy.operation)) leaf_name_data.push_back(spf_prefix_priority_policy.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.operation)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "area-addresses")
    {
        if(area_addresses != nullptr)
        {
            children["area-addresses"] = area_addresses;
        }
        else
        {
            area_addresses = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses>();
            area_addresses->parent = this;
            children["area-addresses"] = area_addresses;
        }
        return children.at("area-addresses");
    }

    if(child_yang_name == "authentication")
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication;
        }
        else
        {
            authentication = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Authentication>();
            authentication->parent = this;
            children["authentication"] = authentication;
        }
        return children.at("authentication");
    }

    if(child_yang_name == "auto-cost")
    {
        if(auto_cost != nullptr)
        {
            children["auto-cost"] = auto_cost;
        }
        else
        {
            auto_cost = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AutoCost>();
            auto_cost->parent = this;
            children["auto-cost"] = auto_cost;
        }
        return children.at("auto-cost");
    }

    if(child_yang_name == "bfd")
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd;
        }
        else
        {
            bfd = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Bfd>();
            bfd->parent = this;
            children["bfd"] = bfd;
        }
        return children.at("bfd");
    }

    if(child_yang_name == "capability")
    {
        if(capability != nullptr)
        {
            children["capability"] = capability;
        }
        else
        {
            capability = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Capability>();
            capability->parent = this;
            children["capability"] = capability;
        }
        return children.at("capability");
    }

    if(child_yang_name == "database-filter")
    {
        if(database_filter != nullptr)
        {
            children["database-filter"] = database_filter;
        }
        else
        {
            database_filter = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DatabaseFilter>();
            database_filter->parent = this;
            children["database-filter"] = database_filter;
        }
        return children.at("database-filter");
    }

    if(child_yang_name == "default-information")
    {
        if(default_information != nullptr)
        {
            children["default-information"] = default_information;
        }
        else
        {
            default_information = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DefaultInformation>();
            default_information->parent = this;
            children["default-information"] = default_information;
        }
        return children.at("default-information");
    }

    if(child_yang_name == "distance")
    {
        if(distance != nullptr)
        {
            children["distance"] = distance;
        }
        else
        {
            distance = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Distance>();
            distance->parent = this;
            children["distance"] = distance;
        }
        return children.at("distance");
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list != nullptr)
        {
            children["distribute-list"] = distribute_list;
        }
        else
        {
            distribute_list = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DistributeList>();
            distribute_list->parent = this;
            children["distribute-list"] = distribute_list;
        }
        return children.at("distribute-list");
    }

    if(child_yang_name == "distribute-list-out")
    {
        if(distribute_list_out != nullptr)
        {
            children["distribute-list-out"] = distribute_list_out;
        }
        else
        {
            distribute_list_out = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DistributeListOut>();
            distribute_list_out->parent = this;
            children["distribute-list-out"] = distribute_list_out;
        }
        return children.at("distribute-list-out");
    }

    if(child_yang_name == "domain-id")
    {
        if(domain_id != nullptr)
        {
            children["domain-id"] = domain_id;
        }
        else
        {
            domain_id = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DomainId>();
            domain_id->parent = this;
            children["domain-id"] = domain_id;
        }
        return children.at("domain-id");
    }

    if(child_yang_name == "encryption")
    {
        if(encryption != nullptr)
        {
            children["encryption"] = encryption;
        }
        else
        {
            encryption = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Encryption>();
            encryption->parent = this;
            children["encryption"] = encryption;
        }
        return children.at("encryption");
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute != nullptr)
        {
            children["fast-reroute"] = fast_reroute;
        }
        else
        {
            fast_reroute = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute>();
            fast_reroute->parent = this;
            children["fast-reroute"] = fast_reroute;
        }
        return children.at("fast-reroute");
    }

    if(child_yang_name == "graceful-restart")
    {
        if(graceful_restart != nullptr)
        {
            children["graceful-restart"] = graceful_restart;
        }
        else
        {
            graceful_restart = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::GracefulRestart>();
            graceful_restart->parent = this;
            children["graceful-restart"] = graceful_restart;
        }
        return children.at("graceful-restart");
    }

    if(child_yang_name == "ignore")
    {
        if(ignore != nullptr)
        {
            children["ignore"] = ignore;
        }
        else
        {
            ignore = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Ignore>();
            ignore->parent = this;
            children["ignore"] = ignore;
        }
        return children.at("ignore");
    }

    if(child_yang_name == "maximum")
    {
        if(maximum != nullptr)
        {
            children["maximum"] = maximum;
        }
        else
        {
            maximum = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Maximum>();
            maximum->parent = this;
            children["maximum"] = maximum;
        }
        return children.at("maximum");
    }

    if(child_yang_name == "process-scope")
    {
        if(process_scope != nullptr)
        {
            children["process-scope"] = process_scope;
        }
        else
        {
            process_scope = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::ProcessScope>();
            process_scope->parent = this;
            children["process-scope"] = process_scope;
        }
        return children.at("process-scope");
    }

    if(child_yang_name == "redistributes")
    {
        if(redistributes != nullptr)
        {
            children["redistributes"] = redistributes;
        }
        else
        {
            redistributes = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Redistributes>();
            redistributes->parent = this;
            children["redistributes"] = redistributes;
        }
        return children.at("redistributes");
    }

    if(child_yang_name == "snmp")
    {
        if(snmp != nullptr)
        {
            children["snmp"] = snmp;
        }
        else
        {
            snmp = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Snmp>();
            snmp->parent = this;
            children["snmp"] = snmp;
        }
        return children.at("snmp");
    }

    if(child_yang_name == "stub-router")
    {
        if(stub_router != nullptr)
        {
            children["stub-router"] = stub_router;
        }
        else
        {
            stub_router = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::StubRouter>();
            stub_router->parent = this;
            children["stub-router"] = stub_router;
        }
        return children.at("stub-router");
    }

    if(child_yang_name == "summary-prefixes")
    {
        if(summary_prefixes != nullptr)
        {
            children["summary-prefixes"] = summary_prefixes;
        }
        else
        {
            summary_prefixes = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes>();
            summary_prefixes->parent = this;
            children["summary-prefixes"] = summary_prefixes;
        }
        return children.at("summary-prefixes");
    }

    if(child_yang_name == "timers")
    {
        if(timers != nullptr)
        {
            children["timers"] = timers;
        }
        else
        {
            timers = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Timers>();
            timers->parent = this;
            children["timers"] = timers;
        }
        return children.at("timers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::get_children()
{
    if(children.find("area-addresses") == children.end())
    {
        if(area_addresses != nullptr)
        {
            children["area-addresses"] = area_addresses;
        }
    }

    if(children.find("authentication") == children.end())
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication;
        }
    }

    if(children.find("auto-cost") == children.end())
    {
        if(auto_cost != nullptr)
        {
            children["auto-cost"] = auto_cost;
        }
    }

    if(children.find("bfd") == children.end())
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd;
        }
    }

    if(children.find("capability") == children.end())
    {
        if(capability != nullptr)
        {
            children["capability"] = capability;
        }
    }

    if(children.find("database-filter") == children.end())
    {
        if(database_filter != nullptr)
        {
            children["database-filter"] = database_filter;
        }
    }

    if(children.find("default-information") == children.end())
    {
        if(default_information != nullptr)
        {
            children["default-information"] = default_information;
        }
    }

    if(children.find("distance") == children.end())
    {
        if(distance != nullptr)
        {
            children["distance"] = distance;
        }
    }

    if(children.find("distribute-list") == children.end())
    {
        if(distribute_list != nullptr)
        {
            children["distribute-list"] = distribute_list;
        }
    }

    if(children.find("distribute-list-out") == children.end())
    {
        if(distribute_list_out != nullptr)
        {
            children["distribute-list-out"] = distribute_list_out;
        }
    }

    if(children.find("domain-id") == children.end())
    {
        if(domain_id != nullptr)
        {
            children["domain-id"] = domain_id;
        }
    }

    if(children.find("encryption") == children.end())
    {
        if(encryption != nullptr)
        {
            children["encryption"] = encryption;
        }
    }

    if(children.find("fast-reroute") == children.end())
    {
        if(fast_reroute != nullptr)
        {
            children["fast-reroute"] = fast_reroute;
        }
    }

    if(children.find("graceful-restart") == children.end())
    {
        if(graceful_restart != nullptr)
        {
            children["graceful-restart"] = graceful_restart;
        }
    }

    if(children.find("ignore") == children.end())
    {
        if(ignore != nullptr)
        {
            children["ignore"] = ignore;
        }
    }

    if(children.find("maximum") == children.end())
    {
        if(maximum != nullptr)
        {
            children["maximum"] = maximum;
        }
    }

    if(children.find("process-scope") == children.end())
    {
        if(process_scope != nullptr)
        {
            children["process-scope"] = process_scope;
        }
    }

    if(children.find("redistributes") == children.end())
    {
        if(redistributes != nullptr)
        {
            children["redistributes"] = redistributes;
        }
    }

    if(children.find("snmp") == children.end())
    {
        if(snmp != nullptr)
        {
            children["snmp"] = snmp;
        }
    }

    if(children.find("stub-router") == children.end())
    {
        if(stub_router != nullptr)
        {
            children["stub-router"] = stub_router;
        }
    }

    if(children.find("summary-prefixes") == children.end())
    {
        if(summary_prefixes != nullptr)
        {
            children["summary-prefixes"] = summary_prefixes;
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

void Ospfv3::Processes::Process::Vrfs::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "dead-interval")
    {
        dead_interval = value;
    }
    if(value_path == "default-metric")
    {
        default_metric = value;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "log-adjacency-changes")
    {
        log_adjacency_changes = value;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore = value;
    }
    if(value_path == "network")
    {
        network = value;
    }
    if(value_path == "packet-size")
    {
        packet_size = value;
    }
    if(value_path == "passive")
    {
        passive = value;
    }
    if(value_path == "prefix-suppression")
    {
        prefix_suppression = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
    if(value_path == "snmpvrf-trap")
    {
        snmpvrf_trap = value;
    }
    if(value_path == "spf-prefix-priority-policy")
    {
        spf_prefix_priority_policy = value;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Capability::Capability()
    :
    vrf_lite{YType::boolean, "vrf-lite"}
{
    yang_name = "capability"; yang_parent_name = "vrf";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Capability::~Capability()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Capability::has_data() const
{
    return vrf_lite.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Capability::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf_lite.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Capability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capability";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Capability::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Capability' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_lite.is_set || is_set(vrf_lite.operation)) leaf_name_data.push_back(vrf_lite.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Capability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Capability::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Capability::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf-lite")
    {
        vrf_lite = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::DomainId()
    :
    primary_domain_id(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId>())
	,secondary_domain_ids(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds>())
{
    primary_domain_id->parent = this;
    children["primary-domain-id"] = primary_domain_id;

    secondary_domain_ids->parent = this;
    children["secondary-domain-ids"] = secondary_domain_ids;

    yang_name = "domain-id"; yang_parent_name = "vrf";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::~DomainId()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::has_data() const
{
    return (primary_domain_id !=  nullptr && primary_domain_id->has_data())
	|| (secondary_domain_ids !=  nullptr && secondary_domain_ids->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::has_operation() const
{
    return is_set(operation)
	|| (primary_domain_id !=  nullptr && primary_domain_id->has_operation())
	|| (secondary_domain_ids !=  nullptr && secondary_domain_ids->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-id";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DomainId' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "primary-domain-id")
    {
        if(primary_domain_id != nullptr)
        {
            children["primary-domain-id"] = primary_domain_id;
        }
        else
        {
            primary_domain_id = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId>();
            primary_domain_id->parent = this;
            children["primary-domain-id"] = primary_domain_id;
        }
        return children.at("primary-domain-id");
    }

    if(child_yang_name == "secondary-domain-ids")
    {
        if(secondary_domain_ids != nullptr)
        {
            children["secondary-domain-ids"] = secondary_domain_ids;
        }
        else
        {
            secondary_domain_ids = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds>();
            secondary_domain_ids->parent = this;
            children["secondary-domain-ids"] = secondary_domain_ids;
        }
        return children.at("secondary-domain-ids");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::get_children()
{
    if(children.find("primary-domain-id") == children.end())
    {
        if(primary_domain_id != nullptr)
        {
            children["primary-domain-id"] = primary_domain_id;
        }
    }

    if(children.find("secondary-domain-ids") == children.end())
    {
        if(secondary_domain_ids != nullptr)
        {
            children["secondary-domain-ids"] = secondary_domain_ids;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainIds()
{
    yang_name = "secondary-domain-ids"; yang_parent_name = "domain-id";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::~SecondaryDomainIds()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::has_data() const
{
    for (std::size_t index=0; index<secondary_domain_id.size(); index++)
    {
        if(secondary_domain_id[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::has_operation() const
{
    for (std::size_t index=0; index<secondary_domain_id.size(); index++)
    {
        if(secondary_domain_id[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-domain-ids";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SecondaryDomainIds' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "secondary-domain-id")
    {
        for(auto const & c : secondary_domain_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId>();
        c->parent = this;
        secondary_domain_id.push_back(std::move(c));
        children[segment_path] = secondary_domain_id.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::get_children()
{
    for (auto const & c : secondary_domain_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId::SecondaryDomainId()
    :
    domain_id_name{YType::str, "domain-id-name"},
    domain_id_type{YType::enumeration, "domain-id-type"}
{
    yang_name = "secondary-domain-id"; yang_parent_name = "secondary-domain-ids";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId::~SecondaryDomainId()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId::has_data() const
{
    return domain_id_name.is_set
	|| domain_id_type.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId::has_operation() const
{
    return is_set(operation)
	|| is_set(domain_id_name.operation)
	|| is_set(domain_id_type.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary-domain-id" <<"[domain-id-name='" <<domain_id_name <<"']" <<"[domain-id-type='" <<domain_id_type <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SecondaryDomainId' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_id_name.is_set || is_set(domain_id_name.operation)) leaf_name_data.push_back(domain_id_name.get_name_leafdata());
    if (domain_id_type.is_set || is_set(domain_id_type.operation)) leaf_name_data.push_back(domain_id_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::SecondaryDomainIds::SecondaryDomainId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain-id-name")
    {
        domain_id_name = value;
    }
    if(value_path == "domain-id-type")
    {
        domain_id_type = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId::PrimaryDomainId()
    :
    domain_id_name{YType::str, "domain-id-name"},
    domain_id_type{YType::enumeration, "domain-id-type"}
{
    yang_name = "primary-domain-id"; yang_parent_name = "domain-id";
}

Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId::~PrimaryDomainId()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId::has_data() const
{
    return domain_id_name.is_set
	|| domain_id_type.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId::has_operation() const
{
    return is_set(operation)
	|| is_set(domain_id_name.operation)
	|| is_set(domain_id_type.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary-domain-id";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrimaryDomainId' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_id_name.is_set || is_set(domain_id_name.operation)) leaf_name_data.push_back(domain_id_name.get_name_leafdata());
    if (domain_id_type.is_set || is_set(domain_id_type.operation)) leaf_name_data.push_back(domain_id_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::DomainId::PrimaryDomainId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain-id-name")
    {
        domain_id_name = value;
    }
    if(value_path == "domain-id-type")
    {
        domain_id_type = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddresses()
{
    yang_name = "area-addresses"; yang_parent_name = "vrf";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::~AreaAddresses()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::has_data() const
{
    for (std::size_t index=0; index<area_address.size(); index++)
    {
        if(area_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<area_area_id.size(); index++)
    {
        if(area_area_id[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::has_operation() const
{
    for (std::size_t index=0; index<area_address.size(); index++)
    {
        if(area_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<area_area_id.size(); index++)
    {
        if(area_area_id[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-addresses";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AreaAddresses' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "area-address")
    {
        for(auto const & c : area_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress>();
        c->parent = this;
        area_address.push_back(std::move(c));
        children[segment_path] = area_address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "area-area-id")
    {
        for(auto const & c : area_area_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId>();
        c->parent = this;
        area_area_id.push_back(std::move(c));
        children[segment_path] = area_area_id.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::get_children()
{
    for (auto const & c : area_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    for (auto const & c : area_area_id)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaAddress()
    :
    address{YType::str, "address"},
    cost{YType::uint32, "cost"},
    dead_interval{YType::uint32, "dead-interval"},
    default_cost{YType::uint32, "default-cost"},
    demand_circuit{YType::boolean, "demand-circuit"},
    enable{YType::empty, "enable"},
    flood_reduction{YType::boolean, "flood-reduction"},
    hello_interval{YType::uint32, "hello-interval"},
    instance{YType::uint32, "instance"},
    ldp_sync{YType::boolean, "ldp-sync"},
    mtu_ignore{YType::boolean, "mtu-ignore"},
    network{YType::enumeration, "network"},
    packet_size{YType::uint32, "packet-size"},
    passive{YType::boolean, "passive"},
    prefix_suppression{YType::boolean, "prefix-suppression"},
    priority{YType::uint32, "priority"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    stub{YType::boolean, "stub"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    area_scope(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope>())
	,authentication(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Authentication>())
	,bfd(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Bfd>())
	,database_filter(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter>())
	,distribute_list(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList>())
	,encryption(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Encryption>())
	,interfaces(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces>())
	,nssa(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa>())
	,ranges(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges>())
	,sham_links(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks>())
	,virtual_links(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks>())
{
    area_scope->parent = this;
    children["area-scope"] = area_scope;

    authentication->parent = this;
    children["authentication"] = authentication;

    bfd->parent = this;
    children["bfd"] = bfd;

    database_filter->parent = this;
    children["database-filter"] = database_filter;

    distribute_list->parent = this;
    children["distribute-list"] = distribute_list;

    encryption->parent = this;
    children["encryption"] = encryption;

    interfaces->parent = this;
    children["interfaces"] = interfaces;

    nssa->parent = this;
    children["nssa"] = nssa;

    ranges->parent = this;
    children["ranges"] = ranges;

    sham_links->parent = this;
    children["sham-links"] = sham_links;

    virtual_links->parent = this;
    children["virtual-links"] = virtual_links;

    yang_name = "area-address"; yang_parent_name = "area-addresses";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::~AreaAddress()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::has_data() const
{
    return address.is_set
	|| cost.is_set
	|| dead_interval.is_set
	|| default_cost.is_set
	|| demand_circuit.is_set
	|| enable.is_set
	|| flood_reduction.is_set
	|| hello_interval.is_set
	|| instance.is_set
	|| ldp_sync.is_set
	|| mtu_ignore.is_set
	|| network.is_set
	|| packet_size.is_set
	|| passive.is_set
	|| prefix_suppression.is_set
	|| priority.is_set
	|| retransmit_interval.is_set
	|| stub.is_set
	|| transmit_delay.is_set
	|| (area_scope !=  nullptr && area_scope->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (database_filter !=  nullptr && database_filter->has_data())
	|| (distribute_list !=  nullptr && distribute_list->has_data())
	|| (encryption !=  nullptr && encryption->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (nssa !=  nullptr && nssa->has_data())
	|| (ranges !=  nullptr && ranges->has_data())
	|| (sham_links !=  nullptr && sham_links->has_data())
	|| (virtual_links !=  nullptr && virtual_links->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(cost.operation)
	|| is_set(dead_interval.operation)
	|| is_set(default_cost.operation)
	|| is_set(demand_circuit.operation)
	|| is_set(enable.operation)
	|| is_set(flood_reduction.operation)
	|| is_set(hello_interval.operation)
	|| is_set(instance.operation)
	|| is_set(ldp_sync.operation)
	|| is_set(mtu_ignore.operation)
	|| is_set(network.operation)
	|| is_set(packet_size.operation)
	|| is_set(passive.operation)
	|| is_set(prefix_suppression.operation)
	|| is_set(priority.operation)
	|| is_set(retransmit_interval.operation)
	|| is_set(stub.operation)
	|| is_set(transmit_delay.operation)
	|| (area_scope !=  nullptr && area_scope->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (database_filter !=  nullptr && database_filter->has_operation())
	|| (distribute_list !=  nullptr && distribute_list->has_operation())
	|| (encryption !=  nullptr && encryption->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (nssa !=  nullptr && nssa->has_operation())
	|| (ranges !=  nullptr && ranges->has_operation())
	|| (sham_links !=  nullptr && sham_links->has_operation())
	|| (virtual_links !=  nullptr && virtual_links->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-address" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AreaAddress' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.operation)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (default_cost.is_set || is_set(default_cost.operation)) leaf_name_data.push_back(default_cost.get_name_leafdata());
    if (demand_circuit.is_set || is_set(demand_circuit.operation)) leaf_name_data.push_back(demand_circuit.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (flood_reduction.is_set || is_set(flood_reduction.operation)) leaf_name_data.push_back(flood_reduction.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (ldp_sync.is_set || is_set(ldp_sync.operation)) leaf_name_data.push_back(ldp_sync.get_name_leafdata());
    if (mtu_ignore.is_set || is_set(mtu_ignore.operation)) leaf_name_data.push_back(mtu_ignore.get_name_leafdata());
    if (network.is_set || is_set(network.operation)) leaf_name_data.push_back(network.get_name_leafdata());
    if (packet_size.is_set || is_set(packet_size.operation)) leaf_name_data.push_back(packet_size.get_name_leafdata());
    if (passive.is_set || is_set(passive.operation)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (prefix_suppression.is_set || is_set(prefix_suppression.operation)) leaf_name_data.push_back(prefix_suppression.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.operation)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (stub.is_set || is_set(stub.operation)) leaf_name_data.push_back(stub.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.operation)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "area-scope")
    {
        if(area_scope != nullptr)
        {
            children["area-scope"] = area_scope;
        }
        else
        {
            area_scope = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope>();
            area_scope->parent = this;
            children["area-scope"] = area_scope;
        }
        return children.at("area-scope");
    }

    if(child_yang_name == "authentication")
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication;
        }
        else
        {
            authentication = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Authentication>();
            authentication->parent = this;
            children["authentication"] = authentication;
        }
        return children.at("authentication");
    }

    if(child_yang_name == "bfd")
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd;
        }
        else
        {
            bfd = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Bfd>();
            bfd->parent = this;
            children["bfd"] = bfd;
        }
        return children.at("bfd");
    }

    if(child_yang_name == "database-filter")
    {
        if(database_filter != nullptr)
        {
            children["database-filter"] = database_filter;
        }
        else
        {
            database_filter = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter>();
            database_filter->parent = this;
            children["database-filter"] = database_filter;
        }
        return children.at("database-filter");
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list != nullptr)
        {
            children["distribute-list"] = distribute_list;
        }
        else
        {
            distribute_list = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList>();
            distribute_list->parent = this;
            children["distribute-list"] = distribute_list;
        }
        return children.at("distribute-list");
    }

    if(child_yang_name == "encryption")
    {
        if(encryption != nullptr)
        {
            children["encryption"] = encryption;
        }
        else
        {
            encryption = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Encryption>();
            encryption->parent = this;
            children["encryption"] = encryption;
        }
        return children.at("encryption");
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
        else
        {
            interfaces = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces;
        }
        return children.at("interfaces");
    }

    if(child_yang_name == "nssa")
    {
        if(nssa != nullptr)
        {
            children["nssa"] = nssa;
        }
        else
        {
            nssa = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa>();
            nssa->parent = this;
            children["nssa"] = nssa;
        }
        return children.at("nssa");
    }

    if(child_yang_name == "ranges")
    {
        if(ranges != nullptr)
        {
            children["ranges"] = ranges;
        }
        else
        {
            ranges = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges>();
            ranges->parent = this;
            children["ranges"] = ranges;
        }
        return children.at("ranges");
    }

    if(child_yang_name == "sham-links")
    {
        if(sham_links != nullptr)
        {
            children["sham-links"] = sham_links;
        }
        else
        {
            sham_links = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks>();
            sham_links->parent = this;
            children["sham-links"] = sham_links;
        }
        return children.at("sham-links");
    }

    if(child_yang_name == "virtual-links")
    {
        if(virtual_links != nullptr)
        {
            children["virtual-links"] = virtual_links;
        }
        else
        {
            virtual_links = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks>();
            virtual_links->parent = this;
            children["virtual-links"] = virtual_links;
        }
        return children.at("virtual-links");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::get_children()
{
    if(children.find("area-scope") == children.end())
    {
        if(area_scope != nullptr)
        {
            children["area-scope"] = area_scope;
        }
    }

    if(children.find("authentication") == children.end())
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication;
        }
    }

    if(children.find("bfd") == children.end())
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd;
        }
    }

    if(children.find("database-filter") == children.end())
    {
        if(database_filter != nullptr)
        {
            children["database-filter"] = database_filter;
        }
    }

    if(children.find("distribute-list") == children.end())
    {
        if(distribute_list != nullptr)
        {
            children["distribute-list"] = distribute_list;
        }
    }

    if(children.find("encryption") == children.end())
    {
        if(encryption != nullptr)
        {
            children["encryption"] = encryption;
        }
    }

    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
    }

    if(children.find("nssa") == children.end())
    {
        if(nssa != nullptr)
        {
            children["nssa"] = nssa;
        }
    }

    if(children.find("ranges") == children.end())
    {
        if(ranges != nullptr)
        {
            children["ranges"] = ranges;
        }
    }

    if(children.find("sham-links") == children.end())
    {
        if(sham_links != nullptr)
        {
            children["sham-links"] = sham_links;
        }
    }

    if(children.find("virtual-links") == children.end())
    {
        if(virtual_links != nullptr)
        {
            children["virtual-links"] = virtual_links;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "dead-interval")
    {
        dead_interval = value;
    }
    if(value_path == "default-cost")
    {
        default_cost = value;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "ldp-sync")
    {
        ldp_sync = value;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore = value;
    }
    if(value_path == "network")
    {
        network = value;
    }
    if(value_path == "packet-size")
    {
        packet_size = value;
    }
    if(value_path == "passive")
    {
        passive = value;
    }
    if(value_path == "prefix-suppression")
    {
        prefix_suppression = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
    }
    if(value_path == "stub")
    {
        stub = value;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Authentication::Authentication()
    :
    algorithm{YType::enumeration, "algorithm"},
    enable{YType::boolean, "enable"},
    password{YType::str, "password"},
    spi{YType::uint32, "spi"}
{
    yang_name = "authentication"; yang_parent_name = "area-address";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Authentication::~Authentication()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Authentication::has_data() const
{
    return algorithm.is_set
	|| enable.is_set
	|| password.is_set
	|| spi.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(algorithm.operation)
	|| is_set(enable.operation)
	|| is_set(password.operation)
	|| is_set(spi.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (algorithm.is_set || is_set(algorithm.operation)) leaf_name_data.push_back(algorithm.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());
    if (spi.is_set || is_set(spi.operation)) leaf_name_data.push_back(spi.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Authentication::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "algorithm")
    {
        algorithm = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
    if(value_path == "spi")
    {
        spi = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Bfd::Bfd()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    fast_detect_mode{YType::enumeration, "fast-detect-mode"},
    interval{YType::uint32, "interval"}
{
    yang_name = "bfd"; yang_parent_name = "area-address";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Bfd::~Bfd()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Bfd::has_data() const
{
    return detection_multiplier.is_set
	|| fast_detect_mode.is_set
	|| interval.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Bfd::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(fast_detect_mode.operation)
	|| is_set(interval.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bfd' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (fast_detect_mode.is_set || is_set(fast_detect_mode.operation)) leaf_name_data.push_back(fast_detect_mode.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Bfd::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Bfd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "fast-detect-mode")
    {
        fast_detect_mode = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges::Ranges()
{
    yang_name = "ranges"; yang_parent_name = "area-address";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges::~Ranges()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ranges";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ranges' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges::Range>();
        c->parent = this;
        range.push_back(std::move(c));
        children[segment_path] = range.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges::get_children()
{
    for (auto const & c : range)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges::Range::Range()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    cost{YType::uint32, "cost"},
    not_advertise{YType::boolean, "not-advertise"}
{
    yang_name = "range"; yang_parent_name = "ranges";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges::Range::~Range()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges::Range::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| cost.is_set
	|| not_advertise.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges::Range::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(cost.operation)
	|| is_set(not_advertise.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[prefix='" <<prefix <<"']" <<"[prefix-length='" <<prefix_length <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Range' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (not_advertise.is_set || is_set(not_advertise.operation)) leaf_name_data.push_back(not_advertise.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges::Range::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Ranges::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "not-advertise")
    {
        not_advertise = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Encryption::Encryption()
    :
    authentication_algorithm{YType::enumeration, "authentication-algorithm"},
    authentication_password{YType::str, "authentication-password"},
    enable{YType::boolean, "enable"},
    encryption_algorithm{YType::enumeration, "encryption-algorithm"},
    encryption_password{YType::str, "encryption-password"},
    spi{YType::uint32, "spi"}
{
    yang_name = "encryption"; yang_parent_name = "area-address";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Encryption::~Encryption()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Encryption::has_data() const
{
    return authentication_algorithm.is_set
	|| authentication_password.is_set
	|| enable.is_set
	|| encryption_algorithm.is_set
	|| encryption_password.is_set
	|| spi.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Encryption::has_operation() const
{
    return is_set(operation)
	|| is_set(authentication_algorithm.operation)
	|| is_set(authentication_password.operation)
	|| is_set(enable.operation)
	|| is_set(encryption_algorithm.operation)
	|| is_set(encryption_password.operation)
	|| is_set(spi.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Encryption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Encryption' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_algorithm.is_set || is_set(authentication_algorithm.operation)) leaf_name_data.push_back(authentication_algorithm.get_name_leafdata());
    if (authentication_password.is_set || is_set(authentication_password.operation)) leaf_name_data.push_back(authentication_password.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (encryption_algorithm.is_set || is_set(encryption_algorithm.operation)) leaf_name_data.push_back(encryption_algorithm.get_name_leafdata());
    if (encryption_password.is_set || is_set(encryption_password.operation)) leaf_name_data.push_back(encryption_password.get_name_leafdata());
    if (spi.is_set || is_set(spi.operation)) leaf_name_data.push_back(spi.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Encryption::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Encryption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authentication-algorithm")
    {
        authentication_algorithm = value;
    }
    if(value_path == "authentication-password")
    {
        authentication_password = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "encryption-algorithm")
    {
        encryption_algorithm = value;
    }
    if(value_path == "encryption-password")
    {
        encryption_password = value;
    }
    if(value_path == "spi")
    {
        spi = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa::Nssa()
    :
    default_info_originate{YType::boolean, "default-info-originate"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    no_redistribution{YType::boolean, "no-redistribution"},
    no_summary{YType::empty, "no-summary"}
{
    yang_name = "nssa"; yang_parent_name = "area-address";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa::~Nssa()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa::has_data() const
{
    return default_info_originate.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| no_redistribution.is_set
	|| no_summary.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa::has_operation() const
{
    return is_set(operation)
	|| is_set(default_info_originate.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(no_redistribution.operation)
	|| is_set(no_summary.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nssa' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_info_originate.is_set || is_set(default_info_originate.operation)) leaf_name_data.push_back(default_info_originate.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (no_redistribution.is_set || is_set(no_redistribution.operation)) leaf_name_data.push_back(no_redistribution.get_name_leafdata());
    if (no_summary.is_set || is_set(no_summary.operation)) leaf_name_data.push_back(no_summary.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Nssa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default-info-originate")
    {
        default_info_originate = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "no-redistribution")
    {
        no_redistribution = value;
    }
    if(value_path == "no-summary")
    {
        no_summary = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter::DatabaseFilter()
    :
    all(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter::All>())
{
    all->parent = this;
    children["all"] = all;

    yang_name = "database-filter"; yang_parent_name = "area-address";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter::~DatabaseFilter()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter::has_data() const
{
    return (all !=  nullptr && all->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter::has_operation() const
{
    return is_set(operation)
	|| (all !=  nullptr && all->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseFilter' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "all")
    {
        if(all != nullptr)
        {
            children["all"] = all;
        }
        else
        {
            all = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter::All>();
            all->parent = this;
            children["all"] = all;
        }
        return children.at("all");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter::get_children()
{
    if(children.find("all") == children.end())
    {
        if(all != nullptr)
        {
            children["all"] = all;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter::All::All()
    :
    out{YType::boolean, "out"}
{
    yang_name = "all"; yang_parent_name = "database-filter";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter::All::~All()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter::All::has_data() const
{
    return out.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter::All::has_operation() const
{
    return is_set(operation)
	|| is_set(out.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter::All::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'All' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out.is_set || is_set(out.operation)) leaf_name_data.push_back(out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter::All::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DatabaseFilter::All::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "out")
    {
        out = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList::DistributeList()
    :
    in(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList::In>())
{
    in->parent = this;
    children["in"] = in;

    yang_name = "distribute-list"; yang_parent_name = "area-address";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList::~DistributeList()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList::has_data() const
{
    return (in !=  nullptr && in->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList::has_operation() const
{
    return is_set(operation)
	|| (in !=  nullptr && in->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DistributeList' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "in")
    {
        if(in != nullptr)
        {
            children["in"] = in;
        }
        else
        {
            in = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList::In>();
            in->parent = this;
            children["in"] = in;
        }
        return children.at("in");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList::get_children()
{
    if(children.find("in") == children.end())
    {
        if(in != nullptr)
        {
            children["in"] = in;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList::In::In()
    :
    prefix_list{YType::str, "prefix-list"}
{
    yang_name = "in"; yang_parent_name = "distribute-list";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList::In::~In()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList::In::has_data() const
{
    return prefix_list.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList::In::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix_list.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList::In::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'In' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list.is_set || is_set(prefix_list.operation)) leaf_name_data.push_back(prefix_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList::In::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::DistributeList::In::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-list")
    {
        prefix_list = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "area-address";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::~Interfaces()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interfaces' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::get_children()
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

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    cost{YType::uint32, "cost"},
    dead_interval{YType::uint32, "dead-interval"},
    demand_circuit{YType::boolean, "demand-circuit"},
    enable{YType::empty, "enable"},
    flood_reduction{YType::boolean, "flood-reduction"},
    hello_interval{YType::uint32, "hello-interval"},
    instance{YType::uint32, "instance"},
    ldp_sync{YType::boolean, "ldp-sync"},
    mtu_ignore{YType::boolean, "mtu-ignore"},
    network{YType::enumeration, "network"},
    packet_size{YType::uint32, "packet-size"},
    passive{YType::boolean, "passive"},
    prefix_suppression{YType::boolean, "prefix-suppression"},
    priority{YType::uint32, "priority"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    authentication(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Authentication>())
	,bfd(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Bfd>())
	,database_filter(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter>())
	,distribute_list(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList>())
	,encryption(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Encryption>())
	,fast_reroute(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute>())
	,neighbors(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors>())
{
    authentication->parent = this;
    children["authentication"] = authentication;

    bfd->parent = this;
    children["bfd"] = bfd;

    database_filter->parent = this;
    children["database-filter"] = database_filter;

    distribute_list->parent = this;
    children["distribute-list"] = distribute_list;

    encryption->parent = this;
    children["encryption"] = encryption;

    fast_reroute->parent = this;
    children["fast-reroute"] = fast_reroute;

    neighbors->parent = this;
    children["neighbors"] = neighbors;

    yang_name = "interface"; yang_parent_name = "interfaces";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::~Interface()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| cost.is_set
	|| dead_interval.is_set
	|| demand_circuit.is_set
	|| enable.is_set
	|| flood_reduction.is_set
	|| hello_interval.is_set
	|| instance.is_set
	|| ldp_sync.is_set
	|| mtu_ignore.is_set
	|| network.is_set
	|| packet_size.is_set
	|| passive.is_set
	|| prefix_suppression.is_set
	|| priority.is_set
	|| retransmit_interval.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (database_filter !=  nullptr && database_filter->has_data())
	|| (distribute_list !=  nullptr && distribute_list->has_data())
	|| (encryption !=  nullptr && encryption->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(cost.operation)
	|| is_set(dead_interval.operation)
	|| is_set(demand_circuit.operation)
	|| is_set(enable.operation)
	|| is_set(flood_reduction.operation)
	|| is_set(hello_interval.operation)
	|| is_set(instance.operation)
	|| is_set(ldp_sync.operation)
	|| is_set(mtu_ignore.operation)
	|| is_set(network.operation)
	|| is_set(packet_size.operation)
	|| is_set(passive.operation)
	|| is_set(prefix_suppression.operation)
	|| is_set(priority.operation)
	|| is_set(retransmit_interval.operation)
	|| is_set(transmit_delay.operation)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (database_filter !=  nullptr && database_filter->has_operation())
	|| (distribute_list !=  nullptr && distribute_list->has_operation())
	|| (encryption !=  nullptr && encryption->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.operation)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (demand_circuit.is_set || is_set(demand_circuit.operation)) leaf_name_data.push_back(demand_circuit.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (flood_reduction.is_set || is_set(flood_reduction.operation)) leaf_name_data.push_back(flood_reduction.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (ldp_sync.is_set || is_set(ldp_sync.operation)) leaf_name_data.push_back(ldp_sync.get_name_leafdata());
    if (mtu_ignore.is_set || is_set(mtu_ignore.operation)) leaf_name_data.push_back(mtu_ignore.get_name_leafdata());
    if (network.is_set || is_set(network.operation)) leaf_name_data.push_back(network.get_name_leafdata());
    if (packet_size.is_set || is_set(packet_size.operation)) leaf_name_data.push_back(packet_size.get_name_leafdata());
    if (passive.is_set || is_set(passive.operation)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (prefix_suppression.is_set || is_set(prefix_suppression.operation)) leaf_name_data.push_back(prefix_suppression.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.operation)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.operation)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            authentication = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Authentication>();
            authentication->parent = this;
            children["authentication"] = authentication;
        }
        return children.at("authentication");
    }

    if(child_yang_name == "bfd")
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd;
        }
        else
        {
            bfd = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Bfd>();
            bfd->parent = this;
            children["bfd"] = bfd;
        }
        return children.at("bfd");
    }

    if(child_yang_name == "database-filter")
    {
        if(database_filter != nullptr)
        {
            children["database-filter"] = database_filter;
        }
        else
        {
            database_filter = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter>();
            database_filter->parent = this;
            children["database-filter"] = database_filter;
        }
        return children.at("database-filter");
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list != nullptr)
        {
            children["distribute-list"] = distribute_list;
        }
        else
        {
            distribute_list = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList>();
            distribute_list->parent = this;
            children["distribute-list"] = distribute_list;
        }
        return children.at("distribute-list");
    }

    if(child_yang_name == "encryption")
    {
        if(encryption != nullptr)
        {
            children["encryption"] = encryption;
        }
        else
        {
            encryption = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Encryption>();
            encryption->parent = this;
            children["encryption"] = encryption;
        }
        return children.at("encryption");
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute != nullptr)
        {
            children["fast-reroute"] = fast_reroute;
        }
        else
        {
            fast_reroute = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute>();
            fast_reroute->parent = this;
            children["fast-reroute"] = fast_reroute;
        }
        return children.at("fast-reroute");
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors != nullptr)
        {
            children["neighbors"] = neighbors;
        }
        else
        {
            neighbors = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors>();
            neighbors->parent = this;
            children["neighbors"] = neighbors;
        }
        return children.at("neighbors");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::get_children()
{
    if(children.find("authentication") == children.end())
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication;
        }
    }

    if(children.find("bfd") == children.end())
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd;
        }
    }

    if(children.find("database-filter") == children.end())
    {
        if(database_filter != nullptr)
        {
            children["database-filter"] = database_filter;
        }
    }

    if(children.find("distribute-list") == children.end())
    {
        if(distribute_list != nullptr)
        {
            children["distribute-list"] = distribute_list;
        }
    }

    if(children.find("encryption") == children.end())
    {
        if(encryption != nullptr)
        {
            children["encryption"] = encryption;
        }
    }

    if(children.find("fast-reroute") == children.end())
    {
        if(fast_reroute != nullptr)
        {
            children["fast-reroute"] = fast_reroute;
        }
    }

    if(children.find("neighbors") == children.end())
    {
        if(neighbors != nullptr)
        {
            children["neighbors"] = neighbors;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "dead-interval")
    {
        dead_interval = value;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "ldp-sync")
    {
        ldp_sync = value;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore = value;
    }
    if(value_path == "network")
    {
        network = value;
    }
    if(value_path == "packet-size")
    {
        packet_size = value;
    }
    if(value_path == "passive")
    {
        passive = value;
    }
    if(value_path == "prefix-suppression")
    {
        prefix_suppression = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Authentication::Authentication()
    :
    algorithm{YType::enumeration, "algorithm"},
    enable{YType::boolean, "enable"},
    password{YType::str, "password"},
    spi{YType::uint32, "spi"}
{
    yang_name = "authentication"; yang_parent_name = "interface";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Authentication::~Authentication()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Authentication::has_data() const
{
    return algorithm.is_set
	|| enable.is_set
	|| password.is_set
	|| spi.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(algorithm.operation)
	|| is_set(enable.operation)
	|| is_set(password.operation)
	|| is_set(spi.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (algorithm.is_set || is_set(algorithm.operation)) leaf_name_data.push_back(algorithm.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());
    if (spi.is_set || is_set(spi.operation)) leaf_name_data.push_back(spi.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Authentication::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "algorithm")
    {
        algorithm = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
    if(value_path == "spi")
    {
        spi = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::Neighbors()
{
    yang_name = "neighbors"; yang_parent_name = "interface";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::~Neighbors()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbors' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(std::move(c));
        children[segment_path] = neighbor.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::get_children()
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

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::Neighbor::Neighbor()
    :
    neighbor_address{YType::str, "neighbor-address"},
    cost{YType::uint32, "cost"},
    database_filter{YType::boolean, "database-filter"},
    poll_interval{YType::uint32, "poll-interval"},
    priority{YType::uint32, "priority"},
    zone{YType::str, "zone"}
{
    yang_name = "neighbor"; yang_parent_name = "neighbors";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::Neighbor::~Neighbor()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::Neighbor::has_data() const
{
    return neighbor_address.is_set
	|| cost.is_set
	|| database_filter.is_set
	|| poll_interval.is_set
	|| priority.is_set
	|| zone.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(neighbor_address.operation)
	|| is_set(cost.operation)
	|| is_set(database_filter.operation)
	|| is_set(poll_interval.operation)
	|| is_set(priority.operation)
	|| is_set(zone.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[neighbor-address='" <<neighbor_address <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (database_filter.is_set || is_set(database_filter.operation)) leaf_name_data.push_back(database_filter.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.operation)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (zone.is_set || is_set(zone.operation)) leaf_name_data.push_back(zone.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::Neighbor::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Neighbors::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "database-filter")
    {
        database_filter = value;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "zone")
    {
        zone = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Encryption::Encryption()
    :
    authentication_algorithm{YType::enumeration, "authentication-algorithm"},
    authentication_password{YType::str, "authentication-password"},
    enable{YType::boolean, "enable"},
    encryption_algorithm{YType::enumeration, "encryption-algorithm"},
    encryption_password{YType::str, "encryption-password"},
    spi{YType::uint32, "spi"}
{
    yang_name = "encryption"; yang_parent_name = "interface";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Encryption::~Encryption()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Encryption::has_data() const
{
    return authentication_algorithm.is_set
	|| authentication_password.is_set
	|| enable.is_set
	|| encryption_algorithm.is_set
	|| encryption_password.is_set
	|| spi.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Encryption::has_operation() const
{
    return is_set(operation)
	|| is_set(authentication_algorithm.operation)
	|| is_set(authentication_password.operation)
	|| is_set(enable.operation)
	|| is_set(encryption_algorithm.operation)
	|| is_set(encryption_password.operation)
	|| is_set(spi.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Encryption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Encryption' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_algorithm.is_set || is_set(authentication_algorithm.operation)) leaf_name_data.push_back(authentication_algorithm.get_name_leafdata());
    if (authentication_password.is_set || is_set(authentication_password.operation)) leaf_name_data.push_back(authentication_password.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (encryption_algorithm.is_set || is_set(encryption_algorithm.operation)) leaf_name_data.push_back(encryption_algorithm.get_name_leafdata());
    if (encryption_password.is_set || is_set(encryption_password.operation)) leaf_name_data.push_back(encryption_password.get_name_leafdata());
    if (spi.is_set || is_set(spi.operation)) leaf_name_data.push_back(spi.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Encryption::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Encryption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authentication-algorithm")
    {
        authentication_algorithm = value;
    }
    if(value_path == "authentication-password")
    {
        authentication_password = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "encryption-algorithm")
    {
        encryption_algorithm = value;
    }
    if(value_path == "encryption-password")
    {
        encryption_password = value;
    }
    if(value_path == "spi")
    {
        spi = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Bfd::Bfd()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    fast_detect_mode{YType::enumeration, "fast-detect-mode"},
    interval{YType::uint32, "interval"}
{
    yang_name = "bfd"; yang_parent_name = "interface";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Bfd::~Bfd()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Bfd::has_data() const
{
    return detection_multiplier.is_set
	|| fast_detect_mode.is_set
	|| interval.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Bfd::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(fast_detect_mode.operation)
	|| is_set(interval.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bfd' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (fast_detect_mode.is_set || is_set(fast_detect_mode.operation)) leaf_name_data.push_back(fast_detect_mode.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Bfd::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::Bfd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "fast-detect-mode")
    {
        fast_detect_mode = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::DatabaseFilter()
    :
    all(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::All>())
{
    all->parent = this;
    children["all"] = all;

    yang_name = "database-filter"; yang_parent_name = "interface";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::~DatabaseFilter()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::has_data() const
{
    return (all !=  nullptr && all->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::has_operation() const
{
    return is_set(operation)
	|| (all !=  nullptr && all->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseFilter' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "all")
    {
        if(all != nullptr)
        {
            children["all"] = all;
        }
        else
        {
            all = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::All>();
            all->parent = this;
            children["all"] = all;
        }
        return children.at("all");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::get_children()
{
    if(children.find("all") == children.end())
    {
        if(all != nullptr)
        {
            children["all"] = all;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::All::All()
    :
    out{YType::boolean, "out"}
{
    yang_name = "all"; yang_parent_name = "database-filter";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::All::~All()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::All::has_data() const
{
    return out.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::All::has_operation() const
{
    return is_set(operation)
	|| is_set(out.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::All::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'All' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out.is_set || is_set(out.operation)) leaf_name_data.push_back(out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::All::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DatabaseFilter::All::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "out")
    {
        out = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::DistributeList()
    :
    in(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::In>())
{
    in->parent = this;
    children["in"] = in;

    yang_name = "distribute-list"; yang_parent_name = "interface";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::~DistributeList()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::has_data() const
{
    return (in !=  nullptr && in->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::has_operation() const
{
    return is_set(operation)
	|| (in !=  nullptr && in->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DistributeList' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "in")
    {
        if(in != nullptr)
        {
            children["in"] = in;
        }
        else
        {
            in = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::In>();
            in->parent = this;
            children["in"] = in;
        }
        return children.at("in");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::get_children()
{
    if(children.find("in") == children.end())
    {
        if(in != nullptr)
        {
            children["in"] = in;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::In::In()
    :
    prefix_list{YType::str, "prefix-list"}
{
    yang_name = "in"; yang_parent_name = "distribute-list";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::In::~In()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::In::has_data() const
{
    return prefix_list.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::In::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix_list.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::In::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'In' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list.is_set || is_set(prefix_list.operation)) leaf_name_data.push_back(prefix_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::In::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::DistributeList::In::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-list")
    {
        prefix_list = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::FastReroute()
    :
    fast_reroute_enable{YType::enumeration, "fast-reroute-enable"}
    	,
    per_link(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink>())
	,per_prefix(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix>())
{
    per_link->parent = this;
    children["per-link"] = per_link;

    per_prefix->parent = this;
    children["per-prefix"] = per_prefix;

    yang_name = "fast-reroute"; yang_parent_name = "interface";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::~FastReroute()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::has_data() const
{
    return fast_reroute_enable.is_set
	|| (per_link !=  nullptr && per_link->has_data())
	|| (per_prefix !=  nullptr && per_prefix->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::has_operation() const
{
    return is_set(operation)
	|| is_set(fast_reroute_enable.operation)
	|| (per_link !=  nullptr && per_link->has_operation())
	|| (per_prefix !=  nullptr && per_prefix->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FastReroute' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_enable.is_set || is_set(fast_reroute_enable.operation)) leaf_name_data.push_back(fast_reroute_enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "per-link")
    {
        if(per_link != nullptr)
        {
            children["per-link"] = per_link;
        }
        else
        {
            per_link = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink>();
            per_link->parent = this;
            children["per-link"] = per_link;
        }
        return children.at("per-link");
    }

    if(child_yang_name == "per-prefix")
    {
        if(per_prefix != nullptr)
        {
            children["per-prefix"] = per_prefix;
        }
        else
        {
            per_prefix = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix>();
            per_prefix->parent = this;
            children["per-prefix"] = per_prefix;
        }
        return children.at("per-prefix");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::get_children()
{
    if(children.find("per-link") == children.end())
    {
        if(per_link != nullptr)
        {
            children["per-link"] = per_link;
        }
    }

    if(children.find("per-prefix") == children.end())
    {
        if(per_prefix != nullptr)
        {
            children["per-prefix"] = per_prefix;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fast-reroute-enable")
    {
        fast_reroute_enable = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::PerLink()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"}
    	,
    candidate_interfaces(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces>())
{
    candidate_interfaces->parent = this;
    children["candidate-interfaces"] = candidate_interfaces;

    exclude_interfaces->parent = this;
    children["exclude-interfaces"] = exclude_interfaces;

    yang_name = "per-link"; yang_parent_name = "fast-reroute";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::~PerLink()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::has_data() const
{
    return fast_reroute_use_candidate_only.is_set
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::has_operation() const
{
    return is_set(operation)
	|| is_set(fast_reroute_use_candidate_only.operation)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-link";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerLink' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.operation)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces != nullptr)
        {
            children["candidate-interfaces"] = candidate_interfaces;
        }
        else
        {
            candidate_interfaces = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces>();
            candidate_interfaces->parent = this;
            children["candidate-interfaces"] = candidate_interfaces;
        }
        return children.at("candidate-interfaces");
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
        else
        {
            exclude_interfaces = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces>();
            exclude_interfaces->parent = this;
            children["exclude-interfaces"] = exclude_interfaces;
        }
        return children.at("exclude-interfaces");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::get_children()
{
    if(children.find("candidate-interfaces") == children.end())
    {
        if(candidate_interfaces != nullptr)
        {
            children["candidate-interfaces"] = candidate_interfaces;
        }
    }

    if(children.find("exclude-interfaces") == children.end())
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterfaces()
{
    yang_name = "candidate-interfaces"; yang_parent_name = "per-link";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::~CandidateInterfaces()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateInterfaces' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-interface")
    {
        for(auto const & c : candidate_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(std::move(c));
        children[segment_path] = candidate_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::get_children()
{
    for (auto const & c : candidate_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::~CandidateInterface()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateInterface' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterfaces()
{
    yang_name = "exclude-interfaces"; yang_parent_name = "per-link";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterfaces' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "exclude-interface")
    {
        for(auto const & c : exclude_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(std::move(c));
        children[segment_path] = exclude_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::get_children()
{
    for (auto const & c : exclude_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterface' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::PerPrefix()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"}
    	,
    candidate_interfaces(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces>())
{
    candidate_interfaces->parent = this;
    children["candidate-interfaces"] = candidate_interfaces;

    exclude_interfaces->parent = this;
    children["exclude-interfaces"] = exclude_interfaces;

    yang_name = "per-prefix"; yang_parent_name = "fast-reroute";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::~PerPrefix()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::has_data() const
{
    return fast_reroute_use_candidate_only.is_set
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(fast_reroute_use_candidate_only.operation)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-prefix";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerPrefix' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.operation)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces != nullptr)
        {
            children["candidate-interfaces"] = candidate_interfaces;
        }
        else
        {
            candidate_interfaces = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces>();
            candidate_interfaces->parent = this;
            children["candidate-interfaces"] = candidate_interfaces;
        }
        return children.at("candidate-interfaces");
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
        else
        {
            exclude_interfaces = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces>();
            exclude_interfaces->parent = this;
            children["exclude-interfaces"] = exclude_interfaces;
        }
        return children.at("exclude-interfaces");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::get_children()
{
    if(children.find("candidate-interfaces") == children.end())
    {
        if(candidate_interfaces != nullptr)
        {
            children["candidate-interfaces"] = candidate_interfaces;
        }
    }

    if(children.find("exclude-interfaces") == children.end())
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterfaces()
{
    yang_name = "candidate-interfaces"; yang_parent_name = "per-prefix";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::~CandidateInterfaces()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateInterfaces' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-interface")
    {
        for(auto const & c : candidate_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(std::move(c));
        children[segment_path] = candidate_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::get_children()
{
    for (auto const & c : candidate_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::~CandidateInterface()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateInterface' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterfaces()
{
    yang_name = "exclude-interfaces"; yang_parent_name = "per-prefix";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterfaces' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "exclude-interface")
    {
        for(auto const & c : exclude_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(std::move(c));
        children[segment_path] = exclude_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::get_children()
{
    for (auto const & c : exclude_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterface' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::AreaScope()
    :
    fast_reroute(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute>())
{
    fast_reroute->parent = this;
    children["fast-reroute"] = fast_reroute;

    yang_name = "area-scope"; yang_parent_name = "area-address";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::~AreaScope()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::has_data() const
{
    return (fast_reroute !=  nullptr && fast_reroute->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::has_operation() const
{
    return is_set(operation)
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-scope";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AreaScope' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute != nullptr)
        {
            children["fast-reroute"] = fast_reroute;
        }
        else
        {
            fast_reroute = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute>();
            fast_reroute->parent = this;
            children["fast-reroute"] = fast_reroute;
        }
        return children.at("fast-reroute");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::get_children()
{
    if(children.find("fast-reroute") == children.end())
    {
        if(fast_reroute != nullptr)
        {
            children["fast-reroute"] = fast_reroute;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::FastReroute()
    :
    fast_reroute_enable{YType::enumeration, "fast-reroute-enable"}
    	,
    per_link(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink>())
	,per_prefix(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix>())
{
    per_link->parent = this;
    children["per-link"] = per_link;

    per_prefix->parent = this;
    children["per-prefix"] = per_prefix;

    yang_name = "fast-reroute"; yang_parent_name = "area-scope";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::~FastReroute()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::has_data() const
{
    return fast_reroute_enable.is_set
	|| (per_link !=  nullptr && per_link->has_data())
	|| (per_prefix !=  nullptr && per_prefix->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::has_operation() const
{
    return is_set(operation)
	|| is_set(fast_reroute_enable.operation)
	|| (per_link !=  nullptr && per_link->has_operation())
	|| (per_prefix !=  nullptr && per_prefix->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FastReroute' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_enable.is_set || is_set(fast_reroute_enable.operation)) leaf_name_data.push_back(fast_reroute_enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "per-link")
    {
        if(per_link != nullptr)
        {
            children["per-link"] = per_link;
        }
        else
        {
            per_link = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink>();
            per_link->parent = this;
            children["per-link"] = per_link;
        }
        return children.at("per-link");
    }

    if(child_yang_name == "per-prefix")
    {
        if(per_prefix != nullptr)
        {
            children["per-prefix"] = per_prefix;
        }
        else
        {
            per_prefix = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix>();
            per_prefix->parent = this;
            children["per-prefix"] = per_prefix;
        }
        return children.at("per-prefix");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::get_children()
{
    if(children.find("per-link") == children.end())
    {
        if(per_link != nullptr)
        {
            children["per-link"] = per_link;
        }
    }

    if(children.find("per-prefix") == children.end())
    {
        if(per_prefix != nullptr)
        {
            children["per-prefix"] = per_prefix;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fast-reroute-enable")
    {
        fast_reroute_enable = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::PerLink()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"}
    	,
    candidate_interfaces(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces>())
{
    candidate_interfaces->parent = this;
    children["candidate-interfaces"] = candidate_interfaces;

    exclude_interfaces->parent = this;
    children["exclude-interfaces"] = exclude_interfaces;

    yang_name = "per-link"; yang_parent_name = "fast-reroute";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::~PerLink()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::has_data() const
{
    return fast_reroute_use_candidate_only.is_set
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::has_operation() const
{
    return is_set(operation)
	|| is_set(fast_reroute_use_candidate_only.operation)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-link";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerLink' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.operation)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces != nullptr)
        {
            children["candidate-interfaces"] = candidate_interfaces;
        }
        else
        {
            candidate_interfaces = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces>();
            candidate_interfaces->parent = this;
            children["candidate-interfaces"] = candidate_interfaces;
        }
        return children.at("candidate-interfaces");
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
        else
        {
            exclude_interfaces = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces>();
            exclude_interfaces->parent = this;
            children["exclude-interfaces"] = exclude_interfaces;
        }
        return children.at("exclude-interfaces");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::get_children()
{
    if(children.find("candidate-interfaces") == children.end())
    {
        if(candidate_interfaces != nullptr)
        {
            children["candidate-interfaces"] = candidate_interfaces;
        }
    }

    if(children.find("exclude-interfaces") == children.end())
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterfaces()
{
    yang_name = "candidate-interfaces"; yang_parent_name = "per-link";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::~CandidateInterfaces()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateInterfaces' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-interface")
    {
        for(auto const & c : candidate_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(std::move(c));
        children[segment_path] = candidate_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::get_children()
{
    for (auto const & c : candidate_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::~CandidateInterface()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateInterface' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterfaces()
{
    yang_name = "exclude-interfaces"; yang_parent_name = "per-link";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterfaces' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "exclude-interface")
    {
        for(auto const & c : exclude_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(std::move(c));
        children[segment_path] = exclude_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::get_children()
{
    for (auto const & c : exclude_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterface' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::PerPrefix()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"}
    	,
    candidate_interfaces(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces>())
{
    candidate_interfaces->parent = this;
    children["candidate-interfaces"] = candidate_interfaces;

    exclude_interfaces->parent = this;
    children["exclude-interfaces"] = exclude_interfaces;

    yang_name = "per-prefix"; yang_parent_name = "fast-reroute";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::~PerPrefix()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::has_data() const
{
    return fast_reroute_use_candidate_only.is_set
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(fast_reroute_use_candidate_only.operation)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-prefix";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerPrefix' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.operation)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces != nullptr)
        {
            children["candidate-interfaces"] = candidate_interfaces;
        }
        else
        {
            candidate_interfaces = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces>();
            candidate_interfaces->parent = this;
            children["candidate-interfaces"] = candidate_interfaces;
        }
        return children.at("candidate-interfaces");
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
        else
        {
            exclude_interfaces = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces>();
            exclude_interfaces->parent = this;
            children["exclude-interfaces"] = exclude_interfaces;
        }
        return children.at("exclude-interfaces");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::get_children()
{
    if(children.find("candidate-interfaces") == children.end())
    {
        if(candidate_interfaces != nullptr)
        {
            children["candidate-interfaces"] = candidate_interfaces;
        }
    }

    if(children.find("exclude-interfaces") == children.end())
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterfaces()
{
    yang_name = "candidate-interfaces"; yang_parent_name = "per-prefix";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::~CandidateInterfaces()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateInterfaces' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-interface")
    {
        for(auto const & c : candidate_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(std::move(c));
        children[segment_path] = candidate_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::get_children()
{
    for (auto const & c : candidate_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::~CandidateInterface()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateInterface' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterfaces()
{
    yang_name = "exclude-interfaces"; yang_parent_name = "per-prefix";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterfaces' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "exclude-interface")
    {
        for(auto const & c : exclude_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(std::move(c));
        children[segment_path] = exclude_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::get_children()
{
    for (auto const & c : exclude_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterface' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLinks()
{
    yang_name = "sham-links"; yang_parent_name = "area-address";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::~ShamLinks()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::has_data() const
{
    for (std::size_t index=0; index<sham_link.size(); index++)
    {
        if(sham_link[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::has_operation() const
{
    for (std::size_t index=0; index<sham_link.size(); index++)
    {
        if(sham_link[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sham-links";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ShamLinks' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sham-link")
    {
        for(auto const & c : sham_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink>();
        c->parent = this;
        sham_link.push_back(std::move(c));
        children[segment_path] = sham_link.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::get_children()
{
    for (auto const & c : sham_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::ShamLink()
    :
    destination_address{YType::str, "destination-address"},
    source_address{YType::str, "source-address"},
    dead_interval{YType::uint32, "dead-interval"},
    enable{YType::empty, "enable"},
    hello_interval{YType::uint32, "hello-interval"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    authentication(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Authentication>())
	,encryption(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Encryption>())
{
    authentication->parent = this;
    children["authentication"] = authentication;

    encryption->parent = this;
    children["encryption"] = encryption;

    yang_name = "sham-link"; yang_parent_name = "sham-links";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::~ShamLink()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::has_data() const
{
    return destination_address.is_set
	|| source_address.is_set
	|| dead_interval.is_set
	|| enable.is_set
	|| hello_interval.is_set
	|| retransmit_interval.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (encryption !=  nullptr && encryption->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(source_address.operation)
	|| is_set(dead_interval.operation)
	|| is_set(enable.operation)
	|| is_set(hello_interval.operation)
	|| is_set(retransmit_interval.operation)
	|| is_set(transmit_delay.operation)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (encryption !=  nullptr && encryption->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sham-link" <<"[destination-address='" <<destination_address <<"']" <<"[source-address='" <<source_address <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ShamLink' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.operation)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.operation)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.operation)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            authentication = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Authentication>();
            authentication->parent = this;
            children["authentication"] = authentication;
        }
        return children.at("authentication");
    }

    if(child_yang_name == "encryption")
    {
        if(encryption != nullptr)
        {
            children["encryption"] = encryption;
        }
        else
        {
            encryption = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Encryption>();
            encryption->parent = this;
            children["encryption"] = encryption;
        }
        return children.at("encryption");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::get_children()
{
    if(children.find("authentication") == children.end())
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication;
        }
    }

    if(children.find("encryption") == children.end())
    {
        if(encryption != nullptr)
        {
            children["encryption"] = encryption;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "dead-interval")
    {
        dead_interval = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Authentication::Authentication()
    :
    algorithm{YType::enumeration, "algorithm"},
    enable{YType::boolean, "enable"},
    password{YType::str, "password"},
    spi{YType::uint32, "spi"}
{
    yang_name = "authentication"; yang_parent_name = "sham-link";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Authentication::~Authentication()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Authentication::has_data() const
{
    return algorithm.is_set
	|| enable.is_set
	|| password.is_set
	|| spi.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(algorithm.operation)
	|| is_set(enable.operation)
	|| is_set(password.operation)
	|| is_set(spi.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (algorithm.is_set || is_set(algorithm.operation)) leaf_name_data.push_back(algorithm.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());
    if (spi.is_set || is_set(spi.operation)) leaf_name_data.push_back(spi.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Authentication::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "algorithm")
    {
        algorithm = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
    if(value_path == "spi")
    {
        spi = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Encryption::Encryption()
    :
    authentication_algorithm{YType::enumeration, "authentication-algorithm"},
    authentication_password{YType::str, "authentication-password"},
    enable{YType::boolean, "enable"},
    encryption_algorithm{YType::enumeration, "encryption-algorithm"},
    encryption_password{YType::str, "encryption-password"},
    spi{YType::uint32, "spi"}
{
    yang_name = "encryption"; yang_parent_name = "sham-link";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Encryption::~Encryption()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Encryption::has_data() const
{
    return authentication_algorithm.is_set
	|| authentication_password.is_set
	|| enable.is_set
	|| encryption_algorithm.is_set
	|| encryption_password.is_set
	|| spi.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Encryption::has_operation() const
{
    return is_set(operation)
	|| is_set(authentication_algorithm.operation)
	|| is_set(authentication_password.operation)
	|| is_set(enable.operation)
	|| is_set(encryption_algorithm.operation)
	|| is_set(encryption_password.operation)
	|| is_set(spi.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Encryption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Encryption' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_algorithm.is_set || is_set(authentication_algorithm.operation)) leaf_name_data.push_back(authentication_algorithm.get_name_leafdata());
    if (authentication_password.is_set || is_set(authentication_password.operation)) leaf_name_data.push_back(authentication_password.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (encryption_algorithm.is_set || is_set(encryption_algorithm.operation)) leaf_name_data.push_back(encryption_algorithm.get_name_leafdata());
    if (encryption_password.is_set || is_set(encryption_password.operation)) leaf_name_data.push_back(encryption_password.get_name_leafdata());
    if (spi.is_set || is_set(spi.operation)) leaf_name_data.push_back(spi.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Encryption::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::ShamLinks::ShamLink::Encryption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authentication-algorithm")
    {
        authentication_algorithm = value;
    }
    if(value_path == "authentication-password")
    {
        authentication_password = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "encryption-algorithm")
    {
        encryption_algorithm = value;
    }
    if(value_path == "encryption-password")
    {
        encryption_password = value;
    }
    if(value_path == "spi")
    {
        spi = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLinks()
{
    yang_name = "virtual-links"; yang_parent_name = "area-address";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::~VirtualLinks()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::has_data() const
{
    for (std::size_t index=0; index<virtual_link.size(); index++)
    {
        if(virtual_link[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::has_operation() const
{
    for (std::size_t index=0; index<virtual_link.size(); index++)
    {
        if(virtual_link[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-links";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VirtualLinks' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "virtual-link")
    {
        for(auto const & c : virtual_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink>();
        c->parent = this;
        virtual_link.push_back(std::move(c));
        children[segment_path] = virtual_link.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::get_children()
{
    for (auto const & c : virtual_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::VirtualLink()
    :
    virtual_link_address{YType::str, "virtual-link-address"},
    dead_interval{YType::uint32, "dead-interval"},
    enable{YType::empty, "enable"},
    hello_interval{YType::uint32, "hello-interval"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    authentication(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Authentication>())
	,encryption(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Encryption>())
{
    authentication->parent = this;
    children["authentication"] = authentication;

    encryption->parent = this;
    children["encryption"] = encryption;

    yang_name = "virtual-link"; yang_parent_name = "virtual-links";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::~VirtualLink()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::has_data() const
{
    return virtual_link_address.is_set
	|| dead_interval.is_set
	|| enable.is_set
	|| hello_interval.is_set
	|| retransmit_interval.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (encryption !=  nullptr && encryption->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::has_operation() const
{
    return is_set(operation)
	|| is_set(virtual_link_address.operation)
	|| is_set(dead_interval.operation)
	|| is_set(enable.operation)
	|| is_set(hello_interval.operation)
	|| is_set(retransmit_interval.operation)
	|| is_set(transmit_delay.operation)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (encryption !=  nullptr && encryption->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-link" <<"[virtual-link-address='" <<virtual_link_address <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VirtualLink' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (virtual_link_address.is_set || is_set(virtual_link_address.operation)) leaf_name_data.push_back(virtual_link_address.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.operation)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.operation)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.operation)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            authentication = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Authentication>();
            authentication->parent = this;
            children["authentication"] = authentication;
        }
        return children.at("authentication");
    }

    if(child_yang_name == "encryption")
    {
        if(encryption != nullptr)
        {
            children["encryption"] = encryption;
        }
        else
        {
            encryption = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Encryption>();
            encryption->parent = this;
            children["encryption"] = encryption;
        }
        return children.at("encryption");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::get_children()
{
    if(children.find("authentication") == children.end())
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication;
        }
    }

    if(children.find("encryption") == children.end())
    {
        if(encryption != nullptr)
        {
            children["encryption"] = encryption;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "virtual-link-address")
    {
        virtual_link_address = value;
    }
    if(value_path == "dead-interval")
    {
        dead_interval = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Authentication::Authentication()
    :
    algorithm{YType::enumeration, "algorithm"},
    enable{YType::boolean, "enable"},
    password{YType::str, "password"},
    spi{YType::uint32, "spi"}
{
    yang_name = "authentication"; yang_parent_name = "virtual-link";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Authentication::~Authentication()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Authentication::has_data() const
{
    return algorithm.is_set
	|| enable.is_set
	|| password.is_set
	|| spi.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(algorithm.operation)
	|| is_set(enable.operation)
	|| is_set(password.operation)
	|| is_set(spi.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (algorithm.is_set || is_set(algorithm.operation)) leaf_name_data.push_back(algorithm.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());
    if (spi.is_set || is_set(spi.operation)) leaf_name_data.push_back(spi.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Authentication::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "algorithm")
    {
        algorithm = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
    if(value_path == "spi")
    {
        spi = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Encryption::Encryption()
    :
    authentication_algorithm{YType::enumeration, "authentication-algorithm"},
    authentication_password{YType::str, "authentication-password"},
    enable{YType::boolean, "enable"},
    encryption_algorithm{YType::enumeration, "encryption-algorithm"},
    encryption_password{YType::str, "encryption-password"},
    spi{YType::uint32, "spi"}
{
    yang_name = "encryption"; yang_parent_name = "virtual-link";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Encryption::~Encryption()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Encryption::has_data() const
{
    return authentication_algorithm.is_set
	|| authentication_password.is_set
	|| enable.is_set
	|| encryption_algorithm.is_set
	|| encryption_password.is_set
	|| spi.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Encryption::has_operation() const
{
    return is_set(operation)
	|| is_set(authentication_algorithm.operation)
	|| is_set(authentication_password.operation)
	|| is_set(enable.operation)
	|| is_set(encryption_algorithm.operation)
	|| is_set(encryption_password.operation)
	|| is_set(spi.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Encryption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Encryption' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_algorithm.is_set || is_set(authentication_algorithm.operation)) leaf_name_data.push_back(authentication_algorithm.get_name_leafdata());
    if (authentication_password.is_set || is_set(authentication_password.operation)) leaf_name_data.push_back(authentication_password.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (encryption_algorithm.is_set || is_set(encryption_algorithm.operation)) leaf_name_data.push_back(encryption_algorithm.get_name_leafdata());
    if (encryption_password.is_set || is_set(encryption_password.operation)) leaf_name_data.push_back(encryption_password.get_name_leafdata());
    if (spi.is_set || is_set(spi.operation)) leaf_name_data.push_back(spi.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Encryption::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAddress::VirtualLinks::VirtualLink::Encryption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authentication-algorithm")
    {
        authentication_algorithm = value;
    }
    if(value_path == "authentication-password")
    {
        authentication_password = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "encryption-algorithm")
    {
        encryption_algorithm = value;
    }
    if(value_path == "encryption-password")
    {
        encryption_password = value;
    }
    if(value_path == "spi")
    {
        spi = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaAreaId()
    :
    area_id{YType::int32, "area-id"},
    cost{YType::uint32, "cost"},
    dead_interval{YType::uint32, "dead-interval"},
    default_cost{YType::uint32, "default-cost"},
    demand_circuit{YType::boolean, "demand-circuit"},
    enable{YType::empty, "enable"},
    flood_reduction{YType::boolean, "flood-reduction"},
    hello_interval{YType::uint32, "hello-interval"},
    instance{YType::uint32, "instance"},
    ldp_sync{YType::boolean, "ldp-sync"},
    mtu_ignore{YType::boolean, "mtu-ignore"},
    network{YType::enumeration, "network"},
    packet_size{YType::uint32, "packet-size"},
    passive{YType::boolean, "passive"},
    prefix_suppression{YType::boolean, "prefix-suppression"},
    priority{YType::uint32, "priority"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    stub{YType::boolean, "stub"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    area_scope(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope>())
	,authentication(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Authentication>())
	,bfd(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Bfd>())
	,database_filter(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter>())
	,distribute_list(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList>())
	,encryption(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Encryption>())
	,interfaces(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces>())
	,nssa(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa>())
	,ranges(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges>())
	,sham_links(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks>())
	,virtual_links(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks>())
{
    area_scope->parent = this;
    children["area-scope"] = area_scope;

    authentication->parent = this;
    children["authentication"] = authentication;

    bfd->parent = this;
    children["bfd"] = bfd;

    database_filter->parent = this;
    children["database-filter"] = database_filter;

    distribute_list->parent = this;
    children["distribute-list"] = distribute_list;

    encryption->parent = this;
    children["encryption"] = encryption;

    interfaces->parent = this;
    children["interfaces"] = interfaces;

    nssa->parent = this;
    children["nssa"] = nssa;

    ranges->parent = this;
    children["ranges"] = ranges;

    sham_links->parent = this;
    children["sham-links"] = sham_links;

    virtual_links->parent = this;
    children["virtual-links"] = virtual_links;

    yang_name = "area-area-id"; yang_parent_name = "area-addresses";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::~AreaAreaId()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::has_data() const
{
    return area_id.is_set
	|| cost.is_set
	|| dead_interval.is_set
	|| default_cost.is_set
	|| demand_circuit.is_set
	|| enable.is_set
	|| flood_reduction.is_set
	|| hello_interval.is_set
	|| instance.is_set
	|| ldp_sync.is_set
	|| mtu_ignore.is_set
	|| network.is_set
	|| packet_size.is_set
	|| passive.is_set
	|| prefix_suppression.is_set
	|| priority.is_set
	|| retransmit_interval.is_set
	|| stub.is_set
	|| transmit_delay.is_set
	|| (area_scope !=  nullptr && area_scope->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (database_filter !=  nullptr && database_filter->has_data())
	|| (distribute_list !=  nullptr && distribute_list->has_data())
	|| (encryption !=  nullptr && encryption->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (nssa !=  nullptr && nssa->has_data())
	|| (ranges !=  nullptr && ranges->has_data())
	|| (sham_links !=  nullptr && sham_links->has_data())
	|| (virtual_links !=  nullptr && virtual_links->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::has_operation() const
{
    return is_set(operation)
	|| is_set(area_id.operation)
	|| is_set(cost.operation)
	|| is_set(dead_interval.operation)
	|| is_set(default_cost.operation)
	|| is_set(demand_circuit.operation)
	|| is_set(enable.operation)
	|| is_set(flood_reduction.operation)
	|| is_set(hello_interval.operation)
	|| is_set(instance.operation)
	|| is_set(ldp_sync.operation)
	|| is_set(mtu_ignore.operation)
	|| is_set(network.operation)
	|| is_set(packet_size.operation)
	|| is_set(passive.operation)
	|| is_set(prefix_suppression.operation)
	|| is_set(priority.operation)
	|| is_set(retransmit_interval.operation)
	|| is_set(stub.operation)
	|| is_set(transmit_delay.operation)
	|| (area_scope !=  nullptr && area_scope->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (database_filter !=  nullptr && database_filter->has_operation())
	|| (distribute_list !=  nullptr && distribute_list->has_operation())
	|| (encryption !=  nullptr && encryption->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (nssa !=  nullptr && nssa->has_operation())
	|| (ranges !=  nullptr && ranges->has_operation())
	|| (sham_links !=  nullptr && sham_links->has_operation())
	|| (virtual_links !=  nullptr && virtual_links->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-area-id" <<"[area-id='" <<area_id <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AreaAreaId' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_id.is_set || is_set(area_id.operation)) leaf_name_data.push_back(area_id.get_name_leafdata());
    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.operation)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (default_cost.is_set || is_set(default_cost.operation)) leaf_name_data.push_back(default_cost.get_name_leafdata());
    if (demand_circuit.is_set || is_set(demand_circuit.operation)) leaf_name_data.push_back(demand_circuit.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (flood_reduction.is_set || is_set(flood_reduction.operation)) leaf_name_data.push_back(flood_reduction.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (ldp_sync.is_set || is_set(ldp_sync.operation)) leaf_name_data.push_back(ldp_sync.get_name_leafdata());
    if (mtu_ignore.is_set || is_set(mtu_ignore.operation)) leaf_name_data.push_back(mtu_ignore.get_name_leafdata());
    if (network.is_set || is_set(network.operation)) leaf_name_data.push_back(network.get_name_leafdata());
    if (packet_size.is_set || is_set(packet_size.operation)) leaf_name_data.push_back(packet_size.get_name_leafdata());
    if (passive.is_set || is_set(passive.operation)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (prefix_suppression.is_set || is_set(prefix_suppression.operation)) leaf_name_data.push_back(prefix_suppression.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.operation)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (stub.is_set || is_set(stub.operation)) leaf_name_data.push_back(stub.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.operation)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "area-scope")
    {
        if(area_scope != nullptr)
        {
            children["area-scope"] = area_scope;
        }
        else
        {
            area_scope = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope>();
            area_scope->parent = this;
            children["area-scope"] = area_scope;
        }
        return children.at("area-scope");
    }

    if(child_yang_name == "authentication")
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication;
        }
        else
        {
            authentication = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Authentication>();
            authentication->parent = this;
            children["authentication"] = authentication;
        }
        return children.at("authentication");
    }

    if(child_yang_name == "bfd")
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd;
        }
        else
        {
            bfd = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Bfd>();
            bfd->parent = this;
            children["bfd"] = bfd;
        }
        return children.at("bfd");
    }

    if(child_yang_name == "database-filter")
    {
        if(database_filter != nullptr)
        {
            children["database-filter"] = database_filter;
        }
        else
        {
            database_filter = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter>();
            database_filter->parent = this;
            children["database-filter"] = database_filter;
        }
        return children.at("database-filter");
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list != nullptr)
        {
            children["distribute-list"] = distribute_list;
        }
        else
        {
            distribute_list = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList>();
            distribute_list->parent = this;
            children["distribute-list"] = distribute_list;
        }
        return children.at("distribute-list");
    }

    if(child_yang_name == "encryption")
    {
        if(encryption != nullptr)
        {
            children["encryption"] = encryption;
        }
        else
        {
            encryption = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Encryption>();
            encryption->parent = this;
            children["encryption"] = encryption;
        }
        return children.at("encryption");
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
        else
        {
            interfaces = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces;
        }
        return children.at("interfaces");
    }

    if(child_yang_name == "nssa")
    {
        if(nssa != nullptr)
        {
            children["nssa"] = nssa;
        }
        else
        {
            nssa = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa>();
            nssa->parent = this;
            children["nssa"] = nssa;
        }
        return children.at("nssa");
    }

    if(child_yang_name == "ranges")
    {
        if(ranges != nullptr)
        {
            children["ranges"] = ranges;
        }
        else
        {
            ranges = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges>();
            ranges->parent = this;
            children["ranges"] = ranges;
        }
        return children.at("ranges");
    }

    if(child_yang_name == "sham-links")
    {
        if(sham_links != nullptr)
        {
            children["sham-links"] = sham_links;
        }
        else
        {
            sham_links = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks>();
            sham_links->parent = this;
            children["sham-links"] = sham_links;
        }
        return children.at("sham-links");
    }

    if(child_yang_name == "virtual-links")
    {
        if(virtual_links != nullptr)
        {
            children["virtual-links"] = virtual_links;
        }
        else
        {
            virtual_links = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks>();
            virtual_links->parent = this;
            children["virtual-links"] = virtual_links;
        }
        return children.at("virtual-links");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::get_children()
{
    if(children.find("area-scope") == children.end())
    {
        if(area_scope != nullptr)
        {
            children["area-scope"] = area_scope;
        }
    }

    if(children.find("authentication") == children.end())
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication;
        }
    }

    if(children.find("bfd") == children.end())
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd;
        }
    }

    if(children.find("database-filter") == children.end())
    {
        if(database_filter != nullptr)
        {
            children["database-filter"] = database_filter;
        }
    }

    if(children.find("distribute-list") == children.end())
    {
        if(distribute_list != nullptr)
        {
            children["distribute-list"] = distribute_list;
        }
    }

    if(children.find("encryption") == children.end())
    {
        if(encryption != nullptr)
        {
            children["encryption"] = encryption;
        }
    }

    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
    }

    if(children.find("nssa") == children.end())
    {
        if(nssa != nullptr)
        {
            children["nssa"] = nssa;
        }
    }

    if(children.find("ranges") == children.end())
    {
        if(ranges != nullptr)
        {
            children["ranges"] = ranges;
        }
    }

    if(children.find("sham-links") == children.end())
    {
        if(sham_links != nullptr)
        {
            children["sham-links"] = sham_links;
        }
    }

    if(children.find("virtual-links") == children.end())
    {
        if(virtual_links != nullptr)
        {
            children["virtual-links"] = virtual_links;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "area-id")
    {
        area_id = value;
    }
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "dead-interval")
    {
        dead_interval = value;
    }
    if(value_path == "default-cost")
    {
        default_cost = value;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "ldp-sync")
    {
        ldp_sync = value;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore = value;
    }
    if(value_path == "network")
    {
        network = value;
    }
    if(value_path == "packet-size")
    {
        packet_size = value;
    }
    if(value_path == "passive")
    {
        passive = value;
    }
    if(value_path == "prefix-suppression")
    {
        prefix_suppression = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
    }
    if(value_path == "stub")
    {
        stub = value;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Authentication::Authentication()
    :
    algorithm{YType::enumeration, "algorithm"},
    enable{YType::boolean, "enable"},
    password{YType::str, "password"},
    spi{YType::uint32, "spi"}
{
    yang_name = "authentication"; yang_parent_name = "area-area-id";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Authentication::~Authentication()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Authentication::has_data() const
{
    return algorithm.is_set
	|| enable.is_set
	|| password.is_set
	|| spi.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(algorithm.operation)
	|| is_set(enable.operation)
	|| is_set(password.operation)
	|| is_set(spi.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (algorithm.is_set || is_set(algorithm.operation)) leaf_name_data.push_back(algorithm.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());
    if (spi.is_set || is_set(spi.operation)) leaf_name_data.push_back(spi.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Authentication::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "algorithm")
    {
        algorithm = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
    if(value_path == "spi")
    {
        spi = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Bfd::Bfd()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    fast_detect_mode{YType::enumeration, "fast-detect-mode"},
    interval{YType::uint32, "interval"}
{
    yang_name = "bfd"; yang_parent_name = "area-area-id";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Bfd::~Bfd()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Bfd::has_data() const
{
    return detection_multiplier.is_set
	|| fast_detect_mode.is_set
	|| interval.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Bfd::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(fast_detect_mode.operation)
	|| is_set(interval.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bfd' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (fast_detect_mode.is_set || is_set(fast_detect_mode.operation)) leaf_name_data.push_back(fast_detect_mode.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Bfd::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Bfd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "fast-detect-mode")
    {
        fast_detect_mode = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges::Ranges()
{
    yang_name = "ranges"; yang_parent_name = "area-area-id";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges::~Ranges()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges::has_data() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges::has_operation() const
{
    for (std::size_t index=0; index<range.size(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ranges";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ranges' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "range")
    {
        for(auto const & c : range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges::Range>();
        c->parent = this;
        range.push_back(std::move(c));
        children[segment_path] = range.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges::get_children()
{
    for (auto const & c : range)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges::Range::Range()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    cost{YType::uint32, "cost"},
    not_advertise{YType::boolean, "not-advertise"}
{
    yang_name = "range"; yang_parent_name = "ranges";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges::Range::~Range()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges::Range::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| cost.is_set
	|| not_advertise.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges::Range::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(cost.operation)
	|| is_set(not_advertise.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range" <<"[prefix='" <<prefix <<"']" <<"[prefix-length='" <<prefix_length <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges::Range::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Range' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (not_advertise.is_set || is_set(not_advertise.operation)) leaf_name_data.push_back(not_advertise.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges::Range::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Ranges::Range::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "not-advertise")
    {
        not_advertise = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Encryption::Encryption()
    :
    authentication_algorithm{YType::enumeration, "authentication-algorithm"},
    authentication_password{YType::str, "authentication-password"},
    enable{YType::boolean, "enable"},
    encryption_algorithm{YType::enumeration, "encryption-algorithm"},
    encryption_password{YType::str, "encryption-password"},
    spi{YType::uint32, "spi"}
{
    yang_name = "encryption"; yang_parent_name = "area-area-id";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Encryption::~Encryption()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Encryption::has_data() const
{
    return authentication_algorithm.is_set
	|| authentication_password.is_set
	|| enable.is_set
	|| encryption_algorithm.is_set
	|| encryption_password.is_set
	|| spi.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Encryption::has_operation() const
{
    return is_set(operation)
	|| is_set(authentication_algorithm.operation)
	|| is_set(authentication_password.operation)
	|| is_set(enable.operation)
	|| is_set(encryption_algorithm.operation)
	|| is_set(encryption_password.operation)
	|| is_set(spi.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Encryption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Encryption' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_algorithm.is_set || is_set(authentication_algorithm.operation)) leaf_name_data.push_back(authentication_algorithm.get_name_leafdata());
    if (authentication_password.is_set || is_set(authentication_password.operation)) leaf_name_data.push_back(authentication_password.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (encryption_algorithm.is_set || is_set(encryption_algorithm.operation)) leaf_name_data.push_back(encryption_algorithm.get_name_leafdata());
    if (encryption_password.is_set || is_set(encryption_password.operation)) leaf_name_data.push_back(encryption_password.get_name_leafdata());
    if (spi.is_set || is_set(spi.operation)) leaf_name_data.push_back(spi.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Encryption::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Encryption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authentication-algorithm")
    {
        authentication_algorithm = value;
    }
    if(value_path == "authentication-password")
    {
        authentication_password = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "encryption-algorithm")
    {
        encryption_algorithm = value;
    }
    if(value_path == "encryption-password")
    {
        encryption_password = value;
    }
    if(value_path == "spi")
    {
        spi = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa::Nssa()
    :
    default_info_originate{YType::boolean, "default-info-originate"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    no_redistribution{YType::boolean, "no-redistribution"},
    no_summary{YType::empty, "no-summary"}
{
    yang_name = "nssa"; yang_parent_name = "area-area-id";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa::~Nssa()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa::has_data() const
{
    return default_info_originate.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| no_redistribution.is_set
	|| no_summary.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa::has_operation() const
{
    return is_set(operation)
	|| is_set(default_info_originate.operation)
	|| is_set(metric.operation)
	|| is_set(metric_type.operation)
	|| is_set(no_redistribution.operation)
	|| is_set(no_summary.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nssa' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_info_originate.is_set || is_set(default_info_originate.operation)) leaf_name_data.push_back(default_info_originate.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.operation)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (no_redistribution.is_set || is_set(no_redistribution.operation)) leaf_name_data.push_back(no_redistribution.get_name_leafdata());
    if (no_summary.is_set || is_set(no_summary.operation)) leaf_name_data.push_back(no_summary.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Nssa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default-info-originate")
    {
        default_info_originate = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
    }
    if(value_path == "no-redistribution")
    {
        no_redistribution = value;
    }
    if(value_path == "no-summary")
    {
        no_summary = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter::DatabaseFilter()
    :
    all(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter::All>())
{
    all->parent = this;
    children["all"] = all;

    yang_name = "database-filter"; yang_parent_name = "area-area-id";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter::~DatabaseFilter()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter::has_data() const
{
    return (all !=  nullptr && all->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter::has_operation() const
{
    return is_set(operation)
	|| (all !=  nullptr && all->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseFilter' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "all")
    {
        if(all != nullptr)
        {
            children["all"] = all;
        }
        else
        {
            all = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter::All>();
            all->parent = this;
            children["all"] = all;
        }
        return children.at("all");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter::get_children()
{
    if(children.find("all") == children.end())
    {
        if(all != nullptr)
        {
            children["all"] = all;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter::All::All()
    :
    out{YType::boolean, "out"}
{
    yang_name = "all"; yang_parent_name = "database-filter";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter::All::~All()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter::All::has_data() const
{
    return out.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter::All::has_operation() const
{
    return is_set(operation)
	|| is_set(out.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter::All::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'All' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out.is_set || is_set(out.operation)) leaf_name_data.push_back(out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter::All::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DatabaseFilter::All::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "out")
    {
        out = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList::DistributeList()
    :
    in(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList::In>())
{
    in->parent = this;
    children["in"] = in;

    yang_name = "distribute-list"; yang_parent_name = "area-area-id";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList::~DistributeList()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList::has_data() const
{
    return (in !=  nullptr && in->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList::has_operation() const
{
    return is_set(operation)
	|| (in !=  nullptr && in->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DistributeList' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "in")
    {
        if(in != nullptr)
        {
            children["in"] = in;
        }
        else
        {
            in = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList::In>();
            in->parent = this;
            children["in"] = in;
        }
        return children.at("in");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList::get_children()
{
    if(children.find("in") == children.end())
    {
        if(in != nullptr)
        {
            children["in"] = in;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList::In::In()
    :
    prefix_list{YType::str, "prefix-list"}
{
    yang_name = "in"; yang_parent_name = "distribute-list";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList::In::~In()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList::In::has_data() const
{
    return prefix_list.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList::In::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix_list.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList::In::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'In' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list.is_set || is_set(prefix_list.operation)) leaf_name_data.push_back(prefix_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList::In::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::DistributeList::In::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-list")
    {
        prefix_list = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "area-area-id";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::~Interfaces()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interfaces' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::get_children()
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

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    cost{YType::uint32, "cost"},
    dead_interval{YType::uint32, "dead-interval"},
    demand_circuit{YType::boolean, "demand-circuit"},
    enable{YType::empty, "enable"},
    flood_reduction{YType::boolean, "flood-reduction"},
    hello_interval{YType::uint32, "hello-interval"},
    instance{YType::uint32, "instance"},
    ldp_sync{YType::boolean, "ldp-sync"},
    mtu_ignore{YType::boolean, "mtu-ignore"},
    network{YType::enumeration, "network"},
    packet_size{YType::uint32, "packet-size"},
    passive{YType::boolean, "passive"},
    prefix_suppression{YType::boolean, "prefix-suppression"},
    priority{YType::uint32, "priority"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    authentication(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Authentication>())
	,bfd(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Bfd>())
	,database_filter(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter>())
	,distribute_list(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList>())
	,encryption(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Encryption>())
	,fast_reroute(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute>())
	,neighbors(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors>())
{
    authentication->parent = this;
    children["authentication"] = authentication;

    bfd->parent = this;
    children["bfd"] = bfd;

    database_filter->parent = this;
    children["database-filter"] = database_filter;

    distribute_list->parent = this;
    children["distribute-list"] = distribute_list;

    encryption->parent = this;
    children["encryption"] = encryption;

    fast_reroute->parent = this;
    children["fast-reroute"] = fast_reroute;

    neighbors->parent = this;
    children["neighbors"] = neighbors;

    yang_name = "interface"; yang_parent_name = "interfaces";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::~Interface()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| cost.is_set
	|| dead_interval.is_set
	|| demand_circuit.is_set
	|| enable.is_set
	|| flood_reduction.is_set
	|| hello_interval.is_set
	|| instance.is_set
	|| ldp_sync.is_set
	|| mtu_ignore.is_set
	|| network.is_set
	|| packet_size.is_set
	|| passive.is_set
	|| prefix_suppression.is_set
	|| priority.is_set
	|| retransmit_interval.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (database_filter !=  nullptr && database_filter->has_data())
	|| (distribute_list !=  nullptr && distribute_list->has_data())
	|| (encryption !=  nullptr && encryption->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(cost.operation)
	|| is_set(dead_interval.operation)
	|| is_set(demand_circuit.operation)
	|| is_set(enable.operation)
	|| is_set(flood_reduction.operation)
	|| is_set(hello_interval.operation)
	|| is_set(instance.operation)
	|| is_set(ldp_sync.operation)
	|| is_set(mtu_ignore.operation)
	|| is_set(network.operation)
	|| is_set(packet_size.operation)
	|| is_set(passive.operation)
	|| is_set(prefix_suppression.operation)
	|| is_set(priority.operation)
	|| is_set(retransmit_interval.operation)
	|| is_set(transmit_delay.operation)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (database_filter !=  nullptr && database_filter->has_operation())
	|| (distribute_list !=  nullptr && distribute_list->has_operation())
	|| (encryption !=  nullptr && encryption->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.operation)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (demand_circuit.is_set || is_set(demand_circuit.operation)) leaf_name_data.push_back(demand_circuit.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (flood_reduction.is_set || is_set(flood_reduction.operation)) leaf_name_data.push_back(flood_reduction.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (instance.is_set || is_set(instance.operation)) leaf_name_data.push_back(instance.get_name_leafdata());
    if (ldp_sync.is_set || is_set(ldp_sync.operation)) leaf_name_data.push_back(ldp_sync.get_name_leafdata());
    if (mtu_ignore.is_set || is_set(mtu_ignore.operation)) leaf_name_data.push_back(mtu_ignore.get_name_leafdata());
    if (network.is_set || is_set(network.operation)) leaf_name_data.push_back(network.get_name_leafdata());
    if (packet_size.is_set || is_set(packet_size.operation)) leaf_name_data.push_back(packet_size.get_name_leafdata());
    if (passive.is_set || is_set(passive.operation)) leaf_name_data.push_back(passive.get_name_leafdata());
    if (prefix_suppression.is_set || is_set(prefix_suppression.operation)) leaf_name_data.push_back(prefix_suppression.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.operation)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.operation)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            authentication = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Authentication>();
            authentication->parent = this;
            children["authentication"] = authentication;
        }
        return children.at("authentication");
    }

    if(child_yang_name == "bfd")
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd;
        }
        else
        {
            bfd = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Bfd>();
            bfd->parent = this;
            children["bfd"] = bfd;
        }
        return children.at("bfd");
    }

    if(child_yang_name == "database-filter")
    {
        if(database_filter != nullptr)
        {
            children["database-filter"] = database_filter;
        }
        else
        {
            database_filter = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter>();
            database_filter->parent = this;
            children["database-filter"] = database_filter;
        }
        return children.at("database-filter");
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list != nullptr)
        {
            children["distribute-list"] = distribute_list;
        }
        else
        {
            distribute_list = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList>();
            distribute_list->parent = this;
            children["distribute-list"] = distribute_list;
        }
        return children.at("distribute-list");
    }

    if(child_yang_name == "encryption")
    {
        if(encryption != nullptr)
        {
            children["encryption"] = encryption;
        }
        else
        {
            encryption = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Encryption>();
            encryption->parent = this;
            children["encryption"] = encryption;
        }
        return children.at("encryption");
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute != nullptr)
        {
            children["fast-reroute"] = fast_reroute;
        }
        else
        {
            fast_reroute = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute>();
            fast_reroute->parent = this;
            children["fast-reroute"] = fast_reroute;
        }
        return children.at("fast-reroute");
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors != nullptr)
        {
            children["neighbors"] = neighbors;
        }
        else
        {
            neighbors = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors>();
            neighbors->parent = this;
            children["neighbors"] = neighbors;
        }
        return children.at("neighbors");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::get_children()
{
    if(children.find("authentication") == children.end())
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication;
        }
    }

    if(children.find("bfd") == children.end())
    {
        if(bfd != nullptr)
        {
            children["bfd"] = bfd;
        }
    }

    if(children.find("database-filter") == children.end())
    {
        if(database_filter != nullptr)
        {
            children["database-filter"] = database_filter;
        }
    }

    if(children.find("distribute-list") == children.end())
    {
        if(distribute_list != nullptr)
        {
            children["distribute-list"] = distribute_list;
        }
    }

    if(children.find("encryption") == children.end())
    {
        if(encryption != nullptr)
        {
            children["encryption"] = encryption;
        }
    }

    if(children.find("fast-reroute") == children.end())
    {
        if(fast_reroute != nullptr)
        {
            children["fast-reroute"] = fast_reroute;
        }
    }

    if(children.find("neighbors") == children.end())
    {
        if(neighbors != nullptr)
        {
            children["neighbors"] = neighbors;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "dead-interval")
    {
        dead_interval = value;
    }
    if(value_path == "demand-circuit")
    {
        demand_circuit = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "instance")
    {
        instance = value;
    }
    if(value_path == "ldp-sync")
    {
        ldp_sync = value;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore = value;
    }
    if(value_path == "network")
    {
        network = value;
    }
    if(value_path == "packet-size")
    {
        packet_size = value;
    }
    if(value_path == "passive")
    {
        passive = value;
    }
    if(value_path == "prefix-suppression")
    {
        prefix_suppression = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Authentication::Authentication()
    :
    algorithm{YType::enumeration, "algorithm"},
    enable{YType::boolean, "enable"},
    password{YType::str, "password"},
    spi{YType::uint32, "spi"}
{
    yang_name = "authentication"; yang_parent_name = "interface";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Authentication::~Authentication()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Authentication::has_data() const
{
    return algorithm.is_set
	|| enable.is_set
	|| password.is_set
	|| spi.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(algorithm.operation)
	|| is_set(enable.operation)
	|| is_set(password.operation)
	|| is_set(spi.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (algorithm.is_set || is_set(algorithm.operation)) leaf_name_data.push_back(algorithm.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());
    if (spi.is_set || is_set(spi.operation)) leaf_name_data.push_back(spi.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Authentication::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "algorithm")
    {
        algorithm = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
    if(value_path == "spi")
    {
        spi = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::Neighbors()
{
    yang_name = "neighbors"; yang_parent_name = "interface";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::~Neighbors()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbors' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(std::move(c));
        children[segment_path] = neighbor.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::get_children()
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

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::Neighbor::Neighbor()
    :
    neighbor_address{YType::str, "neighbor-address"},
    cost{YType::uint32, "cost"},
    database_filter{YType::boolean, "database-filter"},
    poll_interval{YType::uint32, "poll-interval"},
    priority{YType::uint32, "priority"},
    zone{YType::str, "zone"}
{
    yang_name = "neighbor"; yang_parent_name = "neighbors";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::Neighbor::~Neighbor()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::Neighbor::has_data() const
{
    return neighbor_address.is_set
	|| cost.is_set
	|| database_filter.is_set
	|| poll_interval.is_set
	|| priority.is_set
	|| zone.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::Neighbor::has_operation() const
{
    return is_set(operation)
	|| is_set(neighbor_address.operation)
	|| is_set(cost.operation)
	|| is_set(database_filter.operation)
	|| is_set(poll_interval.operation)
	|| is_set(priority.operation)
	|| is_set(zone.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[neighbor-address='" <<neighbor_address <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Neighbor' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_address.is_set || is_set(neighbor_address.operation)) leaf_name_data.push_back(neighbor_address.get_name_leafdata());
    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (database_filter.is_set || is_set(database_filter.operation)) leaf_name_data.push_back(database_filter.get_name_leafdata());
    if (poll_interval.is_set || is_set(poll_interval.operation)) leaf_name_data.push_back(poll_interval.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (zone.is_set || is_set(zone.operation)) leaf_name_data.push_back(zone.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::Neighbor::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Neighbors::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-address")
    {
        neighbor_address = value;
    }
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "database-filter")
    {
        database_filter = value;
    }
    if(value_path == "poll-interval")
    {
        poll_interval = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "zone")
    {
        zone = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Encryption::Encryption()
    :
    authentication_algorithm{YType::enumeration, "authentication-algorithm"},
    authentication_password{YType::str, "authentication-password"},
    enable{YType::boolean, "enable"},
    encryption_algorithm{YType::enumeration, "encryption-algorithm"},
    encryption_password{YType::str, "encryption-password"},
    spi{YType::uint32, "spi"}
{
    yang_name = "encryption"; yang_parent_name = "interface";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Encryption::~Encryption()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Encryption::has_data() const
{
    return authentication_algorithm.is_set
	|| authentication_password.is_set
	|| enable.is_set
	|| encryption_algorithm.is_set
	|| encryption_password.is_set
	|| spi.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Encryption::has_operation() const
{
    return is_set(operation)
	|| is_set(authentication_algorithm.operation)
	|| is_set(authentication_password.operation)
	|| is_set(enable.operation)
	|| is_set(encryption_algorithm.operation)
	|| is_set(encryption_password.operation)
	|| is_set(spi.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Encryption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Encryption' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_algorithm.is_set || is_set(authentication_algorithm.operation)) leaf_name_data.push_back(authentication_algorithm.get_name_leafdata());
    if (authentication_password.is_set || is_set(authentication_password.operation)) leaf_name_data.push_back(authentication_password.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (encryption_algorithm.is_set || is_set(encryption_algorithm.operation)) leaf_name_data.push_back(encryption_algorithm.get_name_leafdata());
    if (encryption_password.is_set || is_set(encryption_password.operation)) leaf_name_data.push_back(encryption_password.get_name_leafdata());
    if (spi.is_set || is_set(spi.operation)) leaf_name_data.push_back(spi.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Encryption::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Encryption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authentication-algorithm")
    {
        authentication_algorithm = value;
    }
    if(value_path == "authentication-password")
    {
        authentication_password = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "encryption-algorithm")
    {
        encryption_algorithm = value;
    }
    if(value_path == "encryption-password")
    {
        encryption_password = value;
    }
    if(value_path == "spi")
    {
        spi = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Bfd::Bfd()
    :
    detection_multiplier{YType::uint32, "detection-multiplier"},
    fast_detect_mode{YType::enumeration, "fast-detect-mode"},
    interval{YType::uint32, "interval"}
{
    yang_name = "bfd"; yang_parent_name = "interface";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Bfd::~Bfd()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Bfd::has_data() const
{
    return detection_multiplier.is_set
	|| fast_detect_mode.is_set
	|| interval.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Bfd::has_operation() const
{
    return is_set(operation)
	|| is_set(detection_multiplier.operation)
	|| is_set(fast_detect_mode.operation)
	|| is_set(interval.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bfd' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (detection_multiplier.is_set || is_set(detection_multiplier.operation)) leaf_name_data.push_back(detection_multiplier.get_name_leafdata());
    if (fast_detect_mode.is_set || is_set(fast_detect_mode.operation)) leaf_name_data.push_back(fast_detect_mode.get_name_leafdata());
    if (interval.is_set || is_set(interval.operation)) leaf_name_data.push_back(interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Bfd::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::Bfd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "detection-multiplier")
    {
        detection_multiplier = value;
    }
    if(value_path == "fast-detect-mode")
    {
        fast_detect_mode = value;
    }
    if(value_path == "interval")
    {
        interval = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::DatabaseFilter()
    :
    all(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::All>())
{
    all->parent = this;
    children["all"] = all;

    yang_name = "database-filter"; yang_parent_name = "interface";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::~DatabaseFilter()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::has_data() const
{
    return (all !=  nullptr && all->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::has_operation() const
{
    return is_set(operation)
	|| (all !=  nullptr && all->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseFilter' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "all")
    {
        if(all != nullptr)
        {
            children["all"] = all;
        }
        else
        {
            all = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::All>();
            all->parent = this;
            children["all"] = all;
        }
        return children.at("all");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::get_children()
{
    if(children.find("all") == children.end())
    {
        if(all != nullptr)
        {
            children["all"] = all;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::All::All()
    :
    out{YType::boolean, "out"}
{
    yang_name = "all"; yang_parent_name = "database-filter";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::All::~All()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::All::has_data() const
{
    return out.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::All::has_operation() const
{
    return is_set(operation)
	|| is_set(out.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::All::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'All' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (out.is_set || is_set(out.operation)) leaf_name_data.push_back(out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::All::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DatabaseFilter::All::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "out")
    {
        out = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::DistributeList()
    :
    in(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::In>())
{
    in->parent = this;
    children["in"] = in;

    yang_name = "distribute-list"; yang_parent_name = "interface";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::~DistributeList()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::has_data() const
{
    return (in !=  nullptr && in->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::has_operation() const
{
    return is_set(operation)
	|| (in !=  nullptr && in->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DistributeList' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "in")
    {
        if(in != nullptr)
        {
            children["in"] = in;
        }
        else
        {
            in = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::In>();
            in->parent = this;
            children["in"] = in;
        }
        return children.at("in");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::get_children()
{
    if(children.find("in") == children.end())
    {
        if(in != nullptr)
        {
            children["in"] = in;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::In::In()
    :
    prefix_list{YType::str, "prefix-list"}
{
    yang_name = "in"; yang_parent_name = "distribute-list";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::In::~In()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::In::has_data() const
{
    return prefix_list.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::In::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix_list.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::In::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'In' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix_list.is_set || is_set(prefix_list.operation)) leaf_name_data.push_back(prefix_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::In::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::DistributeList::In::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix-list")
    {
        prefix_list = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::FastReroute()
    :
    fast_reroute_enable{YType::enumeration, "fast-reroute-enable"}
    	,
    per_link(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink>())
	,per_prefix(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix>())
{
    per_link->parent = this;
    children["per-link"] = per_link;

    per_prefix->parent = this;
    children["per-prefix"] = per_prefix;

    yang_name = "fast-reroute"; yang_parent_name = "interface";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::~FastReroute()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::has_data() const
{
    return fast_reroute_enable.is_set
	|| (per_link !=  nullptr && per_link->has_data())
	|| (per_prefix !=  nullptr && per_prefix->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::has_operation() const
{
    return is_set(operation)
	|| is_set(fast_reroute_enable.operation)
	|| (per_link !=  nullptr && per_link->has_operation())
	|| (per_prefix !=  nullptr && per_prefix->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FastReroute' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_enable.is_set || is_set(fast_reroute_enable.operation)) leaf_name_data.push_back(fast_reroute_enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "per-link")
    {
        if(per_link != nullptr)
        {
            children["per-link"] = per_link;
        }
        else
        {
            per_link = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink>();
            per_link->parent = this;
            children["per-link"] = per_link;
        }
        return children.at("per-link");
    }

    if(child_yang_name == "per-prefix")
    {
        if(per_prefix != nullptr)
        {
            children["per-prefix"] = per_prefix;
        }
        else
        {
            per_prefix = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix>();
            per_prefix->parent = this;
            children["per-prefix"] = per_prefix;
        }
        return children.at("per-prefix");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::get_children()
{
    if(children.find("per-link") == children.end())
    {
        if(per_link != nullptr)
        {
            children["per-link"] = per_link;
        }
    }

    if(children.find("per-prefix") == children.end())
    {
        if(per_prefix != nullptr)
        {
            children["per-prefix"] = per_prefix;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fast-reroute-enable")
    {
        fast_reroute_enable = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::PerLink()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"}
    	,
    candidate_interfaces(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces>())
{
    candidate_interfaces->parent = this;
    children["candidate-interfaces"] = candidate_interfaces;

    exclude_interfaces->parent = this;
    children["exclude-interfaces"] = exclude_interfaces;

    yang_name = "per-link"; yang_parent_name = "fast-reroute";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::~PerLink()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::has_data() const
{
    return fast_reroute_use_candidate_only.is_set
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::has_operation() const
{
    return is_set(operation)
	|| is_set(fast_reroute_use_candidate_only.operation)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-link";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerLink' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.operation)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces != nullptr)
        {
            children["candidate-interfaces"] = candidate_interfaces;
        }
        else
        {
            candidate_interfaces = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces>();
            candidate_interfaces->parent = this;
            children["candidate-interfaces"] = candidate_interfaces;
        }
        return children.at("candidate-interfaces");
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
        else
        {
            exclude_interfaces = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces>();
            exclude_interfaces->parent = this;
            children["exclude-interfaces"] = exclude_interfaces;
        }
        return children.at("exclude-interfaces");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::get_children()
{
    if(children.find("candidate-interfaces") == children.end())
    {
        if(candidate_interfaces != nullptr)
        {
            children["candidate-interfaces"] = candidate_interfaces;
        }
    }

    if(children.find("exclude-interfaces") == children.end())
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterfaces()
{
    yang_name = "candidate-interfaces"; yang_parent_name = "per-link";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::~CandidateInterfaces()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateInterfaces' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-interface")
    {
        for(auto const & c : candidate_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(std::move(c));
        children[segment_path] = candidate_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::get_children()
{
    for (auto const & c : candidate_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::~CandidateInterface()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateInterface' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterfaces()
{
    yang_name = "exclude-interfaces"; yang_parent_name = "per-link";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterfaces' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "exclude-interface")
    {
        for(auto const & c : exclude_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(std::move(c));
        children[segment_path] = exclude_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::get_children()
{
    for (auto const & c : exclude_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterface' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::PerPrefix()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"}
    	,
    candidate_interfaces(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces>())
{
    candidate_interfaces->parent = this;
    children["candidate-interfaces"] = candidate_interfaces;

    exclude_interfaces->parent = this;
    children["exclude-interfaces"] = exclude_interfaces;

    yang_name = "per-prefix"; yang_parent_name = "fast-reroute";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::~PerPrefix()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::has_data() const
{
    return fast_reroute_use_candidate_only.is_set
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(fast_reroute_use_candidate_only.operation)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-prefix";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerPrefix' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.operation)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces != nullptr)
        {
            children["candidate-interfaces"] = candidate_interfaces;
        }
        else
        {
            candidate_interfaces = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces>();
            candidate_interfaces->parent = this;
            children["candidate-interfaces"] = candidate_interfaces;
        }
        return children.at("candidate-interfaces");
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
        else
        {
            exclude_interfaces = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces>();
            exclude_interfaces->parent = this;
            children["exclude-interfaces"] = exclude_interfaces;
        }
        return children.at("exclude-interfaces");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::get_children()
{
    if(children.find("candidate-interfaces") == children.end())
    {
        if(candidate_interfaces != nullptr)
        {
            children["candidate-interfaces"] = candidate_interfaces;
        }
    }

    if(children.find("exclude-interfaces") == children.end())
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterfaces()
{
    yang_name = "candidate-interfaces"; yang_parent_name = "per-prefix";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::~CandidateInterfaces()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateInterfaces' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-interface")
    {
        for(auto const & c : candidate_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(std::move(c));
        children[segment_path] = candidate_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::get_children()
{
    for (auto const & c : candidate_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::~CandidateInterface()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateInterface' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterfaces()
{
    yang_name = "exclude-interfaces"; yang_parent_name = "per-prefix";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterfaces' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "exclude-interface")
    {
        for(auto const & c : exclude_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(std::move(c));
        children[segment_path] = exclude_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::get_children()
{
    for (auto const & c : exclude_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterface' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::Interfaces::Interface::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::AreaScope()
    :
    fast_reroute(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute>())
{
    fast_reroute->parent = this;
    children["fast-reroute"] = fast_reroute;

    yang_name = "area-scope"; yang_parent_name = "area-area-id";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::~AreaScope()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::has_data() const
{
    return (fast_reroute !=  nullptr && fast_reroute->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::has_operation() const
{
    return is_set(operation)
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-scope";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AreaScope' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute != nullptr)
        {
            children["fast-reroute"] = fast_reroute;
        }
        else
        {
            fast_reroute = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute>();
            fast_reroute->parent = this;
            children["fast-reroute"] = fast_reroute;
        }
        return children.at("fast-reroute");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::get_children()
{
    if(children.find("fast-reroute") == children.end())
    {
        if(fast_reroute != nullptr)
        {
            children["fast-reroute"] = fast_reroute;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::FastReroute()
    :
    fast_reroute_enable{YType::enumeration, "fast-reroute-enable"}
    	,
    per_link(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink>())
	,per_prefix(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix>())
{
    per_link->parent = this;
    children["per-link"] = per_link;

    per_prefix->parent = this;
    children["per-prefix"] = per_prefix;

    yang_name = "fast-reroute"; yang_parent_name = "area-scope";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::~FastReroute()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::has_data() const
{
    return fast_reroute_enable.is_set
	|| (per_link !=  nullptr && per_link->has_data())
	|| (per_prefix !=  nullptr && per_prefix->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::has_operation() const
{
    return is_set(operation)
	|| is_set(fast_reroute_enable.operation)
	|| (per_link !=  nullptr && per_link->has_operation())
	|| (per_prefix !=  nullptr && per_prefix->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FastReroute' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_enable.is_set || is_set(fast_reroute_enable.operation)) leaf_name_data.push_back(fast_reroute_enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "per-link")
    {
        if(per_link != nullptr)
        {
            children["per-link"] = per_link;
        }
        else
        {
            per_link = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink>();
            per_link->parent = this;
            children["per-link"] = per_link;
        }
        return children.at("per-link");
    }

    if(child_yang_name == "per-prefix")
    {
        if(per_prefix != nullptr)
        {
            children["per-prefix"] = per_prefix;
        }
        else
        {
            per_prefix = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix>();
            per_prefix->parent = this;
            children["per-prefix"] = per_prefix;
        }
        return children.at("per-prefix");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::get_children()
{
    if(children.find("per-link") == children.end())
    {
        if(per_link != nullptr)
        {
            children["per-link"] = per_link;
        }
    }

    if(children.find("per-prefix") == children.end())
    {
        if(per_prefix != nullptr)
        {
            children["per-prefix"] = per_prefix;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fast-reroute-enable")
    {
        fast_reroute_enable = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::PerLink()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"}
    	,
    candidate_interfaces(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces>())
{
    candidate_interfaces->parent = this;
    children["candidate-interfaces"] = candidate_interfaces;

    exclude_interfaces->parent = this;
    children["exclude-interfaces"] = exclude_interfaces;

    yang_name = "per-link"; yang_parent_name = "fast-reroute";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::~PerLink()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::has_data() const
{
    return fast_reroute_use_candidate_only.is_set
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::has_operation() const
{
    return is_set(operation)
	|| is_set(fast_reroute_use_candidate_only.operation)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-link";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerLink' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.operation)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces != nullptr)
        {
            children["candidate-interfaces"] = candidate_interfaces;
        }
        else
        {
            candidate_interfaces = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces>();
            candidate_interfaces->parent = this;
            children["candidate-interfaces"] = candidate_interfaces;
        }
        return children.at("candidate-interfaces");
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
        else
        {
            exclude_interfaces = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces>();
            exclude_interfaces->parent = this;
            children["exclude-interfaces"] = exclude_interfaces;
        }
        return children.at("exclude-interfaces");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::get_children()
{
    if(children.find("candidate-interfaces") == children.end())
    {
        if(candidate_interfaces != nullptr)
        {
            children["candidate-interfaces"] = candidate_interfaces;
        }
    }

    if(children.find("exclude-interfaces") == children.end())
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterfaces()
{
    yang_name = "candidate-interfaces"; yang_parent_name = "per-link";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::~CandidateInterfaces()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateInterfaces' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-interface")
    {
        for(auto const & c : candidate_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(std::move(c));
        children[segment_path] = candidate_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::get_children()
{
    for (auto const & c : candidate_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::~CandidateInterface()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateInterface' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterfaces()
{
    yang_name = "exclude-interfaces"; yang_parent_name = "per-link";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterfaces' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "exclude-interface")
    {
        for(auto const & c : exclude_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(std::move(c));
        children[segment_path] = exclude_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::get_children()
{
    for (auto const & c : exclude_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterface' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerLink::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::PerPrefix()
    :
    fast_reroute_use_candidate_only{YType::boolean, "fast-reroute-use-candidate-only"}
    	,
    candidate_interfaces(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces>())
	,exclude_interfaces(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces>())
{
    candidate_interfaces->parent = this;
    children["candidate-interfaces"] = candidate_interfaces;

    exclude_interfaces->parent = this;
    children["exclude-interfaces"] = exclude_interfaces;

    yang_name = "per-prefix"; yang_parent_name = "fast-reroute";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::~PerPrefix()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::has_data() const
{
    return fast_reroute_use_candidate_only.is_set
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_data())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(fast_reroute_use_candidate_only.operation)
	|| (candidate_interfaces !=  nullptr && candidate_interfaces->has_operation())
	|| (exclude_interfaces !=  nullptr && exclude_interfaces->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-prefix";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerPrefix' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fast_reroute_use_candidate_only.is_set || is_set(fast_reroute_use_candidate_only.operation)) leaf_name_data.push_back(fast_reroute_use_candidate_only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-interfaces")
    {
        if(candidate_interfaces != nullptr)
        {
            children["candidate-interfaces"] = candidate_interfaces;
        }
        else
        {
            candidate_interfaces = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces>();
            candidate_interfaces->parent = this;
            children["candidate-interfaces"] = candidate_interfaces;
        }
        return children.at("candidate-interfaces");
    }

    if(child_yang_name == "exclude-interfaces")
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
        else
        {
            exclude_interfaces = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces>();
            exclude_interfaces->parent = this;
            children["exclude-interfaces"] = exclude_interfaces;
        }
        return children.at("exclude-interfaces");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::get_children()
{
    if(children.find("candidate-interfaces") == children.end())
    {
        if(candidate_interfaces != nullptr)
        {
            children["candidate-interfaces"] = candidate_interfaces;
        }
    }

    if(children.find("exclude-interfaces") == children.end())
    {
        if(exclude_interfaces != nullptr)
        {
            children["exclude-interfaces"] = exclude_interfaces;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fast-reroute-use-candidate-only")
    {
        fast_reroute_use_candidate_only = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterfaces()
{
    yang_name = "candidate-interfaces"; yang_parent_name = "per-prefix";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::~CandidateInterfaces()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::has_data() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::has_operation() const
{
    for (std::size_t index=0; index<candidate_interface.size(); index++)
    {
        if(candidate_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interfaces";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateInterfaces' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "candidate-interface")
    {
        for(auto const & c : candidate_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface>();
        c->parent = this;
        candidate_interface.push_back(std::move(c));
        children[segment_path] = candidate_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::get_children()
{
    for (auto const & c : candidate_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::CandidateInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "candidate-interface"; yang_parent_name = "candidate-interfaces";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::~CandidateInterface()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CandidateInterface' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::CandidateInterfaces::CandidateInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterfaces()
{
    yang_name = "exclude-interfaces"; yang_parent_name = "per-prefix";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::~ExcludeInterfaces()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::has_data() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<exclude_interface.size(); index++)
    {
        if(exclude_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interfaces";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterfaces' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "exclude-interface")
    {
        for(auto const & c : exclude_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface>();
        c->parent = this;
        exclude_interface.push_back(std::move(c));
        children[segment_path] = exclude_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::get_children()
{
    for (auto const & c : exclude_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::ExcludeInterface()
    :
    interface_name{YType::str, "interface-name"}
{
    yang_name = "exclude-interface"; yang_parent_name = "exclude-interfaces";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::~ExcludeInterface()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_data() const
{
    return interface_name.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude-interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ExcludeInterface' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::AreaScope::FastReroute::PerPrefix::ExcludeInterfaces::ExcludeInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLinks()
{
    yang_name = "sham-links"; yang_parent_name = "area-area-id";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::~ShamLinks()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::has_data() const
{
    for (std::size_t index=0; index<sham_link.size(); index++)
    {
        if(sham_link[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::has_operation() const
{
    for (std::size_t index=0; index<sham_link.size(); index++)
    {
        if(sham_link[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sham-links";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ShamLinks' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sham-link")
    {
        for(auto const & c : sham_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink>();
        c->parent = this;
        sham_link.push_back(std::move(c));
        children[segment_path] = sham_link.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::get_children()
{
    for (auto const & c : sham_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::ShamLink()
    :
    destination_address{YType::str, "destination-address"},
    source_address{YType::str, "source-address"},
    dead_interval{YType::uint32, "dead-interval"},
    enable{YType::empty, "enable"},
    hello_interval{YType::uint32, "hello-interval"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    authentication(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Authentication>())
	,encryption(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Encryption>())
{
    authentication->parent = this;
    children["authentication"] = authentication;

    encryption->parent = this;
    children["encryption"] = encryption;

    yang_name = "sham-link"; yang_parent_name = "sham-links";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::~ShamLink()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::has_data() const
{
    return destination_address.is_set
	|| source_address.is_set
	|| dead_interval.is_set
	|| enable.is_set
	|| hello_interval.is_set
	|| retransmit_interval.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (encryption !=  nullptr && encryption->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(source_address.operation)
	|| is_set(dead_interval.operation)
	|| is_set(enable.operation)
	|| is_set(hello_interval.operation)
	|| is_set(retransmit_interval.operation)
	|| is_set(transmit_delay.operation)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (encryption !=  nullptr && encryption->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sham-link" <<"[destination-address='" <<destination_address <<"']" <<"[source-address='" <<source_address <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ShamLink' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.operation)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.operation)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.operation)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            authentication = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Authentication>();
            authentication->parent = this;
            children["authentication"] = authentication;
        }
        return children.at("authentication");
    }

    if(child_yang_name == "encryption")
    {
        if(encryption != nullptr)
        {
            children["encryption"] = encryption;
        }
        else
        {
            encryption = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Encryption>();
            encryption->parent = this;
            children["encryption"] = encryption;
        }
        return children.at("encryption");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::get_children()
{
    if(children.find("authentication") == children.end())
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication;
        }
    }

    if(children.find("encryption") == children.end())
    {
        if(encryption != nullptr)
        {
            children["encryption"] = encryption;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "dead-interval")
    {
        dead_interval = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Authentication::Authentication()
    :
    algorithm{YType::enumeration, "algorithm"},
    enable{YType::boolean, "enable"},
    password{YType::str, "password"},
    spi{YType::uint32, "spi"}
{
    yang_name = "authentication"; yang_parent_name = "sham-link";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Authentication::~Authentication()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Authentication::has_data() const
{
    return algorithm.is_set
	|| enable.is_set
	|| password.is_set
	|| spi.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(algorithm.operation)
	|| is_set(enable.operation)
	|| is_set(password.operation)
	|| is_set(spi.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (algorithm.is_set || is_set(algorithm.operation)) leaf_name_data.push_back(algorithm.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());
    if (spi.is_set || is_set(spi.operation)) leaf_name_data.push_back(spi.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Authentication::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "algorithm")
    {
        algorithm = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
    if(value_path == "spi")
    {
        spi = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Encryption::Encryption()
    :
    authentication_algorithm{YType::enumeration, "authentication-algorithm"},
    authentication_password{YType::str, "authentication-password"},
    enable{YType::boolean, "enable"},
    encryption_algorithm{YType::enumeration, "encryption-algorithm"},
    encryption_password{YType::str, "encryption-password"},
    spi{YType::uint32, "spi"}
{
    yang_name = "encryption"; yang_parent_name = "sham-link";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Encryption::~Encryption()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Encryption::has_data() const
{
    return authentication_algorithm.is_set
	|| authentication_password.is_set
	|| enable.is_set
	|| encryption_algorithm.is_set
	|| encryption_password.is_set
	|| spi.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Encryption::has_operation() const
{
    return is_set(operation)
	|| is_set(authentication_algorithm.operation)
	|| is_set(authentication_password.operation)
	|| is_set(enable.operation)
	|| is_set(encryption_algorithm.operation)
	|| is_set(encryption_password.operation)
	|| is_set(spi.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Encryption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Encryption' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_algorithm.is_set || is_set(authentication_algorithm.operation)) leaf_name_data.push_back(authentication_algorithm.get_name_leafdata());
    if (authentication_password.is_set || is_set(authentication_password.operation)) leaf_name_data.push_back(authentication_password.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (encryption_algorithm.is_set || is_set(encryption_algorithm.operation)) leaf_name_data.push_back(encryption_algorithm.get_name_leafdata());
    if (encryption_password.is_set || is_set(encryption_password.operation)) leaf_name_data.push_back(encryption_password.get_name_leafdata());
    if (spi.is_set || is_set(spi.operation)) leaf_name_data.push_back(spi.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Encryption::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::ShamLinks::ShamLink::Encryption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authentication-algorithm")
    {
        authentication_algorithm = value;
    }
    if(value_path == "authentication-password")
    {
        authentication_password = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "encryption-algorithm")
    {
        encryption_algorithm = value;
    }
    if(value_path == "encryption-password")
    {
        encryption_password = value;
    }
    if(value_path == "spi")
    {
        spi = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLinks()
{
    yang_name = "virtual-links"; yang_parent_name = "area-area-id";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::~VirtualLinks()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::has_data() const
{
    for (std::size_t index=0; index<virtual_link.size(); index++)
    {
        if(virtual_link[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::has_operation() const
{
    for (std::size_t index=0; index<virtual_link.size(); index++)
    {
        if(virtual_link[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-links";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VirtualLinks' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "virtual-link")
    {
        for(auto const & c : virtual_link)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink>();
        c->parent = this;
        virtual_link.push_back(std::move(c));
        children[segment_path] = virtual_link.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::get_children()
{
    for (auto const & c : virtual_link)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::VirtualLink()
    :
    virtual_link_address{YType::str, "virtual-link-address"},
    dead_interval{YType::uint32, "dead-interval"},
    enable{YType::empty, "enable"},
    hello_interval{YType::uint32, "hello-interval"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    authentication(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Authentication>())
	,encryption(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Encryption>())
{
    authentication->parent = this;
    children["authentication"] = authentication;

    encryption->parent = this;
    children["encryption"] = encryption;

    yang_name = "virtual-link"; yang_parent_name = "virtual-links";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::~VirtualLink()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::has_data() const
{
    return virtual_link_address.is_set
	|| dead_interval.is_set
	|| enable.is_set
	|| hello_interval.is_set
	|| retransmit_interval.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (encryption !=  nullptr && encryption->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::has_operation() const
{
    return is_set(operation)
	|| is_set(virtual_link_address.operation)
	|| is_set(dead_interval.operation)
	|| is_set(enable.operation)
	|| is_set(hello_interval.operation)
	|| is_set(retransmit_interval.operation)
	|| is_set(transmit_delay.operation)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (encryption !=  nullptr && encryption->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-link" <<"[virtual-link-address='" <<virtual_link_address <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VirtualLink' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (virtual_link_address.is_set || is_set(virtual_link_address.operation)) leaf_name_data.push_back(virtual_link_address.get_name_leafdata());
    if (dead_interval.is_set || is_set(dead_interval.operation)) leaf_name_data.push_back(dead_interval.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.operation)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.operation)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            authentication = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Authentication>();
            authentication->parent = this;
            children["authentication"] = authentication;
        }
        return children.at("authentication");
    }

    if(child_yang_name == "encryption")
    {
        if(encryption != nullptr)
        {
            children["encryption"] = encryption;
        }
        else
        {
            encryption = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Encryption>();
            encryption->parent = this;
            children["encryption"] = encryption;
        }
        return children.at("encryption");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::get_children()
{
    if(children.find("authentication") == children.end())
    {
        if(authentication != nullptr)
        {
            children["authentication"] = authentication;
        }
    }

    if(children.find("encryption") == children.end())
    {
        if(encryption != nullptr)
        {
            children["encryption"] = encryption;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "virtual-link-address")
    {
        virtual_link_address = value;
    }
    if(value_path == "dead-interval")
    {
        dead_interval = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Authentication::Authentication()
    :
    algorithm{YType::enumeration, "algorithm"},
    enable{YType::boolean, "enable"},
    password{YType::str, "password"},
    spi{YType::uint32, "spi"}
{
    yang_name = "authentication"; yang_parent_name = "virtual-link";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Authentication::~Authentication()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Authentication::has_data() const
{
    return algorithm.is_set
	|| enable.is_set
	|| password.is_set
	|| spi.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(algorithm.operation)
	|| is_set(enable.operation)
	|| is_set(password.operation)
	|| is_set(spi.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (algorithm.is_set || is_set(algorithm.operation)) leaf_name_data.push_back(algorithm.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());
    if (spi.is_set || is_set(spi.operation)) leaf_name_data.push_back(spi.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Authentication::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "algorithm")
    {
        algorithm = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
    if(value_path == "spi")
    {
        spi = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Encryption::Encryption()
    :
    authentication_algorithm{YType::enumeration, "authentication-algorithm"},
    authentication_password{YType::str, "authentication-password"},
    enable{YType::boolean, "enable"},
    encryption_algorithm{YType::enumeration, "encryption-algorithm"},
    encryption_password{YType::str, "encryption-password"},
    spi{YType::uint32, "spi"}
{
    yang_name = "encryption"; yang_parent_name = "virtual-link";
}

Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Encryption::~Encryption()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Encryption::has_data() const
{
    return authentication_algorithm.is_set
	|| authentication_password.is_set
	|| enable.is_set
	|| encryption_algorithm.is_set
	|| encryption_password.is_set
	|| spi.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Encryption::has_operation() const
{
    return is_set(operation)
	|| is_set(authentication_algorithm.operation)
	|| is_set(authentication_password.operation)
	|| is_set(enable.operation)
	|| is_set(encryption_algorithm.operation)
	|| is_set(encryption_password.operation)
	|| is_set(spi.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Encryption::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encryption";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Encryption::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Encryption' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_algorithm.is_set || is_set(authentication_algorithm.operation)) leaf_name_data.push_back(authentication_algorithm.get_name_leafdata());
    if (authentication_password.is_set || is_set(authentication_password.operation)) leaf_name_data.push_back(authentication_password.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (encryption_algorithm.is_set || is_set(encryption_algorithm.operation)) leaf_name_data.push_back(encryption_algorithm.get_name_leafdata());
    if (encryption_password.is_set || is_set(encryption_password.operation)) leaf_name_data.push_back(encryption_password.get_name_leafdata());
    if (spi.is_set || is_set(spi.operation)) leaf_name_data.push_back(spi.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Encryption::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Encryption::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::AreaAddresses::AreaAreaId::VirtualLinks::VirtualLink::Encryption::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authentication-algorithm")
    {
        authentication_algorithm = value;
    }
    if(value_path == "authentication-password")
    {
        authentication_password = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "encryption-algorithm")
    {
        encryption_algorithm = value;
    }
    if(value_path == "encryption-password")
    {
        encryption_password = value;
    }
    if(value_path == "spi")
    {
        spi = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Timers()
    :
    lsa_timers(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Timers::LsaTimers>())
	,pacing(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Pacing>())
	,throttle(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle>())
{
    lsa_timers->parent = this;
    children["lsa-timers"] = lsa_timers;

    pacing->parent = this;
    children["pacing"] = pacing;

    throttle->parent = this;
    children["throttle"] = throttle;

    yang_name = "timers"; yang_parent_name = "vrf";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Timers::~Timers()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Timers::has_data() const
{
    return (lsa_timers !=  nullptr && lsa_timers->has_data())
	|| (pacing !=  nullptr && pacing->has_data())
	|| (throttle !=  nullptr && throttle->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Timers::has_operation() const
{
    return is_set(operation)
	|| (lsa_timers !=  nullptr && lsa_timers->has_operation())
	|| (pacing !=  nullptr && pacing->has_operation())
	|| (throttle !=  nullptr && throttle->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Timers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Timers' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa-timers")
    {
        if(lsa_timers != nullptr)
        {
            children["lsa-timers"] = lsa_timers;
        }
        else
        {
            lsa_timers = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Timers::LsaTimers>();
            lsa_timers->parent = this;
            children["lsa-timers"] = lsa_timers;
        }
        return children.at("lsa-timers");
    }

    if(child_yang_name == "pacing")
    {
        if(pacing != nullptr)
        {
            children["pacing"] = pacing;
        }
        else
        {
            pacing = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Pacing>();
            pacing->parent = this;
            children["pacing"] = pacing;
        }
        return children.at("pacing");
    }

    if(child_yang_name == "throttle")
    {
        if(throttle != nullptr)
        {
            children["throttle"] = throttle;
        }
        else
        {
            throttle = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle>();
            throttle->parent = this;
            children["throttle"] = throttle;
        }
        return children.at("throttle");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Timers::get_children()
{
    if(children.find("lsa-timers") == children.end())
    {
        if(lsa_timers != nullptr)
        {
            children["lsa-timers"] = lsa_timers;
        }
    }

    if(children.find("pacing") == children.end())
    {
        if(pacing != nullptr)
        {
            children["pacing"] = pacing;
        }
    }

    if(children.find("throttle") == children.end())
    {
        if(throttle != nullptr)
        {
            children["throttle"] = throttle;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Timers::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Pacing::Pacing()
    :
    flood{YType::uint32, "flood"},
    lsa_group{YType::uint32, "lsa-group"},
    retransmission{YType::uint32, "retransmission"}
{
    yang_name = "pacing"; yang_parent_name = "timers";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Pacing::~Pacing()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Pacing::has_data() const
{
    return flood.is_set
	|| lsa_group.is_set
	|| retransmission.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Pacing::has_operation() const
{
    return is_set(operation)
	|| is_set(flood.operation)
	|| is_set(lsa_group.operation)
	|| is_set(retransmission.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Pacing::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pacing";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Pacing::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pacing' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flood.is_set || is_set(flood.operation)) leaf_name_data.push_back(flood.get_name_leafdata());
    if (lsa_group.is_set || is_set(lsa_group.operation)) leaf_name_data.push_back(lsa_group.get_name_leafdata());
    if (retransmission.is_set || is_set(retransmission.operation)) leaf_name_data.push_back(retransmission.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Pacing::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Pacing::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Pacing::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flood")
    {
        flood = value;
    }
    if(value_path == "lsa-group")
    {
        lsa_group = value;
    }
    if(value_path == "retransmission")
    {
        retransmission = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Timers::LsaTimers::LsaTimers()
    :
    arrival{YType::uint32, "arrival"}
{
    yang_name = "lsa-timers"; yang_parent_name = "timers";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Timers::LsaTimers::~LsaTimers()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Timers::LsaTimers::has_data() const
{
    return arrival.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Timers::LsaTimers::has_operation() const
{
    return is_set(operation)
	|| is_set(arrival.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Timers::LsaTimers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa-timers";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Timers::LsaTimers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LsaTimers' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (arrival.is_set || is_set(arrival.operation)) leaf_name_data.push_back(arrival.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Timers::LsaTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Timers::LsaTimers::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Timers::LsaTimers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "arrival")
    {
        arrival = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Throttle()
    :
    lsa(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Lsa>())
	,spf(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Spf>())
{
    lsa->parent = this;
    children["lsa"] = lsa;

    spf->parent = this;
    children["spf"] = spf;

    yang_name = "throttle"; yang_parent_name = "timers";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::~Throttle()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::has_data() const
{
    return (lsa !=  nullptr && lsa->has_data())
	|| (spf !=  nullptr && spf->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::has_operation() const
{
    return is_set(operation)
	|| (lsa !=  nullptr && lsa->has_operation())
	|| (spf !=  nullptr && spf->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "throttle";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Throttle' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lsa")
    {
        if(lsa != nullptr)
        {
            children["lsa"] = lsa;
        }
        else
        {
            lsa = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Lsa>();
            lsa->parent = this;
            children["lsa"] = lsa;
        }
        return children.at("lsa");
    }

    if(child_yang_name == "spf")
    {
        if(spf != nullptr)
        {
            children["spf"] = spf;
        }
        else
        {
            spf = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Spf>();
            spf->parent = this;
            children["spf"] = spf;
        }
        return children.at("spf");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::get_children()
{
    if(children.find("lsa") == children.end())
    {
        if(lsa != nullptr)
        {
            children["lsa"] = lsa;
        }
    }

    if(children.find("spf") == children.end())
    {
        if(spf != nullptr)
        {
            children["spf"] = spf;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Lsa::Lsa()
    :
    first_delay{YType::uint32, "first-delay"},
    maximum_delay{YType::uint32, "maximum-delay"},
    minimum_delay{YType::uint32, "minimum-delay"}
{
    yang_name = "lsa"; yang_parent_name = "throttle";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Lsa::~Lsa()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Lsa::has_data() const
{
    return first_delay.is_set
	|| maximum_delay.is_set
	|| minimum_delay.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Lsa::has_operation() const
{
    return is_set(operation)
	|| is_set(first_delay.operation)
	|| is_set(maximum_delay.operation)
	|| is_set(minimum_delay.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Lsa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsa";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Lsa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lsa' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (first_delay.is_set || is_set(first_delay.operation)) leaf_name_data.push_back(first_delay.get_name_leafdata());
    if (maximum_delay.is_set || is_set(maximum_delay.operation)) leaf_name_data.push_back(maximum_delay.get_name_leafdata());
    if (minimum_delay.is_set || is_set(minimum_delay.operation)) leaf_name_data.push_back(minimum_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Lsa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Lsa::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Lsa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "first-delay")
    {
        first_delay = value;
    }
    if(value_path == "maximum-delay")
    {
        maximum_delay = value;
    }
    if(value_path == "minimum-delay")
    {
        minimum_delay = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Spf::Spf()
    :
    first_delay{YType::uint32, "first-delay"},
    maximum_delay{YType::uint32, "maximum-delay"},
    minimum_delay{YType::uint32, "minimum-delay"}
{
    yang_name = "spf"; yang_parent_name = "throttle";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Spf::~Spf()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Spf::has_data() const
{
    return first_delay.is_set
	|| maximum_delay.is_set
	|| minimum_delay.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Spf::has_operation() const
{
    return is_set(operation)
	|| is_set(first_delay.operation)
	|| is_set(maximum_delay.operation)
	|| is_set(minimum_delay.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Spf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Spf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Spf' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (first_delay.is_set || is_set(first_delay.operation)) leaf_name_data.push_back(first_delay.get_name_leafdata());
    if (maximum_delay.is_set || is_set(maximum_delay.operation)) leaf_name_data.push_back(maximum_delay.get_name_leafdata());
    if (minimum_delay.is_set || is_set(minimum_delay.operation)) leaf_name_data.push_back(minimum_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Spf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Spf::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Timers::Throttle::Spf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "first-delay")
    {
        first_delay = value;
    }
    if(value_path == "maximum-delay")
    {
        maximum_delay = value;
    }
    if(value_path == "minimum-delay")
    {
        minimum_delay = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefixes()
{
    yang_name = "summary-prefixes"; yang_parent_name = "vrf";
}

Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::~SummaryPrefixes()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::has_data() const
{
    for (std::size_t index=0; index<summary_prefix.size(); index++)
    {
        if(summary_prefix[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::has_operation() const
{
    for (std::size_t index=0; index<summary_prefix.size(); index++)
    {
        if(summary_prefix[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-prefixes";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SummaryPrefixes' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "summary-prefix")
    {
        for(auto const & c : summary_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix>();
        c->parent = this;
        summary_prefix.push_back(std::move(c));
        children[segment_path] = summary_prefix.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::get_children()
{
    for (auto const & c : summary_prefix)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::SummaryPrefix()
    :
    prefix{YType::str, "prefix"},
    prefix_length{YType::uint8, "prefix-length"},
    not_advertise{YType::boolean, "not-advertise"},
    tag{YType::uint32, "tag"}
{
    yang_name = "summary-prefix"; yang_parent_name = "summary-prefixes";
}

Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::~SummaryPrefix()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::has_data() const
{
    return prefix.is_set
	|| prefix_length.is_set
	|| not_advertise.is_set
	|| tag.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(prefix_length.operation)
	|| is_set(not_advertise.operation)
	|| is_set(tag.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-prefix" <<"[prefix='" <<prefix <<"']" <<"[prefix-length='" <<prefix_length <<"']";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SummaryPrefix' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (not_advertise.is_set || is_set(not_advertise.operation)) leaf_name_data.push_back(not_advertise.get_name_leafdata());
    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::SummaryPrefixes::SummaryPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
    if(value_path == "not-advertise")
    {
        not_advertise = value;
    }
    if(value_path == "tag")
    {
        tag = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::Snmp()
    :
    context{YType::str, "context"}
    	,
    trap_rate_limit(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::TrapRateLimit>())
{
    trap_rate_limit->parent = this;
    children["trap-rate-limit"] = trap_rate_limit;

    yang_name = "snmp"; yang_parent_name = "vrf";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::~Snmp()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::has_data() const
{
    return context.is_set
	|| (trap_rate_limit !=  nullptr && trap_rate_limit->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::has_operation() const
{
    return is_set(operation)
	|| is_set(context.operation)
	|| (trap_rate_limit !=  nullptr && trap_rate_limit->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Snmp' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (context.is_set || is_set(context.operation)) leaf_name_data.push_back(context.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "trap-rate-limit")
    {
        if(trap_rate_limit != nullptr)
        {
            children["trap-rate-limit"] = trap_rate_limit;
        }
        else
        {
            trap_rate_limit = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::TrapRateLimit>();
            trap_rate_limit->parent = this;
            children["trap-rate-limit"] = trap_rate_limit;
        }
        return children.at("trap-rate-limit");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::get_children()
{
    if(children.find("trap-rate-limit") == children.end())
    {
        if(trap_rate_limit != nullptr)
        {
            children["trap-rate-limit"] = trap_rate_limit;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "context")
    {
        context = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::TrapRateLimit::TrapRateLimit()
    :
    max_window_traps{YType::uint32, "max-window-traps"},
    window_size{YType::uint32, "window-size"}
{
    yang_name = "trap-rate-limit"; yang_parent_name = "snmp";
}

Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::TrapRateLimit::~TrapRateLimit()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::TrapRateLimit::has_data() const
{
    return max_window_traps.is_set
	|| window_size.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::TrapRateLimit::has_operation() const
{
    return is_set(operation)
	|| is_set(max_window_traps.operation)
	|| is_set(window_size.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::TrapRateLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap-rate-limit";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::TrapRateLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrapRateLimit' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_window_traps.is_set || is_set(max_window_traps.operation)) leaf_name_data.push_back(max_window_traps.get_name_leafdata());
    if (window_size.is_set || is_set(window_size.operation)) leaf_name_data.push_back(window_size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::TrapRateLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::TrapRateLimit::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::Snmp::TrapRateLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-window-traps")
    {
        max_window_traps = value;
    }
    if(value_path == "window-size")
    {
        window_size = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::FastReroute()
    :
    per_link(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerLink>())
	,per_prefix(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix>())
{
    per_link->parent = this;
    children["per-link"] = per_link;

    per_prefix->parent = this;
    children["per-prefix"] = per_prefix;

    yang_name = "fast-reroute"; yang_parent_name = "vrf";
}

Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::~FastReroute()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::has_data() const
{
    return (per_link !=  nullptr && per_link->has_data())
	|| (per_prefix !=  nullptr && per_prefix->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::has_operation() const
{
    return is_set(operation)
	|| (per_link !=  nullptr && per_link->has_operation())
	|| (per_prefix !=  nullptr && per_prefix->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FastReroute' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "per-link")
    {
        if(per_link != nullptr)
        {
            children["per-link"] = per_link;
        }
        else
        {
            per_link = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerLink>();
            per_link->parent = this;
            children["per-link"] = per_link;
        }
        return children.at("per-link");
    }

    if(child_yang_name == "per-prefix")
    {
        if(per_prefix != nullptr)
        {
            children["per-prefix"] = per_prefix;
        }
        else
        {
            per_prefix = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix>();
            per_prefix->parent = this;
            children["per-prefix"] = per_prefix;
        }
        return children.at("per-prefix");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::get_children()
{
    if(children.find("per-link") == children.end())
    {
        if(per_link != nullptr)
        {
            children["per-link"] = per_link;
        }
    }

    if(children.find("per-prefix") == children.end())
    {
        if(per_prefix != nullptr)
        {
            children["per-prefix"] = per_prefix;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::set_value(const std::string & value_path, std::string value)
{
}

Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerLink::PerLink()
    :
    priority{YType::enumeration, "priority"}
{
    yang_name = "per-link"; yang_parent_name = "fast-reroute";
}

Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerLink::~PerLink()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerLink::has_data() const
{
    return priority.is_set;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerLink::has_operation() const
{
    return is_set(operation)
	|| is_set(priority.operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerLink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-link";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerLink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerLink' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerLink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerLink::get_children()
{
    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerLink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "priority")
    {
        priority = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::PerPrefix()
    :
    load_sharing_disable{YType::empty, "load-sharing-disable"},
    priority{YType::enumeration, "priority"}
    	,
    tiebreakers(std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers>())
{
    tiebreakers->parent = this;
    children["tiebreakers"] = tiebreakers;

    yang_name = "per-prefix"; yang_parent_name = "fast-reroute";
}

Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::~PerPrefix()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::has_data() const
{
    return load_sharing_disable.is_set
	|| priority.is_set
	|| (tiebreakers !=  nullptr && tiebreakers->has_data());
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::has_operation() const
{
    return is_set(operation)
	|| is_set(load_sharing_disable.operation)
	|| is_set(priority.operation)
	|| (tiebreakers !=  nullptr && tiebreakers->has_operation());
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-prefix";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerPrefix' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_sharing_disable.is_set || is_set(load_sharing_disable.operation)) leaf_name_data.push_back(load_sharing_disable.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tiebreakers")
    {
        if(tiebreakers != nullptr)
        {
            children["tiebreakers"] = tiebreakers;
        }
        else
        {
            tiebreakers = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers>();
            tiebreakers->parent = this;
            children["tiebreakers"] = tiebreakers;
        }
        return children.at("tiebreakers");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::get_children()
{
    if(children.find("tiebreakers") == children.end())
    {
        if(tiebreakers != nullptr)
        {
            children["tiebreakers"] = tiebreakers;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "load-sharing-disable")
    {
        load_sharing_disable = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
}

Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreakers()
{
    yang_name = "tiebreakers"; yang_parent_name = "per-prefix";
}

Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::~Tiebreakers()
{
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::has_data() const
{
    for (std::size_t index=0; index<tiebreaker.size(); index++)
    {
        if(tiebreaker[index]->has_data())
            return true;
    }
    return false;
}

bool Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::has_operation() const
{
    for (std::size_t index=0; index<tiebreaker.size(); index++)
    {
        if(tiebreaker[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tiebreakers";

    return path_buffer.str();

}

EntityPath Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tiebreakers' in Cisco_IOS_XR_ipv6_ospfv3_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tiebreaker")
    {
        for(auto const & c : tiebreaker)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::Tiebreaker>();
        c->parent = this;
        tiebreaker.push_back(std::move(c));
        children[segment_path] = tiebreaker.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::get_children()
{
    for (auto const & c : tiebreaker)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Ospfv3::Processes::Process::Vrfs::Vrf::FastReroute::PerPrefix::Tiebreakers::set_value(const std::string & value_path, std::string value)
{
}


}
}

