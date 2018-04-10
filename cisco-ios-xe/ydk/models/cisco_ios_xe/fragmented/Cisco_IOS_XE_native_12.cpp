
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_12.hpp"
#include "Cisco_IOS_XE_native_13.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Redistribute()
    :
    application(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Application>())
	,lisp(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Lisp>())
	,nd(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Nd>())
	,connected(nullptr) // presence node
	,isis(nullptr) // presence node
	,iso_igrp(nullptr) // presence node
	,mobile(nullptr) // presence node
	,odr(nullptr) // presence node
	,static_(nullptr) // presence node
	,rip(nullptr) // presence node
{
    application->parent = this;
    lisp->parent = this;
    nd->parent = this;

    yang_name = "redistribute"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::~Redistribute()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::has_data() const
{
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_data())
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
    return (application !=  nullptr && application->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (nd !=  nullptr && nd->has_data())
	|| (connected !=  nullptr && connected->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (iso_igrp !=  nullptr && iso_igrp->has_data())
	|| (mobile !=  nullptr && mobile->has_data())
	|| (odr !=  nullptr && odr->has_data())
	|| (static_ !=  nullptr && static_->has_data())
	|| (rip !=  nullptr && rip->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::has_operation() const
{
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_operation())
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
    return is_set(yfilter)
	|| (application !=  nullptr && application->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (nd !=  nullptr && nd->has_operation())
	|| (connected !=  nullptr && connected->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (iso_igrp !=  nullptr && iso_igrp->has_operation())
	|| (mobile !=  nullptr && mobile->has_operation())
	|| (odr !=  nullptr && odr->has_operation())
	|| (static_ !=  nullptr && static_->has_operation())
	|| (rip !=  nullptr && rip->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Application>();
        }
        return application;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "nd")
    {
        if(nd == nullptr)
        {
            nd = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Nd>();
        }
        return nd;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "bgp")
    {
        auto c = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp>();
        c->parent = this;
        bgp.push_back(c);
        return c;
    }

    if(child_yang_name == "eigrp")
    {
        auto c = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp>();
        c->parent = this;
        eigrp.push_back(c);
        return c;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "iso-igrp")
    {
        if(iso_igrp == nullptr)
        {
            iso_igrp = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp>();
        }
        return iso_igrp;
    }

    if(child_yang_name == "mobile")
    {
        if(mobile == nullptr)
        {
            mobile = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile>();
        }
        return mobile;
    }

    if(child_yang_name == "odr")
    {
        if(odr == nullptr)
        {
            odr = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr>();
        }
        return odr;
    }

    if(child_yang_name == "ospf")
    {
        auto c = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf>();
        c->parent = this;
        ospf.push_back(c);
        return c;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static>();
        }
        return static_;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_>();
        }
        return rip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(application != nullptr)
    {
        children["application"] = application;
    }

    if(lisp != nullptr)
    {
        children["lisp"] = lisp;
    }

    if(nd != nullptr)
    {
        children["nd"] = nd;
    }

    if(connected != nullptr)
    {
        children["connected"] = connected;
    }

    count = 0;
    for (auto const & c : bgp)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : eigrp)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(iso_igrp != nullptr)
    {
        children["iso-igrp"] = iso_igrp;
    }

    if(mobile != nullptr)
    {
        children["mobile"] = mobile;
    }

    if(odr != nullptr)
    {
        children["odr"] = odr;
    }

    count = 0;
    for (auto const & c : ospf)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    if(rip != nullptr)
    {
        children["rip"] = rip;
    }

    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "lisp" || name == "nd" || name == "connected" || name == "bgp" || name == "eigrp" || name == "isis" || name == "iso-igrp" || name == "mobile" || name == "odr" || name == "ospf" || name == "static" || name == "rip")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Application::Application()
    :
    include_connected{YType::empty, "include-connected"},
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
{

    yang_name = "application"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Application::~Application()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Application::has_data() const
{
    return include_connected.is_set
	|| metric.is_set
	|| route_map.is_set;
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Application::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(include_connected.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (include_connected.is_set || is_set(include_connected.yfilter)) leaf_name_data.push_back(include_connected.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "include-connected")
    {
        include_connected = value;
        include_connected.value_namespace = name_space;
        include_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "include-connected")
    {
        include_connected.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "include-connected" || name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Lisp::Lisp()
    :
    include_connected{YType::empty, "include-connected"},
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
{

    yang_name = "lisp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Lisp::~Lisp()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Lisp::has_data() const
{
    return include_connected.is_set
	|| metric.is_set
	|| route_map.is_set;
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(include_connected.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Lisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (include_connected.is_set || is_set(include_connected.yfilter)) leaf_name_data.push_back(include_connected.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "include-connected")
    {
        include_connected = value;
        include_connected.value_namespace = name_space;
        include_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "include-connected")
    {
        include_connected.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "include-connected" || name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Nd::Nd()
    :
    include_connected{YType::empty, "include-connected"},
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
{

    yang_name = "nd"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Nd::~Nd()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Nd::has_data() const
{
    return include_connected.is_set
	|| metric.is_set
	|| route_map.is_set;
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Nd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(include_connected.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Nd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Nd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (include_connected.is_set || is_set(include_connected.yfilter)) leaf_name_data.push_back(include_connected.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Nd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Nd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Nd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "include-connected")
    {
        include_connected = value;
        include_connected.value_namespace = name_space;
        include_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Nd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "include-connected")
    {
        include_connected.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Nd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "include-connected" || name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::Connected()
    :
    rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "connected"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::~Connected()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::has_data() const
{
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::has_operation() const
{
    return is_set(yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "connected"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
        metric_value.value_namespace = name_space;
        metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transparent")
    {
        transparent = value;
        transparent.value_namespace = name_space;
        transparent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-value")
    {
        metric_value.yfilter = yfilter;
    }
    if(value_path == "transparent")
    {
        transparent.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Connected::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::Bgp()
    :
    as_number{YType::str, "as-number"}
    	,
    rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "bgp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::~Bgp()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::has_data() const
{
    return as_number.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp" <<"[as-number='" <<as_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map" || name == "as-number")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
        metric_value.value_namespace = name_space;
        metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transparent")
    {
        transparent = value;
        transparent.value_namespace = name_space;
        transparent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-value")
    {
        metric_value.yfilter = yfilter;
    }
    if(value_path == "transparent")
    {
        transparent.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Bgp::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::Eigrp()
    :
    as_number{YType::uint16, "as-number"}
    	,
    rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "eigrp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::~Eigrp()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::has_data() const
{
    return as_number.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[as-number='" <<as_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map" || name == "as-number")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
        metric_value.value_namespace = name_space;
        metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transparent")
    {
        transparent = value;
        transparent.value_namespace = name_space;
        transparent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-value")
    {
        metric_value.yfilter = yfilter;
    }
    if(value_path == "transparent")
    {
        transparent.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Eigrp::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::Isis()
    :
    rip_isis_redist(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist>())
{
    rip_isis_redist->parent = this;

    yang_name = "isis"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::~Isis()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::has_data() const
{
    for (std::size_t index=0; index<isis_area.size(); index++)
    {
        if(isis_area[index]->has_data())
            return true;
    }
    return (rip_isis_redist !=  nullptr && rip_isis_redist->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::has_operation() const
{
    for (std::size_t index=0; index<isis_area.size(); index++)
    {
        if(isis_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (rip_isis_redist !=  nullptr && rip_isis_redist->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis-area")
    {
        auto c = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea>();
        c->parent = this;
        isis_area.push_back(c);
        return c;
    }

    if(child_yang_name == "rip-isis-redist")
    {
        if(rip_isis_redist == nullptr)
        {
            rip_isis_redist = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist>();
        }
        return rip_isis_redist;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : isis_area)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(rip_isis_redist != nullptr)
    {
        children["rip-isis-redist"] = rip_isis_redist;
    }

    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-area" || name == "rip-isis-redist")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::IsisArea()
    :
    name{YType::str, "name"}
    	,
    rip_isis_redist(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist>())
{
    rip_isis_redist->parent = this;

    yang_name = "isis-area"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::~IsisArea()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::has_data() const
{
    return name.is_set
	|| (rip_isis_redist !=  nullptr && rip_isis_redist->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (rip_isis_redist !=  nullptr && rip_isis_redist->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-area" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-isis-redist")
    {
        if(rip_isis_redist == nullptr)
        {
            rip_isis_redist = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist>();
        }
        return rip_isis_redist;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rip_isis_redist != nullptr)
    {
        children["rip-isis-redist"] = rip_isis_redist;
    }

    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-isis-redist" || name == "name")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipIsisRedist()
    :
    isis_level_routes{YType::enumeration, "isis-level-routes"}
    	,
    rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "rip-isis-redist"; yang_parent_name = "isis-area"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::~RipIsisRedist()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::has_data() const
{
    return isis_level_routes.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(isis_level_routes.yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-isis-redist";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_level_routes.is_set || is_set(isis_level_routes.yfilter)) leaf_name_data.push_back(isis_level_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes = value;
        isis_level_routes.value_namespace = name_space;
        isis_level_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map" || name == "isis-level-routes")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "rip-isis-redist"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
        metric_value.value_namespace = name_space;
        metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transparent")
    {
        transparent = value;
        transparent.value_namespace = name_space;
        transparent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-value")
    {
        metric_value.yfilter = yfilter;
    }
    if(value_path == "transparent")
    {
        transparent.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipIsisRedist()
    :
    isis_level_routes{YType::enumeration, "isis-level-routes"}
    	,
    rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "rip-isis-redist"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::~RipIsisRedist()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::has_data() const
{
    return isis_level_routes.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(isis_level_routes.yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-isis-redist";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_level_routes.is_set || is_set(isis_level_routes.yfilter)) leaf_name_data.push_back(isis_level_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes = value;
        isis_level_routes.value_namespace = name_space;
        isis_level_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map" || name == "isis-level-routes")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "rip-isis-redist"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
        metric_value.value_namespace = name_space;
        metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transparent")
    {
        transparent = value;
        transparent.value_namespace = name_space;
        transparent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-value")
    {
        metric_value.yfilter = yfilter;
    }
    if(value_path == "transparent")
    {
        transparent.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoIgrp()
    :
    rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "iso-igrp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::~IsoIgrp()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::has_data() const
{
    for (std::size_t index=0; index<isoigrp_list.size(); index++)
    {
        if(isoigrp_list[index]->has_data())
            return true;
    }
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::has_operation() const
{
    for (std::size_t index=0; index<isoigrp_list.size(); index++)
    {
        if(isoigrp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isoigrp-list")
    {
        auto c = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList>();
        c->parent = this;
        isoigrp_list.push_back(c);
        return c;
    }

    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : isoigrp_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isoigrp-list" || name == "rip-metric-route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::IsoigrpList()
    :
    iso_area_tag{YType::str, "iso-area-tag"}
    	,
    rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "isoigrp-list"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::~IsoigrpList()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::has_data() const
{
    return iso_area_tag.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iso_area_tag.yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isoigrp-list" <<"[iso-area-tag='" <<iso_area_tag <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iso_area_tag.is_set || is_set(iso_area_tag.yfilter)) leaf_name_data.push_back(iso_area_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iso-area-tag")
    {
        iso_area_tag = value;
        iso_area_tag.value_namespace = name_space;
        iso_area_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iso-area-tag")
    {
        iso_area_tag.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map" || name == "iso-area-tag")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "isoigrp-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
        metric_value.value_namespace = name_space;
        metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transparent")
    {
        transparent = value;
        transparent.value_namespace = name_space;
        transparent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-value")
    {
        metric_value.yfilter = yfilter;
    }
    if(value_path == "transparent")
    {
        transparent.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
        metric_value.value_namespace = name_space;
        metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transparent")
    {
        transparent = value;
        transparent.value_namespace = name_space;
        transparent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-value")
    {
        metric_value.yfilter = yfilter;
    }
    if(value_path == "transparent")
    {
        transparent.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::Mobile()
    :
    rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "mobile"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::~Mobile()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::has_data() const
{
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::has_operation() const
{
    return is_set(yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "mobile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
        metric_value.value_namespace = name_space;
        metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transparent")
    {
        transparent = value;
        transparent.value_namespace = name_space;
        transparent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-value")
    {
        metric_value.yfilter = yfilter;
    }
    if(value_path == "transparent")
    {
        transparent.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Mobile::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::Odr()
    :
    rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "odr"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::~Odr()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::has_data() const
{
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::has_operation() const
{
    return is_set(yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "odr"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
        metric_value.value_namespace = name_space;
        metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transparent")
    {
        transparent = value;
        transparent.value_namespace = name_space;
        transparent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-value")
    {
        metric_value.yfilter = yfilter;
    }
    if(value_path == "transparent")
    {
        transparent.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Odr::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Ospf()
    :
    process_id{YType::uint16, "process-id"}
    	,
    match(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match>())
	,rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::RipMetricRouteMap>())
{
    match->parent = this;
    rip_metric_route_map->parent = this;

    yang_name = "ospf"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::~Ospf()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return process_id.is_set
	|| (match !=  nullptr && match->has_data())
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(process_id.yfilter)
	|| (match !=  nullptr && match->has_operation())
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf" <<"[process-id='" <<process_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_id.is_set || is_set(process_id.yfilter)) leaf_name_data.push_back(process_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto c = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Vrf_>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match>();
        }
        return match;
    }

    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(match != nullptr)
    {
        children["match"] = match;
    }

    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-id")
    {
        process_id = value;
        process_id.value_namespace = name_space;
        process_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-id")
    {
        process_id.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "match" || name == "rip-metric-route-map" || name == "process-id")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Vrf_::Vrf_()
    :
    name{YType::str, "name"}
{

    yang_name = "vrf"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Vrf_::~Vrf_()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Vrf_::has_data() const
{
    return name.is_set;
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Vrf_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Vrf_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Vrf_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Vrf_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Vrf_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Vrf_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Vrf_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Vrf_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Match()
    :
    internal(nullptr) // presence node
	,external(nullptr) // presence node
	,nssa_external(nullptr) // presence node
{

    yang_name = "match"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::~Match()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::has_data() const
{
    return (internal !=  nullptr && internal->has_data())
	|| (external !=  nullptr && external->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::has_operation() const
{
    return is_set(yfilter)
	|| (internal !=  nullptr && internal->has_operation())
	|| (external !=  nullptr && external->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External>();
        }
        return external;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(internal != nullptr)
    {
        children["internal"] = internal;
    }

    if(external != nullptr)
    {
        children["external"] = external;
    }

    if(nssa_external != nullptr)
    {
        children["nssa-external"] = nssa_external;
    }

    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internal" || name == "external" || name == "nssa-external")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::Internal()
    :
    rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "internal"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::~Internal()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::has_data() const
{
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::has_operation() const
{
    return is_set(yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "internal"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
        metric_value.value_namespace = name_space;
        metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transparent")
    {
        transparent = value;
        transparent.value_namespace = name_space;
        transparent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-value")
    {
        metric_value.yfilter = yfilter;
    }
    if(value_path == "transparent")
    {
        transparent.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::External()
    :
    external_routes{YType::enumeration, "external-routes"}
    	,
    rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::~External()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::has_data() const
{
    return external_routes.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_routes.yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.yfilter)) leaf_name_data.push_back(external_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
        external_routes.value_namespace = name_space;
        external_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-routes")
    {
        external_routes.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map" || name == "external-routes")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "external"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
        metric_value.value_namespace = name_space;
        metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transparent")
    {
        transparent = value;
        transparent.value_namespace = name_space;
        transparent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-value")
    {
        metric_value.yfilter = yfilter;
    }
    if(value_path == "transparent")
    {
        transparent.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::NssaExternal()
    :
    nssa_external_routes{YType::enumeration, "nssa-external-routes"}
    	,
    rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "nssa-external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::has_data() const
{
    return nssa_external_routes.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nssa_external_routes.yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nssa_external_routes.is_set || is_set(nssa_external_routes.yfilter)) leaf_name_data.push_back(nssa_external_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes = value;
        nssa_external_routes.value_namespace = name_space;
        nssa_external_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map" || name == "nssa-external-routes")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "nssa-external"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
        metric_value.value_namespace = name_space;
        metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transparent")
    {
        transparent = value;
        transparent.value_namespace = name_space;
        transparent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-value")
    {
        metric_value.yfilter = yfilter;
    }
    if(value_path == "transparent")
    {
        transparent.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
        metric_value.value_namespace = name_space;
        metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transparent")
    {
        transparent = value;
        transparent.value_namespace = name_space;
        transparent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-value")
    {
        metric_value.yfilter = yfilter;
    }
    if(value_path == "transparent")
    {
        transparent.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Ospf::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static::Static()
    :
    rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "static"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static::~Static()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static::has_data() const
{
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static::has_operation() const
{
    return is_set(yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
        metric_value.value_namespace = name_space;
        metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transparent")
    {
        transparent = value;
        transparent.value_namespace = name_space;
        transparent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-value")
    {
        metric_value.yfilter = yfilter;
    }
    if(value_path == "transparent")
    {
        transparent.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Static::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::Rip_()
    :
    rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "rip"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::~Rip_()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::has_data() const
{
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::has_operation() const
{
    return is_set(yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
        metric_value.value_namespace = name_space;
        metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transparent")
    {
        transparent = value;
        transparent.value_namespace = name_space;
        transparent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-value")
    {
        metric_value.yfilter = yfilter;
    }
    if(value_path == "transparent")
    {
        transparent.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Rip_::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Timers::Timers()
    :
    update{YType::uint16, "update"},
    timeout{YType::uint16, "timeout"},
    holddown{YType::uint16, "holddown"},
    garbage_collection{YType::uint16, "garbage-collection"}
{

    yang_name = "timers"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Timers::~Timers()
{
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Timers::has_data() const
{
    return update.is_set
	|| timeout.is_set
	|| holddown.is_set
	|| garbage_collection.is_set;
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(update.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(holddown.yfilter)
	|| ydk::is_set(garbage_collection.yfilter);
}

std::string Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update.is_set || is_set(update.yfilter)) leaf_name_data.push_back(update.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (holddown.is_set || is_set(holddown.yfilter)) leaf_name_data.push_back(holddown.get_name_leafdata());
    if (garbage_collection.is_set || is_set(garbage_collection.yfilter)) leaf_name_data.push_back(garbage_collection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update")
    {
        update = value;
        update.value_namespace = name_space;
        update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holddown")
    {
        holddown = value;
        holddown.value_namespace = name_space;
        holddown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "garbage-collection")
    {
        garbage_collection = value;
        garbage_collection.value_namespace = name_space;
        garbage_collection.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update")
    {
        update.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "holddown")
    {
        holddown.yfilter = yfilter;
    }
    if(value_path == "garbage-collection")
    {
        garbage_collection.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update" || name == "timeout" || name == "holddown" || name == "garbage-collection")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::DistributeList::DistributeList()
{

    yang_name = "distribute-list"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::DistributeList::~DistributeList()
{
}

bool Native::Ipv6::Router::Rip::DistributeList::has_data() const
{
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Ipv6::Router::Rip::DistributeList::has_operation() const
{
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Ipv6::Router::Rip::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::DistributeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefix-list")
    {
        auto c = std::make_shared<Native::Ipv6::Router::Rip::DistributeList::PrefixList>();
        c->parent = this;
        prefix_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : prefix_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ipv6::Router::Rip::DistributeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Router::Rip::DistributeList::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Router::Rip::DistributeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::DistributeList::PrefixList::PrefixList()
    :
    name{YType::str, "name"},
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{

    yang_name = "prefix-list"; yang_parent_name = "distribute-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::DistributeList::PrefixList::~PrefixList()
{
}

bool Native::Ipv6::Router::Rip::DistributeList::PrefixList::has_data() const
{
    return name.is_set
	|| in.is_set
	|| out.is_set;
}

bool Native::Ipv6::Router::Rip::DistributeList::PrefixList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Ipv6::Router::Rip::DistributeList::PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::DistributeList::PrefixList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::DistributeList::PrefixList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::DistributeList::PrefixList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::Router::Rip::DistributeList::PrefixList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::DistributeList::PrefixList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::DistributeList::PrefixList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "in" || name == "out")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Redistribute()
    :
    application(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Application>())
	,lisp(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Lisp>())
	,nd(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Nd>())
	,connected(nullptr) // presence node
	,isis(nullptr) // presence node
	,iso_igrp(nullptr) // presence node
	,mobile(nullptr) // presence node
	,odr(nullptr) // presence node
	,static_(nullptr) // presence node
	,rip(nullptr) // presence node
{
    application->parent = this;
    lisp->parent = this;
    nd->parent = this;

    yang_name = "redistribute"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::~Redistribute()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::has_data() const
{
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_data())
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
    return (application !=  nullptr && application->has_data())
	|| (lisp !=  nullptr && lisp->has_data())
	|| (nd !=  nullptr && nd->has_data())
	|| (connected !=  nullptr && connected->has_data())
	|| (isis !=  nullptr && isis->has_data())
	|| (iso_igrp !=  nullptr && iso_igrp->has_data())
	|| (mobile !=  nullptr && mobile->has_data())
	|| (odr !=  nullptr && odr->has_data())
	|| (static_ !=  nullptr && static_->has_data())
	|| (rip !=  nullptr && rip->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::has_operation() const
{
    for (std::size_t index=0; index<bgp.size(); index++)
    {
        if(bgp[index]->has_operation())
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
    return is_set(yfilter)
	|| (application !=  nullptr && application->has_operation())
	|| (lisp !=  nullptr && lisp->has_operation())
	|| (nd !=  nullptr && nd->has_operation())
	|| (connected !=  nullptr && connected->has_operation())
	|| (isis !=  nullptr && isis->has_operation())
	|| (iso_igrp !=  nullptr && iso_igrp->has_operation())
	|| (mobile !=  nullptr && mobile->has_operation())
	|| (odr !=  nullptr && odr->has_operation())
	|| (static_ !=  nullptr && static_->has_operation())
	|| (rip !=  nullptr && rip->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redistribute";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "application")
    {
        if(application == nullptr)
        {
            application = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Application>();
        }
        return application;
    }

    if(child_yang_name == "lisp")
    {
        if(lisp == nullptr)
        {
            lisp = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Lisp>();
        }
        return lisp;
    }

    if(child_yang_name == "nd")
    {
        if(nd == nullptr)
        {
            nd = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Nd>();
        }
        return nd;
    }

    if(child_yang_name == "connected")
    {
        if(connected == nullptr)
        {
            connected = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Connected>();
        }
        return connected;
    }

    if(child_yang_name == "bgp")
    {
        auto c = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Bgp>();
        c->parent = this;
        bgp.push_back(c);
        return c;
    }

    if(child_yang_name == "eigrp")
    {
        auto c = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Eigrp>();
        c->parent = this;
        eigrp.push_back(c);
        return c;
    }

    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Isis>();
        }
        return isis;
    }

    if(child_yang_name == "iso-igrp")
    {
        if(iso_igrp == nullptr)
        {
            iso_igrp = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::IsoIgrp>();
        }
        return iso_igrp;
    }

    if(child_yang_name == "mobile")
    {
        if(mobile == nullptr)
        {
            mobile = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Mobile>();
        }
        return mobile;
    }

    if(child_yang_name == "odr")
    {
        if(odr == nullptr)
        {
            odr = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Odr>();
        }
        return odr;
    }

    if(child_yang_name == "ospf")
    {
        auto c = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Ospf>();
        c->parent = this;
        ospf.push_back(c);
        return c;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Static>();
        }
        return static_;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Rip_>();
        }
        return rip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(application != nullptr)
    {
        children["application"] = application;
    }

    if(lisp != nullptr)
    {
        children["lisp"] = lisp;
    }

    if(nd != nullptr)
    {
        children["nd"] = nd;
    }

    if(connected != nullptr)
    {
        children["connected"] = connected;
    }

    count = 0;
    for (auto const & c : bgp)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : eigrp)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    if(iso_igrp != nullptr)
    {
        children["iso-igrp"] = iso_igrp;
    }

    if(mobile != nullptr)
    {
        children["mobile"] = mobile;
    }

    if(odr != nullptr)
    {
        children["odr"] = odr;
    }

    count = 0;
    for (auto const & c : ospf)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    if(rip != nullptr)
    {
        children["rip"] = rip;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Router::Rip::Redistribute::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Router::Rip::Redistribute::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "application" || name == "lisp" || name == "nd" || name == "connected" || name == "bgp" || name == "eigrp" || name == "isis" || name == "iso-igrp" || name == "mobile" || name == "odr" || name == "ospf" || name == "static" || name == "rip")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Application::Application()
    :
    include_connected{YType::empty, "include-connected"},
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
{

    yang_name = "application"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Application::~Application()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Application::has_data() const
{
    return include_connected.is_set
	|| metric.is_set
	|| route_map.is_set;
}

bool Native::Ipv6::Router::Rip::Redistribute::Application::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(include_connected.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Ipv6::Router::Rip::Redistribute::Application::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "application";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Application::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (include_connected.is_set || is_set(include_connected.yfilter)) leaf_name_data.push_back(include_connected.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Application::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Application::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Application::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "include-connected")
    {
        include_connected = value;
        include_connected.value_namespace = name_space;
        include_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::Application::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "include-connected")
    {
        include_connected.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::Application::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "include-connected" || name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Lisp::Lisp()
    :
    include_connected{YType::empty, "include-connected"},
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
{

    yang_name = "lisp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Lisp::~Lisp()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Lisp::has_data() const
{
    return include_connected.is_set
	|| metric.is_set
	|| route_map.is_set;
}

bool Native::Ipv6::Router::Rip::Redistribute::Lisp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(include_connected.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Ipv6::Router::Rip::Redistribute::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lisp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Lisp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (include_connected.is_set || is_set(include_connected.yfilter)) leaf_name_data.push_back(include_connected.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Lisp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "include-connected")
    {
        include_connected = value;
        include_connected.value_namespace = name_space;
        include_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::Lisp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "include-connected")
    {
        include_connected.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::Lisp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "include-connected" || name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Nd::Nd()
    :
    include_connected{YType::empty, "include-connected"},
    metric{YType::uint32, "metric"},
    route_map{YType::str, "route-map"}
{

    yang_name = "nd"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Nd::~Nd()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Nd::has_data() const
{
    return include_connected.is_set
	|| metric.is_set
	|| route_map.is_set;
}

bool Native::Ipv6::Router::Rip::Redistribute::Nd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(include_connected.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Ipv6::Router::Rip::Redistribute::Nd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Nd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (include_connected.is_set || is_set(include_connected.yfilter)) leaf_name_data.push_back(include_connected.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Nd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Nd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Nd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "include-connected")
    {
        include_connected = value;
        include_connected.value_namespace = name_space;
        include_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::Nd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "include-connected")
    {
        include_connected.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::Nd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "include-connected" || name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Connected::Connected()
    :
    rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "connected"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Connected::~Connected()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Connected::has_data() const
{
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Connected::has_operation() const
{
    return is_set(yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Connected::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connected";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Connected::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Connected::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Connected::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Connected::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Router::Rip::Redistribute::Connected::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Connected::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "connected"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
        metric_value.value_namespace = name_space;
        metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transparent")
    {
        transparent = value;
        transparent.value_namespace = name_space;
        transparent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-value")
    {
        metric_value.yfilter = yfilter;
    }
    if(value_path == "transparent")
    {
        transparent.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::Connected::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Bgp::Bgp()
    :
    as_number{YType::str, "as-number"}
    	,
    rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "bgp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Bgp::~Bgp()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Bgp::has_data() const
{
    return as_number.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Bgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Bgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp" <<"[as-number='" <<as_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Bgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Bgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Bgp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Bgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::Bgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::Bgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map" || name == "as-number")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
        metric_value.value_namespace = name_space;
        metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transparent")
    {
        transparent = value;
        transparent.value_namespace = name_space;
        transparent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-value")
    {
        metric_value.yfilter = yfilter;
    }
    if(value_path == "transparent")
    {
        transparent.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::Bgp::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Eigrp::Eigrp()
    :
    as_number{YType::uint16, "as-number"}
    	,
    rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "eigrp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Eigrp::~Eigrp()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Eigrp::has_data() const
{
    return as_number.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[as-number='" <<as_number <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map" || name == "as-number")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "eigrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
        metric_value.value_namespace = name_space;
        metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transparent")
    {
        transparent = value;
        transparent.value_namespace = name_space;
        transparent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-value")
    {
        metric_value.yfilter = yfilter;
    }
    if(value_path == "transparent")
    {
        transparent.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::Eigrp::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Isis::Isis()
    :
    rip_isis_redist(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist>())
{
    rip_isis_redist->parent = this;

    yang_name = "isis"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Isis::~Isis()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Isis::has_data() const
{
    for (std::size_t index=0; index<isis_area.size(); index++)
    {
        if(isis_area[index]->has_data())
            return true;
    }
    return (rip_isis_redist !=  nullptr && rip_isis_redist->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Isis::has_operation() const
{
    for (std::size_t index=0; index<isis_area.size(); index++)
    {
        if(isis_area[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (rip_isis_redist !=  nullptr && rip_isis_redist->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis-area")
    {
        auto c = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea>();
        c->parent = this;
        isis_area.push_back(c);
        return c;
    }

    if(child_yang_name == "rip-isis-redist")
    {
        if(rip_isis_redist == nullptr)
        {
            rip_isis_redist = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist>();
        }
        return rip_isis_redist;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : isis_area)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(rip_isis_redist != nullptr)
    {
        children["rip-isis-redist"] = rip_isis_redist;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Router::Rip::Redistribute::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis-area" || name == "rip-isis-redist")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::IsisArea()
    :
    name{YType::str, "name"}
    	,
    rip_isis_redist(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist>())
{
    rip_isis_redist->parent = this;

    yang_name = "isis-area"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::~IsisArea()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::has_data() const
{
    return name.is_set
	|| (rip_isis_redist !=  nullptr && rip_isis_redist->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| (rip_isis_redist !=  nullptr && rip_isis_redist->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis-area" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-isis-redist")
    {
        if(rip_isis_redist == nullptr)
        {
            rip_isis_redist = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist>();
        }
        return rip_isis_redist;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rip_isis_redist != nullptr)
    {
        children["rip-isis-redist"] = rip_isis_redist;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-isis-redist" || name == "name")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipIsisRedist()
    :
    isis_level_routes{YType::enumeration, "isis-level-routes"}
    	,
    rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "rip-isis-redist"; yang_parent_name = "isis-area"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::~RipIsisRedist()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::has_data() const
{
    return isis_level_routes.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(isis_level_routes.yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-isis-redist";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_level_routes.is_set || is_set(isis_level_routes.yfilter)) leaf_name_data.push_back(isis_level_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes = value;
        isis_level_routes.value_namespace = name_space;
        isis_level_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map" || name == "isis-level-routes")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "rip-isis-redist"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
        metric_value.value_namespace = name_space;
        metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transparent")
    {
        transparent = value;
        transparent.value_namespace = name_space;
        transparent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-value")
    {
        metric_value.yfilter = yfilter;
    }
    if(value_path == "transparent")
    {
        transparent.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipIsisRedist()
    :
    isis_level_routes{YType::enumeration, "isis-level-routes"}
    	,
    rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "rip-isis-redist"; yang_parent_name = "isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::~RipIsisRedist()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::has_data() const
{
    return isis_level_routes.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(isis_level_routes.yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-isis-redist";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (isis_level_routes.is_set || is_set(isis_level_routes.yfilter)) leaf_name_data.push_back(isis_level_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes = value;
        isis_level_routes.value_namespace = name_space;
        isis_level_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "isis-level-routes")
    {
        isis_level_routes.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map" || name == "isis-level-routes")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "rip-isis-redist"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
        metric_value.value_namespace = name_space;
        metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transparent")
    {
        transparent = value;
        transparent.value_namespace = name_space;
        transparent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-value")
    {
        metric_value.yfilter = yfilter;
    }
    if(value_path == "transparent")
    {
        transparent.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoIgrp()
    :
    rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "iso-igrp"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::~IsoIgrp()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::has_data() const
{
    for (std::size_t index=0; index<isoigrp_list.size(); index++)
    {
        if(isoigrp_list[index]->has_data())
            return true;
    }
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::has_operation() const
{
    for (std::size_t index=0; index<isoigrp_list.size(); index++)
    {
        if(isoigrp_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iso-igrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isoigrp-list")
    {
        auto c = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList>();
        c->parent = this;
        isoigrp_list.push_back(c);
        return c;
    }

    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : isoigrp_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isoigrp-list" || name == "rip-metric-route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::IsoigrpList()
    :
    iso_area_tag{YType::str, "iso-area-tag"}
    	,
    rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "isoigrp-list"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::~IsoigrpList()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::has_data() const
{
    return iso_area_tag.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(iso_area_tag.yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isoigrp-list" <<"[iso-area-tag='" <<iso_area_tag <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (iso_area_tag.is_set || is_set(iso_area_tag.yfilter)) leaf_name_data.push_back(iso_area_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "iso-area-tag")
    {
        iso_area_tag = value;
        iso_area_tag.value_namespace = name_space;
        iso_area_tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "iso-area-tag")
    {
        iso_area_tag.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map" || name == "iso-area-tag")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "isoigrp-list"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
        metric_value.value_namespace = name_space;
        metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transparent")
    {
        transparent = value;
        transparent.value_namespace = name_space;
        transparent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-value")
    {
        metric_value.yfilter = yfilter;
    }
    if(value_path == "transparent")
    {
        transparent.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::IsoigrpList::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "iso-igrp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
        metric_value.value_namespace = name_space;
        metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transparent")
    {
        transparent = value;
        transparent.value_namespace = name_space;
        transparent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-value")
    {
        metric_value.yfilter = yfilter;
    }
    if(value_path == "transparent")
    {
        transparent.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::IsoIgrp::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Mobile::Mobile()
    :
    rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "mobile"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Mobile::~Mobile()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Mobile::has_data() const
{
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Mobile::has_operation() const
{
    return is_set(yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Mobile::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobile";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Mobile::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Mobile::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Mobile::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Mobile::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Router::Rip::Redistribute::Mobile::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Mobile::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "mobile"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
        metric_value.value_namespace = name_space;
        metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transparent")
    {
        transparent = value;
        transparent.value_namespace = name_space;
        transparent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-value")
    {
        metric_value.yfilter = yfilter;
    }
    if(value_path == "transparent")
    {
        transparent.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::Mobile::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Odr::Odr()
    :
    rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "odr"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Odr::~Odr()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Odr::has_data() const
{
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Odr::has_operation() const
{
    return is_set(yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Odr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "odr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Odr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Odr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Odr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Odr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Router::Rip::Redistribute::Odr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Odr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "odr"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
        metric_value.value_namespace = name_space;
        metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transparent")
    {
        transparent = value;
        transparent.value_namespace = name_space;
        transparent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-value")
    {
        metric_value.yfilter = yfilter;
    }
    if(value_path == "transparent")
    {
        transparent.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::Odr::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Ospf()
    :
    process_id{YType::uint16, "process-id"}
    	,
    match(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Ospf::Match>())
	,rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap>())
{
    match->parent = this;
    rip_metric_route_map->parent = this;

    yang_name = "ospf"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::~Ospf()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return process_id.is_set
	|| (match !=  nullptr && match->has_data())
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(process_id.yfilter)
	|| (match !=  nullptr && match->has_operation())
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ospf" <<"[process-id='" <<process_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Ospf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (process_id.is_set || is_set(process_id.yfilter)) leaf_name_data.push_back(process_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf")
    {
        auto c = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Ospf::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Ospf::Match>();
        }
        return match;
    }

    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : vrf)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(match != nullptr)
    {
        children["match"] = match;
    }

    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "process-id")
    {
        process_id = value;
        process_id.value_namespace = name_space;
        process_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "process-id")
    {
        process_id.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf" || name == "match" || name == "rip-metric-route-map" || name == "process-id")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Vrf::Vrf()
    :
    name{YType::str, "name"}
{

    yang_name = "vrf"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Vrf::~Vrf()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Vrf::has_data() const
{
    return name.is_set;
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Ipv6::Router::Rip::Redistribute::Ospf::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Ospf::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Ospf::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Ospf::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Match()
    :
    internal(nullptr) // presence node
	,external(nullptr) // presence node
	,nssa_external(nullptr) // presence node
{

    yang_name = "match"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::~Match()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::has_data() const
{
    return (internal !=  nullptr && internal->has_data())
	|| (external !=  nullptr && external->has_data())
	|| (nssa_external !=  nullptr && nssa_external->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::has_operation() const
{
    return is_set(yfilter)
	|| (internal !=  nullptr && internal->has_operation())
	|| (external !=  nullptr && external->has_operation())
	|| (nssa_external !=  nullptr && nssa_external->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "external")
    {
        if(external == nullptr)
        {
            external = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External>();
        }
        return external;
    }

    if(child_yang_name == "nssa-external")
    {
        if(nssa_external == nullptr)
        {
            nssa_external = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal>();
        }
        return nssa_external;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(internal != nullptr)
    {
        children["internal"] = internal;
    }

    if(external != nullptr)
    {
        children["external"] = external;
    }

    if(nssa_external != nullptr)
    {
        children["nssa-external"] = nssa_external;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "internal" || name == "external" || name == "nssa-external")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::Internal()
    :
    rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "internal"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::~Internal()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::has_data() const
{
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::has_operation() const
{
    return is_set(yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "internal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "internal"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
        metric_value.value_namespace = name_space;
        metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transparent")
    {
        transparent = value;
        transparent.value_namespace = name_space;
        transparent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-value")
    {
        metric_value.yfilter = yfilter;
    }
    if(value_path == "transparent")
    {
        transparent.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::Internal::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::External()
    :
    external_routes{YType::enumeration, "external-routes"}
    	,
    rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::~External()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::has_data() const
{
    return external_routes.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(external_routes.yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (external_routes.is_set || is_set(external_routes.yfilter)) leaf_name_data.push_back(external_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "external-routes")
    {
        external_routes = value;
        external_routes.value_namespace = name_space;
        external_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "external-routes")
    {
        external_routes.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map" || name == "external-routes")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "external"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
        metric_value.value_namespace = name_space;
        metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transparent")
    {
        transparent = value;
        transparent.value_namespace = name_space;
        transparent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-value")
    {
        metric_value.yfilter = yfilter;
    }
    if(value_path == "transparent")
    {
        transparent.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::External::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::NssaExternal()
    :
    nssa_external_routes{YType::enumeration, "nssa-external-routes"}
    	,
    rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "nssa-external"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::~NssaExternal()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::has_data() const
{
    return nssa_external_routes.is_set
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nssa_external_routes.yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nssa-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nssa_external_routes.is_set || is_set(nssa_external_routes.yfilter)) leaf_name_data.push_back(nssa_external_routes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes = value;
        nssa_external_routes.value_namespace = name_space;
        nssa_external_routes.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nssa-external-routes")
    {
        nssa_external_routes.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map" || name == "nssa-external-routes")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "nssa-external"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
        metric_value.value_namespace = name_space;
        metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transparent")
    {
        transparent = value;
        transparent.value_namespace = name_space;
        transparent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-value")
    {
        metric_value.yfilter = yfilter;
    }
    if(value_path == "transparent")
    {
        transparent.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::Match::NssaExternal::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "ospf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
        metric_value.value_namespace = name_space;
        metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transparent")
    {
        transparent = value;
        transparent.value_namespace = name_space;
        transparent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-value")
    {
        metric_value.yfilter = yfilter;
    }
    if(value_path == "transparent")
    {
        transparent.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::Ospf::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Static::Static()
    :
    rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Static::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "static"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Static::~Static()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Static::has_data() const
{
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Static::has_operation() const
{
    return is_set(yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Static::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Router::Rip::Redistribute::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Static::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Static::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "static"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Static::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Static::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Static::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Static::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Static::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Static::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Static::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Static::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Static::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::Static::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::Static::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Static::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Static::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Static::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::Redistribute::Static::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Ipv6::Router::Rip::Redistribute::Static::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Static::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Static::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Static::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Static::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
        metric_value.value_namespace = name_space;
        metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transparent")
    {
        transparent = value;
        transparent.value_namespace = name_space;
        transparent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::Static::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-value")
    {
        metric_value.yfilter = yfilter;
    }
    if(value_path == "transparent")
    {
        transparent.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::Static::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Rip_::Rip_()
    :
    rip_metric_route_map(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap>())
{
    rip_metric_route_map->parent = this;

    yang_name = "rip"; yang_parent_name = "redistribute"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Rip_::~Rip_()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Rip_::has_data() const
{
    return (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Rip_::has_operation() const
{
    return is_set(yfilter)
	|| (rip_metric_route_map !=  nullptr && rip_metric_route_map->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Rip_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Rip_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Rip_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rip-metric-route-map")
    {
        if(rip_metric_route_map == nullptr)
        {
            rip_metric_route_map = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap>();
        }
        return rip_metric_route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Rip_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(rip_metric_route_map != nullptr)
    {
        children["rip-metric-route-map"] = rip_metric_route_map;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Rip_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Router::Rip::Redistribute::Rip_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Rip_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rip-metric-route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::RipMetricRouteMap()
    :
    route_map{YType::str, "route-map"}
    	,
    metric(std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric>())
{
    metric->parent = this;

    yang_name = "rip-metric-route-map"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::~RipMetricRouteMap()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::has_data() const
{
    return route_map.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip-metric-route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "route-map")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric::Metric()
    :
    metric_value{YType::uint32, "metric-value"},
    transparent{YType::empty, "transparent"}
{

    yang_name = "metric"; yang_parent_name = "rip-metric-route-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric::~Metric()
{
}

bool Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric::has_data() const
{
    return metric_value.is_set
	|| transparent.is_set;
}

bool Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(metric_value.yfilter)
	|| ydk::is_set(transparent.yfilter);
}

std::string Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (metric_value.is_set || is_set(metric_value.yfilter)) leaf_name_data.push_back(metric_value.get_name_leafdata());
    if (transparent.is_set || is_set(transparent.yfilter)) leaf_name_data.push_back(transparent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "metric-value")
    {
        metric_value = value;
        metric_value.value_namespace = name_space;
        metric_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transparent")
    {
        transparent = value;
        transparent.value_namespace = name_space;
        transparent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "metric-value")
    {
        metric_value.yfilter = yfilter;
    }
    if(value_path == "transparent")
    {
        transparent.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Redistribute::Rip_::RipMetricRouteMap::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-value" || name == "transparent")
        return true;
    return false;
}

Native::Ipv6::Router::Rip::Timers::Timers()
    :
    update{YType::uint16, "update"},
    timeout{YType::uint16, "timeout"},
    holddown{YType::uint16, "holddown"},
    garbage_collection{YType::uint16, "garbage-collection"}
{

    yang_name = "timers"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::Router::Rip::Timers::~Timers()
{
}

bool Native::Ipv6::Router::Rip::Timers::has_data() const
{
    return update.is_set
	|| timeout.is_set
	|| holddown.is_set
	|| garbage_collection.is_set;
}

bool Native::Ipv6::Router::Rip::Timers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(update.yfilter)
	|| ydk::is_set(timeout.yfilter)
	|| ydk::is_set(holddown.yfilter)
	|| ydk::is_set(garbage_collection.yfilter);
}

std::string Native::Ipv6::Router::Rip::Timers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Router::Rip::Timers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (update.is_set || is_set(update.yfilter)) leaf_name_data.push_back(update.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());
    if (holddown.is_set || is_set(holddown.yfilter)) leaf_name_data.push_back(holddown.get_name_leafdata());
    if (garbage_collection.is_set || is_set(garbage_collection.yfilter)) leaf_name_data.push_back(garbage_collection.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Router::Rip::Timers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Router::Rip::Timers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::Router::Rip::Timers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "update")
    {
        update = value;
        update.value_namespace = name_space;
        update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "holddown")
    {
        holddown = value;
        holddown.value_namespace = name_space;
        holddown.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "garbage-collection")
    {
        garbage_collection = value;
        garbage_collection.value_namespace = name_space;
        garbage_collection.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Router::Rip::Timers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "update")
    {
        update.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
    if(value_path == "holddown")
    {
        holddown.yfilter = yfilter;
    }
    if(value_path == "garbage-collection")
    {
        garbage_collection.yfilter = yfilter;
    }
}

bool Native::Ipv6::Router::Rip::Timers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "update" || name == "timeout" || name == "holddown" || name == "garbage-collection")
        return true;
    return false;
}

Native::Ipv6::Spd::Spd()
    :
    mode{YType::enumeration, "mode"}
    	,
    queue(std::make_shared<Native::Ipv6::Spd::Queue>())
{
    queue->parent = this;

    yang_name = "spd"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ipv6::Spd::~Spd()
{
}

bool Native::Ipv6::Spd::has_data() const
{
    return mode.is_set
	|| (queue !=  nullptr && queue->has_data());
}

bool Native::Ipv6::Spd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mode.yfilter)
	|| (queue !=  nullptr && queue->has_operation());
}

std::string Native::Ipv6::Spd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Spd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Spd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Spd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "queue")
    {
        if(queue == nullptr)
        {
            queue = std::make_shared<Native::Ipv6::Spd::Queue>();
        }
        return queue;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Spd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(queue != nullptr)
    {
        children["queue"] = queue;
    }

    return children;
}

void Native::Ipv6::Spd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Spd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
}

bool Native::Ipv6::Spd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "queue" || name == "mode")
        return true;
    return false;
}

Native::Ipv6::Spd::Queue::Queue()
    :
    max_threshold{YType::uint16, "max-threshold"},
    min_threshold{YType::uint16, "min-threshold"}
{

    yang_name = "queue"; yang_parent_name = "spd"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ipv6::Spd::Queue::~Queue()
{
}

bool Native::Ipv6::Spd::Queue::has_data() const
{
    return max_threshold.is_set
	|| min_threshold.is_set;
}

bool Native::Ipv6::Spd::Queue::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_threshold.yfilter)
	|| ydk::is_set(min_threshold.yfilter);
}

std::string Native::Ipv6::Spd::Queue::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/spd/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Spd::Queue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Spd::Queue::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_threshold.is_set || is_set(max_threshold.yfilter)) leaf_name_data.push_back(max_threshold.get_name_leafdata());
    if (min_threshold.is_set || is_set(min_threshold.yfilter)) leaf_name_data.push_back(min_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Spd::Queue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Spd::Queue::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::Spd::Queue::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-threshold")
    {
        max_threshold = value;
        max_threshold.value_namespace = name_space;
        max_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-threshold")
    {
        min_threshold = value;
        min_threshold.value_namespace = name_space;
        min_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Spd::Queue::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-threshold")
    {
        max_threshold.yfilter = yfilter;
    }
    if(value_path == "min-threshold")
    {
        min_threshold.yfilter = yfilter;
    }
}

bool Native::Ipv6::Spd::Queue::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-threshold" || name == "min-threshold")
        return true;
    return false;
}

Native::Ipv6::PrefixList::PrefixList()
    :
    sequence_number{YType::empty, "sequence-number"}
{

    yang_name = "prefix-list"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ipv6::PrefixList::~PrefixList()
{
}

bool Native::Ipv6::PrefixList::has_data() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_data())
            return true;
    }
    return sequence_number.is_set;
}

bool Native::Ipv6::PrefixList::has_operation() const
{
    for (std::size_t index=0; index<prefixes.size(); index++)
    {
        if(prefixes[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(sequence_number.yfilter);
}

std::string Native::Ipv6::PrefixList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::PrefixList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sequence_number.is_set || is_set(sequence_number.yfilter)) leaf_name_data.push_back(sequence_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::PrefixList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        auto c = std::make_shared<Native::Ipv6::PrefixList::Prefixes>();
        c->parent = this;
        prefixes.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::PrefixList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : prefixes)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ipv6::PrefixList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sequence-number")
    {
        sequence_number = value;
        sequence_number.value_namespace = name_space;
        sequence_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::PrefixList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sequence-number")
    {
        sequence_number.yfilter = yfilter;
    }
}

bool Native::Ipv6::PrefixList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes" || name == "sequence-number")
        return true;
    return false;
}

Native::Ipv6::PrefixList::Prefixes::Prefixes()
    :
    name{YType::str, "name"},
    description{YType::str, "description"}
    	,
    permit(std::make_shared<Native::Ipv6::PrefixList::Prefixes::Permit>())
	,deny(std::make_shared<Native::Ipv6::PrefixList::Prefixes::Deny>())
{
    permit->parent = this;
    deny->parent = this;

    yang_name = "prefixes"; yang_parent_name = "prefix-list"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ipv6::PrefixList::Prefixes::~Prefixes()
{
}

bool Native::Ipv6::PrefixList::Prefixes::has_data() const
{
    for (std::size_t index=0; index<seq.size(); index++)
    {
        if(seq[index]->has_data())
            return true;
    }
    return name.is_set
	|| description.is_set
	|| (permit !=  nullptr && permit->has_data())
	|| (deny !=  nullptr && deny->has_data());
}

bool Native::Ipv6::PrefixList::Prefixes::has_operation() const
{
    for (std::size_t index=0; index<seq.size(); index++)
    {
        if(seq[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| (permit !=  nullptr && permit->has_operation())
	|| (deny !=  nullptr && deny->has_operation());
}

std::string Native::Ipv6::PrefixList::Prefixes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/prefix-list/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::PrefixList::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::PrefixList::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::PrefixList::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ipv6::PrefixList::Prefixes::Permit>();
        }
        return permit;
    }

    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ipv6::PrefixList::Prefixes::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "seq")
    {
        auto c = std::make_shared<Native::Ipv6::PrefixList::Prefixes::Seq>();
        c->parent = this;
        seq.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::PrefixList::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    count = 0;
    for (auto const & c : seq)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Ipv6::PrefixList::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::PrefixList::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
}

bool Native::Ipv6::PrefixList::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permit" || name == "deny" || name == "seq" || name == "name" || name == "description")
        return true;
    return false;
}

Native::Ipv6::PrefixList::Prefixes::Permit::Permit()
    :
    address{YType::str, "address"},
    ge{YType::uint8, "ge"},
    le{YType::uint8, "le"}
{

    yang_name = "permit"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::PrefixList::Prefixes::Permit::~Permit()
{
}

bool Native::Ipv6::PrefixList::Prefixes::Permit::has_data() const
{
    return address.is_set
	|| ge.is_set
	|| le.is_set;
}

bool Native::Ipv6::PrefixList::Prefixes::Permit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(ge.yfilter)
	|| ydk::is_set(le.yfilter);
}

std::string Native::Ipv6::PrefixList::Prefixes::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::PrefixList::Prefixes::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (ge.is_set || is_set(ge.yfilter)) leaf_name_data.push_back(ge.get_name_leafdata());
    if (le.is_set || is_set(le.yfilter)) leaf_name_data.push_back(le.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::PrefixList::Prefixes::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::PrefixList::Prefixes::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::PrefixList::Prefixes::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ge")
    {
        ge = value;
        ge.value_namespace = name_space;
        ge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "le")
    {
        le = value;
        le.value_namespace = name_space;
        le.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::PrefixList::Prefixes::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "ge")
    {
        ge.yfilter = yfilter;
    }
    if(value_path == "le")
    {
        le.yfilter = yfilter;
    }
}

bool Native::Ipv6::PrefixList::Prefixes::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "ge" || name == "le")
        return true;
    return false;
}

Native::Ipv6::PrefixList::Prefixes::Deny::Deny()
    :
    address{YType::str, "address"},
    ge{YType::uint8, "ge"},
    le{YType::uint8, "le"}
{

    yang_name = "deny"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::PrefixList::Prefixes::Deny::~Deny()
{
}

bool Native::Ipv6::PrefixList::Prefixes::Deny::has_data() const
{
    return address.is_set
	|| ge.is_set
	|| le.is_set;
}

bool Native::Ipv6::PrefixList::Prefixes::Deny::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(ge.yfilter)
	|| ydk::is_set(le.yfilter);
}

std::string Native::Ipv6::PrefixList::Prefixes::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::PrefixList::Prefixes::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (ge.is_set || is_set(ge.yfilter)) leaf_name_data.push_back(ge.get_name_leafdata());
    if (le.is_set || is_set(le.yfilter)) leaf_name_data.push_back(le.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::PrefixList::Prefixes::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::PrefixList::Prefixes::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::PrefixList::Prefixes::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ge")
    {
        ge = value;
        ge.value_namespace = name_space;
        ge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "le")
    {
        le = value;
        le.value_namespace = name_space;
        le.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::PrefixList::Prefixes::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "ge")
    {
        ge.yfilter = yfilter;
    }
    if(value_path == "le")
    {
        le.yfilter = yfilter;
    }
}

bool Native::Ipv6::PrefixList::Prefixes::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "ge" || name == "le")
        return true;
    return false;
}

Native::Ipv6::PrefixList::Prefixes::Seq::Seq()
    :
    no{YType::uint32, "no"}
    	,
    deny(std::make_shared<Native::Ipv6::PrefixList::Prefixes::Seq::Deny>())
	,permit(std::make_shared<Native::Ipv6::PrefixList::Prefixes::Seq::Permit>())
{
    deny->parent = this;
    permit->parent = this;

    yang_name = "seq"; yang_parent_name = "prefixes"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::PrefixList::Prefixes::Seq::~Seq()
{
}

bool Native::Ipv6::PrefixList::Prefixes::Seq::has_data() const
{
    return no.is_set
	|| (deny !=  nullptr && deny->has_data())
	|| (permit !=  nullptr && permit->has_data());
}

bool Native::Ipv6::PrefixList::Prefixes::Seq::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(no.yfilter)
	|| (deny !=  nullptr && deny->has_operation())
	|| (permit !=  nullptr && permit->has_operation());
}

std::string Native::Ipv6::PrefixList::Prefixes::Seq::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "seq" <<"[no='" <<no <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::PrefixList::Prefixes::Seq::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no.is_set || is_set(no.yfilter)) leaf_name_data.push_back(no.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::PrefixList::Prefixes::Seq::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "deny")
    {
        if(deny == nullptr)
        {
            deny = std::make_shared<Native::Ipv6::PrefixList::Prefixes::Seq::Deny>();
        }
        return deny;
    }

    if(child_yang_name == "permit")
    {
        if(permit == nullptr)
        {
            permit = std::make_shared<Native::Ipv6::PrefixList::Prefixes::Seq::Permit>();
        }
        return permit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::PrefixList::Prefixes::Seq::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(deny != nullptr)
    {
        children["deny"] = deny;
    }

    if(permit != nullptr)
    {
        children["permit"] = permit;
    }

    return children;
}

void Native::Ipv6::PrefixList::Prefixes::Seq::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no")
    {
        no = value;
        no.value_namespace = name_space;
        no.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::PrefixList::Prefixes::Seq::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no")
    {
        no.yfilter = yfilter;
    }
}

bool Native::Ipv6::PrefixList::Prefixes::Seq::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "deny" || name == "permit" || name == "no")
        return true;
    return false;
}

Native::Ipv6::PrefixList::Prefixes::Seq::Deny::Deny()
    :
    ip{YType::str, "ip"},
    ge{YType::uint16, "ge"},
    le{YType::uint16, "le"}
{

    yang_name = "deny"; yang_parent_name = "seq"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::PrefixList::Prefixes::Seq::Deny::~Deny()
{
}

bool Native::Ipv6::PrefixList::Prefixes::Seq::Deny::has_data() const
{
    return ip.is_set
	|| ge.is_set
	|| le.is_set;
}

bool Native::Ipv6::PrefixList::Prefixes::Seq::Deny::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(ge.yfilter)
	|| ydk::is_set(le.yfilter);
}

std::string Native::Ipv6::PrefixList::Prefixes::Seq::Deny::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deny";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::PrefixList::Prefixes::Seq::Deny::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (ge.is_set || is_set(ge.yfilter)) leaf_name_data.push_back(ge.get_name_leafdata());
    if (le.is_set || is_set(le.yfilter)) leaf_name_data.push_back(le.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::PrefixList::Prefixes::Seq::Deny::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::PrefixList::Prefixes::Seq::Deny::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::PrefixList::Prefixes::Seq::Deny::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ge")
    {
        ge = value;
        ge.value_namespace = name_space;
        ge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "le")
    {
        le = value;
        le.value_namespace = name_space;
        le.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::PrefixList::Prefixes::Seq::Deny::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "ge")
    {
        ge.yfilter = yfilter;
    }
    if(value_path == "le")
    {
        le.yfilter = yfilter;
    }
}

bool Native::Ipv6::PrefixList::Prefixes::Seq::Deny::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "ge" || name == "le")
        return true;
    return false;
}

Native::Ipv6::PrefixList::Prefixes::Seq::Permit::Permit()
    :
    ip{YType::str, "ip"},
    ge{YType::uint16, "ge"},
    le{YType::uint16, "le"}
{

    yang_name = "permit"; yang_parent_name = "seq"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Ipv6::PrefixList::Prefixes::Seq::Permit::~Permit()
{
}

bool Native::Ipv6::PrefixList::Prefixes::Seq::Permit::has_data() const
{
    return ip.is_set
	|| ge.is_set
	|| le.is_set;
}

bool Native::Ipv6::PrefixList::Prefixes::Seq::Permit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(ge.yfilter)
	|| ydk::is_set(le.yfilter);
}

std::string Native::Ipv6::PrefixList::Prefixes::Seq::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::PrefixList::Prefixes::Seq::Permit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (ge.is_set || is_set(ge.yfilter)) leaf_name_data.push_back(ge.get_name_leafdata());
    if (le.is_set || is_set(le.yfilter)) leaf_name_data.push_back(le.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::PrefixList::Prefixes::Seq::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::PrefixList::Prefixes::Seq::Permit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::PrefixList::Prefixes::Seq::Permit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ge")
    {
        ge = value;
        ge.value_namespace = name_space;
        ge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "le")
    {
        le = value;
        le.value_namespace = name_space;
        le.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::PrefixList::Prefixes::Seq::Permit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "ge")
    {
        ge.yfilter = yfilter;
    }
    if(value_path == "le")
    {
        le.yfilter = yfilter;
    }
}

bool Native::Ipv6::PrefixList::Prefixes::Seq::Permit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "ge" || name == "le")
        return true;
    return false;
}

Native::Ipv6::Neighbor::Neighbor()
    :
    address{YType::str, "address"},
    interface{YType::str, "interface"},
    hardware_address{YType::str, "hardware-address"}
{

    yang_name = "neighbor"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ipv6::Neighbor::~Neighbor()
{
}

bool Native::Ipv6::Neighbor::has_data() const
{
    return address.is_set
	|| interface.is_set
	|| hardware_address.is_set;
}

bool Native::Ipv6::Neighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(hardware_address.yfilter);
}

std::string Native::Ipv6::Neighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[address='" <<address <<"']" <<"[interface='" <<interface <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (hardware_address.is_set || is_set(hardware_address.yfilter)) leaf_name_data.push_back(hardware_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-address")
    {
        hardware_address = value;
        hardware_address.value_namespace = name_space;
        hardware_address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "hardware-address")
    {
        hardware_address.yfilter = yfilter;
    }
}

bool Native::Ipv6::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "interface" || name == "hardware-address")
        return true;
    return false;
}

Native::Ipv6::Mld::Mld()
    :
    ssm_map(std::make_shared<Native::Ipv6::Mld::SsmMap>())
{
    ssm_map->parent = this;

    yang_name = "mld"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ipv6::Mld::~Mld()
{
}

bool Native::Ipv6::Mld::has_data() const
{
    return (ssm_map !=  nullptr && ssm_map->has_data());
}

bool Native::Ipv6::Mld::has_operation() const
{
    return is_set(yfilter)
	|| (ssm_map !=  nullptr && ssm_map->has_operation());
}

std::string Native::Ipv6::Mld::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Mld::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-mld:mld";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Mld::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Mld::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ssm-map")
    {
        if(ssm_map == nullptr)
        {
            ssm_map = std::make_shared<Native::Ipv6::Mld::SsmMap>();
        }
        return ssm_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Mld::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ssm_map != nullptr)
    {
        children["ssm-map"] = ssm_map;
    }

    return children;
}

void Native::Ipv6::Mld::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Ipv6::Mld::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Ipv6::Mld::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ssm-map")
        return true;
    return false;
}

Native::Ipv6::Mld::SsmMap::SsmMap()
    :
    enable{YType::empty, "enable"}
    	,
    query(std::make_shared<Native::Ipv6::Mld::SsmMap::Query>())
	,static_(std::make_shared<Native::Ipv6::Mld::SsmMap::Static>())
{
    query->parent = this;
    static_->parent = this;

    yang_name = "ssm-map"; yang_parent_name = "mld"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ipv6::Mld::SsmMap::~SsmMap()
{
}

bool Native::Ipv6::Mld::SsmMap::has_data() const
{
    return enable.is_set
	|| (query !=  nullptr && query->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Native::Ipv6::Mld::SsmMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| (query !=  nullptr && query->has_operation())
	|| (static_ !=  nullptr && static_->has_operation());
}

std::string Native::Ipv6::Mld::SsmMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/Cisco-IOS-XE-mld:mld/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Mld::SsmMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssm-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Mld::SsmMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Mld::SsmMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "query")
    {
        if(query == nullptr)
        {
            query = std::make_shared<Native::Ipv6::Mld::SsmMap::Query>();
        }
        return query;
    }

    if(child_yang_name == "static")
    {
        if(static_ == nullptr)
        {
            static_ = std::make_shared<Native::Ipv6::Mld::SsmMap::Static>();
        }
        return static_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Mld::SsmMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(query != nullptr)
    {
        children["query"] = query;
    }

    if(static_ != nullptr)
    {
        children["static"] = static_;
    }

    return children;
}

void Native::Ipv6::Mld::SsmMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Mld::SsmMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Ipv6::Mld::SsmMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "query" || name == "static" || name == "enable")
        return true;
    return false;
}

Native::Ipv6::Mld::SsmMap::Query::Query()
    :
    dns{YType::empty, "dns"}
{

    yang_name = "query"; yang_parent_name = "ssm-map"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ipv6::Mld::SsmMap::Query::~Query()
{
}

bool Native::Ipv6::Mld::SsmMap::Query::has_data() const
{
    return dns.is_set;
}

bool Native::Ipv6::Mld::SsmMap::Query::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dns.yfilter);
}

std::string Native::Ipv6::Mld::SsmMap::Query::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/Cisco-IOS-XE-mld:mld/ssm-map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Mld::SsmMap::Query::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "query";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Mld::SsmMap::Query::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dns.is_set || is_set(dns.yfilter)) leaf_name_data.push_back(dns.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Mld::SsmMap::Query::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Mld::SsmMap::Query::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::Mld::SsmMap::Query::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dns")
    {
        dns = value;
        dns.value_namespace = name_space;
        dns.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Mld::SsmMap::Query::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dns")
    {
        dns.yfilter = yfilter;
    }
}

bool Native::Ipv6::Mld::SsmMap::Query::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dns")
        return true;
    return false;
}

Native::Ipv6::Mld::SsmMap::Static::Static()
    :
    acl{YType::str, "acl"},
    source_ip{YType::str, "source-ip"}
{

    yang_name = "static"; yang_parent_name = "ssm-map"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ipv6::Mld::SsmMap::Static::~Static()
{
}

bool Native::Ipv6::Mld::SsmMap::Static::has_data() const
{
    return acl.is_set
	|| source_ip.is_set;
}

bool Native::Ipv6::Mld::SsmMap::Static::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl.yfilter)
	|| ydk::is_set(source_ip.yfilter);
}

std::string Native::Ipv6::Mld::SsmMap::Static::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/Cisco-IOS-XE-mld:mld/ssm-map/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Mld::SsmMap::Static::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Mld::SsmMap::Static::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl.is_set || is_set(acl.yfilter)) leaf_name_data.push_back(acl.get_name_leafdata());
    if (source_ip.is_set || is_set(source_ip.yfilter)) leaf_name_data.push_back(source_ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Mld::SsmMap::Static::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Mld::SsmMap::Static::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::Mld::SsmMap::Static::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl")
    {
        acl = value;
        acl.value_namespace = name_space;
        acl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-ip")
    {
        source_ip = value;
        source_ip.value_namespace = name_space;
        source_ip.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Mld::SsmMap::Static::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl")
    {
        acl.yfilter = yfilter;
    }
    if(value_path == "source-ip")
    {
        source_ip.yfilter = yfilter;
    }
}

bool Native::Ipv6::Mld::SsmMap::Static::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "source-ip")
        return true;
    return false;
}

Native::Ipv6::MulticastRouting::MulticastRouting()
    :
    vrf{YType::str, "vrf"}
{

    yang_name = "multicast-routing"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ipv6::MulticastRouting::~MulticastRouting()
{
}

bool Native::Ipv6::MulticastRouting::has_data() const
{
    return vrf.is_set;
}

bool Native::Ipv6::MulticastRouting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Ipv6::MulticastRouting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::MulticastRouting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:multicast-routing";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::MulticastRouting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::MulticastRouting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::MulticastRouting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::MulticastRouting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::MulticastRouting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Ipv6::MulticastRouting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf")
        return true;
    return false;
}

Native::Ipv6::Rip::Rip()
    :
    vrf_mode{YType::enumeration, "vrf-mode"}
{

    yang_name = "rip"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Ipv6::Rip::~Rip()
{
}

bool Native::Ipv6::Rip::has_data() const
{
    return vrf_mode.is_set;
}

bool Native::Ipv6::Rip::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_mode.yfilter);
}

std::string Native::Ipv6::Rip::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Ipv6::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-rip:rip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Ipv6::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_mode.is_set || is_set(vrf_mode.yfilter)) leaf_name_data.push_back(vrf_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Ipv6::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Ipv6::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Ipv6::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-mode")
    {
        vrf_mode = value;
        vrf_mode.value_namespace = name_space;
        vrf_mode.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Ipv6::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-mode")
    {
        vrf_mode.yfilter = yfilter;
    }
}

bool Native::Ipv6::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-mode")
        return true;
    return false;
}

Native::Vlan::Vlan()
    :
    accounting(nullptr) // presence node
	,internal(std::make_shared<Native::Vlan::Internal>())
	,dot1q(std::make_shared<Native::Vlan::Dot1Q>())
	,access_log(std::make_shared<Native::Vlan::AccessLog>())
{
    internal->parent = this;
    dot1q->parent = this;
    access_log->parent = this;

    yang_name = "vlan"; yang_parent_name = "native"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vlan::~Vlan()
{
}

bool Native::Vlan::has_data() const
{
    for (std::size_t index=0; index<access_map.size(); index++)
    {
        if(access_map[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<configuration.size(); index++)
    {
        if(configuration[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<filter.size(); index++)
    {
        if(filter[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vlan_list.size(); index++)
    {
        if(vlan_list[index]->has_data())
            return true;
    }
    return (accounting !=  nullptr && accounting->has_data())
	|| (internal !=  nullptr && internal->has_data())
	|| (dot1q !=  nullptr && dot1q->has_data())
	|| (access_log !=  nullptr && access_log->has_data());
}

bool Native::Vlan::has_operation() const
{
    for (std::size_t index=0; index<access_map.size(); index++)
    {
        if(access_map[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<configuration.size(); index++)
    {
        if(configuration[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<filter.size(); index++)
    {
        if(filter[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vlan_list.size(); index++)
    {
        if(vlan_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (internal !=  nullptr && internal->has_operation())
	|| (dot1q !=  nullptr && dot1q->has_operation())
	|| (access_log !=  nullptr && access_log->has_operation());
}

std::string Native::Vlan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "Cisco-IOS-XE-vlan:access-map")
    {
        auto c = std::make_shared<Native::Vlan::AccessMap>();
        c->parent = this;
        access_map.push_back(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-vlan:configuration")
    {
        auto c = std::make_shared<Native::Vlan::Configuration>();
        c->parent = this;
        configuration.push_back(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-vlan:filter")
    {
        auto c = std::make_shared<Native::Vlan::Filter>();
        c->parent = this;
        filter.push_back(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-vlan:accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Native::Vlan::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "Cisco-IOS-XE-vlan:internal")
    {
        if(internal == nullptr)
        {
            internal = std::make_shared<Native::Vlan::Internal>();
        }
        return internal;
    }

    if(child_yang_name == "Cisco-IOS-XE-vlan:dot1q")
    {
        if(dot1q == nullptr)
        {
            dot1q = std::make_shared<Native::Vlan::Dot1Q>();
        }
        return dot1q;
    }

    if(child_yang_name == "Cisco-IOS-XE-vlan:access-log")
    {
        if(access_log == nullptr)
        {
            access_log = std::make_shared<Native::Vlan::AccessLog>();
        }
        return access_log;
    }

    if(child_yang_name == "Cisco-IOS-XE-vlan:group")
    {
        auto c = std::make_shared<Native::Vlan::Group>();
        c->parent = this;
        group.push_back(c);
        return c;
    }

    if(child_yang_name == "Cisco-IOS-XE-vlan:vlan-list")
    {
        auto c = std::make_shared<Native::Vlan::VlanList>();
        c->parent = this;
        vlan_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : access_map)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : configuration)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : filter)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    if(accounting != nullptr)
    {
        children["Cisco-IOS-XE-vlan:accounting"] = accounting;
    }

    if(internal != nullptr)
    {
        children["Cisco-IOS-XE-vlan:internal"] = internal;
    }

    if(dot1q != nullptr)
    {
        children["Cisco-IOS-XE-vlan:dot1q"] = dot1q;
    }

    if(access_log != nullptr)
    {
        children["Cisco-IOS-XE-vlan:access-log"] = access_log;
    }

    count = 0;
    for (auto const & c : group)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    count = 0;
    for (auto const & c : vlan_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-map" || name == "configuration" || name == "filter" || name == "accounting" || name == "internal" || name == "dot1q" || name == "access-log" || name == "group" || name == "vlan-list")
        return true;
    return false;
}

Native::Vlan::AccessMap::AccessMap()
    :
    name{YType::str, "name"},
    value_{YType::uint16, "value"},
    action{YType::enumeration, "action"}
    	,
    match(std::make_shared<Native::Vlan::AccessMap::Match>())
{
    match->parent = this;

    yang_name = "access-map"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vlan::AccessMap::~AccessMap()
{
}

bool Native::Vlan::AccessMap::has_data() const
{
    return name.is_set
	|| value_.is_set
	|| action.is_set
	|| (match !=  nullptr && match->has_data());
}

bool Native::Vlan::AccessMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(action.yfilter)
	|| (match !=  nullptr && match->has_operation());
}

std::string Native::Vlan::AccessMap::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vlan::AccessMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:access-map" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::AccessMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (action.is_set || is_set(action.yfilter)) leaf_name_data.push_back(action.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::AccessMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "match")
    {
        if(match == nullptr)
        {
            match = std::make_shared<Native::Vlan::AccessMap::Match>();
        }
        return match;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::AccessMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(match != nullptr)
    {
        children["match"] = match;
    }

    return children;
}

void Native::Vlan::AccessMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "action")
    {
        action = value;
        action.value_namespace = name_space;
        action.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::AccessMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "action")
    {
        action.yfilter = yfilter;
    }
}

bool Native::Vlan::AccessMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match" || name == "name" || name == "value" || name == "action")
        return true;
    return false;
}

Native::Vlan::AccessMap::Match::Match()
    :
    ipv6(std::make_shared<Native::Vlan::AccessMap::Match::Ipv6>())
	,ip(std::make_shared<Native::Vlan::AccessMap::Match::Ip>())
{
    ipv6->parent = this;
    ip->parent = this;

    yang_name = "match"; yang_parent_name = "access-map"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vlan::AccessMap::Match::~Match()
{
}

bool Native::Vlan::AccessMap::Match::has_data() const
{
    return (ipv6 !=  nullptr && ipv6->has_data())
	|| (ip !=  nullptr && ip->has_data());
}

bool Native::Vlan::AccessMap::Match::has_operation() const
{
    return is_set(yfilter)
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (ip !=  nullptr && ip->has_operation());
}

std::string Native::Vlan::AccessMap::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::AccessMap::Match::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::AccessMap::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Vlan::AccessMap::Match::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Vlan::AccessMap::Match::Ip>();
        }
        return ip;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::AccessMap::Match::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    return children;
}

void Native::Vlan::AccessMap::Match::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vlan::AccessMap::Match::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vlan::AccessMap::Match::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6" || name == "ip")
        return true;
    return false;
}

Native::Vlan::AccessMap::Match::Ipv6::Ipv6()
    :
    address{YType::str, "address"}
{

    yang_name = "ipv6"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vlan::AccessMap::Match::Ipv6::~Ipv6()
{
}

bool Native::Vlan::AccessMap::Match::Ipv6::has_data() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Vlan::AccessMap::Match::Ipv6::has_operation() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Vlan::AccessMap::Match::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::AccessMap::Match::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::AccessMap::Match::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::AccessMap::Match::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Vlan::AccessMap::Match::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address.append(value);
    }
}

void Native::Vlan::AccessMap::Match::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Vlan::AccessMap::Match::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Vlan::AccessMap::Match::Ip::Ip()
    :
    address{YType::str, "address"}
{

    yang_name = "ip"; yang_parent_name = "match"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vlan::AccessMap::Match::Ip::~Ip()
{
}

bool Native::Vlan::AccessMap::Match::Ip::has_data() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Vlan::AccessMap::Match::Ip::has_operation() const
{
    for (auto const & leaf : address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Vlan::AccessMap::Match::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::AccessMap::Match::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto address_name_datas = address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), address_name_datas.begin(), address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::AccessMap::Match::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::AccessMap::Match::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Vlan::AccessMap::Match::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address.append(value);
    }
}

void Native::Vlan::AccessMap::Match::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Vlan::AccessMap::Match::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Vlan::Configuration::Configuration()
    :
    vlan_id{YType::str, "vlan-id"}
    	,
    ip(std::make_shared<Native::Vlan::Configuration::Ip>())
	,ipv6(std::make_shared<Native::Vlan::Configuration::Ipv6>())
{
    ip->parent = this;
    ipv6->parent = this;

    yang_name = "configuration"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vlan::Configuration::~Configuration()
{
}

bool Native::Vlan::Configuration::has_data() const
{
    return vlan_id.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data());
}

bool Native::Vlan::Configuration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter)
	|| (ip !=  nullptr && ip->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation());
}

std::string Native::Vlan::Configuration::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vlan::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:configuration" <<"[vlan-id='" <<vlan_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Configuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Vlan::Configuration::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Vlan::Configuration::Ipv6>();
        }
        return ipv6;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Configuration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    return children;
}

void Native::Vlan::Configuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::Configuration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
}

bool Native::Vlan::Configuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip" || name == "ipv6" || name == "vlan-id")
        return true;
    return false;
}

Native::Vlan::Configuration::Ip::Ip()
    :
    flow(std::make_shared<Native::Vlan::Configuration::Ip::Flow>())
{
    flow->parent = this;

    yang_name = "ip"; yang_parent_name = "configuration"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vlan::Configuration::Ip::~Ip()
{
}

bool Native::Vlan::Configuration::Ip::has_data() const
{
    return (flow !=  nullptr && flow->has_data());
}

bool Native::Vlan::Configuration::Ip::has_operation() const
{
    return is_set(yfilter)
	|| (flow !=  nullptr && flow->has_operation());
}

std::string Native::Vlan::Configuration::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Configuration::Ip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::Configuration::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::Vlan::Configuration::Ip::Flow>();
        }
        return flow;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Configuration::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(flow != nullptr)
    {
        children["flow"] = flow;
    }

    return children;
}

void Native::Vlan::Configuration::Ip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vlan::Configuration::Ip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vlan::Configuration::Ip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow")
        return true;
    return false;
}

Native::Vlan::Configuration::Ip::Flow::Flow()
{

    yang_name = "flow"; yang_parent_name = "ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vlan::Configuration::Ip::Flow::~Flow()
{
}

bool Native::Vlan::Configuration::Ip::Flow::has_data() const
{
    for (std::size_t index=0; index<monitor.size(); index++)
    {
        if(monitor[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Vlan::Configuration::Ip::Flow::has_operation() const
{
    for (std::size_t index=0; index<monitor.size(); index++)
    {
        if(monitor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Vlan::Configuration::Ip::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Configuration::Ip::Flow::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::Configuration::Ip::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitor")
    {
        auto c = std::make_shared<Native::Vlan::Configuration::Ip::Flow::Monitor>();
        c->parent = this;
        monitor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Configuration::Ip::Flow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : monitor)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Vlan::Configuration::Ip::Flow::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vlan::Configuration::Ip::Flow::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vlan::Configuration::Ip::Flow::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "monitor")
        return true;
    return false;
}

Native::Vlan::Configuration::Ip::Flow::Monitor::Monitor()
    :
    flow_monitor{YType::str, "flow-monitor"},
    input{YType::empty, "input"},
    output{YType::empty, "output"}
{

    yang_name = "monitor"; yang_parent_name = "flow"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vlan::Configuration::Ip::Flow::Monitor::~Monitor()
{
}

bool Native::Vlan::Configuration::Ip::Flow::Monitor::has_data() const
{
    return flow_monitor.is_set
	|| input.is_set
	|| output.is_set;
}

bool Native::Vlan::Configuration::Ip::Flow::Monitor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(flow_monitor.yfilter)
	|| ydk::is_set(input.yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::Vlan::Configuration::Ip::Flow::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor" <<"[flow-monitor='" <<flow_monitor <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Configuration::Ip::Flow::Monitor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_monitor.is_set || is_set(flow_monitor.yfilter)) leaf_name_data.push_back(flow_monitor.get_name_leafdata());
    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::Configuration::Ip::Flow::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Configuration::Ip::Flow::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Vlan::Configuration::Ip::Flow::Monitor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "flow-monitor")
    {
        flow_monitor = value;
        flow_monitor.value_namespace = name_space;
        flow_monitor.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input")
    {
        input = value;
        input.value_namespace = name_space;
        input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::Configuration::Ip::Flow::Monitor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "flow-monitor")
    {
        flow_monitor.yfilter = yfilter;
    }
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::Vlan::Configuration::Ip::Flow::Monitor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "flow-monitor" || name == "input" || name == "output")
        return true;
    return false;
}

Native::Vlan::Configuration::Ipv6::Ipv6()
    :
    nd(std::make_shared<Native::Vlan::Configuration::Ipv6::Nd>())
	,dhcp(std::make_shared<Native::Vlan::Configuration::Ipv6::Dhcp>())
{
    nd->parent = this;
    dhcp->parent = this;

    yang_name = "ipv6"; yang_parent_name = "configuration"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vlan::Configuration::Ipv6::~Ipv6()
{
}

bool Native::Vlan::Configuration::Ipv6::has_data() const
{
    return (nd !=  nullptr && nd->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data());
}

bool Native::Vlan::Configuration::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| (nd !=  nullptr && nd->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation());
}

std::string Native::Vlan::Configuration::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Configuration::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::Configuration::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nd")
    {
        if(nd == nullptr)
        {
            nd = std::make_shared<Native::Vlan::Configuration::Ipv6::Nd>();
        }
        return nd;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Vlan::Configuration::Ipv6::Dhcp>();
        }
        return dhcp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Configuration::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(nd != nullptr)
    {
        children["nd"] = nd;
    }

    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    return children;
}

void Native::Vlan::Configuration::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vlan::Configuration::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vlan::Configuration::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nd" || name == "dhcp")
        return true;
    return false;
}

Native::Vlan::Configuration::Ipv6::Nd::Nd()
    :
    suppress(nullptr) // presence node
{

    yang_name = "nd"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vlan::Configuration::Ipv6::Nd::~Nd()
{
}

bool Native::Vlan::Configuration::Ipv6::Nd::has_data() const
{
    return (suppress !=  nullptr && suppress->has_data());
}

bool Native::Vlan::Configuration::Ipv6::Nd::has_operation() const
{
    return is_set(yfilter)
	|| (suppress !=  nullptr && suppress->has_operation());
}

std::string Native::Vlan::Configuration::Ipv6::Nd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Configuration::Ipv6::Nd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::Configuration::Ipv6::Nd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "suppress")
    {
        if(suppress == nullptr)
        {
            suppress = std::make_shared<Native::Vlan::Configuration::Ipv6::Nd::Suppress>();
        }
        return suppress;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Configuration::Ipv6::Nd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(suppress != nullptr)
    {
        children["suppress"] = suppress;
    }

    return children;
}

void Native::Vlan::Configuration::Ipv6::Nd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vlan::Configuration::Ipv6::Nd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vlan::Configuration::Ipv6::Nd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "suppress")
        return true;
    return false;
}

Native::Vlan::Configuration::Ipv6::Nd::Suppress::Suppress()
    :
    attach_policy{YType::str, "attach-policy"}
{

    yang_name = "suppress"; yang_parent_name = "nd"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vlan::Configuration::Ipv6::Nd::Suppress::~Suppress()
{
}

bool Native::Vlan::Configuration::Ipv6::Nd::Suppress::has_data() const
{
    return attach_policy.is_set;
}

bool Native::Vlan::Configuration::Ipv6::Nd::Suppress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attach_policy.yfilter);
}

std::string Native::Vlan::Configuration::Ipv6::Nd::Suppress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "suppress";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Configuration::Ipv6::Nd::Suppress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach_policy.is_set || is_set(attach_policy.yfilter)) leaf_name_data.push_back(attach_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::Configuration::Ipv6::Nd::Suppress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Configuration::Ipv6::Nd::Suppress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Vlan::Configuration::Ipv6::Nd::Suppress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attach-policy")
    {
        attach_policy = value;
        attach_policy.value_namespace = name_space;
        attach_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::Configuration::Ipv6::Nd::Suppress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attach-policy")
    {
        attach_policy.yfilter = yfilter;
    }
}

bool Native::Vlan::Configuration::Ipv6::Nd::Suppress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attach-policy")
        return true;
    return false;
}

Native::Vlan::Configuration::Ipv6::Dhcp::Dhcp()
    :
    guard(nullptr) // presence node
{

    yang_name = "dhcp"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vlan::Configuration::Ipv6::Dhcp::~Dhcp()
{
}

bool Native::Vlan::Configuration::Ipv6::Dhcp::has_data() const
{
    return (guard !=  nullptr && guard->has_data());
}

bool Native::Vlan::Configuration::Ipv6::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| (guard !=  nullptr && guard->has_operation());
}

std::string Native::Vlan::Configuration::Ipv6::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Configuration::Ipv6::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::Configuration::Ipv6::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "guard")
    {
        if(guard == nullptr)
        {
            guard = std::make_shared<Native::Vlan::Configuration::Ipv6::Dhcp::Guard>();
        }
        return guard;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Configuration::Ipv6::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(guard != nullptr)
    {
        children["guard"] = guard;
    }

    return children;
}

void Native::Vlan::Configuration::Ipv6::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vlan::Configuration::Ipv6::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vlan::Configuration::Ipv6::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "guard")
        return true;
    return false;
}

Native::Vlan::Configuration::Ipv6::Dhcp::Guard::Guard()
    :
    attach_policy{YType::str, "attach-policy"}
{

    yang_name = "guard"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vlan::Configuration::Ipv6::Dhcp::Guard::~Guard()
{
}

bool Native::Vlan::Configuration::Ipv6::Dhcp::Guard::has_data() const
{
    return attach_policy.is_set;
}

bool Native::Vlan::Configuration::Ipv6::Dhcp::Guard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attach_policy.yfilter);
}

std::string Native::Vlan::Configuration::Ipv6::Dhcp::Guard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "guard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Configuration::Ipv6::Dhcp::Guard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach_policy.is_set || is_set(attach_policy.yfilter)) leaf_name_data.push_back(attach_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::Configuration::Ipv6::Dhcp::Guard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Configuration::Ipv6::Dhcp::Guard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Vlan::Configuration::Ipv6::Dhcp::Guard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attach-policy")
    {
        attach_policy = value;
        attach_policy.value_namespace = name_space;
        attach_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::Configuration::Ipv6::Dhcp::Guard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attach-policy")
    {
        attach_policy.yfilter = yfilter;
    }
}

bool Native::Vlan::Configuration::Ipv6::Dhcp::Guard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attach-policy")
        return true;
    return false;
}

Native::Vlan::Filter::Filter()
    :
    word{YType::str, "word"},
    vlan_list{YType::str, "vlan-list"}
{

    yang_name = "filter"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vlan::Filter::~Filter()
{
}

bool Native::Vlan::Filter::has_data() const
{
    return word.is_set
	|| vlan_list.is_set;
}

bool Native::Vlan::Filter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| ydk::is_set(vlan_list.yfilter);
}

std::string Native::Vlan::Filter::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vlan::Filter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:filter" <<"[word='" <<word <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Filter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());
    if (vlan_list.is_set || is_set(vlan_list.yfilter)) leaf_name_data.push_back(vlan_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::Filter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Filter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Vlan::Filter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-list")
    {
        vlan_list = value;
        vlan_list.value_namespace = name_space;
        vlan_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::Filter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
    if(value_path == "vlan-list")
    {
        vlan_list.yfilter = yfilter;
    }
}

bool Native::Vlan::Filter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word" || name == "vlan-list")
        return true;
    return false;
}

Native::Vlan::Accounting::Accounting()
    :
    input{YType::empty, "input"},
    output{YType::empty, "output"}
{

    yang_name = "accounting"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vlan::Accounting::~Accounting()
{
}

bool Native::Vlan::Accounting::has_data() const
{
    return input.is_set
	|| output.is_set;
}

bool Native::Vlan::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(input.yfilter)
	|| ydk::is_set(output.yfilter);
}

std::string Native::Vlan::Accounting::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vlan::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (input.is_set || is_set(input.yfilter)) leaf_name_data.push_back(input.get_name_leafdata());
    if (output.is_set || is_set(output.yfilter)) leaf_name_data.push_back(output.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Vlan::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "input")
    {
        input = value;
        input.value_namespace = name_space;
        input.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output")
    {
        output = value;
        output.value_namespace = name_space;
        output.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "input")
    {
        input.yfilter = yfilter;
    }
    if(value_path == "output")
    {
        output.yfilter = yfilter;
    }
}

bool Native::Vlan::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "input" || name == "output")
        return true;
    return false;
}

Native::Vlan::Internal::Internal()
    :
    allocation(std::make_shared<Native::Vlan::Internal::Allocation>())
{
    allocation->parent = this;

    yang_name = "internal"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vlan::Internal::~Internal()
{
}

bool Native::Vlan::Internal::has_data() const
{
    return (allocation !=  nullptr && allocation->has_data());
}

bool Native::Vlan::Internal::has_operation() const
{
    return is_set(yfilter)
	|| (allocation !=  nullptr && allocation->has_operation());
}

std::string Native::Vlan::Internal::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vlan::Internal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:internal";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Internal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::Internal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allocation")
    {
        if(allocation == nullptr)
        {
            allocation = std::make_shared<Native::Vlan::Internal::Allocation>();
        }
        return allocation;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Internal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(allocation != nullptr)
    {
        children["allocation"] = allocation;
    }

    return children;
}

void Native::Vlan::Internal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vlan::Internal::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vlan::Internal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allocation")
        return true;
    return false;
}

Native::Vlan::Internal::Allocation::Allocation()
    :
    policy{YType::enumeration, "policy"}
{

    yang_name = "allocation"; yang_parent_name = "internal"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vlan::Internal::Allocation::~Allocation()
{
}

bool Native::Vlan::Internal::Allocation::has_data() const
{
    return policy.is_set;
}

bool Native::Vlan::Internal::Allocation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy.yfilter);
}

std::string Native::Vlan::Internal::Allocation::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vlan/Cisco-IOS-XE-vlan:internal/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vlan::Internal::Allocation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allocation";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Internal::Allocation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::Internal::Allocation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Internal::Allocation::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Vlan::Internal::Allocation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::Internal::Allocation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
}

bool Native::Vlan::Internal::Allocation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy")
        return true;
    return false;
}

Native::Vlan::Dot1Q::Dot1Q()
    :
    tag(std::make_shared<Native::Vlan::Dot1Q::Tag>())
{
    tag->parent = this;

    yang_name = "dot1q"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vlan::Dot1Q::~Dot1Q()
{
}

bool Native::Vlan::Dot1Q::has_data() const
{
    return (tag !=  nullptr && tag->has_data());
}

bool Native::Vlan::Dot1Q::has_operation() const
{
    return is_set(yfilter)
	|| (tag !=  nullptr && tag->has_operation());
}

std::string Native::Vlan::Dot1Q::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vlan::Dot1Q::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:dot1q";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Dot1Q::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::Dot1Q::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tag")
    {
        if(tag == nullptr)
        {
            tag = std::make_shared<Native::Vlan::Dot1Q::Tag>();
        }
        return tag;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Dot1Q::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tag != nullptr)
    {
        children["tag"] = tag;
    }

    return children;
}

void Native::Vlan::Dot1Q::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Vlan::Dot1Q::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Vlan::Dot1Q::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::Vlan::Dot1Q::Tag::Tag()
    :
    native{YType::empty, "native"}
{

    yang_name = "tag"; yang_parent_name = "dot1q"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vlan::Dot1Q::Tag::~Tag()
{
}

bool Native::Vlan::Dot1Q::Tag::has_data() const
{
    return native.is_set;
}

bool Native::Vlan::Dot1Q::Tag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(native.yfilter);
}

std::string Native::Vlan::Dot1Q::Tag::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vlan/Cisco-IOS-XE-vlan:dot1q/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vlan::Dot1Q::Tag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tag";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Dot1Q::Tag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (native.is_set || is_set(native.yfilter)) leaf_name_data.push_back(native.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::Dot1Q::Tag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Dot1Q::Tag::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Vlan::Dot1Q::Tag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "native")
    {
        native = value;
        native.value_namespace = name_space;
        native.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::Dot1Q::Tag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "native")
    {
        native.yfilter = yfilter;
    }
}

bool Native::Vlan::Dot1Q::Tag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "native")
        return true;
    return false;
}

Native::Vlan::AccessLog::AccessLog()
    :
    maxflow{YType::uint16, "maxflow"},
    ratelimit{YType::uint16, "ratelimit"},
    threshold{YType::uint32, "threshold"}
{

    yang_name = "access-log"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vlan::AccessLog::~AccessLog()
{
}

bool Native::Vlan::AccessLog::has_data() const
{
    return maxflow.is_set
	|| ratelimit.is_set
	|| threshold.is_set;
}

bool Native::Vlan::AccessLog::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(maxflow.yfilter)
	|| ydk::is_set(ratelimit.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Vlan::AccessLog::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vlan::AccessLog::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:access-log";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::AccessLog::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maxflow.is_set || is_set(maxflow.yfilter)) leaf_name_data.push_back(maxflow.get_name_leafdata());
    if (ratelimit.is_set || is_set(ratelimit.yfilter)) leaf_name_data.push_back(ratelimit.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::AccessLog::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::AccessLog::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Vlan::AccessLog::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "maxflow")
    {
        maxflow = value;
        maxflow.value_namespace = name_space;
        maxflow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ratelimit")
    {
        ratelimit = value;
        ratelimit.value_namespace = name_space;
        ratelimit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::AccessLog::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "maxflow")
    {
        maxflow.yfilter = yfilter;
    }
    if(value_path == "ratelimit")
    {
        ratelimit.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Vlan::AccessLog::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "maxflow" || name == "ratelimit" || name == "threshold")
        return true;
    return false;
}

Native::Vlan::Group::Group()
    :
    name{YType::str, "name"}
{

    yang_name = "group"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vlan::Group::~Group()
{
}

bool Native::Vlan::Group::has_data() const
{
    for (std::size_t index=0; index<vlan_list.size(); index++)
    {
        if(vlan_list[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Vlan::Group::has_operation() const
{
    for (std::size_t index=0; index<vlan_list.size(); index++)
    {
        if(vlan_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Vlan::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vlan::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:group" <<"[name='" <<name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan-list")
    {
        auto c = std::make_shared<Native::Vlan::Group::VlanList>();
        c->parent = this;
        vlan_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto const & c : vlan_list)
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Native::Vlan::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Vlan::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-list" || name == "name")
        return true;
    return false;
}

Native::Vlan::Group::VlanList::VlanList()
    :
    vlan_id{YType::str, "vlan-id"}
{

    yang_name = "vlan-list"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Vlan::Group::VlanList::~VlanList()
{
}

bool Native::Vlan::Group::VlanList::has_data() const
{
    return vlan_id.is_set;
}

bool Native::Vlan::Group::VlanList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vlan_id.yfilter);
}

std::string Native::Vlan::Group::VlanList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-list" <<"[vlan-id='" <<vlan_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::Group::VlanList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vlan_id.is_set || is_set(vlan_id.yfilter)) leaf_name_data.push_back(vlan_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::Group::VlanList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::Group::VlanList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Native::Vlan::Group::VlanList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vlan-id")
    {
        vlan_id = value;
        vlan_id.value_namespace = name_space;
        vlan_id.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::Group::VlanList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vlan-id")
    {
        vlan_id.yfilter = yfilter;
    }
}

bool Native::Vlan::Group::VlanList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan-id")
        return true;
    return false;
}

Native::Vlan::VlanList::VlanList()
    :
    id{YType::str, "id"},
    remote_span{YType::empty, "remote-span"},
    name{YType::str, "name"},
    state{YType::enumeration, "state"},
    uni_vlan{YType::enumeration, "uni-vlan"}
    	,
    private_vlan(std::make_shared<Native::Vlan::VlanList::PrivateVlan>())
	,lldp(std::make_shared<Native::Vlan::VlanList::Lldp>())
{
    private_vlan->parent = this;
    lldp->parent = this;

    yang_name = "vlan-list"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false;
}

Native::Vlan::VlanList::~VlanList()
{
}

bool Native::Vlan::VlanList::has_data() const
{
    return id.is_set
	|| remote_span.is_set
	|| name.is_set
	|| state.is_set
	|| uni_vlan.is_set
	|| (private_vlan !=  nullptr && private_vlan->has_data())
	|| (lldp !=  nullptr && lldp->has_data());
}

bool Native::Vlan::VlanList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(remote_span.yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(uni_vlan.yfilter)
	|| (private_vlan !=  nullptr && private_vlan->has_operation())
	|| (lldp !=  nullptr && lldp->has_operation());
}

std::string Native::Vlan::VlanList::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-native:native/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string Native::Vlan::VlanList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:vlan-list" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Vlan::VlanList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (remote_span.is_set || is_set(remote_span.yfilter)) leaf_name_data.push_back(remote_span.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (uni_vlan.is_set || is_set(uni_vlan.yfilter)) leaf_name_data.push_back(uni_vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Vlan::VlanList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "private-vlan")
    {
        if(private_vlan == nullptr)
        {
            private_vlan = std::make_shared<Native::Vlan::VlanList::PrivateVlan>();
        }
        return private_vlan;
    }

    if(child_yang_name == "lldp")
    {
        if(lldp == nullptr)
        {
            lldp = std::make_shared<Native::Vlan::VlanList::Lldp>();
        }
        return lldp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Vlan::VlanList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(private_vlan != nullptr)
    {
        children["private-vlan"] = private_vlan;
    }

    if(lldp != nullptr)
    {
        children["lldp"] = lldp;
    }

    return children;
}

void Native::Vlan::VlanList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-span")
    {
        remote_span = value;
        remote_span.value_namespace = name_space;
        remote_span.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uni-vlan")
    {
        uni_vlan = value;
        uni_vlan.value_namespace = name_space;
        uni_vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Vlan::VlanList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "remote-span")
    {
        remote_span.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "uni-vlan")
    {
        uni_vlan.yfilter = yfilter;
    }
}

bool Native::Vlan::VlanList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "private-vlan" || name == "lldp" || name == "id" || name == "remote-span" || name == "name" || name == "state" || name == "uni-vlan")
        return true;
    return false;
}

const Enum::YLeaf Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::IsisLevelRoutes::level_1 {0, "level-1"};
const Enum::YLeaf Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::IsisLevelRoutes::level_2 {1, "level-2"};
const Enum::YLeaf Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::IsisArea::RipIsisRedist::IsisLevelRoutes::level_1_2 {2, "level-1-2"};

const Enum::YLeaf Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::IsisLevelRoutes::level_1 {0, "level-1"};
const Enum::YLeaf Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::IsisLevelRoutes::level_2 {1, "level-2"};
const Enum::YLeaf Native::Ipv6::Router::Rip::AddressFamily::Ipv6_::Vrf::Redistribute::Isis::RipIsisRedist::IsisLevelRoutes::level_1_2 {2, "level-1-2"};

const Enum::YLeaf Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::IsisLevelRoutes::level_1 {0, "level-1"};
const Enum::YLeaf Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::IsisLevelRoutes::level_2 {1, "level-2"};
const Enum::YLeaf Native::Ipv6::Router::Rip::Redistribute::Isis::IsisArea::RipIsisRedist::IsisLevelRoutes::level_1_2 {2, "level-1-2"};

const Enum::YLeaf Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::IsisLevelRoutes::level_1 {0, "level-1"};
const Enum::YLeaf Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::IsisLevelRoutes::level_2 {1, "level-2"};
const Enum::YLeaf Native::Ipv6::Router::Rip::Redistribute::Isis::RipIsisRedist::IsisLevelRoutes::level_1_2 {2, "level-1-2"};

const Enum::YLeaf Native::Ipv6::Spd::Mode::aggressive {0, "aggressive"};

const Enum::YLeaf Native::Ipv6::Rip::VrfMode::enable {0, "enable"};

const Enum::YLeaf Native::Vlan::AccessMap::Action::drop {0, "drop"};
const Enum::YLeaf Native::Vlan::AccessMap::Action::forward {1, "forward"};

const Enum::YLeaf Native::Vlan::Internal::Allocation::Policy::ascending {0, "ascending"};
const Enum::YLeaf Native::Vlan::Internal::Allocation::Policy::descending {1, "descending"};

const Enum::YLeaf Native::Vlan::VlanList::State::active {0, "active"};
const Enum::YLeaf Native::Vlan::VlanList::State::suspend {1, "suspend"};

const Enum::YLeaf Native::Vlan::VlanList::UniVlan::community {0, "community"};
const Enum::YLeaf Native::Vlan::VlanList::UniVlan::isolated {1, "isolated"};


}
}

