
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_114.hpp"
#include "Cisco_IOS_XE_native_115.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Redistribute()
    :
    bgp(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp>())
	,connected(nullptr) // presence node
	,isis(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_>())
	,iso_igrp(nullptr) // presence node
	,lisp(nullptr) // presence node
	,maximum_prefix(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix>())
	,mobile(nullptr) // presence node
	,odr(nullptr) // presence node
	,rip(nullptr) // presence node
	,static_(nullptr) // presence node
	,vrf(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf>())
{
    bgp->parent = this;

    isis->parent = this;

    maximum_prefix->parent = this;

    vrf->parent = this;

    yang_name = "redistribute"; yang_parent_name = "topology";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::~Redistribute()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::has_data() const
{
    for (std::size_t index=0; index<application.size(); index++)
    {
        if(application[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospfv3.size(); index++)
    {
        if(ospfv3[index]->has_data())
            return true;
    }
    return (bgp !=  nullptr && bgp->has_data())
	|| (connected !=  nullptr && connected->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (iso_igrp !=  nullptr && iso_igrp->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_data())
	|| (mobile !=  nullptr && mobile->has_data())
	|| (odr !=  nullptr && odr->has_data())
	|| (rip !=  nullptr && rip->has_data())
	|| (static_ !=  nullptr && static_->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::has_operation() const
{
    for (std::size_t index=0; index<application.size(); index++)
    {
        if(application[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospfv3.size(); index++)
    {
        if(ospfv3[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (connected !=  nullptr && connected->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (iso_igrp !=  nullptr && iso_igrp->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_operation())
	|| (mobile !=  nullptr && mobile->has_operation())
	|| (odr !=  nullptr && odr->has_operation())
	|| (rip !=  nullptr && rip->has_operation())
	|| (static_ !=  nullptr && static_->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redistribute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        for(auto const & c : application)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application>();
        c->parent = this;
        application.push_back(c);
        return c;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "eigrp")
    {
        for(auto const & c : eigrp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp>();
        c->parent = this;
        eigrp.push_back(c);
        return c;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_>();
        }
        return isis;
    }

    if(child_yang_name == "iso-igrp")
    {
        if(iso_igrp == nullptr)
        {
            iso_igrp = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp>();
        }
        return iso_igrp;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "maximum-prefix")
    {
        if(maximum_prefix == nullptr)
        {
            maximum_prefix = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix>();
        }
        return maximum_prefix;
    }

    if(child_yang_name == "mobile")
    {
        if(mobile == nullptr)
        {
            mobile = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile>();
        }
        return mobile;
    }

    if(child_yang_name == "odr")
    {
        if(odr == nullptr)
        {
            odr = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr>();
        }
        return odr;
    }

    if(child_yang_name == "ospf")
    {
        for(auto const & c : ospf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf>();
        c->parent = this;
        ospf.push_back(c);
        return c;
    }

    if(child_yang_name == "ospfv3")
    {
        for(auto const & c : ospfv3)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3>();
        c->parent = this;
        ospfv3.push_back(c);
        return c;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip>();
        }
        return rip;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_>();
        }
        return static_;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : application)
    {
        children[c->get_segment_path()] = c;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(connected != nullptr)
    {
        children["connected"] = connected;
    }

    for (auto const & c : eigrp)
    {
        children[c->get_segment_path()] = c;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(iso_igrp != nullptr)
    {
        children["iso-igrp"] = iso_igrp;
    }

    if(lisp != nullptr)
    {
        children["lisp"] = lisp;
    }

    if(maximum_prefix != nullptr)
    {
        children["maximum-prefix"] = maximum_prefix;
    }

    if(mobile != nullptr)
    {
        children["mobile"] = mobile;
    }

    if(odr != nullptr)
    {
        children["odr"] = odr;
    }

    for (auto const & c : ospf)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ospfv3)
    {
        children[c->get_segment_path()] = c;
    }

    if(rip != nullptr)
    {
        children["rip"] = rip;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "bgp" || name == "connected" || name == "eigrp" || name == "isis" || name == "iso-igrp" || name == "lisp" || name == "maximum-prefix" || name == "mobile" || name == "odr" || name == "ospf" || name == "ospfv3" || name == "rip" || name == "static" || name == "vrf")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application::Application()
    :
    name{YType::str, "name"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "application"; yang_parent_name = "redistribute";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application::~Application()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application::has_data() const
{
    return name.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Application' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Bgp()
    :
    as_number{YType::str, "as-number"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
    	,
    clns(nullptr) // presence node
	,ip(nullptr) // presence node
{
    yang_name = "bgp"; yang_parent_name = "redistribute";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::~Bgp()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::has_data() const
{
    return as_number.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set
	|| (clns !=  nullptr && clns->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (clns !=  nullptr && clns->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bgp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clns")
    {
        if(clns == nullptr)
        {
            clns = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns>();
        }
        return clns;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clns != nullptr)
    {
        children["clns"] = clns;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clns" || name == "ip" || name == "as-number" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns::Clns()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "clns"; yang_parent_name = "bgp";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns::~Clns()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Clns' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "ip"; yang_parent_name = "bgp";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip::~Ip()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected::Connected()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "connected"; yang_parent_name = "redistribute";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected::~Connected()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Connected' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp::Eigrp()
    :
    as_number{YType::uint32, "as-number"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "eigrp"; yang_parent_name = "redistribute";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp::~Eigrp()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp::has_data() const
{
    return as_number.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[as-number='" <<as_number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eigrp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-number" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Isis_()
{
    yang_name = "isis"; yang_parent_name = "redistribute";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::~Isis_()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::has_data() const
{
    for (std::size_t index=0; index<ip.size(); index++)
    {
        if(ip[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<isis_redistribute.size(); index++)
    {
        if(isis_redistribute[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::has_operation() const
{
    for (std::size_t index=0; index<ip.size(); index++)
    {
        if(ip[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<isis_redistribute.size(); index++)
    {
        if(isis_redistribute[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Isis_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        for(auto const & c : ip)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip>();
        c->parent = this;
        ip.push_back(c);
        return c;
    }

    if(child_yang_name == "isis-redistribute")
    {
        for(auto const & c : isis_redistribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute>();
        c->parent = this;
        isis_redistribute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ip)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : isis_redistribute)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "isis-redistribute")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::IsisRedistribute()
    :
    area_tag{YType::str, "area-tag"}
    	,
    ip(nullptr) // presence node
{
    yang_name = "isis-redistribute"; yang_parent_name = "isis";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::~IsisRedistribute()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::has_data() const
{
    return area_tag.is_set
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_tag.yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-redistribute" <<"[area-tag='" <<area_tag <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IsisRedistribute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_tag.is_set || is_set(area_tag.yfilter)) leaf_name_data.push_back(area_tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-tag")
    {
        area_tag = value;
        area_tag.value_namespace = name_space;
        area_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-tag")
    {
        area_tag.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "area-tag")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "ip"; yang_parent_name = "isis-redistribute";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip::~Ip()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::Ip()
    :
    isis_redist_levels1{YType::enumeration, "isis-redist-levels1"},
    isis_redist_levels2{YType::enumeration, "isis-redist-levels2"},
    distribute_list{YType::uint32, "distribute-list"},
    into{YType::empty, "into"},
    route_map{YType::str, "route-map"}
{
    yang_name = "ip"; yang_parent_name = "isis";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::~Ip()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::has_data() const
{
    return isis_redist_levels1.is_set
	|| isis_redist_levels2.is_set
	|| distribute_list.is_set
	|| into.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(isis_redist_levels1.yfilter)
	|| ydk::is_set(isis_redist_levels2.yfilter)
	|| ydk::is_set(distribute_list.yfilter)
	|| ydk::is_set(into.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip" <<"[isis-redist-levels1='" <<isis_redist_levels1 <<"']" <<"[isis-redist-levels2='" <<isis_redist_levels2 <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_redist_levels1.is_set || is_set(isis_redist_levels1.yfilter)) leaf_name_data.push_back(isis_redist_levels1.get_name_leafdata());
    if (isis_redist_levels2.is_set || is_set(isis_redist_levels2.yfilter)) leaf_name_data.push_back(isis_redist_levels2.get_name_leafdata());
    if (distribute_list.is_set || is_set(distribute_list.yfilter)) leaf_name_data.push_back(distribute_list.get_name_leafdata());
    if (into.is_set || is_set(into.yfilter)) leaf_name_data.push_back(into.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isis-redist-levels1")
    {
        isis_redist_levels1 = value;
        isis_redist_levels1.value_namespace = name_space;
        isis_redist_levels1.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isis-redist-levels2")
    {
        isis_redist_levels2 = value;
        isis_redist_levels2.value_namespace = name_space;
        isis_redist_levels2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distribute-list")
    {
        distribute_list = value;
        distribute_list.value_namespace = name_space;
        distribute_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "into")
    {
        into = value;
        into.value_namespace = name_space;
        into.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isis-redist-levels1")
    {
        isis_redist_levels1.yfilter = yfilter;
    }
    if(value_path == "isis-redist-levels2")
    {
        isis_redist_levels2.yfilter = yfilter;
    }
    if(value_path == "distribute-list")
    {
        distribute_list.yfilter = yfilter;
    }
    if(value_path == "into")
    {
        into.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-redist-levels1" || name == "isis-redist-levels2" || name == "distribute-list" || name == "into" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::IsoIgrp()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
    	,
    area_tag_route_map_container(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer>())
{
    area_tag_route_map_container->parent = this;

    yang_name = "iso-igrp"; yang_parent_name = "redistribute";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::~IsoIgrp()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set
	|| (area_tag_route_map_container !=  nullptr && area_tag_route_map_container->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (area_tag_route_map_container !=  nullptr && area_tag_route_map_container->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IsoIgrp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "area-tag-route-map-container")
    {
        if(area_tag_route_map_container == nullptr)
        {
            area_tag_route_map_container = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer>();
        }
        return area_tag_route_map_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(area_tag_route_map_container != nullptr)
    {
        children["area-tag-route-map-container"] = area_tag_route_map_container;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-tag-route-map-container" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer::AreaTagRouteMapContainer()
    :
    area_tag{YType::str, "area-tag"},
    route_map{YType::str, "route-map"}
{
    yang_name = "area-tag-route-map-container"; yang_parent_name = "iso-igrp";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer::~AreaTagRouteMapContainer()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer::has_data() const
{
    return area_tag.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_tag.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "area-tag-route-map-container";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AreaTagRouteMapContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_tag.is_set || is_set(area_tag.yfilter)) leaf_name_data.push_back(area_tag.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-tag")
    {
        area_tag = value;
        area_tag.value_namespace = name_space;
        area_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-tag")
    {
        area_tag.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::AreaTagRouteMapContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-tag" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp::Lisp()
    :
    include_connected{YType::empty, "include-connected"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "lisp"; yang_parent_name = "redistribute";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp::~Lisp()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp::has_data() const
{
    return include_connected.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(include_connected.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lisp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (include_connected.is_set || is_set(include_connected.yfilter)) leaf_name_data.push_back(include_connected.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "include-connected")
    {
        include_connected = value;
        include_connected.value_namespace = name_space;
        include_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "include-connected")
    {
        include_connected.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "include-connected" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix::MaximumPrefix()
    :
    number{YType::uint32, "number"},
    threshold_value{YType::uint32, "threshold-value"},
    warning_only{YType::empty, "warning-only"},
    withdraw{YType::empty, "withdraw"}
{
    yang_name = "maximum-prefix"; yang_parent_name = "redistribute";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix::~MaximumPrefix()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix::has_data() const
{
    return number.is_set
	|| threshold_value.is_set
	|| warning_only.is_set
	|| withdraw.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(threshold_value.yfilter)
	|| ydk::is_set(warning_only.yfilter)
	|| ydk::is_set(withdraw.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefix";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaximumPrefix' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (threshold_value.is_set || is_set(threshold_value.yfilter)) leaf_name_data.push_back(threshold_value.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());
    if (withdraw.is_set || is_set(withdraw.yfilter)) leaf_name_data.push_back(withdraw.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold-value")
    {
        threshold_value = value;
        threshold_value.value_namespace = name_space;
        threshold_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw")
    {
        withdraw = value;
        withdraw.value_namespace = name_space;
        withdraw.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "threshold-value")
    {
        threshold_value.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
    if(value_path == "withdraw")
    {
        withdraw.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::MaximumPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "threshold-value" || name == "warning-only" || name == "withdraw")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile::Mobile()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "mobile"; yang_parent_name = "redistribute";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile::~Mobile()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mobile' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr::Odr()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "odr"; yang_parent_name = "redistribute";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr::~Odr()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odr";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Odr' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Ospf()
    :
    process_id{YType::uint32, "process-id"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"},
    vrf{YType::str, "vrf"}
    	,
    match(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match>())
{
    match->parent = this;

    yang_name = "ospf"; yang_parent_name = "redistribute";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::~Ospf()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::has_data() const
{
    return process_id.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set
	|| vrf.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process_id.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf" <<"[process-id='" <<process_id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ospf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_id.is_set || is_set(process_id.yfilter)) leaf_name_data.push_back(process_id.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-id")
    {
        process_id = value;
        process_id.value_namespace = name_space;
        process_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-id")
    {
        process_id.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "process-id" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map" || name == "vrf")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Match()
    :
    external(nullptr) // presence node
	,internal(nullptr) // presence node
	,nssa_external(nullptr) // presence node
{
    yang_name = "match"; yang_parent_name = "ospf";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::~Match()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::has_data() const
{
    return (external !=  nullptr && external->has_data())
	|| (internal !=  nullptr && internal->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::has_operation() const
{
    return is_set(yfilter)
	|| (external !=  nullptr && external->has_operation())
	|| (internal !=  nullptr && internal->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Match' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External>();
        }
        return external;
    }

    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(external != nullptr)
    {
        children["external"] = external;
    }

    if(internal != nullptr)
    {
        children["internal"] = internal;
    }

    if(nssa_external != nullptr)
    {
        children["nssa-external"] = nssa_external;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "internal" || name == "nssa-external")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal::Internal()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "internal"; yang_parent_name = "match";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal::~Internal()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Internal' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External::External()
    :
    external_routes{YType::enumeration, "external-routes"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "external"; yang_parent_name = "match";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External::~External()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External::has_data() const
{
    return external_routes.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_routes.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'External' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.yfilter)) leaf_name_data.push_back(external_routes.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
        external_routes.value_namespace = name_space;
        external_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-routes")
    {
        external_routes.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-routes" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal::NssaExternal()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_external_routes{YType::enumeration, "nssa-external-routes"},
    route_map{YType::str, "route-map"}
{
    yang_name = "nssa-external"; yang_parent_name = "match";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_external_routes.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_external_routes.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NssaExternal' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_external_routes.is_set || is_set(nssa_external_routes.yfilter)) leaf_name_data.push_back(nssa_external_routes.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes = value;
        nssa_external_routes.value_namespace = name_space;
        nssa_external_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "nssa-external-routes" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Ospfv3()
    :
    process_id{YType::uint32, "process-id"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"},
    vrf{YType::str, "vrf"}
    	,
    match(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match>())
{
    match->parent = this;

    yang_name = "ospfv3"; yang_parent_name = "redistribute";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::~Ospfv3()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::has_data() const
{
    return process_id.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set
	|| vrf.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(process_id.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3" <<"[process-id='" <<process_id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ospfv3' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_id.is_set || is_set(process_id.yfilter)) leaf_name_data.push_back(process_id.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-id")
    {
        process_id = value;
        process_id.value_namespace = name_space;
        process_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-id")
    {
        process_id.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "process-id" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map" || name == "vrf")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Match()
    :
    external(nullptr) // presence node
	,internal(nullptr) // presence node
	,nssa_external(nullptr) // presence node
{
    yang_name = "match"; yang_parent_name = "ospfv3";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::~Match()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::has_data() const
{
    return (external !=  nullptr && external->has_data())
	|| (internal !=  nullptr && internal->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::has_operation() const
{
    return is_set(yfilter)
	|| (external !=  nullptr && external->has_operation())
	|| (internal !=  nullptr && internal->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Match' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External>();
        }
        return external;
    }

    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(external != nullptr)
    {
        children["external"] = external;
    }

    if(internal != nullptr)
    {
        children["internal"] = internal;
    }

    if(nssa_external != nullptr)
    {
        children["nssa-external"] = nssa_external;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "internal" || name == "nssa-external")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal::Internal()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "internal"; yang_parent_name = "match";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal::~Internal()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Internal' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External::External()
    :
    external_routes{YType::enumeration, "external-routes"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "external"; yang_parent_name = "match";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External::~External()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External::has_data() const
{
    return external_routes.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_routes.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'External' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.yfilter)) leaf_name_data.push_back(external_routes.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
        external_routes.value_namespace = name_space;
        external_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-routes")
    {
        external_routes.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external-routes" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal::NssaExternal()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    nssa_external_routes{YType::enumeration, "nssa-external-routes"},
    route_map{YType::str, "route-map"}
{
    yang_name = "nssa-external"; yang_parent_name = "match";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| nssa_external_routes.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(nssa_external_routes.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NssaExternal' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (nssa_external_routes.is_set || is_set(nssa_external_routes.yfilter)) leaf_name_data.push_back(nssa_external_routes.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes = value;
        nssa_external_routes.value_namespace = name_space;
        nssa_external_routes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "nssa-external-routes" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip::Rip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "rip"; yang_parent_name = "redistribute";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip::~Rip()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Static_()
    :
    clns(nullptr) // presence node
	,ip(nullptr) // presence node
{
    yang_name = "static"; yang_parent_name = "redistribute";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::~Static_()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::has_data() const
{
    return (clns !=  nullptr && clns->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::has_operation() const
{
    return is_set(yfilter)
	|| (clns !=  nullptr && clns->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Static_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clns")
    {
        if(clns == nullptr)
        {
            clns = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Clns>();
        }
        return clns;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clns != nullptr)
    {
        children["clns"] = clns;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clns" || name == "ip")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Clns::Clns()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "clns"; yang_parent_name = "static";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Clns::~Clns()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Clns::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Clns::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Clns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Clns::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Clns' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Clns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Clns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Clns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Clns::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Clns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "ip"; yang_parent_name = "static";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Ip::~Ip()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Ip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Vrf()
    :
    global(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global>())
{
    global->parent = this;

    yang_name = "vrf"; yang_parent_name = "redistribute";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::~Vrf()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::has_data() const
{
    for (std::size_t index=0; index<vrf_nm.size(); index++)
    {
        if(vrf_nm[index]->has_data())
            return true;
    }
    return (global !=  nullptr && global->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::has_operation() const
{
    for (std::size_t index=0; index<vrf_nm.size(); index++)
    {
        if(vrf_nm[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (global !=  nullptr && global->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "global")
    {
        if(global == nullptr)
        {
            global = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global>();
        }
        return global;
    }

    if(child_yang_name == "vrf-nm")
    {
        for(auto const & c : vrf_nm)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm>();
        c->parent = this;
        vrf_nm.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(global != nullptr)
    {
        children["global"] = global;
    }

    for (auto const & c : vrf_nm)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "global" || name == "vrf-nm")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::VrfNm()
    :
    vrf_nm{YType::str, "vrf-nm"},
    ospf{YType::uint16, "ospf"}
    	,
    application(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application>())
	,bgp(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp>())
	,connected(nullptr) // presence node
	,eigrp(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp>())
	,isis(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_>())
	,iso_igrp(nullptr) // presence node
	,lisp(nullptr) // presence node
	,mobile(nullptr) // presence node
	,ospfv3(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3>())
	,rip(nullptr) // presence node
	,static_(nullptr) // presence node
{
    application->parent = this;

    bgp->parent = this;

    eigrp->parent = this;

    isis->parent = this;

    ospfv3->parent = this;

    yang_name = "vrf-nm"; yang_parent_name = "vrf";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::~VrfNm()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::has_data() const
{
    return vrf_nm.is_set
	|| ospf.is_set
	|| (application !=  nullptr && application->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (connected !=  nullptr && connected->has_data())
	|| (eigrp !=  nullptr && eigrp->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (iso_igrp !=  nullptr && iso_igrp->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (mobile !=  nullptr && mobile->has_data())
	|| (ospfv3 !=  nullptr && ospfv3->has_data())
	|| (rip !=  nullptr && rip->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_nm.yfilter)
	|| ydk::is_set(ospf.yfilter)
	|| (application !=  nullptr && application->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (connected !=  nullptr && connected->has_operation())
	|| (eigrp !=  nullptr && eigrp->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (iso_igrp !=  nullptr && iso_igrp->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (mobile !=  nullptr && mobile->has_operation())
	|| (ospfv3 !=  nullptr && ospfv3->has_operation())
	|| (rip !=  nullptr && rip->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-nm" <<"[vrf-nm='" <<vrf_nm <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VrfNm' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_nm.is_set || is_set(vrf_nm.yfilter)) leaf_name_data.push_back(vrf_nm.get_name_leafdata());
    if (ospf.is_set || is_set(ospf.yfilter)) leaf_name_data.push_back(ospf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application>();
        }
        return application;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "eigrp")
    {
        if(eigrp == nullptr)
        {
            eigrp = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp>();
        }
        return eigrp;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_>();
        }
        return isis;
    }

    if(child_yang_name == "iso-igrp")
    {
        if(iso_igrp == nullptr)
        {
            iso_igrp = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp>();
        }
        return iso_igrp;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "mobile")
    {
        if(mobile == nullptr)
        {
            mobile = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile>();
        }
        return mobile;
    }

    if(child_yang_name == "ospfv3")
    {
        if(ospfv3 == nullptr)
        {
            ospfv3 = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3>();
        }
        return ospfv3;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip>();
        }
        return rip;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(application != nullptr)
    {
        children["application"] = application;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(connected != nullptr)
    {
        children["connected"] = connected;
    }

    if(eigrp != nullptr)
    {
        children["eigrp"] = eigrp;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(iso_igrp != nullptr)
    {
        children["iso-igrp"] = iso_igrp;
    }

    if(lisp != nullptr)
    {
        children["lisp"] = lisp;
    }

    if(mobile != nullptr)
    {
        children["mobile"] = mobile;
    }

    if(ospfv3 != nullptr)
    {
        children["ospfv3"] = ospfv3;
    }

    if(rip != nullptr)
    {
        children["rip"] = rip;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-nm")
    {
        vrf_nm = value;
        vrf_nm.value_namespace = name_space;
        vrf_nm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ospf")
    {
        ospf = value;
        ospf.value_namespace = name_space;
        ospf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-nm")
    {
        vrf_nm.yfilter = yfilter;
    }
    if(value_path == "ospf")
    {
        ospf.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "bgp" || name == "connected" || name == "eigrp" || name == "isis" || name == "iso-igrp" || name == "lisp" || name == "mobile" || name == "ospfv3" || name == "rip" || name == "static" || name == "vrf-nm" || name == "ospf")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Application()
{
    yang_name = "application"; yang_parent_name = "vrf-nm";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::~Application()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::has_data() const
{
    for (std::size_t index=0; index<appname.size(); index++)
    {
        if(appname[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::has_operation() const
{
    for (std::size_t index=0; index<appname.size(); index++)
    {
        if(appname[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Application' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "appname")
    {
        for(auto const & c : appname)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname>();
        c->parent = this;
        appname.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : appname)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "appname")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname::Appname()
    :
    appname{YType::str, "appname"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "appname"; yang_parent_name = "application";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname::~Appname()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname::has_data() const
{
    return appname.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appname.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "appname" <<"[appname='" <<appname <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Appname' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appname.is_set || is_set(appname.yfilter)) leaf_name_data.push_back(appname.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "appname")
    {
        appname = value;
        appname.value_namespace = name_space;
        appname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "appname")
    {
        appname.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "appname" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::Bgp()
    :
    a_lesser_1_period_0_xx_period_yy_greater_{YType::empty, "a_LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_"}
{
    yang_name = "bgp"; yang_parent_name = "vrf-nm";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::~Bgp()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::has_data() const
{
    for (std::size_t index=0; index<bp_as_num.size(); index++)
    {
        if(bp_as_num[index]->has_data())
            return true;
    }
    return a_lesser_1_period_0_xx_period_yy_greater_.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::has_operation() const
{
    for (std::size_t index=0; index<bp_as_num.size(); index++)
    {
        if(bp_as_num[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(a_lesser_1_period_0_xx_period_yy_greater_.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bgp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (a_lesser_1_period_0_xx_period_yy_greater_.is_set || is_set(a_lesser_1_period_0_xx_period_yy_greater_.yfilter)) leaf_name_data.push_back(a_lesser_1_period_0_xx_period_yy_greater_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bp-as-num")
    {
        for(auto const & c : bp_as_num)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum>();
        c->parent = this;
        bp_as_num.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bp_as_num)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "a_LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_")
    {
        a_lesser_1_period_0_xx_period_yy_greater_ = value;
        a_lesser_1_period_0_xx_period_yy_greater_.value_namespace = name_space;
        a_lesser_1_period_0_xx_period_yy_greater_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "a_LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_")
    {
        a_lesser_1_period_0_xx_period_yy_greater_.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bp-as-num" || name == "a_LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::BpAsNum()
    :
    bp_as_num{YType::str, "bp-as-num"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
    	,
    clns(nullptr) // presence node
	,ip(nullptr) // presence node
{
    yang_name = "bp-as-num"; yang_parent_name = "bgp";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::~BpAsNum()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::has_data() const
{
    return bp_as_num.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set
	|| (clns !=  nullptr && clns->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bp_as_num.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (clns !=  nullptr && clns->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bp-as-num" <<"[bp-as-num='" <<bp_as_num <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BpAsNum' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bp_as_num.is_set || is_set(bp_as_num.yfilter)) leaf_name_data.push_back(bp_as_num.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clns")
    {
        if(clns == nullptr)
        {
            clns = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns>();
        }
        return clns;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clns != nullptr)
    {
        children["clns"] = clns;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bp-as-num")
    {
        bp_as_num = value;
        bp_as_num.value_namespace = name_space;
        bp_as_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bp-as-num")
    {
        bp_as_num.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clns" || name == "ip" || name == "bp-as-num" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::Clns()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "clns"; yang_parent_name = "bp-as-num";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::~Clns()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Clns' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "ip"; yang_parent_name = "bp-as-num";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::~Ip()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected::Connected()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "connected"; yang_parent_name = "vrf-nm";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected::~Connected()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Connected' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::Eigrp()
{
    yang_name = "eigrp"; yang_parent_name = "vrf-nm";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::~Eigrp()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::has_data() const
{
    for (std::size_t index=0; index<eigrp_as.size(); index++)
    {
        if(eigrp_as[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::has_operation() const
{
    for (std::size_t index=0; index<eigrp_as.size(); index++)
    {
        if(eigrp_as[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eigrp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eigrp-as")
    {
        for(auto const & c : eigrp_as)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs>();
        c->parent = this;
        eigrp_as.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : eigrp_as)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp-as")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::EigrpAs()
    :
    eigrp_as{YType::uint16, "eigrp-as"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "eigrp-as"; yang_parent_name = "eigrp";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::~EigrpAs()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::has_data() const
{
    return eigrp_as.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eigrp_as.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp-as" <<"[eigrp-as='" <<eigrp_as <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EigrpAs' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp_as.is_set || is_set(eigrp_as.yfilter)) leaf_name_data.push_back(eigrp_as.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eigrp-as")
    {
        eigrp_as = value;
        eigrp_as.value_namespace = name_space;
        eigrp_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eigrp-as")
    {
        eigrp_as.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp-as" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Isis_()
    :
    ip(nullptr) // presence node
{
    yang_name = "isis"; yang_parent_name = "vrf-nm";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::~Isis_()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::has_data() const
{
    for (std::size_t index=0; index<isis_atag.size(); index++)
    {
        if(isis_atag[index]->has_data())
            return true;
    }
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::has_operation() const
{
    for (std::size_t index=0; index<isis_atag.size(); index++)
    {
        if(isis_atag[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Isis_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "isis-atag")
    {
        for(auto const & c : isis_atag)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag>();
        c->parent = this;
        isis_atag.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    for (auto const & c : isis_atag)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "isis-atag")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::IsisAtag()
    :
    isis_atag{YType::str, "isis-atag"}
    	,
    ip(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip>())
{
    ip->parent = this;

    yang_name = "isis-atag"; yang_parent_name = "isis";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::~IsisAtag()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::has_data() const
{
    return isis_atag.is_set
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(isis_atag.yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-atag" <<"[isis-atag='" <<isis_atag <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IsisAtag' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_atag.is_set || is_set(isis_atag.yfilter)) leaf_name_data.push_back(isis_atag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isis-atag")
    {
        isis_atag = value;
        isis_atag.value_namespace = name_space;
        isis_atag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isis-atag")
    {
        isis_atag.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "isis-atag")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "ip"; yang_parent_name = "isis-atag";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::~Ip()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "ip"; yang_parent_name = "isis";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip::~Ip()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::IsoIgrp()
    :
    route_map(nullptr) // presence node
{
    yang_name = "iso-igrp"; yang_parent_name = "vrf-nm";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::~IsoIgrp()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::has_data() const
{
    for (std::size_t index=0; index<iso_atag.size(); index++)
    {
        if(iso_atag[index]->has_data())
            return true;
    }
    return (route_map !=  nullptr && route_map->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::has_operation() const
{
    for (std::size_t index=0; index<iso_atag.size(); index++)
    {
        if(iso_atag[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (route_map !=  nullptr && route_map->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IsoIgrp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iso-atag")
    {
        for(auto const & c : iso_atag)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag>();
        c->parent = this;
        iso_atag.push_back(c);
        return c;
    }

    if(child_yang_name == "route-map")
    {
        if(route_map == nullptr)
        {
            route_map = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap>();
        }
        return route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : iso_atag)
    {
        children[c->get_segment_path()] = c;
    }

    if(route_map != nullptr)
    {
        children["route-map"] = route_map;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iso-atag" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::IsoAtag()
    :
    iso_atag{YType::str, "iso-atag"},
    route_map{YType::empty, "route-map"}
{
    yang_name = "iso-atag"; yang_parent_name = "iso-igrp";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::~IsoAtag()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::has_data() const
{
    return iso_atag.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iso_atag.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-atag" <<"[iso-atag='" <<iso_atag <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IsoAtag' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iso_atag.is_set || is_set(iso_atag.yfilter)) leaf_name_data.push_back(iso_atag.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iso-atag")
    {
        iso_atag = value;
        iso_atag.value_namespace = name_space;
        iso_atag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iso-atag")
    {
        iso_atag.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::IsoAtag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iso-atag" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::RouteMap()
    :
    rm_point{YType::str, "rm-point"}
{
    yang_name = "route-map"; yang_parent_name = "iso-igrp";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::~RouteMap()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::has_data() const
{
    return rm_point.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rm_point.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rm_point.is_set || is_set(rm_point.yfilter)) leaf_name_data.push_back(rm_point.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rm-point")
    {
        rm_point = value;
        rm_point.value_namespace = name_space;
        rm_point.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rm-point")
    {
        rm_point.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::IsoIgrp::RouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rm-point")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp::Lisp()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "lisp"; yang_parent_name = "vrf-nm";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp::~Lisp()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lisp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile::Mobile()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "mobile"; yang_parent_name = "vrf-nm";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile::~Mobile()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mobile' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Ospfv3()
{
    yang_name = "ospfv3"; yang_parent_name = "vrf-nm";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::~Ospfv3()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::has_data() const
{
    for (std::size_t index=0; index<os3_id.size(); index++)
    {
        if(os3_id[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::has_operation() const
{
    for (std::size_t index=0; index<os3_id.size(); index++)
    {
        if(os3_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ospfv3' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "os3-id")
    {
        for(auto const & c : os3_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id>();
        c->parent = this;
        os3_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : os3_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "os3-id")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::Os3Id()
    :
    os3_id{YType::uint16, "os3-id"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "os3-id"; yang_parent_name = "ospfv3";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::~Os3Id()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::has_data() const
{
    return os3_id.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(os3_id.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "os3-id" <<"[os3-id='" <<os3_id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Os3Id' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (os3_id.is_set || is_set(os3_id.yfilter)) leaf_name_data.push_back(os3_id.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "os3-id")
    {
        os3_id = value;
        os3_id.value_namespace = name_space;
        os3_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "os3-id")
    {
        os3_id.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "os3-id" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip::Rip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "rip"; yang_parent_name = "vrf-nm";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip::~Rip()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Static_()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
    	,
    clns(nullptr) // presence node
	,ip(nullptr) // presence node
{
    yang_name = "static"; yang_parent_name = "vrf-nm";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::~Static_()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set
	|| (clns !=  nullptr && clns->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (clns !=  nullptr && clns->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Static_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clns")
    {
        if(clns == nullptr)
        {
            clns = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Clns>();
        }
        return clns;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clns != nullptr)
    {
        children["clns"] = clns;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clns" || name == "ip" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Clns::Clns()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "clns"; yang_parent_name = "static";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Clns::~Clns()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Clns::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Clns::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Clns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Clns::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Clns' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Clns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Clns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Clns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Clns::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Clns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "ip"; yang_parent_name = "static";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Ip::~Ip()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Ip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Global()
    :
    ospf{YType::uint16, "ospf"}
    	,
    application(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application>())
	,bgp(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp>())
	,connected(nullptr) // presence node
	,eigrp(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp>())
	,isis(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_>())
	,iso_igrp(nullptr) // presence node
	,lisp(nullptr) // presence node
	,mobile(nullptr) // presence node
	,ospfv3(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3>())
	,rip(nullptr) // presence node
	,static_(nullptr) // presence node
{
    application->parent = this;

    bgp->parent = this;

    eigrp->parent = this;

    isis->parent = this;

    ospfv3->parent = this;

    yang_name = "global"; yang_parent_name = "vrf";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::~Global()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::has_data() const
{
    return ospf.is_set
	|| (application !=  nullptr && application->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (connected !=  nullptr && connected->has_data())
	|| (eigrp !=  nullptr && eigrp->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (iso_igrp !=  nullptr && iso_igrp->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (mobile !=  nullptr && mobile->has_data())
	|| (ospfv3 !=  nullptr && ospfv3->has_data())
	|| (rip !=  nullptr && rip->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ospf.yfilter)
	|| (application !=  nullptr && application->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (connected !=  nullptr && connected->has_operation())
	|| (eigrp !=  nullptr && eigrp->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (iso_igrp !=  nullptr && iso_igrp->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (mobile !=  nullptr && mobile->has_operation())
	|| (ospfv3 !=  nullptr && ospfv3->has_operation())
	|| (rip !=  nullptr && rip->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Global' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ospf.is_set || is_set(ospf.yfilter)) leaf_name_data.push_back(ospf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application>();
        }
        return application;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "eigrp")
    {
        if(eigrp == nullptr)
        {
            eigrp = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp>();
        }
        return eigrp;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_>();
        }
        return isis;
    }

    if(child_yang_name == "iso-igrp")
    {
        if(iso_igrp == nullptr)
        {
            iso_igrp = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp>();
        }
        return iso_igrp;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "mobile")
    {
        if(mobile == nullptr)
        {
            mobile = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Mobile>();
        }
        return mobile;
    }

    if(child_yang_name == "ospfv3")
    {
        if(ospfv3 == nullptr)
        {
            ospfv3 = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3>();
        }
        return ospfv3;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Rip>();
        }
        return rip;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(application != nullptr)
    {
        children["application"] = application;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(connected != nullptr)
    {
        children["connected"] = connected;
    }

    if(eigrp != nullptr)
    {
        children["eigrp"] = eigrp;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(iso_igrp != nullptr)
    {
        children["iso-igrp"] = iso_igrp;
    }

    if(lisp != nullptr)
    {
        children["lisp"] = lisp;
    }

    if(mobile != nullptr)
    {
        children["mobile"] = mobile;
    }

    if(ospfv3 != nullptr)
    {
        children["ospfv3"] = ospfv3;
    }

    if(rip != nullptr)
    {
        children["rip"] = rip;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ospf")
    {
        ospf = value;
        ospf.value_namespace = name_space;
        ospf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ospf")
    {
        ospf.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "bgp" || name == "connected" || name == "eigrp" || name == "isis" || name == "iso-igrp" || name == "lisp" || name == "mobile" || name == "ospfv3" || name == "rip" || name == "static" || name == "ospf")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Application()
{
    yang_name = "application"; yang_parent_name = "global";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::~Application()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::has_data() const
{
    for (std::size_t index=0; index<appname.size(); index++)
    {
        if(appname[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::has_operation() const
{
    for (std::size_t index=0; index<appname.size(); index++)
    {
        if(appname[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Application' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "appname")
    {
        for(auto const & c : appname)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname>();
        c->parent = this;
        appname.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : appname)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "appname")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname::Appname()
    :
    appname{YType::str, "appname"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "appname"; yang_parent_name = "application";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname::~Appname()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname::has_data() const
{
    return appname.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appname.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "appname" <<"[appname='" <<appname <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Appname' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appname.is_set || is_set(appname.yfilter)) leaf_name_data.push_back(appname.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "appname")
    {
        appname = value;
        appname.value_namespace = name_space;
        appname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "appname")
    {
        appname.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "appname" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::Bgp()
    :
    a_lesser_1_period_0_xx_period_yy_greater_{YType::empty, "a_LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_"}
{
    yang_name = "bgp"; yang_parent_name = "global";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::~Bgp()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::has_data() const
{
    for (std::size_t index=0; index<bp_as_num.size(); index++)
    {
        if(bp_as_num[index]->has_data())
            return true;
    }
    return a_lesser_1_period_0_xx_period_yy_greater_.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::has_operation() const
{
    for (std::size_t index=0; index<bp_as_num.size(); index++)
    {
        if(bp_as_num[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(a_lesser_1_period_0_xx_period_yy_greater_.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bgp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (a_lesser_1_period_0_xx_period_yy_greater_.is_set || is_set(a_lesser_1_period_0_xx_period_yy_greater_.yfilter)) leaf_name_data.push_back(a_lesser_1_period_0_xx_period_yy_greater_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bp-as-num")
    {
        for(auto const & c : bp_as_num)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum>();
        c->parent = this;
        bp_as_num.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bp_as_num)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "a_LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_")
    {
        a_lesser_1_period_0_xx_period_yy_greater_ = value;
        a_lesser_1_period_0_xx_period_yy_greater_.value_namespace = name_space;
        a_lesser_1_period_0_xx_period_yy_greater_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "a_LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_")
    {
        a_lesser_1_period_0_xx_period_yy_greater_.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bp-as-num" || name == "a_LESSER_1_PERIOD_0-XX_PERIOD_YY_GREATER_")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::BpAsNum()
    :
    bp_as_num{YType::str, "bp-as-num"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
    	,
    clns(nullptr) // presence node
	,ip(nullptr) // presence node
{
    yang_name = "bp-as-num"; yang_parent_name = "bgp";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::~BpAsNum()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::has_data() const
{
    return bp_as_num.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set
	|| (clns !=  nullptr && clns->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bp_as_num.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (clns !=  nullptr && clns->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bp-as-num" <<"[bp-as-num='" <<bp_as_num <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BpAsNum' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bp_as_num.is_set || is_set(bp_as_num.yfilter)) leaf_name_data.push_back(bp_as_num.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clns")
    {
        if(clns == nullptr)
        {
            clns = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns>();
        }
        return clns;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clns != nullptr)
    {
        children["clns"] = clns;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bp-as-num")
    {
        bp_as_num = value;
        bp_as_num.value_namespace = name_space;
        bp_as_num.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bp-as-num")
    {
        bp_as_num.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clns" || name == "ip" || name == "bp-as-num" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::Clns()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "clns"; yang_parent_name = "bp-as-num";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::~Clns()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Clns' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "ip"; yang_parent_name = "bp-as-num";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::~Ip()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected::Connected()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "connected"; yang_parent_name = "global";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected::~Connected()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Connected' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::Eigrp()
{
    yang_name = "eigrp"; yang_parent_name = "global";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::~Eigrp()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::has_data() const
{
    for (std::size_t index=0; index<eigrp_as.size(); index++)
    {
        if(eigrp_as[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::has_operation() const
{
    for (std::size_t index=0; index<eigrp_as.size(); index++)
    {
        if(eigrp_as[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eigrp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eigrp-as")
    {
        for(auto const & c : eigrp_as)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs>();
        c->parent = this;
        eigrp_as.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : eigrp_as)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp-as")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs::EigrpAs()
    :
    eigrp_as{YType::uint16, "eigrp-as"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "eigrp-as"; yang_parent_name = "eigrp";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs::~EigrpAs()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs::has_data() const
{
    return eigrp_as.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eigrp_as.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp-as" <<"[eigrp-as='" <<eigrp_as <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EigrpAs' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp_as.is_set || is_set(eigrp_as.yfilter)) leaf_name_data.push_back(eigrp_as.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eigrp-as")
    {
        eigrp_as = value;
        eigrp_as.value_namespace = name_space;
        eigrp_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eigrp-as")
    {
        eigrp_as.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp-as" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Isis_()
    :
    ip(nullptr) // presence node
{
    yang_name = "isis"; yang_parent_name = "global";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::~Isis_()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::has_data() const
{
    for (std::size_t index=0; index<isis_atag.size(); index++)
    {
        if(isis_atag[index]->has_data())
            return true;
    }
    return (ip !=  nullptr && ip->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::has_operation() const
{
    for (std::size_t index=0; index<isis_atag.size(); index++)
    {
        if(isis_atag[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Isis_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "isis-atag")
    {
        for(auto const & c : isis_atag)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag>();
        c->parent = this;
        isis_atag.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    for (auto const & c : isis_atag)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "isis-atag")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::IsisAtag()
    :
    isis_atag{YType::str, "isis-atag"}
    	,
    ip(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip>())
{
    ip->parent = this;

    yang_name = "isis-atag"; yang_parent_name = "isis";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::~IsisAtag()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::has_data() const
{
    return isis_atag.is_set
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(isis_atag.yfilter)
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-atag" <<"[isis-atag='" <<isis_atag <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IsisAtag' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_atag.is_set || is_set(isis_atag.yfilter)) leaf_name_data.push_back(isis_atag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isis-atag")
    {
        isis_atag = value;
        isis_atag.value_namespace = name_space;
        isis_atag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isis-atag")
    {
        isis_atag.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "isis-atag")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "ip"; yang_parent_name = "isis-atag";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::~Ip()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "ip"; yang_parent_name = "isis";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip::~Ip()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::IsoIgrp()
    :
    route_map(nullptr) // presence node
{
    yang_name = "iso-igrp"; yang_parent_name = "global";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::~IsoIgrp()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::has_data() const
{
    for (std::size_t index=0; index<iso_atag.size(); index++)
    {
        if(iso_atag[index]->has_data())
            return true;
    }
    return (route_map !=  nullptr && route_map->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::has_operation() const
{
    for (std::size_t index=0; index<iso_atag.size(); index++)
    {
        if(iso_atag[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (route_map !=  nullptr && route_map->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IsoIgrp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iso-atag")
    {
        for(auto const & c : iso_atag)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::IsoAtag>();
        c->parent = this;
        iso_atag.push_back(c);
        return c;
    }

    if(child_yang_name == "route-map")
    {
        if(route_map == nullptr)
        {
            route_map = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::RouteMap>();
        }
        return route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : iso_atag)
    {
        children[c->get_segment_path()] = c;
    }

    if(route_map != nullptr)
    {
        children["route-map"] = route_map;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iso-atag" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::IsoAtag()
    :
    iso_atag{YType::str, "iso-atag"},
    route_map{YType::empty, "route-map"}
{
    yang_name = "iso-atag"; yang_parent_name = "iso-igrp";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::~IsoAtag()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::has_data() const
{
    return iso_atag.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iso_atag.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-atag" <<"[iso-atag='" <<iso_atag <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IsoAtag' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iso_atag.is_set || is_set(iso_atag.yfilter)) leaf_name_data.push_back(iso_atag.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iso-atag")
    {
        iso_atag = value;
        iso_atag.value_namespace = name_space;
        iso_atag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iso-atag")
    {
        iso_atag.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::IsoAtag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iso-atag" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::RouteMap::RouteMap()
    :
    rm_point{YType::str, "rm-point"}
{
    yang_name = "route-map"; yang_parent_name = "iso-igrp";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::RouteMap::~RouteMap()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::RouteMap::has_data() const
{
    return rm_point.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::RouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rm_point.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::RouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rm_point.is_set || is_set(rm_point.yfilter)) leaf_name_data.push_back(rm_point.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::RouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rm-point")
    {
        rm_point = value;
        rm_point.value_namespace = name_space;
        rm_point.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::RouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rm-point")
    {
        rm_point.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::IsoIgrp::RouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rm-point")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Lisp::Lisp()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "lisp"; yang_parent_name = "global";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Lisp::~Lisp()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Lisp::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Lisp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lisp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Mobile::Mobile()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "mobile"; yang_parent_name = "global";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Mobile::~Mobile()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Mobile::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Mobile::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Mobile::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mobile' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Mobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Mobile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Mobile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Mobile::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Mobile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::Ospfv3()
{
    yang_name = "ospfv3"; yang_parent_name = "global";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::~Ospfv3()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::has_data() const
{
    for (std::size_t index=0; index<os3_id.size(); index++)
    {
        if(os3_id[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::has_operation() const
{
    for (std::size_t index=0; index<os3_id.size(); index++)
    {
        if(os3_id[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospfv3";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ospfv3' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "os3-id")
    {
        for(auto const & c : os3_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::Os3Id>();
        c->parent = this;
        os3_id.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : os3_id)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "os3-id")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::Os3Id::Os3Id()
    :
    os3_id{YType::uint16, "os3-id"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "os3-id"; yang_parent_name = "ospfv3";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::Os3Id::~Os3Id()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::Os3Id::has_data() const
{
    return os3_id.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::Os3Id::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(os3_id.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::Os3Id::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "os3-id" <<"[os3-id='" <<os3_id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::Os3Id::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Os3Id' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (os3_id.is_set || is_set(os3_id.yfilter)) leaf_name_data.push_back(os3_id.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::Os3Id::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::Os3Id::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::Os3Id::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "os3-id")
    {
        os3_id = value;
        os3_id.value_namespace = name_space;
        os3_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::Os3Id::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "os3-id")
    {
        os3_id.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::Os3Id::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "os3-id" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Rip::Rip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "rip"; yang_parent_name = "global";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Rip::~Rip()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Rip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Rip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Rip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Rip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::Static_()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
    	,
    clns(nullptr) // presence node
	,ip(nullptr) // presence node
{
    yang_name = "static"; yang_parent_name = "global";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::~Static_()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set
	|| (clns !=  nullptr && clns->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (clns !=  nullptr && clns->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Static_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clns")
    {
        if(clns == nullptr)
        {
            clns = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::Clns>();
        }
        return clns;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(clns != nullptr)
    {
        children["clns"] = clns;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "clns" || name == "ip" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::Clns::Clns()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "clns"; yang_parent_name = "static";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::Clns::~Clns()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::Clns::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::Clns::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::Clns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clns";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::Clns::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Clns' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::Clns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::Clns::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::Clns::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::Clns::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::Clns::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::Ip::Ip()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "ip"; yang_parent_name = "static";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::Ip::~Ip()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::Ip::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::Ip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SetAttachedBit::SetAttachedBit()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "set-attached-bit"; yang_parent_name = "topology";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SetAttachedBit::~SetAttachedBit()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SetAttachedBit::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SetAttachedBit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::SetAttachedBit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set-attached-bit";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::SetAttachedBit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SetAttachedBit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::SetAttachedBit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::SetAttachedBit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SetAttachedBit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SetAttachedBit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SetAttachedBit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Snmp()
{
    yang_name = "snmp"; yang_parent_name = "topology";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::~Snmp()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::has_data() const
{
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::has_operation() const
{
    for (std::size_t index=0; index<context.size(); index++)
    {
        if(context[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Snmp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context")
    {
        for(auto const & c : context)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context>();
        c->parent = this;
        context.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : context)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Context()
    :
    name{YType::str, "name"}
    	,
    community(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community>())
	,user(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User>())
{
    community->parent = this;

    user->parent = this;

    yang_name = "context"; yang_parent_name = "snmp";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::~Context()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::has_data() const
{
    return name.is_set
	|| (community !=  nullptr && community->has_data())
	|| (user !=  nullptr && user->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (community !=  nullptr && community->has_operation())
	|| (user !=  nullptr && user->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Context' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "community")
    {
        if(community == nullptr)
        {
            community = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community>();
        }
        return community;
    }

    if(child_yang_name == "user")
    {
        if(user == nullptr)
        {
            user = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User>();
        }
        return user;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(community != nullptr)
    {
        children["community"] = community;
    }

    if(user != nullptr)
    {
        children["user"] = user;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "community" || name == "user" || name == "name")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community::Community()
    :
    community_string{YType::str, "community-string"}
    	,
    access(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community::Access>())
{
    access->parent = this;

    yang_name = "community"; yang_parent_name = "context";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community::~Community()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community::has_data() const
{
    return community_string.is_set
	|| (access !=  nullptr && access->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(community_string.yfilter)
	|| (access !=  nullptr && access->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "community";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Community' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (community_string.is_set || is_set(community_string.yfilter)) leaf_name_data.push_back(community_string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community::Access>();
        }
        return access;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access != nullptr)
    {
        children["access"] = access;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "community-string")
    {
        community_string = value;
        community_string.value_namespace = name_space;
        community_string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "community-string")
    {
        community_string.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "community-string")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community::Access::Access()
    :
    acl_name{YType::str, "acl-name"},
    expanded_acl{YType::uint32, "expanded-acl"},
    ipv6{YType::str, "ipv6"},
    ro{YType::empty, "ro"},
    rw{YType::empty, "rw"},
    standard_acl{YType::uint32, "standard-acl"}
{
    yang_name = "access"; yang_parent_name = "community";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community::Access::~Access()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community::Access::has_data() const
{
    return acl_name.is_set
	|| expanded_acl.is_set
	|| ipv6.is_set
	|| ro.is_set
	|| rw.is_set
	|| standard_acl.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(expanded_acl.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(ro.yfilter)
	|| ydk::is_set(rw.yfilter)
	|| ydk::is_set(standard_acl.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community::Access::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Access' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (expanded_acl.is_set || is_set(expanded_acl.yfilter)) leaf_name_data.push_back(expanded_acl.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (ro.is_set || is_set(ro.yfilter)) leaf_name_data.push_back(ro.get_name_leafdata());
    if (rw.is_set || is_set(rw.yfilter)) leaf_name_data.push_back(rw.get_name_leafdata());
    if (standard_acl.is_set || is_set(standard_acl.yfilter)) leaf_name_data.push_back(standard_acl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expanded-acl")
    {
        expanded_acl = value;
        expanded_acl.value_namespace = name_space;
        expanded_acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ro")
    {
        ro = value;
        ro.value_namespace = name_space;
        ro.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rw")
    {
        rw = value;
        rw.value_namespace = name_space;
        rw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standard-acl")
    {
        standard_acl = value;
        standard_acl.value_namespace = name_space;
        standard_acl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
    if(value_path == "expanded-acl")
    {
        expanded_acl.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "ro")
    {
        ro.yfilter = yfilter;
    }
    if(value_path == "rw")
    {
        rw.yfilter = yfilter;
    }
    if(value_path == "standard-acl")
    {
        standard_acl.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::Community::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-name" || name == "expanded-acl" || name == "ipv6" || name == "ro" || name == "rw" || name == "standard-acl")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::User()
    :
    name{YType::str, "name"}
    	,
    permisssion(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion>())
{
    permisssion->parent = this;

    yang_name = "user"; yang_parent_name = "context";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::~User()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::has_data() const
{
    return name.is_set
	|| (permisssion !=  nullptr && permisssion->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (permisssion !=  nullptr && permisssion->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'User' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "permisssion")
    {
        if(permisssion == nullptr)
        {
            permisssion = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion>();
        }
        return permisssion;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(permisssion != nullptr)
    {
        children["permisssion"] = permisssion;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permisssion" || name == "name")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Permisssion()
    :
    credential{YType::empty, "credential"},
    encrypted{YType::empty, "encrypted"}
    	,
    access(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Access>())
	,auth(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Auth>())
{
    access->parent = this;

    auth->parent = this;

    yang_name = "permisssion"; yang_parent_name = "user";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::~Permisssion()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::has_data() const
{
    return credential.is_set
	|| encrypted.is_set
	|| (access !=  nullptr && access->has_data())
	|| (auth !=  nullptr && auth->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(credential.yfilter)
	|| ydk::is_set(encrypted.yfilter)
	|| (access !=  nullptr && access->has_operation())
	|| (auth !=  nullptr && auth->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permisssion";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Permisssion' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (credential.is_set || is_set(credential.yfilter)) leaf_name_data.push_back(credential.get_name_leafdata());
    if (encrypted.is_set || is_set(encrypted.yfilter)) leaf_name_data.push_back(encrypted.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access")
    {
        if(access == nullptr)
        {
            access = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Access>();
        }
        return access;
    }

    if(child_yang_name == "auth")
    {
        if(auth == nullptr)
        {
            auth = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Auth>();
        }
        return auth;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access != nullptr)
    {
        children["access"] = access;
    }

    if(auth != nullptr)
    {
        children["auth"] = auth;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "credential")
    {
        credential = value;
        credential.value_namespace = name_space;
        credential.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encrypted")
    {
        encrypted = value;
        encrypted.value_namespace = name_space;
        encrypted.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "credential")
    {
        credential.yfilter = yfilter;
    }
    if(value_path == "encrypted")
    {
        encrypted.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access" || name == "auth" || name == "credential" || name == "encrypted")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Access::Access()
    :
    acl_name{YType::str, "acl-name"},
    ipv6{YType::str, "ipv6"},
    standard_acl{YType::uint32, "standard-acl"}
{
    yang_name = "access"; yang_parent_name = "permisssion";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Access::~Access()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Access::has_data() const
{
    return acl_name.is_set
	|| ipv6.is_set
	|| standard_acl.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Access::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(ipv6.yfilter)
	|| ydk::is_set(standard_acl.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Access::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Access::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Access' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.yfilter)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (standard_acl.is_set || is_set(standard_acl.yfilter)) leaf_name_data.push_back(standard_acl.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Access::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Access::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Access::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
        ipv6.value_namespace = name_space;
        ipv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standard-acl")
    {
        standard_acl = value;
        standard_acl.value_namespace = name_space;
        standard_acl.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Access::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
    if(value_path == "ipv6")
    {
        ipv6.yfilter = yfilter;
    }
    if(value_path == "standard-acl")
    {
        standard_acl.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Access::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-name" || name == "ipv6" || name == "standard-acl")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Auth::Auth()
    :
    md5{YType::str, "md5"},
    sha{YType::str, "sha"}
{
    yang_name = "auth"; yang_parent_name = "permisssion";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Auth::~Auth()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Auth::has_data() const
{
    return md5.is_set
	|| sha.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Auth::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(md5.yfilter)
	|| ydk::is_set(sha.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Auth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Auth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Auth' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());
    if (sha.is_set || is_set(sha.yfilter)) leaf_name_data.push_back(sha.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Auth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Auth::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Auth::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "md5")
    {
        md5 = value;
        md5.value_namespace = name_space;
        md5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sha")
    {
        sha = value;
        sha.value_namespace = name_space;
        sha.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Auth::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "md5")
    {
        md5.yfilter = yfilter;
    }
    if(value_path == "sha")
    {
        sha.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Snmp::Context::User::Permisssion::Auth::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "sha")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::SummaryAddress()
    :
    ip{YType::str, "ip"},
    mask{YType::str, "mask"}
    	,
    level_1(nullptr) // presence node
	,level_1_2(nullptr) // presence node
	,level_2(nullptr) // presence node
	,metric_tag_container(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::MetricTagContainer>())
{
    metric_tag_container->parent = this;

    yang_name = "summary-address"; yang_parent_name = "topology";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::~SummaryAddress()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::has_data() const
{
    return ip.is_set
	|| mask.is_set
	|| (level_1 !=  nullptr && level_1->has_data())
	|| (level_1_2 !=  nullptr && level_1_2->has_data())
	|| (level_2 !=  nullptr && level_2->has_data())
	|| (metric_tag_container !=  nullptr && metric_tag_container->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| (level_1 !=  nullptr && level_1->has_operation())
	|| (level_1_2 !=  nullptr && level_1_2->has_operation())
	|| (level_2 !=  nullptr && level_2->has_operation())
	|| (metric_tag_container !=  nullptr && metric_tag_container->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-address" <<"[ip='" <<ip <<"']" <<"[mask='" <<mask <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SummaryAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level-1")
    {
        if(level_1 == nullptr)
        {
            level_1 = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level1>();
        }
        return level_1;
    }

    if(child_yang_name == "level-1-2")
    {
        if(level_1_2 == nullptr)
        {
            level_1_2 = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level12>();
        }
        return level_1_2;
    }

    if(child_yang_name == "level-2")
    {
        if(level_2 == nullptr)
        {
            level_2 = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level2>();
        }
        return level_2;
    }

    if(child_yang_name == "metric-tag-container")
    {
        if(metric_tag_container == nullptr)
        {
            metric_tag_container = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::MetricTagContainer>();
        }
        return metric_tag_container;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(level_1 != nullptr)
    {
        children["level-1"] = level_1;
    }

    if(level_1_2 != nullptr)
    {
        children["level-1-2"] = level_1_2;
    }

    if(level_2 != nullptr)
    {
        children["level-2"] = level_2;
    }

    if(metric_tag_container != nullptr)
    {
        children["metric-tag-container"] = metric_tag_container;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level-1" || name == "level-1-2" || name == "level-2" || name == "metric-tag-container" || name == "ip" || name == "mask")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level1::Level1()
    :
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"}
{
    yang_name = "level-1"; yang_parent_name = "summary-address";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level1::~Level1()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level1::has_data() const
{
    return metric.is_set
	|| tag.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level1::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-1";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Level1' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level1::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level1::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level1::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "tag")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level12::Level12()
    :
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"}
{
    yang_name = "level-1-2"; yang_parent_name = "summary-address";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level12::~Level12()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level12::has_data() const
{
    return metric.is_set
	|| tag.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level12::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level12::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-1-2";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level12::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Level12' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level12::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level12::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level12::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level12::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level12::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "tag")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level2::Level2()
    :
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"}
{
    yang_name = "level-2"; yang_parent_name = "summary-address";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level2::~Level2()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level2::has_data() const
{
    return metric.is_set
	|| tag.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level2::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-2";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Level2' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level2::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::Level2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "tag")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::MetricTagContainer::MetricTagContainer()
    :
    metric{YType::uint32, "metric"},
    tag{YType::uint32, "tag"}
{
    yang_name = "metric-tag-container"; yang_parent_name = "summary-address";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::MetricTagContainer::~MetricTagContainer()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::MetricTagContainer::has_data() const
{
    return metric.is_set
	|| tag.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::MetricTagContainer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::MetricTagContainer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric-tag-container";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::MetricTagContainer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MetricTagContainer' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::MetricTagContainer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::MetricTagContainer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::MetricTagContainer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::MetricTagContainer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SummaryAddress::MetricTagContainer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "tag")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare::TrafficShare()
    :
    min(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare::Min>())
{
    min->parent = this;

    yang_name = "traffic-share"; yang_parent_name = "topology";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare::~TrafficShare()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare::has_data() const
{
    return (min !=  nullptr && min->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare::has_operation() const
{
    return is_set(yfilter)
	|| (min !=  nullptr && min->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-share";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TrafficShare' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "min")
    {
        if(min == nullptr)
        {
            min = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare::Min>();
        }
        return min;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(min != nullptr)
    {
        children["min"] = min;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "min")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare::Min::Min()
    :
    across_interfaces{YType::empty, "across-interfaces"}
{
    yang_name = "min"; yang_parent_name = "traffic-share";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare::Min::~Min()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare::Min::has_data() const
{
    return across_interfaces.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare::Min::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(across_interfaces.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare::Min::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare::Min::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Min' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (across_interfaces.is_set || is_set(across_interfaces.yfilter)) leaf_name_data.push_back(across_interfaces.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare::Min::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare::Min::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare::Min::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "across-interfaces")
    {
        across_interfaces = value;
        across_interfaces.value_namespace = name_space;
        across_interfaces.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare::Min::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "across-interfaces")
    {
        across_interfaces.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::TrafficShare::Min::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "across-interfaces")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Advertise::Advertise()
    :
    passive_only{YType::empty, "passive-only"}
{
    yang_name = "advertise"; yang_parent_name = "topology";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Advertise::~Advertise()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Advertise::has_data() const
{
    return passive_only.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Advertise::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(passive_only.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Advertise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Advertise::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Advertise' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (passive_only.is_set || is_set(passive_only.yfilter)) leaf_name_data.push_back(passive_only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Advertise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Advertise::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Advertise::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "passive-only")
    {
        passive_only = value;
        passive_only.value_namespace = name_space;
        passive_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Advertise::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "passive-only")
    {
        passive_only.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Advertise::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "passive-only")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation::DefaultInformation()
    :
    originate(nullptr) // presence node
{
    yang_name = "default-information"; yang_parent_name = "topology";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation::~DefaultInformation()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation::has_data() const
{
    return (originate !=  nullptr && originate->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation::has_operation() const
{
    return is_set(yfilter)
	|| (originate !=  nullptr && originate->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DefaultInformation' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "originate")
    {
        if(originate == nullptr)
        {
            originate = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation::Originate>();
        }
        return originate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(originate != nullptr)
    {
        children["originate"] = originate;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "originate")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation::Originate::Originate()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "originate"; yang_parent_name = "default-information";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation::Originate::~Originate()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation::Originate::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation::Originate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation::Originate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "originate";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation::Originate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Originate' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation::Originate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation::Originate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation::Originate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation::Originate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::DefaultInformation::Originate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric::Metric()
    :
    metric{YType::uint32, "metric"}
{
    yang_name = "metric"; yang_parent_name = "topology";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric::~Metric()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric::has_data() const
{
    for (std::size_t index=0; index<metrics.size(); index++)
    {
        if(metrics[index]->has_data())
            return true;
    }
    return metric.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric::has_operation() const
{
    for (std::size_t index=0; index<metrics.size(); index++)
    {
        if(metrics[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metric' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metrics")
    {
        for(auto const & c : metrics)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric::Metrics>();
        c->parent = this;
        metrics.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : metrics)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metrics" || name == "metric")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric::Metrics::Metrics()
    :
    level{YType::enumeration, "level"},
    metric{YType::uint32, "metric"}
{
    yang_name = "metrics"; yang_parent_name = "metric";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric::Metrics::~Metrics()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric::Metrics::has_data() const
{
    return level.is_set
	|| metric.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric::Metrics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric::Metrics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metrics" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric::Metrics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Metrics' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric::Metrics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric::Metrics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric::Metrics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric::Metrics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric::Metrics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "metric")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::PrcInterval::PrcInterval()
    :
    initial_wait{YType::uint32, "initial-wait"},
    interval{YType::uint32, "interval"},
    minimum_wait{YType::uint32, "minimum-wait"}
{
    yang_name = "prc-interval"; yang_parent_name = "topology";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::PrcInterval::~PrcInterval()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::PrcInterval::has_data() const
{
    return initial_wait.is_set
	|| interval.is_set
	|| minimum_wait.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::PrcInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initial_wait.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(minimum_wait.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::PrcInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prc-interval";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::PrcInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrcInterval' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initial_wait.is_set || is_set(initial_wait.yfilter)) leaf_name_data.push_back(initial_wait.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (minimum_wait.is_set || is_set(minimum_wait.yfilter)) leaf_name_data.push_back(minimum_wait.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::PrcInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::PrcInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::PrcInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initial-wait")
    {
        initial_wait = value;
        initial_wait.value_namespace = name_space;
        initial_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-wait")
    {
        minimum_wait = value;
        minimum_wait.value_namespace = name_space;
        minimum_wait.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::PrcInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initial-wait")
    {
        initial_wait.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "minimum-wait")
    {
        minimum_wait.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::PrcInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initial-wait" || name == "interval" || name == "minimum-wait")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::SetOverloadBit()
    :
    on_startup(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup>())
	,suppress(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::Suppress>())
{
    on_startup->parent = this;

    suppress->parent = this;

    yang_name = "set-overload-bit"; yang_parent_name = "topology";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::~SetOverloadBit()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::has_data() const
{
    return (on_startup !=  nullptr && on_startup->has_data())
	|| (suppress !=  nullptr && suppress->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::has_operation() const
{
    return is_set(yfilter)
	|| (on_startup !=  nullptr && on_startup->has_operation())
	|| (suppress !=  nullptr && suppress->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set-overload-bit";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SetOverloadBit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "on-startup")
    {
        if(on_startup == nullptr)
        {
            on_startup = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup>();
        }
        return on_startup;
    }

    if(child_yang_name == "suppress")
    {
        if(suppress == nullptr)
        {
            suppress = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::Suppress>();
        }
        return suppress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(on_startup != nullptr)
    {
        children["on-startup"] = on_startup;
    }

    if(suppress != nullptr)
    {
        children["suppress"] = suppress;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "on-startup" || name == "suppress")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::OnStartup()
    :
    time(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::Time>())
	,wait_for_bgp(nullptr) // presence node
{
    time->parent = this;

    yang_name = "on-startup"; yang_parent_name = "set-overload-bit";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::~OnStartup()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::has_data() const
{
    return (time !=  nullptr && time->has_data())
	|| (wait_for_bgp !=  nullptr && wait_for_bgp->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::has_operation() const
{
    return is_set(yfilter)
	|| (time !=  nullptr && time->has_operation())
	|| (wait_for_bgp !=  nullptr && wait_for_bgp->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on-startup";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OnStartup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "time")
    {
        if(time == nullptr)
        {
            time = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::Time>();
        }
        return time;
    }

    if(child_yang_name == "wait-for-bgp")
    {
        if(wait_for_bgp == nullptr)
        {
            wait_for_bgp = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp>();
        }
        return wait_for_bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(time != nullptr)
    {
        children["time"] = time;
    }

    if(wait_for_bgp != nullptr)
    {
        children["wait-for-bgp"] = wait_for_bgp;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time" || name == "wait-for-bgp")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::Time::Time()
    :
    external{YType::empty, "external"},
    interlevel{YType::empty, "interlevel"},
    suppress{YType::empty, "suppress"},
    time{YType::uint32, "time"}
{
    yang_name = "time"; yang_parent_name = "on-startup";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::Time::~Time()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::Time::has_data() const
{
    return external.is_set
	|| interlevel.is_set
	|| suppress.is_set
	|| time.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::Time::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external.yfilter)
	|| ydk::is_set(interlevel.yfilter)
	|| ydk::is_set(suppress.yfilter)
	|| ydk::is_set(time.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::Time::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Time' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external.is_set || is_set(external.yfilter)) leaf_name_data.push_back(external.get_name_leafdata());
    if (interlevel.is_set || is_set(interlevel.yfilter)) leaf_name_data.push_back(interlevel.get_name_leafdata());
    if (suppress.is_set || is_set(suppress.yfilter)) leaf_name_data.push_back(suppress.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::Time::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::Time::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::Time::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external")
    {
        external = value;
        external.value_namespace = name_space;
        external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interlevel")
    {
        interlevel = value;
        interlevel.value_namespace = name_space;
        interlevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress")
    {
        suppress = value;
        suppress.value_namespace = name_space;
        suppress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::Time::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external")
    {
        external.yfilter = yfilter;
    }
    if(value_path == "interlevel")
    {
        interlevel.yfilter = yfilter;
    }
    if(value_path == "suppress")
    {
        suppress.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::Time::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "interlevel" || name == "suppress" || name == "time")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp::WaitForBgp()
    :
    suppress(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp::Suppress>())
{
    suppress->parent = this;

    yang_name = "wait-for-bgp"; yang_parent_name = "on-startup";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp::~WaitForBgp()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp::has_data() const
{
    return (suppress !=  nullptr && suppress->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp::has_operation() const
{
    return is_set(yfilter)
	|| (suppress !=  nullptr && suppress->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wait-for-bgp";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'WaitForBgp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "suppress")
    {
        if(suppress == nullptr)
        {
            suppress = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp::Suppress>();
        }
        return suppress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(suppress != nullptr)
    {
        children["suppress"] = suppress;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "suppress")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp::Suppress::Suppress()
    :
    external{YType::empty, "external"},
    interlevel{YType::empty, "interlevel"}
{
    yang_name = "suppress"; yang_parent_name = "wait-for-bgp";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp::Suppress::~Suppress()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp::Suppress::has_data() const
{
    return external.is_set
	|| interlevel.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp::Suppress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external.yfilter)
	|| ydk::is_set(interlevel.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp::Suppress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suppress";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp::Suppress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Suppress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external.is_set || is_set(external.yfilter)) leaf_name_data.push_back(external.get_name_leafdata());
    if (interlevel.is_set || is_set(interlevel.yfilter)) leaf_name_data.push_back(interlevel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp::Suppress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp::Suppress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp::Suppress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external")
    {
        external = value;
        external.value_namespace = name_space;
        external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interlevel")
    {
        interlevel = value;
        interlevel.value_namespace = name_space;
        interlevel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp::Suppress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external")
    {
        external.yfilter = yfilter;
    }
    if(value_path == "interlevel")
    {
        interlevel.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::OnStartup::WaitForBgp::Suppress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "interlevel")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::Suppress::Suppress()
    :
    external{YType::empty, "external"},
    interlevel{YType::empty, "interlevel"}
{
    yang_name = "suppress"; yang_parent_name = "set-overload-bit";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::Suppress::~Suppress()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::Suppress::has_data() const
{
    return external.is_set
	|| interlevel.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::Suppress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external.yfilter)
	|| ydk::is_set(interlevel.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::Suppress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suppress";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::Suppress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Suppress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external.is_set || is_set(external.yfilter)) leaf_name_data.push_back(external.get_name_leafdata());
    if (interlevel.is_set || is_set(interlevel.yfilter)) leaf_name_data.push_back(interlevel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::Suppress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::Suppress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::Suppress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external")
    {
        external = value;
        external.value_namespace = name_space;
        external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interlevel")
    {
        interlevel = value;
        interlevel.value_namespace = name_space;
        interlevel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::Suppress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external")
    {
        external.yfilter = yfilter;
    }
    if(value_path == "interlevel")
    {
        interlevel.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SetOverloadBit::Suppress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "interlevel")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::SpfInterval()
    :
    intervals(std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Intervals>())
{
    intervals->parent = this;

    yang_name = "spf-interval"; yang_parent_name = "topology";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::~SpfInterval()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::has_data() const
{
    for (std::size_t index=0; index<level_1_2.size(); index++)
    {
        if(level_1_2[index]->has_data())
            return true;
    }
    return (intervals !=  nullptr && intervals->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::has_operation() const
{
    for (std::size_t index=0; index<level_1_2.size(); index++)
    {
        if(level_1_2[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (intervals !=  nullptr && intervals->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-interval";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SpfInterval' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "intervals")
    {
        if(intervals == nullptr)
        {
            intervals = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Intervals>();
        }
        return intervals;
    }

    if(child_yang_name == "level-1-2")
    {
        for(auto const & c : level_1_2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Level12>();
        c->parent = this;
        level_1_2.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(intervals != nullptr)
    {
        children["intervals"] = intervals;
    }

    for (auto const & c : level_1_2)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intervals" || name == "level-1-2")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Level12::Level12()
    :
    level{YType::enumeration, "level"},
    initial_wait{YType::uint32, "initial-wait"},
    interval{YType::uint32, "interval"},
    minimum_wait{YType::uint32, "minimum-wait"}
{
    yang_name = "level-1-2"; yang_parent_name = "spf-interval";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Level12::~Level12()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Level12::has_data() const
{
    return level.is_set
	|| initial_wait.is_set
	|| interval.is_set
	|| minimum_wait.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Level12::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(initial_wait.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(minimum_wait.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Level12::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-1-2" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Level12::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Level12' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (initial_wait.is_set || is_set(initial_wait.yfilter)) leaf_name_data.push_back(initial_wait.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (minimum_wait.is_set || is_set(minimum_wait.yfilter)) leaf_name_data.push_back(minimum_wait.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Level12::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Level12::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Level12::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initial-wait")
    {
        initial_wait = value;
        initial_wait.value_namespace = name_space;
        initial_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-wait")
    {
        minimum_wait = value;
        minimum_wait.value_namespace = name_space;
        minimum_wait.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Level12::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "initial-wait")
    {
        initial_wait.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "minimum-wait")
    {
        minimum_wait.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Level12::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "initial-wait" || name == "interval" || name == "minimum-wait")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Intervals::Intervals()
    :
    initial_wait{YType::uint32, "initial-wait"},
    interval{YType::uint32, "interval"},
    minimum_wait{YType::uint32, "minimum-wait"}
{
    yang_name = "intervals"; yang_parent_name = "spf-interval";
}

Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Intervals::~Intervals()
{
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Intervals::has_data() const
{
    return initial_wait.is_set
	|| interval.is_set
	|| minimum_wait.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Intervals::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initial_wait.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(minimum_wait.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Intervals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intervals";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Intervals::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Intervals' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initial_wait.is_set || is_set(initial_wait.yfilter)) leaf_name_data.push_back(initial_wait.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (minimum_wait.is_set || is_set(minimum_wait.yfilter)) leaf_name_data.push_back(minimum_wait.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Intervals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Intervals::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Intervals::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initial-wait")
    {
        initial_wait = value;
        initial_wait.value_namespace = name_space;
        initial_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-wait")
    {
        minimum_wait = value;
        minimum_wait.value_namespace = name_space;
        minimum_wait.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Intervals::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initial-wait")
    {
        initial_wait.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "minimum-wait")
    {
        minimum_wait.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Intervals::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initial-wait" || name == "interval" || name == "minimum-wait")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv6::Ipv6()
    :
    adjacency_check{YType::empty, "adjacency-check"},
    distance{YType::uint32, "distance"},
    help{YType::empty, "help"},
    maximum_paths{YType::uint32, "maximum-paths"},
    router_id{YType::str, "router-id"},
    unicast{YType::empty, "unicast"}
    	,
    advertise(std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::Advertise>())
	,bfd(std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::Bfd>())
	,default_information(std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::DefaultInformation>())
	,distribute_list(std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::DistributeList>())
	,ipv6(std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::Ipv6_>())
	,metric(std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::Metric>())
	,multi_topology(nullptr) // presence node
	,prc_interval(std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::PrcInterval>())
	,redistribute(std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::Redistribute>())
	,set_overload_bit(nullptr) // presence node
	,spf_interval(std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::SpfInterval>())
	,table_map(std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::TableMap>())
{
    advertise->parent = this;

    bfd->parent = this;

    default_information->parent = this;

    distribute_list->parent = this;

    ipv6->parent = this;

    metric->parent = this;

    prc_interval->parent = this;

    redistribute->parent = this;

    spf_interval->parent = this;

    table_map->parent = this;

    yang_name = "ipv6"; yang_parent_name = "address-family";
}

Native::Router::Isis::AddressFamily::Ipv6::~Ipv6()
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::has_data() const
{
    for (std::size_t index=0; index<summary_prefix.size(); index++)
    {
        if(summary_prefix[index]->has_data())
            return true;
    }
    return adjacency_check.is_set
	|| distance.is_set
	|| help.is_set
	|| maximum_paths.is_set
	|| router_id.is_set
	|| unicast.is_set
	|| (advertise !=  nullptr && advertise->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (default_information !=  nullptr && default_information->has_data())
	|| (distribute_list !=  nullptr && distribute_list->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (metric !=  nullptr && metric->has_data())
	|| (multi_topology !=  nullptr && multi_topology->has_data())
	|| (prc_interval !=  nullptr && prc_interval->has_data())
	|| (redistribute !=  nullptr && redistribute->has_data())
	|| (set_overload_bit !=  nullptr && set_overload_bit->has_data())
	|| (spf_interval !=  nullptr && spf_interval->has_data())
	|| (table_map !=  nullptr && table_map->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<summary_prefix.size(); index++)
    {
        if(summary_prefix[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(adjacency_check.yfilter)
	|| ydk::is_set(distance.yfilter)
	|| ydk::is_set(help.yfilter)
	|| ydk::is_set(maximum_paths.yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(unicast.yfilter)
	|| (advertise !=  nullptr && advertise->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (default_information !=  nullptr && default_information->has_operation())
	|| (distribute_list !=  nullptr && distribute_list->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (metric !=  nullptr && metric->has_operation())
	|| (multi_topology !=  nullptr && multi_topology->has_operation())
	|| (prc_interval !=  nullptr && prc_interval->has_operation())
	|| (redistribute !=  nullptr && redistribute->has_operation())
	|| (set_overload_bit !=  nullptr && set_overload_bit->has_operation())
	|| (spf_interval !=  nullptr && spf_interval->has_operation())
	|| (table_map !=  nullptr && table_map->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjacency_check.is_set || is_set(adjacency_check.yfilter)) leaf_name_data.push_back(adjacency_check.get_name_leafdata());
    if (distance.is_set || is_set(distance.yfilter)) leaf_name_data.push_back(distance.get_name_leafdata());
    if (help.is_set || is_set(help.yfilter)) leaf_name_data.push_back(help.get_name_leafdata());
    if (maximum_paths.is_set || is_set(maximum_paths.yfilter)) leaf_name_data.push_back(maximum_paths.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (unicast.is_set || is_set(unicast.yfilter)) leaf_name_data.push_back(unicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "advertise")
    {
        if(advertise == nullptr)
        {
            advertise = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::Advertise>();
        }
        return advertise;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "default-information")
    {
        if(default_information == nullptr)
        {
            default_information = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::DefaultInformation>();
        }
        return default_information;
    }

    if(child_yang_name == "distribute-list")
    {
        if(distribute_list == nullptr)
        {
            distribute_list = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::DistributeList>();
        }
        return distribute_list;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::Ipv6_>();
        }
        return ipv6;
    }

    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::Metric>();
        }
        return metric;
    }

    if(child_yang_name == "multi-topology")
    {
        if(multi_topology == nullptr)
        {
            multi_topology = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::MultiTopology>();
        }
        return multi_topology;
    }

    if(child_yang_name == "prc-interval")
    {
        if(prc_interval == nullptr)
        {
            prc_interval = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::PrcInterval>();
        }
        return prc_interval;
    }

    if(child_yang_name == "redistribute")
    {
        if(redistribute == nullptr)
        {
            redistribute = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::Redistribute>();
        }
        return redistribute;
    }

    if(child_yang_name == "set-overload-bit")
    {
        if(set_overload_bit == nullptr)
        {
            set_overload_bit = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit>();
        }
        return set_overload_bit;
    }

    if(child_yang_name == "spf-interval")
    {
        if(spf_interval == nullptr)
        {
            spf_interval = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::SpfInterval>();
        }
        return spf_interval;
    }

    if(child_yang_name == "summary-prefix")
    {
        for(auto const & c : summary_prefix)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::SummaryPrefix>();
        c->parent = this;
        summary_prefix.push_back(c);
        return c;
    }

    if(child_yang_name == "table-map")
    {
        if(table_map == nullptr)
        {
            table_map = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::TableMap>();
        }
        return table_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(advertise != nullptr)
    {
        children["advertise"] = advertise;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(default_information != nullptr)
    {
        children["default-information"] = default_information;
    }

    if(distribute_list != nullptr)
    {
        children["distribute-list"] = distribute_list;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    if(multi_topology != nullptr)
    {
        children["multi-topology"] = multi_topology;
    }

    if(prc_interval != nullptr)
    {
        children["prc-interval"] = prc_interval;
    }

    if(redistribute != nullptr)
    {
        children["redistribute"] = redistribute;
    }

    if(set_overload_bit != nullptr)
    {
        children["set-overload-bit"] = set_overload_bit;
    }

    if(spf_interval != nullptr)
    {
        children["spf-interval"] = spf_interval;
    }

    for (auto const & c : summary_prefix)
    {
        children[c->get_segment_path()] = c;
    }

    if(table_map != nullptr)
    {
        children["table-map"] = table_map;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjacency-check")
    {
        adjacency_check = value;
        adjacency_check.value_namespace = name_space;
        adjacency_check.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "distance")
    {
        distance = value;
        distance.value_namespace = name_space;
        distance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "help")
    {
        help = value;
        help.value_namespace = name_space;
        help.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths = value;
        maximum_paths.value_namespace = name_space;
        maximum_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unicast")
    {
        unicast = value;
        unicast.value_namespace = name_space;
        unicast.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjacency-check")
    {
        adjacency_check.yfilter = yfilter;
    }
    if(value_path == "distance")
    {
        distance.yfilter = yfilter;
    }
    if(value_path == "help")
    {
        help.yfilter = yfilter;
    }
    if(value_path == "maximum-paths")
    {
        maximum_paths.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "unicast")
    {
        unicast.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advertise" || name == "bfd" || name == "default-information" || name == "distribute-list" || name == "ipv6" || name == "metric" || name == "multi-topology" || name == "prc-interval" || name == "redistribute" || name == "set-overload-bit" || name == "spf-interval" || name == "summary-prefix" || name == "table-map" || name == "adjacency-check" || name == "distance" || name == "help" || name == "maximum-paths" || name == "router-id" || name == "unicast")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv6::Advertise::Advertise()
    :
    passive_only{YType::empty, "passive-only"}
{
    yang_name = "advertise"; yang_parent_name = "ipv6";
}

Native::Router::Isis::AddressFamily::Ipv6::Advertise::~Advertise()
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::Advertise::has_data() const
{
    return passive_only.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv6::Advertise::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(passive_only.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv6::Advertise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv6::Advertise::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (passive_only.is_set || is_set(passive_only.yfilter)) leaf_name_data.push_back(passive_only.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv6::Advertise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv6::Advertise::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv6::Advertise::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "passive-only")
    {
        passive_only = value;
        passive_only.value_namespace = name_space;
        passive_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv6::Advertise::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "passive-only")
    {
        passive_only.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv6::Advertise::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "passive-only")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv6::DefaultInformation::DefaultInformation()
    :
    originate(nullptr) // presence node
{
    yang_name = "default-information"; yang_parent_name = "ipv6";
}

Native::Router::Isis::AddressFamily::Ipv6::DefaultInformation::~DefaultInformation()
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::DefaultInformation::has_data() const
{
    return (originate !=  nullptr && originate->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv6::DefaultInformation::has_operation() const
{
    return is_set(yfilter)
	|| (originate !=  nullptr && originate->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv6::DefaultInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv6::DefaultInformation::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv6::DefaultInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "originate")
    {
        if(originate == nullptr)
        {
            originate = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::DefaultInformation::Originate>();
        }
        return originate;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv6::DefaultInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(originate != nullptr)
    {
        children["originate"] = originate;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv6::DefaultInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv6::DefaultInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::DefaultInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "originate")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv6::DefaultInformation::Originate::Originate()
    :
    route_map{YType::str, "route-map"}
{
    yang_name = "originate"; yang_parent_name = "default-information";
}

Native::Router::Isis::AddressFamily::Ipv6::DefaultInformation::Originate::~Originate()
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::DefaultInformation::Originate::has_data() const
{
    return route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv6::DefaultInformation::Originate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv6::DefaultInformation::Originate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "originate";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv6::DefaultInformation::Originate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/ipv6/default-information/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv6::DefaultInformation::Originate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv6::DefaultInformation::Originate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv6::DefaultInformation::Originate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv6::DefaultInformation::Originate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv6::DefaultInformation::Originate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv6::Metric::Metric()
    :
    metric{YType::uint32, "metric"}
{
    yang_name = "metric"; yang_parent_name = "ipv6";
}

Native::Router::Isis::AddressFamily::Ipv6::Metric::~Metric()
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::Metric::has_data() const
{
    for (std::size_t index=0; index<metrics.size(); index++)
    {
        if(metrics[index]->has_data())
            return true;
    }
    return metric.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv6::Metric::has_operation() const
{
    for (std::size_t index=0; index<metrics.size(); index++)
    {
        if(metrics[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv6::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv6::Metric::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv6::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metrics")
    {
        for(auto const & c : metrics)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::Metric::Metrics>();
        c->parent = this;
        metrics.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv6::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : metrics)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv6::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv6::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv6::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metrics" || name == "metric")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv6::Metric::Metrics::Metrics()
    :
    level{YType::enumeration, "level"},
    metric{YType::uint32, "metric"}
{
    yang_name = "metrics"; yang_parent_name = "metric";
}

Native::Router::Isis::AddressFamily::Ipv6::Metric::Metrics::~Metrics()
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::Metric::Metrics::has_data() const
{
    return level.is_set
	|| metric.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv6::Metric::Metrics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv6::Metric::Metrics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metrics" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv6::Metric::Metrics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/ipv6/metric/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv6::Metric::Metrics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv6::Metric::Metrics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv6::Metric::Metrics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv6::Metric::Metrics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv6::Metric::Metrics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "metric")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv6::PrcInterval::PrcInterval()
    :
    initial_wait{YType::uint32, "initial-wait"},
    interval{YType::uint32, "interval"},
    minimum_wait{YType::uint32, "minimum-wait"}
{
    yang_name = "prc-interval"; yang_parent_name = "ipv6";
}

Native::Router::Isis::AddressFamily::Ipv6::PrcInterval::~PrcInterval()
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::PrcInterval::has_data() const
{
    return initial_wait.is_set
	|| interval.is_set
	|| minimum_wait.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv6::PrcInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initial_wait.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(minimum_wait.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv6::PrcInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prc-interval";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv6::PrcInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initial_wait.is_set || is_set(initial_wait.yfilter)) leaf_name_data.push_back(initial_wait.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (minimum_wait.is_set || is_set(minimum_wait.yfilter)) leaf_name_data.push_back(minimum_wait.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv6::PrcInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv6::PrcInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv6::PrcInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initial-wait")
    {
        initial_wait = value;
        initial_wait.value_namespace = name_space;
        initial_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-wait")
    {
        minimum_wait = value;
        minimum_wait.value_namespace = name_space;
        minimum_wait.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv6::PrcInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initial-wait")
    {
        initial_wait.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "minimum-wait")
    {
        minimum_wait.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv6::PrcInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initial-wait" || name == "interval" || name == "minimum-wait")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::SetOverloadBit()
    :
    on_startup(std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup>())
	,suppress(std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::Suppress>())
{
    on_startup->parent = this;

    suppress->parent = this;

    yang_name = "set-overload-bit"; yang_parent_name = "ipv6";
}

Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::~SetOverloadBit()
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::has_data() const
{
    return (on_startup !=  nullptr && on_startup->has_data())
	|| (suppress !=  nullptr && suppress->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::has_operation() const
{
    return is_set(yfilter)
	|| (on_startup !=  nullptr && on_startup->has_operation())
	|| (suppress !=  nullptr && suppress->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set-overload-bit";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "on-startup")
    {
        if(on_startup == nullptr)
        {
            on_startup = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup>();
        }
        return on_startup;
    }

    if(child_yang_name == "suppress")
    {
        if(suppress == nullptr)
        {
            suppress = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::Suppress>();
        }
        return suppress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(on_startup != nullptr)
    {
        children["on-startup"] = on_startup;
    }

    if(suppress != nullptr)
    {
        children["suppress"] = suppress;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "on-startup" || name == "suppress")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::OnStartup()
    :
    time(std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::Time>())
	,wait_for_bgp(nullptr) // presence node
{
    time->parent = this;

    yang_name = "on-startup"; yang_parent_name = "set-overload-bit";
}

Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::~OnStartup()
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::has_data() const
{
    return (time !=  nullptr && time->has_data())
	|| (wait_for_bgp !=  nullptr && wait_for_bgp->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::has_operation() const
{
    return is_set(yfilter)
	|| (time !=  nullptr && time->has_operation())
	|| (wait_for_bgp !=  nullptr && wait_for_bgp->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on-startup";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/ipv6/set-overload-bit/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "time")
    {
        if(time == nullptr)
        {
            time = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::Time>();
        }
        return time;
    }

    if(child_yang_name == "wait-for-bgp")
    {
        if(wait_for_bgp == nullptr)
        {
            wait_for_bgp = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp>();
        }
        return wait_for_bgp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(time != nullptr)
    {
        children["time"] = time;
    }

    if(wait_for_bgp != nullptr)
    {
        children["wait-for-bgp"] = wait_for_bgp;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time" || name == "wait-for-bgp")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::Time::Time()
    :
    external{YType::empty, "external"},
    interlevel{YType::empty, "interlevel"},
    suppress{YType::empty, "suppress"},
    time{YType::uint32, "time"}
{
    yang_name = "time"; yang_parent_name = "on-startup";
}

Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::Time::~Time()
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::Time::has_data() const
{
    return external.is_set
	|| interlevel.is_set
	|| suppress.is_set
	|| time.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::Time::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external.yfilter)
	|| ydk::is_set(interlevel.yfilter)
	|| ydk::is_set(suppress.yfilter)
	|| ydk::is_set(time.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::Time::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/ipv6/set-overload-bit/on-startup/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external.is_set || is_set(external.yfilter)) leaf_name_data.push_back(external.get_name_leafdata());
    if (interlevel.is_set || is_set(interlevel.yfilter)) leaf_name_data.push_back(interlevel.get_name_leafdata());
    if (suppress.is_set || is_set(suppress.yfilter)) leaf_name_data.push_back(suppress.get_name_leafdata());
    if (time.is_set || is_set(time.yfilter)) leaf_name_data.push_back(time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::Time::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::Time::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::Time::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external")
    {
        external = value;
        external.value_namespace = name_space;
        external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interlevel")
    {
        interlevel = value;
        interlevel.value_namespace = name_space;
        interlevel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress")
    {
        suppress = value;
        suppress.value_namespace = name_space;
        suppress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "time")
    {
        time = value;
        time.value_namespace = name_space;
        time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::Time::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external")
    {
        external.yfilter = yfilter;
    }
    if(value_path == "interlevel")
    {
        interlevel.yfilter = yfilter;
    }
    if(value_path == "suppress")
    {
        suppress.yfilter = yfilter;
    }
    if(value_path == "time")
    {
        time.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::Time::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "interlevel" || name == "suppress" || name == "time")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::WaitForBgp()
    :
    suppress(std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::Suppress>())
{
    suppress->parent = this;

    yang_name = "wait-for-bgp"; yang_parent_name = "on-startup";
}

Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::~WaitForBgp()
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::has_data() const
{
    return (suppress !=  nullptr && suppress->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::has_operation() const
{
    return is_set(yfilter)
	|| (suppress !=  nullptr && suppress->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wait-for-bgp";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/ipv6/set-overload-bit/on-startup/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "suppress")
    {
        if(suppress == nullptr)
        {
            suppress = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::Suppress>();
        }
        return suppress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(suppress != nullptr)
    {
        children["suppress"] = suppress;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "suppress")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::Suppress::Suppress()
    :
    external{YType::empty, "external"},
    interlevel{YType::empty, "interlevel"}
{
    yang_name = "suppress"; yang_parent_name = "wait-for-bgp";
}

Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::Suppress::~Suppress()
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::Suppress::has_data() const
{
    return external.is_set
	|| interlevel.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::Suppress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external.yfilter)
	|| ydk::is_set(interlevel.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::Suppress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suppress";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::Suppress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/ipv6/set-overload-bit/on-startup/wait-for-bgp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external.is_set || is_set(external.yfilter)) leaf_name_data.push_back(external.get_name_leafdata());
    if (interlevel.is_set || is_set(interlevel.yfilter)) leaf_name_data.push_back(interlevel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::Suppress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::Suppress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::Suppress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external")
    {
        external = value;
        external.value_namespace = name_space;
        external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interlevel")
    {
        interlevel = value;
        interlevel.value_namespace = name_space;
        interlevel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::Suppress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external")
    {
        external.yfilter = yfilter;
    }
    if(value_path == "interlevel")
    {
        interlevel.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::OnStartup::WaitForBgp::Suppress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "interlevel")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::Suppress::Suppress()
    :
    external{YType::empty, "external"},
    interlevel{YType::empty, "interlevel"}
{
    yang_name = "suppress"; yang_parent_name = "set-overload-bit";
}

Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::Suppress::~Suppress()
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::Suppress::has_data() const
{
    return external.is_set
	|| interlevel.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::Suppress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external.yfilter)
	|| ydk::is_set(interlevel.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::Suppress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suppress";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::Suppress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/ipv6/set-overload-bit/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external.is_set || is_set(external.yfilter)) leaf_name_data.push_back(external.get_name_leafdata());
    if (interlevel.is_set || is_set(interlevel.yfilter)) leaf_name_data.push_back(interlevel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::Suppress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::Suppress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::Suppress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external")
    {
        external = value;
        external.value_namespace = name_space;
        external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interlevel")
    {
        interlevel = value;
        interlevel.value_namespace = name_space;
        interlevel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::Suppress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external")
    {
        external.yfilter = yfilter;
    }
    if(value_path == "interlevel")
    {
        interlevel.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv6::SetOverloadBit::Suppress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "external" || name == "interlevel")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::SpfInterval()
    :
    intervals(std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::Intervals>())
{
    intervals->parent = this;

    yang_name = "spf-interval"; yang_parent_name = "ipv6";
}

Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::~SpfInterval()
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::has_data() const
{
    for (std::size_t index=0; index<level_1_2.size(); index++)
    {
        if(level_1_2[index]->has_data())
            return true;
    }
    return (intervals !=  nullptr && intervals->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::has_operation() const
{
    for (std::size_t index=0; index<level_1_2.size(); index++)
    {
        if(level_1_2[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (intervals !=  nullptr && intervals->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spf-interval";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "intervals")
    {
        if(intervals == nullptr)
        {
            intervals = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::Intervals>();
        }
        return intervals;
    }

    if(child_yang_name == "level-1-2")
    {
        for(auto const & c : level_1_2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::Level12>();
        c->parent = this;
        level_1_2.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(intervals != nullptr)
    {
        children["intervals"] = intervals;
    }

    for (auto const & c : level_1_2)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "intervals" || name == "level-1-2")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::Level12::Level12()
    :
    level{YType::enumeration, "level"},
    initial_wait{YType::uint32, "initial-wait"},
    interval{YType::uint32, "interval"},
    minimum_wait{YType::uint32, "minimum-wait"}
{
    yang_name = "level-1-2"; yang_parent_name = "spf-interval";
}

Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::Level12::~Level12()
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::Level12::has_data() const
{
    return level.is_set
	|| initial_wait.is_set
	|| interval.is_set
	|| minimum_wait.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::Level12::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(level.yfilter)
	|| ydk::is_set(initial_wait.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(minimum_wait.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::Level12::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level-1-2" <<"[level='" <<level <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::Level12::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/ipv6/spf-interval/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.yfilter)) leaf_name_data.push_back(level.get_name_leafdata());
    if (initial_wait.is_set || is_set(initial_wait.yfilter)) leaf_name_data.push_back(initial_wait.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (minimum_wait.is_set || is_set(minimum_wait.yfilter)) leaf_name_data.push_back(minimum_wait.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::Level12::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::Level12::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::Level12::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "level")
    {
        level = value;
        level.value_namespace = name_space;
        level.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initial-wait")
    {
        initial_wait = value;
        initial_wait.value_namespace = name_space;
        initial_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-wait")
    {
        minimum_wait = value;
        minimum_wait.value_namespace = name_space;
        minimum_wait.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::Level12::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "level")
    {
        level.yfilter = yfilter;
    }
    if(value_path == "initial-wait")
    {
        initial_wait.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "minimum-wait")
    {
        minimum_wait.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::Level12::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "level" || name == "initial-wait" || name == "interval" || name == "minimum-wait")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::Intervals::Intervals()
    :
    initial_wait{YType::uint32, "initial-wait"},
    interval{YType::uint32, "interval"},
    minimum_wait{YType::uint32, "minimum-wait"}
{
    yang_name = "intervals"; yang_parent_name = "spf-interval";
}

Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::Intervals::~Intervals()
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::Intervals::has_data() const
{
    return initial_wait.is_set
	|| interval.is_set
	|| minimum_wait.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::Intervals::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initial_wait.yfilter)
	|| ydk::is_set(interval.yfilter)
	|| ydk::is_set(minimum_wait.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::Intervals::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intervals";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::Intervals::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/ipv6/spf-interval/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initial_wait.is_set || is_set(initial_wait.yfilter)) leaf_name_data.push_back(initial_wait.get_name_leafdata());
    if (interval.is_set || is_set(interval.yfilter)) leaf_name_data.push_back(interval.get_name_leafdata());
    if (minimum_wait.is_set || is_set(minimum_wait.yfilter)) leaf_name_data.push_back(minimum_wait.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::Intervals::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::Intervals::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::Intervals::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initial-wait")
    {
        initial_wait = value;
        initial_wait.value_namespace = name_space;
        initial_wait.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interval")
    {
        interval = value;
        interval.value_namespace = name_space;
        interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "minimum-wait")
    {
        minimum_wait = value;
        minimum_wait.value_namespace = name_space;
        minimum_wait.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::Intervals::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initial-wait")
    {
        initial_wait.yfilter = yfilter;
    }
    if(value_path == "interval")
    {
        interval.yfilter = yfilter;
    }
    if(value_path == "minimum-wait")
    {
        minimum_wait.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::Intervals::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initial-wait" || name == "interval" || name == "minimum-wait")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv6::Bfd::Bfd()
    :
    all_interfaces{YType::empty, "all-interfaces"},
    check_ctrl_plane_failure{YType::empty, "check-ctrl-plane-failure"}
{
    yang_name = "bfd"; yang_parent_name = "ipv6";
}

Native::Router::Isis::AddressFamily::Ipv6::Bfd::~Bfd()
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::Bfd::has_data() const
{
    return all_interfaces.is_set
	|| check_ctrl_plane_failure.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv6::Bfd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all_interfaces.yfilter)
	|| ydk::is_set(check_ctrl_plane_failure.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv6::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv6::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all_interfaces.is_set || is_set(all_interfaces.yfilter)) leaf_name_data.push_back(all_interfaces.get_name_leafdata());
    if (check_ctrl_plane_failure.is_set || is_set(check_ctrl_plane_failure.yfilter)) leaf_name_data.push_back(check_ctrl_plane_failure.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv6::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv6::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv6::Bfd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all-interfaces")
    {
        all_interfaces = value;
        all_interfaces.value_namespace = name_space;
        all_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "check-ctrl-plane-failure")
    {
        check_ctrl_plane_failure = value;
        check_ctrl_plane_failure.value_namespace = name_space;
        check_ctrl_plane_failure.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv6::Bfd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all-interfaces")
    {
        all_interfaces.yfilter = yfilter;
    }
    if(value_path == "check-ctrl-plane-failure")
    {
        check_ctrl_plane_failure.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv6::Bfd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all-interfaces" || name == "check-ctrl-plane-failure")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv6::DistributeList::DistributeList()
{
    yang_name = "distribute-list"; yang_parent_name = "ipv6";
}

Native::Router::Isis::AddressFamily::Ipv6::DistributeList::~DistributeList()
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::DistributeList::has_data() const
{
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Isis::AddressFamily::Ipv6::DistributeList::has_operation() const
{
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv6::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv6::DistributeList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv6::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-list")
    {
        for(auto const & c : prefix_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList>();
        c->parent = this;
        prefix_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv6::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prefix_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv6::DistributeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv6::DistributeList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::DistributeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::PrefixList()
    :
    name{YType::str, "name"}
    	,
    in(nullptr) // presence node
{
    yang_name = "prefix-list"; yang_parent_name = "distribute-list";
}

Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::~PrefixList()
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::has_data() const
{
    return name.is_set
	|| (in !=  nullptr && in->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (in !=  nullptr && in->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/ipv6/distribute-list/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In>();
        }
        return in;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(in != nullptr)
    {
        children["in"] = in;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in" || name == "name")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::In()
    :
    interface(std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface>())
{
    interface->parent = this;

    yang_name = "in"; yang_parent_name = "prefix-list";
}

Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::~In()
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::has_data() const
{
    return (interface !=  nullptr && interface->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::has_operation() const
{
    return is_set(yfilter)
	|| (interface !=  nullptr && interface->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'In' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface>();
        }
        return interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interface != nullptr)
    {
        children["interface"] = interface;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::Interface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cellular{YType::str, "Cellular"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    lisp{YType::str, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    serial{YType::str, "Serial"},
    sm{YType::str, "SM"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"},
    virtual_template{YType::uint16, "Virtual-Template"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vlan{YType::uint16, "Vlan"}
    	,
    atm_acrsubinterface(std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "interface"; yang_parent_name = "in";
}

Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::~Interface()
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cellular.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| serial.is_set
	|| sm.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| virtual_template.is_set
	|| virtualportgroup.is_set
	|| vlan.is_set
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(appnav_compress.yfilter)
	|| ydk::is_set(appnav_uncompress.yfilter)
	|| ydk::is_set(atm.yfilter)
	|| ydk::is_set(atm_acr.yfilter)
	|| ydk::is_set(bdi.yfilter)
	|| ydk::is_set(cellular.yfilter)
	|| ydk::is_set(cem.yfilter)
	|| ydk::is_set(cem_acr.yfilter)
	|| ydk::is_set(embedded_service_engine.yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(lisp.yfilter)
	|| ydk::is_set(loopback.yfilter)
	|| ydk::is_set(multilink.yfilter)
	|| ydk::is_set(nve.yfilter)
	|| ydk::is_set(overlay.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(pseudowire.yfilter)
	|| ydk::is_set(serial.yfilter)
	|| ydk::is_set(sm.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(tunnel.yfilter)
	|| ydk::is_set(vasileft.yfilter)
	|| ydk::is_set(vasiright.yfilter)
	|| ydk::is_set(virtual_template.yfilter)
	|| ydk::is_set(virtualportgroup.yfilter)
	|| ydk::is_set(vlan.yfilter)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.yfilter)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.yfilter)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.yfilter)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.yfilter)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (cem.is_set || is_set(cem.yfilter)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.yfilter)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.yfilter)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.yfilter)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.yfilter)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.yfilter)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.yfilter)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.yfilter)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (serial.is_set || is_set(serial.yfilter)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.yfilter)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.yfilter)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.yfilter)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.yfilter)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.yfilter)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.yfilter)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::LispSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
        appnav_compress.value_namespace = name_space;
        appnav_compress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
        appnav_uncompress.value_namespace = name_space;
        appnav_uncompress.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "BDI")
    {
        bdi = value;
        bdi.value_namespace = name_space;
        bdi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
        cellular.value_namespace = name_space;
        cellular.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM")
    {
        cem = value;
        cem.value_namespace = name_space;
        cem.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
        cem_acr.value_namespace = name_space;
        cem_acr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
        embedded_service_engine.value_namespace = name_space;
        embedded_service_engine.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
        loopback.value_namespace = name_space;
        loopback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
        multilink.value_namespace = name_space;
        multilink.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve")
    {
        nve = value;
        nve.value_namespace = name_space;
        nve.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "overlay")
    {
        overlay = value;
        overlay.value_namespace = name_space;
        overlay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
        pseudowire.value_namespace = name_space;
        pseudowire.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Serial")
    {
        serial = value;
        serial.value_namespace = name_space;
        serial.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "SM")
    {
        sm = value;
        sm.value_namespace = name_space;
        sm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
        tunnel.value_namespace = name_space;
        tunnel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
        vasileft.value_namespace = name_space;
        vasileft.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
        vasiright.value_namespace = name_space;
        vasiright.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
        virtual_template.value_namespace = name_space;
        virtual_template.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
        virtualportgroup.value_namespace = name_space;
        virtualportgroup.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress.yfilter = yfilter;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress.yfilter = yfilter;
    }
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
    if(value_path == "BDI")
    {
        bdi.yfilter = yfilter;
    }
    if(value_path == "Cellular")
    {
        cellular.yfilter = yfilter;
    }
    if(value_path == "CEM")
    {
        cem.yfilter = yfilter;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr.yfilter = yfilter;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine.yfilter = yfilter;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
    if(value_path == "Loopback")
    {
        loopback.yfilter = yfilter;
    }
    if(value_path == "Multilink")
    {
        multilink.yfilter = yfilter;
    }
    if(value_path == "nve")
    {
        nve.yfilter = yfilter;
    }
    if(value_path == "overlay")
    {
        overlay.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "pseudowire")
    {
        pseudowire.yfilter = yfilter;
    }
    if(value_path == "Serial")
    {
        serial.yfilter = yfilter;
    }
    if(value_path == "SM")
    {
        sm.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Tunnel")
    {
        tunnel.yfilter = yfilter;
    }
    if(value_path == "vasileft")
    {
        vasileft.yfilter = yfilter;
    }
    if(value_path == "vasiright")
    {
        vasiright.yfilter = yfilter;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template.yfilter = yfilter;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup.yfilter = yfilter;
    }
    if(value_path == "Vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACRsubinterface" || name == "ATM-subinterface" || name == "LISP-subinterface" || name == "Port-channel-subinterface" || name == "AppNav-Compress" || name == "AppNav-UnCompress" || name == "ATM" || name == "ATM-ACR" || name == "BDI" || name == "Cellular" || name == "CEM" || name == "CEM-ACR" || name == "Embedded-Service-Engine" || name == "FastEthernet" || name == "GigabitEthernet" || name == "LISP" || name == "Loopback" || name == "Multilink" || name == "nve" || name == "overlay" || name == "Port-channel" || name == "pseudowire" || name == "Serial" || name == "SM" || name == "TenGigabitEthernet" || name == "Tunnel" || name == "vasileft" || name == "vasiright" || name == "Virtual-Template" || name == "VirtualPortGroup" || name == "Vlan")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "interface";
}

Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::AtmSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::AtmSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AtmSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.yfilter)) leaf_name_data.push_back(atm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::AtmSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM")
    {
        atm = value;
        atm.value_namespace = name_space;
        atm.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::AtmSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM")
    {
        atm.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::AtmSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "interface";
}

Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::AtmAcrsubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(atm_acr.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AtmAcrsubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.yfilter)) leaf_name_data.push_back(atm_acr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::AtmAcrsubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
        atm_acr.value_namespace = name_space;
        atm_acr.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::AtmAcrsubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::AtmAcrsubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ATM-ACR")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "interface";
}

Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::LispSubinterface::~LispSubinterface()
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::LispSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lisp.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::LispSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.yfilter)) leaf_name_data.push_back(lisp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::LispSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "LISP")
    {
        lisp = value;
        lisp.value_namespace = name_space;
        lisp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::LispSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "LISP")
    {
        lisp.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::LispSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "LISP")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "interface";
}

Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::PortChannelSubinterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_channel.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortChannelSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::PortChannelSubinterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::PortChannelSubinterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv6::DistributeList::PrefixList::In::Interface::PortChannelSubinterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Port-channel")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv6::Ipv6_::Ipv6_()
    :
    route(std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::Ipv6_::Route>())
{
    route->parent = this;

    yang_name = "ipv6"; yang_parent_name = "ipv6";
}

Native::Router::Isis::AddressFamily::Ipv6::Ipv6_::~Ipv6_()
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::Ipv6_::has_data() const
{
    return (route !=  nullptr && route->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv6::Ipv6_::has_operation() const
{
    return is_set(yfilter)
	|| (route !=  nullptr && route->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv6::Ipv6_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv6::Ipv6_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv6::Ipv6_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "route")
    {
        if(route == nullptr)
        {
            route = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::Ipv6_::Route>();
        }
        return route;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv6::Ipv6_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(route != nullptr)
    {
        children["route"] = route;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv6::Ipv6_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv6::Ipv6_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::Ipv6_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv6::Ipv6_::Route::Route()
    :
    priority(std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority>())
{
    priority->parent = this;

    yang_name = "route"; yang_parent_name = "ipv6";
}

Native::Router::Isis::AddressFamily::Ipv6::Ipv6_::Route::~Route()
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::Ipv6_::Route::has_data() const
{
    return (priority !=  nullptr && priority->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv6::Ipv6_::Route::has_operation() const
{
    return is_set(yfilter)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv6::Ipv6_::Route::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv6::Ipv6_::Route::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/ipv6/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv6::Ipv6_::Route::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv6::Ipv6_::Route::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv6::Ipv6_::Route::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv6::Ipv6_::Route::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::Ipv6_::Route::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority::Priority()
    :
    high(std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority::High>())
{
    high->parent = this;

    yang_name = "priority"; yang_parent_name = "route";
}

Native::Router::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority::~Priority()
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority::has_data() const
{
    return (high !=  nullptr && high->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority::has_operation() const
{
    return is_set(yfilter)
	|| (high !=  nullptr && high->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/ipv6/ipv6/route/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "high")
    {
        if(high == nullptr)
        {
            high = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority::High>();
        }
        return high;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(high != nullptr)
    {
        children["high"] = high;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "high")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority::High::High()
    :
    tag{YType::uint32, "tag"}
{
    yang_name = "high"; yang_parent_name = "priority";
}

Native::Router::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority::High::~High()
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority::High::has_data() const
{
    return tag.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority::High::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority::High::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "high";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority::High::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/ipv6/ipv6/route/priority/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority::High::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority::High::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority::High::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority::High::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv6::Ipv6_::Route::Priority::High::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv6::MultiTopology::MultiTopology()
    :
    transition{YType::empty, "transition"}
{
    yang_name = "multi-topology"; yang_parent_name = "ipv6";
}

Native::Router::Isis::AddressFamily::Ipv6::MultiTopology::~MultiTopology()
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::MultiTopology::has_data() const
{
    return transition.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv6::MultiTopology::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(transition.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv6::MultiTopology::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-topology";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv6::MultiTopology::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (transition.is_set || is_set(transition.yfilter)) leaf_name_data.push_back(transition.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv6::MultiTopology::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv6::MultiTopology::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv6::MultiTopology::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "transition")
    {
        transition = value;
        transition.value_namespace = name_space;
        transition.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv6::MultiTopology::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "transition")
    {
        transition.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv6::MultiTopology::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "transition")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Redistribute()
    :
    application(nullptr) // presence node
	,bgp(std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Bgp>())
	,connected(nullptr) // presence node
	,isis(nullptr) // presence node
	,lisp(nullptr) // presence node
	,nd(nullptr) // presence node
	,nemo(std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Nemo>())
	,static_(nullptr) // presence node
{
    bgp->parent = this;

    nemo->parent = this;

    yang_name = "redistribute"; yang_parent_name = "ipv6";
}

Native::Router::Isis::AddressFamily::Ipv6::Redistribute::~Redistribute()
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::Redistribute::has_data() const
{
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<rip.size(); index++)
    {
        if(rip[index]->has_data())
            return true;
    }
    return (application !=  nullptr && application->has_data())
	|| (bgp !=  nullptr && bgp->has_data())
	|| (connected !=  nullptr && connected->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (nd !=  nullptr && nd->has_data())
	|| (nemo !=  nullptr && nemo->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Router::Isis::AddressFamily::Ipv6::Redistribute::has_operation() const
{
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ospf.size(); index++)
    {
        if(ospf[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<rip.size(); index++)
    {
        if(rip[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (application !=  nullptr && application->has_operation())
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (connected !=  nullptr && connected->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (nd !=  nullptr && nd->has_operation())
	|| (nemo !=  nullptr && nemo->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Router::Isis::AddressFamily::Ipv6::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv6::Redistribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv6::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Application>();
        }
        return application;
    }

    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Bgp>();
        }
        return bgp;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "eigrp")
    {
        for(auto const & c : eigrp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Eigrp>();
        c->parent = this;
        eigrp.push_back(c);
        return c;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Isis_>();
        }
        return isis;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "nd")
    {
        if(nd == nullptr)
        {
            nd = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Nd>();
        }
        return nd;
    }

    if(child_yang_name == "nemo")
    {
        if(nemo == nullptr)
        {
            nemo = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Nemo>();
        }
        return nemo;
    }

    if(child_yang_name == "ospf")
    {
        for(auto const & c : ospf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Ospf>();
        c->parent = this;
        ospf.push_back(c);
        return c;
    }

    if(child_yang_name == "rip")
    {
        for(auto const & c : rip)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Rip>();
        c->parent = this;
        rip.push_back(c);
        return c;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Static_>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv6::Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(application != nullptr)
    {
        children["application"] = application;
    }

    if(bgp != nullptr)
    {
        children["bgp"] = bgp;
    }

    if(connected != nullptr)
    {
        children["connected"] = connected;
    }

    for (auto const & c : eigrp)
    {
        children[c->get_segment_path()] = c;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(lisp != nullptr)
    {
        children["lisp"] = lisp;
    }

    if(nd != nullptr)
    {
        children["nd"] = nd;
    }

    if(nemo != nullptr)
    {
        children["nemo"] = nemo;
    }

    for (auto const & c : ospf)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : rip)
    {
        children[c->get_segment_path()] = c;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv6::Redistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv6::Redistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::Redistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "bgp" || name == "connected" || name == "eigrp" || name == "isis" || name == "lisp" || name == "nd" || name == "nemo" || name == "ospf" || name == "rip" || name == "static")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Application::Application()
    :
    include_connected{YType::empty, "include-connected"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "application"; yang_parent_name = "redistribute";
}

Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Application::~Application()
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Application::has_data() const
{
    return include_connected.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Application::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(include_connected.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Application::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/ipv6/redistribute/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (include_connected.is_set || is_set(include_connected.yfilter)) leaf_name_data.push_back(include_connected.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "include-connected")
    {
        include_connected = value;
        include_connected.value_namespace = name_space;
        include_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "include-connected")
    {
        include_connected.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "include-connected" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Bgp::Bgp()
    :
    as_number{YType::str, "as-number"},
    include_connected{YType::empty, "include-connected"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "bgp"; yang_parent_name = "redistribute";
}

Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Bgp::~Bgp()
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Bgp::has_data() const
{
    return as_number.is_set
	|| include_connected.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| ydk::is_set(include_connected.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Bgp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/ipv6/redistribute/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (include_connected.is_set || is_set(include_connected.yfilter)) leaf_name_data.push_back(include_connected.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-connected")
    {
        include_connected = value;
        include_connected.value_namespace = name_space;
        include_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
    if(value_path == "include-connected")
    {
        include_connected.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-number" || name == "include-connected" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Connected::Connected()
    :
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "connected"; yang_parent_name = "redistribute";
}

Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Connected::~Connected()
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Connected::has_data() const
{
    return levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Connected::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Connected::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/ipv6/redistribute/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Eigrp::Eigrp()
    :
    as_number{YType::uint32, "as-number"},
    include_connected{YType::empty, "include-connected"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "eigrp"; yang_parent_name = "redistribute";
}

Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Eigrp::~Eigrp()
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Eigrp::has_data() const
{
    return as_number.is_set
	|| include_connected.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| ydk::is_set(include_connected.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[as-number='" <<as_number <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Eigrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/ipv6/redistribute/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());
    if (include_connected.is_set || is_set(include_connected.yfilter)) leaf_name_data.push_back(include_connected.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-connected")
    {
        include_connected = value;
        include_connected.value_namespace = name_space;
        include_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
    if(value_path == "include-connected")
    {
        include_connected.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-number" || name == "include-connected" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Isis_::Isis_()
{
    yang_name = "isis"; yang_parent_name = "redistribute";
}

Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Isis_::~Isis_()
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Isis_::has_data() const
{
    for (std::size_t index=0; index<isis_leak.size(); index++)
    {
        if(isis_leak[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<isis_redistribute.size(); index++)
    {
        if(isis_redistribute[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Isis_::has_operation() const
{
    for (std::size_t index=0; index<isis_leak.size(); index++)
    {
        if(isis_leak[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<isis_redistribute.size(); index++)
    {
        if(isis_redistribute[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Isis_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Isis_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/ipv6/redistribute/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Isis_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis-leak")
    {
        for(auto const & c : isis_leak)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisLeak>();
        c->parent = this;
        isis_leak.push_back(c);
        return c;
    }

    if(child_yang_name == "isis-redistribute")
    {
        for(auto const & c : isis_redistribute)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisRedistribute>();
        c->parent = this;
        isis_redistribute.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Isis_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : isis_leak)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : isis_redistribute)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Isis_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Isis_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Isis_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-leak" || name == "isis-redistribute")
        return true;
    return false;
}

Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisRedistribute::IsisRedistribute()
    :
    area_tag{YType::str, "area-tag"},
    include_connected{YType::empty, "include-connected"},
    levels{YType::enumeration, "levels"},
    metric{YType::uint32, "metric"},
    metric_type{YType::enumeration, "metric-type"},
    route_map{YType::str, "route-map"}
{
    yang_name = "isis-redistribute"; yang_parent_name = "isis";
}

Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisRedistribute::~IsisRedistribute()
{
}

bool Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisRedistribute::has_data() const
{
    return area_tag.is_set
	|| include_connected.is_set
	|| levels.is_set
	|| metric.is_set
	|| metric_type.is_set
	|| route_map.is_set;
}

bool Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisRedistribute::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(area_tag.yfilter)
	|| ydk::is_set(include_connected.yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(metric_type.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisRedistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-redistribute" <<"[area-tag='" <<area_tag <<"']";

    return path_buffer.str();

}

const EntityPath Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisRedistribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/router/Cisco-IOS-XE-isis:isis/address-family/ipv6/redistribute/isis/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (area_tag.is_set || is_set(area_tag.yfilter)) leaf_name_data.push_back(area_tag.get_name_leafdata());
    if (include_connected.is_set || is_set(include_connected.yfilter)) leaf_name_data.push_back(include_connected.get_name_leafdata());
    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (metric_type.is_set || is_set(metric_type.yfilter)) leaf_name_data.push_back(metric_type.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisRedistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisRedistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisRedistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "area-tag")
    {
        area_tag = value;
        area_tag.value_namespace = name_space;
        area_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "include-connected")
    {
        include_connected = value;
        include_connected.value_namespace = name_space;
        include_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric-type")
    {
        metric_type = value;
        metric_type.value_namespace = name_space;
        metric_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisRedistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "area-tag")
    {
        area_tag.yfilter = yfilter;
    }
    if(value_path == "include-connected")
    {
        include_connected.yfilter = yfilter;
    }
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "metric-type")
    {
        metric_type.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisRedistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "area-tag" || name == "include-connected" || name == "levels" || name == "metric" || name == "metric-type" || name == "route-map")
        return true;
    return false;
}

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Application::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Clns::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Bgp::Ip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Connected::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Eigrp::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::IsisRedistribute::Ip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::IsisRedistLevels1::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::IsisRedistLevels1::level_2 {1, "level-2"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::IsisRedistLevels2::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Isis_::Ip::IsisRedistLevels2::level_2 {1, "level-2"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::IsoIgrp::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Lisp::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Mobile::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Odr::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::Internal::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::External::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospf::Match::NssaExternal::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::Internal::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::External::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Ospfv3::Match::NssaExternal::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Rip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Clns::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Clns::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Clns::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Clns::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Ip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Ip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Ip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Static_::Ip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Application::Appname::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Clns::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Bgp::BpAsNum::Ip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Connected::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Eigrp::EigrpAs::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::IsisAtag::Ip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Isis_::Ip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Lisp::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Mobile::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Ospfv3::Os3Id::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Rip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Clns::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Clns::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Clns::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Clns::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Ip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Ip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Ip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::VrfNm::Static_::Ip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Application::Appname::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Clns::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Bgp::BpAsNum::Ip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Connected::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Eigrp::EigrpAs::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::IsisAtag::Ip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Isis_::Ip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Lisp::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Lisp::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Lisp::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Lisp::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Mobile::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Mobile::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Mobile::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Mobile::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::Os3Id::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::Os3Id::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::Os3Id::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Ospfv3::Os3Id::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Rip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Rip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Rip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Rip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::Clns::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::Clns::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::Clns::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::Clns::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::Ip::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::Ip::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::Ip::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Redistribute::Vrf::Global::Static_::Ip::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric::Metrics::Level::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::Metric::Metrics::Level::level_2 {1, "level-2"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Level12::Level::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv4::Topology::SpfInterval::Level12::Level::level_2 {1, "level-2"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv6::Metric::Metrics::Level::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv6::Metric::Metrics::Level::level_2 {1, "level-2"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::Level12::Level::level_1 {0, "level-1"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv6::SpfInterval::Level12::Level::level_2 {1, "level-2"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Application::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Application::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Application::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Application::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Bgp::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Bgp::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Bgp::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Bgp::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Connected::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Connected::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Connected::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Connected::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Eigrp::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Eigrp::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Eigrp::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Eigrp::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};

const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisRedistribute::MetricType::external {0, "external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisRedistribute::MetricType::internal {1, "internal"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisRedistribute::MetricType::rib_metric_as_external {2, "rib-metric-as-external"};
const Enum::YLeaf Native::Router::Isis::AddressFamily::Ipv6::Redistribute::Isis_::IsisRedistribute::MetricType::rib_metric_as_internal {3, "rib-metric-as-internal"};


}
}
